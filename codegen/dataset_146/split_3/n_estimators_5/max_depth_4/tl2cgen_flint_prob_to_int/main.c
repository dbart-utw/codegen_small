
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
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 44192589;
          result[1] += 8286110;
          result[2] += 0;
          result[3] += 5524073;
          result[4] += 671174953;
          result[5] += 129815731;
        } else {
          result[0] += 478202544;
          result[1] += 57561417;
          result[2] += 0;
          result[3] += 44278013;
          result[4] += 270095881;
          result[5] += 8855602;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1125810;
          result[1] += 1125810;
          result[2] += 0;
          result[3] += 31522695;
          result[4] += 37151748;
          result[5] += 788067393;
        } else {
          result[0] += 25197141;
          result[1] += 18325193;
          result[2] += 4581298;
          result[3] += 249680765;
          result[4] += 100788565;
          result[5] += 460420494;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 114532461;
          result[2] += 0;
          result[3] += 0;
          result[4] += 515396075;
          result[5] += 229064922;
        } else {
          result[0] += 0;
          result[1] += 851166639;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7826819;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 693919982;
          result[1] += 27512246;
          result[2] += 6113832;
          result[3] += 42796827;
          result[4] += 64195240;
          result[5] += 24455329;
        } else {
          result[0] += 138378885;
          result[1] += 46996602;
          result[2] += 99215049;
          result[3] += 279368693;
          result[4] += 67883981;
          result[5] += 227150245;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 490853405;
          result[2] += 0;
          result[3] += 122713351;
          result[4] += 245426702;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15907286;
          result[3] += 47721858;
          result[4] += 31814572;
          result[5] += 763549741;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 613566756;
          result[4] += 0;
          result[5] += 159527356;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 404232216;
          result[3] += 176851594;
          result[4] += 0;
          result[5] += 277909648;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 206158430;
          result[3] += 492489583;
          result[4] += 11453246;
          result[5] += 148892199;
        } else {
          result[0] += 34359738;
          result[1] += 51539607;
          result[2] += 584115552;
          result[3] += 17179869;
          result[4] += 68719476;
          result[5] += 103079215;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 332513597;
          result[1] += 0;
          result[2] += 415641996;
          result[3] += 110837865;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 5396817;
          result[1] += 0;
          result[2] += 789734300;
          result[3] += 61163932;
          result[4] += 0;
          result[5] += 2698408;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 18512790;
          result[2] += 0;
          result[3] += 0;
          result[4] += 833075552;
          result[5] += 7405116;
        } else {
          result[0] += 487058146;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 115122834;
          result[5] += 256812477;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 900412;
          result[1] += 5402474;
          result[2] += 0;
          result[3] += 55825570;
          result[4] += 49522683;
          result[5] += 747342317;
        } else {
          result[0] += 0;
          result[1] += 3869339;
          result[2] += 11608019;
          result[3] += 464320788;
          result[4] += 7738679;
          result[5] += 371456630;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 838970301;
          result[2] += 0;
          result[3] += 0;
          result[4] += 18020841;
          result[5] += 2002315;
        } else {
          result[0] += 24311135;
          result[1] += 235007644;
          result[2] += 0;
          result[3] += 8103711;
          result[4] += 575363543;
          result[5] += 16207423;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 741795314;
          result[1] += 30333637;
          result[2] += 3447004;
          result[3] += 13098616;
          result[4] += 65493080;
          result[5] += 4825805;
        } else {
          result[0] += 235007644;
          result[1] += 5402474;
          result[2] += 164775474;
          result[3] += 199891559;
          result[4] += 18908661;
          result[5] += 235007644;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 68174084;
          result[2] += 54539267;
          result[3] += 149982984;
          result[4] += 109078534;
          result[5] += 477218588;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 137438953;
          result[3] += 641381782;
          result[4] += 0;
          result[5] += 80172722;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 247786574;
          result[3] += 379939414;
          result[4] += 0;
          result[5] += 231267469;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 712336039;
          result[3] += 94279769;
          result[4] += 0;
          result[5] += 52377649;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42780000))) ) ) {
          result[0] += 0;
          result[1] += 858993459;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 180840728;
          result[3] += 45210182;
          result[4] += 0;
          result[5] += 632942548;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 54975581;
          result[1] += 0;
          result[2] += 650544379;
          result[3] += 139729602;
          result[4] += 6871947;
          result[5] += 6871947;
        } else {
          result[0] += 3106667;
          result[1] += 4660000;
          result[2] += 821713453;
          result[3] += 23300003;
          result[4] += 3106667;
          result[5] += 3106667;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 3014012;
          result[1] += 15070060;
          result[2] += 6028024;
          result[3] += 0;
          result[4] += 822825313;
          result[5] += 12056048;
        } else {
          result[0] += 0;
          result[1] += 25641595;
          result[2] += 0;
          result[3] += 76924787;
          result[4] += 333340745;
          result[5] += 423086330;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42680000))) ) ) {
          result[0] += 819499506;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39493952;
          result[5] += 0;
        } else {
          result[0] += 3663085;
          result[1] += 5494627;
          result[2] += 0;
          result[3] += 49451649;
          result[4] += 51283191;
          result[5] += 749100905;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42940000))) ) ) {
          result[0] += 3995318;
          result[1] += 854998140;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 171798691;
          result[2] += 0;
          result[3] += 601295421;
          result[4] += 85899345;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 666936728;
          result[1] += 39463711;
          result[2] += 3288642;
          result[3] += 29597783;
          result[4] += 81558337;
          result[5] += 38148254;
        } else {
          result[0] += 98508424;
          result[1] += 37433201;
          result[2] += 141852130;
          result[3] += 327047968;
          result[4] += 74866402;
          result[5] += 179285332;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42eb0000))) ) ) {
          result[0] += 0;
          result[1] += 9236488;
          result[2] += 46182444;
          result[3] += 129310843;
          result[4] += 18472977;
          result[5] += 655790705;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 644245094;
          result[3] += 214748364;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 84215045;
          result[3] += 623191333;
          result[4] += 50529027;
          result[5] += 101058054;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 501079517;
          result[3] += 0;
          result[4] += 35791394;
          result[5] += 322122547;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42e50000))) ) ) {
          result[0] += 57042534;
          result[1] += 23488102;
          result[2] += 466406604;
          result[3] += 228170137;
          result[4] += 10066329;
          result[5] += 73819750;
        } else {
          result[0] += 0;
          result[1] += 858993459;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 706461910;
          result[3] += 139151588;
          result[4] += 0;
          result[5] += 13379960;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 839981531;
          result[3] += 15555213;
          result[4] += 0;
          result[5] += 3456714;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 85899345;
          result[1] += 687194767;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 20371386;
          result[2] += 0;
          result[3] += 0;
          result[4] += 787693606;
          result[5] += 50928465;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
          result[0] += 1136234;
          result[1] += 1136234;
          result[2] += 0;
          result[3] += 35223276;
          result[4] += 38631980;
          result[5] += 782865731;
        } else {
          result[0] += 111496408;
          result[1] += 14133347;
          result[2] += 12562975;
          result[3] += 301511415;
          result[4] += 125629756;
          result[5] += 293659555;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 315548617;
          result[2] += 0;
          result[3] += 0;
          result[4] += 543444841;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 858993459;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 718339559;
          result[1] += 17940548;
          result[2] += 2870487;
          result[3] += 11481950;
          result[4] += 78938413;
          result[5] += 29422499;
        } else {
          result[0] += 159938112;
          result[1] += 25158804;
          result[2] += 219241008;
          result[3] += 159938112;
          result[4] += 43129378;
          result[5] += 251588042;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e20000))) ) ) {
          result[0] += 0;
          result[1] += 10873334;
          result[2] += 54366674;
          result[3] += 271833373;
          result[4] += 97860014;
          result[5] += 424060062;
        } else {
          result[0] += 0;
          result[1] += 156180628;
          result[2] += 702812830;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 405635800;
          result[3] += 381774870;
          result[4] += 0;
          result[5] += 71582788;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 722335408;
          result[3] += 97612893;
          result[4] += 0;
          result[5] += 39045157;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 858993459;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 858993459;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 360223063;
          result[1] += 0;
          result[2] += 387932529;
          result[3] += 27709466;
          result[4] += 55418932;
          result[5] += 27709466;
        } else {
          result[0] += 5035131;
          result[1] += 0;
          result[2] += 809649168;
          result[3] += 37259974;
          result[4] += 0;
          result[5] += 7049184;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 780903144;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39045157;
          result[5] += 39045157;
        } else {
          result[0] += 0;
          result[1] += 3046076;
          result[2] += 0;
          result[3] += 0;
          result[4] += 776749404;
          result[5] += 79197978;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 44682249;
          result[1] += 1823765;
          result[2] += 0;
          result[3] += 51065428;
          result[4] += 34651540;
          result[5] += 726770474;
        } else {
          result[0] += 12884901;
          result[1] += 30064771;
          result[2] += 8589934;
          result[3] += 498216206;
          result[4] += 8589934;
          result[5] += 300647710;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 78090314;
          result[2] += 0;
          result[3] += 234270943;
          result[4] += 546632201;
          result[5] += 0;
        } else {
          result[0] += 2231151;
          result[1] += 856762307;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 659082253;
          result[1] += 33735015;
          result[2] += 2498890;
          result[3] += 23114733;
          result[4] += 109951162;
          result[5] += 30611403;
        } else {
          result[0] += 109326440;
          result[1] += 17353403;
          result[2] += 222123561;
          result[3] += 182210733;
          result[4] += 59001570;
          result[5] += 268977749;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 858993459;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 79536431;
          result[4] += 174980149;
          result[5] += 461311302;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 238609294;
          result[3] += 477218588;
          result[4] += 0;
          result[5] += 143165576;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 609608261;
          result[3] += 193966264;
          result[4] += 0;
          result[5] += 55418932;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42460000))) ) ) {
          result[0] += 0;
          result[1] += 858993459;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 312361257;
          result[1] += 0;
          result[2] += 78090314;
          result[3] += 0;
          result[4] += 234270943;
          result[5] += 234270943;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 13506186;
          result[1] += 0;
          result[2] += 694217984;
          result[3] += 140464339;
          result[4] += 0;
          result[5] += 10804949;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 834049910;
          result[3] += 23384576;
          result[4] += 0;
          result[5] += 1558971;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_3/test_data.csv", "r");
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
