
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
  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 1964161;
          result[1] += 436480;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49758767;
          result[5] += 1527681;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42840000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 15713294;
          result[5] += 37973796;
        } else {
          result[0] += 41825989;
          result[1] += 1560671;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9988296;
          result[5] += 312134;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x424a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50107951;
          result[5] += 3579139;
        } else {
          result[0] += 0;
          result[1] += 150384;
          result[2] += 300768;
          result[3] += 2030184;
          result[4] += 2406144;
          result[5] += 48799610;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 424963;
          result[1] += 424963;
          result[2] += 566618;
          result[3] += 10057476;
          result[4] += 6516111;
          result[5] += 35696957;
        } else {
          result[0] += 4158859;
          result[1] += 1134234;
          result[2] += 1512312;
          result[3] += 26087389;
          result[4] += 6805405;
          result[5] += 13988889;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x425a0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
          result[0] += 0;
          result[1] += 53559568;
          result[2] += 0;
          result[3] += 0;
          result[4] += 127522;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 40265318;
          result[2] += 0;
          result[3] += 0;
          result[4] += 13421772;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 12590781;
          result[1] += 3525418;
          result[2] += 6245027;
          result[3] += 19137987;
          result[4] += 1410167;
          result[5] += 10777708;
        } else {
          result[0] += 29957396;
          result[1] += 2899102;
          result[2] += 7730941;
          result[3] += 2684354;
          result[4] += 8482560;
          result[5] += 1932735;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
          result[0] += 50295456;
          result[1] += 0;
          result[2] += 1489010;
          result[3] += 82722;
          result[4] += 661782;
          result[5] += 1158119;
        } else {
          result[0] += 1133094;
          result[1] += 0;
          result[2] += 46079171;
          result[3] += 5395687;
          result[4] += 0;
          result[5] += 1079137;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 1533916;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52153174;
          result[5] += 0;
        } else {
          result[0] += 745654;
          result[1] += 4473924;
          result[2] += 0;
          result[3] += 3728270;
          result[4] += 26097891;
          result[5] += 18641351;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 40500788;
          result[1] += 706409;
          result[2] += 0;
          result[3] += 470939;
          result[4] += 7299560;
          result[5] += 4709393;
        } else {
          result[0] += 808540;
          result[1] += 323416;
          result[2] += 282989;
          result[3] += 7034302;
          result[4] += 4608681;
          result[5] += 40629161;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 2825636;
          result[1] += 25901666;
          result[2] += 0;
          result[3] += 470939;
          result[4] += 23076030;
          result[5] += 1412818;
        } else {
          result[0] += 0;
          result[1] += 53545061;
          result[2] += 0;
          result[3] += 0;
          result[4] += 142029;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 48345634;
          result[1] += 1199102;
          result[2] += 545046;
          result[3] += 1362616;
          result[4] += 1798653;
          result[5] += 436037;
        } else {
          result[0] += 11697187;
          result[1] += 2399423;
          result[2] += 5098774;
          result[3] += 17095889;
          result[4] += 2999278;
          result[5] += 14396538;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5441259;
          result[3] += 30833802;
          result[4] += 0;
          result[5] += 17412029;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38347922;
          result[3] += 6391320;
          result[4] += 0;
          result[5] += 8947848;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30259996;
          result[3] += 17570320;
          result[4] += 0;
          result[5] += 5856773;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 48806446;
          result[3] += 2091704;
          result[4] += 0;
          result[5] += 2788939;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 18366636;
          result[3] += 26843545;
          result[4] += 0;
          result[5] += 8476909;
        } else {
          result[0] += 894784;
          result[1] += 0;
          result[2] += 42054888;
          result[3] += 5368709;
          result[4] += 2684354;
          result[5] += 2684354;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42890000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 322638;
          result[1] += 0;
          result[2] += 50847870;
          result[3] += 2258471;
          result[4] += 64527;
          result[5] += 193583;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 756156;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52426830;
          result[5] += 504104;
        } else {
          result[0] += 19014178;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 21251140;
          result[5] += 13421772;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 30678337;
          result[2] += 0;
          result[3] += 0;
          result[4] += 23008753;
          result[5] += 0;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 200324;
          result[3] += 1402274;
          result[4] += 1869699;
          result[5] += 50214791;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 2606169;
          result[2] += 0;
          result[3] += 3909254;
          result[4] += 12248996;
          result[5] += 34922670;
        } else {
          result[0] += 1032444;
          result[1] += 147492;
          result[2] += 2802348;
          result[3] += 29055925;
          result[4] += 589968;
          result[5] += 20058913;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 52763725;
          result[2] += 0;
          result[3] += 0;
          result[4] += 923365;
          result[5] += 0;
        } else {
          result[0] += 4511520;
          result[1] += 13083408;
          result[2] += 0;
          result[3] += 2255760;
          result[4] += 33836402;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
          result[0] += 12038923;
          result[1] += 1952257;
          result[2] += 0;
          result[3] += 9435912;
          result[4] += 6182149;
          result[5] += 24077846;
        } else {
          result[0] += 44103279;
          result[1] += 1597301;
          result[2] += 1464193;
          result[3] += 1641671;
          result[4] += 3948885;
          result[5] += 931759;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d20000))) ) ) {
          result[0] += 265777;
          result[1] += 797333;
          result[2] += 11959995;
          result[3] += 27109323;
          result[4] += 2923554;
          result[5] += 10631107;
        } else {
          result[0] += 14810232;
          result[1] += 1851279;
          result[2] += 37025580;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
          result[0] += 17318416;
          result[1] += 2309122;
          result[2] += 20204819;
          result[3] += 6350086;
          result[4] += 577280;
          result[5] += 6927366;
        } else {
          result[0] += 233168;
          result[1] += 0;
          result[2] += 49315178;
          result[3] += 3322653;
          result[4] += 0;
          result[5] += 816090;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 838860;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52848230;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 31019208;
          result[5] += 22667882;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42620000))) ) ) {
          result[0] += 45691141;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4569114;
          result[5] += 3426835;
        } else {
          result[0] += 1533916;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4601750;
          result[4] += 13805252;
          result[5] += 33746171;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 32808777;
          result[5] += 20878313;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 80010;
          result[3] += 1520200;
          result[4] += 1120147;
          result[5] += 50966731;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 235469;
          result[2] += 0;
          result[3] += 7299560;
          result[4] += 7299560;
          result[5] += 38852500;
        } else {
          result[0] += 151658;
          result[1] += 5308045;
          result[2] += 3639802;
          result[3] += 25023644;
          result[4] += 1213267;
          result[5] += 18350672;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 52681244;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1005847;
          result[5] += 0;
        } else {
          result[0] += 1268199;
          result[1] += 15218388;
          result[2] += 0;
          result[3] += 6763728;
          result[4] += 27477645;
          result[5] += 2959131;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 45920176;
          result[1] += 862990;
          result[2] += 90841;
          result[3] += 1090093;
          result[4] += 4314952;
          result[5] += 1408037;
        } else {
          result[0] += 18113937;
          result[1] += 1091201;
          result[2] += 9166088;
          result[3] += 10475529;
          result[4] += 3928323;
          result[5] += 10912010;
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 688296;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5506368;
          result[4] += 19960585;
          result[5] += 27531841;
        } else {
          result[0] += 222768;
          result[1] += 0;
          result[2] += 24058945;
          result[3] += 21831265;
          result[4] += 1113840;
          result[5] += 6460272;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 8155001;
          result[1] += 679583;
          result[2] += 25824170;
          result[3] += 8155001;
          result[4] += 679583;
          result[5] += 10193751;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 49610384;
          result[3] += 3010491;
          result[4] += 0;
          result[5] += 1066215;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 1602599;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50214791;
          result[5] += 1869699;
        } else {
          result[0] += 32808777;
          result[1] += 4473924;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7456540;
          result[5] += 8947848;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 382568;
          result[2] += 0;
          result[3] += 2486694;
          result[4] += 3060546;
          result[5] += 47757281;
        } else {
          result[0] += 490293;
          result[1] += 0;
          result[2] += 2696611;
          result[3] += 21572895;
          result[4] += 3677198;
          result[5] += 25250093;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 12593268;
          result[2] += 0;
          result[3] += 1325607;
          result[4] += 39768215;
          result[5] += 0;
        } else {
          result[0] += 451152;
          result[1] += 51092967;
          result[2] += 0;
          result[3] += 338364;
          result[4] += 1804608;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 44044468;
          result[1] += 1431655;
          result[2] += 0;
          result[3] += 800042;
          result[4] += 5768730;
          result[5] += 1642193;
        } else {
          result[0] += 5883516;
          result[1] += 1470879;
          result[2] += 8089835;
          result[3] += 15150055;
          result[4] += 3088846;
          result[5] += 20003957;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 547827;
          result[1] += 3834792;
          result[2] += 3286964;
          result[3] += 2739137;
          result[4] += 7669584;
          result[5] += 35608784;
        } else {
          result[0] += 0;
          result[1] += 1626881;
          result[2] += 5694085;
          result[3] += 30097308;
          result[4] += 0;
          result[5] += 16268815;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4412637;
          result[3] += 39713738;
          result[4] += 1470879;
          result[5] += 8089835;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29507408;
          result[3] += 20081431;
          result[4] += 0;
          result[5] += 4098251;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d80000))) ) ) {
          result[0] += 5553837;
          result[1] += 7405116;
          result[2] += 22215348;
          result[3] += 12958953;
          result[4] += 5553837;
          result[5] += 0;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42df0000))) ) ) {
          result[0] += 603225;
          result[1] += 0;
          result[2] += 45724511;
          result[3] += 6756128;
          result[4] += 0;
          result[5] += 603225;
        } else {
          result[0] += 345625;
          result[1] += 0;
          result[2] += 52304590;
          result[3] += 1036875;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42890000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x420a0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52814130;
          result[5] += 872960;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 10737418;
          result[2] += 10737418;
          result[3] += 0;
          result[4] += 10737418;
          result[5] += 21474836;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42620000))) ) ) {
          result[0] += 3579139;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 7158278;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2020481;
          result[4] += 1298881;
          result[5] += 50367728;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 40265318;
          result[1] += 1258291;
          result[2] += 0;
          result[3] += 419430;
          result[4] += 9646899;
          result[5] += 2097151;
        } else {
          result[0] += 258940;
          result[1] += 431568;
          result[2] += 776822;
          result[3] += 20111080;
          result[4] += 3797800;
          result[5] += 28310877;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 10536718;
          result[2] += 0;
          result[3] += 2006994;
          result[4] += 41143378;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 52811078;
          result[2] += 0;
          result[3] += 0;
          result[4] += 876013;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42850000))) ) ) {
          result[0] += 4421289;
          result[1] += 31580641;
          result[2] += 0;
          result[3] += 631612;
          result[4] += 17053546;
          result[5] += 0;
        } else {
          result[0] += 45444861;
          result[1] += 405355;
          result[2] += 1486303;
          result[3] += 1666461;
          result[4] += 3558120;
          result[5] += 1125987;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6641702;
          result[3] += 17711205;
          result[4] += 3320851;
          result[5] += 26013332;
        } else {
          result[0] += 0;
          result[1] += 1059613;
          result[2] += 28256363;
          result[3] += 18013431;
          result[4] += 0;
          result[5] += 6357681;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 8558811;
          result[1] += 3501332;
          result[2] += 31511988;
          result[3] += 3501332;
          result[4] += 1167110;
          result[5] += 5446516;
        } else {
          result[0] += 248839;
          result[1] += 0;
          result[2] += 50265550;
          result[3] += 2799442;
          result[4] += 0;
          result[5] += 373259;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
          result[0] += 528936;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51571343;
          result[5] += 1586810;
        } else {
          result[0] += 22422255;
          result[1] += 315806;
          result[2] += 0;
          result[3] += 2842257;
          result[4] += 17685159;
          result[5] += 10421611;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 417798;
          result[2] += 261123;
          result[3] += 4439107;
          result[4] += 3707960;
          result[5] += 44861100;
        } else {
          result[0] += 810371;
          result[1] += 0;
          result[2] += 405185;
          result[3] += 32212254;
          result[4] += 202592;
          result[5] += 20056686;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 19438429;
          result[2] += 0;
          result[3] += 1851279;
          result[4] += 32397382;
          result[5] += 0;
        } else {
          result[0] += 251461;
          result[1] += 52681244;
          result[2] += 0;
          result[3] += 0;
          result[4] += 754385;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42950000))) ) ) {
          result[0] += 44331197;
          result[1] += 1705046;
          result[2] += 0;
          result[3] += 568348;
          result[4] += 6251835;
          result[5] += 830663;
        } else {
          result[0] += 7629948;
          result[1] += 138726;
          result[2] += 17340791;
          result[3] += 15398623;
          result[4] += 1942168;
          result[5] += 11236833;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 825955;
          result[1] += 825955;
          result[2] += 13628261;
          result[3] += 19822925;
          result[4] += 825955;
          result[5] += 17758037;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37347541;
          result[3] += 15172438;
          result[4] += 0;
          result[5] += 1167110;
        } else {
          result[0] += 7953643;
          result[1] += 0;
          result[2] += 45733448;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20648881;
          result[3] += 26843545;
          result[4] += 0;
          result[5] += 6194664;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 45145963;
          result[3] += 0;
          result[4] += 0;
          result[5] += 8541128;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 46562737;
          result[3] += 5852147;
          result[4] += 0;
          result[5] += 1272205;
        } else {
          result[0] += 443694;
          result[1] += 0;
          result[2] += 52245082;
          result[3] += 665542;
          result[4] += 0;
          result[5] += 332771;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 646832;
          result[1] += 0;
          result[2] += 215610;
          result[3] += 431221;
          result[4] += 48081210;
          result[5] += 4312216;
        } else {
          result[0] += 0;
          result[1] += 35791394;
          result[2] += 0;
          result[3] += 14316557;
          result[4] += 3579139;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 68829;
          result[3] += 1651910;
          result[4] += 1376592;
          result[5] += 50589759;
        } else {
          result[0] += 6339731;
          result[1] += 1845744;
          result[2] += 722247;
          result[3] += 16611700;
          result[4] += 3771738;
          result[5] += 24395927;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 4927800;
          result[1] += 10374317;
          result[2] += 259357;
          result[3] += 1556147;
          result[4] += 34235246;
          result[5] += 2334221;
        } else {
          result[0] += 37479667;
          result[1] += 1519445;
          result[2] += 4920110;
          result[3] += 4160387;
          result[4] += 2821828;
          result[5] += 2785650;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 19522578;
          result[1] += 34164512;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6710886;
          result[3] += 0;
          result[4] += 46976204;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2064888;
          result[3] += 2064888;
          result[4] += 0;
          result[5] += 49557314;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17134178;
          result[3] += 31412659;
          result[4] += 0;
          result[5] += 5140253;
        } else {
          result[0] += 0;
          result[1] += 1052688;
          result[2] += 41054834;
          result[3] += 9474192;
          result[4] += 0;
          result[5] += 2105376;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 17895697;
          result[4] += 0;
          result[5] += 3579139;
        } else {
          result[0] += 372827;
          result[1] += 0;
          result[2] += 46976204;
          result[3] += 5592405;
          result[4] += 0;
          result[5] += 745654;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 245146;
          result[1] += 0;
          result[2] += 51562487;
          result[3] += 1470879;
          result[4] += 0;
          result[5] += 408577;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 214748;
          result[1] += 0;
          result[2] += 0;
          result[3] += 214748;
          result[4] += 49821620;
          result[5] += 3435973;
        } else {
          result[0] += 0;
          result[1] += 37167986;
          result[2] += 0;
          result[3] += 16519104;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 2075977;
          result[1] += 230664;
          result[2] += 0;
          result[3] += 1614649;
          result[4] += 4324953;
          result[5] += 45440846;
        } else {
          result[0] += 1372194;
          result[1] += 0;
          result[2] += 686097;
          result[3] += 26929307;
          result[4] += 0;
          result[5] += 24699492;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 41019796;
          result[1] += 3097332;
          result[2] += 158837;
          result[3] += 1469247;
          result[4] += 6790305;
          result[5] += 1151572;
        } else {
          result[0] += 6507526;
          result[1] += 3137557;
          result[2] += 12898846;
          result[3] += 14409522;
          result[4] += 6042702;
          result[5] += 10690935;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 53179411;
          result[2] += 0;
          result[3] += 0;
          result[4] += 507679;
          result[5] += 0;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7561562;
          result[3] += 35539342;
          result[4] += 0;
          result[5] += 10586186;
        } else {
          result[0] += 9336885;
          result[1] += 0;
          result[2] += 32679098;
          result[3] += 9336885;
          result[4] += 0;
          result[5] += 2334221;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35637120;
          result[3] += 14347412;
          result[4] += 0;
          result[5] += 3702558;
        } else {
          result[0] += 2255760;
          result[1] += 0;
          result[2] += 47822114;
          result[3] += 3609216;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13421772;
          result[3] += 22369621;
          result[4] += 0;
          result[5] += 17895697;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 47093939;
          result[3] += 4709393;
          result[4] += 0;
          result[5] += 1883757;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 48431012;
          result[3] += 4880644;
          result[4] += 0;
          result[5] += 375434;
        } else {
          result[0] += 111848;
          result[1] += 0;
          result[2] += 52792306;
          result[3] += 782936;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          result[0] += 227487;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52322165;
          result[5] += 1137438;
        } else {
          result[0] += 1651910;
          result[1] += 1651910;
          result[2] += 0;
          result[3] += 5781686;
          result[4] += 28908433;
          result[5] += 15693149;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 72160;
          result[3] += 2309122;
          result[4] += 1371041;
          result[5] += 49934767;
        } else {
          result[0] += 6372614;
          result[1] += 436480;
          result[2] += 261888;
          result[3] += 18419473;
          result[4] += 2968066;
          result[5] += 25228568;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 3800856;
          result[1] += 16153638;
          result[2] += 0;
          result[3] += 475107;
          result[4] += 32307276;
          result[5] += 950214;
        } else {
          result[0] += 128746;
          result[1] += 52657123;
          result[2] += 0;
          result[3] += 0;
          result[4] += 901222;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 46179039;
          result[1] += 1944856;
          result[2] += 723667;
          result[3] += 949813;
          result[4] += 3075587;
          result[5] += 814126;
        } else {
          result[0] += 8357621;
          result[1] += 0;
          result[2] += 16573587;
          result[3] += 16431932;
          result[4] += 3399710;
          result[5] += 8924239;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3579139;
          result[3] += 8947848;
          result[4] += 3579139;
          result[5] += 37580963;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 18407002;
          result[3] += 29144420;
          result[4] += 0;
          result[5] += 6135667;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 4737096;
          result[2] += 15790320;
          result[3] += 22106449;
          result[4] += 0;
          result[5] += 11053224;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 44739242;
          result[3] += 6710886;
          result[4] += 0;
          result[5] += 2236962;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 1470879;
          result[2] += 42655497;
          result[3] += 7354396;
          result[4] += 0;
          result[5] += 2206318;
        } else {
          result[0] += 0;
          result[1] += 1917396;
          result[2] += 23008753;
          result[3] += 28760941;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 697234;
          result[1] += 232411;
          result[2] += 45087860;
          result[3] += 5810291;
          result[4] += 0;
          result[5] += 1859293;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52596997;
          result[3] += 1090093;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 1970168;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50978109;
          result[5] += 738813;
        } else {
          result[0] += 28185722;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 19461570;
          result[5] += 6039797;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 55063;
          result[2] += 110127;
          result[3] += 3083566;
          result[4] += 4294967;
          result[5] += 46143366;
        } else {
          result[0] += 1677721;
          result[1] += 2796202;
          result[2] += 0;
          result[3] += 30198988;
          result[4] += 1118481;
          result[5] += 17895697;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          result[0] += 38744437;
          result[1] += 2623519;
          result[2] += 494286;
          result[3] += 1254726;
          result[4] += 7680447;
          result[5] += 2889673;
        } else {
          result[0] += 11534892;
          result[1] += 3417745;
          result[2] += 10253237;
          result[3] += 14240607;
          result[4] += 1281654;
          result[5] += 12958953;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x429c0000))) ) ) {
          result[0] += 0;
          result[1] += 52422212;
          result[2] += 0;
          result[3] += 421626;
          result[4] += 843252;
          result[5] += 0;
        } else {
          result[0] += 40265318;
          result[1] += 13421772;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 20648881;
          result[2] += 28908433;
          result[3] += 0;
          result[4] += 4129776;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1731841;
          result[3] += 10391049;
          result[4] += 2597762;
          result[5] += 38966437;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6088226;
          result[3] += 40403687;
          result[4] += 0;
          result[5] += 7195177;
        } else {
          result[0] += 1851279;
          result[1] += 0;
          result[2] += 36099940;
          result[3] += 10182034;
          result[4] += 0;
          result[5] += 5553837;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42f90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39348302;
          result[3] += 12004566;
          result[4] += 0;
          result[5] += 2334221;
        } else {
          result[0] += 44739242;
          result[1] += 0;
          result[2] += 8947848;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 24159191;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 2684354;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 561433;
          result[1] += 0;
          result[2] += 50669385;
          result[3] += 2456272;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 706409;
          result[1] += 0;
          result[2] += 0;
          result[3] += 470939;
          result[4] += 50625985;
          result[5] += 1883757;
        } else {
          result[0] += 0;
          result[1] += 42015984;
          result[2] += 0;
          result[3] += 2334221;
          result[4] += 9336885;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1380676;
          result[1] += 1008956;
          result[2] += 106205;
          result[3] += 3451692;
          result[4] += 2655147;
          result[5] += 45084411;
        } else {
          result[0] += 1804608;
          result[1] += 1127880;
          result[2] += 0;
          result[3] += 28422577;
          result[4] += 2255760;
          result[5] += 20076265;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 245707;
          result[1] += 51475723;
          result[2] += 245707;
          result[3] += 368561;
          result[4] += 1351391;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 39239065;
          result[1] += 2293976;
          result[2] += 120735;
          result[3] += 1448827;
          result[4] += 8411245;
          result[5] += 2173240;
        } else {
          result[0] += 9398177;
          result[1] += 939817;
          result[2] += 10337995;
          result[3] += 16799242;
          result[4] += 2232067;
          result[5] += 13979789;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1626881;
          result[3] += 43925801;
          result[4] += 0;
          result[5] += 8134407;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24855134;
          result[3] += 27837750;
          result[4] += 0;
          result[5] += 994205;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33038209;
          result[3] += 17699041;
          result[4] += 0;
          result[5] += 2949840;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 44313154;
          result[3] += 6533349;
          result[4] += 0;
          result[5] += 2840586;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 1639300;
          result[1] += 0;
          result[2] += 43031637;
          result[3] += 8196502;
          result[4] += 0;
          result[5] += 819650;
        } else {
          result[0] += 825955;
          result[1] += 0;
          result[2] += 51668089;
          result[3] += 1193046;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 662803;
          result[2] += 220934;
          result[3] += 441869;
          result[4] += 51035876;
          result[5] += 1325607;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 963759;
          result[1] += 113383;
          result[2] += 226767;
          result[3] += 2210978;
          result[4] += 3968422;
          result[5] += 46203779;
        } else {
          result[0] += 2841378;
          result[1] += 2691831;
          result[2] += 149546;
          result[3] += 22731024;
          result[4] += 1944100;
          result[5] += 23329209;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 17895697;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35791394;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 52929155;
          result[2] += 0;
          result[3] += 0;
          result[4] += 757935;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 40740043;
          result[1] += 2459939;
          result[2] += 992606;
          result[3] += 1639959;
          result[4] += 6646151;
          result[5] += 1208391;
        } else {
          result[0] += 7931047;
          result[1] += 457560;
          result[2] += 7778527;
          result[3] += 14946974;
          result[4] += 6558366;
          result[5] += 16014615;
        }
      }
    }
  } else {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2776918;
          result[3] += 37025580;
          result[4] += 0;
          result[5] += 13884592;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42da0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 21007992;
          result[4] += 0;
          result[5] += 5835553;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1451002;
          result[3] += 29020049;
          result[4] += 0;
          result[5] += 23216039;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42044107;
          result[3] += 9702486;
          result[4] += 0;
          result[5] += 1940497;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 2982616;
          result[1] += 0;
          result[2] += 20878313;
          result[3] += 8947848;
          result[4] += 0;
          result[5] += 20878313;
        } else {
          result[0] += 563940;
          result[1] += 0;
          result[2] += 49175570;
          result[3] += 3552822;
          result[4] += 0;
          result[5] += 394758;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42da0000))) ) ) {
          result[0] += 825955;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50933907;
          result[5] += 1927228;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
          result[0] += 49906310;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3780781;
          result[5] += 0;
        } else {
          result[0] += 6462335;
          result[1] += 0;
          result[2] += 994205;
          result[3] += 0;
          result[4] += 28831956;
          result[5] += 17398594;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 4129776;
          result[2] += 0;
          result[3] += 3303820;
          result[4] += 21474836;
          result[5] += 24778657;
        } else {
          result[0] += 0;
          result[1] += 250874;
          result[2] += 0;
          result[3] += 2383305;
          result[4] += 2446024;
          result[5] += 48606887;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 308546;
          result[3] += 14193139;
          result[4] += 1851279;
          result[5] += 37334126;
        } else {
          result[0] += 196656;
          result[1] += 0;
          result[2] += 3146496;
          result[3] += 34414802;
          result[4] += 393312;
          result[5] += 15535824;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425e0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 39045157;
          result[2] += 0;
          result[3] += 0;
          result[4] += 14641933;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 50223407;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3463683;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53552537;
          result[2] += 0;
          result[3] += 0;
          result[4] += 134554;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 33642567;
          result[1] += 5842122;
          result[2] += 402904;
          result[3] += 805809;
          result[4] += 12490054;
          result[5] += 503631;
        } else {
          result[0] += 2169175;
          result[1] += 271146;
          result[2] += 7863260;
          result[3] += 14370787;
          result[4] += 8405554;
          result[5] += 20607166;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 45786216;
          result[1] += 129522;
          result[2] += 3367585;
          result[3] += 2072360;
          result[4] += 1359986;
          result[5] += 971419;
        } else {
          result[0] += 555035;
          result[1] += 0;
          result[2] += 46976204;
          result[3] += 5550357;
          result[4] += 0;
          result[5] += 605493;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 419430;
          result[1] += 2516582;
          result[2] += 0;
          result[3] += 209715;
          result[4] += 48024780;
          result[5] += 2516582;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1721743;
          result[1] += 52174;
          result[2] += 0;
          result[3] += 3286964;
          result[4] += 3026094;
          result[5] += 45600114;
        } else {
          result[0] += 3677198;
          result[1] += 0;
          result[2] += 0;
          result[3] += 29049864;
          result[4] += 1287019;
          result[5] += 19673009;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 7669584;
          result[2] += 0;
          result[3] += 0;
          result[4] += 46017506;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53427733;
          result[2] += 0;
          result[3] += 0;
          result[4] += 259357;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 39967056;
          result[1] += 1948642;
          result[2] += 994205;
          result[3] += 1550960;
          result[4] += 7078742;
          result[5] += 2147483;
        } else {
          result[0] += 8413648;
          result[1] += 801299;
          result[2] += 15892447;
          result[3] += 16025997;
          result[4] += 2938099;
          result[5] += 9615598;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 35174301;
          result[4] += 0;
          result[5] += 18512790;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14810232;
          result[3] += 5553837;
          result[4] += 0;
          result[5] += 33323022;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 46684427;
          result[3] += 7002664;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 2236962;
          result[1] += 6710886;
          result[2] += 34672913;
          result[3] += 4473924;
          result[4] += 0;
          result[5] += 5592405;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42360700;
          result[3] += 10420279;
          result[4] += 226527;
          result[5] += 679583;
        } else {
          result[0] += 233760;
          result[1] += 0;
          result[2] += 51661163;
          result[3] += 1636326;
          result[4] += 77920;
          result[5] += 77920;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 990536;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50121158;
          result[5] += 2575395;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 30198988;
          result[4] += 3355443;
          result[5] += 20132659;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 1298881;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3030722;
          result[4] += 3842523;
          result[5] += 45514963;
        } else {
          result[0] += 1894838;
          result[1] += 210537;
          result[2] += 842150;
          result[3] += 25053975;
          result[4] += 2947526;
          result[5] += 22738062;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 15790320;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37896770;
          result[5] += 0;
        } else {
          result[0] += 254441;
          result[1] += 52669326;
          result[2] += 0;
          result[3] += 508882;
          result[4] += 254441;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 42364152;
          result[1] += 2798445;
          result[2] += 86106;
          result[3] += 1033272;
          result[4] += 6673215;
          result[5] += 731901;
        } else {
          result[0] += 11220774;
          result[1] += 1381018;
          result[2] += 10530265;
          result[3] += 13810184;
          result[4] += 3625173;
          result[5] += 13119675;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 9615598;
          result[4] += 7211698;
          result[5] += 36859793;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4013988;
          result[3] += 39638132;
          result[4] += 501748;
          result[5] += 9533221;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 2147483;
          result[1] += 0;
          result[2] += 25053975;
          result[3] += 17895697;
          result[4] += 0;
          result[5] += 8589934;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 47551423;
          result[3] += 6135667;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 46976204;
          result[5] += 6710886;
        } else {
          result[0] += 4006499;
          result[1] += 1602599;
          result[2] += 29648095;
          result[3] += 801299;
          result[4] += 0;
          result[5] += 17628597;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8947848;
          result[3] += 8947848;
          result[4] += 0;
          result[5] += 35791394;
        } else {
          result[0] += 635008;
          result[1] += 0;
          result[2] += 49530671;
          result[3] += 3290499;
          result[4] += 115456;
          result[5] += 115456;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52771970;
          result[5] += 915120;
        } else {
          result[0] += 0;
          result[1] += 43925801;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4880644;
          result[5] += 4880644;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 550950;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1836502;
          result[4] += 3611788;
          result[5] += 47687849;
        } else {
          result[0] += 2949840;
          result[1] += 3244824;
          result[2] += 0;
          result[3] += 24778657;
          result[4] += 294984;
          result[5] += 22418785;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53315125;
          result[2] += 0;
          result[3] += 0;
          result[4] += 371965;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 41078759;
          result[1] += 1626881;
          result[2] += 244032;
          result[3] += 1423521;
          result[4] += 7605671;
          result[5] += 1708225;
        } else {
          result[0] += 7653266;
          result[1] += 1142278;
          result[2] += 5939848;
          result[3] += 12793519;
          result[4] += 6168304;
          result[5] += 19989874;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0;
          result[1] += 2684354;
          result[2] += 10737418;
          result[3] += 5368709;
          result[4] += 29527900;
          result[5] += 5368709;
        } else {
          result[0] += 1470879;
          result[1] += 0;
          result[2] += 4412637;
          result[3] += 12502473;
          result[4] += 1470879;
          result[5] += 33830221;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1988410;
          result[3] += 46396251;
          result[4] += 0;
          result[5] += 5302428;
        } else {
          result[0] += 735439;
          result[1] += 0;
          result[2] += 25004946;
          result[3] += 17650550;
          result[4] += 0;
          result[5] += 10296154;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10226112;
          result[3] += 30678337;
          result[4] += 0;
          result[5] += 12782640;
        } else {
          result[0] += 0;
          result[1] += 1677721;
          result[2] += 35232153;
          result[3] += 13421772;
          result[4] += 0;
          result[5] += 3355443;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 23008753;
          result[1] += 7669584;
          result[2] += 21474836;
          result[3] += 1533916;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 644245;
          result[1] += 0;
          result[2] += 48801565;
          result[3] += 3811783;
          result[4] += 0;
          result[5] += 429496;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 317675;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53051740;
          result[5] += 317675;
        } else {
          result[0] += 2268468;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 34783185;
          result[5] += 16635436;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 13754544;
          result[1] += 11092374;
          result[2] += 0;
          result[3] += 3993254;
          result[4] += 17747798;
          result[5] += 7099119;
        } else {
          result[0] += 332574;
          result[1] += 142532;
          result[2] += 427596;
          result[3] += 7886776;
          result[4] += 2185492;
          result[5] += 42712119;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 4743437;
          result[1] += 14661534;
          result[2] += 1293664;
          result[3] += 2802940;
          result[4] += 28676237;
          result[5] += 1509275;
        } else {
          result[0] += 40703191;
          result[1] += 571139;
          result[2] += 1294582;
          result[3] += 3693367;
          result[4] += 3426835;
          result[5] += 3997974;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 259357;
          result[1] += 53427733;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 2025927;
          result[2] += 0;
          result[3] += 6077783;
          result[4] += 9116675;
          result[5] += 36466703;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5140253;
          result[3] += 37124052;
          result[4] += 571139;
          result[5] += 10851646;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29826161;
          result[3] += 0;
          result[4] += 0;
          result[5] += 23860929;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
          result[0] += 17895697;
          result[1] += 2982616;
          result[2] += 0;
          result[3] += 2982616;
          result[4] += 26843545;
          result[5] += 2982616;
        } else {
          result[0] += 1851279;
          result[1] += 462819;
          result[2] += 33554431;
          result[3] += 12958953;
          result[4] += 694229;
          result[5] += 4165377;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 43694238;
          result[3] += 8621284;
          result[4] += 391876;
          result[5] += 979691;
        } else {
          result[0] += 94519;
          result[1] += 0;
          result[2] += 52836415;
          result[3] += 661636;
          result[4] += 0;
          result[5] += 94519;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 248551;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53438539;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 3947580;
          result[2] += 0;
          result[3] += 3947580;
          result[4] += 29212093;
          result[5] += 16579836;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 2397191;
          result[1] += 49941;
          result[2] += 0;
          result[3] += 3795552;
          result[4] += 4095201;
          result[5] += 43349204;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1444495;
          result[3] += 31056658;
          result[4] += 962997;
          result[5] += 20222940;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 21474836;
          result[2] += 0;
          result[3] += 0;
          result[4] += 32212254;
          result[5] += 0;
        } else {
          result[0] += 356330;
          result[1] += 53211984;
          result[2] += 0;
          result[3] += 0;
          result[4] += 118776;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42dd0000))) ) ) {
          result[0] += 25651039;
          result[1] += 2433685;
          result[2] += 4039917;
          result[3] += 7009012;
          result[4] += 8225855;
          result[5] += 6327581;
        } else {
          result[0] += 48273266;
          result[1] += 1533916;
          result[2] += 1082764;
          result[3] += 992534;
          result[4] += 1353456;
          result[5] += 451152;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8639302;
          result[3] += 32088836;
          result[4] += 0;
          result[5] += 12958953;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41756626;
          result[3] += 2982616;
          result[4] += 0;
          result[5] += 8947848;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42182714;
          result[3] += 7669584;
          result[4] += 0;
          result[5] += 3834792;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 26843545;
          result[4] += 0;
          result[5] += 26843545;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42830000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 53687091;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 887389;
          result[1] += 0;
          result[2] += 42151022;
          result[3] += 9317594;
          result[4] += 0;
          result[5] += 1331084;
        } else {
          result[0] += 690262;
          result[1] += 0;
          result[2] += 51539607;
          result[3] += 1380525;
          result[4] += 0;
          result[5] += 76695;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 231409;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51604402;
          result[5] += 1851279;
        } else {
          result[0] += 0;
          result[1] += 44739242;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8947848;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 1819901;
          result[1] += 485307;
          result[2] += 0;
          result[3] += 2123218;
          result[4] += 2972505;
          result[5] += 46286158;
        } else {
          result[0] += 411921;
          result[1] += 274614;
          result[2] += 2059607;
          result[3] += 23754134;
          result[4] += 3020757;
          result[5] += 24166056;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0;
          result[1] += 3158064;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50529027;
          result[5] += 0;
        } else {
          result[0] += 269784;
          result[1] += 52607953;
          result[2] += 0;
          result[3] += 0;
          result[4] += 809353;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 42047504;
          result[1] += 1812392;
          result[2] += 1288812;
          result[3] += 1127710;
          result[4] += 5759380;
          result[5] += 1651290;
        } else {
          result[0] += 7298475;
          result[1] += 247405;
          result[2] += 10638455;
          result[3] += 18431743;
          result[4] += 5690336;
          result[5] += 11380673;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b80000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2147483;
          result[3] += 0;
          result[4] += 0;
          result[5] += 51539607;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426c0000))) ) ) {
          result[0] += 0;
          result[1] += 48318382;
          result[2] += 5368709;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19731153;
          result[3] += 19731153;
          result[4] += 458864;
          result[5] += 13765920;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 44439553;
          result[3] += 8476909;
          result[4] += 0;
          result[5] += 770628;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 424963;
          result[1] += 0;
          result[2] += 51703926;
          result[3] += 1416545;
          result[4] += 0;
          result[5] += 141654;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0;
          result[1] += 458864;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52081067;
          result[5] += 1147160;
        } else {
          result[0] += 0;
          result[1] += 2236962;
          result[2] += 2236962;
          result[3] += 17895697;
          result[4] += 8947848;
          result[5] += 22369621;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1621616;
          result[1] += 57914;
          result[2] += 57914;
          result[3] += 2027020;
          result[4] += 3996126;
          result[5] += 45926497;
        } else {
          result[0] += 2500494;
          result[1] += 441263;
          result[2] += 294175;
          result[3] += 25004946;
          result[4] += 2059230;
          result[5] += 23386979;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 4129776;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49557314;
          result[5] += 0;
        } else {
          result[0] += 235987;
          result[1] += 52861135;
          result[2] += 0;
          result[3] += 0;
          result[4] += 589968;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 42264305;
          result[1] += 2325352;
          result[2] += 693526;
          result[3] += 1305461;
          result[4] += 5833779;
          result[5] += 1264665;
        } else {
          result[0] += 8799071;
          result[1] += 1275227;
          result[2] += 14920165;
          result[3] += 15047688;
          result[4] += 4845865;
          result[5] += 8799071;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b80000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x429c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5965232;
          result[3] += 0;
          result[4] += 47721858;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 6194664;
          result[4] += 12389328;
          result[5] += 35103098;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 1602599;
          result[2] += 19631846;
          result[3] += 26843545;
          result[4] += 801299;
          result[5] += 4807799;
        } else {
          result[0] += 9166088;
          result[1] += 1309441;
          result[2] += 41902119;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1309441;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4473924;
          result[3] += 0;
          result[4] += 4473924;
          result[5] += 44739242;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42df0000))) ) ) {
          result[0] += 260616;
          result[1] += 0;
          result[2] += 47171667;
          result[3] += 5603264;
          result[4] += 0;
          result[5] += 651542;
        } else {
          result[0] += 246837;
          result[1] += 0;
          result[2] += 52329486;
          result[3] += 1110767;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 207286;
          result[1] += 5389437;
          result[2] += 0;
          result[3] += 0;
          result[4] += 47053937;
          result[5] += 1036430;
        } else {
          result[0] += 27549954;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2119227;
          result[4] += 9889727;
          result[5] += 14128181;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 116331;
          result[1] += 58165;
          result[2] += 174497;
          result[3] += 2384800;
          result[4] += 4711434;
          result[5] += 46241860;
        } else {
          result[0] += 1199711;
          result[1] += 0;
          result[2] += 3599134;
          result[3] += 22644555;
          result[4] += 749819;
          result[5] += 25493870;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 1052688;
          result[1] += 3158064;
          result[2] += 1052688;
          result[3] += 1052688;
          result[4] += 41054834;
          result[5] += 6316128;
        } else {
          result[0] += 129366;
          result[1] += 52910892;
          result[2] += 0;
          result[3] += 0;
          result[4] += 646832;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42890000))) ) ) {
          result[0] += 3176750;
          result[1] += 21601906;
          result[2] += 2223725;
          result[3] += 5082801;
          result[4] += 15248404;
          result[5] += 6353501;
        } else {
          result[0] += 41650187;
          result[1] += 416501;
          result[2] += 2665611;
          result[3] += 3498615;
          result[4] += 2499011;
          result[5] += 2957163;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1594666;
          result[3] += 8504885;
          result[4] += 10631107;
          result[5] += 32956432;
        } else {
          result[0] += 0;
          result[1] += 2284557;
          result[2] += 7424810;
          result[3] += 33697216;
          result[4] += 0;
          result[5] += 10280506;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17895697;
          result[3] += 28633115;
          result[4] += 3579139;
          result[5] += 3579139;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38347922;
          result[3] += 9586980;
          result[4] += 0;
          result[5] += 5752188;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42e50000))) ) ) {
          result[0] += 25430727;
          result[1] += 4238454;
          result[2] += 19779454;
          result[3] += 0;
          result[4] += 4238454;
          result[5] += 0;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40692763;
          result[3] += 11284547;
          result[4] += 683911;
          result[5] += 1025867;
        } else {
          result[0] += 381842;
          result[1] += 0;
          result[2] += 51166929;
          result[3] += 2061950;
          result[4] += 0;
          result[5] += 76368;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cc0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52864300;
          result[5] += 822790;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 13421772;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40265318;
          result[5] += 0;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 265777;
          result[1] += 53155;
          result[2] += 53155;
          result[3] += 3720887;
          result[4] += 2764087;
          result[5] += 46830027;
        } else {
          result[0] += 1367032;
          result[1] += 1615583;
          result[2] += 621378;
          result[3] += 23239551;
          result[4] += 5592405;
          result[5] += 21251140;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 1095654;
          result[1] += 16434823;
          result[2] += 1095654;
          result[3] += 1095654;
          result[4] += 31773992;
          result[5] += 2191309;
        } else {
          result[0] += 370255;
          result[1] += 52823160;
          result[2] += 0;
          result[3] += 0;
          result[4] += 493674;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
          result[0] += 45235033;
          result[1] += 1747073;
          result[2] += 47218;
          result[3] += 1274891;
          result[4] += 4580165;
          result[5] += 802709;
        } else {
          result[0] += 15938355;
          result[1] += 838860;
          result[2] += 9786709;
          result[3] += 10066329;
          result[4] += 2516582;
          result[5] += 14540253;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 1917396;
          result[2] += 12463074;
          result[3] += 28281592;
          result[4] += 958698;
          result[5] += 10066329;
        } else {
          result[0] += 1451002;
          result[1] += 967334;
          result[2] += 33373056;
          result[3] += 10640684;
          result[4] += 3385672;
          result[5] += 3869339;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 1579032;
          result[1] += 3158064;
          result[2] += 22106449;
          result[3] += 7895160;
          result[4] += 0;
          result[5] += 18948385;
        } else {
          result[0] += 1028050;
          result[1] += 0;
          result[2] += 49403546;
          result[3] += 2969924;
          result[4] += 0;
          result[5] += 285569;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 1585694;
          result[2] += 0;
          result[3] += 226527;
          result[4] += 50062646;
          result[5] += 1812222;
        } else {
          result[0] += 26843545;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10324440;
          result[5] += 16519104;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 154495;
          result[3] += 1390457;
          result[4] += 1004218;
          result[5] += 51137919;
        } else {
          result[0] += 785185;
          result[1] += 2159261;
          result[2] += 294444;
          result[3] += 19335204;
          result[4] += 3435188;
          result[5] += 27677805;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 38337120;
          result[1] += 3553934;
          result[2] += 793964;
          result[3] += 1890390;
          result[4] += 7372523;
          result[5] += 1739159;
        } else {
          result[0] += 7849809;
          result[1] += 700875;
          result[2] += 8971211;
          result[3] += 13877342;
          result[4] += 7289108;
          result[5] += 14998743;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 53399994;
          result[2] += 0;
          result[3] += 0;
          result[4] += 287096;
          result[5] += 0;
        } else {
          result[0] += 42949672;
          result[1] += 10737418;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7433597;
          result[3] += 37167986;
          result[4] += 0;
          result[5] += 9085507;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 7158278;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ed0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40064993;
          result[3] += 8814298;
          result[4] += 0;
          result[5] += 4807799;
        } else {
          result[0] += 21474836;
          result[1] += 0;
          result[2] += 5368709;
          result[3] += 26843545;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 589968;
          result[1] += 0;
          result[2] += 43657634;
          result[3] += 7817076;
          result[4] += 0;
          result[5] += 1622412;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42980000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 202592;
          result[1] += 0;
          result[2] += 52268941;
          result[3] += 1114260;
          result[4] += 0;
          result[5] += 101296;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 427785;
          result[1] += 213892;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51548163;
          result[5] += 1497249;
        } else {
          result[0] += 16977969;
          result[1] += 0;
          result[2] += 0;
          result[3] += 917728;
          result[4] += 15142512;
          result[5] += 20648881;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 65392;
          result[3] += 1961769;
          result[4] += 2484907;
          result[5] += 49175021;
        } else {
          result[0] += 299927;
          result[1] += 4798846;
          result[2] += 1049747;
          result[3] += 19945204;
          result[4] += 2099495;
          result[5] += 25493870;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 7669584;
          result[2] += 0;
          result[3] += 0;
          result[4] += 46017506;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
          result[0] += 11855193;
          result[1] += 1862959;
          result[2] += 1016159;
          result[3] += 12363273;
          result[4] += 10330954;
          result[5] += 16258551;
        } else {
          result[0] += 39620240;
          result[1] += 1040447;
          result[2] += 3537521;
          result[3] += 3162960;
          result[4] += 5243855;
          result[5] += 1082065;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3038891;
          result[3] += 0;
          result[4] += 17220387;
          result[5] += 33427811;
        } else {
          result[0] += 0;
          result[1] += 679583;
          result[2] += 2038750;
          result[3] += 42813756;
          result[4] += 0;
          result[5] += 8155001;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 6507526;
          result[2] += 1626881;
          result[3] += 3253763;
          result[4] += 13015052;
          result[5] += 29283867;
        } else {
          result[0] += 0;
          result[1] += 426088;
          result[2] += 35365306;
          result[3] += 14913080;
          result[4] += 0;
          result[5] += 2982616;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 29826161;
          result[1] += 14913080;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2982616;
          result[5] += 5965232;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 45253486;
          result[3] += 7405116;
          result[4] += 0;
          result[5] += 1028488;
        } else {
          result[0] += 663828;
          result[1] += 0;
          result[2] += 51612628;
          result[3] += 1161699;
          result[4] += 0;
          result[5] += 248935;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 202592;
          result[1] += 405185;
          result[2] += 0;
          result[3] += 0;
          result[4] += 48217085;
          result[5] += 4862227;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 3188204;
          result[1] += 455457;
          result[2] += 0;
          result[3] += 1821831;
          result[4] += 2505018;
          result[5] += 45716579;
        } else {
          result[0] += 1723289;
          result[1] += 0;
          result[2] += 2916335;
          result[3] += 25584218;
          result[4] += 0;
          result[5] += 23463247;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 38028356;
          result[2] += 0;
          result[3] += 2236962;
          result[4] += 13421772;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 41156008;
          result[1] += 3358002;
          result[2] += 573317;
          result[3] += 1474245;
          result[4] += 6429346;
          result[5] += 696171;
        } else {
          result[0] += 8337289;
          result[1] += 1010580;
          result[2] += 12884901;
          result[3] += 13516514;
          result[4] += 4168644;
          result[5] += 13769159;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 16519104;
          result[2] += 1376592;
          result[3] += 0;
          result[4] += 26155249;
          result[5] += 9636144;
        } else {
          result[0] += 1579032;
          result[1] += 4737096;
          result[2] += 1579032;
          result[3] += 4737096;
          result[4] += 0;
          result[5] += 41054834;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 3067833;
          result[1] += 0;
          result[2] += 23008753;
          result[3] += 15339168;
          result[4] += 0;
          result[5] += 12271335;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11930464;
          result[3] += 26843545;
          result[4] += 5965232;
          result[5] += 8947848;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36984440;
          result[3] += 14913080;
          result[4] += 0;
          result[5] += 1789569;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 860370;
          result[1] += 0;
          result[2] += 46804130;
          result[3] += 5334294;
          result[4] += 0;
          result[5] += 688296;
        } else {
          result[0] += 337654;
          result[1] += 0;
          result[2] += 52223920;
          result[3] += 787860;
          result[4] += 0;
          result[5] += 337654;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 835596;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50553603;
          result[5] += 2297891;
        } else {
          result[0] += 0;
          result[1] += 49213166;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4473924;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1168380;
          result[1] += 233676;
          result[2] += 58419;
          result[3] += 2453599;
          result[4] += 3388303;
          result[5] += 46384712;
        } else {
          result[0] += 4219310;
          result[1] += 2473389;
          result[2] += 1745921;
          result[3] += 22260501;
          result[4] += 2909869;
          result[5] += 20078099;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 52264059;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1164298;
          result[5] += 258732;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 40145836;
          result[1] += 2230324;
          result[2] += 0;
          result[3] += 1154989;
          result[4] += 6969763;
          result[5] += 3186177;
        } else {
          result[0] += 9450023;
          result[1] += 410870;
          result[2] += 13558729;
          result[3] += 17941349;
          result[4] += 1917396;
          result[5] += 10408721;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
          result[0] += 2147483;
          result[1] += 0;
          result[2] += 8589934;
          result[3] += 7516192;
          result[4] += 4294967;
          result[5] += 31138512;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5883516;
          result[3] += 41184617;
          result[4] += 0;
          result[5] += 6618956;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 5553837;
          result[2] += 22215348;
          result[3] += 22215348;
          result[4] += 0;
          result[5] += 3702558;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 50785086;
          result[3] += 1451002;
          result[4] += 0;
          result[5] += 1451002;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 22473666;
          result[3] += 28716351;
          result[4] += 0;
          result[5] += 2497074;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 50704475;
          result[3] += 2982616;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 38347922;
          result[1] += 0;
          result[2] += 15339168;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 947419;
          result[1] += 0;
          result[2] += 49328962;
          result[3] += 3031741;
          result[4] += 0;
          result[5] += 378967;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 549697;
          result[1] += 732929;
          result[2] += 1282626;
          result[3] += 1465859;
          result[4] += 46907492;
          result[5] += 2748485;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 4179234;
          result[1] += 505182;
          result[2] += 459256;
          result[3] += 3674052;
          result[4] += 5327376;
          result[5] += 39541989;
        } else {
          result[0] += 234441;
          result[1] += 1172207;
          result[2] += 468882;
          result[3] += 37510631;
          result[4] += 1641090;
          result[5] += 12659838;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 1154561;
          result[1] += 12700172;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39255077;
          result[5] += 577280;
        } else {
          result[0] += 0;
          result[1] += 52115761;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1571329;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 42984619;
          result[1] += 1135772;
          result[2] += 829987;
          result[3] += 1659975;
          result[4] += 3538368;
          result[5] += 3538368;
        } else {
          result[0] += 8417836;
          result[1] += 1122378;
          result[2] += 13655601;
          result[3] += 13094412;
          result[4] += 4302449;
          result[5] += 13094412;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42aa0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 53687091;
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3286964;
          result[3] += 43826196;
          result[4] += 0;
          result[5] += 6573929;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 25430727;
          result[3] += 19779454;
          result[4] += 0;
          result[5] += 8476909;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 2477865;
          result[1] += 0;
          result[2] += 25604612;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 4129776;
        } else {
          result[0] += 344148;
          result[1] += 0;
          result[2] += 44739242;
          result[3] += 8259552;
          result[4] += 0;
          result[5] += 344148;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 202338;
          result[1] += 0;
          result[2] += 51191585;
          result[3] += 2158275;
          result[4] += 0;
          result[5] += 134892;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42300000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42860000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 10737418;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53418655;
          result[5] += 268435;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 6442450;
          result[4] += 30064771;
          result[5] += 17179869;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 3355443;
          result[2] += 0;
          result[3] += 1677721;
          result[4] += 45298483;
          result[5] += 3355443;
        } else {
          result[0] += 2581110;
          result[1] += 93858;
          result[2] += 140787;
          result[3] += 4082846;
          result[4] += 2299534;
          result[5] += 44488953;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 830212;
          result[3] += 39573474;
          result[4] += 0;
          result[5] += 13283404;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6710886;
          result[3] += 8053063;
          result[4] += 0;
          result[5] += 38923141;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 26364196;
          result[2] += 0;
          result[3] += 1438047;
          result[4] += 25405498;
          result[5] += 479349;
        } else {
          result[0] += 373692;
          result[1] += 52939707;
          result[2] += 0;
          result[3] += 0;
          result[4] += 373692;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
          result[0] += 3050402;
          result[1] += 27453626;
          result[2] += 1220161;
          result[3] += 1830241;
          result[4] += 18912498;
          result[5] += 1220161;
        } else {
          result[0] += 43986619;
          result[1] += 83624;
          result[2] += 1923369;
          result[3] += 3010491;
          result[4] += 3094115;
          result[5] += 1588870;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 2206318;
          result[1] += 367719;
          result[2] += 4780357;
          result[3] += 21327748;
          result[4] += 8457555;
          result[5] += 16547391;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30381067;
          result[3] += 16647160;
          result[4] += 0;
          result[5] += 6658864;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 11811160;
          result[1] += 2147483;
          result[2] += 15032385;
          result[3] += 8589934;
          result[4] += 6442450;
          result[5] += 9663676;
        } else {
          result[0] += 353204;
          result[1] += 0;
          result[2] += 49095432;
          result[3] += 3767515;
          result[4] += 0;
          result[5] += 470939;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 933688;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50652603;
          result[5] += 2100799;
        } else {
          result[0] += 16297866;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10545678;
          result[5] += 26843545;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 42741179;
          result[1] += 521233;
          result[2] += 0;
          result[3] += 2084935;
          result[4] += 6254806;
          result[5] += 2084935;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1011495;
          result[4] += 1633954;
          result[5] += 51041640;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 922987;
          result[1] += 1076818;
          result[2] += 0;
          result[3] += 9537534;
          result[4] += 7999222;
          result[5] += 34150527;
        } else {
          result[0] += 173744;
          result[1] += 347489;
          result[2] += 2779914;
          result[3] += 33532713;
          result[4] += 1389957;
          result[5] += 15463272;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 412977;
          result[1] += 21061858;
          result[2] += 0;
          result[3] += 0;
          result[4] += 32212254;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 49058893;
          result[1] += 514244;
          result[2] += 102848;
          result[3] += 565668;
          result[4] += 3136889;
          result[5] += 308546;
        } else {
          result[0] += 13421772;
          result[1] += 1118481;
          result[2] += 6487190;
          result[3] += 11408506;
          result[4] += 6934582;
          result[5] += 14316557;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12321627;
          result[3] += 29923952;
          result[4] += 880116;
          result[5] += 10561394;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34045472;
          result[3] += 10475529;
          result[4] += 0;
          result[5] += 9166088;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 32736031;
          result[1] += 6547206;
          result[2] += 10475529;
          result[3] += 2618882;
          result[4] += 1309441;
          result[5] += 0;
        } else {
          result[0] += 731147;
          result[1] += 417798;
          result[2] += 47420115;
          result[3] += 4282433;
          result[4] += 104449;
          result[5] += 731147;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52356006;
          result[5] += 1331084;
        } else {
          result[0] += 0;
          result[1] += 35791394;
          result[2] += 17895697;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1215798;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2047660;
          result[4] += 3071490;
          result[5] += 47352142;
        } else {
          result[0] += 3560151;
          result[1] += 5838649;
          result[2] += 3275339;
          result[3] += 18512790;
          result[4] += 2136091;
          result[5] += 20364069;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 12294753;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41392337;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 52206067;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1481023;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 18515461;
          result[1] += 1316999;
          result[2] += 3563645;
          result[3] += 11620582;
          result[4] += 5345467;
          result[5] += 13324934;
        } else {
          result[0] += 44842685;
          result[1] += 206886;
          result[2] += 3258465;
          result[3] += 1551650;
          result[4] += 3517073;
          result[5] += 310330;
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1376592;
          result[3] += 2753184;
          result[4] += 5506368;
          result[5] += 44050946;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13168531;
          result[3] += 23298171;
          result[4] += 2025927;
          result[5] += 15194459;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 49018648;
          result[3] += 2334221;
          result[4] += 0;
          result[5] += 2334221;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 47721858;
          result[4] += 0;
          result[5] += 5965232;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15339168;
          result[3] += 0;
          result[4] += 0;
          result[5] += 38347922;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 39045157;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 14641933;
        } else {
          result[0] += 763601;
          result[1] += 117477;
          result[2] += 48753047;
          result[3] += 3700532;
          result[4] += 0;
          result[5] += 352431;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          result[0] += 440058;
          result[1] += 440058;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49506539;
          result[5] += 3300435;
        } else {
          result[0] += 21107745;
          result[1] += 0;
          result[2] += 458864;
          result[3] += 5506368;
          result[4] += 15142512;
          result[5] += 11471600;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 172812;
          result[2] += 115208;
          result[3] += 2592187;
          result[4] += 5241979;
          result[5] += 45564902;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1602599;
          result[3] += 24639970;
          result[4] += 801299;
          result[5] += 26643220;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
          result[0] += 386238;
          result[1] += 52270884;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1029968;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 11256970;
          result[2] += 0;
          result[3] += 432960;
          result[4] += 40698278;
          result[5] += 1298881;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 44473464;
          result[1] += 2746369;
          result[2] += 132888;
          result[3] += 930221;
          result[4] += 4518220;
          result[5] += 885925;
        } else {
          result[0] += 13242815;
          result[1] += 715827;
          result[2] += 8768891;
          result[3] += 12526987;
          result[4] += 2326440;
          result[5] += 16106127;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c20000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 39370533;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7090747;
          result[3] += 40518559;
          result[4] += 0;
          result[5] += 6077783;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 23008753;
          result[4] += 0;
          result[5] += 30678337;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 46759724;
          result[3] += 0;
          result[4] += 0;
          result[5] += 6927366;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 1501736;
          result[1] += 0;
          result[2] += 30785604;
          result[3] += 14266499;
          result[4] += 0;
          result[5] += 7133249;
        } else {
          result[0] += 1669028;
          result[1] += 0;
          result[2] += 45898290;
          result[3] += 5563429;
          result[4] += 0;
          result[5] += 556342;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
          result[0] += 5113056;
          result[1] += 0;
          result[2] += 38347922;
          result[3] += 0;
          result[4] += 0;
          result[5] += 10226112;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 51527265;
          result[3] += 2159825;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 336596;
          result[1] += 1009788;
          result[2] += 168298;
          result[3] += 1346384;
          result[4] += 46450273;
          result[5] += 4375750;
        } else {
          result[0] += 41982796;
          result[1] += 0;
          result[2] += 0;
          result[3] += 508882;
          result[4] += 6106588;
          result[5] += 5088823;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 55634;
          result[1] += 55634;
          result[2] += 166902;
          result[3] += 3115520;
          result[4] += 3894400;
          result[5] += 46398999;
        } else {
          result[0] += 429496;
          result[1] += 1181116;
          result[2] += 1610612;
          result[3] += 25555055;
          result[4] += 3113851;
          result[5] += 21796959;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 53276220;
          result[2] += 0;
          result[3] += 0;
          result[4] += 410870;
          result[5] += 0;
        } else {
          result[0] += 813440;
          result[1] += 23183062;
          result[2] += 813440;
          result[3] += 0;
          result[4] += 28470427;
          result[5] += 406720;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 28151110;
          result[1] += 922987;
          result[2] += 7383897;
          result[3] += 8614547;
          result[4] += 3076624;
          result[5] += 5537923;
        } else {
          result[0] += 47803574;
          result[1] += 1103159;
          result[2] += 1532165;
          result[3] += 245146;
          result[4] += 2880471;
          result[5] += 122573;
        }
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3834792;
          result[3] += 38347922;
          result[4] += 0;
          result[5] += 11504376;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32824231;
          result[3] += 16412115;
          result[4] += 0;
          result[5] += 4450743;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 48653926;
          result[3] += 4613734;
          result[4] += 0;
          result[5] += 419430;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 22369621;
          result[4] += 0;
          result[5] += 4473924;
        } else {
          result[0] += 314880;
          result[1] += 0;
          result[2] += 51010608;
          result[3] += 2125442;
          result[4] += 0;
          result[5] += 236160;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ed0000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 8947848;
          result[1] += 0;
          result[2] += 44739242;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 238609;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52971263;
          result[5] += 477218;
        } else {
          result[0] += 38686286;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9474192;
          result[5] += 5526612;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 216189;
          result[2] += 144126;
          result[3] += 1873643;
          result[4] += 3314907;
          result[5] += 48138224;
        } else {
          result[0] += 0;
          result[1] += 457885;
          result[2] += 572357;
          result[3] += 17399654;
          result[4] += 4807799;
          result[5] += 30449395;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 12565063;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41122027;
          result[5] += 0;
        } else {
          result[0] += 636102;
          result[1] += 52287664;
          result[2] += 0;
          result[3] += 254441;
          result[4] += 508882;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42850000))) ) ) {
          result[0] += 3807595;
          result[1] += 23987849;
          result[2] += 0;
          result[3] += 380759;
          result[4] += 23226330;
          result[5] += 2284557;
        } else {
          result[0] += 40987736;
          result[1] += 684396;
          result[2] += 1977145;
          result[3] += 3916267;
          result[4] += 3155827;
          result[5] += 2965717;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 1556147;
          result[1] += 3112295;
          result[2] += 3890368;
          result[3] += 9336885;
          result[4] += 3890368;
          result[5] += 31901025;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2631720;
          result[3] += 36317738;
          result[4] += 1052688;
          result[5] += 13684944;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 173744;
          result[1] += 0;
          result[2] += 37355095;
          result[3] += 13030847;
          result[4] += 0;
          result[5] += 3127403;
        } else {
          result[0] += 31386299;
          result[1] += 2477865;
          result[2] += 14867194;
          result[3] += 4129776;
          result[4] += 825955;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42f90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 46258688;
          result[3] += 7090747;
          result[4] += 0;
          result[5] += 337654;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52500131;
          result[3] += 913045;
          result[4] += 0;
          result[5] += 273913;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 2334221;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50834153;
          result[5] += 518715;
        } else {
          result[0] += 30973321;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2064888;
          result[4] += 15830808;
          result[5] += 4818072;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 158213;
          result[1] += 1793085;
          result[2] += 0;
          result[3] += 2847841;
          result[4] += 3427957;
          result[5] += 45459992;
        } else {
          result[0] += 789516;
          result[1] += 0;
          result[2] += 0;
          result[3] += 35528222;
          result[4] += 0;
          result[5] += 17369353;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42520000))) ) ) {
          result[0] += 0;
          result[1] += 52544812;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1142278;
          result[5] += 0;
        } else {
          result[0] += 1376592;
          result[1] += 13765920;
          result[2] += 917728;
          result[3] += 2753184;
          result[4] += 34873666;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 44330834;
          result[1] += 1648483;
          result[2] += 0;
          result[3] += 1113840;
          result[4] += 5970182;
          result[5] += 623750;
        } else {
          result[0] += 11075846;
          result[1] += 461493;
          result[2] += 9999028;
          result[3] += 11229678;
          result[4] += 3076624;
          result[5] += 17844419;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 3221225;
          result[1] += 6442450;
          result[2] += 0;
          result[3] += 6442450;
          result[4] += 4294967;
          result[5] += 33285996;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7561562;
          result[3] += 34405107;
          result[4] += 756156;
          result[5] += 10964265;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 3355443;
          result[1] += 13421772;
          result[2] += 7829367;
          result[3] += 8947848;
          result[4] += 3355443;
          result[5] += 16777215;
        } else {
          result[0] += 2936012;
          result[1] += 838860;
          result[2] += 38587596;
          result[3] += 2516582;
          result[4] += 419430;
          result[5] += 8388607;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8947848;
          result[3] += 35791394;
          result[4] += 0;
          result[5] += 8947848;
        } else {
          result[0] += 20132659;
          result[1] += 0;
          result[2] += 33554431;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 39768215;
          result[1] += 0;
          result[2] += 13918875;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 123135;
          result[1] += 0;
          result[2] += 48946373;
          result[3] += 4001904;
          result[4] += 0;
          result[5] += 615677;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 607778;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50040420;
          result[5] += 3038891;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 2271590;
          result[1] += 166213;
          result[2] += 0;
          result[3] += 2216185;
          result[4] += 3490491;
          result[5] += 45542609;
        } else {
          result[0] += 421626;
          result[1] += 140542;
          result[2] += 421626;
          result[3] += 26281377;
          result[4] += 1405421;
          result[5] += 25016497;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 8706014;
          result[2] += 0;
          result[3] += 0;
          result[4] += 44981076;
          result[5] += 0;
        } else {
          result[0] += 119570;
          result[1] += 51654395;
          result[2] += 239140;
          result[3] += 119570;
          result[4] += 1554414;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 41420835;
          result[1] += 3644322;
          result[2] += 88885;
          result[3] += 1377731;
          result[4] += 6044242;
          result[5] += 1111073;
        } else {
          result[0] += 7390690;
          result[1] += 1115575;
          result[2] += 12131888;
          result[3] += 17151979;
          result[4] += 1812810;
          result[5] += 14084145;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5368709;
          result[3] += 5368709;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8259552;
          result[3] += 33038209;
          result[4] += 0;
          result[5] += 12389328;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42f90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 16617432;
          result[4] += 0;
          result[5] += 1278264;
        } else {
          result[0] += 37580963;
          result[1] += 0;
          result[2] += 16106127;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42880000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 44282053;
          result[3] += 8425346;
          result[4] += 0;
          result[5] += 979691;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 4569114;
          result[1] += 0;
          result[2] += 42264305;
          result[3] += 6853671;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 83365;
          result[1] += 0;
          result[2] += 52186520;
          result[3] += 1250475;
          result[4] += 0;
          result[5] += 166730;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x41fc0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 832358;
          result[1] += 832358;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49386574;
          result[5] += 2635800;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42580000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 30449395;
          result[2] += 0;
          result[3] += 0;
          result[4] += 23237696;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 34738706;
          result[1] += 0;
          result[2] += 2706912;
          result[3] += 0;
          result[4] += 10827648;
          result[5] += 5413824;
        } else {
          result[0] += 154569;
          result[1] += 103046;
          result[2] += 206092;
          result[3] += 6234297;
          result[4] += 2833771;
          result[5] += 44155313;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 45511152;
          result[1] += 1370533;
          result[2] += 0;
          result[3] += 1937650;
          result[4] += 3071884;
          result[5] += 1795871;
        } else {
          result[0] += 7990219;
          result[1] += 718221;
          result[2] += 8618663;
          result[3] += 19302215;
          result[4] += 2423999;
          result[5] += 14633772;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8541128;
          result[3] += 31724190;
          result[4] += 1220161;
          result[5] += 12201611;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17895697;
          result[3] += 3579139;
          result[4] += 0;
          result[5] += 32212254;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15907286;
          result[3] += 15907286;
          result[4] += 1988410;
          result[5] += 19884107;
        } else {
          result[0] += 1003497;
          result[1] += 2508742;
          result[2] += 42648623;
          result[3] += 5519233;
          result[4] += 0;
          result[5] += 2006994;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30678337;
          result[3] += 19173961;
          result[4] += 0;
          result[5] += 3834792;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 49689116;
          result[3] += 3426835;
          result[4] += 0;
          result[5] += 571139;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 260616;
          result[1] += 0;
          result[2] += 48214135;
          result[3] += 4951722;
          result[4] += 0;
          result[5] += 260616;
        } else {
          result[0] += 112788;
          result[1] += 0;
          result[2] += 52446423;
          result[3] += 902304;
          result[4] += 0;
          result[5] += 225576;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 214748;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51324859;
          result[5] += 2147483;
        } else {
          result[0] += 0;
          result[1] += 35103098;
          result[2] += 0;
          result[3] += 0;
          result[4] += 18583993;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1598262;
          result[4] += 1452965;
          result[5] += 50635862;
        } else {
          result[0] += 6660929;
          result[1] += 1465404;
          result[2] += 266437;
          result[3] += 15453356;
          result[4] += 4129776;
          result[5] += 25711187;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 0;
          result[1] += 53417982;
          result[2] += 0;
          result[3] += 0;
          result[4] += 269108;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 16185078;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37502012;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 44344375;
          result[1] += 1162251;
          result[2] += 223509;
          result[3] += 1564569;
          result[4] += 4201987;
          result[5] += 2190397;
        } else {
          result[0] += 9301410;
          result[1] += 652730;
          result[2] += 11259602;
          result[3] += 15828716;
          result[4] += 3426835;
          result[5] += 13217794;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 2718333;
          result[2] += 679583;
          result[3] += 6116250;
          result[4] += 4757084;
          result[5] += 39415839;
        } else {
          result[0] += 4129776;
          result[1] += 8259552;
          result[2] += 33038209;
          result[3] += 0;
          result[4] += 8259552;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3320851;
          result[3] += 39850212;
          result[4] += 1106950;
          result[5] += 9409077;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35354913;
          result[3] += 18332177;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 2386092;
          result[1] += 3976821;
          result[2] += 14714239;
          result[3] += 21872518;
          result[4] += 1590728;
          result[5] += 9146689;
        } else {
          result[0] += 4060368;
          result[1] += 0;
          result[2] += 43085018;
          result[3] += 5864976;
          result[4] += 0;
          result[5] += 676728;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 47643779;
          result[3] += 5340600;
          result[4] += 0;
          result[5] += 702710;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53087235;
          result[3] += 599855;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 443694;
          result[1] += 0;
          result[2] += 665542;
          result[3] += 0;
          result[4] += 50803073;
          result[5] += 1774779;
        } else {
          result[0] += 0;
          result[1] += 17895697;
          result[2] += 0;
          result[3] += 35791394;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42890000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
          result[0] += 2982616;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 44739242;
          result[5] += 5965232;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2136799;
          result[4] += 1068399;
          result[5] += 50481891;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          result[0] += 32435950;
          result[1] += 20132659;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1118481;
          result[5] += 0;
        } else {
          result[0] += 140911;
          result[1] += 1550021;
          result[2] += 2677309;
          result[3] += 18600252;
          result[4] += 1972754;
          result[5] += 28745844;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53172107;
          result[2] += 0;
          result[3] += 0;
          result[4] += 514984;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42850000))) ) ) {
          result[0] += 2844349;
          result[1] += 6044242;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41243063;
          result[5] += 3555436;
        } else {
          result[0] += 38897952;
          result[1] += 503766;
          result[2] += 2123015;
          result[3] += 5001679;
          result[4] += 3202514;
          result[5] += 3958163;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1066630;
          result[1] += 6044242;
          result[2] += 14221746;
          result[3] += 2844349;
          result[4] += 11732940;
          result[5] += 17777182;
        } else {
          result[0] += 3416451;
          result[1] += 0;
          result[2] += 15618062;
          result[3] += 31236125;
          result[4] += 0;
          result[5] += 3416451;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 2684354;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 17716740;
          result[4] += 0;
          result[5] += 6442450;
        } else {
          result[0] += 790410;
          result[1] += 0;
          result[2] += 50343048;
          result[3] += 2432031;
          result[4] += 0;
          result[5] += 121601;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42e50000))) ) ) {
          result[0] += 195938;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52903338;
          result[5] += 587814;
        } else {
          result[0] += 0;
          result[1] += 26843545;
          result[2] += 0;
          result[3] += 0;
          result[4] += 26843545;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8947848;
          result[3] += 0;
          result[4] += 0;
          result[5] += 44739242;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 35791394;
          result[4] += 17895697;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          result[0] += 7320966;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 43925801;
          result[5] += 2440322;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 212622;
          result[1] += 159466;
          result[2] += 106311;
          result[3] += 3508265;
          result[4] += 2391999;
          result[5] += 47308426;
        } else {
          result[0] += 438261;
          result[1] += 766958;
          result[2] += 2958268;
          result[3] += 23994842;
          result[4] += 4163488;
          result[5] += 21365270;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 21913098;
          result[2] += 0;
          result[3] += 0;
          result[4] += 31773992;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 52747273;
          result[2] += 0;
          result[3] += 0;
          result[4] += 939817;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1883757;
          result[1] += 33907636;
          result[2] += 0;
          result[3] += 2825636;
          result[4] += 15070060;
          result[5] += 0;
        } else {
          result[0] += 47071394;
          result[1] += 856708;
          result[2] += 1047088;
          result[3] += 904303;
          result[4] += 2903291;
          result[5] += 904303;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 3890368;
          result[2] += 5446516;
          result[3] += 17895697;
          result[4] += 5446516;
          result[5] += 21007992;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27467814;
          result[3] += 20808950;
          result[4] += 0;
          result[5] += 5410327;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 15194459;
          result[1] += 5064819;
          result[2] += 21272243;
          result[3] += 5064819;
          result[4] += 3038891;
          result[5] += 4051855;
        } else {
          result[0] += 470939;
          result[1] += 0;
          result[2] += 49389769;
          result[3] += 3355443;
          result[4] += 0;
          result[5] += 470939;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 490293;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50500186;
          result[5] += 2696611;
        } else {
          result[0] += 0;
          result[1] += 21474836;
          result[2] += 0;
          result[3] += 18790481;
          result[4] += 5368709;
          result[5] += 8053063;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1966006;
          result[4] += 1058618;
          result[5] += 50662466;
        } else {
          result[0] += 3566287;
          result[1] += 192772;
          result[2] += 385544;
          result[3] += 13686834;
          result[4] += 6361486;
          result[5] += 29494164;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 378078;
          result[1] += 9073874;
          result[2] += 0;
          result[3] += 1890390;
          result[4] += 40076279;
          result[5] += 2268468;
        } else {
          result[0] += 0;
          result[1] += 52491091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1195999;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 44660815;
          result[1] += 1711142;
          result[2] += 470564;
          result[3] += 1326135;
          result[4] += 4106741;
          result[5] += 1411692;
        } else {
          result[0] += 12782640;
          result[1] += 2191309;
          result[2] += 7852193;
          result[3] += 14426123;
          result[4] += 3469573;
          result[5] += 12965249;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3579139;
          result[3] += 41756626;
          result[4] += 0;
          result[5] += 8351325;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3158064;
          result[3] += 22106449;
          result[4] += 0;
          result[5] += 28422577;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34107093;
          result[3] += 12632256;
          result[4] += 1263225;
          result[5] += 5684515;
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33451187;
          result[3] += 18583993;
          result[4] += 0;
          result[5] += 1651910;
        } else {
          result[0] += 1590728;
          result[1] += 0;
          result[2] += 45733448;
          result[3] += 5169868;
          result[4] += 0;
          result[5] += 1193046;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 25430727;
          result[1] += 0;
          result[2] += 28256363;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 578057;
          result[1] += 0;
          result[2] += 50580032;
          result[3] += 2529001;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 199580;
          result[1] += 4390765;
          result[2] += 0;
          result[3] += 0;
          result[4] += 48498004;
          result[5] += 598740;
        } else {
          result[0] += 33971492;
          result[1] += 1516584;
          result[2] += 0;
          result[3] += 1516584;
          result[4] += 4853070;
          result[5] += 11829359;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1456369;
          result[4] += 4104315;
          result[5] += 48126406;
        } else {
          result[0] += 3355443;
          result[1] += 186413;
          result[2] += 559240;
          result[3] += 16217975;
          result[4] += 2982616;
          result[5] += 30385402;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 30198988;
          result[2] += 0;
          result[3] += 0;
          result[4] += 23488102;
          result[5] += 0;
        } else {
          result[0] += 267766;
          result[1] += 53017676;
          result[2] += 133883;
          result[3] += 0;
          result[4] += 133883;
          result[5] += 133883;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 9708334;
          result[1] += 3106667;
          result[2] += 4757084;
          result[3] += 17960419;
          result[4] += 4465833;
          result[5] += 13688752;
        } else {
          result[0] += 41308001;
          result[1] += 1774779;
          result[2] += 4170732;
          result[3] += 1863518;
          result[4] += 4215102;
          result[5] += 354955;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4880644;
          result[3] += 0;
          result[4] += 4880644;
          result[5] += 43925801;
        } else {
          result[0] += 0;
          result[1] += 5651272;
          result[2] += 9889727;
          result[3] += 24724318;
          result[4] += 706409;
          result[5] += 12715363;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42960000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 9615598;
          result[1] += 1602599;
          result[2] += 37661093;
          result[3] += 1602599;
          result[4] += 0;
          result[5] += 3205199;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17369353;
          result[3] += 18948385;
          result[4] += 0;
          result[5] += 17369353;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42771458;
          result[3] += 10024560;
          result[4] += 0;
          result[5] += 891072;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 51512847;
          result[3] += 1672495;
          result[4] += 0;
          result[5] += 501748;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42e50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52954994;
          result[5] += 732096;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
          result[0] += 3038891;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39505595;
          result[5] += 11142603;
        } else {
          result[0] += 37631138;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3010491;
          result[5] += 13045461;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 3355443;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40265318;
          result[5] += 10066329;
        } else {
          result[0] += 0;
          result[1] += 105683;
          result[2] += 0;
          result[3] += 3910280;
          result[4] += 2800606;
          result[5] += 46870521;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5315553;
          result[3] += 12757328;
          result[4] += 4783998;
          result[5] += 30830210;
        } else {
          result[0] += 445536;
          result[1] += 668304;
          result[2] += 1782144;
          result[3] += 36756722;
          result[4] += 1559376;
          result[5] += 12475008;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 1970168;
          result[1] += 18716600;
          result[2] += 0;
          result[3] += 1477626;
          result[4] += 31030153;
          result[5] += 492542;
        } else {
          result[0] += 120105;
          result[1] += 52846353;
          result[2] += 0;
          result[3] += 0;
          result[4] += 720632;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
          result[0] += 47869018;
          result[1] += 1466343;
          result[2] += 141904;
          result[3] += 378411;
          result[4] += 3405700;
          result[5] += 425712;
        } else {
          result[0] += 15123124;
          result[1] += 0;
          result[2] += 10964265;
          result[3] += 9830030;
          result[4] += 9830030;
          result[5] += 7939640;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 391876;
          result[1] += 1959382;
          result[2] += 14891309;
          result[3] += 10580667;
          result[4] += 4310642;
          result[5] += 21553211;
        } else {
          result[0] += 3408704;
          result[1] += 284058;
          result[2] += 33518924;
          result[3] += 13634816;
          result[4] += 284058;
          result[5] += 2556528;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42872425;
          result[3] += 9655951;
          result[4] += 0;
          result[5] += 1158714;
        } else {
          result[0] += 260616;
          result[1] += 0;
          result[2] += 52297134;
          result[3] += 1129340;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42780000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 835596;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52224796;
          result[5] += 626697;
        } else {
          result[0] += 0;
          result[1] += 21962900;
          result[2] += 0;
          result[3] += 7320966;
          result[4] += 0;
          result[5] += 24403223;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1679471;
          result[1] += 55982;
          result[2] += 55982;
          result[3] += 2911083;
          result[4] += 4814483;
          result[5] += 44170088;
        } else {
          result[0] += 5788365;
          result[1] += 2025927;
          result[2] += 1157673;
          result[3] += 24021717;
          result[4] += 3473019;
          result[5] += 17220387;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 41883858;
          result[1] += 3215059;
          result[2] += 0;
          result[3] += 1409341;
          result[4] += 6165867;
          result[5] += 1012963;
        } else {
          result[0] += 7345517;
          result[1] += 1404290;
          result[2] += 12638611;
          result[3] += 13934878;
          result[4] += 2592535;
          result[5] += 15771258;
        }
      } else {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 838860;
          result[1] += 0;
          result[2] += 14260633;
          result[3] += 3355443;
          result[4] += 12582911;
          result[5] += 22649241;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 735439;
          result[1] += 0;
          result[2] += 21327748;
          result[3] += 21327748;
          result[4] += 0;
          result[5] += 10296154;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 46623000;
          result[3] += 7064090;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29964888;
          result[3] += 19352323;
          result[4] += 0;
          result[5] += 4369879;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 46017506;
          result[3] += 7462298;
          result[4] += 0;
          result[5] += 207286;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52158633;
          result[3] += 1528458;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1260260;
          result[3] += 252052;
          result[4] += 51418622;
          result[5] += 756156;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1270373;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2540747;
          result[4] += 3590186;
          result[5] += 46285784;
        } else {
          result[0] += 2433814;
          result[1] += 3435973;
          result[2] += 1861152;
          result[3] += 25340307;
          result[4] += 1861152;
          result[5] += 18754690;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 4129776;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49557314;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 52531149;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1155942;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 41474838;
          result[1] += 2301990;
          result[2] += 507218;
          result[3] += 1326570;
          result[4] += 5696450;
          result[5] += 2380023;
        } else {
          result[0] += 10434955;
          result[1] += 0;
          result[2] += 8468949;
          result[3] += 17542824;
          result[4] += 4990631;
          result[5] += 12249730;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 7669584;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 46017506;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5293093;
          result[3] += 40076279;
          result[4] += 0;
          result[5] += 8317718;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 8189556;
          result[2] += 7279605;
          result[3] += 9099506;
          result[4] += 2729852;
          result[5] += 26388570;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37234595;
          result[3] += 8659208;
          result[4] += 2597762;
          result[5] += 5195524;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c80000))) ) ) {
          result[0] += 571139;
          result[1] += 0;
          result[2] += 42073926;
          result[3] += 9518987;
          result[4] += 0;
          result[5] += 1523038;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52278905;
          result[3] += 1232162;
          result[4] += 0;
          result[5] += 176023;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x426e0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
          result[0] += 303316;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53080457;
          result[5] += 303316;
        } else {
          result[0] += 1851279;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3702558;
          result[4] += 37025580;
          result[5] += 11107674;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 46976204;
          result[5] += 6710886;
        } else {
          result[0] += 47975698;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 5711392;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 46623000;
          result[5] += 7064090;
        } else {
          result[0] += 63610;
          result[1] += 63610;
          result[2] += 190830;
          result[3] += 2289970;
          result[4] += 2671632;
          result[5] += 48407436;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1225732;
          result[3] += 9805861;
          result[4] += 5393223;
          result[5] += 37262273;
        } else {
          result[0] += 0;
          result[1] += 830212;
          result[2] += 1383687;
          result[3] += 39019999;
          result[4] += 0;
          result[5] += 12453191;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 21474836;
          result[2] += 0;
          result[3] += 0;
          result[4] += 32212254;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53350142;
          result[2] += 0;
          result[3] += 0;
          result[4] += 336948;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
          result[0] += 8497237;
          result[1] += 6566047;
          result[2] += 0;
          result[3] += 386238;
          result[4] += 37851330;
          result[5] += 386238;
        } else {
          result[0] += 41538072;
          result[1] += 848502;
          result[2] += 2198393;
          result[3] += 3124033;
          result[4] += 2391235;
          result[5] += 3586853;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 998829;
          result[1] += 4744440;
          result[2] += 7990636;
          result[3] += 24471325;
          result[4] += 3745611;
          result[5] += 11736247;
        } else {
          result[0] += 5899680;
          result[1] += 0;
          result[2] += 41887730;
          result[3] += 4129776;
          result[4] += 0;
          result[5] += 1769904;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 19173961;
          result[1] += 0;
          result[2] += 19173961;
          result[3] += 5113056;
          result[4] += 0;
          result[5] += 10226112;
        } else {
          result[0] += 361935;
          result[1] += 0;
          result[2] += 49223220;
          result[3] += 3860644;
          result[4] += 0;
          result[5] += 241290;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42880000))) ) ) {
          result[0] += 0;
          result[1] += 497102;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52692885;
          result[5] += 497102;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1248537;
          result[3] += 0;
          result[4] += 31213425;
          result[5] += 21225129;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 771971;
          result[1] += 140358;
          result[2] += 70179;
          result[3] += 1473763;
          result[4] += 2105376;
          result[5] += 49125442;
        } else {
          result[0] += 2787598;
          result[1] += 2271376;
          result[2] += 1548666;
          result[3] += 17551549;
          result[4] += 1961643;
          result[5] += 27566256;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 880116;
          result[1] += 13641801;
          result[2] += 440058;
          result[3] += 1760232;
          result[4] += 36964882;
          result[5] += 0;
        } else {
          result[0] += 123135;
          result[1] += 52332600;
          result[2] += 369406;
          result[3] += 0;
          result[4] += 861948;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 45243452;
          result[1] += 1083675;
          result[2] += 361225;
          result[3] += 1219134;
          result[4] += 4605620;
          result[5] += 1173981;
        } else {
          result[0] += 11461289;
          result[1] += 2010752;
          result[2] += 8445160;
          result[3] += 12868815;
          result[4] += 4222580;
          result[5] += 14678493;
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 1248537;
          result[1] += 2497074;
          result[2] += 5826506;
          result[3] += 34126678;
          result[4] += 2080895;
          result[5] += 7907401;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 3501332;
          result[2] += 3501332;
          result[3] += 0;
          result[4] += 18673770;
          result[5] += 28010656;
        } else {
          result[0] += 2876094;
          result[1] += 0;
          result[2] += 42182714;
          result[3] += 4793490;
          result[4] += 0;
          result[5] += 3834792;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15713294;
          result[3] += 20951059;
          result[4] += 0;
          result[5] += 17022736;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38809945;
          result[3] += 13583480;
          result[4] += 0;
          result[5] += 1293664;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13421772;
          result[3] += 40265318;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 541685;
          result[1] += 0;
          result[2] += 48932292;
          result[3] += 3791801;
          result[4] += 0;
          result[5] += 421311;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 490293;
          result[1] += 980586;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51971065;
          result[5] += 245146;
        } else {
          result[0] += 3834792;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 25309628;
          result[5] += 24542670;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 82850;
          result[3] += 1077055;
          result[4] += 1739859;
          result[5] += 50787325;
        } else {
          result[0] += 4203883;
          result[1] += 2364684;
          result[2] += 1488875;
          result[3] += 15326657;
          result[4] += 2539846;
          result[5] += 27763145;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 1789569;
          result[1] += 4772185;
          result[2] += 0;
          result[3] += 0;
          result[4] += 46528812;
          result[5] += 596523;
        } else {
          result[0] += 0;
          result[1] += 50436975;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3250115;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 45006577;
          result[1] += 849180;
          result[2] += 377413;
          result[3] += 1556831;
          result[4] += 4104373;
          result[5] += 1792714;
        } else {
          result[0] += 13235359;
          result[1] += 2796202;
          result[2] += 8575021;
          result[3] += 13794599;
          result[4] += 4101097;
          result[5] += 11184810;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 511305;
          result[1] += 1022611;
          result[2] += 7158278;
          result[3] += 32723560;
          result[4] += 2556528;
          result[5] += 9714806;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 3408704;
          result[1] += 1704352;
          result[2] += 9373936;
          result[3] += 5965232;
          result[4] += 5965232;
          result[5] += 27269633;
        } else {
          result[0] += 2284557;
          result[1] += 0;
          result[2] += 45691141;
          result[3] += 2284557;
          result[4] += 0;
          result[5] += 3426835;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14211288;
          result[3] += 37896770;
          result[4] += 0;
          result[5] += 1579032;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36651764;
          result[3] += 14970438;
          result[4] += 0;
          result[5] += 2064888;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 20132659;
          result[1] += 0;
          result[2] += 16777215;
          result[3] += 0;
          result[4] += 3355443;
          result[5] += 13421772;
        } else {
          result[0] += 388099;
          result[1] += 0;
          result[2] += 50582295;
          result[3] += 2716696;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 1296789;
          result[2] += 0;
          result[3] += 778073;
          result[4] += 50834153;
          result[5] += 778073;
        } else {
          result[0] += 21605780;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 18986898;
          result[5] += 13094412;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2035886;
          result[4] += 2337499;
          result[5] += 49313704;
        } else {
          result[0] += 0;
          result[1] += 784571;
          result[2] += 1681224;
          result[3] += 16812241;
          result[4] += 7845712;
          result[5] += 26563341;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 13569264;
          result[2] += 0;
          result[3] += 4719744;
          result[4] += 33038209;
          result[5] += 2359872;
        } else {
          result[0] += 0;
          result[1] += 53068576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 618514;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 42874527;
          result[1] += 2421346;
          result[2] += 208736;
          result[3] += 834946;
          result[4] += 6136860;
          result[5] += 1210673;
        } else {
          result[0] += 8516932;
          result[1] += 760440;
          result[2] += 5475170;
          result[3] += 17490128;
          result[4] += 3498025;
          result[5] += 17946393;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3579139;
          result[4] += 0;
          result[5] += 50107951;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10817548;
          result[3] += 37260443;
          result[4] += 801299;
          result[5] += 4807799;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42f90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39558909;
          result[3] += 11302545;
          result[4] += 0;
          result[5] += 2825636;
        } else {
          result[0] += 47721858;
          result[1] += 0;
          result[2] += 5965232;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 31317469;
          result[4] += 0;
          result[5] += 22369621;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42079071;
          result[3] += 11608019;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 2334221;
          result[1] += 0;
          result[2] += 46472225;
          result[3] += 4244038;
          result[4] += 0;
          result[5] += 636605;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52932453;
          result[3] += 646832;
          result[4] += 0;
          result[5] += 107805;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 464823;
          result[1] += 464823;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51362974;
          result[5] += 1394469;
        } else {
          result[0] += 35549560;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3627506;
          result[4] += 7255012;
          result[5] += 7255012;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 52789;
          result[2] += 0;
          result[3] += 2850642;
          result[4] += 4487121;
          result[5] += 46296537;
        } else {
          result[0] += 1172207;
          result[1] += 1172207;
          result[2] += 0;
          result[3] += 27429649;
          result[4] += 4219946;
          result[5] += 19693081;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42420000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 0;
          result[1] += 52922317;
          result[2] += 0;
          result[3] += 152954;
          result[4] += 611818;
          result[5] += 0;
        } else {
          result[0] += 50331647;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3355443;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 36557497;
          result[1] += 1508266;
          result[2] += 1580088;
          result[3] += 3375643;
          result[4] += 7254041;
          result[5] += 3411554;
        } else {
          result[0] += 3067833;
          result[1] += 50619257;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11236833;
          result[3] += 0;
          result[4] += 1248537;
          result[5] += 41201721;
        } else {
          result[0] += 0;
          result[1] += 2064888;
          result[2] += 8554536;
          result[3] += 33628177;
          result[4] += 1179936;
          result[5] += 8259552;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 7809031;
          result[1] += 3416451;
          result[2] += 20010643;
          result[3] += 17082256;
          result[4] += 976128;
          result[5] += 4392580;
        } else {
          result[0] += 3793109;
          result[1] += 0;
          result[2] += 39973540;
          result[3] += 8753330;
          result[4] += 145888;
          result[5] += 1021221;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42db0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 46017506;
          result[3] += 5752188;
          result[4] += 0;
          result[5] += 1917396;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 32212254;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 51743667;
          result[3] += 1943424;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 152954;
          result[1] += 0;
          result[2] += 53534136;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 2409036;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49041092;
          result[5] += 2236962;
        } else {
          result[0] += 5113056;
          result[1] += 3408704;
          result[2] += 0;
          result[3] += 0;
          result[4] += 29826161;
          result[5] += 15339168;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
          result[0] += 0;
          result[1] += 53570633;
          result[2] += 0;
          result[3] += 0;
          result[4] += 116457;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 26843545;
          result[2] += 0;
          result[3] += 0;
          result[4] += 26843545;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 126620;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4051855;
          result[4] += 1582756;
          result[5] += 47925858;
        } else {
          result[0] += 7262709;
          result[1] += 854436;
          result[2] += 1424060;
          result[3] += 17515947;
          result[4] += 4699400;
          result[5] += 21930535;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 46814774;
          result[1] += 737966;
          result[2] += 138368;
          result[3] += 1475933;
          result[4] += 2997990;
          result[5] += 1522056;
        } else {
          result[0] += 13239576;
          result[1] += 364392;
          result[2] += 6559056;
          result[3] += 15547392;
          result[4] += 3765384;
          result[5] += 14211288;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 2236962;
          result[2] += 1118481;
          result[3] += 5592405;
          result[4] += 0;
          result[5] += 44739242;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14849620;
          result[3] += 17134178;
          result[4] += 3426835;
          result[5] += 18276456;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 3067833;
          result[2] += 37580963;
          result[3] += 6902626;
          result[4] += 766958;
          result[5] += 5368709;
        } else {
          result[0] += 48318382;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5368709;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21838816;
          result[3] += 29118422;
          result[4] += 0;
          result[5] += 2729852;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41373538;
          result[3] += 9358300;
          result[4] += 0;
          result[5] += 2955252;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 1894838;
          result[1] += 0;
          result[2] += 41054834;
          result[3] += 9474192;
          result[4] += 0;
          result[5] += 1263225;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 51789462;
          result[3] += 1502289;
          result[4] += 0;
          result[5] += 395339;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 3745611;
          result[1] += 208089;
          result[2] += 0;
          result[3] += 624268;
          result[4] += 47028227;
          result[5] += 2080895;
        } else {
          result[0] += 22025473;
          result[1] += 20648881;
          result[2] += 0;
          result[3] += 5506368;
          result[4] += 2753184;
          result[5] += 2753184;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 58610;
          result[1] += 293051;
          result[2] += 0;
          result[3] += 2344414;
          result[4] += 4395777;
          result[5] += 46595237;
        } else {
          result[0] += 0;
          result[1] += 386238;
          result[2] += 1544952;
          result[3] += 24332998;
          result[4] += 3283023;
          result[5] += 24139879;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 52937968;
          result[2] += 0;
          result[3] += 0;
          result[4] += 749122;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 18512790;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35174301;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 46762702;
          result[1] += 553951;
          result[2] += 46162;
          result[3] += 1015576;
          result[4] += 3646844;
          result[5] += 1661853;
        } else {
          result[0] += 15477359;
          result[1] += 1289779;
          result[2] += 7738679;
          result[3] += 13703912;
          result[4] += 4191784;
          result[5] += 11285574;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42aa0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2825636;
          result[5] += 50861454;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 32212254;
          result[5] += 21474836;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6427327;
          result[3] += 31380482;
          result[4] += 0;
          result[5] += 15879280;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41756626;
          result[3] += 11930464;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 8589934;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40802189;
          result[5] += 4294967;
        } else {
          result[0] += 18626133;
          result[1] += 0;
          result[2] += 19721788;
          result[3] += 9860894;
          result[4] += 0;
          result[5] += 5478274;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33362692;
          result[3] += 15339168;
          result[4] += 0;
          result[5] += 4985229;
        } else {
          result[0] += 311771;
          result[1] += 0;
          result[2] += 49509350;
          result[3] += 3180071;
          result[4] += 0;
          result[5] += 685897;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 184491;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 48152339;
          result[5] += 5350259;
        } else {
          result[0] += 0;
          result[1] += 37580963;
          result[2] += 0;
          result[3] += 8053063;
          result[4] += 8053063;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
          result[0] += 36643570;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 17043521;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 331109;
          result[2] += 0;
          result[3] += 6858703;
          result[4] += 2033960;
          result[5] += 44463317;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
          result[0] += 2020481;
          result[1] += 23091222;
          result[2] += 288640;
          result[3] += 865920;
          result[4] += 27132185;
          result[5] += 288640;
        } else {
          result[0] += 38825986;
          result[1] += 539749;
          result[2] += 1763181;
          result[3] += 3706280;
          result[4] += 3382430;
          result[5] += 5469462;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 278171;
          result[1] += 53269834;
          result[2] += 0;
          result[3] += 0;
          result[4] += 139085;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4569114;
          result[3] += 5711392;
          result[4] += 4569114;
          result[5] += 38837470;
        } else {
          result[0] += 0;
          result[1] += 362750;
          result[2] += 8706014;
          result[3] += 36637812;
          result[4] += 1451002;
          result[5] += 6529511;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 2556528;
          result[1] += 7669584;
          result[2] += 7669584;
          result[3] += 30678337;
          result[4] += 2556528;
          result[5] += 2556528;
        } else {
          result[0] += 0;
          result[1] += 4737096;
          result[2] += 36317738;
          result[3] += 7895160;
          result[4] += 0;
          result[5] += 4737096;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d50000))) ) ) {
          result[0] += 0;
          result[1] += 46017506;
          result[2] += 0;
          result[3] += 3834792;
          result[4] += 3834792;
          result[5] += 0;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 8947848;
          result[3] += 0;
          result[4] += 1789569;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40076279;
          result[3] += 11342343;
          result[4] += 0;
          result[5] += 2268468;
        } else {
          result[0] += 480574;
          result[1] += 0;
          result[2] += 50940948;
          result[3] += 2059607;
          result[4] += 0;
          result[5] += 205960;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d40000))) ) ) {
          result[0] += 600974;
          result[1] += 200324;
          result[2] += 0;
          result[3] += 0;
          result[4] += 48678967;
          result[5] += 4206824;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1076274;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1835997;
          result[4] += 1835997;
          result[5] += 48938822;
        } else {
          result[0] += 3921727;
          result[1] += 2975103;
          result[2] += 811391;
          result[3] += 21907578;
          result[4] += 1622783;
          result[5] += 22448506;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 31876710;
          result[2] += 0;
          result[3] += 0;
          result[4] += 21810380;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
          result[0] += 7699311;
          result[1] += 1664716;
          result[2] += 1664716;
          result[3] += 10820654;
          result[4] += 12277280;
          result[5] += 19560413;
        } else {
          result[0] += 42419430;
          result[1] += 1077055;
          result[2] += 662803;
          result[3] += 2278387;
          result[4] += 5799531;
          result[5] += 1449882;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4880644;
          result[3] += 4880644;
          result[4] += 0;
          result[5] += 43925801;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6914246;
          result[3] += 36198114;
          result[4] += 0;
          result[5] += 10574730;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 631612;
          result[2] += 34738706;
          result[3] += 11369031;
          result[4] += 0;
          result[5] += 6947741;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27166961;
          result[3] += 23285967;
          result[4] += 0;
          result[5] += 3234162;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42015984;
          result[3] += 2334221;
          result[4] += 2334221;
          result[5] += 7002664;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 28908433;
          result[1] += 0;
          result[2] += 22025473;
          result[3] += 1376592;
          result[4] += 1376592;
          result[5] += 0;
        } else {
          result[0] += 294984;
          result[1] += 0;
          result[2] += 50501263;
          result[3] += 2300875;
          result[4] += 0;
          result[5] += 589968;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 219130;
          result[1] += 657392;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51276650;
          result[5] += 1533916;
        } else {
          result[0] += 27290938;
          result[1] += 447392;
          result[2] += 0;
          result[3] += 0;
          result[4] += 13869165;
          result[5] += 12079595;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 119971;
          result[2] += 0;
          result[3] += 2879307;
          result[4] += 2099495;
          result[5] += 48588317;
        } else {
          result[0] += 372827;
          result[1] += 932067;
          result[2] += 186413;
          result[3] += 28148440;
          result[4] += 1118481;
          result[5] += 22928861;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 0;
          result[1] += 53329177;
          result[2] += 0;
          result[3] += 0;
          result[4] += 357913;
          result[5] += 0;
        } else {
          result[0] += 1400532;
          result[1] += 19140615;
          result[2] += 1867377;
          result[3] += 1400532;
          result[4] += 29411189;
          result[5] += 466844;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 22780378;
          result[1] += 1398795;
          result[2] += 6594320;
          result[3] += 10990533;
          result[4] += 3996557;
          result[5] += 7926506;
        } else {
          result[0] += 44899742;
          result[1] += 1384308;
          result[2] += 2888991;
          result[3] += 361123;
          result[4] += 3791801;
          result[5] += 361123;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5368709;
          result[3] += 2684354;
          result[4] += 0;
          result[5] += 45634027;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2334221;
          result[3] += 23342213;
          result[4] += 0;
          result[5] += 28010656;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 25977624;
          result[3] += 24245783;
          result[4] += 0;
          result[5] += 3463683;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425a0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 6573929;
          result[1] += 1095654;
          result[2] += 18626133;
          result[3] += 13147859;
          result[4] += 0;
          result[5] += 14243513;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29080507;
          result[3] += 21251140;
          result[4] += 0;
          result[5] += 3355443;
        } else {
          result[0] += 586388;
          result[1] += 0;
          result[2] += 50038453;
          result[3] += 2671323;
          result[4] += 0;
          result[5] += 390925;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42880000))) ) ) {
          result[0] += 0;
          result[1] += 679583;
          result[2] += 0;
          result[3] += 226527;
          result[4] += 50742229;
          result[5] += 2038750;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8259552;
          result[3] += 16519104;
          result[4] += 8259552;
          result[5] += 20648881;
        }
      } else {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38347922;
          result[5] += 15339168;
        } else {
          result[0] += 50491430;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2556528;
          result[5] += 639132;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 105372;
          result[1] += 1317151;
          result[2] += 158058;
          result[3] += 3213849;
          result[4] += 2739674;
          result[5] += 46152985;
        } else {
          result[0] += 1917396;
          result[1] += 958698;
          result[2] += 1438047;
          result[3] += 24446800;
          result[4] += 1597830;
          result[5] += 23328319;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 4194303;
          result[2] += 0;
          result[3] += 0;
          result[4] += 46976204;
          result[5] += 2516582;
        } else {
          result[0] += 464823;
          result[1] += 48922652;
          result[2] += 1394469;
          result[3] += 116205;
          result[4] += 2788939;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
          result[0] += 10668588;
          result[1] += 0;
          result[2] += 2409036;
          result[3] += 18239845;
          result[4] += 13765920;
          result[5] += 8603700;
        } else {
          result[0] += 44924690;
          result[1] += 1298133;
          result[2] += 1112685;
          result[3] += 1205409;
          result[4] += 4033486;
          result[5] += 1112685;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2025927;
          result[3] += 21778725;
          result[4] += 2532409;
          result[5] += 27350027;
        } else {
          result[0] += 722247;
          result[1] += 962997;
          result[2] += 29130663;
          result[3] += 17093199;
          result[4] += 722247;
          result[5] += 5055735;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 18147749;
          result[1] += 2268468;
          result[2] += 24196998;
          result[3] += 756156;
          result[4] += 3780781;
          result[5] += 4536937;
        } else {
          result[0] += 121739;
          result[1] += 0;
          result[2] += 49974038;
          result[3] += 2617397;
          result[4] += 0;
          result[5] += 973915;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 3439030;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49674888;
          result[5] += 573171;
        } else {
          result[0] += 27375100;
          result[1] += 265777;
          result[2] += 0;
          result[3] += 1063110;
          result[4] += 13554661;
          result[5] += 11428440;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1241320;
          result[4] += 1008572;
          result[5] += 51437198;
        } else {
          result[0] += 1121401;
          result[1] += 700875;
          result[2] += 0;
          result[3] += 11214013;
          result[4] += 9251561;
          result[5] += 31399238;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 25053975;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28633115;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 41015878;
          result[1] += 1456968;
          result[2] += 662258;
          result[3] += 2339980;
          result[4] += 4989014;
          result[5] += 3222991;
        } else {
          result[0] += 7401712;
          result[1] += 1282963;
          result[2] += 11645361;
          result[3] += 21218243;
          result[4] += 2960685;
          result[5] += 9178124;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 5804009;
          result[2] += 5804009;
          result[3] += 1451002;
          result[4] += 4353007;
          result[5] += 36275061;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12485370;
          result[3] += 24970740;
          result[4] += 2497074;
          result[5] += 13733907;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16777215;
          result[3] += 33554431;
          result[4] += 0;
          result[5] += 3355443;
        } else {
          result[0] += 5651272;
          result[1] += 0;
          result[2] += 39558909;
          result[3] += 4238454;
          result[4] += 0;
          result[5] += 4238454;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15907286;
          result[3] += 32808777;
          result[4] += 0;
          result[5] += 4971026;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 47803574;
          result[3] += 5883516;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 44100110;
          result[3] += 9586980;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 250874;
          result[1] += 0;
          result[2] += 51930971;
          result[3] += 1254371;
          result[4] += 0;
          result[5] += 250874;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 1851279;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51835812;
          result[5] += 0;
        } else {
          result[0] += 35128590;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 13918875;
          result[5] += 4639625;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2504176;
          result[4] += 3359260;
          result[5] += 47823654;
        } else {
          result[0] += 411921;
          result[1] += 961149;
          result[2] += 686535;
          result[3] += 23067599;
          result[4] += 3158064;
          result[5] += 25401820;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 20132659;
          result[2] += 0;
          result[3] += 0;
          result[4] += 33554431;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53556465;
          result[2] += 0;
          result[3] += 0;
          result[4] += 130625;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 42080149;
          result[1] += 2193751;
          result[2] += 398863;
          result[3] += 1755001;
          result[4] += 5544209;
          result[5] += 1715115;
        } else {
          result[0] += 7690712;
          result[1] += 295796;
          result[2] += 14198238;
          result[3] += 15381425;
          result[4] += 5176441;
          result[5] += 10944475;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 4129776;
          result[2] += 4129776;
          result[3] += 37167986;
          result[4] += 0;
          result[5] += 8259552;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5752188;
          result[3] += 3834792;
          result[4] += 0;
          result[5] += 44100110;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d50000))) ) ) {
          result[0] += 603225;
          result[1] += 0;
          result[2] += 19303223;
          result[3] += 26541932;
          result[4] += 0;
          result[5] += 7238708;
        } else {
          result[0] += 0;
          result[1] += 4129776;
          result[2] += 49557314;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30388919;
          result[3] += 15700941;
          result[4] += 0;
          result[5] += 7597229;
        } else {
          result[0] += 4387887;
          result[1] += 0;
          result[2] += 44136983;
          result[3] += 5162220;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 47462500;
          result[3] += 6224590;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52964380;
          result[3] += 722710;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52094677;
          result[5] += 1592413;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 1727860;
          result[1] += 308546;
          result[2] += 246837;
          result[3] += 2098116;
          result[4] += 3394011;
          result[5] += 45911719;
        } else {
          result[0] += 0;
          result[1] += 371536;
          result[2] += 185768;
          result[3] += 28051040;
          result[4] += 1114610;
          result[5] += 23964134;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 23980234;
          result[2] += 0;
          result[3] += 1431655;
          result[4] += 25769803;
          result[5] += 2505397;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 44985642;
          result[1] += 1478401;
          result[2] += 506880;
          result[3] += 1351681;
          result[4] += 4435204;
          result[5] += 929280;
        } else {
          result[0] += 9474192;
          result[1] += 814984;
          result[2] += 14465971;
          result[3] += 13549114;
          result[4] += 2037460;
          result[5] += 13345368;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42940000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1731841;
          result[3] += 0;
          result[4] += 1731841;
          result[5] += 50223407;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4129776;
          result[3] += 0;
          result[4] += 33038209;
          result[5] += 16519104;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 813440;
          result[1] += 0;
          result[2] += 16268815;
          result[3] += 30910749;
          result[4] += 0;
          result[5] += 5694085;
        } else {
          result[0] += 1602599;
          result[1] += 0;
          result[2] += 34455894;
          result[3] += 12820797;
          result[4] += 0;
          result[5] += 4807799;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 3579139;
          result[2] += 17895697;
          result[3] += 0;
          result[4] += 3579139;
          result[5] += 28633115;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 43790853;
          result[3] += 9401426;
          result[4] += 0;
          result[5] += 494811;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 801299;
          result[1] += 0;
          result[2] += 47276692;
          result[3] += 5609099;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 288640;
          result[1] += 0;
          result[2] += 52724956;
          result[3] += 481067;
          result[4] += 0;
          result[5] += 192426;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 492542;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52209464;
          result[5] += 985084;
        } else {
          result[0] += 2468372;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 32088836;
          result[5] += 19129883;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 1213891;
          result[1] += 827652;
          result[2] += 331061;
          result[3] += 3531319;
          result[4] += 2317428;
          result[5] += 45465738;
        } else {
          result[0] += 5330633;
          result[1] += 1903797;
          result[2] += 2665316;
          result[3] += 22655190;
          result[4] += 2094177;
          result[5] += 19037975;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 7669584;
          result[2] += 0;
          result[3] += 0;
          result[4] += 46017506;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 52708738;
          result[2] += 0;
          result[3] += 0;
          result[4] += 978352;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42850000))) ) ) {
          result[0] += 3264755;
          result[1] += 16686528;
          result[2] += 0;
          result[3] += 0;
          result[4] += 31559303;
          result[5] += 2176503;
        } else {
          result[0] += 40161126;
          result[1] += 265214;
          result[2] += 2955252;
          result[3] += 4129776;
          result[4] += 3258355;
          result[5] += 2917364;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7669584;
          result[3] += 0;
          result[4] += 46017506;
          result[5] += 0;
        } else {
          result[0] += 3501332;
          result[1] += 2334221;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7002664;
          result[5] += 40848873;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 488064;
          result[1] += 0;
          result[2] += 1464193;
          result[3] += 31236125;
          result[4] += 0;
          result[5] += 20498707;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 23008753;
          result[3] += 20452225;
          result[4] += 0;
          result[5] += 10226112;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33802983;
          result[3] += 1988410;
          result[4] += 0;
          result[5] += 17895697;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 187717;
          result[1] += 0;
          result[2] += 42236347;
          result[3] += 9761289;
          result[4] += 563151;
          result[5] += 938585;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 51370237;
          result[3] += 2316853;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 365218;
          result[1] += 365218;
          result[2] += 0;
          result[3] += 0;
          result[4] += 47113161;
          result[5] += 5843492;
        } else {
          result[0] += 0;
          result[1] += 48035818;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5651272;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 2276484;
          result[1] += 0;
          result[2] += 63235;
          result[3] += 2466191;
          result[4] += 2719134;
          result[5] += 46162045;
        } else {
          result[0] += 6132593;
          result[1] += 537946;
          result[2] += 2904912;
          result[3] += 22486176;
          result[4] += 4303574;
          result[5] += 17321887;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 15339168;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38347922;
          result[5] += 0;
        } else {
          result[0] += 1158714;
          result[1] += 52142138;
          result[2] += 0;
          result[3] += 128746;
          result[4] += 257492;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 44575471;
          result[1] += 1429273;
          result[2] += 491312;
          result[3] += 1027290;
          result[4] += 5047122;
          result[5] += 1116620;
        } else {
          result[0] += 9518987;
          result[1] += 380759;
          result[2] += 14976540;
          result[3] += 14088101;
          result[4] += 2284557;
          result[5] += 12438144;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42900000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5368709;
          result[3] += 7516192;
          result[4] += 0;
          result[5] += 40802189;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 994205;
          result[1] += 0;
          result[2] += 9942053;
          result[3] += 30820367;
          result[4] += 994205;
          result[5] += 10936259;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 13421772;
          result[1] += 0;
          result[2] += 0;
          result[3] += 13421772;
          result[4] += 0;
          result[5] += 26843545;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 769707;
          result[1] += 0;
          result[2] += 41179345;
          result[3] += 9621342;
          result[4] += 0;
          result[5] += 2116695;
        } else {
          result[0] += 245520;
          result[1] += 0;
          result[2] += 51559249;
          result[3] += 1636801;
          result[4] += 0;
          result[5] += 245520;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
          result[0] += 229432;
          result[1] += 917728;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51851635;
          result[5] += 688296;
        } else {
          result[0] += 0;
          result[1] += 15000804;
          result[2] += 0;
          result[3] += 0;
          result[4] += 22895965;
          result[5] += 15790320;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 1871445;
          result[1] += 409378;
          result[2] += 0;
          result[3] += 2514754;
          result[4] += 2924133;
          result[5] += 45967378;
        } else {
          result[0] += 868723;
          result[1] += 521233;
          result[2] += 3474892;
          result[3] += 24497993;
          result[4] += 173744;
          result[5] += 24150503;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 970248;
          result[1] += 9055653;
          result[2] += 0;
          result[3] += 8408821;
          result[4] += 32988453;
          result[5] += 2263913;
        } else {
          result[0] += 483667;
          result[1] += 52477922;
          result[2] += 0;
          result[3] += 0;
          result[4] += 725501;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
          result[0] += 880116;
          result[1] += 16722208;
          result[2] += 0;
          result[3] += 4400581;
          result[4] += 29923952;
          result[5] += 1760232;
        } else {
          result[0] += 41955769;
          result[1] += 285136;
          result[2] += 1507148;
          result[3] += 3258700;
          result[4] += 3666038;
          result[5] += 3014297;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 11184810;
          result[5] += 42502280;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6667024;
          result[3] += 34036914;
          result[4] += 0;
          result[5] += 12983152;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 1167110;
          result[1] += 7002664;
          result[2] += 9336885;
          result[3] += 14005328;
          result[4] += 5835553;
          result[5] += 16339549;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37807810;
          result[3] += 8317718;
          result[4] += 0;
          result[5] += 7561562;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 44739242;
          result[5] += 8947848;
        } else {
          result[0] += 2334221;
          result[1] += 0;
          result[2] += 18673770;
          result[3] += 7002664;
          result[4] += 0;
          result[5] += 25676434;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 571139;
          result[1] += 0;
          result[2] += 41883546;
          result[3] += 9899747;
          result[4] += 190379;
          result[5] += 1142278;
        } else {
          result[0] += 543863;
          result[1] += 0;
          result[2] += 51744721;
          result[3] += 1165421;
          result[4] += 0;
          result[5] += 233084;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 511305;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52920132;
          result[5] += 255652;
        } else {
          result[0] += 10296154;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 23534067;
          result[5] += 19856869;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1806777;
          result[1] += 1032444;
          result[2] += 154866;
          result[3] += 4026531;
          result[4] += 1290555;
          result[5] += 45375916;
        } else {
          result[0] += 0;
          result[1] += 725501;
          result[2] += 0;
          result[3] += 36637812;
          result[4] += 1451002;
          result[5] += 14872775;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 7158278;
          result[2] += 0;
          result[3] += 0;
          result[4] += 46528812;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53098416;
          result[2] += 0;
          result[3] += 0;
          result[4] += 588674;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 40798967;
          result[1] += 1288812;
          result[2] += 161101;
          result[3] += 1006884;
          result[4] += 8014802;
          result[5] += 2416523;
        } else {
          result[0] += 9001428;
          result[1] += 428639;
          result[2] += 15002380;
          result[3] += 15752499;
          result[4] += 1393078;
          result[5] += 12109064;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42520000))) ) ) {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1220161;
          result[3] += 3660483;
          result[4] += 4880644;
          result[5] += 43925801;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 23342213;
          result[3] += 21007992;
          result[4] += 0;
          result[5] += 9336885;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 49557314;
          result[1] += 0;
          result[2] += 4129776;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1000380;
          result[1] += 0;
          result[2] += 42182714;
          result[3] += 9003425;
          result[4] += 0;
          result[5] += 1500570;
        } else {
          result[0] += 192426;
          result[1] += 0;
          result[2] += 52147676;
          result[3] += 1250774;
          result[4] += 0;
          result[5] += 96213;
        }
      }
    }
  }
  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42300000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 363980;
          result[1] += 727960;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50775248;
          result[5] += 1819901;
        } else {
          result[0] += 0;
          result[1] += 40265318;
          result[2] += 0;
          result[3] += 0;
          result[4] += 13421772;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 49626722;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1804608;
          result[5] += 2255760;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 103643;
          result[1] += 259107;
          result[2] += 310929;
          result[3] += 4042078;
          result[4] += 3731149;
          result[5] += 45240183;
        } else {
          result[0] += 3366517;
          result[1] += 1063110;
          result[2] += 3012147;
          result[3] += 22236732;
          result[4] += 6290071;
          result[5] += 17718511;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426c0000))) ) ) {
          result[0] += 0;
          result[1] += 53402279;
          result[2] += 0;
          result[3] += 0;
          result[4] += 284812;
          result[5] += 0;
        } else {
          result[0] += 4210752;
          result[1] += 29475265;
          result[2] += 1052688;
          result[3] += 0;
          result[4] += 17895697;
          result[5] += 1052688;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
          result[0] += 49758767;
          result[1] += 1488001;
          result[2] += 416640;
          result[3] += 238080;
          result[4] += 1547521;
          result[5] += 238080;
        } else {
          result[0] += 11821010;
          result[1] += 0;
          result[2] += 20686769;
          result[3] += 9358300;
          result[4] += 1970168;
          result[5] += 9850842;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42e80000))) ) ) {
          result[0] += 1976211;
          result[1] += 0;
          result[2] += 27008229;
          result[3] += 12186640;
          result[4] += 988105;
          result[5] += 11527903;
        } else {
          result[0] += 41160103;
          result[1] += 0;
          result[2] += 12526987;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 797333;
          result[1] += 0;
          result[2] += 35614209;
          result[3] += 15149327;
          result[4] += 0;
          result[5] += 2126221;
        } else {
          result[0] += 208089;
          result[1] += 0;
          result[2] += 50843201;
          result[3] += 2219621;
          result[4] += 69363;
          result[5] += 346815;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53189988;
          result[5] += 497102;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39558909;
          result[5] += 14128181;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 968425;
          result[1] += 60526;
          result[2] += 0;
          result[3] += 2421063;
          result[4] += 3207909;
          result[5] += 47029165;
        } else {
          result[0] += 4226097;
          result[1] += 469566;
          result[2] += 782610;
          result[3] += 21756576;
          result[4] += 3913053;
          result[5] += 22539186;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
          result[0] += 0;
          result[1] += 52745212;
          result[2] += 0;
          result[3] += 0;
          result[4] += 941878;
          result[5] += 0;
        } else {
          result[0] += 950214;
          result[1] += 11402568;
          result[2] += 0;
          result[3] += 475107;
          result[4] += 40384095;
          result[5] += 475107;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 46332695;
          result[1] += 1516844;
          result[2] += 0;
          result[3] += 873334;
          result[4] += 3952987;
          result[5] += 1011229;
        } else {
          result[0] += 10484347;
          result[1] += 1626881;
          result[2] += 11568935;
          result[3] += 13195817;
          result[4] += 4157586;
          result[5] += 12653523;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 23008753;
          result[3] += 0;
          result[4] += 19173961;
          result[5] += 11504376;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4473924;
          result[4] += 0;
          result[5] += 49213166;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 6710886;
          result[4] += 0;
          result[5] += 46976204;
        } else {
          result[0] += 0;
          result[1] += 1789569;
          result[2] += 13421772;
          result[3] += 32212254;
          result[4] += 0;
          result[5] += 6263493;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 3976821;
          result[1] += 17895697;
          result[2] += 13918875;
          result[3] += 7953643;
          result[4] += 3976821;
          result[5] += 5965232;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 1883757;
          result[1] += 2825636;
          result[2] += 19779454;
          result[3] += 23546969;
          result[4] += 0;
          result[5] += 5651272;
        } else {
          result[0] += 320519;
          result[1] += 0;
          result[2] += 48398512;
          result[3] += 3899659;
          result[4] += 0;
          result[5] += 1068399;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
          result[0] += 951898;
          result[1] += 1332658;
          result[2] += 0;
          result[3] += 0;
          result[4] += 48927597;
          result[5] += 2474936;
        } else {
          result[0] += 29390743;
          result[1] += 783753;
          result[2] += 0;
          result[3] += 0;
          result[4] += 13715680;
          result[5] += 9796914;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1917396;
          result[4] += 46017506;
          result[5] += 5752188;
        } else {
          result[0] += 49299;
          result[1] += 147898;
          result[2] += 0;
          result[3] += 4831345;
          result[4] += 2711469;
          result[5] += 45947078;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 40544292;
          result[1] += 3884978;
          result[2] += 413295;
          result[3] += 2645091;
          result[4] += 4091625;
          result[5] += 2107807;
        } else {
          result[0] += 5579246;
          result[1] += 1052688;
          result[2] += 10211074;
          result[3] += 19369460;
          result[4] += 3684408;
          result[5] += 13790213;
        }
      } else {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 976128;
          result[1] += 0;
          result[2] += 6832902;
          result[3] += 13665805;
          result[4] += 976128;
          result[5] += 31236125;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14982444;
          result[3] += 32461962;
          result[4] += 0;
          result[5] += 6242685;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28010656;
          result[3] += 25676434;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 47526277;
          result[3] += 6160813;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 5965232;
          result[2] += 23860929;
          result[3] += 0;
          result[4] += 2982616;
          result[5] += 20878313;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16953818;
          result[3] += 33907636;
          result[4] += 0;
          result[5] += 2825636;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 4270564;
          result[1] += 1830241;
          result[2] += 34164512;
          result[3] += 12201611;
          result[4] += 0;
          result[5] += 1220161;
        } else {
          result[0] += 499746;
          result[1] += 0;
          result[2] += 51116964;
          result[3] += 1927595;
          result[4] += 0;
          result[5] += 142784;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42200000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 231409;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51372992;
          result[5] += 2082688;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 2167647;
          result[1] += 252052;
          result[2] += 100820;
          result[3] += 3478318;
          result[4] += 3226266;
          result[5] += 44461985;
        } else {
          result[0] += 216480;
          result[1] += 0;
          result[2] += 216480;
          result[3] += 28575387;
          result[4] += 2164802;
          result[5] += 22513941;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 37936383;
          result[1] += 4339862;
          result[2] += 897902;
          result[3] += 2132518;
          result[4] += 6322730;
          result[5] += 2057693;
        } else {
          result[0] += 5887357;
          result[1] += 420525;
          result[2] += 11914889;
          result[3] += 17241546;
          result[4] += 6448057;
          result[5] += 11774714;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 261888;
          result[1] += 53032370;
          result[2] += 0;
          result[3] += 0;
          result[4] += 392832;
          result[5] += 0;
        } else {
          result[0] += 40265318;
          result[1] += 6710886;
          result[2] += 6710886;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4129776;
          result[3] += 12389328;
          result[4] += 0;
          result[5] += 37167986;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 33107039;
          result[4] += 0;
          result[5] += 9842633;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 13421772;
          result[4] += 0;
          result[5] += 40265318;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 45145963;
          result[3] += 3660483;
          result[4] += 0;
          result[5] += 4880644;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 1917396;
          result[1] += 0;
          result[2] += 31317469;
          result[3] += 19173961;
          result[4] += 0;
          result[5] += 1278264;
        } else {
          result[0] += 930990;
          result[1] += 0;
          result[2] += 45928841;
          result[3] += 6516930;
          result[4] += 0;
          result[5] += 310330;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 47271652;
          result[3] += 6415438;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 109789;
          result[1] += 0;
          result[2] += 53247932;
          result[3] += 109789;
          result[4] += 0;
          result[5] += 219579;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428c0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c00000))) ) ) {
          result[0] += 1260260;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 48898101;
          result[5] += 3528728;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10737418;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42890000))) ) ) {
          result[0] += 48893600;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2876094;
          result[5] += 1917396;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 4427801;
          result[2] += 0;
          result[3] += 3874326;
          result[4] += 22692481;
          result[5] += 22692481;
        } else {
          result[0] += 109342;
          result[1] += 328027;
          result[2] += 109342;
          result[3] += 3170927;
          result[4] += 1968162;
          result[5] += 48001289;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 1095654;
          result[2] += 0;
          result[3] += 5478274;
          result[4] += 7669584;
          result[5] += 39443577;
        } else {
          result[0] += 865920;
          result[1] += 0;
          result[2] += 288640;
          result[3] += 38966437;
          result[4] += 0;
          result[5] += 13566092;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 16153638;
          result[2] += 475107;
          result[3] += 1425321;
          result[4] += 33732597;
          result[5] += 1900428;
        } else {
          result[0] += 0;
          result[1] += 53102264;
          result[2] += 0;
          result[3] += 0;
          result[4] += 584826;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 46402675;
          result[1] += 1702850;
          result[2] += 0;
          result[3] += 1040630;
          result[4] += 4067920;
          result[5] += 473014;
        } else {
          result[0] += 12471222;
          result[1] += 2585497;
          result[2] += 11102429;
          result[3] += 11406605;
          result[4] += 3345937;
          result[5] += 12775398;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 305040;
          result[1] += 0;
          result[2] += 12201611;
          result[3] += 26538505;
          result[4] += 2135282;
          result[5] += 12506651;
        } else {
          result[0] += 0;
          result[1] += 1142278;
          result[2] += 34268356;
          result[3] += 15420760;
          result[4] += 0;
          result[5] += 2855696;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 9761289;
          result[1] += 3050402;
          result[2] += 18912498;
          result[3] += 3050402;
          result[4] += 8541128;
          result[5] += 10371369;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 50837035;
          result[3] += 2584934;
          result[4] += 0;
          result[5] += 265121;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          result[0] += 208089;
          result[1] += 208089;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53062822;
          result[5] += 208089;
        } else {
          result[0] += 3426835;
          result[1] += 2284557;
          result[2] += 0;
          result[3] += 9138228;
          result[4] += 22845570;
          result[5] += 15991899;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42660000))) ) ) {
          result[0] += 51917187;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1769904;
          result[5] += 0;
        } else {
          result[0] += 9373936;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1704352;
          result[4] += 23860929;
          result[5] += 18747873;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 130625;
          result[3] += 1763444;
          result[4] += 3004387;
          result[5] += 48788633;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1342177;
          result[3] += 28185722;
          result[4] += 0;
          result[5] += 24159191;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 1594666;
          result[1] += 2657776;
          result[2] += 0;
          result[3] += 3720887;
          result[4] += 19135992;
          result[5] += 26577767;
        } else {
          result[0] += 291777;
          result[1] += 437666;
          result[2] += 1458888;
          result[3] += 28448322;
          result[4] += 145888;
          result[5] += 22904547;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 2928386;
          result[1] += 15618062;
          result[2] += 0;
          result[3] += 0;
          result[4] += 34652577;
          result[5] += 488064;
        } else {
          result[0] += 0;
          result[1] += 53554856;
          result[2] += 0;
          result[3] += 0;
          result[4] += 132234;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 4270564;
          result[1] += 26843545;
          result[2] += 0;
          result[3] += 2440322;
          result[4] += 20132659;
          result[5] += 0;
        } else {
          result[0] += 45955101;
          result[1] += 393152;
          result[2] += 1703658;
          result[3] += 2271544;
          result[4] += 2271544;
          result[5] += 1092088;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 1234186;
          result[1] += 4936744;
          result[2] += 4319651;
          result[3] += 21598255;
          result[4] += 4319651;
          result[5] += 17278604;
        } else {
          result[0] += 4372704;
          result[1] += 0;
          result[2] += 32309425;
          result[3] += 14575680;
          result[4] += 485856;
          result[5] += 1943424;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 2651214;
          result[1] += 1988410;
          result[2] += 26512143;
          result[3] += 7953643;
          result[4] += 1988410;
          result[5] += 12593268;
        } else {
          result[0] += 197863;
          result[1] += 0;
          result[2] += 49861721;
          result[3] += 3165823;
          result[4] += 0;
          result[5] += 461682;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 211366;
          result[1] += 1056832;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50727960;
          result[5] += 1690932;
        } else {
          result[0] += 0;
          result[1] += 50704475;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2982616;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1069159;
          result[4] += 1527371;
          result[5] += 51090560;
        } else {
          result[0] += 6067828;
          result[1] += 1582911;
          result[2] += 395727;
          result[3] += 15301480;
          result[4] += 3825370;
          result[5] += 26513772;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42480000))) ) ) {
          result[0] += 241833;
          result[1] += 51752421;
          result[2] += 0;
          result[3] += 604584;
          result[4] += 1088251;
          result[5] += 0;
        } else {
          result[0] += 2962046;
          result[1] += 11848185;
          result[2] += 740511;
          result[3] += 1481023;
          result[4] += 34804045;
          result[5] += 1851279;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 44159155;
          result[1] += 1740262;
          result[2] += 87013;
          result[3] += 1435716;
          result[4] += 4742214;
          result[5] += 1522729;
        } else {
          result[0] += 13605632;
          result[1] += 183859;
          result[2] += 9744574;
          result[3] += 14157212;
          result[4] += 2022458;
          result[5] += 13973352;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13918875;
          result[3] += 0;
          result[4] += 29826161;
          result[5] += 9942053;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8589934;
          result[3] += 3579139;
          result[4] += 0;
          result[5] += 41518017;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6316128;
          result[3] += 37896770;
          result[4] += 0;
          result[5] += 9474192;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37896770;
          result[3] += 11579568;
          result[4] += 0;
          result[5] += 4210752;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 3158064;
          result[1] += 31580641;
          result[2] += 3158064;
          result[3] += 0;
          result[4] += 15790320;
          result[5] += 0;
        } else {
          result[0] += 45634027;
          result[1] += 5368709;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 2684354;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1844917;
          result[1] += 184491;
          result[2] += 39665720;
          result[3] += 10516028;
          result[4] += 553475;
          result[5] += 922458;
        } else {
          result[0] += 77247;
          result[1] += 0;
          result[2] += 50906177;
          result[3] += 2240180;
          result[4] += 0;
          result[5] += 463485;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42bc0000))) ) ) {
          result[0] += 634099;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1902298;
          result[4] += 47134729;
          result[5] += 4015963;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 49213166;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4473924;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 12632256;
          result[5] += 41054834;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 34738706;
          result[5] += 18948385;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2454626;
          result[4] += 1699356;
          result[5] += 49533107;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1118481;
          result[1] += 279620;
          result[2] += 279620;
          result[3] += 12862532;
          result[4] += 4194303;
          result[5] += 34952533;
        } else {
          result[0] += 0;
          result[1] += 308546;
          result[2] += 1234186;
          result[3] += 35791394;
          result[4] += 1234186;
          result[5] += 15118778;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 8690356;
          result[1] += 17960070;
          result[2] += 0;
          result[3] += 386238;
          result[4] += 25684831;
          result[5] += 965595;
        } else {
          result[0] += 45582534;
          result[1] += 537318;
          result[2] += 626871;
          result[3] += 2283604;
          result[4] += 2597040;
          result[5] += 2059721;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 181990;
          result[1] += 181990;
          result[2] += 14741201;
          result[3] += 22566777;
          result[4] += 181990;
          result[5] += 15833142;
        } else {
          result[0] += 2262674;
          result[1] += 0;
          result[2] += 46847643;
          result[3] += 3908255;
          result[4] += 51424;
          result[5] += 617093;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42300000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 47883081;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5804009;
          result[5] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 53687091;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42da0000))) ) ) {
          result[0] += 419430;
          result[1] += 0;
          result[2] += 0;
          result[3] += 629145;
          result[4] += 49912217;
          result[5] += 2726297;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1076972;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3392464;
          result[4] += 3715555;
          result[5] += 45502098;
        } else {
          result[0] += 3158064;
          result[1] += 2414990;
          result[2] += 1300379;
          result[3] += 25264513;
          result[4] += 928842;
          result[5] += 20620301;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1068399;
          result[1] += 23771896;
          result[2] += 801299;
          result[3] += 267099;
          result[4] += 26709995;
          result[5] += 1068399;
        } else {
          result[0] += 35953492;
          result[1] += 1069851;
          result[2] += 4409084;
          result[3] += 5154738;
          result[4] += 3209554;
          result[5] += 3890368;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
          result[0] += 0;
          result[1] += 53415944;
          result[2] += 0;
          result[3] += 0;
          result[4] += 271146;
          result[5] += 0;
        } else {
          result[0] += 11053224;
          result[1] += 31580641;
          result[2] += 0;
          result[3] += 1579032;
          result[4] += 9474192;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 13421772;
          result[2] += 17895697;
          result[3] += 0;
          result[4] += 22369621;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3660483;
          result[3] += 7320966;
          result[4] += 4880644;
          result[5] += 37824996;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 3067833;
          result[2] += 0;
          result[3] += 33746171;
          result[4] += 1533916;
          result[5] += 15339168;
        } else {
          result[0] += 789516;
          result[1] += 0;
          result[2] += 33949190;
          result[3] += 18158869;
          result[4] += 0;
          result[5] += 789516;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 4601750;
          result[1] += 3067833;
          result[2] += 6135667;
          result[3] += 24542670;
          result[4] += 0;
          result[5] += 15339168;
        } else {
          result[0] += 7002664;
          result[1] += 0;
          result[2] += 44350205;
          result[3] += 0;
          result[4] += 0;
          result[5] += 2334221;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 3355443;
          result[1] += 0;
          result[2] += 23488102;
          result[3] += 26843545;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 70920;
          result[1] += 0;
          result[2] += 50637494;
          result[3] += 2907755;
          result[4] += 0;
          result[5] += 70920;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 47370962;
          result[2] += 0;
          result[3] += 0;
          result[4] += 6316128;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 215610;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49374875;
          result[5] += 4096605;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1017481;
          result[1] += 0;
          result[2] += 179555;
          result[3] += 2573628;
          result[4] += 4548739;
          result[5] += 45367686;
        } else {
          result[0] += 7233290;
          result[1] += 964438;
          result[2] += 2893316;
          result[3] += 21699872;
          result[4] += 4339974;
          result[5] += 16556198;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 15339168;
          result[2] += 0;
          result[3] += 5113056;
          result[4] += 31956601;
          result[5] += 1278264;
        } else {
          result[0] += 126620;
          result[1] += 50901440;
          result[2] += 0;
          result[3] += 126620;
          result[4] += 2152548;
          result[5] += 379861;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 42295154;
          result[1] += 1657008;
          result[2] += 165700;
          result[3] += 952780;
          result[4] += 5426704;
          result[5] += 3189742;
        } else {
          result[0] += 13600729;
          result[1] += 178956;
          result[2] += 14316557;
          result[3] += 13779686;
          result[4] += 1073741;
          result[5] += 10737418;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1278264;
          result[4] += 19173961;
          result[5] += 33234865;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14968519;
          result[3] += 26743755;
          result[4] += 0;
          result[5] += 11974815;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 8947848;
          result[2] += 0;
          result[3] += 0;
          result[4] += 17895697;
          result[5] += 26843545;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 49058893;
          result[3] += 925639;
          result[4] += 0;
          result[5] += 3702558;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 3834792;
          result[2] += 3834792;
          result[3] += 0;
          result[4] += 3834792;
          result[5] += 42182714;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 27917287;
          result[1] += 0;
          result[2] += 25769803;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 255348;
          result[1] += 0;
          result[2] += 50048370;
          result[3] += 2872674;
          result[4] += 63837;
          result[5] += 446860;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
          result[0] += 875333;
          result[1] += 291777;
          result[2] += 291777;
          result[3] += 0;
          result[4] += 51936425;
          result[5] += 291777;
        } else {
          result[0] += 0;
          result[1] += 19685266;
          result[2] += 9842633;
          result[3] += 894784;
          result[4] += 12526987;
          result[5] += 10737418;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1229475;
          result[1] += 58546;
          result[2] += 0;
          result[3] += 1639300;
          result[4] += 4566622;
          result[5] += 46193146;
        } else {
          result[0] += 2925258;
          result[1] += 1204518;
          result[2] += 1204518;
          result[3] += 24434509;
          result[4] += 1720740;
          result[5] += 22197547;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 16754451;
          result[1] += 1821136;
          result[2] += 3496581;
          result[3] += 9542752;
          result[4] += 7794462;
          result[5] += 14277706;
        } else {
          result[0] += 41644678;
          result[1] += 2638775;
          result[2] += 2494842;
          result[3] += 1151465;
          result[4] += 4845751;
          result[5] += 911577;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 131909;
          result[1] += 53423272;
          result[2] += 0;
          result[3] += 0;
          result[4] += 131909;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7405116;
          result[3] += 39493952;
          result[4] += 0;
          result[5] += 6788023;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37167986;
          result[3] += 0;
          result[4] += 0;
          result[5] += 16519104;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31530513;
          result[3] += 11930464;
          result[4] += 0;
          result[5] += 10226112;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 48273266;
          result[3] += 4962672;
          result[4] += 0;
          result[5] += 451152;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 15339168;
          result[1] += 0;
          result[2] += 15339168;
          result[3] += 0;
          result[4] += 0;
          result[5] += 23008753;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 35791394;
          result[1] += 0;
          result[2] += 5965232;
          result[3] += 11930464;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 136608;
          result[1] += 0;
          result[2] += 51091532;
          result[3] += 2117429;
          result[4] += 0;
          result[5] += 341520;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 256876;
          result[1] += 513752;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51888958;
          result[5] += 1027504;
        } else {
          result[0] += 23342213;
          result[1] += 0;
          result[2] += 1000380;
          result[3] += 0;
          result[4] += 17673390;
          result[5] += 11671106;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 56158;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3088692;
          result[4] += 2583270;
          result[5] += 47958970;
        } else {
          result[0] += 149130;
          result[1] += 894784;
          result[2] += 1640438;
          result[3] += 24308321;
          result[4] += 1789569;
          result[5] += 24904845;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 35791394;
          result[2] += 0;
          result[3] += 0;
          result[4] += 17895697;
          result[5] += 0;
        } else {
          result[0] += 126026;
          result[1] += 53561065;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 43647691;
          result[1] += 2025114;
          result[2] += 344700;
          result[3] += 1077188;
          result[4] += 5687557;
          result[5] += 904838;
        } else {
          result[0] += 10423291;
          result[1] += 428354;
          result[2] += 12850633;
          result[3] += 16134684;
          result[4] += 3141265;
          result[5] += 10708861;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4329604;
          result[3] += 40698278;
          result[4] += 0;
          result[5] += 8659208;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3834792;
          result[3] += 0;
          result[4] += 7669584;
          result[5] += 42182714;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5113056;
          result[3] += 2556528;
          result[4] += 0;
          result[5] += 46017506;
        } else {
          result[0] += 0;
          result[1] += 10324440;
          result[2] += 38200430;
          result[3] += 2064888;
          result[4] += 1032444;
          result[5] += 2064888;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42f60000))) ) ) {
          result[0] += 154717;
          result[1] += 0;
          result[2] += 41619099;
          result[3] += 11139684;
          result[4] += 0;
          result[5] += 773589;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 194166;
          result[1] += 0;
          result[2] += 52327924;
          result[3] += 970833;
          result[4] += 0;
          result[5] += 194166;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 2516582;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49772407;
          result[5] += 1398101;
        } else {
          result[0] += 0;
          result[1] += 1095654;
          result[2] += 0;
          result[3] += 4382619;
          result[4] += 23008753;
          result[5] += 25200063;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1719952;
          result[1] += 61426;
          result[2] += 0;
          result[3] += 1535671;
          result[4] += 3439905;
          result[5] += 46930134;
        } else {
          result[0] += 1846381;
          result[1] += 142029;
          result[2] += 0;
          result[3] += 23718900;
          result[4] += 2272469;
          result[5] += 25707310;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 3834792;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49852298;
          result[5] += 0;
        } else {
          result[0] += 239140;
          result[1] += 52491387;
          result[2] += 0;
          result[3] += 239140;
          result[4] += 597851;
          result[5] += 119570;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 39160422;
          result[1] += 2427149;
          result[2] += 1919983;
          result[3] += 1847531;
          result[4] += 6230890;
          result[5] += 2101114;
        } else {
          result[0] += 7230066;
          result[1] += 307662;
          result[2] += 11845002;
          result[3] += 19690394;
          result[4] += 6307079;
          result[5] += 8306885;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4880644;
          result[3] += 18302417;
          result[4] += 2440322;
          result[5] += 28063706;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7669584;
          result[3] += 46017506;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17895697;
          result[3] += 8947848;
          result[4] += 0;
          result[5] += 26843545;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12201611;
          result[3] += 26843545;
          result[4] += 0;
          result[5] += 14641933;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38704647;
          result[3] += 11236833;
          result[4] += 1872805;
          result[5] += 1872805;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 18583993;
          result[1] += 2064888;
          result[2] += 26843545;
          result[3] += 0;
          result[4] += 6194664;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 50960540;
          result[3] += 2531797;
          result[4] += 0;
          result[5] += 194753;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 749122;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52438554;
          result[5] += 499414;
        } else {
          result[0] += 0;
          result[1] += 1917396;
          result[2] += 0;
          result[3] += 5752188;
          result[4] += 23008753;
          result[5] += 23008753;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 2463761;
          result[1] += 114593;
          result[2] += 0;
          result[3] += 2463761;
          result[4] += 4068072;
          result[5] += 44576901;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2941758;
          result[3] += 28191851;
          result[4] += 0;
          result[5] += 22553481;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 1142278;
          result[1] += 12565063;
          result[2] += 2665316;
          result[3] += 1903797;
          result[4] += 35029875;
          result[5] += 380759;
        } else {
          result[0] += 0;
          result[1] += 53309013;
          result[2] += 0;
          result[3] += 0;
          result[4] += 378078;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 44275808;
          result[1] += 1967813;
          result[2] += 684456;
          result[3] += 1283356;
          result[4] += 3978405;
          result[5] += 1497249;
        } else {
          result[0] += 15503224;
          result[1] += 1435483;
          result[2] += 5454838;
          result[3] += 17225804;
          result[4] += 3158064;
          result[5] += 10909676;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42900000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5293093;
          result[3] += 5293093;
          result[4] += 2268468;
          result[5] += 40832435;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 247405;
          result[2] += 4453307;
          result[3] += 35131644;
          result[4] += 494811;
          result[5] += 13359921;
        } else {
          result[0] += 3677198;
          result[1] += 1470879;
          result[2] += 33830221;
          result[3] += 12502473;
          result[4] += 0;
          result[5] += 2206318;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42df0000))) ) ) {
          result[0] += 0;
          result[1] += 14128181;
          result[2] += 24017909;
          result[3] += 7064090;
          result[4] += 1412818;
          result[5] += 7064090;
        } else {
          result[0] += 45027882;
          result[1] += 0;
          result[2] += 3463683;
          result[3] += 5195524;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32808777;
          result[3] += 12228726;
          result[4] += 0;
          result[5] += 8649586;
        } else {
          result[0] += 534199;
          result[1] += 133549;
          result[2] += 50682216;
          result[3] += 1936474;
          result[4] += 66774;
          result[5] += 333874;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 770628;
          result[2] += 770628;
          result[3] += 0;
          result[4] += 50604578;
          result[5] += 1541256;
        } else {
          result[0] += 25130127;
          result[1] += 0;
          result[2] += 1142278;
          result[3] += 0;
          result[4] += 17705317;
          result[5] += 9709367;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 378078;
          result[2] += 0;
          result[3] += 3024624;
          result[4] += 4212870;
          result[5] += 46071517;
        } else {
          result[0] += 383479;
          result[1] += 2300875;
          result[2] += 2876094;
          result[3] += 29911379;
          result[4] += 958698;
          result[5] += 17256565;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 7995949;
          result[2] += 0;
          result[3] += 0;
          result[4] += 44548862;
          result[5] += 1142278;
        } else {
          result[0] += 507679;
          result[1] += 50133335;
          result[2] += 253839;
          result[3] += 0;
          result[4] += 2792236;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 44009950;
          result[1] += 3029365;
          result[2] += 126223;
          result[3] += 1051863;
          result[4] += 4628197;
          result[5] += 841490;
        } else {
          result[0] += 8739759;
          result[1] += 178362;
          result[2] += 12842094;
          result[3] += 14090631;
          result[4] += 3210523;
          result[5] += 14625719;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1248537;
          result[3] += 1248537;
          result[4] += 2497074;
          result[5] += 48692943;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5965232;
          result[3] += 5965232;
          result[4] += 16404388;
          result[5] += 25352237;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7669584;
          result[3] += 32031793;
          result[4] += 0;
          result[5] += 13985712;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36398027;
          result[3] += 11829359;
          result[4] += 909950;
          result[5] += 4549753;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6710886;
          result[3] += 0;
          result[4] += 0;
          result[5] += 46976204;
        } else {
          result[0] += 0;
          result[1] += 958698;
          result[2] += 24926149;
          result[3] += 26843545;
          result[4] += 0;
          result[5] += 958698;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 506481;
          result[2] += 40012077;
          result[3] += 10636121;
          result[4] += 506481;
          result[5] += 2025927;
        } else {
          result[0] += 1108378;
          result[1] += 0;
          result[2] += 49669218;
          result[3] += 2216757;
          result[4] += 415641;
          result[5] += 277094;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 402150;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51877413;
          result[5] += 1407526;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 794911;
          result[1] += 244588;
          result[2] += 0;
          result[3] += 3118498;
          result[4] += 3240792;
          result[5] += 46288300;
        } else {
          result[0] += 4241943;
          result[1] += 1193046;
          result[2] += 2386092;
          result[3] += 20149229;
          result[4] += 6495475;
          result[5] += 19221304;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 37224073;
          result[1] += 4029409;
          result[2] += 805881;
          result[3] += 2072267;
          result[4] += 5717924;
          result[5] += 3837533;
        } else {
          result[0] += 8012998;
          result[1] += 667749;
          result[2] += 15224697;
          result[3] += 12553697;
          result[4] += 3338749;
          result[5] += 13889197;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 52671389;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1015701;
          result[5] += 0;
        } else {
          result[0] += 44739242;
          result[1] += 8947848;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cc0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1451002;
          result[3] += 1451002;
          result[4] += 10157017;
          result[5] += 40628069;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 3579139;
          result[4] += 0;
          result[5] += 14316557;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 4210752;
          result[1] += 0;
          result[2] += 2105376;
          result[3] += 44212898;
          result[4] += 1052688;
          result[5] += 2105376;
        } else {
          result[0] += 0;
          result[1] += 2556528;
          result[2] += 30678337;
          result[3] += 14060904;
          result[4] += 0;
          result[5] += 6391320;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 15658734;
          result[1] += 6710886;
          result[2] += 13421772;
          result[3] += 0;
          result[4] += 8947848;
          result[5] += 8947848;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36831841;
          result[3] += 14358175;
          result[4] += 0;
          result[5] += 2497074;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1869699;
          result[1] += 0;
          result[2] += 43804392;
          result[3] += 7478798;
          result[4] += 0;
          result[5] += 534199;
        } else {
          result[0] += 85082;
          result[1] += 85082;
          result[2] += 52070522;
          result[3] += 1446403;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 539568;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51528816;
          result[5] += 1618706;
        } else {
          result[0] += 0;
          result[1] += 40265318;
          result[2] += 0;
          result[3] += 0;
          result[4] += 13421772;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
          result[0] += 48546837;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1142278;
          result[4] += 2284557;
          result[5] += 1713417;
        } else {
          result[0] += 536870;
          result[1] += 536870;
          result[2] += 5905580;
          result[3] += 1073741;
          result[4] += 23622320;
          result[5] += 22011707;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x425e0000))) ) ) {
          result[0] += 0;
          result[1] += 1579032;
          result[2] += 0;
          result[3] += 0;
          result[4] += 45791930;
          result[5] += 6316128;
        } else {
          result[0] += 554746;
          result[1] += 123276;
          result[2] += 0;
          result[3] += 3205199;
          result[4] += 3143561;
          result[5] += 46660307;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 303316;
          result[2] += 909950;
          result[3] += 16379112;
          result[4] += 606633;
          result[5] += 35488077;
        } else {
          result[0] += 411395;
          result[1] += 0;
          result[2] += 1028488;
          result[3] += 36819882;
          result[4] += 411395;
          result[5] += 15015929;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 52956654;
          result[2] += 0;
          result[3] += 0;
          result[4] += 730436;
          result[5] += 0;
        } else {
          result[0] += 3158064;
          result[1] += 14606046;
          result[2] += 0;
          result[3] += 394758;
          result[4] += 35528222;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
          result[0] += 12033313;
          result[1] += 462819;
          result[2] += 14347412;
          result[3] += 9719214;
          result[4] += 2776918;
          result[5] += 14347412;
        } else {
          result[0] += 47049950;
          result[1] += 639132;
          result[2] += 737460;
          result[3] += 1671576;
          result[4] += 2949840;
          result[5] += 639132;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 1988410;
          result[1] += 43745037;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7953643;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 1278264;
          result[2] += 14060904;
          result[3] += 15765256;
          result[4] += 852176;
          result[5] += 21730489;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 1651910;
          result[1] += 0;
          result[2] += 17345060;
          result[3] += 27256523;
          result[4] += 0;
          result[5] += 7433597;
        } else {
          result[0] += 1691715;
          result[1] += 49756;
          result[2] += 46372909;
          result[3] += 4428314;
          result[4] += 348294;
          result[5] += 796101;
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
