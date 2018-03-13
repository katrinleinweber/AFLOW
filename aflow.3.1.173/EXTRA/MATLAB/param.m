% param.m
% To load the default value of parameters, including:
%     graphic for plotting
%     simulation cells
%     interaction potentials
%     Xe bulk parameters
%
% 'param' should be called at the beginning of the parent script
% in order to allow values overwriting. Examples of parameters
% that might need to be overwritten:
%     c_size
%     zmax


%------------space group--------
   klabel_tri=['\Gamma-X-V-Y-\Gamma-Z-U-R-T-Z|X-U|Y-T|V-R'];
klabel_mcl=['\Gamma-B-A-Y-\Gamma-Z-D-E-C-Z|B-D|Y-C|A-E'];
klabel_mclc=['\Gamma-A-L-V-\Gamma-Y-M-A|V-Y|L-M'];
klabel_orc=['\Gamma-X-S-Y-\Gamma-Z-U-R-T-Z|X-U|Y-T|S-R'];
klabel_orcc=['\Gamma-Y-T-Z-\Gamma-S-R-Z'];
klabel_orcf=['\Gamma-Y-T-Z-\Gamma-L-Y|Z-L-T'];
klabel_orci=['\Gamma-X-T-\Gamma-R-W-S-\Gamma-W-T'];
klabel_tet=['\Gamma-X-M-\Gamma-Z-R-A-Z|X-R|M-A'];
klabel_bct=['\Gamma-X-M-\Gamma-N-P-X|\Gamma-P'];
klabel_rhl=['\Gamma-M-K-\Gamma-A-L-H-A|M-L|K-H'];
klabel_hex=['\Gamma-M-K-\Gamma-A-L-H-A|M-L|K-H'];
klabel_cub=['\Gamma-X-M-\Gamma-R-X|M-R'];
klabel_fcc=['\Gamma-X-W-K-\Gamma-L-U-X|U-W-L-K|W-\Gamma'];
klabel_bcc=['\Gamma-H-N-\Gamma-P-H|P-N'];
%----old version-----
klabels(12)=struct('data',[',\Gamma,A,M,Y,\Gamma,V,L,A,']);
for i=13:15
	klabels(i)=klabels(12);
end
klabels(25)=struct('data',[',\Gamma,X,S,Y,\Gamma,Z,U,R,T,Z|X,U|S,R|Y,T,']);
for i=26:34
	klabels(i)=klabels(25);
end
klabels(47)=struct('data',[',\Gamma,X,U,R,T,Z,\Gamma,Y,S,R,']);
for i=48:62
   klabels(i)=klabels(47);
end
klabels(99)=struct('data',[',\Gamma,X,M,\Gamma,Z,R,A,Z|X,R|M,A,']);
for i=100:106
   klabels(i)=klabels(99);
end
klabels(150)=struct('data',[',\Gamma,A,H,K,\Gamma,k,h,A,H,h,k,K,']);
klabels(152)=klabels(150);
klabels(154)=klabels(150);
klabels(160)=struct('data',[',\Gamma,L,F,\Gamma,T,F|L,T,']);
klabels(161)=klabels(160);
klabels(164)=struct('data',[',\Gamma,K,H,A,\Gamma,M,L,A,L,H,K,M,']);
klabels(165)=klabels(164);
klabels(166)=struct('data',[',\Gamma,T,f,\Gamma,L,T,']);
klabels(167)=klabels(166);
klabels(175)=struct('data',[',\Gamma,K,H,A,\Gamma,M,L,A,L,H,K,M,']);
klabels(176)=klabels(175);
klabels(216)=struct('data',[',\Gamma,X,W,K,\Gamma,L,U,X,U,W,L,']);
for i=217:219
	klabels(i)=klabels(216);
end
klabels(217)=struct('data',[',\Gamma,H,N,\Gamma,P,H,P,N,']);
for i=218:220
	klabels(i)=klabels(217);
end
klabels(221)=struct('data',[',\Gamma,X,M,\Gamma,R,X,R,M,']);
for i=222:224
  klabels(i)=klabels(221);
end
klabels(225)=struct('data',[',\Gamma,X,W,K,\Gamma,L,U,X,U,W,L,']);
for i=226:228
  klabels(i)=klabels(225);
end
klabels(229)=struct('data',[',\Gamma,H,N,\Gamma,P,H,P,N,']);
klabels(230)=klabels(229);

%-------------UNIT-----------
kB = 1.3806503e-23;
eV = 1.60217646e-19;
Navo = 6.02214179e23;
cal2eV = 2.61144768e19;
eps0 = 8.85418781e-12;
meV2K   = 11.6044;      % 1 meV = 11.6044 K
NA      = 6.0221367e23;     % Avogadro number
meV2J   = 1.60217733e-22;    % 1 meV = 1.602e-22 J
  hbar=6.626e-34/2/pi;
me=9.109e-31;
Cr2me=hbar^2/(eV*1e-20)/me;

%----------------------------
disp('LOADINGOA parameters')

     bcc=0.5*sqrt(3);
     fcc=0.5*sqrt(2);
     hcp=0.5*sqrt(2);
     dia=0.25*sqrt(2);

%******************* EAM atomic charge density from Herman ***********
% [rhoe beta re]
H=[1.639 2.798 0.74]';
He=[0.0005 25.59 4.97]';

Li=[0.038 4.813 2.67]';
Be=[0.031 7.174 2.45]';
B=[0.299 5.758 1.59]';
C=[0.932 5.473 1.24]';
N=[1.447 5.645 1.1]';
O=[0.861 5.846 1.21]';
F=[0.217 7.233 1.41]';
Ne=[0.0005 15.47 3.4]';

Na=[0.021 5.552 3.08]';
Mg=[0.001 10.03 3.89]';
Al=[0.026 7.182 2.70]';
Si=[0.072 7.171 2.25]';
P=[0.176 7.079 1.89]';
S=[0.184 6.908 1.89]';
Cl=[0.088 8.099 1.99]';
Ar=[0.0005 15.89 3.8]';

K=[0.008 6.412 3.92]';
Ca=[0.002 9.719 4.28]';
Sc=[0.058 6.053 2.7]';
Ti=[0.287 4.333 1.94]';
V=[0.394 4.025 1.78]';
Cr=[0.297 4.538 1.68]';
Mn=[0.006 8.719 3.4]';
Fe=[0.192 5.214 2.0]';
Co=[0.090 5.945 2.28]';
Ni=[0.126 5.447 2.15]';
Cu=[0.052 5.864 2.22]';
Zn=[0.0005 14.63 4.8]';
Ga=[0.018 7.257 2.8]';
Ge=[0.042 7.419 2.44]';
As=[0.110 7.365 2.1]';
Se=[0.097 7.415 2.17]';
Br=[0.046 8.561 2.28]';
Kr=[0.0005 15.57 4.0]';

Rb=[0.006 6.788 4.21]';
Sr=[0.002 9.614 4.45]';
Y=[0.037 6.593 3.0]';
Zr=[0.158 5.287 2.3]';
Nb=[0.145 5.556 2.08]';
Mo=[0.201 5.621 1.94]';
Tc=[0.365 4.968 1.88]';
Ru=[0.047 6.360 2.4]';
Rh=[0.020 6.981 2.68]';
Pd=[0.017 8.389 2.5]';
Ag=[0.028 6.619 2.53]';
Cd=[0.0005 13.34 4.5]';
In=[0.011 7.774 3.1]';
Sn=[0.026 7.893 2.75]';
Sb=[0.086 7.490 2.34]';
Te=[0.047 8.157 2.56]';
I=[0.025 9.180 2.67]';
Xe=[0.0005 15.86 4.4]';

Cs=[0.004 7.214 4.65]';
Ba=[0.001 10.02 4.9]';
La=[0.009 8.106 3.89]';
Ce=[0.013 7.575 3.682]';
Pr=[0.016 7.342 3.646]';
Nd=[0.015 7.361 3.632]';
Pm=[0.015 7.356 3.602]';
Sm=[0.017 7.327 3.56]';
Eu=[0.016 7.306 3.542]';
Gd=[0.015 7.724 3.47]';
Tb=[0.017 7.323 3.464]';
Dy=[0.017 7.303 3.42]';
Ho=[0.018 7.323 3.392]';
Er=[0.019 7.271 3.346]';
Tm=[0.020 7.284 3.32]';
Yb=[0.020 7.25 3.274]';
Lu=[0.023 6.972 3.342]';
Hf=[0.138 5.581 2.35]';
Ta=[0.142 6.016 2.30]';
W=[0.137 6.176 2.27]';
Re=[0.242 3.686 2.04]';
Os=[0.029 7.771 2.76]';
Ir=[0.244 6.055 1.96]';
Pt=[0.021 7.539 2.5]';
Au=[0.024 7.553 2.47]';
Hg=[0.001 11.71 3.63]';
Tl=[0.004 8.85 3.5]';
Pb=[0.002 8.368 2.93]';
Bi=[0.052 7.489 2.66]';
Po=[0.017 8.987 3.0]';
At=[0.009 10.21 3.09]';
Rn=[0.0005 15.12 4.5]';

%******************* graphic parameters *****************
FONTDIM=16;
FONTDIMsmall=14;
FONTDIMbig=18;
COLOR=[0 0 0];
LINEWIDTH=1.2;
MARKERSIZE=25;
PAPERPOSITION=[1 1 5 4]; % old for printing papers
PAPERPOSITION=0.80*[0 0 16 9]; % standard ratio is 16/9;
PAPERSIZE=[8.5 11];
POSITION=[420 540 560 420]; % video
AXISWIDTH=1;
AXISPOSITION=[0.136646 0.164179 0.774845 0.74678];
VERBOSE=1;


%******************* simulation cell parameters **********
c_size  = 1;
zmax    = 100;  %[A]
zoffset = 1.92; %[A]
qx      = 51.3*c_size;  % [A]
qy      = 51.3*c_size;  % [A]
qz      = zmax-zoffset; % [A]
area    = qx*qy/100;    % [nm^2]

%******************* Bulk Xe parameters ******************
nnBulk  = 0.44;         % [nm]
covBulk = 1/(nnBulk^2*sin(pi/3));
%meV2K   = 11.6044;      % 1 meV = 11.6044 K
%NA      = 6.0221367e23;     % Avogadro number
%meV2J   = 1.60217733e-22;    % 1 meV = 1.602e-22 J
kJpermol2meVperatom = 1e3/meV2J/NA; 
%******************** Potential parameters ***************
sigmaNe = 2.78;       % [A] PRE 59, 864 ref 13
epsNe   = 2.92;       % [meV]
sigmaAr = 3.4;        % PRE 59, 864 ref 13
epsAr   = 10.32;
sigmaKr = 3.6;        % PRB 62, 2173 ref 28
epsKr   = 14.73;
sigmaXe = 4.1;        % PRB 62, 2173 ref 28
epsXe   = 221/meV2K;
sigmaAl = 2.5;
epsAl   = 30.245;
sigmaTM = 2.2;
epsTM   = 27.777;
sigmaIN1 = sigmaXe;
epsIN1   = epsNe;
sigmaDX1 = sigmaNe;
epsDX1   = epsXe;
sigmaDX2 = 3.9;
epsDX2   = epsXe;
sigmaIX1 = 5.5;
epsIX1   = epsXe;
sigmaIX2 = 6.749;
epsIX2   = epsXe;
sigmaMethane = 3.817; % a book by J.O. Hirschfelder, C.F. Curtiss, and R.B. Bird,
                      % Molecular theory of gases and liquids, John Wiley & Sons, NY
                      % pg 1111 (1954); original ref is A. Michels and G.W. Nederbragt,
                      % Physica 2, 1000 (1935)
epsMethane = 148.2/meV2K; % idem
sigmaEthane = 3.954; % same book, in the book it refers to another book by
  % D.M. Newitt, Design of High Pressure Plant and the Properties of Fluids at High Pressure,
  % Oxford Univ Press (1940)
epsEthane = 243/meV2K; % idem sigmaEthane


sigmaNeAl = (sigmaNe+sigmaAl)/2;
sigmaNeTM = (sigmaNe+sigmaTM)/2;
sigmaArAl = (sigmaAr+sigmaAl)/2;
sigmaArTM = (sigmaAr+sigmaTM)/2;
sigmaKrAl = (sigmaKr+sigmaAl)/2;
sigmaKrTM = (sigmaKr+sigmaTM)/2;
sigmaXeAl = (sigmaXe+sigmaAl)/2;
sigmaXeTM = (sigmaXe+sigmaTM)/2;
sigmaIN1Al = (sigmaIN1+sigmaAl)/2;
sigmaIN1TM = (sigmaIN1+sigmaTM)/2;
sigmaIX1Al = (sigmaIX1+sigmaAl)/2;
sigmaIX1TM = (sigmaIX1+sigmaTM)/2;
sigmaIX2Al = (sigmaIX2+sigmaAl)/2;
sigmaIX2TM = (sigmaIX2+sigmaTM)/2;
sigmaDX1Al = (sigmaDX1+sigmaAl)/2;
sigmaDX1TM = (sigmaDX1+sigmaTM)/2;
sigmaDX2Al = (sigmaDX2+sigmaAl)/2;
sigmaDX2TM = (sigmaDX2+sigmaTM)/2;


epsNeAl = (epsNe*epsAl)^0.5;
epsNeTM = (epsNe*epsTM)^0.5;
epsArAl = (epsAr*epsAl)^0.5;
epsArTM = (epsAr*epsTM)^0.5;
epsKrAl = (epsKr*epsAl)^0.5;
epsKrTM = (epsKr*epsTM)^0.5;
epsXeAl = (epsXe*epsAl)^0.5;
epsXeTM = (epsXe*epsTM)^0.5;

epsgsNe = 43.89; % [meV] from min(pot_avg)
epsgsAr = 108.37;
epsgsKr = 140.18;
epsgsXe = 193.25;
epsgsIX1 = epsgsXe;
epsgsIN1 = epsgsNe;
epsgsDX1 = epsgsXe;
epsgsDX2 = epsgsXe;
epsgsIX1 = epsgsXe;
epsgsIX2 = epsgsXe;

%Al(73)Ni(10)Co(17)
x_Al = .73;
x_Ni = .1;
x_Co = .17;
sigmagsNe = x_Al*sigmaNeAl + x_Ni*sigmaNeTM + x_Co*sigmaNeTM;
sigmagsAr = x_Al*sigmaArAl + x_Ni*sigmaArTM + x_Co*sigmaArTM;
sigmagsKr = x_Al*sigmaKrAl + x_Ni*sigmaKrTM + x_Co*sigmaKrTM;
sigmagsXe = x_Al*sigmaXeAl + x_Ni*sigmaXeTM + x_Co*sigmaXeTM;
sigmagsG1 = sigmagsXe;
sigmagsG2 = sigmagsNe;
sigmagsIX1 = x_Al*sigmaIX1Al + x_Ni*sigmaIX1TM + x_Co*sigmaIX1TM;
sigmagsIN1 = x_Al*sigmaIN1Al + x_Ni*sigmaIN1TM + x_Co*sigmaIN1TM;
sigmagsDX1 = x_Al*sigmaDX1Al + x_Ni*sigmaDX1TM + x_Co*sigmaDX1TM;
sigmagsDX2 = x_Al*sigmaDX2Al + x_Ni*sigmaDX2TM + x_Co*sigmaDX2TM;
sigmagsIX1 = x_Al*sigmaIX1Al + x_Ni*sigmaIX1TM + x_Co*sigmaIX1TM;
sigmagsIX2 = x_Al*sigmaIX2Al + x_Ni*sigmaIX2TM + x_Co*sigmaIX2TM;

%******************** Auxiliary Parameters ***************
% extracted from rdist.out of the first layer at point just 
% before the 2nd layer formd (rechecked the source!)

nnfactR2=0.5+cos(30/180*pi); % midpoint between 1st and 2nd nearest neighbors
nnfactR1=1.25;

nnXe=4.4;
zlistXe=[4.5, 8.2, 11.9, 15.6, 19.3];
NlistXe=[100, 160];

nnKr=3.9;
zlistKr=[4.1, 7.3, 10.5, 13.7, 16.9];
NlistKr=[145, 190];

nnAr=3.7;
zlistAr=[3.8, 6.7, 9.6, 12.5, 15.4];
NlistAr=[130, 210];

nnNe=2.9;
zlistNe=[3.5, 6.0, 8.5, 11.0, 13.5];
NlistNe=[140, 375];

nnG1=nnXe; nnIN1=nnG1;
zlistG1=zlistXe;
NlistG1=NlistXe;

nnG2=nnNe; nnDX1 = nnG2;
zlistG2=zlistNe;
NlistG2=NlistNe;

nnG3=6.049; nnIX1 = nnG3;
zlistG3=[6.139 11.0298 15.9207 20.8115 25.7024];
NlistG3=[60 90];

nnG4=7.368; nnIX2 =nnG4;
zlistG4=[7.2045 13.4064 19.6082 25.8101 32.0119];
NlistG4=[45 55];

nnG5=4.158; nnDX2 =nnG5;
zlistG5=[4.3715 7.9315 11.492 15.052 18.612];
NlistG5=[100 170];

%************ Quasicrystal Parameter ************
tau = (1+sqrt(5))/2;
lambda = 4.5;
%lambda2 = lambda/2/sin(36/180*pi); % distance between a point in central pentagon to the center of the pentagon, this will be compared to sigmagg to analyze the existence of 5- to 6- fold transition
  lambda2 = 4.0062; % is the 3D distance of the minima location between the minimum at the center of 
                    % the central pentagon and the minimum at one of its vertices
mismatchNe = (sigmaNe-lambda2)/lambda2;
mismatchAr = (sigmaAr-lambda2)/lambda2;
mismatchKr = (sigmaKr-lambda2)/lambda2;
mismatchXe = (sigmaXe-lambda2)/lambda2;
mismatchIN1 = (sigmaIN1-lambda2)/lambda2;
mismatchDX1 = (sigmaDX1-lambda2)/lambda2;
mismatchDX2 = (sigmaDX2-lambda2)/lambda2;
mismatchIX1 = (sigmaIX1-lambda2)/lambda2;
mismatchIX2 = (sigmaIX2-lambda2)/lambda2;

lambdas=4.5; % pentagon side
lambdac=4.0062; % look at lambda2
lambdar=3.81; % row-to-row distance of decagonal AlNiCo QC
LQC = tau*2.43; % tau*S, where S is the side length of rhombic Penrose tiling

  lambdamNe = (nnNe*sin(pi/3) - lambdar)/lambdar;
  lambdamAr = (nnAr*sin(pi/3) - lambdar)/lambdar;
  lambdamKr = (nnKr*sin(pi/3) - lambdar)/lambdar;
  lambdamXe = (nnXe*sin(pi/3) - lambdar)/lambdar;
  lambdamIN1 = (nnIN1*sin(pi/3) - lambdar)/lambdar;
  lambdamDX1 = (nnDX1*sin(pi/3) - lambdar)/lambdar;
  lambdamDX2 = (nnDX2*sin(pi/3) - lambdar)/lambdar;
  lambdamIX1 = (nnIX1*sin(pi/3) - lambdar)/lambdar;
  lambdamIX2 = (nnIX2*sin(pi/3) - lambdar)/lambdar;

sigma=[sigmaNe sigmaAr sigmaKr sigmaXe ...
sigmaIN1 sigmaDX1 sigmaDX2 sigmaIX1 sigmaIX2]';
k1=2^(1/6); % r = k1*sigma   r is relaxed dist for a pair of atoms
k2=0.97123; % nn = k2*r    nn is nearest neighbor at ground state (0 K)
            %              for 3D fcc
            % ref: LW Bruch, Surf Science 59, 1-16 (1976)
k3=sin(pi/3); % row-to-row = k3*nn   row distance in planar trilattice
k=k1*k2*k3;
dm=(sigma*k-lambdar)/lambdar;

% nobQCdist = average z-position of adsorbates' first layer
%             - average z-position of QC's top layer
% the top atoms of QC are in z=14.28 A, but the average z-position
% of the top layer of QC is at z=17.21 A.

nobQCdist=[2.36 2.59 2.71 3.05];

%********** conversion from G to IN or DX or IX
fictgas = ['G1 --> IN1';'G2 --> DX1';'G3 --> IX1';'G4 --> IX2';'G5 --> DX2'];
%********************** END ******************************
mygray=[         0         0         0;...
%    0.0317    0.0317    0.0317;...
    0.0635    0.0635    0.0635;...
%    0.0952    0.0952    0.0952;...
    0.1270    0.1270    0.1270;...
%    0.1587    0.1587    0.1587;...
    0.1905    0.1905    0.1905;...
%    0.2222    0.2222    0.2222;...
    0.2540    0.2540    0.2540;...
%    0.2857    0.2857    0.2857;...
    0.3175    0.3175    0.3175;...
%    0.3492    0.3492    0.3492;...
    0.3810    0.3810    0.3810;...
%    0.4127    0.4127    0.4127;...
    0.4444    0.4444    0.4444;...
%    0.4762    0.4762    0.4762;...
    0.5079    0.5079    0.5079;...
%    0.5397    0.5397    0.5397;...
    0.5714    0.5714    0.5714;...
%    0.6032    0.6032    0.6032;...
    0.6349    0.6349    0.6349;...
%    0.6667    0.6667    0.6667;...
    0.6984    0.6984    0.6984;...
%    0.7302    0.7302    0.7302;...
    0.7619    0.7619    0.7619;...
%    0.7937    0.7937    0.7937;...
    0.8254    0.8254    0.8254;...
%    0.8571    0.8571    0.8571;...
    0.8889    0.8889    0.8889;...
%    0.9206    0.9206    0.9206;...
%    0.9524    0.9524    0.9524;...
    1.0000    1.0000    1.0000];

blue=[         0         0    1.0000;...
%    0.0159    0.0159    1.0000;...
    0.0317    0.0317    1.0000;...
%    0.0476    0.0476    1.0000;...
    0.0635    0.0635    1.0000;...
%    0.0794    0.0794    1.0000;...
    0.0952    0.0952    1.0000;...
%    0.1111    0.1111    1.0000;...
    0.1270    0.1270    1.0000;...
%    0.1429    0.1429    1.0000;...
    0.1587    0.1587    1.0000;...
%    0.1746    0.1746    1.0000;...
    0.1905    0.1905    1.0000;...
%    0.2063    0.2063    1.0000;...
    0.2222    0.2222    1.0000;...
%    0.2381    0.2381    1.0000;...
    0.2540    0.2540    1.0000;...
%    0.2698    0.2698    1.0000;...
    0.2857    0.2857    1.0000;...
%    0.3016    0.3016    1.0000;...
    0.3175    0.3175    1.0000;...
%    0.3333    0.3333    1.0000;...
    0.3492    0.3492    1.0000;...
%    0.3651    0.3651    1.0000;...
    0.3810    0.3810    1.0000;...
%    0.3968    0.3968    1.0000;...
    0.4127    0.4127    1.0000;...
%    0.4286    0.4286    1.0000;...
    0.4444    0.4444    1.0000;...
%    0.4603    0.4603    1.0000;...
    0.4762    0.4762    1.0000;...
%    0.4921    0.4921    1.0000;...
    0.5079    0.5079    1.0000;...
%    0.5238    0.5238    1.0000;...
    0.5397    0.5397    1.0000;...
%    0.5556    0.5556    1.0000;...
    0.5714    0.5714    1.0000;...
%    0.5873    0.5873    1.0000;...
    0.6032    0.6032    1.0000;...
%    0.6190    0.6190    1.0000;...
    0.6349    0.6349    1.0000;...
%    0.6508    0.6508    1.0000;...
    0.6667    0.6667    1.0000;...
%    0.6825    0.6825    1.0000;...
    0.6984    0.6984    1.0000;...
%    0.7143    0.7143    1.0000;...
    0.7302    0.7302    1.0000;...
%    0.7460    0.7460    1.0000;...
    0.7619    0.7619    1.0000;...
%    0.7778    0.7778    1.0000;...
    0.7937    0.7937    1.0000;...
%    0.8095    0.8095    1.0000;...
    0.8254    0.8254    1.0000;...
%    0.8413    0.8413    1.0000;...
    0.8571    0.8571    1.0000;...
%    0.8730    0.8730    1.0000;...
    0.8889    0.8889    1.0000;...
%    0.9048    0.9048    1.0000;...
    0.9206    0.9206    1.0000;...
%    0.9365    0.9365    1.0000;...
    0.9524    0.9524    1.0000;...
%    0.9683    0.9683    1.0000;...
%    0.9841    0.9841    1.0000;...
    1.0000    1.0000    1.0000];

red=[    1.0000         0         0;...
%    1.0000    0.0159    0.0159;...
    1.0000    0.0317    0.0317;...
%    1.0000    0.0476    0.0476;...
    1.0000    0.0635    0.0635;...
%    1.0000    0.0794    0.0794;...
    1.0000    0.0952    0.0952;...
%    1.0000    0.1111    0.1111;...
    1.0000    0.1270    0.1270;...
%    1.0000    0.1429    0.1429;...
    1.0000    0.1587    0.1587;...
%    1.0000    0.1746    0.1746;...
    1.0000    0.1905    0.1905;...
%    1.0000    0.2063    0.2063;...
    1.0000    0.2222    0.2222;...
%    1.0000    0.2381    0.2381;...
    1.0000    0.2540    0.2540;...
%    1.0000    0.2698    0.2698;...
    1.0000    0.2857    0.2857;...
%    1.0000    0.3016    0.3016;...
    1.0000    0.3175    0.3175;...
%    1.0000    0.3333    0.3333;...
    1.0000    0.3492    0.3492;...
%    1.0000    0.3651    0.3651;...
    1.0000    0.3810    0.3810;...
%    1.0000    0.3968    0.3968;...
    1.0000    0.4127    0.4127;...
%    1.0000    0.4286    0.4286;...
    1.0000    0.4444    0.4444;...
%    1.0000    0.4603    0.4603;...
    1.0000    0.4762    0.4762;...
%    1.0000    0.4921    0.4921;...
    1.0000    0.5079    0.5079;...
%    1.0000    0.5238    0.5238;...
    1.0000    0.5397    0.5397;...
%    1.0000    0.5556    0.5556;...
    1.0000    0.5714    0.5714;...
%    1.0000    0.5873    0.5873;...
    1.0000    0.6032    0.6032;...
%    1.0000    0.6190    0.6190;...
    1.0000    0.6349    0.6349;...
%    1.0000    0.6508    0.6508;...
    1.0000    0.6667    0.6667;...
%    1.0000    0.6825    0.6825;...
    1.0000    0.6984    0.6984;...
%    1.0000    0.7143    0.7143;...
    1.0000    0.7302    0.7302;...
%    1.0000    0.7460    0.7460;...
    1.0000    0.7619    0.7619;...
%    1.0000    0.7778    0.7778;...
    1.0000    0.7937    0.7937;...
%    1.0000    0.8095    0.8095;...
    1.0000    0.8254    0.8254;...
%    1.0000    0.8413    0.8413;...
    1.0000    0.8571    0.8571;...
%    1.0000    0.8730    0.8730;...
    1.0000    0.8889    0.8889;...
%    1.0000    0.9048    0.9048;...
    1.0000    0.9206    0.9206;...
%    1.0000    0.9365    0.9365;...
    1.0000    0.9524    0.9524;...
%    1.0000    0.9683    0.9683;...
%    1.0000    0.9841    0.9841;...
    1.0000    1.0000    1.0000];
nc=size(blue,1);
bluered=zeros(2*nc,3);
bluered(1:nc,:)=red;
for i=1:nc
  bluered(i+nc,1:3)=blue(nc+1-i,1:3);
end

redblue=zeros(2*nc,3);
redblue(1:nc,:)=blue;
for i=1:nc
redblue(i+nc,1:3)=red(nc+1-i,1:3);
end
