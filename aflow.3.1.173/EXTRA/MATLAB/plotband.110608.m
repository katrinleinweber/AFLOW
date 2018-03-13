%script to plot band structures
%the following files must reside in the directory
%  DOSCAR.static.bz2
%  POSCAR.bands
%  EIGENVAL.bands
%  KPOINTS.bands
%  aflow.in (if not, LS need to be set manually)
%set the ddir variable below to set the working directory
%
% 2011 - wahyu@alumni.duke.edu

%-----TO SET-------------------------
LS=false; %if LSCOUPLING=ON in aflow.in, it will be used to turn on LS in this script.
%ddir='./'; %working directory WAHYU
ddir='MATLAB_FUNCS_DIRECTORY'; %working directory AFLOW
%ytop and ybot will be determined dynamically based on Egap of DOS
%ytop=1.5; %12;   %max energy in band structure plot
%ybot=-1.5; %-10;  %min energy in band structure plot
mode='c';  %'c'=cartesian (unit of kpoint segment is absolute)
           %'d'=direct (unit of kpoint segment is fractional of k-lattices)
scaleDOS=1.0; % zoom-in factor to rescale the plot 
DOSscalemode='DOS_SCALE_MODE';%for aflow
%DOSscalemode='normal';
%DOSscalemode='log';
%-------------graphic parameters *****************
FONTDIM=16;
FONTDIMsmall=14;
FONTDIMbig=18;
COLOR=[0 0 0];
LINEWIDTH=1.2;
MARKERSIZE=25;
PAPERPOSITION=[1 1 5 4]; % old for printing papers
PAPERPOSITION=0.80*[0 0 18 9]; % standard ratio is 16/9;
PAPERSIZE=[8.5 11];
POSITION=[420 540 560 420]; % video
AXISWIDTH=1;
AXISPOSITION=[0.136646 0.164179 0.774845 0.74678];
VERBOSE=1; 
%-------- getting LS from aflow.in -------------
if(LS==false)
[pin,msg]=fopen([ddir 'aflow.in'],'r');
if(pin==-1) disp(msg)
else
 while(~feof(pin))
  sline=fgetl(pin);
  icomment=strfind(sline,'#');
  sLS=strfind(sline,'LSCOUPLING=ON');
  if(length(sLS)>0)
    if(length(icomment)<1) LS=true; break; 
    else if(sLS<icomment(1)) LS=true; break; end
    end
  end
  sLS=strfind(sline,'LSCOUPLING =ON');
  if(length(sLS)>0)
    if(length(icomment)<1) LS=true; break;
    else if(sLS<icomment(1)) LS=true; break; end
    end
  end
  sLS=strfind(sline,'LSCOUPLING= ON');
  if(length(sLS)>0)
    if(length(icomment)<1) LS=true; break;
    else if(sLS<icomment(1)) LS=true; break; end
    end
  end
  sLS=strfind(sline,'LSCOUPLING = ON');
  if(length(sLS)>0)
    if(length(icomment)<1) LS=true; break;
    else if(sLS<icomment(1)) LS=true; break; end
    end
  end
 end
end
end
%---------------------------------------
% POSCAR.bands
%---------------------------------------
%calculating recip. lattice vectors b1 b2 b3 from POSCAR
pin=fopen([ddir 'POSCAR.bands'],'r');tmp=fgetl(pin);
LattConst=fscanf(pin,'%f',1); tmp=fgetl(pin);
a1(1:3)=fscanf(pin,'%f',3); tmp=fgetl(pin);
a2(1:3)=fscanf(pin,'%f',3); tmp=fgetl(pin);
a3(1:3)=fscanf(pin,'%f',3); tmp=fgetl(pin);
a1=a1*LattConst; a2=a2*LattConst; a3=a3*LattConst;
VCell=dot(cross(a2,a3),a1);
b1=2*pi*cross(a2,a3)/VCell; b2=2*pi*cross(a3,a1)/VCell; b3=2*pi*cross(a1,a2)/VCell;
%getting species and the number of species
tmp=fgetl(pin);
[species,Nspec]=sscanf(tmp,'%d');
fclose(pin);
%---------------------------------------
% DOSCAR.static
%---------------------------------------
%getting compound name
if (fopen([ddir 'DOSCAR.static.bz2'],'r')'>0')
   system('bzcat DOSCAR.static.bz2 > DOSCAR.static.tmp');
end
if (fopen([ddir 'DOSCAR.static'],'r')'>0')
   system('cat DOSCAR.static > DOSCAR.static.tmp');
end

din=fopen([ddir 'DOSCAR.static.tmp'],'r');
tmp=fgetl(din); tmp=fgetl(din); tmp=fgetl(din); tmp=fgetl(din);
name2=fscanf(din,'%s',1); tmp=fgetl(din);
ii=0;name=name2;
funderscore=false;
for i=1:length(name2)
    if(name2(i)>'0' && name2(i)<'9' && ~funderscore)
        ii=ii+1; name(ii)='_';
        ii=ii+1; name(ii)=name2(i);
    elseif(name2(i)=='_')
        funderscore=true;
        ii=ii+1; name(ii)=' ';
    else
        ii=ii+1; name(ii)=name2(i);
    end    
end
%getting EFdos, cbmdos and vbmdos
Emax=fscanf(din,'%f',1);Emin=fscanf(din,'%f',1);
NgridDOS=fscanf(din,'%d',1);EFdos=fscanf(din,'%f',1); tmp=fgetl(din);
Egrid=(Emax-Emin)/NgridDOS;
tol=5e-3;
delE=1e6;delEE=delE;
E=zeros(NgridDOS,1);
D=zeros(NgridDOS,1);
tmp=fgetl(din);
[tmpV,count]=sscanf(tmp,'%f'); %getting ispin
ispin=(count-1)/2;             %getting ispin
isMetal=false;
iclosest=1;
E(1)=tmpV(1);  D(1)=tmpV(2);
for i=2:NgridDOS
    E(i)=fscanf(din,'%f',1); D(i)=fscanf(din,'%f',1); tmp=fgetl(din);
end
tmp=fgetl(din);tmp=fgetl(din); %getting Norb
[tmpV,count]=sscanf(tmp,'%f'); %getting Norb
if(LS)
  Norb=(count-1)/4;            %getting Norb
else
  Norb=(count-1)/ispin;        %getting Norb
end
switch Norb
    case 1
        orbital='s';
    case 2
        orbital='s p';
    case 3
        orbital='s p d';
    case 4
        orbital='s p d f';
end
for i=1:NgridDOS
    if(abs(EFdos-E(i))<Egrid)
        if(D(i)>tol && D(i+1)>tol) isMetal=true; break; %metal
        end
    end
end
for i=1:NgridDOS
    Etmp=E(i); Dtmp=D(i);
    if(Dtmp<tol) delEE=abs(EFdos-Etmp);
    end
    if(delEE<delE) iclosest=i; delE=delEE;
    end
end
for i=iclosest-1:-1:1
  if(D(i)>tol) break;
  end
end
vbmdos=E(i);
for i=iclosest+1:NgridDOS
  if(D(i)>tol) break;
  end
end
cbmdos=E(i);
if(isMetal)
    cbmdos=EFdos; vbmdos=EFdos;
end
fclose(din);
%automatic scaling for y-axis in band plot based on Egap of DOS
%note that the actual gap should be determined from EIGENVAL due to
%the smearing of DOS, however, it is good enough for plotting purposes
EgDOS=cbmdos-vbmdos;
ytop=EgDOS+log(2*EgDOS+1)+3;
ybot=-3*log(2*EgDOS+1)-3;
%---------------------------------------
% KPOINTS.bands
%---------------------------------------
kin=fopen([ddir 'KPOINTS.bands'],'r');
latt_type=fscanf(kin,'%s',1); tmp=fgetl(kin);
disp(['LATTICE ' latt_type]);
%getting Ngrid per segment in band structure
Ngrid=fscanf(kin,'%d',1); tmp=fgetl(kin);
%-----getting automatic klabel (aklabel) ------
  NSEGMAX=50;
  ksegdirect=zeros(NSEGMAX,4);
  sline=fgetl(kin);
  sline=fgetl(kin);
  i=0;
  aklabel='';
  while(~feof(kin))
    sline=fgetl(kin);sline2=sline;
    [ftmp,count]=sscanf(sline,'%s');
    if(count>3)
      i=i+1;
      for j=1:length(ftmp)
	    if(ftmp(j)=='!') s=ftmp(j+1:length(ftmp)); end
      end
      if(strcmp(s,'Gamma') || strcmp(s,'gamma') || strcmp(s,'G')) s='\Gamma'; end
      %---The following line MUST be after the Gamma line above
      if(strcmp(s,'Gg') || strcmp(s,'GG')) s='G'; end
      if(strcmp(s,'Sigma') || strcmp(s,'sigma') || strcmp(s,'Sg') || strcmp(s,'sg')) s='\Sigma'; end
      if(i>1)
	    if(mod(i,2)==0)
          if(~strcmp(s,sb)) aklabel=strcat(aklabel,'-',s); end
        end
	    if(mod(i,2)==1)
	      if(~strcmp(s,sb)) aklabel=strcat(aklabel,'|',s); end
        end
      else aklabel=strcat(aklabel,s);
      end
      sb=s;
      ftmp=sscanf(sline2,'%f',3);
      ksegdirect(i,1)=ftmp(1);
      ksegdirect(i,2)=ftmp(2);
      ksegdirect(i,3)=ftmp(3);
    end
  end
  Nseg=i/2;
  Nk=Nseg*Ngrid;
  %constructing klinedirect from the norm of kpoints cascaded for continuous plot
  klinedirect=zeros(Nk,1);
  koffset=0; ind=1;
  for iseg=1:Nseg
    i = 2*iseg-1;
    kx1=ksegdirect(i,1);    ky1=ksegdirect(i,2);    kz1=ksegdirect(i,3);
    kx2=ksegdirect(i+1,1);  ky2=ksegdirect(i+1,2);  kz2=ksegdirect(i+1,3);
    dkx = kx2-kx1;
    dky = ky2-ky1;
    dkz = kz2-kz1;
    dk = (sqrt(dkx*dkx + dky*dky + dkz*dkz))/(Ngrid-1);
    klinedirect(ind)=koffset; ind=ind+1;
    for j=2:Ngrid
      klinedirect(ind) = koffset+(j-1)*dk; ind=ind+1;
    end
    koffset = koffset+dk*(Ngrid-1);
  end
  fclose(kin);
%---creating up and dw to store eigenvalues
%up=[Nseg*Ngrid,Nband]
%-------------------------------
% EIGENVAL.bands
%-------------------------------
  ein=fopen('EIGENVAL.bands','r');
  sline=fgetl(ein);sline=fgetl(ein);sline=fgetl(ein);
  sline=fgetl(ein);sline=fgetl(ein);
  itmp=fscanf(ein,'%d',1); itmp=fscanf(ein,'%d',1); 
  Nband=fscanf(ein,'%d',1);  sline=fgetl(ein);
  up=zeros(Nk,Nband);
  if(ispin==2) dw=up; end
  for i=1:Nk
    ftmp=fscanf(ein,'%f',1); ftmp=fscanf(ein,'%f',1);
    ftmp=fscanf(ein,'%f',1); ftmp=fscanf(ein,'%f',1);
    for j=1:Nband
      ftmp=fscanf(ein,'%f',1);  
      ftmp=fscanf(ein,'%f',1);  
	  up(i,j)=ftmp;
      if(ispin==2) 
	    ftmp=fscanf(ein,'%f',1);
		dw(i,j)=ftmp;
      end
    end
  end
  fclose(ein);
%------------------------------
%finding max valence band
if(isMetal) maxEv=EFdos;
else
 maxEv=EFdos-1000;
 for i=1:Nband
  testband=up(:,i);
  maxtest=max(testband);
  if(maxtest>maxEv && maxtest<EFdos) maxEv=maxtest; end
 end
 if(ispin==2)
 for i=1:Nband
  testband=dw(:,i);
  maxtest=max(testband);
  if(maxtest>maxEv && maxtest<EFdos) maxEv=maxtest; end
 end
 end
end
%finding the vbmin
tolDeg=0.026; %energy tolerance for degeneracy
if(isMetal) vbmin=ybot;
else
 vbmin=maxEv; %initialization
 if(ispin==1)
  for ib=Nband:-1:2
    testbandup=up(1:Nk,ib);
	maxup=max(testbandup);
	if(maxup-vbmin > (-tolDeg))
	  vbminup=min(testbandup);
          if(vbminup<vbmin) vbmin=vbminup; end
	end
  end
 end
 if(ispin==2)
  for ib=Nband:-1:2
    testbandup=up(1:Nk,ib);
	maxup=max(testbandup);
    flagupcont=false;
	if(maxup-vbmin > (-tolDeg))
	  flagupcont = true;
	  vbminup=min(testbandup);
	  if(vbminup<vbmin) vbmin=vbminup; end
	end
    testbanddw=dw(1:Nk,ib);
	maxdw=max(testbanddw);
    flagdwcont=false;
	if(maxdw-vbmin > (-tolDeg))
	  flagdwcont = true;
	  vbmindw=min(testbanddw);
	  if(vbmindw<vbmin) vbmin=vbmindw; end
	end
	if(flagupcont==false && flagdwcont==false) break; end
  end
 end
end%if(isMetal==false)
%---------------------------------------
%calculating the boundary k(s) for each segment in cartesian coordinate
for iseg=1:Nseg*2
  dummy=ksegdirect(iseg,1:3);
  dummy=dummy(1)*b1+dummy(2)*b2+dummy(3)*b3;
  ksegcart(iseg,1:3)=dummy;
end
klinecart=zeros(Nk,1);
kposxdirect=zeros(Nseg,1);
kposxcart=zeros(Nseg,1);
tnormcart=norm(ksegcart(1,1:3));
for iseg=1:Nseg
  ka=ksegdirect(2*iseg-1,1:3);     kb=ksegdirect(2*iseg,1:3);
  kposxdirect(iseg+1)=kposxdirect(iseg)+norm(kb-ka);
  ka=ksegcart(2*iseg-1,1:3);     kb=ksegcart(2*iseg,1:3);
  kposxcart(iseg+1)=kposxcart(iseg)+norm(kb-ka);
  klinecart((iseg-1)*Ngrid+1:iseg*Ngrid)=kposxcart(iseg)+linspace(0,norm(kb-ka),Ngrid);
end
k=klinecart;
kposx=kposxcart;
if(mode=='d')
  k=klinedirect;
  kposx=kposxdirect;
end
%---------------------------------------
% PLOT   PLOT   PLOT
%---------------------------------------
iplot=1;
if(iplot)
H_FIGURE=figure(1);clf;
set(H_FIGURE,'PaperUnits','inches');
set(H_FIGURE,'PaperOrientation','portrait');
set(H_FIGURE,'PaperPosition',PAPERPOSITION); % left top width height
set(H_FIGURE,'PaperSize',PAPERSIZE);
set(H_FIGURE,'PaperType','usletter');
set(H_FIGURE,'Position',POSITION);

axorig=[0.13 0.11 0.775 0.815]; 
ax1=axes('position',[0.1 0.1 0.59 0.8]);
set(gca,'fontsize',16);
set(gca,'linewidth',0.8);
for i=1:Nband
	hold on; plot(k,up(:,i)-maxEv,'k','linewidth',0.8);
end
if(ispin==2)
for i=1:Nband
	hold on; plot(k,dw(:,i)-maxEv,'k','linewidth',0.8);
end
end
plot([min(k) max(k)],[0 0],'g:','linewidth',0.8);   % STEFANO EF 
drawnow;
axis([0 max(k) ybot ytop]);
box on;
ylabel('E (eV)','fontsize',18);
klabel=aklabel;  %aklabel is automatic label read from KPOINTS
disp(['KLABEL ' klabel]);

iLbot=1; iLtop=1;
for i=1:Nseg+1
    if(i==1) iLbot=0; end
    fLtop=0;
    for iL=iLbot+1:length(klabel)
        if(klabel(iL)=='-')
            fLtop=1;
            iLtop=iL;
            break;
        end
    end
    if(i==Nseg+1) iLtop=length(klabel)+1; end
    kklabel=klabel(iLbot+1:iLtop-1);
    iLbot=iLtop;
    text(kposx(i)-(max(k)-min(k))*0.015,ybot-(ytop-ybot)*0.035,kklabel,'fontsize',18);
end
title([name ' (' latt_type ')'],'fontsize',18);
set(gca,'xtick',[-10 max(kposx)+10]);
for i=2:length(kposx)-1
    hold on; plot([kposx(i) kposx(i)],[ybot ytop],'k--','linewidth',0.8);
end
end%if (iplot)
%------------------------------------
%Reading orbital-projected DOS
%------------------------------------
DO_S=false;
DO_P=false;
DO_D=false;
DO_F=false;
if(Norb>=1) DO_S=true; end
if(Norb>=2) DO_P=true; end
if(Norb>=3) DO_D=true; end
if(Norb>=4) DO_F=true; end
din=fopen('DOSCAR.static.tmp','r');
sline=fgetl(din); sline=fgetl(din); sline=fgetl(din);
sline=fgetl(din); sline=fgetl(din); 
maxE=fscanf(din,'%f',1);
minE=fscanf(din,'%f',1);
nE=fscanf(din,'%d',1); sline=fgetl(din);  
%//energy loop for DOS
%//only DOS will be considered and written out because the Integrated DOS
%//can be calculated from DOS and energy bins
if(LS) Ncol=1+1+Norb*Nspec;
else Ncol=1+(1+Norb*Nspec)*ispin;
end
EDOS=zeros(nE,Ncol);
for i=1:nE
   EDOS(i,1)=fscanf(din,'%f',1);%E
   EDOS(i,2)=fscanf(din,'%f',1);%total DOS or total DOS_up
   if(ispin==2) EDOS(i,3)=-fscanf(din,'%f',1); end%total DOS_dw
   sline=fgetl(din);
end
%//energy loop for DOS for s,p,d,f
%//sum over all atoms of the same specie
%//format  E dos s s s p p p d d d f f f
%//if ispin=2 (spin on), each dos or s,p,d,f will be: up -down
if(LS)
 ioffset=0;
 for i=1:Nspec
  for j=1:species(i)
    sline=fgetl(din);
    for k=1:nE
      ftmp=fscanf(din,'%f',1);%discard energy
        for iorb=1:Norb
          ftmp=fscanf(din,'%f',1); 
          ioffset=(iorb-1)*Nspec;
          EDOS(k,ioffset+2+i)=EDOS(k,ioffset+2+i)+ftmp;
          ftmp=fscanf(din,'%f',1); %discard x component
          ftmp=fscanf(din,'%f',1); %discard y component
          ftmp=fscanf(din,'%f',1); %discard z component
        end
        sline=fgetl(din);
    end
  end
 end
else
 ioffset=0;
 for i=1:Nspec
  for j=1:species(i)
    sline=fgetl(din);
    for k=1:nE
      ftmp=fscanf(din,'%f',1);%discard energy
      if(ispin==1)
        for iorb=1:Norb
          ftmp=fscanf(din,'%f',1); 
          ioffset=(iorb-1)*Nspec*ispin;
          EDOS(k,ioffset+2+i)=EDOS(k,ioffset+2+i)+ftmp;
        end
        sline=fgetl(din);
      end
      if(ispin==2)
        for iorb=1:Norb
          ftmp=fscanf(din,'%f',1);
          ioffset=(iorb-1)*Nspec*ispin;
          EDOS(k,ioffset+4+(i-1)*ispin)=EDOS(k,ioffset+4+(i-1)*ispin)+ftmp;%//up
          ftmp=fscanf(din,'%f',1);
          EDOS(k,ioffset+4+(i-1)*ispin+1)=EDOS(k,ioffset+4+(i-1)*ispin+1)-ftmp;%//-down
        end
        sline=fgetl(din);
      end
    end
  end
 end
end
fclose(din);
system('rm -f DOSCAR.static.tmp');
%------------------------------------
%finding the appropriate scaling for DOS plotting
istop=size(EDOS,2);
istart=3;
if(ispin==2) istart=istart+1; end
xdosmax=0;
for i=1:nE
    if(EDOS(i,1)>vbmin && EDOS(i,1)<maxEv)
        linetmp=abs(EDOS(i,istart:istop));
        maxtmp=max(linetmp);
        if(maxtmp>xdosmax) xdosmax=maxtmp; end
    end
end
xdosmax=xdosmax*ispin; %since we will plot the total DOS up+down.
%------------------------------------
DOSup=EDOS(:,2);
DOSdw=zeros(nE,1);
ic=2;
if(ispin==2) ic=ic+1; DOSdw=EDOS(:,ic); end
%----------S-------
ic=ic+1;
Sup=0;Sdown=0;
if(ispin==1)
  for ispec=1:Nspec 
    Sup=Sup+EDOS(:,ic+(ispec-1)); 
  end
end
if(ispin==2)
  for ispec=1:Nspec
    Sup=Sup+EDOS(:,ic+(ispec-1)*2);
    Sdown=Sdown+EDOS(:,ic+(ispec-1)*2+1);
  end
end
ic=ic+Nspec*(ispin);
%---------P--------
Pup=0; Pdown=0;
if(Norb>1)
  if(ispin==1)
    for ispec=1:Nspec
      Pup=Pup+EDOS(:,ic+(ispec-1));
    end
  end
  if(ispin==2)
    for ispec=1:Nspec
      Pup=Pup+EDOS(:,ic+(ispec-1)*2);
      Pdown=Pdown+EDOS(:,ic+(ispec-1)*2+1);
    end
  end
  ic=ic+Nspec*(ispin);
end
%----------D---------
Dup=0; Ddown=0;
if(Norb>2)
  if(ispin==1)
    for ispec=1:Nspec
      Dup=Dup+EDOS(:,ic+(ispec-1));
    end
  end
  if(ispin==2)
    for ispec=1:Nspec
      Dup=Dup+EDOS(:,ic+(ispec-1)*2);
      Ddown=Ddown+EDOS(:,ic+(ispec-1)*2+1);
    end
  end
  ic=ic+Nspec*(ispin);
end
%----------F---------
Fup=0; Fdown=0;
if(Norb==4)
  if(ispin==1)
  for ispec=1:Nspec
    Fup=Fup+EDOS(:,ic+(ispec-1));
    end
  end
  if(ispin==2)
    for ispec=1:Nspec
      Fup=Fup+EDOS(:,ic+(ispec-1)*2);
      Fdown=Fdown+EDOS(:,ic+(ispec-1)*2+1);
    end
  end
  ic=ic+Nspec*(ispin);
end

iplot=true;
if(iplot)
ax2=axes('position',[0.7 0.1 0.2 0.8]);
set(gca,'fontsize',16);
set(gca,'linewidth',0.8);

switch Norb
 case 1
   if(strcmp(DOSscalemode,'log'))
     semilogx((Sup-Sdown),EDOS(:,1)-maxEv,'k:','linewidth',1.2);
   end
   if(strcmp(DOSscalemode,'normal'))
     plot((Sup-Sdown),EDOS(:,1)-maxEv,'k:','linewidth',1.2);
   end
   legend('s');
 case 2
   if(strcmp(DOSscalemode,'log'))
     semilogx((Sup-Sdown),EDOS(:,1)-maxEv,'k:','linewidth',1.2);
     hold on;semilogx((Pup-Pdown),EDOS(:,1)-maxEv,'b-.','linewidth',0.8);
   end
   if(strcmp(DOSscalemode,'normal'))
     plot((Sup-Sdown),EDOS(:,1)-maxEv,'k:','linewidth',1.2);
     hold on;plot((Pup-Pdown),EDOS(:,1)-maxEv,'b-.','linewidth',0.8);
   end
   drawnow;
   legend('s','p');
 case 3
   if(strcmp(DOSscalemode,'log'))
     semilogx((Sup-Sdown),EDOS(:,1)-maxEv,'k:','linewidth',1.2);
     hold on;semilogx((Pup-Pdown),EDOS(:,1)-maxEv,'b-.','linewidth',0.8);
     hold on;semilogx((Dup-Ddown),EDOS(:,1)-maxEv,'r--','linewidth',0.8);
   end
   if(strcmp(DOSscalemode,'normal'))
     plot((Sup-Sdown),EDOS(:,1)-maxEv,'k:','linewidth',1.2);
     hold on;plot((Pup-Pdown),EDOS(:,1)-maxEv,'b-.','linewidth',0.8);
     hold on;plot((Dup-Ddown),EDOS(:,1)-maxEv,'r--','linewidth',0.8);
   end
   drawnow;
   legend('s','p','d');
 case 4
   if(strcmp(DOSscalemode,'log'))
     semilogx((Sup-Sdown),EDOS(:,1)-maxEv,'k:','linewidth',1.2);
     hold on;semilogx((Pup-Pdown),EDOS(:,1)-maxEv,'b-.','linewidth',0.8);
     hold on;semilogx((Dup-Ddown),EDOS(:,1)-maxEv,'r--','linewidth',0.8);
     hold on;semilogx((Fup-Fdown),EDOS(:,1)-maxEv,'g-','linewidth',0.8);
   end
   if(strcmp(DOSscalemode,'normal'))
     plot((Sup-Sdown),EDOS(:,1)-maxEv,'k:','linewidth',1.2);
     hold on;plot((Pup-Pdown),EDOS(:,1)-maxEv,'b-.','linewidth',0.8);
     hold on;plot((Dup-Ddown),EDOS(:,1)-maxEv,'r--','linewidth',0.8);
     hold on;plot((Fup-Fdown),EDOS(:,1)-maxEv,'g-','linewidth',0.8);
   end
   drawnow;
   legend('s','p','d','f');
 otherwise
 ;
end
plot([0 xdosmax/scaleDOS],[0 0],'g:','linewidth',0.8);     % STEFANO EF
drawnow;

axis([0 xdosmax/scaleDOS ybot ytop]);
set(gca,'ytick',[ybot-10 ytop+10]);
set(gca,'xtick',[-10 xdosmax/scaleDOS+10]);
box on;
if(strcmp(DOSscalemode,'log'))
  xlabel('log(N(E))','fontsize',18);
end
if(strcmp(DOSscalemode,'normal'))
  xlabel('N(E)','fontsize',18);
end

eval(['print -depsc ' 'figband_' name2 '.eps']);
system(['convert figband_' name2 '.eps ' name2 '.jpg']);
system(['convert figband_' name2 '.eps ' name2 '.pdf']);
system(['convert figband_' name2 '.eps ' name2 '.png']);
end%if (iplot)


beep
beep
beep

exit;
