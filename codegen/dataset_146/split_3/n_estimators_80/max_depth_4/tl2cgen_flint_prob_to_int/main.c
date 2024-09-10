
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
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 921666;
          result[2] += 0;
          result[3] += 921666;
          result[4] += 48848340;
          result[5] += 2995417;
        } else {
          result[0] += 0;
          result[1] += 44212898;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9474192;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          result[0] += 145100;
          result[1] += 217650;
          result[2] += 72550;
          result[3] += 1886303;
          result[4] += 2321603;
          result[5] += 49043883;
        } else {
          result[0] += 4677284;
          result[1] += 2033601;
          result[2] += 508400;
          result[3] += 17488976;
          result[4] += 6202485;
          result[5] += 22776341;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 23569942;
          result[2] += 0;
          result[3] += 0;
          result[4] += 30117148;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53441944;
          result[2] += 0;
          result[3] += 0;
          result[4] += 245146;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 41719430;
          result[1] += 1171659;
          result[2] += 125534;
          result[3] += 1255348;
          result[4] += 6778884;
          result[5] += 2636232;
        } else {
          result[0] += 9856161;
          result[1] += 1623367;
          result[2] += 14030535;
          result[3] += 10667845;
          result[4] += 2782916;
          result[5] += 14726264;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8476909;
          result[3] += 0;
          result[4] += 11302545;
          result[5] += 33907636;
        } else {
          result[0] += 0;
          result[1] += 547827;
          result[2] += 14243513;
          result[3] += 32321820;
          result[4] += 547827;
          result[5] += 6026102;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 30678337;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 23008753;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 45210182;
          result[3] += 6593151;
          result[4] += 0;
          result[5] += 1883757;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6316128;
          result[3] += 0;
          result[4] += 9474192;
          result[5] += 37896770;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 50107951;
          result[3] += 0;
          result[4] += 0;
          result[5] += 3579139;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1422174;
          result[1] += 533315;
          result[2] += 40531976;
          result[3] += 9244134;
          result[4] += 0;
          result[5] += 1955490;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 51933247;
          result[3] += 1753843;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 565127;
          result[3] += 0;
          result[4] += 53121963;
          result[5] += 0;
        } else {
          result[0] += 2776918;
          result[1] += 1851279;
          result[2] += 1851279;
          result[3] += 0;
          result[4] += 29620464;
          result[5] += 17587150;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 73949;
          result[3] += 1035288;
          result[4] += 1257135;
          result[5] += 51320718;
        } else {
          result[0] += 4526736;
          result[1] += 2625506;
          result[2] += 2806576;
          result[3] += 16024646;
          result[4] += 3259250;
          result[5] += 24444375;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 5368709;
          result[2] += 0;
          result[3] += 10737418;
          result[4] += 37580963;
          result[5] += 0;
        } else {
          result[0] += 500578;
          result[1] += 52310499;
          result[2] += 0;
          result[3] += 250289;
          result[4] += 625723;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 39437289;
          result[1] += 2349291;
          result[2] += 385129;
          result[3] += 2041187;
          result[4] += 7009361;
          result[5] += 2464830;
        } else {
          result[0] += 9435107;
          result[1] += 3189332;
          result[2] += 15415105;
          result[3] += 12890217;
          result[4] += 3056443;
          result[5] += 9700885;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42930000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 8259552;
          result[4] += 0;
          result[5] += 45427538;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7090747;
          result[3] += 39505595;
          result[4] += 0;
          result[5] += 7090747;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 1220161;
          result[1] += 0;
          result[2] += 15862095;
          result[3] += 6100805;
          result[4] += 8541128;
          result[5] += 21962900;
        } else {
          result[0] += 0;
          result[1] += 789516;
          result[2] += 42633866;
          result[3] += 3947580;
          result[4] += 0;
          result[5] += 6316128;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 256876;
          result[2] += 42127669;
          result[3] += 10018165;
          result[4] += 256876;
          result[5] += 1027504;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 460833;
          result[1] += 0;
          result[2] += 50230840;
          result[3] += 2995417;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 406720;
          result[1] += 0;
          result[2] += 53009223;
          result[3] += 271146;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51513524;
          result[5] += 2173566;
        } else {
          result[0] += 0;
          result[1] += 48806446;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4880644;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1861152;
          result[4] += 2505397;
          result[5] += 49320541;
        } else {
          result[0] += 5824542;
          result[1] += 168827;
          result[2] += 590895;
          result[3] += 18233351;
          result[4] += 3883028;
          result[5] += 24986444;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 32051994;
          result[2] += 0;
          result[3] += 3205199;
          result[4] += 18429896;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53422622;
          result[2] += 0;
          result[3] += 0;
          result[4] += 264468;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 40971727;
          result[1] += 3365831;
          result[2] += 373981;
          result[3] += 1454371;
          result[4] += 6066807;
          result[5] += 1454371;
        } else {
          result[0] += 8209035;
          result[1] += 328361;
          result[2] += 14447902;
          result[3] += 14447902;
          result[4] += 7223951;
          result[5] += 9029938;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3834792;
          result[4] += 0;
          result[5] += 49852298;
        } else {
          result[0] += 0;
          result[1] += 2119227;
          result[2] += 12008954;
          result[3] += 32494818;
          result[4] += 1412818;
          result[5] += 5651272;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 9761289;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 43925801;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 50107951;
          result[3] += 3579139;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 6710886;
          result[1] += 4473924;
          result[2] += 6710886;
          result[3] += 8947848;
          result[4] += 8947848;
          result[5] += 17895697;
        } else {
          result[0] += 253240;
          result[1] += 253240;
          result[2] += 40265318;
          result[3] += 10129639;
          result[4] += 506481;
          result[5] += 2279168;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1721743;
          result[1] += 0;
          result[2] += 47582728;
          result[3] += 4069575;
          result[4] += 0;
          result[5] += 313044;
        } else {
          result[0] += 847690;
          result[1] += 0;
          result[2] += 52556836;
          result[3] += 282563;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 269784;
          result[1] += 1079137;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51798600;
          result[5] += 539568;
        } else {
          result[0] += 14316557;
          result[1] += 5206020;
          result[2] += 0;
          result[3] += 1301505;
          result[4] += 15618062;
          result[5] += 17244944;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 336244;
          result[1] += 56040;
          result[2] += 224163;
          result[3] += 4315141;
          result[4] += 4931590;
          result[5] += 43823909;
        } else {
          result[0] += 1017764;
          result[1] += 0;
          result[2] += 1272205;
          result[3] += 33331795;
          result[4] += 763323;
          result[5] += 17302000;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 39602033;
          result[1] += 3160359;
          result[2] += 39016;
          result[3] += 1326570;
          result[4] += 6866953;
          result[5] += 2692157;
        } else {
          result[0] += 11227829;
          result[1] += 1677721;
          result[2] += 11098773;
          result[3] += 12518384;
          result[4] += 2839221;
          result[5] += 14325161;
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
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4880644;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 5856773;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 23159137;
          result[3] += 18948385;
          result[4] += 0;
          result[5] += 11579568;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15339168;
          result[3] += 0;
          result[4] += 0;
          result[5] += 38347922;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 48574034;
          result[3] += 5113056;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14454216;
          result[3] += 33038209;
          result[4] += 0;
          result[5] += 6194664;
        } else {
          result[0] += 2236962;
          result[1] += 0;
          result[2] += 46976204;
          result[3] += 4473924;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 549228;
          result[1] += 0;
          result[2] += 46547119;
          result[3] += 5629592;
          result[4] += 0;
          result[5] += 961149;
        } else {
          result[0] += 110240;
          result[1] += 0;
          result[2] += 52584686;
          result[3] += 771683;
          result[4] += 0;
          result[5] += 220480;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
          result[0] += 742217;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50965625;
          result[5] += 1979247;
        } else {
          result[0] += 0;
          result[1] += 10066329;
          result[2] += 0;
          result[3] += 0;
          result[4] += 20132659;
          result[5] += 23488102;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          result[0] += 65954;
          result[1] += 65954;
          result[2] += 461682;
          result[3] += 2308413;
          result[4] += 3033914;
          result[5] += 47751172;
        } else {
          result[0] += 6658864;
          result[1] += 208089;
          result[2] += 312134;
          result[3] += 17479518;
          result[4] += 5514371;
          result[5] += 23514113;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42580000))) ) ) {
          result[0] += 0;
          result[1] += 52292621;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1394469;
          result[5] += 0;
        } else {
          result[0] += 1342177;
          result[1] += 15658734;
          result[2] += 1789569;
          result[3] += 0;
          result[4] += 32659647;
          result[5] += 2236962;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 47365412;
          result[1] += 1604007;
          result[2] += 0;
          result[3] += 1085064;
          result[4] += 2877779;
          result[5] += 754827;
        } else {
          result[0] += 12356552;
          result[1] += 2343484;
          result[2] += 8095672;
          result[3] += 11078288;
          result[4] += 4047836;
          result[5] += 15765256;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 1851279;
          result[2] += 0;
          result[3] += 17278604;
          result[4] += 3085465;
          result[5] += 31471743;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6547206;
          result[3] += 43211561;
          result[4] += 0;
          result[5] += 3928323;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10475529;
          result[3] += 9166088;
          result[4] += 0;
          result[5] += 34045472;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41902119;
          result[3] += 2618882;
          result[4] += 0;
          result[5] += 9166088;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 470939;
          result[1] += 4709393;
          result[2] += 23546969;
          result[3] += 18366636;
          result[4] += 3767515;
          result[5] += 2825636;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 15523978;
          result[1] += 0;
          result[2] += 31047956;
          result[3] += 6468324;
          result[4] += 0;
          result[5] += 646832;
        } else {
          result[0] += 326167;
          result[1] += 0;
          result[2] += 49185986;
          result[3] += 4109704;
          result[4] += 0;
          result[5] += 65233;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 238609;
          result[1] += 477218;
          result[2] += 0;
          result[3] += 238609;
          result[4] += 50823779;
          result[5] += 1908874;
        } else {
          result[0] += 0;
          result[1] += 32736031;
          result[2] += 0;
          result[3] += 1309441;
          result[4] += 3928323;
          result[5] += 15713294;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1840700;
          result[1] += 0;
          result[2] += 122713;
          result[3] += 3129190;
          result[4] += 2822407;
          result[5] += 45772080;
        } else {
          result[0] += 3013051;
          result[1] += 1232611;
          result[2] += 0;
          result[3] += 22323969;
          result[4] += 4108705;
          result[5] += 23008753;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 13421772;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40265318;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53439685;
          result[2] += 0;
          result[3] += 0;
          result[4] += 247405;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 43249089;
          result[1] += 1580255;
          result[2] += 166342;
          result[3] += 1372326;
          result[4] += 6279435;
          result[5] += 1039641;
        } else {
          result[0] += 10596136;
          result[1] += 1883757;
          result[2] += 9771992;
          result[3] += 11184810;
          result[4] += 6239947;
          result[5] += 14010447;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1032444;
          result[3] += 44395094;
          result[4] += 0;
          result[5] += 8259552;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 16777215;
          result[4] += 0;
          result[5] += 10066329;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7953643;
          result[3] += 21872518;
          result[4] += 0;
          result[5] += 23860929;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 18948385;
          result[3] += 31580641;
          result[4] += 0;
          result[5] += 3158064;
        } else {
          result[0] += 907387;
          result[1] += 0;
          result[2] += 44461985;
          result[3] += 7259099;
          result[4] += 0;
          result[5] += 1058618;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 2825636;
          result[1] += 0;
          result[2] += 44268303;
          result[3] += 5651272;
          result[4] += 0;
          result[5] += 941878;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52769363;
          result[3] += 917728;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
          result[0] += 740511;
          result[1] += 1666151;
          result[2] += 0;
          result[3] += 0;
          result[4] += 48503509;
          result[5] += 2776918;
        } else {
          result[0] += 38271985;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8770663;
          result[5] += 6644441;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 75829;
          result[2] += 0;
          result[3] += 1971559;
          result[4] += 1364926;
          result[5] += 50274776;
        } else {
          result[0] += 572357;
          result[1] += 915771;
          result[2] += 572357;
          result[3] += 13278683;
          result[4] += 8356412;
          result[5] += 29991509;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10737418;
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 43183095;
          result[1] += 2380905;
          result[2] += 513528;
          result[3] += 2147483;
          result[4] += 3921491;
          result[5] += 1540586;
        } else {
          result[0] += 5810291;
          result[1] += 813440;
          result[2] += 12201611;
          result[3] += 15571580;
          result[4] += 4764438;
          result[5] += 14525728;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1677721;
          result[3] += 3355443;
          result[4] += 3355443;
          result[5] += 45298483;
        } else {
          result[0] += 880116;
          result[1] += 0;
          result[2] += 6160813;
          result[3] += 34324533;
          result[4] += 880116;
          result[5] += 11441511;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34738706;
          result[3] += 10526880;
          result[4] += 0;
          result[5] += 8421504;
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
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 8947848;
          result[1] += 31317469;
          result[2] += 0;
          result[3] += 8947848;
          result[4] += 0;
          result[5] += 4473924;
        } else {
          result[0] += 1579032;
          result[1] += 0;
          result[2] += 41230282;
          result[3] += 9825088;
          result[4] += 0;
          result[5] += 1052688;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 45634027;
          result[3] += 8053063;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52801165;
          result[3] += 885925;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1162058;
          result[3] += 0;
          result[4] += 51595386;
          result[5] += 929646;
        } else {
          result[0] += 8947848;
          result[1] += 0;
          result[2] += 3579139;
          result[3] += 0;
          result[4] += 26843545;
          result[5] += 14316557;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1093423;
          result[1] += 1530792;
          result[2] += 218684;
          result[3] += 2350860;
          result[4] += 2132175;
          result[5] += 46361154;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5185684;
          result[3] += 29893948;
          result[4] += 610080;
          result[5] += 17997377;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 13421772;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40265318;
          result[5] += 0;
        } else {
          result[0] += 125730;
          result[1] += 52681244;
          result[2] += 251461;
          result[3] += 0;
          result[4] += 628654;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 41184098;
          result[1] += 1553402;
          result[2] += 644093;
          result[3] += 1174523;
          result[4] += 7122916;
          result[5] += 2008056;
        } else {
          result[0] += 9342301;
          result[1] += 1494768;
          result[2] += 5729944;
          result[3] += 16816142;
          result[4] += 5231688;
          result[5] += 15072246;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2497074;
          result[3] += 3745611;
          result[4] += 2497074;
          result[5] += 44947332;
        } else {
          result[0] += 0;
          result[1] += 35791394;
          result[2] += 17895697;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 40971727;
          result[4] += 0;
          result[5] += 12715363;
        } else {
          result[0] += 0;
          result[1] += 2025927;
          result[2] += 19246315;
          result[3] += 17220387;
          result[4] += 0;
          result[5] += 15194459;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1917396;
          result[3] += 3834792;
          result[4] += 13421772;
          result[5] += 34513130;
        } else {
          result[0] += 1003497;
          result[1] += 1003497;
          result[2] += 29603162;
          result[3] += 18062946;
          result[4] += 1505245;
          result[5] += 2508742;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1524239;
          result[1] += 169359;
          result[2] += 42678697;
          result[3] += 8637355;
          result[4] += 169359;
          result[5] += 508079;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 51751503;
          result[3] += 1629968;
          result[4] += 0;
          result[5] += 305619;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
          result[0] += 215610;
          result[1] += 4312216;
          result[2] += 0;
          result[3] += 0;
          result[4] += 47649988;
          result[5] += 1509275;
        } else {
          result[0] += 24696061;
          result[1] += 0;
          result[2] += 1073741;
          result[3] += 3221225;
          result[4] += 6442450;
          result[5] += 18253611;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 1731841;
          result[2] += 0;
          result[3] += 4618244;
          result[4] += 39255077;
          result[5] += 8081927;
        } else {
          result[0] += 398419;
          result[1] += 0;
          result[2] += 896444;
          result[3] += 8068004;
          result[4] += 2340717;
          result[5] += 41983504;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 1220161;
          result[2] += 0;
          result[3] += 8541128;
          result[4] += 32944351;
          result[5] += 10981450;
        } else {
          result[0] += 0;
          result[1] += 52219562;
          result[2] += 0;
          result[3] += 0;
          result[4] += 978352;
          result[5] += 489176;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 42982993;
          result[1] += 1624357;
          result[2] += 41650;
          result[3] += 1082904;
          result[4] += 5039672;
          result[5] += 2915513;
        } else {
          result[0] += 9673349;
          result[1] += 2740782;
          result[2] += 10479462;
          result[3] += 17250807;
          result[4] += 4514229;
          result[5] += 9028459;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3702558;
          result[4] += 7405116;
          result[5] += 42579417;
        } else {
          result[0] += 1229475;
          result[1] += 1229475;
          result[2] += 8606327;
          result[3] += 29097583;
          result[4] += 0;
          result[5] += 13524229;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 2403899;
          result[1] += 1602599;
          result[2] += 20833796;
          result[3] += 17628597;
          result[4] += 2403899;
          result[5] += 8814298;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 50433328;
          result[3] += 3253763;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426c0000))) ) ) {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 13421772;
          result[1] += 0;
          result[2] += 29080507;
          result[3] += 3728270;
          result[4] += 1491308;
          result[5] += 5965232;
        } else {
          result[0] += 62354;
          result[1] += 0;
          result[2] += 49571704;
          result[3] += 3678906;
          result[4] += 0;
          result[5] += 374126;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42360000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53269834;
          result[2] += 0;
          result[3] += 0;
          result[4] += 417257;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
          result[0] += 414039;
          result[1] += 11731112;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40161808;
          result[5] += 1380130;
        } else {
          result[0] += 43168803;
          result[1] += 1424351;
          result[2] += 0;
          result[3] += 0;
          result[4] += 6573929;
          result[5] += 2520006;
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 443084;
          result[3] += 1476948;
          result[4] += 1993880;
          result[5] += 49773176;
        } else {
          result[0] += 0;
          result[1] += 346368;
          result[2] += 692736;
          result[3] += 8312839;
          result[4] += 14893838;
          result[5] += 29441308;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 593227;
          result[1] += 2175167;
          result[2] += 494356;
          result[3] += 19378765;
          result[4] += 3163880;
          result[5] += 27881693;
        } else {
          result[0] += 13573717;
          result[1] += 6077783;
          result[2] += 3241484;
          result[3] += 11142603;
          result[4] += 12560753;
          result[5] += 7090747;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e30000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3834792;
          result[3] += 34513130;
          result[4] += 0;
          result[5] += 15339168;
        } else {
          result[0] += 50026607;
          result[1] += 0;
          result[2] += 1220161;
          result[3] += 976128;
          result[4] += 1464193;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13547209;
          result[3] += 28599665;
          result[4] += 0;
          result[5] += 11540215;
        } else {
          result[0] += 1236694;
          result[1] += 0;
          result[2] += 45830443;
          result[3] += 5237764;
          result[4] += 290986;
          result[5] += 1091201;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 7669584;
          result[1] += 0;
          result[2] += 15339168;
          result[3] += 23008753;
          result[4] += 0;
          result[5] += 7669584;
        } else {
          result[0] += 53326775;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 360316;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 35791394;
          result[1] += 0;
          result[2] += 5965232;
          result[3] += 11930464;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 328361;
          result[1] += 0;
          result[2] += 49090031;
          result[3] += 3447794;
          result[4] += 0;
          result[5] += 820903;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 1359166;
          result[1] += 906111;
          result[2] += 0;
          result[3] += 679583;
          result[4] += 48023895;
          result[5] += 2718333;
        } else {
          result[0] += 0;
          result[1] += 37167986;
          result[2] += 0;
          result[3] += 4129776;
          result[4] += 0;
          result[5] += 12389328;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 2026961;
          result[1] += 219130;
          result[2] += 0;
          result[3] += 3122616;
          result[4] += 4327836;
          result[5] += 43990545;
        } else {
          result[0] += 0;
          result[1] += 260616;
          result[2] += 1563701;
          result[3] += 32837735;
          result[4] += 0;
          result[5] += 19025037;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 7669584;
          result[4] += 46017506;
          result[5] += 0;
        } else {
          result[0] += 259985;
          result[1] += 52907133;
          result[2] += 0;
          result[3] += 0;
          result[4] += 519971;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 39434589;
          result[1] += 1921685;
          result[2] += 240210;
          result[3] += 1201053;
          result[4] += 8767690;
          result[5] += 2121861;
        } else {
          result[0] += 9931128;
          result[1] += 983280;
          result[2] += 13569264;
          result[3] += 14847528;
          result[4] += 2064888;
          result[5] += 12291000;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a00000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13421772;
          result[3] += 0;
          result[4] += 26843545;
          result[5] += 13421772;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5033164;
          result[3] += 16777215;
          result[4] += 0;
          result[5] += 31876710;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 50107951;
          result[2] += 3579139;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 11784971;
          result[1] += 654720;
          result[2] += 30117148;
          result[3] += 6547206;
          result[4] += 0;
          result[5] += 4583044;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4668442;
          result[3] += 30344877;
          result[4] += 0;
          result[5] += 18673770;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 48318382;
          result[3] += 0;
          result[4] += 0;
          result[5] += 5368709;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 49650949;
          result[3] += 3715812;
          result[4] += 0;
          result[5] += 320328;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1118481;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50052027;
          result[5] += 2516582;
        } else {
          result[0] += 36909875;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1118481;
          result[4] += 9507089;
          result[5] += 6151645;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 210813;
          result[2] += 210813;
          result[3] += 2248673;
          result[4] += 2810842;
          result[5] += 48205948;
        } else {
          result[0] += 107589;
          result[1] += 430357;
          result[2] += 107589;
          result[3] += 18828138;
          result[4] += 6347772;
          result[5] += 27865644;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42520000))) ) ) {
          result[0] += 226050;
          result[1] += 52556836;
          result[2] += 0;
          result[3] += 0;
          result[4] += 904203;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 11930464;
          result[2] += 0;
          result[3] += 917728;
          result[4] += 40838898;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 47732361;
          result[1] += 1086974;
          result[2] += 189039;
          result[3] += 1370533;
          result[4] += 2741066;
          result[5] += 567117;
        } else {
          result[0] += 11443827;
          result[1] += 3249481;
          result[2] += 12997927;
          result[3] += 10172290;
          result[4] += 5368709;
          result[5] += 10454854;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42740000))) ) ) {
          result[0] += 0;
          result[1] += 37580963;
          result[2] += 5368709;
          result[3] += 5368709;
          result[4] += 5368709;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1118481;
          result[3] += 0;
          result[4] += 3355443;
          result[5] += 49213166;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 43211561;
          result[4] += 0;
          result[5] += 10475529;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24926149;
          result[3] += 19173961;
          result[4] += 0;
          result[5] += 9586980;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28493148;
          result[3] += 18895456;
          result[4] += 0;
          result[5] += 6298485;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 43890176;
          result[3] += 8229408;
          result[4] += 0;
          result[5] += 1567506;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 25264513;
          result[1] += 3158064;
          result[2] += 15790320;
          result[3] += 0;
          result[4] += 9474192;
          result[5] += 0;
        } else {
          result[0] += 455618;
          result[1] += 0;
          result[2] += 50345886;
          result[3] += 2657776;
          result[4] += 0;
          result[5] += 227809;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 427785;
          result[2] += 1283356;
          result[3] += 0;
          result[4] += 50906484;
          result[5] += 1069463;
        } else {
          result[0] += 26572398;
          result[1] += 542293;
          result[2] += 1084587;
          result[3] += 0;
          result[4] += 7592113;
          result[5] += 17895697;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 596523;
          result[2] += 0;
          result[3] += 3579139;
          result[4] += 1524448;
          result[5] += 47986980;
        } else {
          result[0] += 168298;
          result[1] += 504894;
          result[2] += 841490;
          result[3] += 26086204;
          result[4] += 3365961;
          result[5] += 22720242;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 1298881;
          result[1] += 13421772;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37667555;
          result[5] += 1298881;
        } else {
          result[0] += 0;
          result[1] += 53326775;
          result[2] += 0;
          result[3] += 0;
          result[4] += 360316;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 46709547;
          result[1] += 622201;
          result[2] += 133328;
          result[3] += 977745;
          result[4] += 4088751;
          result[5] += 1155516;
        } else {
          result[0] += 5335363;
          result[1] += 1667300;
          result[2] += 14338788;
          result[3] += 12226873;
          result[4] += 4112675;
          result[5] += 16006089;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8947848;
          result[3] += 0;
          result[4] += 44739242;
          result[5] += 0;
        } else {
          result[0] += 1602599;
          result[1] += 801299;
          result[2] += 801299;
          result[3] += 4807799;
          result[4] += 4006499;
          result[5] += 41667593;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 1819901;
          result[2] += 7279605;
          result[3] += 32758225;
          result[4] += 0;
          result[5] += 11829359;
        } else {
          result[0] += 15339168;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 2556528;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 10737418;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 45733448;
          result[1] += 0;
          result[2] += 7953643;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33554431;
          result[3] += 16297866;
          result[4] += 0;
          result[5] += 3834792;
        } else {
          result[0] += 345476;
          result[1] += 0;
          result[2] += 49679560;
          result[3] += 3385672;
          result[4] += 0;
          result[5] += 276381;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 301612;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52782252;
          result[5] += 603225;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36368674;
          result[5] += 17318416;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42420000))) ) ) {
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
          result[3] += 35791394;
          result[4] += 0;
          result[5] += 17895697;
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42680000))) ) ) {
          result[0] += 36317738;
          result[1] += 0;
          result[2] += 1579032;
          result[3] += 0;
          result[4] += 15790320;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 491415;
          result[2] += 184280;
          result[3] += 2764209;
          result[4] += 2518501;
          result[5] += 47728684;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 3435973;
          result[1] += 0;
          result[2] += 0;
          result[3] += 6871947;
          result[4] += 4724464;
          result[5] += 38654705;
        } else {
          result[0] += 2147483;
          result[1] += 976128;
          result[2] += 3123612;
          result[3] += 29674319;
          result[4] += 1952257;
          result[5] += 15813288;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 20364069;
          result[2] += 5553837;
          result[3] += 9256395;
          result[4] += 18512790;
          result[5] += 0;
        } else {
          result[0] += 946028;
          result[1] += 52386302;
          result[2] += 0;
          result[3] += 236507;
          result[4] += 118253;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 41797766;
          result[1] += 2962046;
          result[2] += 41139;
          result[3] += 1110767;
          result[4] += 6253209;
          result[5] += 1522162;
        } else {
          result[0] += 8793575;
          result[1] += 462819;
          result[2] += 6788023;
          result[3] += 14964505;
          result[4] += 3548284;
          result[5] += 19129883;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4077500;
          result[3] += 16989585;
          result[4] += 0;
          result[5] += 32620004;
        } else {
          result[0] += 865920;
          result[1] += 3896643;
          result[2] += 29008347;
          result[3] += 14720654;
          result[4] += 2597762;
          result[5] += 2597762;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42870000))) ) ) {
          result[0] += 44100110;
          result[1] += 0;
          result[2] += 9586980;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 533904;
          result[1] += 0;
          result[2] += 47695493;
          result[3] += 4923788;
          result[4] += 118645;
          result[5] += 415259;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1142278;
          result[4] += 49803344;
          result[5] += 2741468;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 24606583;
          result[5] += 29080507;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1064775;
          result[1] += 168122;
          result[2] += 56040;
          result[3] += 2633917;
          result[4] += 3586611;
          result[5] += 46177623;
        } else {
          result[0] += 223696;
          result[1] += 0;
          result[2] += 0;
          result[3] += 30198988;
          result[4] += 1342177;
          result[5] += 21922228;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 244032;
          result[1] += 52710962;
          result[2] += 0;
          result[3] += 0;
          result[4] += 732096;
          result[5] += 0;
        } else {
          result[0] += 1003497;
          result[1] += 21073437;
          result[2] += 1003497;
          result[3] += 2006994;
          result[4] += 28097916;
          result[5] += 501748;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          result[0] += 42653241;
          result[1] += 1688014;
          result[2] += 576395;
          result[3] += 1193961;
          result[4] += 5228727;
          result[5] += 2346751;
        } else {
          result[0] += 10961633;
          result[1] += 1370204;
          result[2] += 11086197;
          result[3] += 15321374;
          result[4] += 2366716;
          result[5] += 12580965;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 1451002;
          result[2] += 18863032;
          result[3] += 2902004;
          result[4] += 2902004;
          result[5] += 27569046;
        } else {
          result[0] += 756156;
          result[1] += 0;
          result[2] += 6049249;
          result[3] += 38563966;
          result[4] += 756156;
          result[5] += 7561562;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 28633115;
          result[4] += 0;
          result[5] += 10737418;
        } else {
          result[0] += 7227108;
          result[1] += 0;
          result[2] += 42330206;
          result[3] += 4129776;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42910000))) ) ) {
          result[0] += 23008753;
          result[1] += 7669584;
          result[2] += 15339168;
          result[3] += 7669584;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 482219;
          result[1] += 0;
          result[2] += 45489361;
          result[3] += 7233290;
          result[4] += 0;
          result[5] += 482219;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 26843545;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 26843545;
        } else {
          result[0] += 197742;
          result[1] += 0;
          result[2] += 52302893;
          result[3] += 1087583;
          result[4] += 0;
          result[5] += 98871;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 32212254;
          result[5] += 21474836;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 865920;
          result[2] += 0;
          result[3] += 5195524;
          result[4] += 22513941;
          result[5] += 25111703;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          result[0] += 44142719;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9544371;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 324066;
          result[2] += 108022;
          result[3] += 2970613;
          result[4] += 3402702;
          result[5] += 46881685;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3463683;
          result[4] += 0;
          result[5] += 50223407;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2157070;
          result[3] += 35951177;
          result[4] += 239674;
          result[5] += 15339168;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 706409;
          result[1] += 11302545;
          result[2] += 0;
          result[3] += 706409;
          result[4] += 40265318;
          result[5] += 706409;
        } else {
          result[0] += 442780;
          result[1] += 51805275;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1439035;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 46895903;
          result[1] += 1697796;
          result[2] += 183545;
          result[3] += 1009500;
          result[4] += 3670912;
          result[5] += 229432;
        } else {
          result[0] += 15092756;
          result[1] += 0;
          result[2] += 7977599;
          result[3] += 13799091;
          result[4] += 8193210;
          result[5] += 8624432;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 5765056;
          result[1] += 5404740;
          result[2] += 3603160;
          result[3] += 7566637;
          result[4] += 8287269;
          result[5] += 23060227;
        } else {
          result[0] += 3605849;
          result[1] += 0;
          result[2] += 26042245;
          result[3] += 15625347;
          result[4] += 400649;
          result[5] += 8012998;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27640878;
          result[3] += 21262214;
          result[4] += 0;
          result[5] += 4783998;
        } else {
          result[0] += 422258;
          result[1] += 0;
          result[2] += 48197736;
          result[3] += 4343225;
          result[4] += 0;
          result[5] += 723870;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42890000))) ) ) {
          result[0] += 1851279;
          result[1] += 2082688;
          result[2] += 0;
          result[3] += 0;
          result[4] += 44893515;
          result[5] += 4859607;
        } else {
          result[0] += 32311675;
          result[1] += 1491308;
          result[2] += 0;
          result[3] += 497102;
          result[4] += 18641351;
          result[5] += 745654;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 1309441;
          result[2] += 0;
          result[3] += 0;
          result[4] += 48449326;
          result[5] += 3928323;
        } else {
          result[0] += 360661;
          result[1] += 412184;
          result[2] += 103046;
          result[3] += 4070326;
          result[4] += 2936817;
          result[5] += 45804053;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 745654;
          result[1] += 20132659;
          result[2] += 2982616;
          result[3] += 2236962;
          result[4] += 23115275;
          result[5] += 4473924;
        } else {
          result[0] += 0;
          result[1] += 53567520;
          result[2] += 0;
          result[3] += 0;
          result[4] += 119570;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 45017774;
          result[1] += 2454565;
          result[2] += 208899;
          result[3] += 1148945;
          result[4] += 4177983;
          result[5] += 678922;
        } else {
          result[0] += 11720421;
          result[1] += 1890390;
          result[2] += 8317718;
          result[3] += 17769671;
          result[4] += 3276676;
          result[5] += 10712213;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 48318382;
          result[5] += 5368709;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1533916;
          result[4] += 0;
          result[5] += 52153174;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 3780781;
          result[2] += 0;
          result[3] += 40076279;
          result[4] += 0;
          result[5] += 9830030;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16452495;
          result[3] += 12122891;
          result[4] += 0;
          result[5] += 25111703;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 605949;
          result[1] += 1575467;
          result[2] += 37932414;
          result[3] += 10422324;
          result[4] += 484759;
          result[5] += 2666176;
        } else {
          result[0] += 33710499;
          result[1] += 4994148;
          result[2] += 7491222;
          result[3] += 2497074;
          result[4] += 4994148;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 19522578;
          result[4] += 0;
          result[5] += 7320966;
        } else {
          result[0] += 846799;
          result[1] += 0;
          result[2] += 51316052;
          result[3] += 1524239;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 1179936;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50147282;
          result[5] += 2359872;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 620660;
          result[4] += 775825;
          result[5] += 52290606;
        } else {
          result[0] += 4628197;
          result[1] += 1295895;
          result[2] += 925639;
          result[3] += 16939202;
          result[4] += 2869482;
          result[5] += 27028673;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 933688;
          result[1] += 9803729;
          result[2] += 933688;
          result[3] += 933688;
          result[4] += 37814385;
          result[5] += 3267909;
        } else {
          result[0] += 132888;
          result[1] += 52889758;
          result[2] += 0;
          result[3] += 0;
          result[4] += 664444;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 42917999;
          result[1] += 1148175;
          result[2] += 712660;
          result[3] += 1742059;
          result[4] += 5067808;
          result[5] += 2098389;
        } else {
          result[0] += 11000107;
          result[1] += 0;
          result[2] += 15761347;
          result[3] += 12806095;
          result[4] += 2791072;
          result[5] += 11328468;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 17895697;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35791394;
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
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 3158064;
          result[2] += 6316128;
          result[3] += 33159673;
          result[4] += 0;
          result[5] += 11053224;
        } else {
          result[0] += 1431655;
          result[1] += 1073741;
          result[2] += 33643910;
          result[3] += 13600729;
          result[4] += 1431655;
          result[5] += 2505397;
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 22513941;
          result[3] += 29441308;
          result[4] += 1731841;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 46310238;
          result[3] += 6557201;
          result[4] += 0;
          result[5] += 819650;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 313959;
          result[1] += 0;
          result[2] += 50704475;
          result[3] += 2433186;
          result[4] += 0;
          result[5] += 235469;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 408266;
          result[1] += 3878535;
          result[2] += 0;
          result[3] += 0;
          result[4] += 47563088;
          result[5] += 1837200;
        } else {
          result[0] += 40500788;
          result[1] += 627919;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3767515;
          result[5] += 8790868;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 928307;
          result[4] += 773589;
          result[5] += 51985194;
        } else {
          result[0] += 697234;
          result[1] += 2440322;
          result[2] += 1510675;
          result[3] += 14525728;
          result[4] += 5345467;
          result[5] += 29167662;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 24542670;
          result[2] += 0;
          result[3] += 0;
          result[4] += 29144420;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53337717;
          result[2] += 0;
          result[3] += 0;
          result[4] += 349373;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 40540963;
          result[1] += 1569054;
          result[2] += 1144985;
          result[3] += 2459598;
          result[4] += 4791975;
          result[5] += 3180514;
        } else {
          result[0] += 10243743;
          result[1] += 617093;
          result[2] += 9503232;
          result[3] += 18389371;
          result[4] += 2715209;
          result[5] += 12218441;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42740000))) ) ) {
          result[0] += 0;
          result[1] += 43925801;
          result[2] += 9761289;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 711087;
          result[1] += 1422174;
          result[2] += 13155115;
          result[3] += 18488269;
          result[4] += 2844349;
          result[5] += 17066095;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 53687091;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16106127;
          result[3] += 32212254;
          result[4] += 0;
          result[5] += 5368709;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 43640384;
          result[3] += 9418787;
          result[4] += 0;
          result[5] += 627919;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 14913080;
          result[1] += 0;
          result[2] += 32808777;
          result[3] += 5965232;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 165957;
          result[1] += 0;
          result[2] += 51280714;
          result[3] += 2157441;
          result[4] += 0;
          result[5] += 82978;
        }
      }
    }
  }
  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 1170746;
          result[1] += 1505245;
          result[2] += 0;
          result[3] += 167249;
          result[4] += 48502356;
          result[5] += 2341493;
        } else {
          result[0] += 3158064;
          result[1] += 47370962;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3158064;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 1167110;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 22175102;
          result[5] += 30344877;
        } else {
          result[0] += 47541094;
          result[1] += 1084587;
          result[2] += 0;
          result[3] += 361529;
          result[4] += 4338350;
          result[5] += 361529;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
          result[0] += 0;
          result[1] += 222768;
          result[2] += 55692;
          result[3] += 3397212;
          result[4] += 3675672;
          result[5] += 46335746;
        } else {
          result[0] += 8793575;
          result[1] += 4165377;
          result[2] += 0;
          result[3] += 5553837;
          result[4] += 20826888;
          result[5] += 14347412;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1073741;
          result[1] += 1073741;
          result[2] += 6442450;
          result[3] += 10737418;
          result[4] += 3221225;
          result[5] += 31138512;
        } else {
          result[0] += 514572;
          result[1] += 1886766;
          result[2] += 3602009;
          result[3] += 33104180;
          result[4] += 1200669;
          result[5] += 13378891;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
          result[0] += 0;
          result[1] += 53443058;
          result[2] += 0;
          result[3] += 0;
          result[4] += 244032;
          result[5] += 0;
        } else {
          result[0] += 1012963;
          result[1] += 27350027;
          result[2] += 0;
          result[3] += 0;
          result[4] += 25324099;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429c0000))) ) ) {
          result[0] += 7320966;
          result[1] += 25623384;
          result[2] += 0;
          result[3] += 0;
          result[4] += 20742739;
          result[5] += 0;
        } else {
          result[0] += 48761669;
          result[1] += 164180;
          result[2] += 1094538;
          result[3] += 1094538;
          result[4] += 1422899;
          result[5] += 1149264;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9373936;
          result[3] += 17895697;
          result[4] += 0;
          result[5] += 26417457;
        } else {
          result[0] += 6397943;
          result[1] += 0;
          result[2] += 35605946;
          result[3] += 7510629;
          result[4] += 1669028;
          result[5] += 2503543;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 3447794;
          result[1] += 0;
          result[2] += 37433201;
          result[3] += 10343384;
          result[4] += 0;
          result[5] += 2462710;
        } else {
          result[0] += 209442;
          result[1] += 0;
          result[2] += 50475639;
          result[3] += 2513309;
          result[4] += 0;
          result[5] += 488699;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 174308;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51769695;
          result[5] += 1743087;
        } else {
          result[0] += 0;
          result[1] += 41054834;
          result[2] += 0;
          result[3] += 9474192;
          result[4] += 3158064;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42620000))) ) ) {
          result[0] += 40904450;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 12782640;
          result[5] += 0;
        } else {
          result[0] += 371215;
          result[1] += 232009;
          result[2] += 139205;
          result[3] += 8166748;
          result[4] += 1948883;
          result[5] += 42829027;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 511305;
          result[1] += 12782640;
          result[2] += 511305;
          result[3] += 0;
          result[4] += 38859227;
          result[5] += 1022611;
        } else {
          result[0] += 247977;
          result[1] += 52695181;
          result[2] += 0;
          result[3] += 0;
          result[4] += 743931;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 46964533;
          result[1] += 1540586;
          result[2] += 186737;
          result[3] += 887004;
          result[4] += 3081172;
          result[5] += 1027057;
        } else {
          result[0] += 11910105;
          result[1] += 1099394;
          result[2] += 14475359;
          result[3] += 12276570;
          result[4] += 4397577;
          result[5] += 9528084;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1278264;
          result[4] += 6391320;
          result[5] += 46017506;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3355443;
          result[3] += 31037849;
          result[4] += 1677721;
          result[5] += 17616076;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 48318382;
          result[5] += 5368709;
        } else {
          result[0] += 536870;
          result[1] += 1610612;
          result[2] += 27917287;
          result[3] += 15569256;
          result[4] += 536870;
          result[5] += 7516192;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41756626;
          result[3] += 11930464;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 41297762;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 12389328;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33907636;
          result[3] += 5651272;
          result[4] += 0;
          result[5] += 14128181;
        } else {
          result[0] += 350133;
          result[1] += 0;
          result[2] += 50360825;
          result[3] += 2976132;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 477218;
          result[3] += 0;
          result[4] += 52971263;
          result[5] += 238609;
        } else {
          result[0] += 1342177;
          result[1] += 0;
          result[2] += 5368709;
          result[3] += 0;
          result[4] += 33554431;
          result[5] += 13421772;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1123160;
          result[1] += 280790;
          result[2] += 56158;
          result[3] += 3088692;
          result[4] += 3201008;
          result[5] += 45937280;
        } else {
          result[0] += 454975;
          result[1] += 0;
          result[2] += 227487;
          result[3] += 29118422;
          result[4] += 2047389;
          result[5] += 21838816;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 26527739;
          result[2] += 0;
          result[3] += 1263225;
          result[4] += 25264513;
          result[5] += 631612;
        } else {
          result[0] += 0;
          result[1] += 53557098;
          result[2] += 0;
          result[3] += 0;
          result[4] += 129992;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 42957863;
          result[1] += 2129465;
          result[2] += 204756;
          result[3] += 1474245;
          result[4] += 5733175;
          result[5] += 1187586;
        } else {
          result[0] += 7507964;
          result[1] += 1131337;
          result[2] += 13061801;
          result[3] += 16352964;
          result[4] += 2571220;
          result[5] += 13061801;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428c0000))) ) ) {
          result[0] += 0;
          result[1] += 31724190;
          result[2] += 0;
          result[3] += 2440322;
          result[4] += 17082256;
          result[5] += 2440322;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2776918;
          result[3] += 5553837;
          result[4] += 0;
          result[5] += 45356335;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12122891;
          result[3] += 41564199;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1309441;
          result[1] += 0;
          result[2] += 26188824;
          result[3] += 7856647;
          result[4] += 0;
          result[5] += 18332177;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17895697;
          result[3] += 0;
          result[4] += 0;
          result[5] += 35791394;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38146091;
          result[3] += 11302545;
          result[4] += 0;
          result[5] += 4238454;
        } else {
          result[0] += 336807;
          result[1] += 0;
          result[2] += 50723186;
          result[3] += 2559735;
          result[4] += 0;
          result[5] += 67361;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 801299;
          result[1] += 0;
          result[2] += 267099;
          result[3] += 0;
          result[4] += 51016091;
          result[5] += 1602599;
        } else {
          result[0] += 0;
          result[1] += 35791394;
          result[2] += 0;
          result[3] += 7158278;
          result[4] += 10737418;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1130254;
          result[4] += 1210987;
          result[5] += 51345849;
        } else {
          result[0] += 5126371;
          result[1] += 2236962;
          result[2] += 372827;
          result[3] += 15658734;
          result[4] += 3914683;
          result[5] += 26377511;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 3880994;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49159264;
          result[5] += 646832;
        } else {
          result[0] += 0;
          result[1] += 51216137;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2358637;
          result[5] += 112316;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 45146905;
          result[1] += 1616831;
          result[2] += 248743;
          result[3] += 1575374;
          result[4] += 3772606;
          result[5] += 1326630;
        } else {
          result[0] += 9314795;
          result[1] += 1862959;
          result[2] += 9314795;
          result[3] += 10500314;
          result[4] += 5250157;
          result[5] += 17444070;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4757084;
          result[3] += 38736255;
          result[4] += 0;
          result[5] += 10193751;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20527417;
          result[3] += 15790320;
          result[4] += 0;
          result[5] += 17369353;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9474192;
          result[3] += 25264513;
          result[4] += 0;
          result[5] += 18948385;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 49941480;
          result[3] += 1248537;
          result[4] += 0;
          result[5] += 2497074;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8947848;
          result[3] += 5965232;
          result[4] += 0;
          result[5] += 38774010;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37167986;
          result[3] += 4129776;
          result[4] += 0;
          result[5] += 12389328;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 2082688;
          result[1] += 0;
          result[2] += 42926531;
          result[3] += 8099345;
          result[4] += 231409;
          result[5] += 347114;
        } else {
          result[0] += 406720;
          result[1] += 0;
          result[2] += 51856849;
          result[3] += 1220161;
          result[4] += 0;
          result[5] += 203360;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51769695;
          result[5] += 1917396;
        } else {
          result[0] += 2876094;
          result[1] += 0;
          result[2] += 1917396;
          result[3] += 8628282;
          result[4] += 23008753;
          result[5] += 17256565;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42780000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 45232431;
          result[1] += 422733;
          result[2] += 0;
          result[3] += 1690932;
          result[4] += 6340995;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 5174659;
          result[2] += 1293664;
          result[3] += 10996151;
          result[4] += 23932799;
          result[5] += 12289816;
        } else {
          result[0] += 113144;
          result[1] += 56572;
          result[2] += 0;
          result[3] += 3054902;
          result[4] += 2941758;
          result[5] += 47520712;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 2294320;
          result[1] += 0;
          result[2] += 1376592;
          result[3] += 14683648;
          result[4] += 4588640;
          result[5] += 30743889;
        } else {
          result[0] += 0;
          result[1] += 426088;
          result[2] += 1065220;
          result[3] += 34087042;
          result[4] += 1278264;
          result[5] += 16830476;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cd0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42940000))) ) ) {
          result[0] += 9061112;
          result[1] += 15856946;
          result[2] += 906111;
          result[3] += 906111;
          result[4] += 26050698;
          result[5] += 906111;
        } else {
          result[0] += 45733448;
          result[1] += 832358;
          result[2] += 369936;
          result[3] += 1664716;
          result[4] += 3514400;
          result[5] += 1572231;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 224632;
          result[1] += 0;
          result[2] += 23586378;
          result[3] += 21564689;
          result[4] += 673896;
          result[5] += 7637494;
        } else {
          result[0] += 1774306;
          result[1] += 171707;
          result[2] += 46074742;
          result[3] += 3834792;
          result[4] += 114471;
          result[5] += 1717071;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ef0000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
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
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 260616;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50559687;
          result[5] += 2866786;
        } else {
          result[0] += 31758560;
          result[1] += 0;
          result[2] += 0;
          result[3] += 756156;
          result[4] += 9830030;
          result[5] += 11342343;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 71203;
          result[3] += 2919324;
          result[4] += 2492106;
          result[5] += 48204457;
        } else {
          result[0] += 128131;
          result[1] += 3843944;
          result[2] += 3331418;
          result[3] += 18066539;
          result[4] += 1921972;
          result[5] += 26395085;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 39213930;
          result[1] += 2538486;
          result[2] += 113663;
          result[3] += 1401850;
          result[4] += 8486879;
          result[5] += 1932280;
        } else {
          result[0] += 10363191;
          result[1] += 575732;
          result[2] += 12953989;
          result[3] += 17559852;
          result[4] += 1439332;
          result[5] += 10794991;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 40265318;
          result[1] += 0;
          result[2] += 13421772;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 6927366;
          result[4] += 3463683;
          result[5] += 43296041;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 2191309;
          result[2] += 13695686;
          result[3] += 30678337;
          result[4] += 1095654;
          result[5] += 6026102;
        } else {
          result[0] += 0;
          result[1] += 2825636;
          result[2] += 32023878;
          result[3] += 2825636;
          result[4] += 5651272;
          result[5] += 10360666;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42e80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33686018;
          result[3] += 12632256;
          result[4] += 0;
          result[5] += 7368816;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 345254;
          result[1] += 0;
          result[2] += 46609371;
          result[3] += 6732464;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52404127;
          result[3] += 1184274;
          result[4] += 0;
          result[5] += 98689;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42300000))) ) ) {
          result[0] += 0;
          result[1] += 20648881;
          result[2] += 0;
          result[3] += 10324440;
          result[4] += 2064888;
          result[5] += 20648881;
        } else {
          result[0] += 441869;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50152138;
          result[5] += 3093083;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1172207;
          result[1] += 293051;
          result[2] += 117220;
          result[3] += 2051362;
          result[4] += 3868283;
          result[5] += 46184964;
        } else {
          result[0] += 5192175;
          result[1] += 0;
          result[2] += 2699931;
          result[3] += 22741727;
          result[4] += 3115305;
          result[5] += 19937952;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 4329604;
          result[1] += 13854733;
          result[2] += 0;
          result[3] += 0;
          result[4] += 34348192;
          result[5] += 1154561;
        } else {
          result[0] += 38379614;
          result[1] += 480669;
          result[2] += 3882330;
          result[3] += 4067203;
          result[4] += 2699144;
          result[5] += 4178127;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 737122;
          result[1] += 52827114;
          result[2] += 0;
          result[3] += 0;
          result[4] += 122853;
          result[5] += 0;
        } else {
          result[0] += 23860929;
          result[1] += 29826161;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42960000))) ) ) {
          result[0] += 9761289;
          result[1] += 29283867;
          result[2] += 4880644;
          result[3] += 0;
          result[4] += 9761289;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11767033;
          result[3] += 9560714;
          result[4] += 2206318;
          result[5] += 30153023;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7158278;
          result[3] += 46528812;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41415756;
          result[3] += 11760029;
          result[4] += 0;
          result[5] += 511305;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 671088;
          result[1] += 0;
          result[2] += 29527900;
          result[3] += 18790481;
          result[4] += 0;
          result[5] += 4697620;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 51941169;
          result[3] += 1745921;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 23860929;
          result[3] += 17895697;
          result[4] += 0;
          result[5] += 11930464;
        } else {
          result[0] += 708740;
          result[1] += 0;
          result[2] += 51649462;
          result[3] += 1240295;
          result[4] += 0;
          result[5] += 88592;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 44739242;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8947848;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53016002;
          result[5] += 671088;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 2062621;
          result[1] += 0;
          result[2] += 117864;
          result[3] += 1709029;
          result[4] += 2710873;
          result[5] += 47086702;
        } else {
          result[0] += 2440322;
          result[1] += 949014;
          result[2] += 271146;
          result[3] += 24403223;
          result[4] += 2169175;
          result[5] += 23454209;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 53546916;
          result[2] += 0;
          result[3] += 0;
          result[4] += 140175;
          result[5] += 0;
        } else {
          result[0] += 4238454;
          result[1] += 33907636;
          result[2] += 0;
          result[3] += 1412818;
          result[4] += 14128181;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 8178892;
          result[1] += 14470348;
          result[2] += 0;
          result[3] += 419430;
          result[4] += 28940697;
          result[5] += 1677721;
        } else {
          result[0] += 37235182;
          result[1] += 436776;
          result[2] += 4367763;
          result[3] += 4804539;
          result[4] += 2802648;
          result[5] += 4040181;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5368709;
          result[3] += 31138512;
          result[4] += 2147483;
          result[5] += 15032385;
        } else {
          result[0] += 0;
          result[1] += 17895697;
          result[2] += 4473924;
          result[3] += 2236962;
          result[4] += 0;
          result[5] += 29080507;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5965232;
          result[3] += 4473924;
          result[4] += 7456540;
          result[5] += 35791394;
        } else {
          result[0] += 2516582;
          result[1] += 0;
          result[2] += 41104179;
          result[3] += 5872025;
          result[4] += 1677721;
          result[5] += 2516582;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15142512;
          result[3] += 30285025;
          result[4] += 0;
          result[5] += 8259552;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 43844457;
          result[3] += 6263493;
          result[4] += 0;
          result[5] += 3579139;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 2009677;
          result[1] += 0;
          result[2] += 43925801;
          result[3] += 7751612;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 162442;
          result[1] += 0;
          result[2] += 52062670;
          result[3] += 1461978;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 490293;
          result[1] += 735439;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51235625;
          result[5] += 1225732;
        } else {
          result[0] += 41607495;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2684354;
          result[5] += 9395240;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 748051;
          result[2] += 172627;
          result[3] += 3049749;
          result[4] += 3797800;
          result[5] += 45918862;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3085465;
          result[3] += 36099940;
          result[4] += 0;
          result[5] += 14501685;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 40168758;
          result[1] += 2742290;
          result[2] += 0;
          result[3] += 965595;
          result[4] += 7647513;
          result[5] += 2162933;
        } else {
          result[0] += 11769242;
          result[1] += 1128557;
          result[2] += 9189682;
          result[3] += 13703912;
          result[4] += 1934669;
          result[5] += 15961027;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 13421772;
          result[2] += 0;
          result[3] += 13421772;
          result[4] += 26843545;
          result[5] += 0;
        } else {
          result[0] += 129992;
          result[1] += 53557098;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 639132;
          result[3] += 10865244;
          result[4] += 3195660;
          result[5] += 38987054;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12218441;
          result[3] += 27769185;
          result[4] += 0;
          result[5] += 13699464;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 26843545;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 51450129;
          result[3] += 0;
          result[4] += 0;
          result[5] += 2236962;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 372827;
          result[1] += 1118481;
          result[2] += 22369621;
          result[3] += 22369621;
          result[4] += 745654;
          result[5] += 6710886;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10737418;
          result[5] += 0;
        } else {
          result[0] += 2140349;
          result[1] += 0;
          result[2] += 48276764;
          result[3] += 2972707;
          result[4] += 178362;
          result[5] += 118908;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 0;
          result[1] += 48806446;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4880644;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 1645581;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51013021;
          result[5] += 1028488;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 1508064;
          result[1] += 100537;
          result[2] += 502688;
          result[3] += 3920967;
          result[4] += 2463171;
          result[5] += 45191661;
        } else {
          result[0] += 2597762;
          result[1] += 1154561;
          result[2] += 865920;
          result[3] += 32904991;
          result[4] += 2020481;
          result[5] += 14143373;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 27350027;
          result[2] += 0;
          result[3] += 7090747;
          result[4] += 18233351;
          result[5] += 1012963;
        } else {
          result[0] += 572662;
          result[1] += 52828097;
          result[2] += 143165;
          result[3] += 0;
          result[4] += 143165;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 42246242;
          result[1] += 1778789;
          result[2] += 161708;
          result[3] += 1131956;
          result[4] += 5902345;
          result[5] += 2466048;
        } else {
          result[0] += 10426831;
          result[1] += 110923;
          result[2] += 14087315;
          result[3] += 15196552;
          result[4] += 1552932;
          result[5] += 12312535;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1167110;
          result[3] += 5835553;
          result[4] += 2334221;
          result[5] += 44350205;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19522578;
          result[3] += 24403223;
          result[4] += 9761289;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13094412;
          result[3] += 17022736;
          result[4] += 0;
          result[5] += 23569942;
        } else {
          result[0] += 3221225;
          result[1] += 1073741;
          result[2] += 41875931;
          result[3] += 5368709;
          result[4] += 0;
          result[5] += 2147483;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42700000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 813440;
          result[1] += 0;
          result[2] += 24403223;
          result[3] += 17082256;
          result[4] += 0;
          result[5] += 11388170;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 5883516;
          result[1] += 2941758;
          result[2] += 30153023;
          result[3] += 11031594;
          result[4] += 0;
          result[5] += 3677198;
        } else {
          result[0] += 284058;
          result[1] += 0;
          result[2] += 50491430;
          result[3] += 2627542;
          result[4] += 0;
          result[5] += 284058;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 225576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51882483;
          result[5] += 1579032;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 72550;
          result[3] += 1958853;
          result[4] += 1813753;
          result[5] += 49841934;
        } else {
          result[0] += 5515026;
          result[1] += 2025927;
          result[2] += 562757;
          result[3] += 16770181;
          result[4] += 3939304;
          result[5] += 24873893;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 117993;
          result[1] += 52979129;
          result[2] += 0;
          result[3] += 0;
          result[4] += 589968;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 43220862;
          result[1] += 1355948;
          result[2] += 0;
          result[3] += 720347;
          result[4] += 6694996;
          result[5] += 1694935;
        } else {
          result[0] += 10288926;
          result[1] += 131909;
          result[2] += 12003747;
          result[3] += 15565299;
          result[4] += 1978639;
          result[5] += 13718568;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 33234865;
          result[2] += 0;
          result[3] += 0;
          result[4] += 20452225;
          result[5] += 0;
        } else {
          result[0] += 1012963;
          result[1] += 0;
          result[2] += 4051855;
          result[3] += 0;
          result[4] += 1012963;
          result[5] += 47609307;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8639302;
          result[3] += 28386278;
          result[4] += 1234186;
          result[5] += 15427325;
        } else {
          result[0] += 2064888;
          result[1] += 0;
          result[2] += 33038209;
          result[3] += 12389328;
          result[4] += 1032444;
          result[5] += 5162220;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 1032444;
          result[1] += 0;
          result[2] += 18583993;
          result[3] += 23746213;
          result[4] += 3097332;
          result[5] += 7227108;
        } else {
          result[0] += 5965232;
          result[1] += 0;
          result[2] += 38177487;
          result[3] += 9544371;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 3660483;
          result[1] += 4880644;
          result[2] += 20742739;
          result[3] += 14641933;
          result[4] += 2440322;
          result[5] += 7320966;
        } else {
          result[0] += 493107;
          result[1] += 0;
          result[2] += 49557314;
          result[3] += 3328476;
          result[4] += 0;
          result[5] += 308192;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42840000))) ) ) {
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 49213166;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4473924;
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
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 3609216;
          result[2] += 0;
          result[3] += 0;
          result[4] += 48047690;
          result[5] += 2030184;
        } else {
          result[0] += 2568968;
          result[1] += 130625;
          result[2] += 653127;
          result[3] += 7750447;
          result[4] += 3483347;
          result[5] += 39100574;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 41011540;
          result[1] += 2739554;
          result[2] += 81777;
          result[3] += 858666;
          result[4] += 7237330;
          result[5] += 1758221;
        } else {
          result[0] += 13552081;
          result[1] += 347489;
          result[2] += 11467145;
          result[3] += 14942038;
          result[4] += 3648637;
          result[5] += 9729699;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 639132;
          result[2] += 1917396;
          result[3] += 4473924;
          result[4] += 15339168;
          result[5] += 31317469;
        } else {
          result[0] += 0;
          result[1] += 443694;
          result[2] += 9761289;
          result[3] += 25290613;
          result[4] += 887389;
          result[5] += 17304103;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42eb0000))) ) ) {
          result[0] += 852176;
          result[1] += 0;
          result[2] += 36217482;
          result[3] += 14486992;
          result[4] += 426088;
          result[5] += 1704352;
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
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 18790481;
          result[3] += 25501368;
          result[4] += 0;
          result[5] += 9395240;
        } else {
          result[0] += 725501;
          result[1] += 0;
          result[2] += 43711449;
          result[3] += 9068765;
          result[4] += 0;
          result[5] += 181375;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 5965232;
          result[1] += 0;
          result[2] += 32808777;
          result[3] += 0;
          result[4] += 0;
          result[5] += 14913080;
        } else {
          result[0] += 186413;
          result[1] += 0;
          result[2] += 52568610;
          result[3] += 932067;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 199580;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52489609;
          result[5] += 997901;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 60526;
          result[2] += 60526;
          result[3] += 2239484;
          result[4] += 2481590;
          result[5] += 48844963;
        } else {
          result[0] += 19135992;
          result[1] += 1063110;
          result[2] += 0;
          result[3] += 6910219;
          result[4] += 3986665;
          result[5] += 22591102;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 39370533;
          result[2] += 0;
          result[3] += 0;
          result[4] += 14316557;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53411065;
          result[2] += 0;
          result[3] += 0;
          result[4] += 138013;
          result[5] += 138013;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 39252539;
          result[1] += 2399203;
          result[2] += 78662;
          result[3] += 1455254;
          result[4] += 6882960;
          result[5] += 3618470;
        } else {
          result[0] += 6731923;
          result[1] += 1009788;
          result[2] += 9845438;
          result[3] += 21626304;
          result[4] += 1598831;
          result[5] += 12874803;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3158064;
          result[4] += 4737096;
          result[5] += 45791930;
        } else {
          result[0] += 0;
          result[1] += 23860929;
          result[2] += 29826161;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6316128;
          result[3] += 37896770;
          result[4] += 0;
          result[5] += 9474192;
        } else {
          result[0] += 0;
          result[1] += 725501;
          result[2] += 35549560;
          result[3] += 11608019;
          result[4] += 0;
          result[5] += 5804009;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35925948;
          result[3] += 16550155;
          result[4] += 0;
          result[5] += 1210987;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 47564879;
          result[3] += 3767515;
          result[4] += 0;
          result[5] += 2354696;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 48539013;
          result[3] += 5148077;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 462819;
          result[1] += 0;
          result[2] += 51650684;
          result[3] += 1481023;
          result[4] += 0;
          result[5] += 92563;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 223696;
          result[1] += 223696;
          result[2] += 447392;
          result[3] += 894784;
          result[4] += 49660559;
          result[5] += 2236962;
        } else {
          result[0] += 0;
          result[1] += 47370962;
          result[2] += 3158064;
          result[3] += 0;
          result[4] += 3158064;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1021962;
          result[4] += 1498878;
          result[5] += 51166250;
        } else {
          result[0] += 4183409;
          result[1] += 1743087;
          result[2] += 581029;
          result[3] += 18476726;
          result[4] += 3369968;
          result[5] += 25332869;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 1003497;
          result[1] += 13547209;
          result[2] += 0;
          result[3] += 2006994;
          result[4] += 32111905;
          result[5] += 5017485;
        } else {
          result[0] += 0;
          result[1] += 51059850;
          result[2] += 0;
          result[3] += 1370734;
          result[4] += 1256506;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 43329973;
          result[1] += 890064;
          result[2] += 566404;
          result[3] += 1577842;
          result[4] += 4814441;
          result[5] += 2508364;
        } else {
          result[0] += 6695387;
          result[1] += 1239886;
          result[2] += 9671115;
          result[3] += 14878639;
          result[4] += 3843648;
          result[5] += 17358412;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4294967;
          result[3] += 27917287;
          result[4] += 0;
          result[5] += 21474836;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 47721858;
          result[3] += 0;
          result[4] += 0;
          result[5] += 5965232;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 0;
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
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 1988410;
          result[1] += 0;
          result[2] += 34797188;
          result[3] += 12427567;
          result[4] += 0;
          result[5] += 4473924;
        } else {
          result[0] += 1336608;
          result[1] += 0;
          result[2] += 48340658;
          result[3] += 3787056;
          result[4] += 0;
          result[5] += 222768;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 8476909;
          result[1] += 0;
          result[2] += 39558909;
          result[3] += 0;
          result[4] += 0;
          result[5] += 5651272;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52318596;
          result[3] += 1263225;
          result[4] += 0;
          result[5] += 105268;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42660000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53047959;
          result[5] += 639132;
        } else {
          result[0] += 12493222;
          result[1] += 675309;
          result[2] += 0;
          result[3] += 4051855;
          result[4] += 20259279;
          result[5] += 16207423;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 339433;
          result[2] += 0;
          result[3] += 3168047;
          result[4] += 3054902;
          result[5] += 47124707;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2346976;
          result[3] += 32270929;
          result[4] += 586744;
          result[5] += 18482441;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 3665383;
          result[1] += 18326918;
          result[2] += 1078054;
          result[3] += 862443;
          result[4] += 26520129;
          result[5] += 3234162;
        } else {
          result[0] += 40771620;
          result[1] += 229268;
          result[2] += 3171550;
          result[3] += 2942281;
          result[4] += 3056916;
          result[5] += 3515453;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 53172107;
          result[2] += 0;
          result[3] += 257492;
          result[4] += 257492;
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
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 858993;
          result[2] += 2147483;
          result[3] += 7730941;
          result[4] += 4724464;
          result[5] += 38225208;
        } else {
          result[0] += 1199711;
          result[1] += 0;
          result[2] += 20695023;
          result[3] += 22494591;
          result[4] += 0;
          result[5] += 9297764;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42960000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6710886;
          result[3] += 46976204;
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42870000))) ) ) {
          result[0] += 34513130;
          result[1] += 0;
          result[2] += 19173961;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 576041;
          result[1] += 0;
          result[2] += 48041882;
          result[3] += 4723542;
          result[4] += 0;
          result[5] += 345625;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53277266;
          result[5] += 409825;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10066329;
          result[3] += 0;
          result[4] += 20132659;
          result[5] += 23488102;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1595352;
          result[4] += 2150258;
          result[5] += 49941480;
        } else {
          result[0] += 4827128;
          result[1] += 941878;
          result[2] += 235469;
          result[3] += 19308515;
          result[4] += 4120719;
          result[5] += 24253378;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42500000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 10737418;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53269834;
          result[2] += 0;
          result[3] += 0;
          result[4] += 417257;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 4643207;
          result[1] += 13349222;
          result[2] += 0;
          result[3] += 290200;
          result[4] += 34824059;
          result[5] += 580400;
        } else {
          result[0] += 38086009;
          result[1] += 588067;
          result[2] += 3113297;
          result[3] += 4531577;
          result[4] += 3113297;
          result[5] += 4254840;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 41297762;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8259552;
          result[5] += 4129776;
        } else {
          result[0] += 0;
          result[1] += 1713417;
          result[2] += 2855696;
          result[3] += 10851646;
          result[4] += 2284557;
          result[5] += 35981773;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1193046;
          result[3] += 38177487;
          result[4] += 0;
          result[5] += 14316557;
        } else {
          result[0] += 1769904;
          result[1] += 0;
          result[2] += 30088369;
          result[3] += 17699041;
          result[4] += 0;
          result[5] += 4129776;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 23342213;
          result[3] += 21007992;
          result[4] += 0;
          result[5] += 9336885;
        } else {
          result[0] += 1747951;
          result[1] += 0;
          result[2] += 42200550;
          result[3] += 8989466;
          result[4] += 0;
          result[5] += 749122;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 381842;
          result[1] += 0;
          result[2] += 50403243;
          result[3] += 2596530;
          result[4] += 0;
          result[5] += 305474;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 825955;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52310499;
          result[5] += 550636;
        } else {
          result[0] += 0;
          result[1] += 2526451;
          result[2] += 0;
          result[3] += 2526451;
          result[4] += 22106449;
          result[5] += 26527739;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1680108;
          result[4] += 763685;
          result[5] += 51243297;
        } else {
          result[0] += 4121849;
          result[1] += 2060924;
          result[2] += 2163971;
          result[3] += 18754415;
          result[4] += 4430988;
          result[5] += 22154941;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 16106127;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37580963;
          result[5] += 0;
        } else {
          result[0] += 252052;
          result[1] += 53056961;
          result[2] += 0;
          result[3] += 126026;
          result[4] += 252052;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 41414670;
          result[1] += 2203716;
          result[2] += 303960;
          result[3] += 949877;
          result[4] += 7333056;
          result[5] += 1481809;
        } else {
          result[0] += 7758973;
          result[1] += 1251447;
          result[2] += 12264184;
          result[3] += 13140197;
          result[4] += 5631513;
          result[5] += 13640776;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
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
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5195524;
          result[3] += 10391049;
          result[4] += 5195524;
          result[5] += 32904991;
        } else {
          result[0] += 0;
          result[1] += 3976821;
          result[2] += 19884107;
          result[3] += 23860929;
          result[4] += 0;
          result[5] += 5965232;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 9336885;
          result[4] += 0;
          result[5] += 8558811;
        } else {
          result[0] += 25264513;
          result[1] += 17369353;
          result[2] += 6316128;
          result[3] += 4737096;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 43763884;
          result[3] += 7887676;
          result[4] += 0;
          result[5] += 2035529;
        } else {
          result[0] += 176893;
          result[1] += 0;
          result[2] += 51299032;
          result[3] += 2122718;
          result[4] += 0;
          result[5] += 88446;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 50704475;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 2982616;
        } else {
          result[0] += 0;
          result[1] += 248551;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50953026;
          result[5] += 2485513;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1142278;
          result[4] += 1305461;
          result[5] += 51239351;
        } else {
          result[0] += 4978257;
          result[1] += 780903;
          result[2] += 195225;
          result[3] += 15032385;
          result[4] += 4783031;
          result[5] += 27917287;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 12739309;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40492806;
          result[5] += 454975;
        } else {
          result[0] += 0;
          result[1] += 52884079;
          result[2] += 0;
          result[3] += 0;
          result[4] += 803012;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 27146862;
          result[1] += 2350705;
          result[2] += 985779;
          result[3] += 6597142;
          result[4] += 6597142;
          result[5] += 10009457;
        } else {
          result[0] += 49431407;
          result[1] += 523776;
          result[2] += 1178497;
          result[3] += 261888;
          result[4] += 2160578;
          result[5] += 130944;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3178840;
          result[3] += 35673659;
          result[4] += 353204;
          result[5] += 14481386;
        } else {
          result[0] += 1677721;
          result[1] += 0;
          result[2] += 25165823;
          result[3] += 20971519;
          result[4] += 3355443;
          result[5] += 2516582;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 825955;
          result[1] += 0;
          result[2] += 23952702;
          result[3] += 17345060;
          result[4] += 825955;
          result[5] += 10737418;
        } else {
          result[0] += 3067833;
          result[1] += 0;
          result[2] += 47551423;
          result[3] += 1533916;
          result[4] += 0;
          result[5] += 1533916;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9761289;
          result[3] += 14641933;
          result[4] += 0;
          result[5] += 29283867;
        } else {
          result[0] += 179555;
          result[1] += 0;
          result[2] += 42554650;
          result[3] += 8439107;
          result[4] += 0;
          result[5] += 2513776;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
          result[0] += 37580963;
          result[1] += 10737418;
          result[2] += 5368709;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 508079;
          result[1] += 0;
          result[2] += 50384572;
          result[3] += 2540398;
          result[4] += 0;
          result[5] += 254039;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 405185;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50445606;
          result[5] += 2836299;
        } else {
          result[0] += 0;
          result[1] += 46017506;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7669584;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1643482;
          result[4] += 1369568;
          result[5] += 50674040;
        } else {
          result[0] += 4129776;
          result[1] += 196656;
          result[2] += 98328;
          result[3] += 18682321;
          result[4] += 3539808;
          result[5] += 27040201;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 39759397;
          result[1] += 4563204;
          result[2] += 79360;
          result[3] += 1111041;
          result[4] += 7499527;
          result[5] += 674560;
        } else {
          result[0] += 8403196;
          result[1] += 700266;
          result[2] += 11787817;
          result[3] += 13305061;
          result[4] += 4435020;
          result[5] += 15055727;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 53254130;
          result[2] += 0;
          result[3] += 0;
          result[4] += 432960;
          result[5] += 0;
        } else {
          result[0] += 42949672;
          result[1] += 5368709;
          result[2] += 5368709;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4880644;
          result[4] += 0;
          result[5] += 48806446;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5195524;
          result[3] += 31173149;
          result[4] += 0;
          result[5] += 17318416;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17895697;
          result[3] += 29826161;
          result[4] += 0;
          result[5] += 5965232;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 45210182;
          result[3] += 8476909;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 2684354;
          result[1] += 0;
          result[2] += 24830279;
          result[3] += 20803747;
          result[4] += 671088;
          result[5] += 4697620;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 48716064;
          result[3] += 1988410;
          result[4] += 0;
          result[5] += 2982616;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42107522;
          result[3] += 10526880;
          result[4] += 0;
          result[5] += 1052688;
        } else {
          result[0] += 409200;
          result[1] += 0;
          result[2] += 51313728;
          result[3] += 1309441;
          result[4] += 0;
          result[5] += 654720;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 676728;
          result[1] += 0;
          result[2] += 0;
          result[3] += 451152;
          result[4] += 49401146;
          result[5] += 3158064;
        } else {
          result[0] += 0;
          result[1] += 20648881;
          result[2] += 0;
          result[3] += 16519104;
          result[4] += 0;
          result[5] += 16519104;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 71966;
          result[2] += 0;
          result[3] += 1439332;
          result[4] += 3310464;
          result[5] += 48865328;
        } else {
          result[0] += 4299161;
          result[1] += 314572;
          result[2] += 524287;
          result[3] += 19503513;
          result[4] += 5138022;
          result[5] += 23907532;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42420000))) ) ) {
          result[0] += 130944;
          result[1] += 53163314;
          result[2] += 0;
          result[3] += 0;
          result[4] += 392832;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 22156577;
          result[2] += 0;
          result[3] += 852176;
          result[4] += 30678337;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 44242139;
          result[1] += 1946985;
          result[2] += 372827;
          result[3] += 1657008;
          result[4] += 3976821;
          result[5] += 1491308;
        } else {
          result[0] += 7183484;
          result[1] += 2394494;
          result[2] += 16005306;
          result[3] += 12224525;
          result[4] += 3654755;
          result[5] += 12224525;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42be0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 45427538;
          result[5] += 8259552;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6391320;
          result[3] += 14060904;
          result[4] += 1278264;
          result[5] += 31956601;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14128181;
          result[3] += 32965757;
          result[4] += 0;
          result[5] += 6593151;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 47934902;
          result[3] += 1917396;
          result[4] += 0;
          result[5] += 3834792;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16106127;
          result[3] += 37580963;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1318630;
          result[1] += 0;
          result[2] += 40877539;
          result[3] += 9607163;
          result[4] += 376751;
          result[5] += 1507006;
        } else {
          result[0] += 173463;
          result[1] += 0;
          result[2] += 52039183;
          result[3] += 1127515;
          result[4] += 173463;
          result[5] += 173463;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51867189;
          result[5] += 1819901;
        } else {
          result[0] += 1278264;
          result[1] += 5113056;
          result[2] += 0;
          result[3] += 0;
          result[4] += 12782640;
          result[5] += 34513130;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 2035268;
          result[1] += 165021;
          result[2] += 0;
          result[3] += 3520464;
          result[4] += 3520464;
          result[5] += 44445870;
        } else {
          result[0] += 199580;
          result[1] += 0;
          result[2] += 199580;
          result[3] += 27941237;
          result[4] += 4989506;
          result[5] += 20357186;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0;
          result[1] += 11784971;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41902119;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 52792306;
          result[2] += 0;
          result[3] += 0;
          result[4] += 894784;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 43559070;
          result[1] += 1244544;
          result[2] += 214576;
          result[3] += 1716613;
          result[4] += 6008147;
          result[5] += 944137;
        } else {
          result[0] += 7753496;
          result[1] += 1174772;
          result[2] += 13627357;
          result[3] += 12805017;
          result[4] += 4229180;
          result[5] += 14097266;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42960000))) ) ) {
          result[0] += 0;
          result[1] += 2147483;
          result[2] += 4294967;
          result[3] += 4294967;
          result[4] += 4294967;
          result[5] += 38654705;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19108964;
          result[3] += 27298520;
          result[4] += 0;
          result[5] += 7279605;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5368709;
          result[3] += 0;
          result[4] += 0;
          result[5] += 48318382;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42608802;
          result[3] += 7669584;
          result[4] += 0;
          result[5] += 3408704;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 4473924;
          result[1] += 0;
          result[2] += 14913080;
          result[3] += 5965232;
          result[4] += 4473924;
          result[5] += 23860929;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 860582;
          result[1] += 0;
          result[2] += 48986988;
          result[3] += 3574726;
          result[4] += 132397;
          result[5] += 132397;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1559376;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 47449586;
          result[5] += 4678128;
        } else {
          result[0] += 19579997;
          result[1] += 16421933;
          result[2] += 0;
          result[3] += 1894838;
          result[4] += 14527095;
          result[5] += 1263225;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 203360;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4372244;
          result[4] += 4931484;
          result[5] += 44180002;
        } else {
          result[0] += 1278264;
          result[1] += 958698;
          result[2] += 958698;
          result[3] += 34832696;
          result[4] += 958698;
          result[5] += 14700036;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 20132659;
          result[2] += 0;
          result[3] += 0;
          result[4] += 33554431;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53450062;
          result[2] += 0;
          result[3] += 0;
          result[4] += 237029;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 41840271;
          result[1] += 2020694;
          result[2] += 79242;
          result[3] += 871672;
          result[4] += 6894135;
          result[5] += 1981073;
        } else {
          result[0] += 8000883;
          result[1] += 0;
          result[2] += 17277271;
          result[3] += 13450761;
          result[4] += 2551006;
          result[5] += 12407167;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1917396;
          result[3] += 1917396;
          result[4] += 5752188;
          result[5] += 44100110;
        } else {
          result[0] += 11504376;
          result[1] += 15339168;
          result[2] += 7669584;
          result[3] += 0;
          result[4] += 15339168;
          result[5] += 3834792;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 1126302;
          result[1] += 750868;
          result[2] += 19522578;
          result[3] += 22150618;
          result[4] += 1126302;
          result[5] += 9010420;
        } else {
          result[0] += 5553837;
          result[1] += 3702558;
          result[2] += 43505056;
          result[3] += 925639;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4473924;
          result[3] += 31317469;
          result[4] += 0;
          result[5] += 17895697;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40265318;
          result[3] += 8947848;
          result[4] += 0;
          result[5] += 4473924;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 517881;
          result[1] += 0;
          result[2] += 45573607;
          result[3] += 7077719;
          result[4] += 0;
          result[5] += 517881;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53302696;
          result[3] += 384394;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 691250;
          result[1] += 1152083;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50000423;
          result[5] += 1843333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 24778657;
          result[5] += 28908433;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 797333;
          result[1] += 265777;
          result[2] += 66444;
          result[3] += 2259110;
          result[4] += 1661110;
          result[5] += 48637315;
        } else {
          result[0] += 2735647;
          result[1] += 4103471;
          result[2] += 1538801;
          result[3] += 22056161;
          result[4] += 2051735;
          result[5] += 21201271;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 8259552;
          result[2] += 0;
          result[3] += 0;
          result[4] += 45427538;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53328380;
          result[2] += 0;
          result[3] += 0;
          result[4] += 358711;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 40180430;
          result[1] += 2376870;
          result[2] += 226368;
          result[3] += 1660036;
          result[4] += 6111952;
          result[5] += 3131432;
        } else {
          result[0] += 8534075;
          result[1] += 0;
          result[2] += 7137590;
          result[3] += 15671665;
          result[4] += 2792970;
          result[5] += 19550790;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8476909;
          result[3] += 11302545;
          result[4] += 0;
          result[5] += 33907636;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13634816;
          result[3] += 33234865;
          result[4] += 0;
          result[5] += 6817408;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ee0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 44430696;
          result[3] += 5553837;
          result[4] += 0;
          result[5] += 3702558;
        } else {
          result[0] += 46017506;
          result[1] += 0;
          result[2] += 7669584;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19173961;
          result[3] += 19173961;
          result[4] += 0;
          result[5] += 15339168;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 43561894;
          result[3] += 9889727;
          result[4] += 0;
          result[5] += 235469;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ef0000))) ) ) {
          result[0] += 441505;
          result[1] += 0;
          result[2] += 50684852;
          result[3] += 2207528;
          result[4] += 0;
          result[5] += 353204;
        } else {
          result[0] += 7856647;
          result[1] += 0;
          result[2] += 45175723;
          result[3] += 654720;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 1118481;
          result[1] += 559240;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50611268;
          result[5] += 1398101;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 22106449;
          result[5] += 31580641;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1412818;
          result[4] += 21192272;
          result[5] += 31082000;
        } else {
          result[0] += 48731359;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4955731;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
          result[0] += 0;
          result[1] += 58419;
          result[2] += 0;
          result[3] += 1869409;
          result[4] += 3855656;
          result[5] += 47903606;
        } else {
          result[0] += 0;
          result[1] += 2618882;
          result[2] += 0;
          result[3] += 9166088;
          result[4] += 31426589;
          result[5] += 10475529;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 1220161;
          result[2] += 1626881;
          result[3] += 15048654;
          result[4] += 1626881;
          result[5] += 34164512;
        } else {
          result[0] += 0;
          result[1] += 221847;
          result[2] += 887389;
          result[3] += 37935919;
          result[4] += 2218474;
          result[5] += 12423459;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 53093207;
          result[2] += 0;
          result[3] += 0;
          result[4] += 593883;
          result[5] += 0;
        } else {
          result[0] += 1376592;
          result[1] += 16060240;
          result[2] += 4588640;
          result[3] += 1376592;
          result[4] += 27990705;
          result[5] += 2294320;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 46079804;
          result[1] += 2907243;
          result[2] += 48454;
          result[3] += 532994;
          result[4] += 3924778;
          result[5] += 193816;
        } else {
          result[0] += 13996245;
          result[1] += 208899;
          result[2] += 6684774;
          result[3] += 14831842;
          result[4] += 3342387;
          result[5] += 14622943;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11701032;
          result[3] += 25466953;
          result[4] += 3441480;
          result[5] += 13077624;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38610579;
          result[3] += 13605632;
          result[4] += 0;
          result[5] += 1470879;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 8022209;
          result[1] += 6170930;
          result[2] += 25917906;
          result[3] += 1851279;
          result[4] += 2468372;
          result[5] += 9256395;
        } else {
          result[0] += 814389;
          result[1] += 187936;
          result[2] += 48675460;
          result[3] += 3821368;
          result[4] += 0;
          result[5] += 187936;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52893685;
          result[5] += 793405;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1789569;
          result[4] += 28633115;
          result[5] += 23264406;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 720632;
          result[1] += 540474;
          result[2] += 0;
          result[3] += 1741527;
          result[4] += 1801580;
          result[5] += 48882877;
        } else {
          result[0] += 4620610;
          result[1] += 5720755;
          result[2] += 0;
          result[3] += 22222935;
          result[4] += 2200290;
          result[5] += 18922499;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 16179671;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37507419;
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 44321529;
          result[1] += 659546;
          result[2] += 0;
          result[3] += 1714821;
          result[4] += 5891949;
          result[5] += 1099244;
        } else {
          result[0] += 9365561;
          result[1] += 1319093;
          result[2] += 9101742;
          result[3] += 12399475;
          result[4] += 8046468;
          result[5] += 13454750;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 3545373;
          result[2] += 3038891;
          result[3] += 26843545;
          result[4] += 1519445;
          result[5] += 18739833;
        } else {
          result[0] += 1206451;
          result[1] += 3016128;
          result[2] += 25335481;
          result[3] += 9651611;
          result[4] += 1206451;
          result[5] += 13270966;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 51352869;
          result[1] += 0;
          result[2] += 2334221;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 25977624;
          result[3] += 21648020;
          result[4] += 0;
          result[5] += 6061445;
        } else {
          result[0] += 630264;
          result[1] += 0;
          result[2] += 48874160;
          result[3] += 4125368;
          result[4] += 0;
          result[5] += 57296;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 258111;
          result[1] += 0;
          result[2] += 0;
          result[3] += 258111;
          result[4] += 52396536;
          result[5] += 774333;
        } else {
          result[0] += 0;
          result[1] += 25769803;
          result[2] += 0;
          result[3] += 10737418;
          result[4] += 0;
          result[5] += 17179869;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 226846;
          result[2] += 151231;
          result[3] += 1512312;
          result[4] += 1739159;
          result[5] += 50057541;
        } else {
          result[0] += 3545373;
          result[1] += 607778;
          result[2] += 810371;
          result[3] += 15397052;
          result[4] += 6786858;
          result[5] += 26539656;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 15339168;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38347922;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53565627;
          result[2] += 0;
          result[3] += 0;
          result[4] += 121464;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 40956359;
          result[1] += 2063390;
          result[2] += 155727;
          result[3] += 661842;
          result[4] += 7397061;
          result[5] += 2452709;
        } else {
          result[0] += 9761289;
          result[1] += 1975499;
          result[2] += 8599231;
          result[3] += 15803992;
          result[4] += 2905145;
          result[5] += 14641933;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3355443;
          result[3] += 10066329;
          result[4] += 0;
          result[5] += 40265318;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13684944;
          result[3] += 33159673;
          result[4] += 0;
          result[5] += 6842472;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42df0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41247399;
          result[3] += 8511368;
          result[4] += 654720;
          result[5] += 3273603;
        } else {
          result[0] += 26843545;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42990000))) ) ) {
          result[0] += 40265318;
          result[1] += 0;
          result[2] += 13421772;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1268199;
          result[1] += 0;
          result[2] += 44598331;
          result[3] += 7186461;
          result[4] += 0;
          result[5] += 634099;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 175448;
          result[1] += 0;
          result[2] += 51230819;
          result[3] += 2280824;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53497384;
          result[3] += 189707;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 239674;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52249044;
          result[5] += 1198372;
        } else {
          result[0] += 0;
          result[1] += 8589934;
          result[2] += 0;
          result[3] += 12884901;
          result[4] += 12884901;
          result[5] += 19327352;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1940497;
          result[1] += 129366;
          result[2] += 64683;
          result[3] += 2263913;
          result[4] += 2975429;
          result[5] += 46313201;
        } else {
          result[0] += 3695062;
          result[1] += 217356;
          result[2] += 1086783;
          result[3] += 19779454;
          result[4] += 5433916;
          result[5] += 23474517;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 30488965;
          result[2] += 0;
          result[3] += 0;
          result[4] += 23198125;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53564797;
          result[2] += 0;
          result[3] += 0;
          result[4] += 122294;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 44203068;
          result[1] += 1754753;
          result[2] += 626697;
          result[3] += 1169835;
          result[4] += 5138920;
          result[5] += 793816;
        } else {
          result[0] += 13286199;
          result[1] += 271146;
          result[2] += 12472758;
          result[3] += 9761289;
          result[4] += 3796056;
          result[5] += 14099640;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 7669584;
          result[4] += 0;
          result[5] += 46017506;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1451002;
          result[3] += 49334083;
          result[4] += 0;
          result[5] += 2902004;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2684354;
          result[3] += 14495514;
          result[4] += 536870;
          result[5] += 35970351;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30117148;
          result[3] += 7856647;
          result[4] += 0;
          result[5] += 15713294;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8134407;
          result[3] += 35791394;
          result[4] += 3253763;
          result[5] += 6507526;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34824059;
          result[3] += 4353007;
          result[4] += 14510024;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          result[0] += 13421772;
          result[1] += 20132659;
          result[2] += 13421772;
          result[3] += 2236962;
          result[4] += 0;
          result[5] += 4473924;
        } else {
          result[0] += 497614;
          result[1] += 0;
          result[2] += 48545073;
          result[3] += 3925626;
          result[4] += 0;
          result[5] += 718776;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1838599;
          result[1] += 367719;
          result[2] += 183859;
          result[3] += 0;
          result[4] += 45781115;
          result[5] += 5515797;
        } else {
          result[0] += 20580051;
          result[1] += 21474836;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9842633;
          result[5] += 1789569;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1391281;
          result[4] += 1882321;
          result[5] += 50413488;
        } else {
          result[0] += 326034;
          result[1] += 0;
          result[2] += 217356;
          result[3] += 20214167;
          result[4] += 5433916;
          result[5] += 27495615;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 9166088;
          result[2] += 0;
          result[3] += 0;
          result[4] += 44521002;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53307229;
          result[2] += 0;
          result[3] += 0;
          result[4] += 379861;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 44051993;
          result[1] += 1020667;
          result[2] += 122480;
          result[3] += 1224800;
          result[4] += 4572588;
          result[5] += 2694561;
        } else {
          result[0] += 7164822;
          result[1] += 981482;
          result[2] += 14525940;
          result[3] += 16292609;
          result[4] += 2551854;
          result[5] += 12170382;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6194664;
          result[3] += 0;
          result[4] += 10324440;
          result[5] += 37167986;
        } else {
          result[0] += 0;
          result[1] += 466844;
          result[2] += 18673770;
          result[3] += 29878033;
          result[4] += 0;
          result[5] += 4668442;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 43141412;
          result[3] += 3834792;
          result[4] += 1917396;
          result[5] += 4793490;
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
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 24778657;
          result[2] += 16519104;
          result[3] += 4129776;
          result[4] += 8259552;
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42645065;
          result[3] += 9138228;
          result[4] += 0;
          result[5] += 1903797;
        } else {
          result[0] += 168298;
          result[1] += 0;
          result[2] += 51583365;
          result[3] += 1851279;
          result[4] += 0;
          result[5] += 84149;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 41485479;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9761289;
          result[5] += 2440322;
        } else {
          result[0] += 0;
          result[1] += 772476;
          result[2] += 0;
          result[3] += 0;
          result[4] += 47700401;
          result[5] += 5214213;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 224007;
          result[3] += 1344044;
          result[4] += 2688088;
          result[5] += 49430951;
        } else {
          result[0] += 6971173;
          result[1] += 995881;
          result[2] += 1448555;
          result[3] += 17382666;
          result[4] += 5613152;
          result[5] += 21275660;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 52895635;
          result[2] += 0;
          result[3] += 0;
          result[4] += 791455;
          result[5] += 0;
        } else {
          result[0] += 1894838;
          result[1] += 12632256;
          result[2] += 631612;
          result[3] += 1263225;
          result[4] += 36001931;
          result[5] += 1263225;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 45104460;
          result[1] += 2373918;
          result[2] += 136956;
          result[3] += 684784;
          result[4] += 3606530;
          result[5] += 1780439;
        } else {
          result[0] += 16486587;
          result[1] += 0;
          result[2] += 5918262;
          result[3] += 14372922;
          result[4] += 4438696;
          result[5] += 12470623;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2126221;
          result[3] += 34019542;
          result[4] += 531555;
          result[5] += 17009771;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4260880;
          result[3] += 12782640;
          result[4] += 2556528;
          result[5] += 34087042;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20878313;
          result[3] += 17895697;
          result[4] += 0;
          result[5] += 14913080;
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
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 4353007;
          result[2] += 2902004;
          result[3] += 31922054;
          result[4] += 0;
          result[5] += 14510024;
        } else {
          result[0] += 0;
          result[1] += 1234186;
          result[2] += 34557208;
          result[3] += 11107674;
          result[4] += 1851279;
          result[5] += 4936744;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 2218474;
          result[1] += 887389;
          result[2] += 42003123;
          result[3] += 7099119;
          result[4] += 887389;
          result[5] += 591593;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52014870;
          result[3] += 1496197;
          result[4] += 0;
          result[5] += 176023;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 238609;
          result[4] += 45812984;
          result[5] += 7635497;
        } else {
          result[0] += 28355858;
          result[1] += 5293093;
          result[2] += 0;
          result[3] += 1134234;
          result[4] += 18147749;
          result[5] += 756156;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 123418;
          result[2] += 123418;
          result[3] += 1851279;
          result[4] += 3887685;
          result[5] += 47701289;
        } else {
          result[0] += 770628;
          result[1] += 2311884;
          result[2] += 128438;
          result[3] += 22219776;
          result[4] += 2697198;
          result[5] += 25559165;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 6710886;
          result[2] += 0;
          result[3] += 0;
          result[4] += 46976204;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 52698985;
          result[2] += 109789;
          result[3] += 0;
          result[4] += 878316;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42dd0000))) ) ) {
          result[0] += 27421714;
          result[1] += 2257611;
          result[2] += 4790540;
          result[3] += 6497514;
          result[4] += 8369679;
          result[5] += 4350030;
        } else {
          result[0] += 50016908;
          result[1] += 597471;
          result[2] += 597471;
          result[3] += 426765;
          result[4] += 1536355;
          result[5] += 512118;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1952257;
          result[3] += 36116770;
          result[4] += 976128;
          result[5] += 14641933;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27350027;
          result[3] += 20259279;
          result[4] += 0;
          result[5] += 6077783;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
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
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21007992;
          result[3] += 32679098;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 43203813;
          result[3] += 10483278;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24403223;
          result[3] += 0;
          result[4] += 0;
          result[5] += 29283867;
        } else {
          result[0] += 730436;
          result[1] += 0;
          result[2] += 50765344;
          result[3] += 1899135;
          result[4] += 0;
          result[5] += 292174;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 219130;
          result[1] += 2191309;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49304471;
          result[5] += 1972178;
        } else {
          result[0] += 35791394;
          result[1] += 852176;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2556528;
          result[5] += 14486992;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 240031;
          result[3] += 1440190;
          result[4] += 1760232;
          result[5] += 50246636;
        } else {
          result[0] += 288640;
          result[1] += 865920;
          result[2] += 2405335;
          result[3] += 17510843;
          result[4] += 5484165;
          result[5] += 27132185;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 2556528;
          result[1] += 35791394;
          result[2] += 0;
          result[3] += 2556528;
          result[4] += 12782640;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 42113826;
          result[1] += 1687767;
          result[2] += 200924;
          result[3] += 1125178;
          result[4] += 6429591;
          result[5] += 2129802;
        } else {
          result[0] += 9227468;
          result[1] += 3235605;
          result[2] += 12463074;
          result[3] += 14859819;
          result[4] += 3475280;
          result[5] += 10425841;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17895697;
          result[3] += 0;
          result[4] += 35791394;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2684354;
          result[3] += 2684354;
          result[4] += 0;
          result[5] += 48318382;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7669584;
          result[3] += 39881839;
          result[4] += 0;
          result[5] += 6135667;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34565661;
          result[3] += 5148077;
          result[4] += 0;
          result[5] += 13973352;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1245319;
          result[1] += 276737;
          result[2] += 42479219;
          result[3] += 8163758;
          result[4] += 0;
          result[5] += 1522056;
        } else {
          result[0] += 103046;
          result[1] += 0;
          result[2] += 52141397;
          result[3] += 1339601;
          result[4] += 0;
          result[5] += 103046;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 613566;
          result[1] += 1073741;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49085340;
          result[5] += 2914442;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 28908433;
          result[2] += 0;
          result[3] += 0;
          result[4] += 24778657;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 52963220;
          result[2] += 0;
          result[3] += 0;
          result[4] += 723870;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1122608;
          result[1] += 198107;
          result[2] += 66035;
          result[3] += 1782966;
          result[4] += 2377288;
          result[5] += 48140085;
        } else {
          result[0] += 6300685;
          result[1] += 393792;
          result[2] += 2100228;
          result[3] += 25727799;
          result[4] += 2887814;
          result[5] += 16276770;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 45941632;
          result[1] += 973714;
          result[2] += 221298;
          result[3] += 1726130;
          result[4] += 3496521;
          result[5] += 1327792;
        } else {
          result[0] += 6942296;
          result[1] += 925639;
          result[2] += 10066329;
          result[3] += 14694527;
          result[4] += 4049672;
          result[5] += 17008625;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0;
          result[1] += 21474836;
          result[2] += 3579139;
          result[3] += 10737418;
          result[4] += 14316557;
          result[5] += 3579139;
        } else {
          result[0] += 2825636;
          result[1] += 2825636;
          result[2] += 4238454;
          result[3] += 2825636;
          result[4] += 0;
          result[5] += 40971727;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 4260880;
          result[1] += 852176;
          result[2] += 11078288;
          result[3] += 30678337;
          result[4] += 0;
          result[5] += 6817408;
        } else {
          result[0] += 1142278;
          result[1] += 0;
          result[2] += 38837470;
          result[3] += 10280506;
          result[4] += 0;
          result[5] += 3426835;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 2038750;
          result[1] += 0;
          result[2] += 26503753;
          result[3] += 24465003;
          result[4] += 0;
          result[5] += 679583;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 47462500;
          result[3] += 4668442;
          result[4] += 0;
          result[5] += 1556147;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1897070;
          result[1] += 0;
          result[2] += 46098809;
          result[3] += 5691211;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 226050;
          result[1] += 0;
          result[2] += 52556836;
          result[3] += 904203;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
          result[0] += 511305;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53175785;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 45517316;
          result[5] += 8169774;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42620000))) ) ) {
          result[0] += 48724418;
          result[1] += 0;
          result[2] += 2255760;
          result[3] += 0;
          result[4] += 2706912;
          result[5] += 0;
        } else {
          result[0] += 198693;
          result[1] += 596081;
          result[2] += 278171;
          result[3] += 9656523;
          result[4] += 3059886;
          result[5] += 39897734;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
          result[0] += 40898518;
          result[1] += 3653877;
          result[2] += 581298;
          result[3] += 1038033;
          result[4] += 6352764;
          result[5] += 1162597;
        } else {
          result[0] += 8197729;
          result[1] += 2250357;
          result[2] += 17199157;
          result[3] += 10769566;
          result[4] += 5625892;
          result[5] += 9644387;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 129366;
          result[1] += 53557724;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 13421772;
          result[1] += 40265318;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42d50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5752188;
          result[4] += 0;
          result[5] += 47934902;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17895697;
          result[3] += 35791394;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4129776;
          result[3] += 20648881;
          result[4] += 0;
          result[5] += 28908433;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32904991;
          result[3] += 17318416;
          result[4] += 0;
          result[5] += 3463683;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12201611;
          result[3] += 24403223;
          result[4] += 7320966;
          result[5] += 9761289;
        } else {
          result[0] += 1084587;
          result[1] += 723058;
          result[2] += 43564272;
          result[3] += 7411349;
          result[4] += 0;
          result[5] += 903823;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42dc0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 49692515;
          result[3] += 3834792;
          result[4] += 0;
          result[5] += 159783;
        } else {
          result[0] += 436480;
          result[1] += 0;
          result[2] += 53032370;
          result[3] += 218240;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42810000))) ) ) {
          result[0] += 565127;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51426582;
          result[5] += 1695381;
        } else {
          result[0] += 48914905;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3579139;
          result[5] += 1193046;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2334221;
          result[3] += 3890368;
          result[4] += 18673770;
          result[5] += 28788730;
        } else {
          result[0] += 0;
          result[1] += 35280088;
          result[2] += 0;
          result[3] += 18407002;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42660000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 45583379;
          result[5] += 8103711;
        } else {
          result[0] += 395589;
          result[1] += 169538;
          result[2] += 452101;
          result[3] += 3842865;
          result[4] += 1582356;
          result[5] += 47244640;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2064888;
          result[4] += 0;
          result[5] += 51622203;
        } else {
          result[0] += 565127;
          result[1] += 1412818;
          result[2] += 3108200;
          result[3] += 35603018;
          result[4] += 565127;
          result[5] += 12432800;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 14559211;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39127880;
          result[5] += 0;
        } else {
          result[0] += 519971;
          result[1] += 52387161;
          result[2] += 0;
          result[3] += 0;
          result[4] += 779957;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 43192184;
          result[1] += 1087121;
          result[2] += 41812;
          result[3] += 1463433;
          result[4] += 5853732;
          result[5] += 2048806;
        } else {
          result[0] += 10737418;
          result[1] += 2684354;
          result[2] += 6878658;
          result[3] += 12079595;
          result[4] += 4194303;
          result[5] += 17112760;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 492542;
          result[1] += 3940336;
          result[2] += 4432879;
          result[3] += 27089816;
          result[4] += 3447794;
          result[5] += 14283721;
        } else {
          result[0] += 1491308;
          result[1] += 0;
          result[2] += 30820367;
          result[3] += 15410183;
          result[4] += 0;
          result[5] += 5965232;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 24778657;
          result[1] += 0;
          result[2] += 24778657;
          result[3] += 2064888;
          result[4] += 2064888;
          result[5] += 0;
        } else {
          result[0] += 232663;
          result[1] += 0;
          result[2] += 49208319;
          result[3] += 3897112;
          result[4] += 0;
          result[5] += 348995;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 218240;
          result[1] += 0;
          result[2] += 1091201;
          result[3] += 0;
          result[4] += 51068208;
          result[5] += 1309441;
        } else {
          result[0] += 23696371;
          result[1] += 1110767;
          result[2] += 0;
          result[3] += 4443069;
          result[4] += 8886139;
          result[5] += 15550743;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 60526;
          result[1] += 181579;
          result[2] += 0;
          result[3] += 2723696;
          result[4] += 2844750;
          result[5] += 47876537;
        } else {
          result[0] += 0;
          result[1] += 344148;
          result[2] += 516222;
          result[3] += 26671471;
          result[4] += 1548666;
          result[5] += 24606583;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 24509324;
          result[2] += 0;
          result[3] += 2334221;
          result[4] += 26843545;
          result[5] += 0;
        } else {
          result[0] += 332771;
          result[1] += 53132472;
          result[2] += 0;
          result[3] += 0;
          result[4] += 221847;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 43219231;
          result[1] += 2515880;
          result[2] += 0;
          result[3] += 718822;
          result[4] += 6604186;
          result[5] += 628970;
        } else {
          result[0] += 8317718;
          result[1] += 756156;
          result[2] += 18363793;
          result[3] += 13070700;
          result[4] += 1728357;
          result[5] += 11450365;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42f90000))) ) ) {
          result[0] += 0;
          result[1] += 2928386;
          result[2] += 2928386;
          result[3] += 0;
          result[4] += 17570320;
          result[5] += 30259996;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5965232;
          result[3] += 31317469;
          result[4] += 0;
          result[5] += 16404388;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36733272;
          result[3] += 14128181;
          result[4] += 0;
          result[5] += 2825636;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42db0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 0;
          result[4] += 0;
          result[5] += 17895697;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1774779;
          result[1] += 0;
          result[2] += 44369496;
          result[3] += 7099119;
          result[4] += 221847;
          result[5] += 221847;
        } else {
          result[0] += 90995;
          result[1] += 0;
          result[2] += 52413160;
          result[3] += 1091940;
          result[4] += 0;
          result[5] += 90995;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 208089;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49941480;
          result[5] += 3537521;
        } else {
          result[0] += 0;
          result[1] += 48806446;
          result[2] += 0;
          result[3] += 4880644;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 2617630;
          result[1] += 205304;
          result[2] += 51326;
          result[3] += 2463652;
          result[4] += 2822935;
          result[5] += 45526242;
        } else {
          result[0] += 0;
          result[1] += 225576;
          result[2] += 0;
          result[3] += 31580641;
          result[4] += 3158064;
          result[5] += 18722809;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 53164589;
          result[2] += 0;
          result[3] += 0;
          result[4] += 522502;
          result[5] += 0;
        } else {
          result[0] += 2133261;
          result[1] += 19554900;
          result[2] += 711087;
          result[3] += 711087;
          result[4] += 29510122;
          result[5] += 1066630;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 44022563;
          result[1] += 1745575;
          result[2] += 340600;
          result[3] += 1404975;
          result[4] += 4640676;
          result[5] += 1532700;
        } else {
          result[0] += 11302545;
          result[1] += 3158064;
          result[2] += 9972834;
          result[3] += 12798470;
          result[4] += 3989133;
          result[5] += 12466042;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 14641933;
          result[4] += 2440322;
          result[5] += 36604834;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8027976;
          result[3] += 33617150;
          result[4] += 0;
          result[5] += 12041964;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41485479;
          result[3] += 3660483;
          result[4] += 0;
          result[5] += 8541128;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ef0000))) ) ) {
          result[0] += 287096;
          result[1] += 0;
          result[2] += 43064511;
          result[3] += 8469353;
          result[4] += 0;
          result[5] += 1866128;
        } else {
          result[0] += 19272289;
          result[1] += 0;
          result[2] += 31661617;
          result[3] += 2753184;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 100349;
          result[1] += 0;
          result[2] += 51981146;
          result[3] += 1304546;
          result[4] += 0;
          result[5] += 301049;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42780000))) ) ) {
          result[0] += 222768;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50568339;
          result[5] += 2895984;
        } else {
          result[0] += 25655778;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 20429601;
          result[5] += 7601712;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 230912;
          result[2] += 0;
          result[3] += 3001858;
          result[4] += 3521411;
          result[5] += 46932908;
        } else {
          result[0] += 0;
          result[1] += 652069;
          result[2] += 1521496;
          result[3] += 28908433;
          result[4] += 1086783;
          result[5] += 21518307;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42460000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10737418;
          result[5] += 0;
        } else {
          result[0] += 142029;
          result[1] += 53545061;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 24660393;
          result[1] += 4181812;
          result[2] += 1906414;
          result[3] += 6088226;
          result[4] += 10823514;
          result[5] += 6026729;
        } else {
          result[0] += 47688947;
          result[1] += 2739892;
          result[2] += 1629125;
          result[3] += 0;
          result[4] += 1406972;
          result[5] += 222153;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2284557;
          result[3] += 11422785;
          result[4] += 1713417;
          result[5] += 38266330;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 2284557;
          result[2] += 3426835;
          result[3] += 45691141;
          result[4] += 0;
          result[5] += 2284557;
        } else {
          result[0] += 278171;
          result[1] += 2225371;
          result[2] += 24757259;
          result[3] += 16690287;
          result[4] += 278171;
          result[5] += 9457829;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42660000))) ) ) {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
          result[0] += 43620761;
          result[1] += 0;
          result[2] += 6710886;
          result[3] += 0;
          result[4] += 3355443;
          result[5] += 0;
        } else {
          result[0] += 1157049;
          result[1] += 0;
          result[2] += 47265467;
          result[3] += 4743902;
          result[4] += 0;
          result[5] += 520672;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42870000))) ) ) {
          result[0] += 217356;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51948238;
          result[5] += 1521496;
        } else {
          result[0] += 0;
          result[1] += 37580963;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8053063;
          result[5] += 8053063;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 1234861;
          result[1] += 823241;
          result[2] += 0;
          result[3] += 2293314;
          result[4] += 2175709;
          result[5] += 47159964;
        } else {
          result[0] += 1012963;
          result[1] += 0;
          result[2] += 0;
          result[3] += 36466703;
          result[4] += 0;
          result[5] += 16207423;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 3579139;
          result[2] += 0;
          result[3] += 0;
          result[4] += 48914905;
          result[5] += 1193046;
        } else {
          result[0] += 0;
          result[1] += 53083865;
          result[2] += 0;
          result[3] += 0;
          result[4] += 603225;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 43760044;
          result[1] += 1580223;
          result[2] += 81037;
          result[3] += 1215556;
          result[4] += 5307931;
          result[5] += 1742298;
        } else {
          result[0] += 10956549;
          result[1] += 3130442;
          result[2] += 8921761;
          result[3] += 11895682;
          result[4] += 2973920;
          result[5] += 15808735;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42dc0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5688698;
          result[3] += 16355007;
          result[4] += 711087;
          result[5] += 30932297;
        } else {
          result[0] += 0;
          result[1] += 20878313;
          result[2] += 11930464;
          result[3] += 5965232;
          result[4] += 14913080;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
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
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
          result[0] += 31317469;
          result[1] += 0;
          result[2] += 4473924;
          result[3] += 2236962;
          result[4] += 0;
          result[5] += 15658734;
        } else {
          result[0] += 1871445;
          result[1] += 0;
          result[2] += 37428908;
          result[3] += 12866187;
          result[4] += 0;
          result[5] += 1520549;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 45384963;
          result[3] += 7471914;
          result[4] += 0;
          result[5] += 830212;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52959952;
          result[3] += 727138;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 925639;
          result[1] += 231409;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50678762;
          result[5] += 1851279;
        } else {
          result[0] += 36043446;
          result[1] += 0;
          result[2] += 252052;
          result[3] += 252052;
          result[4] += 7813614;
          result[5] += 9325926;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 111848;
          result[1] += 727012;
          result[2] += 279620;
          result[3] += 3970607;
          result[4] += 4529848;
          result[5] += 44068154;
        } else {
          result[0] += 322122;
          result[1] += 214748;
          result[2] += 966367;
          result[3] += 26306674;
          result[4] += 5583457;
          result[5] += 20293720;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 1523038;
          result[1] += 20561013;
          result[2] += 0;
          result[3] += 0;
          result[4] += 31603039;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42dd0000))) ) ) {
          result[0] += 33302773;
          result[1] += 1258291;
          result[2] += 7633633;
          result[3] += 4781506;
          result[4] += 3271557;
          result[5] += 3439329;
        } else {
          result[0] += 49530671;
          result[1] += 86592;
          result[2] += 1731841;
          result[3] += 346368;
          result[4] += 1645249;
          result[5] += 346368;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 2284557;
          result[1] += 5711392;
          result[2] += 3426835;
          result[3] += 1142278;
          result[4] += 13707342;
          result[5] += 27414684;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17488976;
          result[3] += 28470427;
          result[4] += 406720;
          result[5] += 7320966;
        } else {
          result[0] += 11930464;
          result[1] += 0;
          result[2] += 41756626;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42910000))) ) ) {
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 891812;
          result[1] += 0;
          result[2] += 44412244;
          result[3] += 7669584;
          result[4] += 178362;
          result[5] += 535087;
        } else {
          result[0] += 291250;
          result[1] += 0;
          result[2] += 51939590;
          result[3] += 1456250;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42be0000))) ) ) {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 2643682;
          result[1] += 1016800;
          result[2] += 0;
          result[3] += 0;
          result[4] += 46162764;
          result[5] += 3863843;
        } else {
          result[0] += 5237764;
          result[1] += 26188824;
          result[2] += 0;
          result[3] += 0;
          result[4] += 22260501;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 6442450;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 4294967;
        } else {
          result[0] += 50816123;
          result[1] += 0;
          result[2] += 0;
          result[3] += 574193;
          result[4] += 1722580;
          result[5] += 574193;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42660000))) ) ) {
          result[0] += 0;
          result[1] += 3579139;
          result[2] += 0;
          result[3] += 0;
          result[4] += 46528812;
          result[5] += 3579139;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 379682;
          result[3] += 1670602;
          result[4] += 911237;
          result[5] += 50725568;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 372827;
          result[1] += 2609789;
          result[2] += 0;
          result[3] += 5716681;
          result[4] += 11681913;
          result[5] += 33305880;
        } else {
          result[0] += 1376592;
          result[1] += 0;
          result[2] += 1966560;
          result[3] += 30285025;
          result[4] += 589968;
          result[5] += 19468945;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x425e0000))) ) ) {
          result[0] += 263172;
          result[1] += 52634403;
          result[2] += 0;
          result[3] += 0;
          result[4] += 789516;
          result[5] += 0;
        } else {
          result[0] += 715827;
          result[1] += 30064771;
          result[2] += 0;
          result[3] += 0;
          result[4] += 22190664;
          result[5] += 715827;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
          result[0] += 5324339;
          result[1] += 3993254;
          result[2] += 9761289;
          result[3] += 17304103;
          result[4] += 1331084;
          result[5] += 15973018;
        } else {
          result[0] += 45335765;
          result[1] += 726202;
          result[2] += 1193046;
          result[3] += 2334221;
          result[4] += 2801065;
          result[5] += 1296789;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 2033601;
          result[1] += 1626881;
          result[2] += 4880644;
          result[3] += 28063706;
          result[4] += 5694085;
          result[5] += 11388170;
        } else {
          result[0] += 511305;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 16361780;
          result[4] += 0;
          result[5] += 8180890;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 2587329;
          result[1] += 0;
          result[2] += 34928950;
          result[3] += 14230313;
          result[4] += 0;
          result[5] += 1940497;
        } else {
          result[0] += 988819;
          result[1] += 0;
          result[2] += 49382817;
          result[3] += 3024624;
          result[4] += 0;
          result[5] += 290829;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 50529027;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3158064;
          result[5] += 0;
        } else {
          result[0] += 367719;
          result[1] += 551579;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49458313;
          result[5] += 3309478;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
          result[0] += 44126376;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9560714;
          result[5] += 0;
        } else {
          result[0] += 227487;
          result[1] += 272985;
          result[2] += 545970;
          result[3] += 8826521;
          result[4] += 2820847;
          result[5] += 40993278;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 596523;
          result[1] += 18492220;
          result[2] += 0;
          result[3] += 0;
          result[4] += 34598347;
          result[5] += 0;
        } else {
          result[0] += 133218;
          result[1] += 53553872;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 43196510;
          result[1] += 2139255;
          result[2] += 822790;
          result[3] += 1275325;
          result[4] += 3579139;
          result[5] += 2674069;
        } else {
          result[0] += 14444957;
          result[1] += 722247;
          result[2] += 4574236;
          result[3] += 15167205;
          result[4] += 6259481;
          result[5] += 12518962;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 24403223;
          result[4] += 0;
          result[5] += 29283867;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3976821;
          result[3] += 46727653;
          result[4] += 0;
          result[5] += 2982616;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 5490725;
          result[2] += 3050402;
          result[3] += 10371369;
          result[4] += 4880644;
          result[5] += 29893948;
        } else {
          result[0] += 0;
          result[1] += 1278264;
          result[2] += 28760941;
          result[3] += 9586980;
          result[4] += 639132;
          result[5] += 13421772;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 35791394;
          result[1] += 0;
          result[2] += 3579139;
          result[3] += 0;
          result[4] += 0;
          result[5] += 14316557;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 46976204;
          result[3] += 0;
          result[4] += 0;
          result[5] += 6710886;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1376592;
          result[1] += 0;
          result[2] += 41183046;
          result[3] += 9750860;
          result[4] += 0;
          result[5] += 1376592;
        } else {
          result[0] += 213044;
          result[1] += 0;
          result[2] += 52515349;
          result[3] += 745654;
          result[4] += 0;
          result[5] += 213044;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b00000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 732096;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52222897;
          result[5] += 732096;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35174301;
          result[5] += 18512790;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
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
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 18903905;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28733936;
          result[5] += 6049249;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2957061;
          result[4] += 1708524;
          result[5] += 49021505;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 6316128;
          result[1] += 2706912;
          result[2] += 0;
          result[3] += 5413824;
          result[4] += 9925344;
          result[5] += 29324881;
        } else {
          result[0] += 462819;
          result[1] += 462819;
          result[2] += 5091017;
          result[3] += 31934562;
          result[4] += 0;
          result[5] += 15735871;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 42540028;
          result[1] += 2954168;
          result[2] += 157555;
          result[3] += 1299834;
          result[4] += 5711392;
          result[5] += 1024111;
        } else {
          result[0] += 8053063;
          result[1] += 3249481;
          result[2] += 8194345;
          result[3] += 13139209;
          result[4] += 4521018;
          result[5] += 16529972;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 53425202;
          result[2] += 0;
          result[3] += 0;
          result[4] += 261888;
          result[5] += 0;
        } else {
          result[0] += 15339168;
          result[1] += 25565281;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10226112;
          result[5] += 2556528;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 3253763;
          result[1] += 3796056;
          result[2] += 7592113;
          result[3] += 23318635;
          result[4] += 9761289;
          result[5] += 5965232;
        } else {
          result[0] += 7053778;
          result[1] += 1175629;
          result[2] += 34093262;
          result[3] += 8621284;
          result[4] += 391876;
          result[5] += 2351259;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5651272;
          result[3] += 22605091;
          result[4] += 0;
          result[5] += 25430727;
        } else {
          result[0] += 60052;
          result[1] += 0;
          result[2] += 48822824;
          result[3] += 4203687;
          result[4] += 0;
          result[5] += 600526;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 1617081;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51099761;
          result[5] += 970248;
        } else {
          result[0] += 0;
          result[1] += 4569114;
          result[2] += 4569114;
          result[3] += 1142278;
          result[4] += 25130127;
          result[5] += 18276456;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 79418;
          result[3] += 714768;
          result[4] += 317675;
          result[5] += 52575228;
        } else {
          result[0] += 1660425;
          result[1] += 2629007;
          result[2] += 691843;
          result[3] += 16742623;
          result[4] += 5119645;
          result[5] += 26843545;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 25430727;
          result[2] += 0;
          result[3] += 2825636;
          result[4] += 24017909;
          result[5] += 1412818;
        } else {
          result[0] += 0;
          result[1] += 53394518;
          result[2] += 0;
          result[3] += 0;
          result[4] += 292572;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 17759608;
          result[1] += 408266;
          result[2] += 2449601;
          result[3] += 11771694;
          result[4] += 10478849;
          result[5] += 10819071;
        } else {
          result[0] += 42451394;
          result[1] += 2735647;
          result[2] += 1856332;
          result[3] += 1025867;
          result[4] += 5520146;
          result[5] += 97701;
        }
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 43460978;
          result[2] += 5113056;
          result[3] += 5113056;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 434713;
          result[2] += 5216559;
          result[3] += 18692671;
          result[4] += 1956209;
          result[5] += 27386937;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 44570415;
          result[3] += 6584265;
          result[4] += 0;
          result[5] += 2532409;
        } else {
          result[0] += 41756626;
          result[1] += 0;
          result[2] += 5965232;
          result[3] += 5965232;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 39045157;
          result[1] += 4880644;
          result[2] += 9761289;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34636833;
          result[3] += 15009294;
          result[4] += 0;
          result[5] += 4040963;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 357913;
          result[1] += 0;
          result[2] += 45097156;
          result[3] += 8232020;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 114471;
          result[1] += 0;
          result[2] += 52313434;
          result[3] += 1259185;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
          result[0] += 3184827;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49137337;
          result[5] += 1364926;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5219578;
          result[4] += 14913080;
          result[5] += 33554431;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 298261;
          result[3] += 1789569;
          result[4] += 1491308;
          result[5] += 50107951;
        } else {
          result[0] += 0;
          result[1] += 675309;
          result[2] += 0;
          result[3] += 20259279;
          result[4] += 5908956;
          result[5] += 26843545;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
          result[0] += 0;
          result[1] += 52347957;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1339133;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 21289708;
          result[2] += 0;
          result[3] += 4628197;
          result[4] += 27769185;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 38940740;
          result[1] += 2482425;
          result[2] += 1259738;
          result[3] += 2630630;
          result[4] += 5335363;
          result[5] += 3038192;
        } else {
          result[0] += 9287103;
          result[1] += 1144985;
          result[2] += 10432088;
          result[3] += 17556442;
          result[4] += 3689397;
          result[5] += 11577074;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3355443;
          result[3] += 1677721;
          result[4] += 5033164;
          result[5] += 43620761;
        } else {
          result[0] += 0;
          result[1] += 26843545;
          result[2] += 0;
          result[3] += 0;
          result[4] += 26843545;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 16953818;
          result[2] += 5651272;
          result[3] += 0;
          result[4] += 5651272;
          result[5] += 25430727;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26143279;
          result[3] += 23342213;
          result[4] += 0;
          result[5] += 4201598;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 13421772;
          result[1] += 13421772;
          result[2] += 4473924;
          result[3] += 0;
          result[4] += 13421772;
          result[5] += 8947848;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 18583993;
          result[1] += 0;
          result[2] += 30973321;
          result[3] += 0;
          result[4] += 2064888;
          result[5] += 2064888;
        } else {
          result[0] += 119837;
          result[1] += 0;
          result[2] += 49253112;
          result[3] += 3954629;
          result[4] += 0;
          result[5] += 359511;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42300000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ae0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c60000))) ) ) {
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
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 117734;
          result[1] += 53216151;
          result[2] += 0;
          result[3] += 0;
          result[4] += 353204;
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
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 1314785;
          result[1] += 0;
          result[2] += 1095654;
          result[3] += 219130;
          result[4] += 47332292;
          result[5] += 3725226;
        } else {
          result[0] += 1862959;
          result[1] += 42339;
          result[2] += 465739;
          result[3] += 7917575;
          result[4] += 4149317;
          result[5] += 39249158;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 40408320;
          result[1] += 3391193;
          result[2] += 531150;
          result[3] += 1225732;
          result[4] += 6986676;
          result[5] += 1144017;
        } else {
          result[0] += 6125372;
          result[1] += 1801580;
          result[2] += 10569270;
          result[3] += 12731167;
          result[4] += 4203687;
          result[5] += 18256013;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 26843545;
          result[2] += 5965232;
          result[3] += 5965232;
          result[4] += 14913080;
          result[5] += 0;
        } else {
          result[0] += 2556528;
          result[1] += 0;
          result[2] += 7030452;
          result[3] += 20452225;
          result[4] += 639132;
          result[5] += 23008753;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 23622320;
          result[3] += 25769803;
          result[4] += 0;
          result[5] += 4294967;
        } else {
          result[0] += 1809677;
          result[1] += 0;
          result[2] += 44035479;
          result[3] += 5429031;
          result[4] += 0;
          result[5] += 2412902;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3579139;
          result[3] += 39370533;
          result[4] += 0;
          result[5] += 10737418;
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
          result[0] += 3205199;
          result[1] += 0;
          result[2] += 42735992;
          result[3] += 7478798;
          result[4] += 0;
          result[5] += 267099;
        } else {
          result[0] += 86175;
          result[1] += 0;
          result[2] += 51274188;
          result[3] += 2240552;
          result[4] += 0;
          result[5] += 86175;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 971712;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51257811;
          result[5] += 1457568;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 31876710;
          result[5] += 21810380;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42560000))) ) ) {
          result[0] += 0;
          result[1] += 49852298;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3834792;
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
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4473924;
          result[4] += 44739242;
          result[5] += 4473924;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 226527;
          result[3] += 1812222;
          result[4] += 679583;
          result[5] += 50968757;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 34557208;
          result[1] += 1234186;
          result[2] += 0;
          result[3] += 0;
          result[4] += 12958953;
          result[5] += 4936744;
        } else {
          result[0] += 0;
          result[1] += 261251;
          result[2] += 1436880;
          result[3] += 20246956;
          result[4] += 3657514;
          result[5] += 28084488;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 53420654;
          result[2] += 0;
          result[3] += 0;
          result[4] += 266437;
          result[5] += 0;
        } else {
          result[0] += 409825;
          result[1] += 15573354;
          result[2] += 0;
          result[3] += 3278600;
          result[4] += 27458283;
          result[5] += 6967027;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 43914060;
          result[1] += 2066544;
          result[2] += 258318;
          result[3] += 818007;
          result[4] += 4046982;
          result[5] += 2583180;
        } else {
          result[0] += 10774571;
          result[1] += 557305;
          result[2] += 13003793;
          result[3] += 13003793;
          result[4] += 2600758;
          result[5] += 13746867;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 298261;
          result[1] += 298261;
          result[2] += 11930464;
          result[3] += 30720946;
          result[4] += 2684354;
          result[5] += 7754802;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37479667;
          result[3] += 13168531;
          result[4] += 0;
          result[5] += 3038891;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 16106127;
          result[1] += 1533916;
          result[2] += 21474836;
          result[3] += 2300875;
          result[4] += 3067833;
          result[5] += 9203501;
        } else {
          result[0] += 438517;
          result[1] += 62645;
          result[2] += 49552496;
          result[3] += 3132269;
          result[4] += 0;
          result[5] += 501163;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 626697;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49718006;
          result[5] += 3342387;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1162058;
          result[1] += 116205;
          result[2] += 58102;
          result[3] += 2149807;
          result[4] += 3486174;
          result[5] += 46714741;
        } else {
          result[0] += 1967589;
          result[1] += 1686505;
          result[2] += 2248673;
          result[3] += 21784029;
          result[4] += 5762227;
          result[5] += 20238065;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42580000))) ) ) {
          result[0] += 0;
          result[1] += 52800747;
          result[2] += 0;
          result[3] += 0;
          result[4] += 886343;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 27656986;
          result[2] += 1626881;
          result[3] += 3253763;
          result[4] += 16268815;
          result[5] += 4880644;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 42479543;
          result[1] += 2644477;
          result[2] += 503710;
          result[3] += 881492;
          result[4] += 6212423;
          result[5] += 965444;
        } else {
          result[0] += 8757468;
          result[1] += 761519;
          result[2] += 12438144;
          result[3] += 15484220;
          result[4] += 2792236;
          result[5] += 13453502;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 1491308;
          result[2] += 0;
          result[3] += 8947848;
          result[4] += 10439156;
          result[5] += 32808777;
        } else {
          result[0] += 0;
          result[1] += 1704352;
          result[2] += 7669584;
          result[3] += 37495746;
          result[4] += 0;
          result[5] += 6817408;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26155249;
          result[3] += 2753184;
          result[4] += 2753184;
          result[5] += 22025473;
        } else {
          result[0] += 3834792;
          result[1] += 766958;
          result[2] += 27610504;
          result[3] += 20707878;
          result[4] += 0;
          result[5] += 766958;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9474192;
          result[3] += 18948385;
          result[4] += 0;
          result[5] += 25264513;
        } else {
          result[0] += 2590797;
          result[1] += 143933;
          result[2] += 42460300;
          result[3] += 7340594;
          result[4] += 0;
          result[5] += 1151465;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 51246768;
          result[3] += 2091704;
          result[4] += 0;
          result[5] += 348617;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53513346;
          result[3] += 173744;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 3455109;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 46776871;
          result[5] += 3455109;
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
          result[0] += 0;
          result[1] += 191511;
          result[2] += 0;
          result[3] += 1659767;
          result[4] += 3128023;
          result[5] += 48707789;
        } else {
          result[0] += 0;
          result[1] += 4549753;
          result[2] += 1213267;
          result[3] += 25478619;
          result[4] += 1819901;
          result[5] += 20625549;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 5113056;
          result[2] += 0;
          result[3] += 0;
          result[4] += 48574034;
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
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 38907858;
          result[1] += 1474327;
          result[2] += 251714;
          result[3] += 2085633;
          result[4] += 8054861;
          result[5] += 2912695;
        } else {
          result[0] += 7563308;
          result[1] += 495954;
          result[2] += 9175161;
          result[3] += 17110435;
          result[4] += 2727750;
          result[5] += 16614480;
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2556528;
          result[3] += 30039205;
          result[4] += 0;
          result[5] += 21091357;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6442450;
          result[3] += 9305762;
          result[4] += 4294967;
          result[5] += 33643910;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 23008753;
          result[4] += 30678337;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40265318;
          result[3] += 2236962;
          result[4] += 0;
          result[5] += 11184810;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
          result[0] += 3579139;
          result[1] += 7158278;
          result[2] += 3579139;
          result[3] += 7158278;
          result[4] += 7158278;
          result[5] += 25053975;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24245783;
          result[3] += 28575387;
          result[4] += 865920;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
          result[0] += 24667041;
          result[1] += 7255012;
          result[2] += 15961027;
          result[3] += 1451002;
          result[4] += 1451002;
          result[5] += 2902004;
        } else {
          result[0] += 566452;
          result[1] += 62939;
          result[2] += 47393176;
          result[3] += 5223949;
          result[4] += 0;
          result[5] += 440574;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 250874;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52683594;
          result[5] += 752622;
        } else {
          result[0] += 46596343;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 6077783;
          result[5] += 1012963;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 1579032;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1579032;
          result[5] += 50529027;
        } else {
          result[0] += 0;
          result[1] += 3579139;
          result[2] += 0;
          result[3] += 14316557;
          result[4] += 21474836;
          result[5] += 14316557;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37896770;
          result[5] += 15790320;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2336967;
          result[4] += 1768515;
          result[5] += 49581607;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 432960;
          result[2] += 1298881;
          result[3] += 10391049;
          result[4] += 6494406;
          result[5] += 35069793;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1869699;
          result[3] += 36859793;
          result[4] += 1335499;
          result[5] += 13622097;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 2045222;
          result[1] += 14827863;
          result[2] += 0;
          result[3] += 1533916;
          result[4] += 34768782;
          result[5] += 511305;
        } else {
          result[0] += 117734;
          result[1] += 53098416;
          result[2] += 0;
          result[3] += 0;
          result[4] += 470939;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 11930464;
          result[1] += 17895697;
          result[2] += 0;
          result[3] += 0;
          result[4] += 23860929;
          result[5] += 0;
        } else {
          result[0] += 42168021;
          result[1] += 534813;
          result[2] += 1398744;
          result[3] += 3537999;
          result[4] += 2797488;
          result[5] += 3250023;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 899783;
          result[1] += 2999278;
          result[2] += 3899062;
          result[3] += 19795240;
          result[4] += 2699350;
          result[5] += 23394374;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 25300813;
          result[3] += 22215348;
          result[4] += 0;
          result[5] += 6170930;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19522578;
          result[3] += 12201611;
          result[4] += 0;
          result[5] += 21962900;
        } else {
          result[0] += 759979;
          result[1] += 0;
          result[2] += 47661543;
          result[3] += 4885579;
          result[4] += 162852;
          result[5] += 217136;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 441869;
          result[1] += 441869;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52361483;
          result[5] += 441869;
        } else {
          result[0] += 0;
          result[1] += 39045157;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4880644;
          result[5] += 9761289;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
          result[0] += 38999113;
          result[1] += 506481;
          result[2] += 0;
          result[3] += 2025927;
          result[4] += 7597229;
          result[5] += 4558337;
        } else {
          result[0] += 348334;
          result[1] += 87083;
          result[2] += 174167;
          result[3] += 8838993;
          result[4] += 2481884;
          result[5] += 41756626;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 8947848;
          result[2] += 994205;
          result[3] += 4971026;
          result[4] += 38774010;
          result[5] += 0;
        } else {
          result[0] += 779688;
          result[1] += 50791107;
          result[2] += 111384;
          result[3] += 0;
          result[4] += 2004912;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 44159777;
          result[1] += 2618882;
          result[2] += 0;
          result[3] += 903062;
          result[4] += 5598990;
          result[5] += 406378;
        } else {
          result[0] += 12344112;
          result[1] += 783753;
          result[2] += 13715680;
          result[3] += 12735988;
          result[4] += 3526889;
          result[5] += 10580667;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3158064;
          result[4] += 15790320;
          result[5] += 34738706;
        } else {
          result[0] += 0;
          result[1] += 2902004;
          result[2] += 9673349;
          result[3] += 34340391;
          result[4] += 0;
          result[5] += 6771344;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 53687091;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 1704352;
          result[2] += 15339168;
          result[3] += 15339168;
          result[4] += 3408704;
          result[5] += 17895697;
        } else {
          result[0] += 0;
          result[1] += 629760;
          result[2] += 43138601;
          result[3] += 8029447;
          result[4] += 157440;
          result[5] += 1731841;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 26843545;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 423399;
          result[1] += 0;
          result[2] += 51231372;
          result[3] += 1947638;
          result[4] += 0;
          result[5] += 84679;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 271146;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53144797;
          result[5] += 271146;
        } else {
          result[0] += 2618882;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36664354;
          result[5] += 14403853;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3158064;
          result[4] += 15790320;
          result[5] += 34738706;
        } else {
          result[0] += 0;
          result[1] += 8259552;
          result[2] += 0;
          result[3] += 45427538;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42890000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 135402;
          result[1] += 67701;
          result[2] += 67701;
          result[3] += 1760232;
          result[4] += 2843452;
          result[5] += 48812601;
        } else {
          result[0] += 0;
          result[1] += 458864;
          result[2] += 458864;
          result[3] += 19272289;
          result[4] += 0;
          result[5] += 33497073;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42660000))) ) ) {
          result[0] += 43406584;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10280506;
          result[5] += 0;
        } else {
          result[0] += 169895;
          result[1] += 169895;
          result[2] += 509687;
          result[3] += 19707919;
          result[4] += 3567813;
          result[5] += 29561879;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
          result[0] += 5432622;
          result[1] += 15978300;
          result[2] += 2556528;
          result[3] += 0;
          result[4] += 28441375;
          result[5] += 1278264;
        } else {
          result[0] += 38695083;
          result[1] += 1271142;
          result[2] += 1308529;
          result[3] += 3776041;
          result[4] += 5383663;
          result[5] += 3252630;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42740000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
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
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 5208449;
          result[1] += 6811048;
          result[2] += 6811048;
          result[3] += 14423397;
          result[4] += 5609099;
          result[5] += 14824047;
        } else {
          result[0] += 624268;
          result[1] += 0;
          result[2] += 30277022;
          result[3] += 17479518;
          result[4] += 0;
          result[5] += 5306282;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 37167986;
          result[1] += 0;
          result[2] += 16519104;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 511305;
          result[1] += 227246;
          result[2] += 48176352;
          result[3] += 3976821;
          result[4] += 56811;
          result[5] += 738552;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 979691;
          result[1] += 783753;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50943955;
          result[5] += 979691;
        } else {
          result[0] += 27644845;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 14022747;
          result[5] += 12019498;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 143356;
          result[3] += 1576923;
          result[4] += 1505245;
          result[5] += 50461565;
        } else {
          result[0] += 0;
          result[1] += 1099394;
          result[2] += 0;
          result[3] += 10444246;
          result[4] += 8611922;
          result[5] += 33531527;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 53348727;
          result[2] += 0;
          result[3] += 112788;
          result[4] += 225576;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          result[0] += 38844430;
          result[1] += 2616887;
          result[2] += 940444;
          result[3] += 2167110;
          result[4] += 6051553;
          result[5] += 3066665;
        } else {
          result[0] += 9047269;
          result[1] += 894784;
          result[2] += 10538577;
          result[3] += 18989322;
          result[4] += 1988410;
          result[5] += 12228726;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5965232;
          result[3] += 3976821;
          result[4] += 3976821;
          result[5] += 39768215;
        } else {
          result[0] += 6710886;
          result[1] += 20132659;
          result[2] += 6710886;
          result[3] += 13421772;
          result[4] += 6710886;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10349318;
          result[3] += 38809945;
          result[4] += 646832;
          result[5] += 3880994;
        } else {
          result[0] += 0;
          result[1] += 4668442;
          result[2] += 33846209;
          result[3] += 11671106;
          result[4] += 0;
          result[5] += 3501332;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e90000))) ) ) {
          result[0] += 1042467;
          result[1] += 0;
          result[2] += 33358969;
          result[3] += 15115782;
          result[4] += 521233;
          result[5] += 3648637;
        } else {
          result[0] += 19522578;
          result[1] += 0;
          result[2] += 4880644;
          result[3] += 0;
          result[4] += 0;
          result[5] += 29283867;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
          result[0] += 23402065;
          result[1] += 0;
          result[2] += 30285025;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 147694;
          result[1] += 0;
          result[2] += 51102430;
          result[3] += 2436965;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 2450448;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49231730;
          result[5] += 2004912;
        } else {
          result[0] += 14641933;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 26843545;
          result[5] += 12201611;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 59985;
          result[2] += 0;
          result[3] += 2699350;
          result[4] += 2279451;
          result[5] += 48648302;
        } else {
          result[0] += 932067;
          result[1] += 1864135;
          result[2] += 372827;
          result[3] += 25911478;
          result[4] += 2050548;
          result[5] += 22556034;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 41365463;
          result[2] += 0;
          result[3] += 0;
          result[4] += 11441511;
          result[5] += 880116;
        } else {
          result[0] += 305040;
          result[1] += 53382050;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 17557129;
          result[1] += 2249053;
          result[2] += 4933408;
          result[3] += 11027618;
          result[4] += 8053063;
          result[5] += 9866816;
        } else {
          result[0] += 43667364;
          result[1] += 2143755;
          result[2] += 2283565;
          result[3] += 605843;
          result[4] += 4520527;
          result[5] += 466033;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3928323;
          result[3] += 13094412;
          result[4] += 2618882;
          result[5] += 34045472;
        } else {
          result[0] += 0;
          result[1] += 37580963;
          result[2] += 0;
          result[3] += 0;
          result[4] += 16106127;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17391592;
          result[3] += 21928530;
          result[4] += 0;
          result[5] += 14366968;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41809416;
          result[3] += 9027033;
          result[4] += 0;
          result[5] += 2850642;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 43565754;
          result[3] += 8581133;
          result[4] += 0;
          result[5] += 1540203;
        } else {
          result[0] += 41756626;
          result[1] += 0;
          result[2] += 11930464;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17895697;
          result[3] += 0;
          result[4] += 0;
          result[5] += 35791394;
        } else {
          result[0] += 207286;
          result[1] += 0;
          result[2] += 52650660;
          result[3] += 829144;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 279620;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52288989;
          result[5] += 1118481;
        } else {
          result[0] += 29745550;
          result[1] += 0;
          result[2] += 0;
          result[3] += 725501;
          result[4] += 10157017;
          result[5] += 13059022;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 220480;
          result[2] += 0;
          result[3] += 2976491;
          result[4] += 2921371;
          result[5] += 47568747;
        } else {
          result[0] += 0;
          result[1] += 506481;
          result[2] += 253240;
          result[3] += 28869473;
          result[4] += 3038891;
          result[5] += 21019002;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 360316;
          result[1] += 16574538;
          result[2] += 1080948;
          result[3] += 0;
          result[4] += 33869708;
          result[5] += 1801580;
        } else {
          result[0] += 0;
          result[1] += 53033963;
          result[2] += 0;
          result[3] += 0;
          result[4] += 653127;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 44775293;
          result[1] += 1254573;
          result[2] += 129783;
          result[3] += 2076535;
          result[4] += 4412637;
          result[5] += 1038267;
        } else {
          result[0] += 9595656;
          result[1] += 971712;
          result[2] += 12146400;
          result[3] += 13361040;
          result[4] += 2186352;
          result[5] += 15425928;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 20132659;
          result[5] += 33554431;
        } else {
          result[0] += 1309441;
          result[1] += 2618882;
          result[2] += 5892485;
          result[3] += 38628516;
          result[4] += 1309441;
          result[5] += 3928323;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24245783;
          result[3] += 10391049;
          result[4] += 0;
          result[5] += 19050258;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 50861454;
          result[3] += 0;
          result[4] += 0;
          result[5] += 2825636;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 813440;
          result[1] += 3253763;
          result[2] += 15455374;
          result[3] += 23589782;
          result[4] += 813440;
          result[5] += 9761289;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 45906353;
          result[3] += 7002664;
          result[4] += 778073;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 40265318;
          result[2] += 13421772;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 726393;
          result[1] += 0;
          result[2] += 50385302;
          result[3] += 2113145;
          result[4] += 0;
          result[5] += 462250;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 223696;
          result[1] += 223696;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49660559;
          result[5] += 3579139;
        } else {
          result[0] += 0;
          result[1] += 36430526;
          result[2] += 0;
          result[3] += 5752188;
          result[4] += 11504376;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 63610;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3816617;
          result[4] += 2480801;
          result[5] += 47326061;
        } else {
          result[0] += 7965443;
          result[1] += 159308;
          result[2] += 1593088;
          result[3] += 17205358;
          result[4] += 7646826;
          result[5] += 19117065;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 113263;
          result[1] += 53347299;
          result[2] += 0;
          result[3] += 0;
          result[4] += 226527;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 39710538;
          result[1] += 2141254;
          result[2] += 311455;
          result[3] += 1557276;
          result[4] += 6618423;
          result[5] += 3348143;
        } else {
          result[0] += 10893032;
          result[1] += 583555;
          result[2] += 11865625;
          result[3] += 14005328;
          result[4] += 4862961;
          result[5] += 11476588;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ae0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1533916;
          result[4] += 6135667;
          result[5] += 46017506;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3579139;
          result[3] += 28121809;
          result[4] += 0;
          result[5] += 21986142;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 10737418;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 909950;
          result[1] += 454975;
          result[2] += 21838816;
          result[3] += 25478619;
          result[4] += 2274876;
          result[5] += 2729852;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 49058893;
          result[3] += 2776918;
          result[4] += 0;
          result[5] += 1851279;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 27837750;
          result[1] += 1988410;
          result[2] += 9942053;
          result[3] += 1988410;
          result[4] += 7953643;
          result[5] += 3976821;
        } else {
          result[0] += 373692;
          result[1] += 124564;
          result[2] += 49265068;
          result[3] += 3612356;
          result[4] += 249128;
          result[5] += 62282;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 327360;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52050289;
          result[5] += 1309441;
        } else {
          result[0] += 0;
          result[1] += 4473924;
          result[2] += 0;
          result[3] += 5965232;
          result[4] += 25352237;
          result[5] += 17895697;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42680000))) ) ) {
          result[0] += 24047342;
          result[1] += 559240;
          result[2] += 2796202;
          result[3] += 5033164;
          result[4] += 19573418;
          result[5] += 1677721;
        } else {
          result[0] += 49029;
          result[1] += 147087;
          result[2] += 147087;
          result[3] += 7452454;
          result[4] += 2647582;
          result[5] += 43243848;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 8202194;
          result[2] += 0;
          result[3] += 0;
          result[4] += 45484896;
          result[5] += 0;
        } else {
          result[0] += 600526;
          result[1] += 51645300;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1441264;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 46110283;
          result[1] += 1645249;
          result[2] += 0;
          result[3] += 822624;
          result[4] += 4372900;
          result[5] += 736032;
        } else {
          result[0] += 14174809;
          result[1] += 708740;
          result[2] += 8504885;
          result[3] += 16478216;
          result[4] += 2657776;
          result[5] += 11162662;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17895697;
          result[3] += 17895697;
          result[4] += 17895697;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1626881;
          result[4] += 0;
          result[5] += 52060209;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 240749;
          result[1] += 3129740;
          result[2] += 10352219;
          result[3] += 26000923;
          result[4] += 3611239;
          result[5] += 10352219;
        } else {
          result[0] += 577280;
          result[1] += 0;
          result[2] += 39255077;
          result[3] += 10968330;
          result[4] += 0;
          result[5] += 2886402;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21765036;
          result[3] += 7255012;
          result[4] += 0;
          result[5] += 24667041;
        } else {
          result[0] += 589968;
          result[1] += 0;
          result[2] += 36578018;
          result[3] += 14159232;
          result[4] += 589968;
          result[5] += 1769904;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 3754342;
          result[1] += 0;
          result[2] += 42799499;
          result[3] += 6570098;
          result[4] += 0;
          result[5] += 563151;
        } else {
          result[0] += 266657;
          result[1] += 0;
          result[2] += 51376057;
          result[3] += 2044375;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 204912;
          result[3] += 0;
          result[4] += 48769189;
          result[5] += 4712988;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 32212254;
          result[4] += 16106127;
          result[5] += 5368709;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 74153;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1260608;
          result[4] += 2372910;
          result[5] += 49979419;
        } else {
          result[0] += 6303342;
          result[1] += 217356;
          result[2] += 0;
          result[3] += 17605888;
          result[4] += 4238454;
          result[5] += 25322049;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 4854683;
          result[1] += 15991899;
          result[2] += 0;
          result[3] += 856708;
          result[4] += 31127090;
          result[5] += 856708;
        } else {
          result[0] += 39794709;
          result[1] += 451784;
          result[2] += 2108328;
          result[3] += 3124844;
          result[4] += 3388385;
          result[5] += 4819037;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
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
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5965232;
          result[5] += 47721858;
        } else {
          result[0] += 0;
          result[1] += 372827;
          result[2] += 7829367;
          result[3] += 34672913;
          result[4] += 1491308;
          result[5] += 9320675;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 3520464;
          result[1] += 10561394;
          result[2] += 9681278;
          result[3] += 4400581;
          result[4] += 3520464;
          result[5] += 22002906;
        } else {
          result[0] += 3463683;
          result[1] += 0;
          result[2] += 34636833;
          result[3] += 11545611;
          result[4] += 0;
          result[5] += 4040963;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20782099;
          result[3] += 25977624;
          result[4] += 0;
          result[5] += 6927366;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 46017506;
          result[3] += 7056017;
          result[4] += 0;
          result[5] += 613566;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42980000))) ) ) {
          result[0] += 31317469;
          result[1] += 0;
          result[2] += 22369621;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 754827;
          result[1] += 0;
          result[2] += 51516962;
          result[3] += 1415301;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 1019375;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52667716;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 1248537;
          result[2] += 0;
          result[3] += 2497074;
          result[4] += 39953184;
          result[5] += 9988296;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 855309;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1513239;
          result[4] += 3815994;
          result[5] += 47502548;
        } else {
          result[0] += 2432949;
          result[1] += 324393;
          result[2] += 324393;
          result[3] += 21409957;
          result[4] += 2757343;
          result[5] += 26438053;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 22190664;
          result[2] += 0;
          result[3] += 0;
          result[4] += 31496426;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53295214;
          result[2] += 0;
          result[3] += 0;
          result[4] += 391876;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 40766397;
          result[1] += 1825361;
          result[2] += 1109533;
          result[3] += 2254857;
          result[4] += 5440291;
          result[5] += 2290649;
        } else {
          result[0] += 8754729;
          result[1] += 643730;
          result[2] += 10814665;
          result[3] += 16093252;
          result[4] += 3862380;
          result[5] += 13518332;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 53687091;
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17448304;
          result[3] += 28185722;
          result[4] += 447392;
          result[5] += 7605671;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39660734;
          result[3] += 13059022;
          result[4] += 483667;
          result[5] += 483667;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42f70000))) ) ) {
          result[0] += 23008753;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 30678337;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8947848;
          result[3] += 0;
          result[4] += 44739242;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 16777215;
          result[1] += 20132659;
          result[2] += 6710886;
          result[3] += 6710886;
          result[4] += 0;
          result[5] += 3355443;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 49968212;
          result[3] += 3042719;
          result[4] += 67615;
          result[5] += 608543;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 229432;
          result[1] += 229432;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52310499;
          result[5] += 917728;
        } else {
          result[0] += 28856811;
          result[1] += 671088;
          result[2] += 671088;
          result[3] += 3019898;
          result[4] += 8388607;
          result[5] += 12079595;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
          result[0] += 1883757;
          result[1] += 941878;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37675151;
          result[5] += 13186303;
        } else {
          result[0] += 0;
          result[1] += 52893;
          result[2] += 0;
          result[3] += 4072813;
          result[4] += 2433109;
          result[5] += 47128274;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 39486511;
          result[1] += 3883919;
          result[2] += 485489;
          result[3] += 2629736;
          result[4] += 5259473;
          result[5] += 1941959;
        } else {
          result[0] += 6091419;
          result[1] += 0;
          result[2] += 10324440;
          result[3] += 23333235;
          result[4] += 2064888;
          result[5] += 11873106;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 358711;
          result[1] += 53328380;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
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
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1012963;
          result[3] += 9116675;
          result[4] += 1012963;
          result[5] += 42544487;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 32212254;
          result[4] += 10737418;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8659208;
          result[3] += 22513941;
          result[4] += 6927366;
          result[5] += 15586574;
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
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 11142603;
          result[1] += 10129639;
          result[2] += 10129639;
          result[3] += 11142603;
          result[4] += 0;
          result[5] += 11142603;
        } else {
          result[0] += 679583;
          result[1] += 0;
          result[2] += 39415839;
          result[3] += 11779446;
          result[4] += 0;
          result[5] += 1812222;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 16953818;
          result[1] += 5651272;
          result[2] += 25430727;
          result[3] += 0;
          result[4] += 0;
          result[5] += 5651272;
        } else {
          result[0] += 81965;
          result[1] += 0;
          result[2] += 51310105;
          result[3] += 2295020;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d70000))) ) ) {
          result[0] += 451152;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49626722;
          result[5] += 3609216;
        } else {
          result[0] += 0;
          result[1] += 46976204;
          result[2] += 0;
          result[3] += 0;
          result[4] += 6710886;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1687487;
          result[1] += 62499;
          result[2] += 0;
          result[3] += 1562488;
          result[4] += 2249982;
          result[5] += 48124633;
        } else {
          result[0] += 3347396;
          result[1] += 643730;
          result[2] += 257492;
          result[3] += 18410681;
          result[4] += 3089904;
          result[5] += 27937886;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 12632256;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41054834;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53450062;
          result[2] += 0;
          result[3] += 0;
          result[4] += 237029;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 41579979;
          result[1] += 2119763;
          result[2] += 40764;
          result[3] += 896823;
          result[4] += 8397525;
          result[5] += 652234;
        } else {
          result[0] += 11136331;
          result[1] += 1163497;
          result[2] += 9640406;
          result[3] += 14460609;
          result[4] += 3324278;
          result[5] += 13961967;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8659208;
          result[3] += 6927366;
          result[4] += 1731841;
          result[5] += 36368674;
        } else {
          result[0] += 0;
          result[1] += 5309712;
          result[2] += 2359872;
          result[3] += 33038209;
          result[4] += 2949840;
          result[5] += 10029456;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 5113056;
          result[1] += 2556528;
          result[2] += 12782640;
          result[3] += 5113056;
          result[4] += 0;
          result[5] += 28121809;
        } else {
          result[0] += 3928323;
          result[1] += 3928323;
          result[2] += 34045472;
          result[3] += 7856647;
          result[4] += 2618882;
          result[5] += 1309441;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 49213166;
          result[1] += 0;
          result[2] += 4473924;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 0;
          result[4] += 0;
          result[5] += 26843545;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8947848;
          result[3] += 29826161;
          result[4] += 0;
          result[5] += 14913080;
        } else {
          result[0] += 440058;
          result[1] += 0;
          result[2] += 48846451;
          result[3] += 3850508;
          result[4] += 0;
          result[5] += 550072;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 735439;
          result[1] += 490293;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50255039;
          result[5] += 2206318;
        } else {
          result[0] += 0;
          result[1] += 34164512;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9761289;
          result[5] += 9761289;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 2022112;
          result[1] += 505528;
          result[2] += 0;
          result[3] += 3336485;
          result[4] += 2173771;
          result[5] += 45649193;
        } else {
          result[0] += 0;
          result[1] += 835596;
          result[2] += 626697;
          result[3] += 26112398;
          result[4] += 3760185;
          result[5] += 22352213;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 4473924;
          result[1] += 16497595;
          result[2] += 559240;
          result[3] += 559240;
          result[4] += 30478609;
          result[5] += 1118481;
        } else {
          result[0] += 38686823;
          result[1] += 1350389;
          result[2] += 1897844;
          result[3] += 4270149;
          result[4] += 3722694;
          result[5] += 3759191;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42820000))) ) ) {
          result[0] += 129055;
          result[1] += 53558035;
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
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6710886;
          result[3] += 0;
          result[4] += 0;
          result[5] += 46976204;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5315553;
          result[3] += 35082653;
          result[4] += 0;
          result[5] += 13288883;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2825636;
          result[3] += 25430727;
          result[4] += 0;
          result[5] += 25430727;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39681763;
          result[3] += 8558811;
          result[4] += 0;
          result[5] += 5446516;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ef0000))) ) ) {
          result[0] += 654720;
          result[1] += 0;
          result[2] += 40920039;
          result[3] += 9820809;
          result[4] += 163680;
          result[5] += 2127842;
        } else {
          result[0] += 27656986;
          result[1] += 0;
          result[2] += 26030104;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 0;
          result[4] += 0;
          result[5] += 26843545;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52325770;
          result[3] += 1191155;
          result[4] += 0;
          result[5] += 170165;
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
