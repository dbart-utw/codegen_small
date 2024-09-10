
#include "header.h"


static const int32_t num_class[] = {  6, };

int32_t get_num_target(void) {
  return N_TARGET;
}
void get_num_class(int32_t* out) {
  for (int i = 0; i < N_TARGET; ++i) {
    out[i] = num_class[i];
  }
}
int32_t get_num_feature(void) {
  return 36;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "uint32";
}


void predict(union Entry* data, int pred_margin, uint32_t* result) {
  unsigned int tmp;
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 5446516;
          result[1] += 4668442;
          result[2] += 778073;
          result[3] += 0;
          result[4] += 176622749;
          result[5] += 27232582;
        } else {
          result[0] += 112833886;
          result[1] += 1213267;
          result[2] += 0;
          result[3] += 0;
          result[4] += 94634872;
          result[5] += 6066337;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 302889;
          result[2] += 0;
          result[3] += 7269338;
          result[4] += 8783783;
          result[5] += 198392353;
        } else {
          result[0] += 1722580;
          result[1] += 3445160;
          result[2] += 574193;
          result[3] += 57993542;
          result[4] += 35599996;
          result[5] += 115412891;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 1015358;
          result[1] += 210686929;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3046076;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 214748364;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          result[0] += 166283753;
          result[1] += 9692922;
          result[2] += 3509506;
          result[3] += 7019012;
          result[4] += 19552963;
          result[5] += 8690206;
        } else {
          result[0] += 35930660;
          result[1] += 3342387;
          result[2] += 32170474;
          result[3] += 83141876;
          result[4] += 7102572;
          result[5] += 53060393;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 214748364;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7953643;
          result[3] += 190887435;
          result[4] += 0;
          result[5] += 15907286;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 78090314;
          result[4] += 0;
          result[5] += 136658050;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 214748364;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 21474836;
          result[1] += 0;
          result[2] += 64424509;
          result[3] += 71582788;
          result[4] += 0;
          result[5] += 57266230;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 173524348;
          result[3] += 37389224;
          result[4] += 0;
          result[5] += 3834792;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 2244756;
          result[1] += 0;
          result[2] += 197538565;
          result[3] += 11972034;
          result[4] += 0;
          result[5] += 2993008;
        } else {
          result[0] += 451152;
          result[1] += 0;
          result[2] += 213394908;
          result[3] += 902304;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 3338057;
          result[2] += 0;
          result[3] += 0;
          result[4] += 210297621;
          result[5] += 1112685;
        } else {
          result[0] += 0;
          result[1] += 33554431;
          result[2] += 0;
          result[3] += 0;
          result[4] += 110729625;
          result[5] += 70464307;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 2152865;
          result[1] += 0;
          result[2] += 0;
          result[3] += 6727705;
          result[4] += 16146493;
          result[5] += 189721299;
        } else {
          result[0] += 18790481;
          result[1] += 1150437;
          result[2] += 8820022;
          result[3] += 75161927;
          result[4] += 30678337;
          result[5] += 80147157;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 214748364;
          result[5] += 0;
        } else {
          result[0] += 1464193;
          result[1] += 208403526;
          result[2] += 0;
          result[3] += 2928386;
          result[4] += 1952257;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 162688155;
          result[1] += 8947848;
          result[2] += 1789569;
          result[3] += 5531397;
          result[4] += 24403223;
          result[5] += 11388170;
        } else {
          result[0] += 31995337;
          result[1] += 1626881;
          result[2] += 43383508;
          result[3] += 71582788;
          result[4] += 15184227;
          result[5] += 50975621;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 30678337;
          result[2] += 30678337;
          result[3] += 0;
          result[4] += 6135667;
          result[5] += 147256021;
        } else {
          result[0] += 0;
          result[1] += 14641933;
          result[2] += 9761289;
          result[3] += 131777405;
          result[4] += 0;
          result[5] += 58567735;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 69477412;
          result[3] += 126322567;
          result[4] += 0;
          result[5] += 18948385;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 194296139;
          result[3] += 10226112;
          result[4] += 0;
          result[5] += 10226112;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42de0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 214748364;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 214748364;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 2701237;
          result[1] += 0;
          result[2] += 168827330;
          result[3] += 35791394;
          result[4] += 0;
          result[5] += 7428402;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 211702288;
          result[3] += 2665316;
          result[4] += 0;
          result[5] += 380759;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 872960;
          result[2] += 0;
          result[3] += 0;
          result[4] += 212129482;
          result[5] += 1745921;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 161061273;
          result[5] += 53687091;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 5060668;
          result[1] += 0;
          result[2] += 0;
          result[3] += 15182005;
          result[4] += 9021191;
          result[5] += 185484499;
        } else {
          result[0] += 18647617;
          result[1] += 3007680;
          result[2] += 3609216;
          result[3] += 95042693;
          result[4] += 7819968;
          result[5] += 86621189;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 159564346;
          result[1] += 17639466;
          result[2] += 161829;
          result[3] += 4045749;
          result[4] += 31071353;
          result[5] += 2265619;
        } else {
          result[0] += 26843545;
          result[1] += 3158064;
          result[2] += 64213971;
          result[3] += 60529563;
          result[4] += 6316128;
          result[5] += 53687091;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 183321774;
          result[2] += 0;
          result[3] += 15713294;
          result[4] += 15713294;
          result[5] += 0;
        } else {
          result[0] += 1755436;
          result[1] += 212992928;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a00000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 7158278;
          result[4] += 35791394;
          result[5] += 157482134;
        } else {
          result[0] += 0;
          result[1] += 40265318;
          result[2] += 33554431;
          result[3] += 114085068;
          result[4] += 0;
          result[5] += 26843545;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 31047956;
          result[1] += 10349318;
          result[2] += 134541144;
          result[3] += 20698637;
          result[4] += 5174659;
          result[5] += 12936648;
        } else {
          result[0] += 199409195;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 15339168;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 73105826;
          result[3] += 123366081;
          result[4] += 0;
          result[5] += 18276456;
        } else {
          result[0] += 25264513;
          result[1] += 0;
          result[2] += 189483851;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 170776080;
          result[3] += 36814005;
          result[4] += 0;
          result[5] += 7158278;
        } else {
          result[0] += 348052;
          result[1] += 0;
          result[2] += 206047053;
          result[3] += 7657154;
          result[4] += 0;
          result[5] += 696104;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 2458950;
          result[1] += 1639300;
          result[2] += 0;
          result[3] += 0;
          result[4] += 207371512;
          result[5] += 3278600;
        } else {
          result[0] += 0;
          result[1] += 163617801;
          result[2] += 0;
          result[3] += 40904450;
          result[4] += 10226112;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 5612741;
          result[1] += 244032;
          result[2] += 488064;
          result[3] += 8785160;
          result[4] += 10493386;
          result[5] += 189124980;
        } else {
          result[0] += 13720034;
          result[1] += 11930464;
          result[2] += 1193046;
          result[3] += 77548020;
          result[4] += 8351325;
          result[5] += 102005473;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 214748364;
          result[5] += 0;
        } else {
          result[0] += 491415;
          result[1] += 209834214;
          result[2] += 0;
          result[3] += 3439905;
          result[4] += 982830;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 30327059;
          result[1] += 41802162;
          result[2] += 0;
          result[3] += 1639300;
          result[4] += 133602990;
          result[5] += 7376852;
        } else {
          result[0] += 156913936;
          result[1] += 1826350;
          result[2] += 8522968;
          result[3] += 16741545;
          result[4] += 11262493;
          result[5] += 19481070;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33038209;
          result[3] += 33038209;
          result[4] += 0;
          result[5] += 148671944;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42544487;
          result[3] += 135737173;
          result[4] += 0;
          result[5] += 36466703;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 214748364;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 167026505;
          result[3] += 31814572;
          result[4] += 0;
          result[5] += 15907286;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 49557314;
          result[3] += 66076419;
          result[4] += 0;
          result[5] += 99114629;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 195799979;
          result[3] += 12632256;
          result[4] += 6316128;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1794554;
          result[1] += 0;
          result[2] += 181250012;
          result[3] += 25123764;
          result[4] += 0;
          result[5] += 6580033;
        } else {
          result[0] += 5377671;
          result[1] += 0;
          result[2] += 203275998;
          result[3] += 5377671;
          result[4] += 0;
          result[5] += 717022;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
          result[0] += 891072;
          result[1] += 1782144;
          result[2] += 0;
          result[3] += 0;
          result[4] += 208510860;
          result[5] += 3564288;
        } else {
          result[0] += 14641933;
          result[1] += 4880644;
          result[2] += 0;
          result[3] += 0;
          result[4] += 117135471;
          result[5] += 78090314;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          result[0] += 198540940;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 16207423;
          result[5] += 0;
        } else {
          result[0] += 168298;
          result[1] += 504894;
          result[2] += 673192;
          result[3] += 34669406;
          result[4] += 9929587;
          result[5] += 168802985;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 0;
          result[1] += 23860929;
          result[2] += 0;
          result[3] += 0;
          result[4] += 190887435;
          result[5] += 0;
        } else {
          result[0] += 996512;
          result[1] += 209267548;
          result[2] += 1494768;
          result[3] += 1494768;
          result[4] += 1494768;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 162552581;
          result[1] += 12924670;
          result[2] += 1159906;
          result[3] += 6462335;
          result[4] += 28997657;
          result[5] += 2651214;
        } else {
          result[0] += 36901866;
          result[1] += 2562629;
          result[2] += 56890378;
          result[3] += 59453007;
          result[4] += 14350726;
          result[5] += 44589755;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42910000))) ) ) {
          result[0] += 4569114;
          result[1] += 9138228;
          result[2] += 22845570;
          result[3] += 0;
          result[4] += 54829369;
          result[5] += 123366081;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 65358197;
          result[3] += 93368854;
          result[4] += 0;
          result[5] += 56021312;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 80530636;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 80530636;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 206488812;
          result[3] += 0;
          result[4] += 0;
          result[5] += 8259552;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cc0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 187904819;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 214748364;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1139248;
          result[1] += 0;
          result[2] += 177722784;
          result[3] += 33607834;
          result[4] += 0;
          result[5] += 2278497;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 210644892;
          result[3] += 4103471;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1633067;
          result[1] += 4899202;
          result[2] += 0;
          result[3] += 0;
          result[4] += 204133426;
          result[5] += 4082668;
        } else {
          result[0] += 128849018;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36077725;
          result[5] += 49821620;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 251167;
          result[2] += 0;
          result[3] += 11302545;
          result[4] += 14567725;
          result[5] += 188626926;
        } else {
          result[0] += 2651214;
          result[1] += 8616446;
          result[2] += 0;
          result[3] += 105385771;
          result[4] += 6628035;
          result[5] += 91466896;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 2260509;
          result[1] += 76857309;
          result[2] += 0;
          result[3] += 0;
          result[4] += 135630546;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 210780727;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3967637;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 185473251;
          result[1] += 5392784;
          result[2] += 962997;
          result[3] += 3274190;
          result[4] += 18489545;
          result[5] += 1155596;
        } else {
          result[0] += 51475263;
          result[1] += 8847310;
          result[2] += 32172039;
          result[3] += 71582788;
          result[4] += 5630106;
          result[5] += 45040855;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42780000))) ) ) {
          result[0] += 0;
          result[1] += 176851594;
          result[2] += 12632256;
          result[3] += 0;
          result[4] += 25264513;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 2634949;
          result[2] += 7904847;
          result[3] += 92223224;
          result[4] += 13174746;
          result[5] += 98810597;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 51352869;
          result[1] += 0;
          result[2] += 84031968;
          result[3] += 74695083;
          result[4] += 0;
          result[5] += 4668442;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 214748364;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38100516;
          result[3] += 121228915;
          result[4] += 0;
          result[5] += 55418932;
        } else {
          result[0] += 5237764;
          result[1] += 0;
          result[2] += 154514067;
          result[3] += 54996532;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
          result[0] += 155507436;
          result[1] += 0;
          result[2] += 59240928;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1391458;
          result[1] += 231909;
          result[2] += 198050867;
          result[3] += 13914580;
          result[4] += 0;
          result[5] += 1159548;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 2342709;
          result[1] += 5466322;
          result[2] += 0;
          result[3] += 1561806;
          result[4] += 196787592;
          result[5] += 8589934;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 167026505;
          result[4] += 47721858;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 7077186;
          result[1] += 1548134;
          result[2] += 0;
          result[3] += 11279265;
          result[4] += 16144830;
          result[5] += 178698948;
        } else {
          result[0] += 15178549;
          result[1] += 8432527;
          result[2] += 8994695;
          result[3] += 95006475;
          result[4] += 12929875;
          result[5] += 74206241;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42870000))) ) ) {
          result[0] += 4338350;
          result[1] += 98697480;
          result[2] += 0;
          result[3] += 14099640;
          result[4] += 92189954;
          result[5] += 5422938;
        } else {
          result[0] += 147788339;
          result[1] += 1400837;
          result[2] += 14288540;
          result[3] += 16669964;
          result[4] += 14148457;
          result[5] += 20452225;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c00000))) ) ) {
          result[0] += 0;
          result[1] += 212451590;
          result[2] += 0;
          result[3] += 2296773;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 107374182;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11608019;
          result[3] += 29020049;
          result[4] += 17412029;
          result[5] += 156708266;
        } else {
          result[0] += 0;
          result[1] += 92035013;
          result[2] += 92035013;
          result[3] += 30678337;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 1664716;
          result[2] += 108206540;
          result[3] += 86565232;
          result[4] += 0;
          result[5] += 18311876;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 176054965;
          result[3] += 29020049;
          result[4] += 0;
          result[5] += 9673349;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 214748364;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 29826161;
          result[1] += 5965232;
          result[2] += 137200344;
          result[3] += 0;
          result[4] += 0;
          result[5] += 41756626;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 203264494;
          result[3] += 11483869;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 213414523;
          result[5] += 1333840;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 14316557;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 176570877;
          result[5] += 23860929;
        } else {
          result[0] += 190345141;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9761289;
          result[5] += 14641933;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 196074593;
          result[5] += 18673770;
        } else {
          result[0] += 0;
          result[1] += 1284636;
          result[2] += 0;
          result[3] += 11133514;
          result[4] += 14345105;
          result[5] += 187985108;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13765920;
          result[3] += 44050946;
          result[4] += 5506368;
          result[5] += 151425128;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5413824;
          result[3] += 138052520;
          result[4] += 0;
          result[5] += 71282020;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 30678337;
          result[4] += 184070026;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 517465;
          result[1] += 213195966;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1034931;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 132152839;
          result[2] += 33038209;
          result[3] += 49557314;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42850000))) ) ) {
          result[0] += 15596249;
          result[1] += 80380672;
          result[2] += 0;
          result[3] += 1199711;
          result[4] += 117571730;
          result[5] += 0;
        } else {
          result[0] += 118588532;
          result[1] += 3609216;
          result[2] += 12374455;
          result[3] += 34029752;
          result[4] += 22944303;
          result[5] += 23202104;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
          result[0] += 211894565;
          result[1] += 0;
          result[2] += 1070174;
          result[3] += 1070174;
          result[4] += 713449;
          result[5] += 0;
        } else {
          result[0] += 7506123;
          result[1] += 1647685;
          result[2] += 173006994;
          result[3] += 20687608;
          result[4] += 1464609;
          result[5] += 10435342;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 211833228;
          result[5] += 2915136;
        } else {
          result[0] += 4668442;
          result[1] += 0;
          result[2] += 0;
          result[3] += 32679098;
          result[4] += 98037296;
          result[5] += 79363526;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42800000))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 214748364;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
          result[0] += 101408950;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 95443717;
          result[5] += 17895697;
        } else {
          result[0] += 739661;
          result[1] += 0;
          result[2] += 739661;
          result[3] += 11588028;
          result[4] += 8629383;
          result[5] += 193051629;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 10391049;
          result[1] += 31173149;
          result[2] += 0;
          result[3] += 48491566;
          result[4] += 3463683;
          result[5] += 121228915;
        } else {
          result[0] += 3097332;
          result[1] += 1032444;
          result[2] += 9291996;
          result[3] += 156931497;
          result[4] += 2064888;
          result[5] += 42330206;
        }
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x424e0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42640000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 214748364;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 213674622;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1073741;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 0;
          result[4] += 178956970;
          result[5] += 0;
        } else {
          result[0] += 7669584;
          result[1] += 168730858;
          result[2] += 30678337;
          result[3] += 7669584;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 173173848;
          result[1] += 12152550;
          result[2] += 799509;
          result[3] += 3677745;
          result[4] += 20467453;
          result[5] += 4477255;
        } else {
          result[0] += 32679098;
          result[1] += 778073;
          result[2] += 26454508;
          result[3] += 57577460;
          result[4] += 18673770;
          result[5] += 78585452;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 2368548;
          result[1] += 1579032;
          result[2] += 78951604;
          result[3] += 96320957;
          result[4] += 4737096;
          result[5] += 30791125;
        } else {
          result[0] += 5302428;
          result[1] += 662803;
          result[2] += 187573417;
          result[3] += 11267661;
          result[4] += 3093083;
          result[5] += 6848970;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 2169175;
          result[2] += 1084587;
          result[3] += 0;
          result[4] += 208240838;
          result[5] += 3253763;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 7953643;
          result[4] += 79536431;
          result[5] += 127258290;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42870000))) ) ) {
          result[0] += 1567506;
          result[1] += 2351259;
          result[2] += 522502;
          result[3] += 12540050;
          result[4] += 6008774;
          result[5] += 191758272;
        } else {
          result[0] += 21015130;
          result[1] += 10507565;
          result[2] += 1313445;
          result[3] += 68955896;
          result[4] += 21015130;
          result[5] += 91941195;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 107374182;
          result[2] += 0;
          result[3] += 0;
          result[4] += 107374182;
          result[5] += 0;
        } else {
          result[0] += 1057873;
          result[1] += 212103680;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1586810;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 164337226;
          result[1] += 5549850;
          result[2] += 0;
          result[3] += 5704012;
          result[4] += 31603312;
          result[5] += 7553962;
        } else {
          result[0] += 40459836;
          result[1] += 15561475;
          result[2] += 45128279;
          result[3] += 54465164;
          result[4] += 16080191;
          result[5] += 43053416;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 214748364;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 6410398;
          result[2] += 19231196;
          result[3] += 9615598;
          result[4] += 3205199;
          result[5] += 176285971;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 11744051;
          result[1] += 11744051;
          result[2] += 25165823;
          result[3] += 124151398;
          result[4] += 15099494;
          result[5] += 26843545;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 125985707;
          result[3] += 51539607;
          result[4] += 0;
          result[5] += 37223049;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 11930464;
          result[1] += 0;
          result[2] += 167026505;
          result[3] += 23860929;
          result[4] += 11930464;
          result[5] += 0;
        } else {
          result[0] += 205800516;
          result[1] += 0;
          result[2] += 8947848;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 2064888;
          result[1] += 0;
          result[2] += 144542168;
          result[3] += 55751979;
          result[4] += 0;
          result[5] += 12389328;
        } else {
          result[0] += 3237412;
          result[1] += 0;
          result[2] += 201259145;
          result[3] += 9442453;
          result[4] += 0;
          result[5] += 809353;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 199409195;
          result[2] += 0;
          result[3] += 0;
          result[4] += 15339168;
          result[5] += 0;
        } else {
          result[0] += 872960;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2618882;
          result[4] += 199035069;
          result[5] += 12221451;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 5061409;
          result[1] += 482038;
          result[2] += 1687136;
          result[3] += 11809954;
          result[4] += 13738110;
          result[5] += 181969714;
        } else {
          result[0] += 22878760;
          result[1] += 8319549;
          result[2] += 3119830;
          result[3] += 77475802;
          result[4] += 23398732;
          result[5] += 79555689;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
          result[0] += 25824170;
          result[1] += 21746669;
          result[2] += 4077500;
          result[3] += 40095422;
          result[4] += 39415839;
          result[5] += 83588762;
        } else {
          result[0] += 150674942;
          result[1] += 12873198;
          result[2] += 10825190;
          result[3] += 11556621;
          result[4] += 21065234;
          result[5] += 7753176;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 0;
          result[1] += 212499690;
          result[2] += 0;
          result[3] += 2248673;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 214748364;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 158913789;
          result[4] += 0;
          result[5] += 34359738;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 82595524;
          result[3] += 33038209;
          result[4] += 0;
          result[5] += 99114629;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 171798691;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 145474698;
          result[3] += 69273666;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 214748364;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39045157;
          result[3] += 156180628;
          result[4] += 0;
          result[5] += 19522578;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 1027504;
          result[1] += 0;
          result[2] += 159263141;
          result[3] += 46237686;
          result[4] += 0;
          result[5] += 8220033;
        } else {
          result[0] += 3067833;
          result[1] += 0;
          result[2] += 201082559;
          result[3] += 8924607;
          result[4] += 0;
          result[5] += 1673363;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 764229;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2292687;
          result[4] += 202520699;
          result[5] += 9170748;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 214748364;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 7085605;
          result[4] += 6540559;
          result[5] += 201122199;
        } else {
          result[0] += 15339168;
          result[1] += 1353456;
          result[2] += 2255760;
          result[3] += 73537780;
          result[4] += 18948385;
          result[5] += 103313814;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 69273666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143742857;
          result[5] += 1731841;
        } else {
          result[0] += 0;
          result[1] += 211116257;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3632107;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 181255500;
          result[1] += 6806036;
          result[2] += 0;
          result[3] += 3223912;
          result[4] += 20059897;
          result[5] += 3403018;
        } else {
          result[0] += 44176806;
          result[1] += 1227133;
          result[2] += 33132604;
          result[3] += 68105909;
          result[4] += 7976367;
          result[5] += 60129542;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 1533916;
          result[1] += 0;
          result[2] += 35280088;
          result[3] += 130382935;
          result[4] += 0;
          result[5] += 47551423;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 148278632;
          result[3] += 30678337;
          result[4] += 0;
          result[5] += 35791394;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42e70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 196074593;
          result[3] += 14005328;
          result[4] += 0;
          result[5] += 4668442;
        } else {
          result[0] += 128849018;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 126495612;
          result[3] += 73543960;
          result[4] += 0;
          result[5] += 14708792;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 182365674;
          result[3] += 32382689;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 128849018;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 313501;
          result[1] += 0;
          result[2] += 206283830;
          result[3] += 6270025;
          result[4] += 0;
          result[5] += 1881007;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 2412902;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 205901053;
          result[5] += 6434407;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19884107;
          result[3] += 59652323;
          result[4] += 67605966;
          result[5] += 67605966;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 6743815;
          result[1] += 632232;
          result[2] += 0;
          result[3] += 14541351;
          result[4] += 10115722;
          result[5] += 182715242;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3003473;
          result[3] += 124644155;
          result[4] += 7508684;
          result[5] += 79592051;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 99114629;
          result[2] += 0;
          result[3] += 0;
          result[4] += 115633734;
          result[5] += 0;
        } else {
          result[0] += 484759;
          result[1] += 212324568;
          result[2] += 0;
          result[3] += 969518;
          result[4] += 969518;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 15417831;
          result[1] += 64975146;
          result[2] += 0;
          result[3] += 4405094;
          result[4] += 128849018;
          result[5] += 1101273;
        } else {
          result[0] += 158111433;
          result[1] += 2359872;
          result[2] += 9291996;
          result[3] += 17109073;
          result[4] += 11504376;
          result[5] += 16371612;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2587329;
          result[3] += 46571934;
          result[4] += 18111307;
          result[5] += 147477792;
        } else {
          result[0] += 9336885;
          result[1] += 56021312;
          result[2] += 28010656;
          result[3] += 0;
          result[4] += 112042625;
          result[5] += 9336885;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 1422174;
          result[1] += 0;
          result[2] += 42665238;
          result[3] += 130840063;
          result[4] += 0;
          result[5] += 39820888;
        } else {
          result[0] += 3205199;
          result[1] += 0;
          result[2] += 131413178;
          result[3] += 51283191;
          result[4] += 0;
          result[5] += 28846795;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 103397360;
          result[3] += 103397360;
          result[4] += 0;
          result[5] += 7953643;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 201326591;
          result[3] += 0;
          result[4] += 0;
          result[5] += 13421772;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 84365429;
          result[1] += 0;
          result[2] += 115043766;
          result[3] += 0;
          result[4] += 0;
          result[5] += 15339168;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 202085070;
          result[3] += 11344201;
          result[4] += 0;
          result[5] += 1319093;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b90000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 1285918;
          result[1] += 17359897;
          result[2] += 0;
          result[3] += 0;
          result[4] += 194173671;
          result[5] += 1928877;
        } else {
          result[0] += 127801465;
          result[1] += 3142658;
          result[2] += 0;
          result[3] += 9427976;
          result[4] += 37711907;
          result[5] += 36664354;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42890000))) ) ) {
          result[0] += 727960;
          result[1] += 0;
          result[2] += 485307;
          result[3] += 12375329;
          result[4] += 10919408;
          result[5] += 190240359;
        } else {
          result[0] += 15439424;
          result[1] += 1403584;
          result[2] += 2807168;
          result[3] += 64564867;
          result[4] += 40703938;
          result[5] += 89829381;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 19522578;
          result[2] += 0;
          result[3] += 0;
          result[4] += 195225786;
          result[5] += 0;
        } else {
          result[0] += 1575171;
          result[1] += 206347450;
          result[2] += 0;
          result[3] += 0;
          result[4] += 6825742;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 179687407;
          result[1] += 8139150;
          result[2] += 417392;
          result[3] += 7095669;
          result[4] += 13773947;
          result[5] += 5634796;
        } else {
          result[0] += 52081829;
          result[1] += 0;
          result[2] += 28537988;
          result[3] += 62070125;
          result[4] += 14268994;
          result[5] += 57789427;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42950000))) ) ) {
          result[0] += 10324440;
          result[1] += 20648881;
          result[2] += 33038209;
          result[3] += 33038209;
          result[4] += 28908433;
          result[5] += 88790189;
        } else {
          result[0] += 1626881;
          result[1] += 0;
          result[2] += 17895697;
          result[3] += 143165576;
          result[4] += 1626881;
          result[5] += 50433328;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ee0000))) ) ) {
          result[0] += 20648881;
          result[1] += 0;
          result[2] += 165191049;
          result[3] += 24778657;
          result[4] += 4129776;
          result[5] += 0;
        } else {
          result[0] += 186737708;
          result[1] += 0;
          result[2] += 18673770;
          result[3] += 9336885;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85310994;
          result[3] += 117670336;
          result[4] += 0;
          result[5] += 11767033;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 206158430;
          result[3] += 8589934;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 188856717;
          result[3] += 25130127;
          result[4] += 0;
          result[5] += 761519;
        } else {
          result[0] += 362750;
          result[1] += 0;
          result[2] += 210395357;
          result[3] += 2902004;
          result[4] += 0;
          result[5] += 1088251;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 1465859;
          result[2] += 0;
          result[3] += 0;
          result[4] += 208151998;
          result[5] += 5130507;
        } else {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
          result[0] += 171038520;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3800856;
          result[4] += 20904708;
          result[5] += 19004280;
        } else {
          result[0] += 2088622;
          result[1] += 1139248;
          result[2] += 1139248;
          result[3] += 23354596;
          result[4] += 18797602;
          result[5] += 168229046;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 165991720;
          result[1] += 14243513;
          result[2] += 730436;
          result[3] += 8034802;
          result[4] += 16069605;
          result[5] += 9678285;
        } else {
          result[0] += 31802429;
          result[1] += 8196502;
          result[2] += 55736216;
          result[3] += 73440662;
          result[4] += 4590041;
          result[5] += 40982512;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0;
          result[1] += 213710933;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1037431;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 214748364;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42740000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 214748364;
          result[5] += 0;
        } else {
          result[0] += 24245783;
          result[1] += 0;
          result[2] += 34636833;
          result[3] += 20782099;
          result[4] += 3463683;
          result[5] += 131619965;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 50107951;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 141204404;
          result[3] += 61776926;
          result[4] += 2941758;
          result[5] += 8825275;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 2587329;
          result[1] += 0;
          result[2] += 126779155;
          result[3] += 69857901;
          result[4] += 0;
          result[5] += 15523978;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 194296139;
          result[3] += 17663285;
          result[4] += 0;
          result[5] += 2788939;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 204301147;
          result[3] += 9286415;
          result[4] += 0;
          result[5] += 1160801;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 213581254;
          result[3] += 1167110;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
          result[0] += 2511676;
          result[1] += 9418787;
          result[2] += 0;
          result[3] += 4395434;
          result[4] += 183980324;
          result[5] += 14442141;
        } else {
          result[0] += 147224394;
          result[1] += 2213900;
          result[2] += 1106950;
          result[3] += 2213900;
          result[4] += 43171063;
          result[5] += 18818155;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 229923;
          result[1] += 0;
          result[2] += 229923;
          result[3] += 12645781;
          result[4] += 14485168;
          result[5] += 187157568;
        } else {
          result[0] += 4008636;
          result[1] += 4581298;
          result[2] += 1717986;
          result[3] += 90480644;
          result[4] += 24624479;
          result[5] += 89335319;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x425c0000))) ) ) {
          result[0] += 0;
          result[1] += 214187664;
          result[2] += 0;
          result[3] += 0;
          result[4] += 560700;
          result[5] += 0;
        } else {
          result[0] += 4252442;
          result[1] += 110563514;
          result[2] += 0;
          result[3] += 21262214;
          result[4] += 76543971;
          result[5] += 2126221;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 195108062;
          result[1] += 6690652;
          result[2] += 0;
          result[3] += 1726620;
          result[4] += 9280582;
          result[5] += 1942447;
        } else {
          result[0] += 36616080;
          result[1] += 0;
          result[2] += 60861863;
          result[3] += 68284042;
          result[4] += 5442930;
          result[5] += 43543447;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 214748364;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 5577879;
          result[2] += 41834097;
          result[3] += 55778796;
          result[4] += 0;
          result[5] += 111557592;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 111255176;
          result[3] += 87969209;
          result[4] += 0;
          result[5] += 15523978;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 214748364;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 9336885;
          result[1] += 5335363;
          result[2] += 140053281;
          result[3] += 49352108;
          result[4] += 1333840;
          result[5] += 9336885;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 209424025;
          result[3] += 3549559;
          result[4] += 0;
          result[5] += 1774779;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 158727052;
          result[3] += 56021312;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 743073;
          result[1] += 0;
          result[2] += 208060699;
          result[3] += 5944591;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 3024624;
          result[1] += 4032833;
          result[2] += 0;
          result[3] += 0;
          result[4] += 205674490;
          result[5] += 2016416;
        } else {
          result[0] += 42048630;
          result[1] += 19522578;
          result[2] += 1501736;
          result[3] += 12013894;
          result[4] += 88602472;
          result[5] += 51059051;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 269445;
          result[3] += 5927809;
          result[4] += 8622268;
          result[5] += 199928841;
        } else {
          result[0] += 5788365;
          result[1] += 0;
          result[2] += 15628587;
          result[3] += 94929196;
          result[4] += 16207423;
          result[5] += 82194791;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 33907636;
          result[2] += 0;
          result[3] += 0;
          result[4] += 180840728;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 209014791;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5733572;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 169190920;
          result[1] += 6126690;
          result[2] += 1885135;
          result[3] += 4398649;
          result[4] += 21993248;
          result[5] += 11153719;
        } else {
          result[0] += 24152627;
          result[1] += 525057;
          result[2] += 51980655;
          result[3] += 75083169;
          result[4] += 16276770;
          result[5] += 46730084;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42520000))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 5804009;
          result[1] += 0;
          result[2] += 11608019;
          result[3] += 0;
          result[4] += 17412029;
          result[5] += 179924305;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 5052902;
          result[2] += 58108381;
          result[3] += 106110956;
          result[4] += 15158708;
          result[5] += 30317416;
        } else {
          result[0] += 27369889;
          result[1] += 0;
          result[2] += 143165576;
          result[3] += 21053761;
          result[4] += 0;
          result[5] += 23159137;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 139586437;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 214748364;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 179398839;
          result[3] += 31814572;
          result[4] += 0;
          result[5] += 3534952;
        } else {
          result[0] += 1514979;
          result[1] += 0;
          result[2] += 207930956;
          result[3] += 5302428;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 6535819;
          result[2] += 0;
          result[3] += 0;
          result[4] += 203544102;
          result[5] += 4668442;
        } else {
          result[0] += 113230955;
          result[1] += 7809031;
          result[2] += 0;
          result[3] += 0;
          result[4] += 66376767;
          result[5] += 27331610;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 2692769;
          result[2] += 0;
          result[3] += 10322282;
          result[4] += 13688244;
          result[5] += 188045067;
        } else {
          result[0] += 5918262;
          result[1] += 0;
          result[2] += 4227330;
          result[3] += 115828842;
          result[4] += 9300126;
          result[5] += 79473804;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 28256363;
          result[2] += 0;
          result[3] += 11302545;
          result[4] += 175189455;
          result[5] += 0;
        } else {
          result[0] += 506481;
          result[1] += 207151134;
          result[2] += 1519445;
          result[3] += 506481;
          result[4] += 5064819;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 164916355;
          result[1] += 12173943;
          result[2] += 0;
          result[3] += 3408704;
          result[4] += 24997164;
          result[5] += 9252197;
        } else {
          result[0] += 42396672;
          result[1] += 1382500;
          result[2] += 48387507;
          result[3] += 58525841;
          result[4] += 5069167;
          result[5] += 58986675;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 35791394;
          result[2] += 107374182;
          result[3] += 71582788;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 11504376;
          result[1] += 3834792;
          result[2] += 11504376;
          result[3] += 46017506;
          result[4] += 7669584;
          result[5] += 134217727;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 60777839;
          result[3] += 141814957;
          result[4] += 0;
          result[5] += 12155567;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 182536110;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 10737418;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 135796760;
          result[3] += 58424187;
          result[4] += 0;
          result[5] += 20527417;
        } else {
          result[0] += 3112295;
          result[1] += 0;
          result[2] += 202299184;
          result[3] += 9336885;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
          result[0] += 89478485;
          result[1] += 0;
          result[2] += 107374182;
          result[3] += 17895697;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 2423112;
          result[1] += 0;
          result[2] += 202027022;
          result[3] += 9389561;
          result[4] += 0;
          result[5] += 908667;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 2911842;
          result[1] += 2183881;
          result[2] += 1455921;
          result[3] += 727960;
          result[4] += 191453626;
          result[5] += 16015132;
        } else {
          result[0] += 0;
          result[1] += 204010946;
          result[2] += 10737418;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5956523;
          result[4] += 5329521;
          result[5] += 203462319;
        } else {
          result[0] += 20353326;
          result[1] += 1246122;
          result[2] += 1661496;
          result[3] += 65629094;
          result[4] += 22845570;
          result[5] += 103012755;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 100215903;
          result[2] += 0;
          result[3] += 0;
          result[4] += 114532461;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 18038862;
          result[1] += 10307921;
          result[2] += 9448928;
          result[3] += 36936718;
          result[4] += 37795712;
          result[5] += 102220221;
        } else {
          result[0] += 168362717;
          result[1] += 7028128;
          result[2] += 6559586;
          result[3] += 8902295;
          result[4] += 18116952;
          result[5] += 5778683;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 23008753;
          result[4] += 0;
          result[5] += 191739611;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 12271335;
          result[4] += 55221008;
          result[5] += 104306348;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 192378743;
          result[4] += 0;
          result[5] += 22369621;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 71582788;
          result[3] += 91105366;
          result[4] += 0;
          result[5] += 52060209;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e40000))) ) ) {
          result[0] += 16733638;
          result[1] += 2788939;
          result[2] += 75301374;
          result[3] += 22311518;
          result[4] += 41834097;
          result[5] += 55778796;
        } else {
          result[0] += 196852667;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 17895697;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 519971;
          result[1] += 519971;
          result[2] += 167950900;
          result[3] += 41077774;
          result[4] += 0;
          result[5] += 4679746;
        } else {
          result[0] += 715827;
          result[1] += 0;
          result[2] += 207947999;
          result[3] += 6084537;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 2662169;
          result[2] += 8873899;
          result[3] += 0;
          result[4] += 197887955;
          result[5] += 5324339;
        } else {
          result[0] += 0;
          result[1] += 184070026;
          result[2] += 0;
          result[3] += 10226112;
          result[4] += 20452225;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 2642317;
          result[1] += 3603160;
          result[2] += 0;
          result[3] += 11530113;
          result[4] += 9368217;
          result[5] += 187604555;
        } else {
          result[0] += 16743092;
          result[1] += 4367763;
          result[2] += 5095723;
          result[3] += 82259543;
          result[4] += 16743092;
          result[5] += 89539148;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 85856947;
          result[1] += 14627479;
          result[2] += 8267706;
          result[3] += 28406990;
          result[4] += 40066575;
          result[5] += 37522665;
        } else {
          result[0] += 193818283;
          result[1] += 2580420;
          result[2] += 5734268;
          result[3] += 1146853;
          result[4] += 11468537;
          result[5] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 214748364;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 150323855;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35140641;
          result[3] += 146419339;
          result[4] += 0;
          result[5] += 33188383;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 128849018;
          result[4] += 0;
          result[5] += 64424509;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 181710154;
          result[3] += 5506368;
          result[4] += 5506368;
          result[5] += 22025473;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 75161927;
          result[3] += 128849018;
          result[4] += 0;
          result[5] += 10737418;
        } else {
          result[0] += 2368548;
          result[1] += 0;
          result[2] += 169745950;
          result[3] += 38686286;
          result[4] += 0;
          result[5] += 3947580;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 107374182;
          result[1] += 0;
          result[2] += 107374182;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1985784;
          result[1] += 0;
          result[2] += 203401027;
          result[3] += 8794186;
          result[4] += 0;
          result[5] += 567366;
        }
      }
    }
  }
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  result[2] += 0;
  result[3] += 0;
  result[4] += 0;
  result[5] += 0;
  
  // Apply postprocessor
  if (!pred_margin) { postprocess(result); }
}

void postprocess(uint32_t* result) {
  // Do nothing
}


int main() {
    uint32_t result[MAX_N_CLASS];
    union Entry input[TEST_DATA_COLS];
    char line[1024];
    

    FILE* file = fopen("./codegen/dataset_146/split_2/test_data.csv", "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file)) {
        char *ptr = line;
        for (int i = 0; i < TEST_DATA_COLS; i++) {
            sscanf(ptr, "%f", &(input[i].fvalue));
            input[i].missing = -1;
            while (*ptr != ',' && *ptr != '\n' && *ptr != '\0') ptr++;  // Skip to next comma
            if (*ptr == ',') ptr++;  // Move past the comma
        }
        predict(input, 0, result);
        
    }
    

    return 0;
}
