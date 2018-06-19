// ***************************************************************************
// *                                                                         *
// *           Aflow STEFANO CURTAROLO - Duke University 2003-2018           *
// *                                                                         *
// ***************************************************************************
// Written by Stefano Curtarolo - David Hicks - 2016
// FILE "ANRL/aflow_arnl_AB32C48_cI162_204_a_2efg_2gh.cpp"

#ifndef _AFLOW_ANRL_AB32C48_cI162_204_a_2efg_2gh_CPP
#define _AFLOW_ANRL_AB32C48_cI162_204_a_2efg_2gh_CPP
#include "../aflow.h"

namespace anrl {
  uint WebANRL_AB32C48_cI162_204_a_2efg_2gh(stringstream &web,bool LDEBUG);
}

namespace anrl {
  uint PrototypeANRL_AB32C48_cI162_204_a_2efg_2gh(ostream &oss,stringstream &web,xstructure& str,string parameters,string proto_line,bool LDEBUG) {
    // system AB32C48_cI162_204_a_2efg_2gh

    if(XHOST.vflag_control.flag("WWW")) {
      WebANRL_AB32C48_cI162_204_a_2efg_2gh(web,LDEBUG); // PLUG WEB STUFF
      #ifdef _ANRL_NOWEB_
      cout << "no web" << endl;
      #else
      cout << web.str() << endl;
      #endif
      exit(0);
    }

    vector<double> vparameters;
    aurostd::string2tokens(parameters,vparameters,",");

    uint nspecies,natoms,spacegroup,nunderscores,nparameters;
    string label,Pearson_symbol,params,Strukturbericht,prototype,dialect;

    anrl::vproto2tokens(proto_line,label,nspecies,natoms,spacegroup,nunderscores,nparameters,Pearson_symbol,params,Strukturbericht,prototype,dialect);

    if(!anrl::PrototypeANRL_Consistency(oss,vparameters.size(),nparameters,prototype,label,
                 Strukturbericht,Pearson_symbol,spacegroup, params)) { exit(0);}    

    if(LDEBUG) { cerr << "anrl::PrototypeANRL_AB32C48_cI162_204_a_2efg_2gh: FOUND" << endl;}
    if(LDEBUG) { cerr << "anrl::PrototypeANRL_AB32C48_cI162_204_a_2efg_2gh: label=" << label << endl;}
    if(LDEBUG) { cerr << "anrl::PrototypeANRL_AB32C48_cI162_204_a_2efg_2gh: nspecies=" << nspecies << endl;}
    if(LDEBUG) { cerr << "anrl::PrototypeANRL_AB32C48_cI162_204_a_2efg_2gh: natoms=" << natoms << endl;}
    if(LDEBUG) { cerr << "anrl::PrototypeANRL_AB32C48_cI162_204_a_2efg_2gh: spacegroup=" << spacegroup << endl;}
    if(LDEBUG) { cerr << "anrl::PrototypeANRL_AB32C48_cI162_204_a_2efg_2gh: nunderscores=" << nunderscores << endl;}
    if(LDEBUG) { cerr << "anrl::PrototypeANRL_AB32C48_cI162_204_a_2efg_2gh: nparameters=" <<  nparameters << endl;}
    if(LDEBUG) { cerr << "anrl::PrototypeANRL_AB32C48_cI162_204_a_2efg_2gh: Pearson_symbol=" << Pearson_symbol << endl;}
    if(LDEBUG) { cerr << "anrl::PrototypeANRL_AB32C48_cI162_204_a_2efg_2gh: params=" << params << endl;}
    if(LDEBUG) { cerr << "anrl::PrototypeANRL_AB32C48_cI162_204_a_2efg_2gh: Strukturbericht=" << Strukturbericht << endl;}
    if(LDEBUG) { cerr << "anrl::PrototypeANRL_AB32C48_cI162_204_a_2efg_2gh: prototype=" << prototype << endl;}
    if(LDEBUG) { cerr << "anrl::PrototypeANRL_AB32C48_cI162_204_a_2efg_2gh: dialect=" << dialect << endl;}
    if(LDEBUG) { cerr << "anrl::PrototypeANRL_AB32C48_cI162_204_a_2efg_2gh: vparameters.size()=" << vparameters.size() << endl;}

    xvector<double> xn(3);   xn(1)=1.0;xn(2)=0.0;xn(3)=0.0;
    xvector<double> yn(3);   yn(1)=0.0;yn(2)=1.0;yn(3)=0.0;
    xvector<double> zn(3);   zn(1)=0.0;zn(2)=0.0;zn(3)=1.0;
    xvector<double> a1(3),a2(3),a3(3);

    _atom atom;

    uint i=0;
    double a=vparameters.at(i++);                  if(LDEBUG) { cerr << "anrl::PrototypeANRL_AB32C48_cI162_204_a_2efg_2gh: a=" << a << endl;}
    
    double x2=vparameters.at(i++);                 if(LDEBUG) { cerr << "anrl::PrototypeANRL_AB32C48_cI162_204_a_2efg_2gh: x2=" << x2 << endl;}
    double x3=vparameters.at(i++);                 if(LDEBUG) { cerr << "anrl::PrototypeANRL_AB32C48_cI162_204_a_2efg_2gh: x3=" << x3 << endl;}
    double x4=vparameters.at(i++);                 if(LDEBUG) { cerr << "anrl::PrototypeANRL_AB32C48_cI162_204_a_2efg_2gh: x4=" << x4 << endl;}
    double y5=vparameters.at(i++);                 if(LDEBUG) { cerr << "anrl::PrototypeANRL_AB32C48_cI162_204_a_2efg_2gh: y5=" << y5 << endl;}
    double z5=vparameters.at(i++);                 if(LDEBUG) { cerr << "anrl::PrototypeANRL_AB32C48_cI162_204_a_2efg_2gh: z5=" << z5 << endl;}
    double y6=vparameters.at(i++);                 if(LDEBUG) { cerr << "anrl::PrototypeANRL_AB32C48_cI162_204_a_2efg_2gh: y6=" << y6 << endl;}
    double z6=vparameters.at(i++);                 if(LDEBUG) { cerr << "anrl::PrototypeANRL_AB32C48_cI162_204_a_2efg_2gh: z6=" << z6 << endl;}
    double y7=vparameters.at(i++);                 if(LDEBUG) { cerr << "anrl::PrototypeANRL_AB32C48_cI162_204_a_2efg_2gh: y7=" << y7 << endl;}
    double z7=vparameters.at(i++);                 if(LDEBUG) { cerr << "anrl::PrototypeANRL_AB32C48_cI162_204_a_2efg_2gh: z7=" << z7 << endl;}
    double x8=vparameters.at(i++);                 if(LDEBUG) { cerr << "anrl::PrototypeANRL_AB32C48_cI162_204_a_2efg_2gh: x8=" << x8 << endl;}
    double y8=vparameters.at(i++);                 if(LDEBUG) { cerr << "anrl::PrototypeANRL_AB32C48_cI162_204_a_2efg_2gh: y8=" << y8 << endl;}
    double z8=vparameters.at(i++);                 if(LDEBUG) { cerr << "anrl::PrototypeANRL_AB32C48_cI162_204_a_2efg_2gh: z8=" << z8 << endl;}
        
    str.iomode=IOVASP_AUTO;
    str.title=label+" params="+parameters+" SG#="+aurostd::utype2string(spacegroup)+DOI_ANRL;
    str.scale=1.0;

    a1=-(1.0/2.0)*a*xn+(1.0/2.0)*a*yn+(1.0/2.0)*a*zn;
    a2=(1.0/2.0)*a*xn-(1.0/2.0)*a*yn+(1.0/2.0)*a*zn;
    a3=(1.0/2.0)*a*xn+(1.0/2.0)*a*yn-(1.0/2.0)*a*zn;
    
    str.lattice(1,1)=a1(1);str.lattice(1,2)=a1(2);str.lattice(1,3)=a1(3);
    str.lattice(2,1)=a2(1);str.lattice(2,2)=a2(2);str.lattice(2,3)=a2(3);
    str.lattice(3,1)=a3(1);str.lattice(3,2)=a3(2);str.lattice(3,3)=a3(3);

    str.FixLattices(); // Reciprocal/f2c/c2f
    
    atom.name="A"; atom.type=0;                                       // atom B1
    atom.fpos(1)=0.0;atom.fpos(2)=0.0;atom.fpos(3)=0.0;               // atom B1
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B1 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B1
    
    atom.name="B"; atom.type=1;                                       // atom B2
    atom.fpos(1)=(1.0/2.0);atom.fpos(2)=((1.0/2.0)+x2);atom.fpos(3)=x2;// atom B2
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B2 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B2
    
    atom.name="B"; atom.type=1;                                       // atom B3
    atom.fpos(1)=(1.0/2.0);atom.fpos(2)=((1.0/2.0)-x2);atom.fpos(3)=-x2;// atom B3
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B3 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B3
    
    atom.name="B"; atom.type=1;                                       // atom B4
    atom.fpos(1)=x2;atom.fpos(2)=(1.0/2.0);atom.fpos(3)=((1.0/2.0)+x2);// atom B4
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B4 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B4
    
    atom.name="B"; atom.type=1;                                       // atom B5
    atom.fpos(1)=-x2;atom.fpos(2)=(1.0/2.0);atom.fpos(3)=((1.0/2.0)-x2);// atom B5
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B5 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B5
    
    atom.name="B"; atom.type=1;                                       // atom B6
    atom.fpos(1)=((1.0/2.0)+x2);atom.fpos(2)=x2;atom.fpos(3)=(1.0/2.0);// atom B6
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B6 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B6
    
    atom.name="B"; atom.type=1;                                       // atom B7
    atom.fpos(1)=((1.0/2.0)-x2);atom.fpos(2)=-x2;atom.fpos(3)=(1.0/2.0);// atom B7
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B7 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B7
    
    atom.name="B"; atom.type=1;                                       // atom B8
    atom.fpos(1)=(1.0/2.0);atom.fpos(2)=((1.0/2.0)+x3);atom.fpos(3)=x3;// atom B8
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B8 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B8
    
    atom.name="B"; atom.type=1;                                       // atom B9
    atom.fpos(1)=(1.0/2.0);atom.fpos(2)=((1.0/2.0)-x3);atom.fpos(3)=-x3;// atom B9
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B9 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B9
    
    atom.name="B"; atom.type=1;                                       // atom B10
    atom.fpos(1)=x3;atom.fpos(2)=(1.0/2.0);atom.fpos(3)=((1.0/2.0)+x3);// atom B10
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B10 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B10
    
    atom.name="B"; atom.type=1;                                       // atom B11
    atom.fpos(1)=-x3;atom.fpos(2)=(1.0/2.0);atom.fpos(3)=((1.0/2.0)-x3);// atom B11
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B11 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B11
    
    atom.name="B"; atom.type=1;                                       // atom B12
    atom.fpos(1)=((1.0/2.0)+x3);atom.fpos(2)=x3;atom.fpos(3)=(1.0/2.0);// atom B12
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B12 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B12
    
    atom.name="B"; atom.type=1;                                       // atom B13
    atom.fpos(1)=((1.0/2.0)-x3);atom.fpos(2)=-x3;atom.fpos(3)=(1.0/2.0);// atom B13
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B13 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B13
    
    atom.name="B"; atom.type=1;                                       // atom B14
    atom.fpos(1)=2.0*x4;atom.fpos(2)=2.0*x4;atom.fpos(3)=2.0*x4;      // atom B14
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B14 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B14
    
    atom.name="B"; atom.type=1;                                       // atom B15
    atom.fpos(1)=2.0*x4;atom.fpos(2)=0.0;atom.fpos(3)=0.0;            // atom B15
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B15 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B15
    
    atom.name="B"; atom.type=1;                                       // atom B16
    atom.fpos(1)=0.0;atom.fpos(2)=2.0*x4;atom.fpos(3)=0.0;            // atom B16
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B16 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B16
    
    atom.name="B"; atom.type=1;                                       // atom B17
    atom.fpos(1)=0.0;atom.fpos(2)=0.0;atom.fpos(3)=2.0*x4;            // atom B17
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B17 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B17
    
    atom.name="B"; atom.type=1;                                       // atom B18
    atom.fpos(1)=-2.0*x4;atom.fpos(2)=-2.0*x4;atom.fpos(3)=-2.0*x4;   // atom B18
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B18 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B18
    
    atom.name="B"; atom.type=1;                                       // atom B19
    atom.fpos(1)=-2.0*x4;atom.fpos(2)=0.0;atom.fpos(3)=0.0;           // atom B19
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B19 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B19
    
    atom.name="B"; atom.type=1;                                       // atom B20
    atom.fpos(1)=0.0;atom.fpos(2)=-2.0*x4;atom.fpos(3)=0.0;           // atom B20
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B20 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B20
    
    atom.name="B"; atom.type=1;                                       // atom B21
    atom.fpos(1)=0.0;atom.fpos(2)=0.0;atom.fpos(3)=-2.0*x4;           // atom B21
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B21 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B21
    
    atom.name="B"; atom.type=1;                                       // atom B22
    atom.fpos(1)=(y5+z5);atom.fpos(2)=z5;atom.fpos(3)=y5;             // atom B22
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B22 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B22
    
    atom.name="B"; atom.type=1;                                       // atom B23
    atom.fpos(1)=(z5-y5);atom.fpos(2)=z5;atom.fpos(3)=-y5;            // atom B23
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B23 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B23
    
    atom.name="B"; atom.type=1;                                       // atom B24
    atom.fpos(1)=(y5-z5);atom.fpos(2)=-z5;atom.fpos(3)=y5;            // atom B24
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B24 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B24
    
    atom.name="B"; atom.type=1;                                       // atom B25
    atom.fpos(1)=-(y5+z5);atom.fpos(2)=-z5;atom.fpos(3)=-y5;          // atom B25
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B25 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B25
    
    atom.name="B"; atom.type=1;                                       // atom B26
    atom.fpos(1)=y5;atom.fpos(2)=(y5+z5);atom.fpos(3)=z5;             // atom B26
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B26 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B26
    
    atom.name="B"; atom.type=1;                                       // atom B27
    atom.fpos(1)=y5;atom.fpos(2)=(y5-z5);atom.fpos(3)=-z5;            // atom B27
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B27 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B27
    
    atom.name="B"; atom.type=1;                                       // atom B28
    atom.fpos(1)=-y5;atom.fpos(2)=(z5-y5);atom.fpos(3)=z5;            // atom B28
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B28 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B28
    
    atom.name="B"; atom.type=1;                                       // atom B29
    atom.fpos(1)=-y5;atom.fpos(2)=-(y5+z5);atom.fpos(3)=-z5;          // atom B29
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B29 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B29
    
    atom.name="B"; atom.type=1;                                       // atom B30
    atom.fpos(1)=z5;atom.fpos(2)=y5;atom.fpos(3)=(y5+z5);             // atom B30
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B30 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B30
    
    atom.name="B"; atom.type=1;                                       // atom B31
    atom.fpos(1)=z5;atom.fpos(2)=-y5;atom.fpos(3)=(z5-y5);            // atom B31
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B31 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B31
    
    atom.name="B"; atom.type=1;                                       // atom B32
    atom.fpos(1)=-z5;atom.fpos(2)=y5;atom.fpos(3)=(y5-z5);            // atom B32
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B32 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B32
    
    atom.name="B"; atom.type=1;                                       // atom B33
    atom.fpos(1)=-z5;atom.fpos(2)=-y5;atom.fpos(3)=-(y5+z5);          // atom B33
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B33 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B33
    
    atom.name="C"; atom.type=2;                                       // atom B34
    atom.fpos(1)=(y6+z6);atom.fpos(2)=z6;atom.fpos(3)=y6;             // atom B34
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B34 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B34
    
    atom.name="C"; atom.type=2;                                       // atom B35
    atom.fpos(1)=(z6-y6);atom.fpos(2)=z6;atom.fpos(3)=-y6;            // atom B35
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B35 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B35
    
    atom.name="C"; atom.type=2;                                       // atom B36
    atom.fpos(1)=(y6-z6);atom.fpos(2)=-z6;atom.fpos(3)=y6;            // atom B36
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B36 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B36
    
    atom.name="C"; atom.type=2;                                       // atom B37
    atom.fpos(1)=-(y6+z6);atom.fpos(2)=-z6;atom.fpos(3)=-y6;          // atom B37
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B37 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B37
    
    atom.name="C"; atom.type=2;                                       // atom B38
    atom.fpos(1)=y6;atom.fpos(2)=(y6+z6);atom.fpos(3)=z6;             // atom B38
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B38 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B38
    
    atom.name="C"; atom.type=2;                                       // atom B39
    atom.fpos(1)=y6;atom.fpos(2)=(y6-z6);atom.fpos(3)=-z6;            // atom B39
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B39 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B39
    
    atom.name="C"; atom.type=2;                                       // atom B40
    atom.fpos(1)=-y6;atom.fpos(2)=(z6-y6);atom.fpos(3)=z6;            // atom B40
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B40 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B40
    
    atom.name="C"; atom.type=2;                                       // atom B41
    atom.fpos(1)=-y6;atom.fpos(2)=-(y6+z6);atom.fpos(3)=-z6;          // atom B41
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B41 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B41
    
    atom.name="C"; atom.type=2;                                       // atom B42
    atom.fpos(1)=z6;atom.fpos(2)=y6;atom.fpos(3)=(y6+z6);             // atom B42
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B42 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B42
    
    atom.name="C"; atom.type=2;                                       // atom B43
    atom.fpos(1)=z6;atom.fpos(2)=-y6;atom.fpos(3)=(z6-y6);            // atom B43
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B43 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B43
    
    atom.name="C"; atom.type=2;                                       // atom B44
    atom.fpos(1)=-z6;atom.fpos(2)=y6;atom.fpos(3)=(y6-z6);            // atom B44
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B44 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B44
    
    atom.name="C"; atom.type=2;                                       // atom B45
    atom.fpos(1)=-z6;atom.fpos(2)=-y6;atom.fpos(3)=-(y6+z6);          // atom B45
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B45 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B45
    
    atom.name="C"; atom.type=2;                                       // atom B46
    atom.fpos(1)=(y7+z7);atom.fpos(2)=z7;atom.fpos(3)=y7;             // atom B46
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B46 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B46
    
    atom.name="C"; atom.type=2;                                       // atom B47
    atom.fpos(1)=(z7-y7);atom.fpos(2)=z7;atom.fpos(3)=-y7;            // atom B47
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B47 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B47
    
    atom.name="C"; atom.type=2;                                       // atom B48
    atom.fpos(1)=(y7-z7);atom.fpos(2)=-z7;atom.fpos(3)=y7;            // atom B48
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B48 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B48
    
    atom.name="C"; atom.type=2;                                       // atom B49
    atom.fpos(1)=-(y7+z7);atom.fpos(2)=-z7;atom.fpos(3)=-y7;          // atom B49
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B49 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B49
    
    atom.name="C"; atom.type=2;                                       // atom B50
    atom.fpos(1)=y7;atom.fpos(2)=(y7+z7);atom.fpos(3)=z7;             // atom B50
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B50 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B50
    
    atom.name="C"; atom.type=2;                                       // atom B51
    atom.fpos(1)=y7;atom.fpos(2)=(y7-z7);atom.fpos(3)=-z7;            // atom B51
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B51 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B51
    
    atom.name="C"; atom.type=2;                                       // atom B52
    atom.fpos(1)=-y7;atom.fpos(2)=(z7-y7);atom.fpos(3)=z7;            // atom B52
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B52 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B52
    
    atom.name="C"; atom.type=2;                                       // atom B53
    atom.fpos(1)=-y7;atom.fpos(2)=-(y7+z7);atom.fpos(3)=-z7;          // atom B53
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B53 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B53
    
    atom.name="C"; atom.type=2;                                       // atom B54
    atom.fpos(1)=z7;atom.fpos(2)=y7;atom.fpos(3)=(y7+z7);             // atom B54
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B54 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B54
    
    atom.name="C"; atom.type=2;                                       // atom B55
    atom.fpos(1)=z7;atom.fpos(2)=-y7;atom.fpos(3)=(z7-y7);            // atom B55
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B55 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B55
    
    atom.name="C"; atom.type=2;                                       // atom B56
    atom.fpos(1)=-z7;atom.fpos(2)=y7;atom.fpos(3)=(y7-z7);            // atom B56
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B56 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B56
    
    atom.name="C"; atom.type=2;                                       // atom B57
    atom.fpos(1)=-z7;atom.fpos(2)=-y7;atom.fpos(3)=-(y7+z7);          // atom B57
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B57 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B57
    
    atom.name="C"; atom.type=2;                                       // atom B58
    atom.fpos(1)=(y8+z8);atom.fpos(2)=(z8+x8);atom.fpos(3)=(x8+y8);   // atom B58
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B58 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B58
    
    atom.name="C"; atom.type=2;                                       // atom B59
    atom.fpos(1)=(z8-y8);atom.fpos(2)=(z8-x8);atom.fpos(3)=-(x8+y8);  // atom B59
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B59 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B59
    
    atom.name="C"; atom.type=2;                                       // atom B60
    atom.fpos(1)=(y8-z8);atom.fpos(2)=-(z8+x8);atom.fpos(3)=(y8-x8);  // atom B60
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B60 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B60
    
    atom.name="C"; atom.type=2;                                       // atom B61
    atom.fpos(1)=-(y8+z8);atom.fpos(2)=(x8-z8);atom.fpos(3)=(x8-y8);  // atom B61
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B61 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B61
    
    atom.name="C"; atom.type=2;                                       // atom B62
    atom.fpos(1)=-(y8+z8);atom.fpos(2)=-(z8+x8);atom.fpos(3)=-(x8+y8);// atom B62
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B62 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B62
    
    atom.name="C"; atom.type=2;                                       // atom B63
    atom.fpos(1)=(y8-z8);atom.fpos(2)=(x8-z8);atom.fpos(3)=(x8+y8);   // atom B63
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B63 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B63
    
    atom.name="C"; atom.type=2;                                       // atom B64
    atom.fpos(1)=(z8-y8);atom.fpos(2)=(z8+x8);atom.fpos(3)=(x8-y8);   // atom B64
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B64 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B64
    
    atom.name="C"; atom.type=2;                                       // atom B65
    atom.fpos(1)=(y8+z8);atom.fpos(2)=(z8-x8);atom.fpos(3)=(y8-x8);   // atom B65
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B65 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B65
    
    atom.name="C"; atom.type=2;                                       // atom B66
    atom.fpos(1)=(x8+y8);atom.fpos(2)=(y8+z8);atom.fpos(3)=(z8+x8);   // atom B66
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B66 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B66
    
    atom.name="C"; atom.type=2;                                       // atom B67
    atom.fpos(1)=(y8-x8);atom.fpos(2)=(y8-z8);atom.fpos(3)=-(z8+x8);  // atom B67
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B67 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B67
    
    atom.name="C"; atom.type=2;                                       // atom B68
    atom.fpos(1)=(x8-y8);atom.fpos(2)=-(y8+z8);atom.fpos(3)=(x8-z8);  // atom B68
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B68 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B68
    
    atom.name="C"; atom.type=2;                                       // atom B69
    atom.fpos(1)=-(x8+y8);atom.fpos(2)=(z8-y8);atom.fpos(3)=(z8-x8);  // atom B69
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B69 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B69
    
    atom.name="C"; atom.type=2;                                       // atom B70
    atom.fpos(1)=-(x8+y8);atom.fpos(2)=-(y8+z8);atom.fpos(3)=-(z8+x8);// atom B70
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B70 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B70
    
    atom.name="C"; atom.type=2;                                       // atom B71
    atom.fpos(1)=(x8-y8);atom.fpos(2)=(z8-y8);atom.fpos(3)=(z8+x8);   // atom B71
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B71 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B71
    
    atom.name="C"; atom.type=2;                                       // atom B72
    atom.fpos(1)=(y8-x8);atom.fpos(2)=(y8+z8);atom.fpos(3)=(z8-x8);   // atom B72
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B72 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B72
    
    atom.name="C"; atom.type=2;                                       // atom B73
    atom.fpos(1)=(x8+y8);atom.fpos(2)=(y8-z8);atom.fpos(3)=(x8-z8);   // atom B73
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B73 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B73
    
    atom.name="C"; atom.type=2;                                       // atom B74
    atom.fpos(1)=(z8+x8);atom.fpos(2)=(x8+y8);atom.fpos(3)=(y8+z8);   // atom B74
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B74 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B74
    
    atom.name="C"; atom.type=2;                                       // atom B75
    atom.fpos(1)=(x8-z8);atom.fpos(2)=(x8-y8);atom.fpos(3)=-(y8+z8);  // atom B75
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B75 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B75
    
    atom.name="C"; atom.type=2;                                       // atom B76
    atom.fpos(1)=(z8-x8);atom.fpos(2)=-(x8+y8);atom.fpos(3)=(z8-y8);  // atom B76
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B76 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B76
    
    atom.name="C"; atom.type=2;                                       // atom B77
    atom.fpos(1)=-(z8+x8);atom.fpos(2)=(y8-x8);atom.fpos(3)=(y8-z8);  // atom B77
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B77 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B77
    
    atom.name="C"; atom.type=2;                                       // atom B78
    atom.fpos(1)=-(z8+x8);atom.fpos(2)=-(x8+y8);atom.fpos(3)=-(y8+z8);// atom B78
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B78 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B78
    
    atom.name="C"; atom.type=2;                                       // atom B79
    atom.fpos(1)=(z8-x8);atom.fpos(2)=(y8-x8);atom.fpos(3)=(y8+z8);   // atom B79
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B79 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B79
    
    atom.name="C"; atom.type=2;                                       // atom B80
    atom.fpos(1)=(x8-z8);atom.fpos(2)=(x8+y8);atom.fpos(3)=(y8-z8);   // atom B80
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B80 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B80
    
    atom.name="C"; atom.type=2;                                       // atom B81
    atom.fpos(1)=(z8+x8);atom.fpos(2)=(x8-y8);atom.fpos(3)=(z8-y8);   // atom B81
    str.comp_each_type.at(atom.type)+=1.0;                            // atom B81 // if we need partial occupation
    str.atoms.push_back(atom);                                        // atom B81
    

    return str.atoms.size();  
  }
} // namespace anrl::

namespace anrl {
  uint WebANRL_AB32C48_cI162_204_a_2efg_2gh(stringstream& web,bool LDEBUG) {
    #ifndef _ANRL_NOWEB_
    web << "<html xmlns=\"http://www.w3.org/1999/xhtml\">" << endl;
    web << "<head profile=\"http://www.w3.org/1999/xhtml/vocab\">" << endl;
    web << "<title>" << endl;
    web << "" << endl;
    web << "</title>" << endl;
    web << "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=iso-8859-1\" />" << endl;
    web << "<script type=\"text/javascript\" src=\"js/MathJax-2.7.0/MathJax.js?config=TeX-AMS-MML_HTMLorMML\"></script>" << endl;
    web << "<script type=\"text/x-mathjax-config\">" << endl;
    web << "MathJax.Hub.Config({" << endl;
    web << "TeX: {" << endl;
    web << "noErrors: {disabled: true}, // Show error messages" << endl;
    web << "MAXBUFFER: 50*1024, // Set size of buffer in bytes" << endl;
    web << "}," << endl;
    web << "tex2jax: {" << endl;
    web << "inlineMath: [ [\'$\',\'$\'], [\'\\\\(\',\'\\\\)\'] ]" << endl;
    web << "}," << endl;
    web << "});" << endl;
    web << "</script>" << endl;
    web << "<script src=\"http://code.jquery.com/jquery-1.11.3.min.js\"></script>" << endl;
    web << "<link href=\"https://maxcdn.bootstrapcdn.com/font-awesome/4.7.0/css/font-awesome.min.css\" rel=\"stylesheet\" type=\"text/css\">" << endl;
    web << "<script>" << endl;
    web << "(function(i,s,o,g,r,a,m){i[\'GoogleAnalyticsObject\']=r;i[r]=i[r]||function(){" << endl;
    web << "(i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o)," << endl;
    web << "m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)" << endl;
    web << "})(window,document,\'script\',\'https://www.google-analytics.com/analytics.js\',\'ga\');" << endl;
    web << "ga(\'create\', \'UA-100554000-2\', \'auto\');" << endl;
    web << "ga(\'send\', \'pageview\');" << endl;
    web << "</script>" << endl;
    web << "<link rel=\"stylesheet\" href=\"css/bootstrap-grid.min.css\" />" << endl;
    web << "<link rel=\"stylesheet\" href=\"css/style.css\" />" << endl;
    web << "<meta charset=\"utf-8\" content=\"charset\" />" << endl;
    web << "</head>" << endl;
    web << "<body>" << endl;
    web << "<nav class=\"nav\">" << endl;
    web << "<div class=\"container\">" << endl;
    web << "<ul class=\"nav-links\">" << endl;
    web << "<li class=\"dropdown\">" << endl;
    web << "<div class=\"dropbtn\">Lattice Info</div>" << endl;
    web << "<div class=\"dropdown-content\">" << endl;
    web << "<a href=\"triclinic_lattice.html\">Triclinic</a>" << endl;
    web << "<a href=\"monoclinic_lattice.html\">Monoclinic</a>" << endl;
    web << "<a href=\"orthorhombic_lattice.html\">Orthorhombic</a>" << endl;
    web << "<a href=\"tetragonal_lattice.html\">Tetragonal</a>" << endl;
    web << "<a href=\"trigonal_lattice.html\">Trigonal</a>" << endl;
    web << "<a href=\"hexagonal_lattice.html\">Hexagonal</a>" << endl;
    web << "<a href=\"cubic_lattice.html\">Cubic</a>" << endl;
    web << "</div>" << endl;
    web << "</li>" << endl;
    web << "<li> <a href=\"./chemical_symbols.html\">Chemical Symbol</a> </li>" << endl;
    web << "<li> <a href=\"./strukturberichts.html\">Strukturbericht</a> </li>" << endl;
    web << "<li> <a href=\"./pearson_symbols.html\">Pearson Symbol</a> </li>" << endl;
    web << "<li> <a href=\"./space_groups.html\">Space Group</a> </li>" << endl;
    web << "</ul>" << endl;
    web << "</div>" << endl;
    web << "</nav>" << endl;
    web << "<div class=\"header\">" << endl;
    web << "<div class=\"container header_container\">" << endl;
    web << "<div class=\"row\">" << endl;
    web << "<div id=\"logo\" class=\"col-md-4\">" << endl;
    web << "<a href=\"./index.html\">" << endl;
   web << "<svg class=\"logo\" xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 189.08 253.13\"><defs><style>.cls-1{fill:#4e8150;}.cls-2{fill:#659b65;}.cls-3,.cls-6{fill:#f3f2f2;}.cls-4{fill:#eaeaea;}.cls-5{fill:#ffba54;}.cls-6{stroke:#efefef;}.cls-10,.cls-13,.cls-15,.cls-16,.cls-18,.cls-19,.cls-20,.cls-21,.cls-6,.cls-7,.cls-9{stroke-miterlimit:10;}.cls-13,.cls-6{stroke-width:0.5px;}.cls-13,.cls-15,.cls-19,.cls-20,.cls-21,.cls-7{fill:none;}.cls-7{stroke:#000;}.cls-19,.cls-20,.cls-21,.cls-7{stroke-width:0.25px;}.cls-8{fill:#db3b19;}.cls-10,.cls-9{fill:#3edbc0;}.cls-18,.cls-9{stroke:#aedfac;}.cls-10{stroke:#db3b19;}.cls-11{fill:#667ba3;}.cls-12{fill:#9fbdbe;}.cls-13{stroke:#fff;}.cls-14,.cls-18{fill:#aedfac;}.cls-15{stroke:#92b58f;}.cls-16,.cls-24{fill:#55a4e5;}.cls-16{stroke:#c75c14;}.cls-17{fill:#92b58f;}.cls-19{stroke:#55a4e5;}.cls-20{stroke:#dc4a3d;}.cls-21{stroke:#4ece8e;}.cls-22,.cls-23,.cls-24{font-size:5px;font-family:MyriadPro-Regular, Myriad Pro;}.cls-22{fill:#dc4a3d;}.cls-23{fill:#4ece8e;}.cls-25{fill:#fff;}</style></defs><title>encyclopedia_teal_natural</title><g id=\"book\"><path class=\"cls-1\" d=\"M20,0H189.08a0,0,0,0,1,0,0V237.18a0,0,0,0,1,0,0H25a25,25,0,0,1-25-25V20A20,20,0,0,1,20,0Z\"/><rect class=\"cls-2\" x=\"24.16\" width=\"164.92\" height=\"183.88\"/><path class=\"cls-3\" d=\"M25.5,190.76H189.08a0,0,0,0,1,0,0v40a0,0,0,0,1,0,0H26.2a20,20,0,0,1-20-20v-.7a19.3,19.3,0,0,1,19.3-19.3Z\"/><path class=\"cls-4\" d=\"M6.2,210.51H189.08a0,0,0,0,1,0,0v20.25a0,0,0,0,1,0,0H26.2a20,20,0,0,1-20-20v-.25a0,0,0,0,1,0,0Z\"/><path class=\"cls-5\" d=\"M140.2,210.51v42.62l14.5-15.84L169,252.85V210.51Z\"/></g><g id=\"background\"><rect class=\"cls-6\" x=\"33.91\" y=\"59.71\" width=\"146.95\" height=\"115.01\"/></g><g id=\"atoms\"><line class=\"cls-7\" x1=\"118.49\" y1=\"148.26\" x2=\"74.33\" y2=\"137.33\"/><line class=\"cls-7\" x1=\"74.21\" y1=\"87.2\" x2=\"74.33\" y2=\"137.33\"/><circle class=\"cls-8\" cx=\"74.33\" cy=\"137.33\" r=\"2.92\" transform=\"translate(-75.33 92.78) rotate(-45)\"/><line class=\"cls-9\" x1=\"73.16\" y1=\"126.25\" x2=\"82.87\" y2=\"119.42\"/><line class=\"cls-10\" x1=\"63.85\" y1=\"132.8\" x2=\"73.16\" y2=\"126.25\"/><polygon class=\"cls-11\" points=\"42.33 152.39 58.27 119.7 64.4 132.51 42.33 152.39\"/><polyline class=\"cls-11\" points=\"80.46 150.2 64.4 132.51 58.27 119.7\"/><polyline class=\"cls-12\" points=\"80.46 150.2 42.33 152.39 64.4 132.51\"/><polyline class=\"cls-12\" points=\"96.27 117.64 58.27 119.7 80.33 99.95\"/><polyline class=\"cls-11\" points=\"96.27 117.64 80.33 99.95 74.21 87.2\"/><polygon class=\"cls-11\" points=\"58.27 119.7 74.21 87.2 80.33 99.95 58.27 119.7\"/><line class=\"cls-13\" x1=\"74.21\" y1=\"87.2\" x2=\"80.33\" y2=\"99.95\"/><line class=\"cls-13\" x1=\"80.33\" y1=\"99.95\" x2=\"58.27\" y2=\"119.7\"/><line class=\"cls-9\" x1=\"81.81\" y1=\"109.83\" x2=\"83.38\" y2=\"118.95\"/><line class=\"cls-10\" x1=\"80.33\" y1=\"99.95\" x2=\"81.81\" y2=\"109.83\"/><line class=\"cls-13\" x1=\"96.27\" y1=\"117.64\" x2=\"80.33\" y2=\"99.95\"/><line class=\"cls-7\" x1=\"42.33\" y1=\"102.26\" x2=\"86.65\" y2=\"112.76\"/><line class=\"cls-7\" x1=\"74.21\" y1=\"87.2\" x2=\"42.33\" y2=\"102.26\"/><line class=\"cls-7\" x1=\"118.49\" y1=\"97.89\" x2=\"74.21\" y2=\"87.2\"/><line class=\"cls-7\" x1=\"86.65\" y1=\"112.76\" x2=\"118.49\" y2=\"97.89\"/><line class=\"cls-7\" x1=\"118.49\" y1=\"148.26\" x2=\"118.49\" y2=\"97.89\"/><line class=\"cls-7\" x1=\"42.33\" y1=\"102.26\" x2=\"42.33\" y2=\"152.39\"/><line class=\"cls-7\" x1=\"86.65\" y1=\"163.01\" x2=\"42.33\" y2=\"152.39\"/><line class=\"cls-7\" x1=\"118.49\" y1=\"148.26\" x2=\"86.65\" y2=\"163.01\"/><polygon class=\"cls-11\" points=\"80.33 150.14 96.27 117.64 102.58 130.45 80.33 150.14\"/><line class=\"cls-9\" x1=\"93.19\" y1=\"124.83\" x2=\"83.38\" y2=\"118.95\"/><line class=\"cls-10\" x1=\"102.58\" y1=\"130.45\" x2=\"93.19\" y2=\"124.83\"/><polyline class=\"cls-12\" points=\"118.49 148.26 80.33 150.14 102.58 130.45\"/><polyline class=\"cls-11\" points=\"118.49 148.26 102.58 130.45 96.27 117.64\"/><circle class=\"cls-8\" cx=\"42.33\" cy=\"102.26\" r=\"2.92\" transform=\"translate(-59.91 59.89) rotate(-45)\"/><circle class=\"cls-8\" cx=\"74.21\" cy=\"87.2\" r=\"2.92\" transform=\"translate(-39.93 78.01) rotate(-45)\"/><circle class=\"cls-8\" cx=\"118.49\" cy=\"97.89\" r=\"2.92\" transform=\"translate(-34.51 112.45) rotate(-45)\"/><line class=\"cls-13\" x1=\"58.27\" y1=\"119.7\" x2=\"64.4\" y2=\"132.51\"/><line class=\"cls-13\" x1=\"42.33\" y1=\"152.39\" x2=\"64.4\" y2=\"132.51\"/><line class=\"cls-13\" x1=\"80.46\" y1=\"150.2\" x2=\"64.4\" y2=\"132.51\"/><line class=\"cls-13\" x1=\"96.27\" y1=\"117.64\" x2=\"102.58\" y2=\"130.45\"/><line class=\"cls-13\" x1=\"118.49\" y1=\"148.26\" x2=\"102.58\" y2=\"130.45\"/><line class=\"cls-13\" x1=\"80.46\" y1=\"150.2\" x2=\"102.58\" y2=\"130.45\"/><circle class=\"cls-8\" cx=\"58.27\" cy=\"119.7\" r=\"2.92\" transform=\"translate(-67.57 76.26) rotate(-45)\"/><circle class=\"cls-8\" cx=\"96.27\" cy=\"117.64\" r=\"2.92\" transform=\"translate(-54.99 102.53) rotate(-45)\"/><circle class=\"cls-8\" cx=\"80.46\" cy=\"150.2\" r=\"2.92\" transform=\"translate(-82.64 100.89) rotate(-45)\"/><circle class=\"cls-8\" cx=\"118.49\" cy=\"148.01\" r=\"2.92\" transform=\"translate(-69.96 127.14) rotate(-45)\"/><circle class=\"cls-8\" cx=\"42.33\" cy=\"152.39\" r=\"2.92\" transform=\"translate(-95.36 74.57) rotate(-45)\"/><circle class=\"cls-14\" cx=\"83.38\" cy=\"118.95\" r=\"2.92\" transform=\"translate(-45.78 185.43) rotate(-82.21)\"/><circle class=\"cls-8\" cx=\"80.33\" cy=\"99.95\" r=\"2.92\" transform=\"translate(-47.15 86.08) rotate(-45)\"/><circle class=\"cls-8\" cx=\"64.4\" cy=\"132.51\" r=\"2.92\" transform=\"translate(-74.84 84.35) rotate(-45)\"/><circle class=\"cls-8\" cx=\"102.58\" cy=\"130.45\" r=\"2.92\" transform=\"translate(-62.2 110.75) rotate(-45)\"/><line class=\"cls-7\" x1=\"86.65\" y1=\"112.76\" x2=\"86.65\" y2=\"163.01\"/><circle class=\"cls-8\" cx=\"86.65\" cy=\"163.01\" r=\"2.92\" transform=\"translate(-89.89 109.01) rotate(-45)\"/><line class=\"cls-15\" x1=\"83.38\" y1=\"118.95\" x2=\"84.95\" y2=\"115.98\"/><line class=\"cls-16\" x1=\"84.95\" y1=\"115.98\" x2=\"86.63\" y2=\"112.86\"/><circle class=\"cls-17\" cx=\"83.4\" cy=\"118.91\" r=\"0.5\" transform=\"translate(-60.73 136.82) rotate(-62.04)\"/><circle class=\"cls-8\" cx=\"86.65\" cy=\"112.76\" r=\"2.92\" transform=\"translate(-54.36 94.3) rotate(-45)\"/><line class=\"cls-18\" x1=\"143.6\" y1=\"95.3\" x2=\"153.32\" y2=\"88.47\"/><line class=\"cls-10\" x1=\"134.3\" y1=\"101.85\" x2=\"143.6\" y2=\"95.3\"/><line class=\"cls-18\" x1=\"152.26\" y1=\"78.88\" x2=\"153.82\" y2=\"88\"/><line class=\"cls-10\" x1=\"150.78\" y1=\"69\" x2=\"152.26\" y2=\"78.88\"/><line class=\"cls-18\" x1=\"163.64\" y1=\"93.88\" x2=\"153.82\" y2=\"88\"/><line class=\"cls-10\" x1=\"173.03\" y1=\"99.5\" x2=\"163.64\" y2=\"93.88\"/><circle class=\"cls-14\" cx=\"153.82\" cy=\"88\" r=\"2.92\" transform=\"translate(45.78 228.47) rotate(-82.21)\"/><line class=\"cls-15\" x1=\"153.82\" y1=\"88\" x2=\"155.4\" y2=\"85.03\"/><line class=\"cls-16\" x1=\"155.4\" y1=\"85.03\" x2=\"157.08\" y2=\"81.91\"/><circle class=\"cls-17\" cx=\"153.85\" cy=\"87.96\" r=\"0.5\" transform=\"translate(4.02 182.6) rotate(-62.04)\"/><line class=\"cls-7\" x1=\"150.78\" y1=\"69\" x2=\"134.84\" y2=\"101.56\"/><line class=\"cls-7\" x1=\"173.03\" y1=\"99.5\" x2=\"134.84\" y2=\"101.56\"/><line class=\"cls-7\" x1=\"150.78\" y1=\"69\" x2=\"173.03\" y2=\"99.5\"/><line class=\"cls-7\" x1=\"157.08\" y1=\"81.91\" x2=\"173.03\" y2=\"99.5\"/><line class=\"cls-7\" x1=\"150.78\" y1=\"69\" x2=\"157.08\" y2=\"81.91\"/><circle class=\"cls-8\" cx=\"157.09\" cy=\"81.81\" r=\"2.92\" transform=\"translate(-11.84 135.05) rotate(-45)\"/><circle class=\"cls-8\" cx=\"150.78\" cy=\"69\" r=\"2.92\" transform=\"translate(-4.63 126.83) rotate(-45)\"/><circle class=\"cls-8\" cx=\"173.03\" cy=\"99.5\" r=\"2.92\" transform=\"translate(-19.68 151.5) rotate(-45)\"/><circle class=\"cls-8\" cx=\"134.84\" cy=\"101.56\" r=\"2.92\" transform=\"translate(-32.32 125.1) rotate(-45)\"/></g><g id=\"axis\"><line class=\"cls-19\" x1=\"167.74\" y1=\"157.98\" x2=\"150.97\" y2=\"153.83\"/><line class=\"cls-20\" x1=\"150.98\" y1=\"136.52\" x2=\"150.98\" y2=\"153.97\"/><line class=\"cls-21\" x1=\"138.82\" y1=\"159.55\" x2=\"150.97\" y2=\"153.83\"/><text class=\"cls-22\" transform=\"translate(148.42 136.26)\">a1</text><text class=\"cls-23\" transform=\"translate(133.84 162.4)\">a2</text><text class=\"cls-24\" transform=\"translate(168.7 160.56)\">a3</text></g><g id=\"AFLOW\"><path class=\"cls-25\" d=\"M55.26,42.28V37.45H38.44v4.83H33.91V25.38c0-4.24,2.81-7.24,6.79-7.24H53c3.91,0,6.79,3.07,6.79,7.24v16.9Zm0-16.9A2.15,2.15,0,0,0,53,23H40.7a2.12,2.12,0,0,0-2.26,2.41v7.24H55.26Z\"/><path class=\"cls-25\" d=\"M66.58,32.62v9.66H62.06V25.38c0-4.24,2.81-7.24,6.79-7.24H87.94V23H68.85a2.12,2.12,0,0,0-2.26,2.41v2.41H87.94v4.83Z\"/><path class=\"cls-25\" d=\"M97,42.28c-4,0-6.79-3-6.79-7.24V18.14h4.53V35A2.12,2.12,0,0,0,97,37.45h19.09v4.83Z\"/><path class=\"cls-25\" d=\"M137.44,42.28H125.14c-4,0-6.79-3-6.79-7.24V25.38a7,7,0,0,1,6.79-7.24h12.29c3.88,0,6.79,3.1,6.79,7.24V35C144.23,39.35,141.48,42.28,137.44,42.28Zm2.26-16.9A2.18,2.18,0,0,0,137.44,23H125.14a2.29,2.29,0,0,0-2.26,2.41V35a2.12,2.12,0,0,0,2.26,2.41h12.29c1.55,0,2.26-.76,2.26-2.41Z\"/><path class=\"cls-25\" d=\"M174.48,39.76a3.34,3.34,0,0,1-6.47,0L164.19,27.1a.56.56,0,0,0-1,0l-3.82,12.66a3.34,3.34,0,0,1-6.47,0L146.5,18.14H151l4.56,15.17a.56.56,0,0,0,1,0l3.82-12.66a3.34,3.34,0,0,1,6.47,0l3.82,12.66a.56.56,0,0,0,1,0l4.56-15.17h4.53Z\"/></g></svg>" << endl;
    web << "</a>" << endl;
    web << "</div>" << endl;
    web << "<div class=\"col-md-8\">" << endl;
    web << "<h1 class=\"page-title\"> Library of Crystallographic Prototypes</h1>" << endl;
    web << "<p class=\"page-subtitle\">" << endl;
    web << "<p class=\"page-cite\">If you are using this encyclopedia, please cite:<ul>M. J. Mehl, D. Hicks, C. Toher, O. Levy, R. M. Hanson, G. L. W. Hart, and S. Curtarolo,<br>The AFLOW Library of Crystallographic Prototypes: Part 1, Comp. Mat. Sci. 136, S1-S828 (2017).(<a href=\"http://doi.org/10.1016/j.commatsci.2017.01.017\" style=\"color:D0E5FF\">doi=10.1016/j.commatsci.2017.01.017</a>)</ul>" << endl;
    web << "" << endl;
    web << "</p>" << endl;
    web << "</div>" << endl;
    web << "</div>" << endl;
    web << "</div>" << endl;
    web << "</div>" << endl;
    web << "<div class=\"container content-container\">" << endl;
    web << "<div class=\"row\">" << endl;
    web << "<div class=\"col-md-12\">" << endl;
    web << "<h2>" << endl;
    web << "Bergman [Mg<sub>32</sub>(Al,Zn)<sub>49</sub>] Structure:   AB32C48_cI162_204_a_2efg_2gh" << endl;
    web << "</h2>" << endl;
    web << "</div>" << endl;
    web << "</div>" << endl;
    web << "<div class=\"row\">" << endl;
    web << "<div id=\"main-img\" class=\"col-md-12\">" << endl;
    web << "<a href=\"./PICS/AB32C48_cI162_204_a_2efg_2gh_composite_full.png\"><img src=\"./PICS/AB32C48_cI162_204_a_2efg_2gh_composite_full.png\" align=\"middle\" alt=\"Picture of Structure; Click for Big Picture\" class=\"img-res\"/></a>" << endl;
    web << "</div>" << endl;
    web << "<div id=\"jmoldiv\" class=\"col-md-8\"></div>" << endl; 
    web << "<div id=\"jmolbtndiv\" class=\"col-md-4\" style=\"display:none\">" << endl; 
    web << "<button id=\"jmol1\" class=\"btn-default\">load supercell</button>" << endl; 
    web << "<button id=\"jmol2\" class=\"btn-default\">load block</button>" << endl; 
    web << "<br>" << endl; 
    web << "<br>" << endl; 
    web << "<button id=\"jmol3\" class=\"btn-default\">axis a</button>" << endl; 
    web << "<button id=\"jmol4\" class=\"btn-default\">axis b</button>" << endl; 
    web << "<button id=\"jmol5\" class=\"btn-default\">axis c</button>" << endl; 
    web << "<br>" << endl; 
    web << "<br>" << endl; 
    web << "<button id=\"jmol6\" class=\"btn-default\">save PNG+Jmol</button>" << endl; 
    web << "</div>" << endl; 
    web << "</div>" << endl;
    web << "<div class=\"row\">" << endl;
    web << "<div class=\"col-md-12\">" << endl;
    web << "<table class=\"tables\">" << endl;
    web << "<tbody>" << endl;
    web << "<tr>" << endl;
    web << "<td><strong>Prototype</strong></td>" << endl;
    web << "<td>:</td>" << endl;
    web << "<td>Mg<sub>32</sub>(Al,Zn)<sub>49</sub></td" << endl;
    web << "</tr>" << endl;
    web << "<tr>" << endl;
    web << "<td><strong><span style=\"font-weight:400\">AFLOW</span> prototype label</strong></td>" << endl;
    web << "<td>:</td>" << endl;
    web << "<td>AB32C48_cI162_204_a_2efg_2gh</td>" << endl;
    web << "</tr>" << endl;
    web << "<tr>" << endl;
    web << "<td><em><strong>Strukturbericht designation</strong></em></td>" << endl;
    web << "<td>:</td>" << endl;
    web << "<td>None</td>" << endl;
    web << "</tr>" << endl;
    web << "<tr>" << endl;
    web << "<td><strong>Pearson symbol</strong></td>" << endl;
    web << "<td>:</td>" << endl;
    web << "<td>cI162</td>" << endl;
    web << "</tr>" << endl;
    web << "<tr>" << endl;
    web << "<td><strong>Space group number</strong></td>" << endl;
    web << "<td>:</td>" << endl;
    web << "<td>204</td>" << endl;
    web << "</tr>" << endl;
    web << "<tr>" << endl;
    web << "<td><strong>Space group symbol</strong></td>" << endl;
    web << "<td>:</td>" << endl;
    web << "<td>Im<span class=\"overline\">3</span></td>" << endl;
    web << "</tr>" << endl;
    web << "<tr>" << endl;
    web << "<td><strong><span style=\"font-weight:400\">AFLOW</span> prototype command</strong></td>" << endl;
    web << "<td>:</td>" << endl;
    web << "<td><span class=\"monospaced\">aflow --proto=AB32C48_cI162_204_a_2efg_2gh <br>--params=</span>$a,x_2,x_3,x_4,y_5,z_5,y_6,z_6,y_7,z_7,x_8,y_8,z_8$</td>" << endl;
    web << "</tr>" << endl;
    web << "</tbody>" << endl;
    web << "</table>" << endl;
    web << "</div>" << endl;
    web << "</div>" << endl;
    web << "<hr />" << endl;
    web << "<div class=\"row\">" << endl;
    web << "<div class=\"col-md-12\">" << endl;
    web << "<a href=\"./PICS/AB32C48_cI162_204_a_2efg_2gh_composite_full.png\">View the structure from several different perspectives</a>" << endl;
    web << "<br>" << endl;
    web << "<a href=\"./PICS/AB32C48_cI162_204_a_2efg_2gh_prim.png\">View the primitive and conventional cell</a>" << endl;
    web << "</div>" << endl;
    web << "</div>" << endl;
    web << "<hr />" << endl;
    web << "<div class=\"row\">" << endl;
    web << "<div class=\"col-md-12\">" << endl;
    web << "<ul>" << endl;
    web << "<li>Most of the sites in this lattice have random occupancy. In particular, according to (Bergman, 1957): The Al&ndash;I (2a) site is only occupied 80% of the time, the Zn&ndash;I (24g) site is occupied by Al 19% of the time, the Zn&ndash;II (24g) site is occupied by Al 43% of the time, and the Zn&ndash;III (48h) site is occupied by Al 36% of the time. </li>" << endl;
    web << "</ul>" << endl;
    web << "</li>" << endl;
    web << "</ul>" << endl;
    web << "</div>" << endl;
    web << "</div>" << endl;
    web << "<hr />" << endl;
    web << "<div class=\"row\">" << endl;
    web << "<div class=\"col-md-12\">" << endl;
    web << "<h3><a href=\"./cubic_lattice.html#lattice14\">Body-centered Cubic</a> primitive vectors: </h3>" << endl;
    web << "</div>" << endl;
    web << "</div>" << endl;
    web << "<div class=\"row\">" << endl;
    web << "<div class=\"col-md-6\" style=\"padding-top: 60px;\">" << endl;
    web << "\\[" << endl;
    web << "\\begin{array}{ccc}" << endl;
    web << "\\mathbf{a}_1&=&-\\frac12\\,a\\,\\mathbf{\\hat{x}}+\\frac12\\,a\\,\\mathbf{\\hat{y}}+\\frac12\\,a\\,\\mathbf{\\hat{z}}\\\\" << endl;
    web << "\\mathbf{a}_2&=&~\\frac12\\,a\\,\\mathbf{\\hat{x}}-\\frac12\\,a\\,\\mathbf{\\hat{y}}+\\frac12\\,a\\,\\mathbf{\\hat{z}}\\\\" << endl;
    web << "\\mathbf{a}_3&=&~\\frac12\\,a\\,\\mathbf{\\hat{x}}+\\frac12\\,a\\,\\mathbf{\\hat{y}}-\\frac12\\,a\\,\\mathbf{\\hat{z}}\\\\" << endl;
    web << "\\end{array}" << endl;
    web << "\\]" << endl;
    web << "</div>" << endl;
    web << "<div class=\"col-md-6\">" << endl;
    web << "<a href=\"./PICS/AB32C48_cI162_204_a_2efg_2gh_prim.png\">" << endl;
    web << "<img src=\"./PICS/AB32C48_cI162_204_a_2efg_2gh_prim.png\" align=\"middle\" style=\"width:60%\" alt=\"Picture of Structure; Click for Big Picture\" />" << endl;
    web << "</a>" << endl;
    web << "</div>" << endl;
    web << "</div>" << endl;
    web << "<hr />" << endl;
    web << "<div class=\"row\">" << endl;
    web << "<div class=\"col-md-12 overflow-x-scroll\">" << endl;
    web << "<p>" << endl;
    web << "<strong>Basis vectors:</strong>" << endl;
    web << "</p>" << endl;
    web << "\\[" << endl;
    web << "\\begin{array}{ccccccc}" << endl;
    web << "&&\\mbox{Lattice Coordinates}&&\\mbox{Cartesian Coordinates}&\\mbox{Wyckoff Position}&\\mbox{Atom Type}\\\\" << endl;
    web << "\\mathbf{B_1}&=&0\\,\\mathbf{a_1}+0\\,\\mathbf{a_2}+0\\,\\mathbf{a_3}&=&0\\mathbf{\\hat{x}}+0\\mathbf{\\hat{y}}+0\\mathbf{\\hat{z}}&\\left(2a\\right)&\\mbox{Al}\\\\" << endl;
    web << "\\mathbf{B_2}&=&\\frac12\\,\\mathbf{a_1}+\\left(\\frac12+x_2\\right)\\,\\mathbf{a_2}+x_2\\,\\mathbf{a_3}&=&x_2\\,a\\,\\mathbf{\\hat{x}}+\\frac12\\,a\\,\\mathbf{\\hat{z}}&\\left(12e\\right)&\\mbox{Mg I}\\\\" << endl;
    web << "\\mathbf{B_3}&=&\\frac12\\,\\mathbf{a_1}+\\left(\\frac12-x_2\\right)\\,\\mathbf{a_2}-x_2\\,\\mathbf{a_3}&=&-x_2\\,a\\,\\mathbf{\\hat{x}}+\\frac12\\,a\\,\\mathbf{\\hat{z}}&\\left(12e\\right)&\\mbox{Mg I}\\\\" << endl;
    web << "\\mathbf{B_4}&=&x_2\\,\\mathbf{a_1}+\\frac12\\,\\mathbf{a_2}+\\left(\\frac12+x_2\\right)\\,\\mathbf{a_3}&=&\\frac12\\,a\\,\\mathbf{\\hat{x}}+x_2\\,a\\,\\mathbf{\\hat{y}}&\\left(12e\\right)&\\mbox{Mg I}\\\\" << endl;
    web << "\\mathbf{B_5}&=&-x_2\\,\\mathbf{a_1}+\\frac12\\,\\mathbf{a_2}+\\left(\\frac12-x_2\\right)\\,\\mathbf{a_3}&=&\\frac12\\,a\\,\\mathbf{\\hat{x}}-x_2\\,a\\,\\mathbf{\\hat{y}}&\\left(12e\\right)&\\mbox{Mg I}\\\\" << endl;
    web << "\\mathbf{B_6}&=&\\left(\\frac12+x_2\\right)\\,\\mathbf{a_1}+x_2\\,\\mathbf{a_2}+\\frac12\\,\\mathbf{a_3}&=&\\frac12\\,a\\,\\mathbf{\\hat{y}}+x_2\\,a\\,\\mathbf{\\hat{z}}&\\left(12e\\right)&\\mbox{Mg I}\\\\" << endl;
    web << "\\mathbf{B_7}&=&\\left(\\frac12-x_2\\right)\\,\\mathbf{a_1}-x_2\\,\\mathbf{a_2}+\\frac12\\,\\mathbf{a_3}&=&\\frac12\\,a\\,\\mathbf{\\hat{y}}-x_2\\,a\\,\\mathbf{\\hat{z}}&\\left(12e\\right)&\\mbox{Mg I}\\\\" << endl;
    web << "\\mathbf{B_8}&=&\\frac12\\,\\mathbf{a_1}+\\left(\\frac12+x_3\\right)\\,\\mathbf{a_2}+x_3\\,\\mathbf{a_3}&=&x_3\\,a\\,\\mathbf{\\hat{x}}+\\frac12\\,a\\,\\mathbf{\\hat{z}}&\\left(12e\\right)&\\mbox{Mg II}\\\\" << endl;
    web << "\\mathbf{B_9}&=&\\frac12\\,\\mathbf{a_1}+\\left(\\frac12-x_3\\right)\\,\\mathbf{a_2}-x_3\\,\\mathbf{a_3}&=&-x_3\\,a\\,\\mathbf{\\hat{x}}+\\frac12\\,a\\,\\mathbf{\\hat{z}}&\\left(12e\\right)&\\mbox{Mg II}\\\\" << endl;
    web << "\\mathbf{B_{10}}&=&x_3\\,\\mathbf{a_1}+\\frac12\\,\\mathbf{a_2}+\\left(\\frac12+x_3\\right)\\,\\mathbf{a_3}&=&\\frac12\\,a\\,\\mathbf{\\hat{x}}+x_3\\,a\\,\\mathbf{\\hat{y}}&\\left(12e\\right)&\\mbox{Mg II}\\\\" << endl;
    web << "\\mathbf{B_{11}}&=&-x_3\\,\\mathbf{a_1}+\\frac12\\,\\mathbf{a_2}+\\left(\\frac12-x_3\\right)\\,\\mathbf{a_3}&=&\\frac12\\,a\\,\\mathbf{\\hat{x}}-x_3\\,a\\,\\mathbf{\\hat{y}}&\\left(12e\\right)&\\mbox{Mg II}\\\\" << endl;
    web << "\\mathbf{B_{12}}&=&\\left(\\frac12+x_3\\right)\\,\\mathbf{a_1}+x_3\\,\\mathbf{a_2}+\\frac12\\,\\mathbf{a_3}&=&\\frac12\\,a\\,\\mathbf{\\hat{y}}+x_3\\,a\\,\\mathbf{\\hat{z}}&\\left(12e\\right)&\\mbox{Mg II}\\\\" << endl;
    web << "\\mathbf{B_{13}}&=&\\left(\\frac12-x_3\\right)\\,\\mathbf{a_1}-x_3\\,\\mathbf{a_2}+\\frac12\\,\\mathbf{a_3}&=&\\frac12\\,a\\,\\mathbf{\\hat{y}}-x_3\\,a\\,\\mathbf{\\hat{z}}&\\left(12e\\right)&\\mbox{Mg II}\\\\" << endl;
    web << "\\mathbf{B_{14}}&=&2x_4\\,\\mathbf{a_1}+2x_4\\,\\mathbf{a_2}+2x_4\\,\\mathbf{a_3}&=&x_4\\,a\\,\\mathbf{\\hat{x}}+x_4\\,a\\,\\mathbf{\\hat{y}}+x_4\\,a\\,\\mathbf{\\hat{z}}&\\left(16f\\right)&\\mbox{Mg III}\\\\" << endl;
    web << "\\mathbf{B_{15}}&=&2x_4\\,\\mathbf{a_1}&=&-x_4\\,a\\,\\mathbf{\\hat{x}}+x_4\\,a\\,\\mathbf{\\hat{y}}+x_4\\,a\\,\\mathbf{\\hat{z}}&\\left(16f\\right)&\\mbox{Mg III}\\\\" << endl;
    web << "\\mathbf{B_{16}}&=&2x_4\\,\\mathbf{a_2}&=&x_4\\,a\\,\\mathbf{\\hat{x}}-x_4\\,a\\,\\mathbf{\\hat{y}}+x_4\\,a\\,\\mathbf{\\hat{z}}&\\left(16f\\right)&\\mbox{Mg III}\\\\" << endl;
    web << "\\mathbf{B_{17}}&=&2x_4\\,\\mathbf{a_3}&=&x_4\\,a\\,\\mathbf{\\hat{x}}+x_4\\,a\\,\\mathbf{\\hat{y}}-x_4\\,a\\,\\mathbf{\\hat{z}}&\\left(16f\\right)&\\mbox{Mg III}\\\\" << endl;
    web << "\\mathbf{B_{18}}&=&-2x_4\\,\\mathbf{a_1}-2x_4\\,\\mathbf{a_2}-2x_4\\,\\mathbf{a_3}&=&-x_4\\,a\\,\\mathbf{\\hat{x}}-x_4\\,a\\,\\mathbf{\\hat{y}}-x_4\\,a\\,\\mathbf{\\hat{z}}&\\left(16f\\right)&\\mbox{Mg III}\\\\" << endl;
    web << "\\mathbf{B_{19}}&=&-2x_4\\,\\mathbf{a_1}&=&x_4\\,a\\,\\mathbf{\\hat{x}}-x_4\\,a\\,\\mathbf{\\hat{y}}-x_4\\,a\\,\\mathbf{\\hat{z}}&\\left(16f\\right)&\\mbox{Mg III}\\\\" << endl;
    web << "\\mathbf{B_{20}}&=&-2x_4\\,\\mathbf{a_2}&=&-x_4\\,a\\,\\mathbf{\\hat{x}}+x_4\\,a\\,\\mathbf{\\hat{y}}-x_4\\,a\\,\\mathbf{\\hat{z}}&\\left(16f\\right)&\\mbox{Mg III}\\\\" << endl;
    web << "\\mathbf{B_{21}}&=&-2x_4\\,\\mathbf{a_3}&=&-x_4\\,a\\,\\mathbf{\\hat{x}}-x_4\\,a\\,\\mathbf{\\hat{y}}+x_4\\,a\\,\\mathbf{\\hat{z}}&\\left(16f\\right)&\\mbox{Mg III}\\\\" << endl;
    web << "\\mathbf{B_{22}}&=&\\left(y_5+z_5\\right)\\,\\mathbf{a_1}+z_5\\,\\mathbf{a_2}+y_5\\,\\mathbf{a_3}&=&y_5\\,a\\,\\mathbf{\\hat{y}}+z_5\\,a\\,\\mathbf{\\hat{z}}&\\left(24g\\right)&\\mbox{Mg IV}\\\\" << endl;
    web << "\\mathbf{B_{23}}&=&\\left(z_5-y_5\\right)\\,\\mathbf{a_1}+z_5\\,\\mathbf{a_2}-y_5\\,\\mathbf{a_3}&=&-y_5\\,a\\,\\mathbf{\\hat{y}}+z_5\\,a\\,\\mathbf{\\hat{z}}&\\left(24g\\right)&\\mbox{Mg IV}\\\\" << endl;
    web << "\\mathbf{B_{24}}&=&\\left(y_5-z_5\\right)\\,\\mathbf{a_1}-z_5\\,\\mathbf{a_2}+y_5\\,\\mathbf{a_3}&=&y_5\\,a\\,\\mathbf{\\hat{y}}-z_5\\,a\\,\\mathbf{\\hat{z}}&\\left(24g\\right)&\\mbox{Mg IV}\\\\" << endl;
    web << "\\mathbf{B_{25}}&=&-\\left(y_5+z_5\\right)\\,\\mathbf{a_1}-z_5\\,\\mathbf{a_2}-y_5\\,\\mathbf{a_3}&=&-y_5\\,a\\,\\mathbf{\\hat{y}}-z_5\\,a\\,\\mathbf{\\hat{z}}&\\left(24g\\right)&\\mbox{Mg IV}\\\\" << endl;
    web << "\\mathbf{B_{26}}&=&y_5\\,\\mathbf{a_1}+\\left(y_5+z_5\\right)\\,\\mathbf{a_2}+z_5\\,\\mathbf{a_3}&=&z_5\\,a\\,\\mathbf{\\hat{x}}+y_5\\,a\\,\\mathbf{\\hat{z}}&\\left(24g\\right)&\\mbox{Mg IV}\\\\" << endl;
    web << "\\mathbf{B_{27}}&=&y_5\\,\\mathbf{a_1}+\\left(y_5-z_5\\right)\\,\\mathbf{a_2}-z_5\\,\\mathbf{a_3}&=&-z_5\\,a\\,\\mathbf{\\hat{x}}+y_5\\,a\\,\\mathbf{\\hat{z}}&\\left(24g\\right)&\\mbox{Mg IV}\\\\" << endl;
    web << "\\mathbf{B_{28}}&=&-y_5\\,\\mathbf{a_1}+\\left(z_5-y_5\\right)\\,\\mathbf{a_2}+z_5\\,\\mathbf{a_3}&=&z_5\\,a\\,\\mathbf{\\hat{x}}-y_5\\,a\\,\\mathbf{\\hat{z}}&\\left(24g\\right)&\\mbox{Mg IV}\\\\" << endl;
    web << "\\mathbf{B_{29}}&=&-y_5\\,\\mathbf{a_1}-\\left(y_5+z_5\\right)\\,\\mathbf{a_2}-z_5\\,\\mathbf{a_3}&=&-z_5\\,a\\,\\mathbf{\\hat{x}}-y_5\\,a\\,\\mathbf{\\hat{z}}&\\left(24g\\right)&\\mbox{Mg IV}\\\\" << endl;
    web << "\\mathbf{B_{30}}&=&z_5\\,\\mathbf{a_1}+y_5\\,\\mathbf{a_2}+\\left(y_5+z_5\\right)\\,\\mathbf{a_3}&=&y_5\\,a\\,\\mathbf{\\hat{x}}+z_5\\,a\\,\\mathbf{\\hat{y}}&\\left(24g\\right)&\\mbox{Mg IV}\\\\" << endl;
    web << "\\mathbf{B_{31}}&=&z_5\\,\\mathbf{a_1}-y_5\\,\\mathbf{a_2}+\\left(z_5-y_5\\right)\\,\\mathbf{a_3}&=&-y_5\\,a\\,\\mathbf{\\hat{x}}+z_5\\,a\\,\\mathbf{\\hat{y}}&\\left(24g\\right)&\\mbox{Mg IV}\\\\" << endl;
    web << "\\mathbf{B_{32}}&=&-z_5\\,\\mathbf{a_1}+y_5\\,\\mathbf{a_2}+\\left(y_5-z_5\\right)\\,\\mathbf{a_3}&=&y_5\\,a\\,\\mathbf{\\hat{x}}-z_5\\,a\\,\\mathbf{\\hat{y}}&\\left(24g\\right)&\\mbox{Mg IV}\\\\" << endl;
    web << "\\mathbf{B_{33}}&=&-z_5\\,\\mathbf{a_1}-y_5\\,\\mathbf{a_2}-\\left(y_5+z_5\\right)\\,\\mathbf{a_3}&=&-y_5\\,a\\,\\mathbf{\\hat{x}}-z_5\\,a\\,\\mathbf{\\hat{y}}&\\left(24g\\right)&\\mbox{Mg IV}\\\\" << endl;
    web << "\\mathbf{B_{34}}&=&\\left(y_6+z_6\\right)\\,\\mathbf{a_1}+z_6\\,\\mathbf{a_2}+y_6\\,\\mathbf{a_3}&=&y_6\\,a\\,\\mathbf{\\hat{y}}+z_6\\,a\\,\\mathbf{\\hat{z}}&\\left(24g\\right)&\\mbox{Zn I}\\\\" << endl;
    web << "\\mathbf{B_{35}}&=&\\left(z_6-y_6\\right)\\,\\mathbf{a_1}+z_6\\,\\mathbf{a_2}-y_6\\,\\mathbf{a_3}&=&-y_6\\,a\\,\\mathbf{\\hat{y}}+z_6\\,a\\,\\mathbf{\\hat{z}}&\\left(24g\\right)&\\mbox{Zn I}\\\\" << endl;
    web << "\\mathbf{B_{36}}&=&\\left(y_6-z_6\\right)\\,\\mathbf{a_1}-z_6\\,\\mathbf{a_2}+y_6\\,\\mathbf{a_3}&=&y_6\\,a\\,\\mathbf{\\hat{y}}-z_6\\,a\\,\\mathbf{\\hat{z}}&\\left(24g\\right)&\\mbox{Zn I}\\\\" << endl;
    web << "\\mathbf{B_{37}}&=&-\\left(y_6+z_6\\right)\\,\\mathbf{a_1}-z_6\\,\\mathbf{a_2}-y_6\\,\\mathbf{a_3}&=&-y_6\\,a\\,\\mathbf{\\hat{y}}-z_6\\,a\\,\\mathbf{\\hat{z}}&\\left(24g\\right)&\\mbox{Zn I}\\\\" << endl;
    web << "\\mathbf{B_{38}}&=&y_6\\,\\mathbf{a_1}+\\left(y_6+z_6\\right)\\,\\mathbf{a_2}+z_6\\,\\mathbf{a_3}&=&z_6\\,a\\,\\mathbf{\\hat{x}}+y_6\\,a\\,\\mathbf{\\hat{z}}&\\left(24g\\right)&\\mbox{Zn I}\\\\" << endl;
    web << "\\mathbf{B_{39}}&=&y_6\\,\\mathbf{a_1}+\\left(y_6-z_6\\right)\\,\\mathbf{a_2}-z_6\\,\\mathbf{a_3}&=&-z_6\\,a\\,\\mathbf{\\hat{x}}+y_6\\,a\\,\\mathbf{\\hat{z}}&\\left(24g\\right)&\\mbox{Zn I}\\\\" << endl;
    web << "\\mathbf{B_{40}}&=&-y_6\\,\\mathbf{a_1}+\\left(z_6-y_6\\right)\\,\\mathbf{a_2}+z_6\\,\\mathbf{a_3}&=&z_6\\,a\\,\\mathbf{\\hat{x}}-y_6\\,a\\,\\mathbf{\\hat{z}}&\\left(24g\\right)&\\mbox{Zn I}\\\\" << endl;
    web << "\\mathbf{B_{41}}&=&-y_6\\,\\mathbf{a_1}-\\left(y_6+z_6\\right)\\,\\mathbf{a_2}-z_6\\,\\mathbf{a_3}&=&-z_6\\,a\\,\\mathbf{\\hat{x}}-y_6\\,a\\,\\mathbf{\\hat{z}}&\\left(24g\\right)&\\mbox{Zn I}\\\\" << endl;
    web << "\\mathbf{B_{42}}&=&z_6\\,\\mathbf{a_1}+y_6\\,\\mathbf{a_2}+\\left(y_6+z_6\\right)\\,\\mathbf{a_3}&=&y_6\\,a\\,\\mathbf{\\hat{x}}+z_6\\,a\\,\\mathbf{\\hat{y}}&\\left(24g\\right)&\\mbox{Zn I}\\\\" << endl;
    web << "\\mathbf{B_{43}}&=&z_6\\,\\mathbf{a_1}-y_6\\,\\mathbf{a_2}+\\left(z_6-y_6\\right)\\,\\mathbf{a_3}&=&-y_6\\,a\\,\\mathbf{\\hat{x}}+z_6\\,a\\,\\mathbf{\\hat{y}}&\\left(24g\\right)&\\mbox{Zn I}\\\\" << endl;
    web << "\\mathbf{B_{44}}&=&-z_6\\,\\mathbf{a_1}+y_6\\,\\mathbf{a_2}+\\left(y_6-z_6\\right)\\,\\mathbf{a_3}&=&y_6\\,a\\,\\mathbf{\\hat{x}}-z_6\\,a\\,\\mathbf{\\hat{y}}&\\left(24g\\right)&\\mbox{Zn I}\\\\" << endl;
    web << "\\mathbf{B_{45}}&=&-z_6\\,\\mathbf{a_1}-y_6\\,\\mathbf{a_2}-\\left(y_6+z_6\\right)\\,\\mathbf{a_3}&=&-y_6\\,a\\,\\mathbf{\\hat{x}}-z_6\\,a\\,\\mathbf{\\hat{y}}&\\left(24g\\right)&\\mbox{Zn I}\\\\" << endl;
    web << "\\mathbf{B_{46}}&=&\\left(y_7+z_7\\right)\\,\\mathbf{a_1}+z_7\\,\\mathbf{a_2}+y_7\\,\\mathbf{a_3}&=&y_7\\,a\\,\\mathbf{\\hat{y}}+z_7\\,a\\,\\mathbf{\\hat{z}}&\\left(24g\\right)&\\mbox{Zn II}\\\\" << endl;
    web << "\\mathbf{B_{47}}&=&\\left(z_7-y_7\\right)\\,\\mathbf{a_1}+z_7\\,\\mathbf{a_2}-y_7\\,\\mathbf{a_3}&=&-y_7\\,a\\,\\mathbf{\\hat{y}}+z_7\\,a\\,\\mathbf{\\hat{z}}&\\left(24g\\right)&\\mbox{Zn II}\\\\" << endl;
    web << "\\mathbf{B_{48}}&=&\\left(y_7-z_7\\right)\\,\\mathbf{a_1}-z_7\\,\\mathbf{a_2}+y_7\\,\\mathbf{a_3}&=&y_7\\,a\\,\\mathbf{\\hat{y}}-z_7\\,a\\,\\mathbf{\\hat{z}}&\\left(24g\\right)&\\mbox{Zn II}\\\\" << endl;
    web << "\\mathbf{B_{49}}&=&-\\left(y_7+z_7\\right)\\,\\mathbf{a_1}-z_7\\,\\mathbf{a_2}-y_7\\,\\mathbf{a_3}&=&-y_7\\,a\\,\\mathbf{\\hat{y}}-z_7\\,a\\,\\mathbf{\\hat{z}}&\\left(24g\\right)&\\mbox{Zn II}\\\\" << endl;
    web << "\\mathbf{B_{50}}&=&y_7\\,\\mathbf{a_1}+\\left(y_7+z_7\\right)\\,\\mathbf{a_2}+z_7\\,\\mathbf{a_3}&=&z_7\\,a\\,\\mathbf{\\hat{x}}+y_7\\,a\\,\\mathbf{\\hat{z}}&\\left(24g\\right)&\\mbox{Zn II}\\\\" << endl;
    web << "\\mathbf{B_{51}}&=&y_7\\,\\mathbf{a_1}+\\left(y_7-z_7\\right)\\,\\mathbf{a_2}-z_7\\,\\mathbf{a_3}&=&-z_7\\,a\\,\\mathbf{\\hat{x}}+y_7\\,a\\,\\mathbf{\\hat{z}}&\\left(24g\\right)&\\mbox{Zn II}\\\\" << endl;
    web << "\\mathbf{B_{52}}&=&-y_7\\,\\mathbf{a_1}+\\left(z_7-y_7\\right)\\,\\mathbf{a_2}+z_7\\,\\mathbf{a_3}&=&z_7\\,a\\,\\mathbf{\\hat{x}}-y_7\\,a\\,\\mathbf{\\hat{z}}&\\left(24g\\right)&\\mbox{Zn II}\\\\" << endl;
    web << "\\mathbf{B_{53}}&=&-y_7\\,\\mathbf{a_1}-\\left(y_7+z_7\\right)\\,\\mathbf{a_2}-z_7\\,\\mathbf{a_3}&=&-z_7\\,a\\,\\mathbf{\\hat{x}}-y_7\\,a\\,\\mathbf{\\hat{z}}&\\left(24g\\right)&\\mbox{Zn II}\\\\" << endl;
    web << "\\mathbf{B_{54}}&=&z_7\\,\\mathbf{a_1}+y_7\\,\\mathbf{a_2}+\\left(y_7+z_7\\right)\\,\\mathbf{a_3}&=&y_7\\,a\\,\\mathbf{\\hat{x}}+z_7\\,a\\,\\mathbf{\\hat{y}}&\\left(24g\\right)&\\mbox{Zn II}\\\\" << endl;
    web << "\\mathbf{B_{55}}&=&z_7\\,\\mathbf{a_1}-y_7\\,\\mathbf{a_2}+\\left(z_7-y_7\\right)\\,\\mathbf{a_3}&=&-y_7\\,a\\,\\mathbf{\\hat{x}}+z_7\\,a\\,\\mathbf{\\hat{y}}&\\left(24g\\right)&\\mbox{Zn II}\\\\" << endl;
    web << "\\mathbf{B_{56}}&=&-z_7\\,\\mathbf{a_1}+y_7\\,\\mathbf{a_2}+\\left(y_7-z_7\\right)\\,\\mathbf{a_3}&=&y_7\\,a\\,\\mathbf{\\hat{x}}-z_7\\,a\\,\\mathbf{\\hat{y}}&\\left(24g\\right)&\\mbox{Zn II}\\\\" << endl;
    web << "\\mathbf{B_{57}}&=&-z_7\\,\\mathbf{a_1}-y_7\\,\\mathbf{a_2}-\\left(y_7+z_7\\right)\\,\\mathbf{a_3}&=&-y_7\\,a\\,\\mathbf{\\hat{x}}-z_7\\,a\\,\\mathbf{\\hat{y}}&\\left(24g\\right)&\\mbox{Zn II}\\\\" << endl;
    web << "\\mathbf{B_{58}}&=&\\left(y_8+z_8\\right)\\,\\mathbf{a_1}+\\left(z_8+x_8\\right)\\,\\mathbf{a_2}+\\left(x_8+y_8\\right)\\,\\mathbf{a_3}&=&x_8\\,a\\,\\mathbf{\\hat{x}}+y_8\\,a\\,\\mathbf{\\hat{y}}+z_8\\,a\\,\\mathbf{\\hat{z}}&\\left(48h\\right)&\\mbox{Zn III}\\\\" << endl;
    web << "\\mathbf{B_{59}}&=&\\left(z_8-y_8\\right)\\,\\mathbf{a_1}+\\left(z_8-x_8\\right)\\,\\mathbf{a_2}-\\left(x_8+y_8\\right)\\,\\mathbf{a_3}&=&-x_8\\,a\\,\\mathbf{\\hat{x}}-y_8\\,a\\,\\mathbf{\\hat{y}}+z_8\\,a\\,\\mathbf{\\hat{z}}&\\left(48h\\right)&\\mbox{Zn III}\\\\" << endl;
    web << "\\mathbf{B_{60}}&=&\\left(y_8-z_8\\right)\\,\\mathbf{a_1}-\\left(z_8+x_8\\right)\\,\\mathbf{a_2}+\\left(y_8-x_8\\right)\\,\\mathbf{a_3}&=&-x_8\\,a\\,\\mathbf{\\hat{x}}+y_8\\,a\\,\\mathbf{\\hat{y}}-z_8\\,a\\,\\mathbf{\\hat{z}}&\\left(48h\\right)&\\mbox{Zn III}\\\\" << endl;
    web << "\\mathbf{B_{61}}&=&-\\left(y_8+z_8\\right)\\,\\mathbf{a_1}+\\left(x_8-z_8\\right)\\,\\mathbf{a_2}+\\left(x_8-y_8\\right)\\,\\mathbf{a_3}&=&x_8\\,a\\,\\mathbf{\\hat{x}}-y_8\\,a\\,\\mathbf{\\hat{y}}-z_8\\,a\\,\\mathbf{\\hat{z}}&\\left(48h\\right)&\\mbox{Zn III}\\\\" << endl;
    web << "\\mathbf{B_{62}}&=&-\\left(y_8+z_8\\right)\\,\\mathbf{a_1}-\\left(z_8+x_8\\right)\\,\\mathbf{a_2}-\\left(x_8+y_8\\right)\\,\\mathbf{a_3}&=&-x_8\\,a\\,\\mathbf{\\hat{x}}-y_8\\,a\\,\\mathbf{\\hat{y}}-z_8\\,a\\,\\mathbf{\\hat{z}}&\\left(48h\\right)&\\mbox{Zn III}\\\\" << endl;
    web << "\\mathbf{B_{63}}&=&\\left(y_8-z_8\\right)\\,\\mathbf{a_1}+\\left(x_8-z_8\\right)\\,\\mathbf{a_2}+\\left(x_8+y_8\\right)\\,\\mathbf{a_3}&=&+x_8\\,a\\,\\mathbf{\\hat{x}}+y_8\\,a\\,\\mathbf{\\hat{y}}-z_8\\,a\\,\\mathbf{\\hat{z}}&\\left(48h\\right)&\\mbox{Zn III}\\\\" << endl;
    web << "\\mathbf{B_{64}}&=&\\left(z_8-y_8\\right)\\,\\mathbf{a_1}+\\left(z_8+x_8\\right)\\,\\mathbf{a_2}+\\left(x_8-y_8\\right)\\,\\mathbf{a_3}&=&+x_8\\,a\\,\\mathbf{\\hat{x}}-y_8\\,a\\,\\mathbf{\\hat{y}}+z_8\\,a\\,\\mathbf{\\hat{z}}&\\left(48h\\right)&\\mbox{Zn III}\\\\" << endl;
    web << "\\mathbf{B_{65}}&=&\\left(y_8+z_8\\right)\\,\\mathbf{a_1}+\\left(z_8-x_8\\right)\\,\\mathbf{a_2}+\\left(y_8-x_8\\right)\\,\\mathbf{a_3}&=&-x_8\\,a\\,\\mathbf{\\hat{x}}+y_8\\,a\\,\\mathbf{\\hat{y}}+z_8\\,a\\,\\mathbf{\\hat{z}}&\\left(48h\\right)&\\mbox{Zn III}\\\\" << endl;
    web << "\\mathbf{B_{66}}&=&\\left(x_8+y_8\\right)\\,\\mathbf{a_1}+\\left(y_8+z_8\\right)\\,\\mathbf{a_2}+\\left(z_8+x_8\\right)\\,\\mathbf{a_3}&=&z_8\\,a\\,\\mathbf{\\hat{x}}+x_8\\,a\\,\\mathbf{\\hat{y}}+y_8\\,a\\,\\mathbf{\\hat{z}}&\\left(48h\\right)&\\mbox{Zn III}\\\\" << endl;
    web << "\\mathbf{B_{67}}&=&\\left(y_8-x_8\\right)\\,\\mathbf{a_1}+\\left(y_8-z_8\\right)\\,\\mathbf{a_2}-\\left(z_8+x_8\\right)\\,\\mathbf{a_3}&=&-z_8\\,a\\,\\mathbf{\\hat{x}}-x_8\\,a\\,\\mathbf{\\hat{y}}+y_8\\,a\\,\\mathbf{\\hat{z}}&\\left(48h\\right)&\\mbox{Zn III}\\\\" << endl;
    web << "\\mathbf{B_{68}}&=&\\left(x_8-y_8\\right)\\,\\mathbf{a_1}-\\left(y_8+z_8\\right)\\,\\mathbf{a_2}+\\left(x_8-z_8\\right)\\,\\mathbf{a_3}&=&-z_8\\,a\\,\\mathbf{\\hat{x}}+x_8\\,a\\,\\mathbf{\\hat{y}}-y_8\\,a\\,\\mathbf{\\hat{z}}&\\left(48h\\right)&\\mbox{Zn III}\\\\" << endl;
    web << "\\mathbf{B_{69}}&=&-\\left(x_8+y_8\\right)\\,\\mathbf{a_1}+\\left(z_8-y_8\\right)\\,\\mathbf{a_2}+\\left(z_8-x_8\\right)\\,\\mathbf{a_3}&=&z_8\\,a\\,\\mathbf{\\hat{x}}-x_8\\,a\\,\\mathbf{\\hat{y}}-y_8\\,a\\,\\mathbf{\\hat{z}}&\\left(48h\\right)&\\mbox{Zn III}\\\\" << endl;
    web << "\\mathbf{B_{70}}&=&-\\left(x_8+y_8\\right)\\,\\mathbf{a_1}-\\left(y_8+z_8\\right)\\,\\mathbf{a_2}-\\left(z_8+x_8\\right)\\,\\mathbf{a_3}&=&-z_8\\,a\\,\\mathbf{\\hat{x}}-x_8\\,a\\,\\mathbf{\\hat{y}}-y_8\\,a\\,\\mathbf{\\hat{z}}&\\left(48h\\right)&\\mbox{Zn III}\\\\" << endl;
    web << "\\mathbf{B_{71}}&=&\\left(x_8-y_8\\right)\\,\\mathbf{a_1}+\\left(z_8-y_8\\right)\\,\\mathbf{a_2}+\\left(z_8+x_8\\right)\\,\\mathbf{a_3}&=&+z_8\\,a\\,\\mathbf{\\hat{x}}+x_8\\,a\\,\\mathbf{\\hat{y}}-y_8\\,a\\,\\mathbf{\\hat{z}}&\\left(48h\\right)&\\mbox{Zn III}\\\\" << endl;
    web << "\\mathbf{B_{72}}&=&\\left(y_8-x_8\\right)\\,\\mathbf{a_1}+\\left(y_8+z_8\\right)\\,\\mathbf{a_2}+\\left(z_8-x_8\\right)\\,\\mathbf{a_3}&=&+z_8\\,a\\,\\mathbf{\\hat{x}}-x_8\\,a\\,\\mathbf{\\hat{y}}+y_8\\,a\\,\\mathbf{\\hat{z}}&\\left(48h\\right)&\\mbox{Zn III}\\\\" << endl;
    web << "\\mathbf{B_{73}}&=&\\left(x_8+y_8\\right)\\,\\mathbf{a_1}+\\left(y_8-z_8\\right)\\,\\mathbf{a_2}+\\left(x_8-z_8\\right)\\,\\mathbf{a_3}&=&-z_8\\,a\\,\\mathbf{\\hat{x}}+x_8\\,a\\,\\mathbf{\\hat{y}}+y_8\\,a\\,\\mathbf{\\hat{z}}&\\left(48h\\right)&\\mbox{Zn III}\\\\" << endl;
    web << "\\mathbf{B_{74}}&=&\\left(z_8+x_8\\right)\\,\\mathbf{a_1}+\\left(x_8+y_8\\right)\\,\\mathbf{a_2}+\\left(y_8+z_8\\right)\\,\\mathbf{a_3}&=&y_8\\,a\\,\\mathbf{\\hat{x}}+z_8\\,a\\,\\mathbf{\\hat{y}}+x_8\\,a\\,\\mathbf{\\hat{z}}&\\left(48h\\right)&\\mbox{Zn III}\\\\" << endl;
    web << "\\mathbf{B_{75}}&=&\\left(x_8-z_8\\right)\\,\\mathbf{a_1}+\\left(x_8-y_8\\right)\\,\\mathbf{a_2}-\\left(y_8+z_8\\right)\\,\\mathbf{a_3}&=&-y_8\\,a\\,\\mathbf{\\hat{x}}-z_8\\,a\\,\\mathbf{\\hat{y}}+x_8\\,a\\,\\mathbf{\\hat{z}}&\\left(48h\\right)&\\mbox{Zn III}\\\\" << endl;
    web << "\\mathbf{B_{76}}&=&\\left(z_8-x_8\\right)\\,\\mathbf{a_1}-\\left(x_8+y_8\\right)\\,\\mathbf{a_2}+\\left(z_8-y_8\\right)\\,\\mathbf{a_3}&=&-y_8\\,a\\,\\mathbf{\\hat{x}}+z_8\\,a\\,\\mathbf{\\hat{y}}-x_8\\,a\\,\\mathbf{\\hat{z}}&\\left(48h\\right)&\\mbox{Zn III}\\\\" << endl;
    web << "\\mathbf{B_{77}}&=&-\\left(z_8+x_8\\right)\\,\\mathbf{a_1}+\\left(y_8-x_8\\right)\\,\\mathbf{a_2}+\\left(y_8-z_8\\right)\\,\\mathbf{a_3}&=&y_8\\,a\\,\\mathbf{\\hat{x}}-z_8\\,a\\,\\mathbf{\\hat{y}}-x_8\\,a\\,\\mathbf{\\hat{z}}&\\left(48h\\right)&\\mbox{Zn III}\\\\" << endl;
    web << "\\mathbf{B_{78}}&=&-\\left(z_8+x_8\\right)\\,\\mathbf{a_1}-\\left(x_8+y_8\\right)\\,\\mathbf{a_2}-\\left(y_8+z_8\\right)\\,\\mathbf{a_3}&=&-y_8\\,a\\,\\mathbf{\\hat{x}}-z_8\\,a\\,\\mathbf{\\hat{y}}-x_8\\,a\\,\\mathbf{\\hat{z}}&\\left(48h\\right)&\\mbox{Zn III}\\\\" << endl;
    web << "\\mathbf{B_{79}}&=&\\left(z_8-x_8\\right)\\,\\mathbf{a_1}+\\left(y_8-x_8\\right)\\,\\mathbf{a_2}+\\left(y_8+z_8\\right)\\,\\mathbf{a_3}&=&+y_8\\,a\\,\\mathbf{\\hat{x}}+z_8\\,a\\,\\mathbf{\\hat{y}}-x_8\\,a\\,\\mathbf{\\hat{z}}&\\left(48h\\right)&\\mbox{Zn III}\\\\" << endl;
    web << "\\mathbf{B_{80}}&=&\\left(x_8-z_8\\right)\\,\\mathbf{a_1}+\\left(x_8+y_8\\right)\\,\\mathbf{a_2}+\\left(y_8-z_8\\right)\\,\\mathbf{a_3}&=&+y_8\\,a\\,\\mathbf{\\hat{x}}-z_8\\,a\\,\\mathbf{\\hat{y}}+x_8\\,a\\,\\mathbf{\\hat{z}}&\\left(48h\\right)&\\mbox{Zn III}\\\\" << endl;
    web << "\\mathbf{B_{81}}&=&\\left(z_8+x_8\\right)\\,\\mathbf{a_1}+\\left(x_8-y_8\\right)\\,\\mathbf{a_2}+\\left(z_8-y_8\\right)\\,\\mathbf{a_3}&=&-y_8\\,a\\,\\mathbf{\\hat{x}}+z_8\\,a\\,\\mathbf{\\hat{y}}+x_8\\,a\\,\\mathbf{\\hat{z}}&\\left(48h\\right)&\\mbox{Zn III}\\\\" << endl;
    web << "\\end{array}" << endl;
    web << "\\]" << endl;
    web << "</div>" << endl;
    web << "</div>" << endl;
    web << "<hr />" << endl;
    web << "<div class=\"row\">" << endl;
    web << "<div class=\"col-md-12\">" << endl;
    web << "<h3>References</h3>" << endl;
    web << "<ul>" << endl;
    web << "<li> G. Bergman, J. L. T. Waugh, and L. Pauling, <em>The crystal structure of the metallic phase Mg<sub>32</sub>(Al, Zn)<sub>49</sub></em>, Acta Cryst. <strong>10</strong>, 254&ndash;259 (1957), <a href=\"http://doi.org/10.1107/S0365110X57000808\">doi:10.1107/S0365110X57000808</a>.</li>" << endl;
    web << "</ul>" << endl;
    web << "</div>" << endl;
    web << "</div>" << endl;
    web << "<hr />" << endl;
    web << "<div class=\"row\">" << endl;
    web << "<div class=\"col-md-12\">" << endl;
    web << "<h3>Geometry files</h3>" << endl;
    web << "<ul>" << endl;
    web << "<li><a href=\"./CIF/AB32C48_cI162_204_a_2efg_2gh.cif\">CIF</a></li>" << endl;
    web << "<li><a href=\"./POSCAR/POSCAR.AB32C48_cI162_204_a_2efg_2gh\">POSCAR</a></li>" << endl;
    web << "</ul>" << endl;
    web << "</div>" << endl;
    web << "</div>" << endl;
    web << "<hr />" << endl;
    web << "<div class=\"row\" id=\"aflow_cmd_row--params\">" << endl;
    web << "<div class=\"col-md-12\" style=\"padding-bottom:30px;\">" << endl;
    web << "<h3>Prototype Generator</h3>" << endl;
    web << "<span class=\"monospaced\">aflow --proto=AB32C48_cI162_204_a_2efg_2gh --params=</span>" << endl;
    web << "</div>" << endl;
    web << "</div>" << endl;
    web << "<div class=\"row\" id=\"aflow_cmd_row--species\">" << endl;
    web << "<div class=\"col-md-12\">" << endl;
    web << "<h4>Species:</h4>" << endl;
    web << "</div>" << endl;
    web << "</div>" << endl;
    web << "<div class=\"row\" style=\"padding-top:30px\">" << endl;
    web << "<div class=\"col-md-12\">" << endl;
    web << "<button id=\"vasp\" class=\"btn-default\">VASP Output</button>" << endl;
    web << "<button id=\"qe\" class=\"btn-default\">QE Output</button>" << endl;
    web << "<button id=\"aims\" class=\"btn-default\">FHI-AIMS Output</button>" << endl;
    web << "<button id=\"abinit\" class=\"btn-default\">ABINIT Output</button>" << endl;
    web << "<button id=\"wyccar\" class=\"btn-default\">WYCKAR Output</button>" << endl;
    web << "<button id=\"tojmol\" class=\"btn-default\">Refresh Jmol</button>" << endl;
    web << "</div>" << endl;
    web << "</div>" << endl;
    web << "<div class=\"row\">" << endl;
    web << "<div class=\"col-md-12\"><h4>Running:</h4></div>" << endl;
    web << "<div class=\"col-md-12 monospaced\" id=\"command\"></div>" << endl;
    web << "<div class=\"col-md-12\"><h4>Output:</h4></div>" << endl;
    web << "<div class=\"col-md-12 output-div\" id=\"output\"></div>" << endl;
    web << "</div>" << endl;
    web << "<script>" << endl;
    web << "String.prototype.replaceAll=function(search,replacement){" << endl;
    web << "var target=this;" << endl;
    web << "return target.split(search).join(replacement);" << endl;
    web << "};" << endl;
    web << "var aflow_proto=\"AB32C48_cI162_204_a_2efg_2gh\";" << endl;
    web << "var aflow_params_str=\"a,x_2,x_3,x_4,y_5,z_5,y_6,z_6,y_7,z_7,x_8,y_8,z_8\";" << endl;
    web << "var species=\"AB32C48_cI162_204_a_2efg_2gh\".split('_')[0].replace(/[0-9]/g, '');" << endl;
    web << "var elements=['Al', 'Mg', 'Zn'];" << endl;
    web << "var aflow_parameter_values=[14.16, 0.8203, 0.5998, 0.1836, 0.2942, 0.8806, 0.0908, 0.8499, 0.1748, 0.6993, 0.686, 0.0969, 0.332];" << endl;
    web << "var aflow_params=aflow_params_str.split(\",\");" << endl;
    web << "var aflow_param_no_tex=aflow_params_str.replaceAll(\"/\", \"--\").replaceAll(\"\\\\\", \"\").replaceAll(\"_\", \"\").replaceAll(\"{\", \"\").replaceAll(\"}\",\"\").split(\",\");" << endl;
    web << "for(var i=0;i<aflow_params.length;i++){" << endl;
    web << "$(\"#aflow_cmd_row--params\").append(" << endl;
    web << "\"<div class='col-md-4' style='padding-bottom:10px;'>\" +" << endl;
    web << "\"<label class='param_label' for='\"+aflow_param_no_tex[i]+\"'>$\"+aflow_params[i]+\"$</label>\"+" << endl;
    web << "\"<input style='width:9.6em;' id='\"+aflow_param_no_tex[i]+\"' type='number' value='\"+aflow_parameter_values[i]+\"' step='0.01'>\"+" << endl;
    web << "\"</div>\"" << endl;
    web << ")" << endl;
    web << "}" << endl;
    web << "for(var i=0;i<species.length;i++){" << endl;
    web << "$(\"#aflow_cmd_row--species\").append(" << endl;
    web << "\"<div class='col-md-4' style='padding-bottom:10px;'>\" +" << endl;
    web << "\"<label class='param_label' for='species-\"+species[i]+\"'>\"+species[i]+\" </label>\" +" << endl;
    web << "\"<input style='width:9.6em;' id='species-\"+species[i]+\"' type='text' maxlength='2' value='\"+elements[i]+\"'>\" +" << endl;
    web << "\"</div>\"" << endl;
    web << ")" << endl;
    web << "}" << endl;
    web << "$(\"#vasp\").click(function(){" << endl;
    web << "var argv=[];" << endl;
    web << "var argv_species=[];" << endl;
    web << "for(var i=0;i<aflow_param_no_tex.length;i++){" << endl;
    web << "argv.push($(\"#\"+aflow_param_no_tex[i]).val());" << endl;
    web << "}" << endl;
    web << "for(var i=0;i<species.length;i++){" << endl;
    web << "if ($(\"#species-\"+species[i]).val()!==\"\"){" << endl;
    web << "argv_species.push($(\"#species-\"+species[i]).val());" << endl;
    web << "}" << endl;
    web << "}" << endl;
    web << "var arg_str=argv.join(\',\');" << endl;
    web << "var arg_str_species=argv_species.join(\':\');" << endl;
    web << "$.ajax({" << endl;
    web << "type: \"POST\"," << endl;
    web << "url: \"http://aflowlib.duke.edu/users/egossett/anrl_aflow_proto/vasp/\"," << endl;
    web << "data: \"&proto=\"+aflow_proto+\"&params=\"+arg_str+\"&species=\"+arg_str_species," << endl;
    web << "beforeSend: function(){" << endl;
    web << "$(\"#output\").append(\"<p id=\'load-animation\' style=\'margin:auto;width:0%;padding-top:210px;color:#3A3E8C\'><i class=\'fa fa-spinner fa-pulse fa-4x\'></i></p>\");" << endl;
    web << "}," << endl;
    web << "success: function(d){" << endl;
    web << "$(\"#command\").empty();" << endl;
    web << "if(arg_str_species.length){" << endl;
    web << "$(\"#command\").append(\"<p style='overflow-x:scroll;padding:15px 0px;'> aflow --proto=\"+aflow_proto+\":\"+arg_str_species+\" --params=\"+arg_str);" << endl;
    web << "}else{" << endl;
    web << "$(\"#command\").append(\"<p style='overflow-x:scroll;padding:15px 0px;'> aflow --proto=\"+aflow_proto+arg_str_species+\" --params=\"+arg_str);" << endl;
    web << "}" << endl;
    web << "$(\"#output\").empty();" << endl;
    web << "$(\"#output\").append(\"<p>\"+d+\"</p>\");" << endl;
    web << "}," << endl;
    web << "error: function(d){" << endl;
    web << "$(\"#output\").empty();" << endl;
    web << "$(\"#output\").append(\"<p> Command failed, please check your input!</p>\");" << endl;
    web << "}" << endl;
    web << "});" << endl;
    web << "});" << endl;
    web << "//Click handlers" << endl;
    web << "$(\"#qe\").click(function(){" << endl;
    web << "var argv=[];" << endl;
    web << "var argv_species=[];" << endl;
    web << "for(var i=0;i<aflow_param_no_tex.length;i++){" << endl;
    web << "argv.push($(\"#\"+aflow_param_no_tex[i]).val());" << endl;
    web << "}" << endl;
    web << "for(var i=0;i<species.length;i++){" << endl;
    web << "if ($(\"#species-\"+species[i]).val()!==\"\"){" << endl;
    web << "argv_species.push($(\"#species-\"+species[i]).val());" << endl;
    web << "}" << endl;
    web << "}" << endl;
    web << "var arg_str=argv.join(',');" << endl;
    web << "var arg_str_species=argv_species.join(':');" << endl;
    web << "$.ajax({" << endl;
    web << "type: \"POST\"," << endl;
    web << "url: \"http://aflowlib.duke.edu/users/egossett/anrl_aflow_proto/qe/\"," << endl;
    web << "data: \"&proto=\"+aflow_proto+\"&params=\"+arg_str+\"&species=\"+arg_str_species," << endl;
    web << "beforeSend: function(){" << endl;
    web << "$(\"#output\").append(\"<p id='load-animation' style='margin:auto;width:0%;padding-top:210px;color:#3A3E8C'><i class=\'fa fa-spinner fa-pulse fa-4x\'></i></p>\");" << endl;
    web << "}," << endl;
    web << "success: function(d){" << endl;
    web << "var lines=d.split(\'\\n\');" << endl;
    web << "for(var i=0;i<lines.length;i++){" << endl;
    web << "if(lines[i].indexOf(\"ntyp=\")!=-1){" << endl;
    web << "lines[i]=lines[i].replace(\',\',\'\');" << endl;
    web << "}" << endl;
    web << "if(lines[i].indexOf(\"ecutwfc=\")!=-1){" << endl;
    web << "lines.splice(i,1);" << endl;
    web << "}" << endl;
    web << "if(lines[i].indexOf(\"ecutrho=\")!=-1){" << endl;
    web << "lines.splice(i,1);" << endl;
    web << "}" << endl;
    web << "}" << endl;
    web << "var output=lines.join(\'\\n\');" << endl;
    web << "$(\"#command\").empty();" << endl;
    web << "if(arg_str_species.length){" << endl;
    web << "$(\"#command\").append(\"<p style=\'overflow-x:scroll;padding:15px 0px;\'> aflow --proto=\"+aflow_proto+\":\"+arg_str_species+\" --params=\"+arg_str+\" --qe\");" << endl;
    web << "}else{" << endl;
    web << "$(\"#command\").append(\"<p style=\'overflow-x:scroll;padding:15px 0px;\'> aflow --proto=\"+aflow_proto+arg_str_species+\" --params=\"+arg_str+\" --qe\");" << endl;
    web << "}" << endl;
    web << "$(\"#output\").empty();" << endl;
    web << "$(\"#output\").append(\"<p>\"+output+\"</p>\");" << endl;
    web << "}," << endl;
    web << "error: function(d){" << endl;
    web << "$(\"#output\").empty();" << endl;
    web << "$(\"#output\").append(\"<p> Command failed, please check your input!</p>\");" << endl;
    web << "}" << endl;
    web << "});" << endl;
    web << "});" << endl;
    web << "//Click handlers" << endl;
    web << "$(\"#abinit\").click(function(){" << endl;
    web << "var argv=[];" << endl;
    web << "var argv_species=[];" << endl;
    web << "for(var i=0;i<aflow_param_no_tex.length;i++){" << endl;
    web << "argv.push($(\"#\"+aflow_param_no_tex[i]).val());" << endl;
    web << "}" << endl;
    web << "for(var i=0;i<species.length;i++){" << endl;
    web << "if($(\"#species-\"+species[i]).val()!==\"\"){" << endl;
    web << "argv_species.push($(\"#species-\" + species[i]).val());" << endl;
    web << "}" << endl;
    web << "}" << endl;
    web << "var arg_str=argv.join(\',\');" << endl;
    web << "var arg_str_species=argv_species.join(\':\');" << endl;
    web << "$.ajax({" << endl;
    web << "type: \"POST\"," << endl;
    web << "url: \"http://aflowlib.duke.edu/users/egossett/anrl_aflow_proto/abinit/\"," << endl;
    web << "data: \"&proto=\"+aflow_proto+\"&params=\"+arg_str+\"&species=\"+arg_str_species," << endl;
    web << "beforeSend: function(){" << endl;
    web << "$(\"#output\").append(\"<p id=\'load-animation\' style=\'margin:auto; width:0%;padding-top:210px;color:#3A3E8C\'><i class=\'fa fa-spinner fa-pulse fa-4x\'></i></p>\");" << endl;
    web << "}," << endl;
    web << "success: function(d){" << endl;
    web << "var lines=d.split(\'\\n\');" << endl;
    web << "for(var i=0;i<lines.length;i++){" << endl;
    web << "if(lines[i].indexOf(\"ntyp=\")!=-1){" << endl;
    web << "lines[i]=lines[i].replace(\',\',\'\');" << endl;
    web << "}" << endl;
    web << "if(lines[i].indexOf(\"ecutwfc=\")!=-1){" << endl;
    web << "lines.splice(i,1);" << endl;
    web << "}" << endl;
    web << "if(lines[i].indexOf(\"ecutrho=\")!=-1){" << endl;
    web << "lines.splice(i,1);" << endl;
    web << "}" << endl;
    web << "}" << endl;
    web << "var output=lines.join(\'\\n\');" << endl;
    web << "$(\"#command\").empty();" << endl;
    web << "if(arg_str_species.length){" << endl;
    web << "$(\"#command\").append(\"<p style=\'overflow-x:scroll;padding:15px 0px;\'> aflow --proto=\"+aflow_proto+\":\"+arg_str_species+\" --params=\"+arg_str+\" --abinit\");" << endl;
    web << "}else{" << endl;
    web << "$(\"#command\").append(\"<p style=\'overflow-x:scroll;padding:15px 0px;\'> aflow --proto=\"+aflow_proto+arg_str_species+\" --params=\"+arg_str+\" --abinit\");" << endl;
    web << "}" << endl;
    web << "$(\"#output\").empty();" << endl;
    web << "$(\"#output\").append(\"<p>\"+output+\"</p>\");" << endl;
    web << "}," << endl;
    web << "error: function(d){" << endl;
    web << "$(\"#output\").empty();" << endl;
    web << "$(\"#output\").append(\"<p> Command failed, please check your input!</p>\");" << endl;
    web << "}" << endl;
    web << "});" << endl;
    web << "});" << endl;
    web << "$(\"#wyccar\").click(function(){" << endl;
    web << "var argv=[];" << endl;
    web << "var argv_species=[];" << endl;
    web << "for(var i=0;i<aflow_param_no_tex.length;i++){" << endl;
    web << "argv.push($(\"#\"+aflow_param_no_tex[i]).val());" << endl;
    web << "}" << endl;
    web << "for(var i=0;i<species.length;i++){" << endl;
    web << "if($(\"#species-\"+species[i]).val()!==\"\"){" << endl;
    web << "argv_species.push($(\"#species-\"+species[i]).val());" << endl;
    web << "}" << endl;
    web << "}" << endl;
    web << "var arg_str=argv.join(\',\');" << endl;
    web << "var arg_str_species=argv_species.join(\':\');" << endl;
    web << "$.ajax({" << endl;
    web << "type: \"POST\"," << endl;
    web << "url: \"http://aflowlib.duke.edu/users/egossett/anrl_aflow_proto/wyccar/\"," << endl;
    web << "data: \"&proto=\"+aflow_proto+\"&params=\"+arg_str+\"&species=\"+arg_str_species," << endl;
    web << "beforeSend: function(){" << endl;
    web << "$(\"#output\").append(\"<p id=\'load-animation\' style=\'margin:auto; width:0%;padding-top:210px;color:#3A3E8C\'><i class=\'fa fa-spinner fa-pulse fa-4x\'></i></p>\");" << endl;
    web << "}," << endl;
    web << "success: function(d){" << endl;
    web << "$(\"#command\").empty();" << endl;
    web << "if(arg_str_species.length) {" << endl;
    web << "$(\"#command\").append(\"<p style=\'overflow-x:scroll;padding:15px 0px;\'> aflow --proto=\"+aflow_proto+\":\"+arg_str_species+\" --params=\"+arg_str+\" | aflow --wyccar\");" << endl;
    web << "} else {" << endl;
    web << "$(\"#command\").append(\"<p style=\'overflow-x:scroll;padding:15px 0px;\'> aflow --proto=\"+aflow_proto+arg_str_species+\" --params=\"+arg_str+\" | aflow --wyccar\");" << endl;
    web << "}" << endl;
    web << "$(\"#output\").empty();" << endl;
    web << "$(\"#output\").append(\"<p>\"+d+\"</p>\");" << endl;
    web << "}," << endl;
    web << "error: function(d){" << endl;
    web << "$(\"#output\").empty();" << endl;
    web << "$(\"#output\").append(\"<p> Command failed, please check your input!</p>\");" << endl;
    web << "}" << endl;
    web << "});" << endl;
    web << "});" << endl;
    web << "$(\"#aims\").click(function(){" << endl;
    web << "var argv=[];" << endl;
    web << "var argv_species=[];" << endl;
    web << "for(var i=0;i<aflow_param_no_tex.length;i++){" << endl;
    web << "argv.push($(\"#\"+aflow_param_no_tex[i]).val());" << endl;
    web << "}" << endl;
    web << "for(var i=0;i<species.length;i++){" << endl;
    web << "if($(\"#species-\"+species[i]).val()!==\"\"){" << endl;
    web << "argv_species.push($(\"#species-\"+species[i]).val());" << endl;
    web << "}" << endl;
    web << "}" << endl;
    web << "var arg_str=argv.join(\',\');" << endl;
    web << "var arg_str_species=argv_species.join(':');" << endl;
    web << "$.ajax({" << endl;
    web << "type: \"POST\"," << endl;
    web << "url: \"http://aflowlib.duke.edu/users/egossett/anrl_aflow_proto/aims/\"," << endl;
    web << "data: \"&proto=\"+aflow_proto+\"&params=\"+arg_str+\"&species=\"+arg_str_species," << endl;
    web << "beforeSend: function(){" << endl;
    web << "$(\"#output\").append(\"<p id=\'load-animation\' style=\'margin:auto; width:0%;padding-top:210px;color:#3A3E8C\'><i class=\'fa fa-spinner fa-pulse fa-4x\'></i></p>\");" << endl;
    web << "}," << endl;
    web << "success: function(d){" << endl;
    web << "var lines=d.split(\'\\n\');" << endl;
    web << "for(var i=0;i<lines.length;i++){" << endl;
    web << "if(lines[i].indexOf(\"ntyp=\")!=-1){" << endl;
    web << "lines[i]=lines[i].replace(\',\',\'\');" << endl;
    web << "}" << endl;
    web << "if(lines[i].indexOf(\"ecutwfc=\")!=-1){" << endl;
    web << "lines.splice(i,1);" << endl;
    web << "}" << endl;
    web << "if(lines[i].indexOf(\"ecutrho=\")!=-1){" << endl;
    web << "lines.splice(i,1);" << endl;
    web << "}" << endl;
    web << "}" << endl;
    web << "var output=lines.join(\'\\n\');" << endl;
    web << "$(\"#command\").empty();" << endl;
    web << "if(arg_str_species.length){" << endl;
    web << "$(\"#command\").append(\"<p style=\'overflow-x:scroll;padding:15px 0px;\'> aflow --proto=\"+aflow_proto+\":\"+arg_str_species+\" --params=\"+arg_str+\" --aims\");" << endl;
    web << "} else {" << endl;
    web << "$(\"#command\").append(\"<p style=\'overflow-x:scroll;padding:15px 0px;\'> aflow --proto=\"+aflow_proto+arg_str_species+\" --params=\"+arg_str+\" --aims\");" << endl;
    web << "}" << endl;
    web << "$(\"#output\").empty();" << endl;
    web << "$(\"#output\").append(\"<p>\"+output+\"</p>\");" << endl;
    web << "}," << endl;
    web << "error: function(d){" << endl;
    web << "$(\"#output\").empty();" << endl;
    web << "$(\"#output\").append(\"<p> Command failed, please check your input!</p>\");" << endl;
    web << "}" << endl;
    web << "});" << endl;
    web << "});" << endl;
    web << "</script>" << endl;
    web << "<script src=\"http://aflowlib.mems.duke.edu/users/jmolers/jsmol/JSmol.min.nojq.js\"></script>" << endl;
    web << "<script src=\"js/jmolViewer.js\"></script>" << endl;
    web << "</div>" << endl;
    web << "<!-- /#page -->" << endl;
    web << "<footer class=\"footer\">" << endl;
    web << "Citation Information:" << endl;
    web << "<p class=\"center\"><a href=\"./index.html\">Return to the AFLOW Library of Crystallographic Prototypes Home Page</a></p>" << endl;
    web << "</footer>" << endl;
    web << "</body>" << endl;
    web << "</html>" << endl;
    #endif

    if(LDEBUG) {cerr << "anrl:: WebANRL_AB32C48_cI162_204_a_2efg_2gh: web.str().size()=" << web.str().size() << endl;}

    return web.str().size();
  }
} // namespace anrl

#endif

// ***************************************************************************
// *                                                                         *
// *           Aflow STEFANO CURTAROLO - Duke University 2003-2018           *
// *                                                                         *
// ***************************************************************************