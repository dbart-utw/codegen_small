
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
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 240749;
            result[1] += 2166743;
            result[2] += 0;
            result[3] += 962997;
            result[4] += 47427609;
            result[5] += 2888991;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 50433328;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3253763;
            result[5] += 0;
          } else {
            result[0] += 2753184;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 20648881;
            result[5] += 30285025;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37456110;
            result[5] += 16230981;
          } else {
            result[0] += 0;
            result[1] += 65793;
            result[2] += 394758;
            result[3] += 2105376;
            result[4] += 1250067;
            result[5] += 49871096;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 880116;
            result[2] += 0;
            result[3] += 9241220;
            result[4] += 3960523;
            result[5] += 39605231;
          } else {
            result[0] += 0;
            result[1] += 556342;
            result[2] += 1669028;
            result[3] += 34493260;
            result[4] += 1112685;
            result[5] += 15855773;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 4473924;
            result[2] += 0;
            result[3] += 0;
            result[4] += 49213166;
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
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42580000))) ) ) {
            result[0] += 33323022;
            result[1] += 11107674;
            result[2] += 0;
            result[3] += 0;
            result[4] += 9256395;
            result[5] += 0;
          } else {
            result[0] += 1947200;
            result[1] += 1669028;
            result[2] += 3338057;
            result[3] += 1669028;
            result[4] += 37831318;
            result[5] += 7232457;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 45380070;
            result[1] += 759499;
            result[2] += 664561;
            result[3] += 1993685;
            result[4] += 3085465;
            result[5] += 1803810;
          } else {
            result[0] += 7040929;
            result[1] += 880116;
            result[2] += 13641801;
            result[3] += 18189069;
            result[4] += 2640348;
            result[5] += 11294825;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1731841;
            result[3] += 8659208;
            result[4] += 0;
            result[5] += 43296041;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 38774010;
            result[4] += 0;
            result[5] += 14913080;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 0;
            result[4] += 0;
            result[5] += 17895697;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7669584;
            result[3] += 7669584;
            result[4] += 0;
            result[5] += 38347922;
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
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1325607;
            result[1] += 0;
            result[2] += 33140179;
            result[3] += 14250277;
            result[4] += 0;
            result[5] += 4971026;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42da0000))) ) ) {
            result[0] += 0;
            result[1] += 1084587;
            result[2] += 48264152;
            result[3] += 3796056;
            result[4] += 0;
            result[5] += 542293;
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 1851279;
            result[1] += 0;
            result[2] += 35174301;
            result[3] += 12958953;
            result[4] += 1851279;
            result[5] += 1851279;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48318382;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48716064;
            result[3] += 4971026;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 227970;
            result[1] += 0;
            result[2] += 53117164;
            result[3] += 341955;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
            result[0] += 513752;
            result[1] += 256876;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52916463;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 17895697;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8947848;
            result[5] += 26843545;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4006499;
            result[3] += 0;
            result[4] += 29648095;
            result[5] += 20032496;
          } else {
            result[0] += 37234595;
            result[1] += 0;
            result[2] += 0;
            result[3] += 865920;
            result[4] += 6061445;
            result[5] += 9525129;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1586029;
            result[4] += 1665330;
            result[5] += 50435731;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 31082000;
            result[4] += 0;
            result[5] += 22605091;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 7121756;
            result[2] += 0;
            result[3] += 7395670;
            result[4] += 7669584;
            result[5] += 31500079;
          } else {
            result[0] += 745654;
            result[1] += 497102;
            result[2] += 248551;
            result[3] += 36039945;
            result[4] += 994205;
            result[5] += 15161632;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42480000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 17895697;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53413874;
            result[2] += 0;
            result[3] += 0;
            result[4] += 273216;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x420e0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 902304;
            result[1] += 3609216;
            result[2] += 1353456;
            result[3] += 2255760;
            result[4] += 42408290;
            result[5] += 3158064;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 26843545;
            result[1] += 2749037;
            result[2] += 323416;
            result[3] += 3719286;
            result[4] += 12613232;
            result[5] += 7438572;
          } else {
            result[0] += 47850281;
            result[1] += 2022656;
            result[2] += 0;
            result[3] += 404531;
            result[4] += 3294041;
            result[5] += 115580;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 701792;
            result[1] += 2105376;
            result[2] += 12105912;
            result[3] += 20351969;
            result[4] += 1228136;
            result[5] += 17193905;
          } else {
            result[0] += 32376184;
            result[1] += 0;
            result[2] += 12294753;
            result[3] += 1229475;
            result[4] += 6147376;
            result[5] += 1639300;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428e0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428c0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x427c0000))) ) ) {
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
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4880644;
            result[4] += 4880644;
            result[5] += 43925801;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5052902;
            result[3] += 30949029;
            result[4] += 1263225;
            result[5] += 16421933;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ed0000))) ) ) {
            result[0] += 2825636;
            result[1] += 5247610;
            result[2] += 30678337;
            result[3] += 10898883;
            result[4] += 1210987;
            result[5] += 2825636;
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
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 35791394;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 22369621;
            result[3] += 8947848;
            result[4] += 0;
            result[5] += 22369621;
          } else {
            result[0] += 1579032;
            result[1] += 0;
            result[2] += 44476070;
            result[3] += 6842472;
            result[4] += 0;
            result[5] += 789516;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47492426;
            result[3] += 6194664;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 50879923;
            result[3] += 2807168;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53298054;
            result[3] += 389036;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 479349;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53207742;
            result[5] += 0;
          } else {
            result[0] += 8134407;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 9761289;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 50529027;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 3158064;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
            result[0] += 2982616;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 47721858;
            result[5] += 2982616;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 15339168;
            result[5] += 38347922;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 32212254;
          } else {
            result[0] += 52195783;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1491308;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 32212254;
            result[5] += 7158278;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 709521;
            result[4] += 709521;
            result[5] += 52268049;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42910000))) ) ) {
            result[0] += 1952257;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5856773;
            result[4] += 36116770;
            result[5] += 9761289;
          } else {
            result[0] += 0;
            result[1] += 281084;
            result[2] += 0;
            result[3] += 8432527;
            result[4] += 6464937;
            result[5] += 38508541;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a60000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 37427572;
            result[4] += 0;
            result[5] += 16259519;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 2147483;
            result[4] += 0;
            result[5] += 19327352;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51352869;
            result[3] += 0;
            result[4] += 0;
            result[5] += 2334221;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 3976821;
            result[2] += 0;
            result[3] += 0;
            result[4] += 49710269;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 48806446;
            result[2] += 3253763;
            result[3] += 0;
            result[4] += 1626881;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42580000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 45097156;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8589934;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 45379952;
            result[1] += 530242;
            result[2] += 0;
            result[3] += 1325607;
            result[4] += 5302428;
            result[5] += 1148859;
          } else {
            result[0] += 7669584;
            result[1] += 44739242;
            result[2] += 0;
            result[3] += 1278264;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 1073741;
            result[1] += 0;
            result[2] += 1073741;
            result[3] += 17448304;
            result[4] += 2952790;
            result[5] += 31138512;
          } else {
            result[0] += 42599539;
            result[1] += 3501332;
            result[2] += 0;
            result[3] += 3501332;
            result[4] += 3501332;
            result[5] += 583555;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 12632256;
            result[4] += 0;
            result[5] += 41054834;
          } else {
            result[0] += 0;
            result[1] += 1193046;
            result[2] += 6561755;
            result[3] += 37580963;
            result[4] += 3579139;
            result[5] += 4772185;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13421772;
            result[3] += 1917396;
            result[4] += 0;
            result[5] += 38347922;
          } else {
            result[0] += 2804549;
            result[1] += 0;
            result[2] += 34055244;
            result[3] += 12420147;
            result[4] += 1201949;
            result[5] += 3205199;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 847690;
            result[1] += 0;
            result[2] += 41678136;
            result[3] += 8053063;
            result[4] += 0;
            result[5] += 3108200;
          } else {
            result[0] += 41756626;
            result[1] += 0;
            result[2] += 9942053;
            result[3] += 0;
            result[4] += 1988410;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13421772;
            result[3] += 13421772;
            result[4] += 0;
            result[5] += 26843545;
          } else {
            result[0] += 271604;
            result[1] += 0;
            result[2] += 51242653;
            result[3] += 1810694;
            result[4] += 0;
            result[5] += 362138;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42240000))) ) ) {
            result[0] += 0;
            result[1] += 49213166;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4473924;
            result[5] += 0;
          } else {
            result[0] += 587814;
            result[1] += 391876;
            result[2] += 0;
            result[3] += 0;
            result[4] += 50748016;
            result[5] += 1959382;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 23008753;
            result[5] += 30678337;
          } else {
            result[0] += 0;
            result[1] += 7669584;
            result[2] += 0;
            result[3] += 46017506;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 51160639;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2526451;
            result[5] += 0;
          } else {
            result[0] += 11930464;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 5965232;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
            result[0] += 216044;
            result[1] += 108022;
            result[2] += 108022;
            result[3] += 4644959;
            result[4] += 1566323;
            result[5] += 47043718;
          } else {
            result[0] += 7265922;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4440285;
            result[4] += 20586779;
            result[5] += 21394104;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
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
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 53231149;
            result[2] += 0;
            result[3] += 455941;
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
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42890000))) ) ) {
            result[0] += 8500456;
            result[1] += 17000912;
            result[2] += 0;
            result[3] += 447392;
            result[4] += 25948760;
            result[5] += 1789569;
          } else {
            result[0] += 45962675;
            result[1] += 1247421;
            result[2] += 527755;
            result[3] += 1727198;
            result[4] += 2542820;
            result[5] += 1679220;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 521233;
            result[1] += 347489;
            result[2] += 6602296;
            result[3] += 26930417;
            result[4] += 2606169;
            result[5] += 16679484;
          } else {
            result[0] += 37523235;
            result[1] += 2309122;
            result[2] += 9813769;
            result[3] += 577280;
            result[4] += 2886402;
            result[5] += 577280;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24403223;
            result[3] += 4880644;
            result[4] += 24403223;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 46017506;
            result[2] += 3834792;
            result[3] += 0;
            result[4] += 3834792;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 894784;
            result[1] += 0;
            result[2] += 0;
            result[3] += 10737418;
            result[4] += 2684354;
            result[5] += 39370533;
          } else {
            result[0] += 3205199;
            result[1] += 0;
            result[2] += 11218198;
            result[3] += 25641595;
            result[4] += 3205199;
            result[5] += 10416898;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 29826161;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 5965232;
          } else {
            result[0] += 2684354;
            result[1] += 0;
            result[2] += 51002736;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c90000))) ) ) {
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
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42e90000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
            result[0] += 37580963;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 5368709;
          } else {
            result[0] += 190379;
            result[1] += 0;
            result[2] += 40550888;
            result[3] += 10851646;
            result[4] += 0;
            result[5] += 2094177;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42da0000))) ) ) {
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a70000))) ) ) {
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
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 46833419;
            result[3] += 6853671;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 90841;
            result[1] += 0;
            result[2] += 52596997;
            result[3] += 999252;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 1851279;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 44430696;
            result[5] += 7405116;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 42949672;
          } else {
            result[0] += 8053063;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40265318;
            result[5] += 5368709;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2147483;
            result[3] += 2147483;
            result[4] += 38654705;
            result[5] += 10737418;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 75509;
            result[3] += 1283657;
            result[4] += 1132639;
            result[5] += 51195285;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 4699088;
            result[1] += 2349544;
            result[2] += 1409726;
            result[3] += 13039971;
            result[4] += 3171885;
            result[5] += 29016874;
          } else {
            result[0] += 0;
            result[1] += 5752188;
            result[2] += 1278264;
            result[3] += 39626186;
            result[4] += 1278264;
            result[5] += 5752188;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 1293664;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3234162;
            result[4] += 45278269;
            result[5] += 3880994;
          } else {
            result[0] += 0;
            result[1] += 41297762;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4129776;
            result[5] += 8259552;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2876094;
            result[1] += 32595733;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17256565;
            result[5] += 958698;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
            result[0] += 9693502;
            result[1] += 2236962;
            result[2] += 745654;
            result[3] += 11930464;
            result[4] += 16404388;
            result[5] += 12676118;
          } else {
            result[0] += 49221345;
            result[1] += 687037;
            result[2] += 49074;
            result[3] += 834260;
            result[4] += 2650002;
            result[5] += 245370;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 2618882;
            result[2] += 0;
            result[3] += 19205138;
            result[4] += 3928323;
            result[5] += 27934746;
          } else {
            result[0] += 23987849;
            result[1] += 2665316;
            result[2] += 17134178;
            result[3] += 2665316;
            result[4] += 5711392;
            result[5] += 1523038;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428b0000))) ) ) {
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
            result[3] += 4473924;
            result[4] += 0;
            result[5] += 49213166;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 1917396;
            result[2] += 1278264;
            result[3] += 42182714;
            result[4] += 0;
            result[5] += 8308716;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30198988;
            result[3] += 10066329;
            result[4] += 0;
            result[5] += 13421772;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 19522578;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34164512;
            result[5] += 0;
          } else {
            result[0] += 583555;
            result[1] += 0;
            result[2] += 9336885;
            result[3] += 9920440;
            result[4] += 2334221;
            result[5] += 31511988;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 2556528;
            result[1] += 0;
            result[2] += 37495746;
            result[3] += 8521760;
            result[4] += 0;
            result[5] += 5113056;
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
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 1533916;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 27610504;
            result[4] += 0;
            result[5] += 3067833;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39953184;
            result[3] += 9988296;
            result[4] += 0;
            result[5] += 3745611;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 1558657;
            result[1] += 0;
            result[2] += 46586540;
            result[3] += 5022340;
            result[4] += 0;
            result[5] += 519552;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24778657;
            result[3] += 28908433;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 6316128;
            result[1] += 0;
            result[2] += 18948385;
            result[3] += 28422577;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1533916;
            result[1] += 0;
            result[2] += 49085340;
            result[3] += 3067833;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ee0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52716842;
            result[3] += 970248;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 46017506;
            result[3] += 7669584;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 483667;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52477922;
            result[5] += 725501;
          } else {
            result[0] += 0;
            result[1] += 37580963;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 16106127;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42890000))) ) ) {
            result[0] += 1309441;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 23569942;
            result[5] += 28807707;
          } else {
            result[0] += 35791394;
            result[1] += 10439156;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7456540;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 38475748;
            result[5] += 15211342;
          } else {
            result[0] += 0;
            result[1] += 705565;
            result[2] += 0;
            result[3] += 1731841;
            result[4] += 2244979;
            result[5] += 49004704;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 13263869;
            result[4] += 0;
            result[5] += 40423221;
          } else {
            result[0] += 989623;
            result[1] += 0;
            result[2] += 4453307;
            result[3] += 34884238;
            result[4] += 0;
            result[5] += 13359921;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b60000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 8947848;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 44739242;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 0;
            result[1] += 26843545;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 0;
          } else {
            result[0] += 126322;
            result[1] += 53434446;
            result[2] += 0;
            result[3] += 126322;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 28000594;
            result[1] += 231409;
            result[2] += 0;
            result[3] += 694229;
            result[4] += 18975609;
            result[5] += 5785246;
          } else {
            result[0] += 46791032;
            result[1] += 2349768;
            result[2] += 102163;
            result[3] += 510819;
            result[4] += 3371406;
            result[5] += 561901;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 3702558;
            result[1] += 4396787;
            result[2] += 3471148;
            result[3] += 21058298;
            result[4] += 3933967;
            result[5] += 17124330;
          } else {
            result[0] += 22260501;
            result[1] += 982080;
            result[2] += 20296339;
            result[3] += 4910404;
            result[4] += 2946242;
            result[5] += 2291522;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7669584;
            result[4] += 46017506;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5429031;
            result[3] += 15080643;
            result[4] += 0;
            result[5] += 33177415;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 2556528;
            result[1] += 2556528;
            result[2] += 2556528;
            result[3] += 20452225;
            result[4] += 0;
            result[5] += 25565281;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42794058;
            result[3] += 9336885;
            result[4] += 0;
            result[5] += 1556147;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42e30000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 17895697;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 26843545;
            result[1] += 0;
            result[2] += 26843545;
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
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a50000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 0;
            result[4] += 0;
            result[5] += 26843545;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4294967;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 6442450;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 23622320;
            result[3] += 30064771;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51897521;
            result[3] += 1789569;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41054834;
            result[3] += 0;
            result[4] += 0;
            result[5] += 12632256;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 1293664;
            result[1] += 0;
            result[2] += 45601685;
            result[3] += 5821491;
            result[4] += 0;
            result[5] += 970248;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52271612;
            result[3] += 1415478;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d00000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42860000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53127850;
            result[5] += 559240;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 17895697;
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
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42990000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x424a0000))) ) ) {
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
            result[4] += 17895697;
            result[5] += 35791394;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 52519980;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1167110;
            result[5] += 0;
          } else {
            result[0] += 4880644;
            result[1] += 2440322;
            result[2] += 0;
            result[3] += 14641933;
            result[4] += 17082256;
            result[5] += 14641933;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 0;
            result[1] += 2556528;
            result[2] += 0;
            result[3] += 3834792;
            result[4] += 43460978;
            result[5] += 3834792;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 24542670;
            result[5] += 29144420;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1014559;
            result[4] += 507279;
            result[5] += 52165252;
          } else {
            result[0] += 941878;
            result[1] += 188375;
            result[2] += 188375;
            result[3] += 9230412;
            result[4] += 3390763;
            result[5] += 39747285;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3976821;
            result[4] += 0;
            result[5] += 49710269;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 46976204;
            result[4] += 0;
            result[5] += 6710886;
          } else {
            result[0] += 725501;
            result[1] += 0;
            result[2] += 725501;
            result[3] += 26118044;
            result[4] += 1451002;
            result[5] += 24667041;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x422a0000))) ) ) {
            result[0] += 0;
            result[1] += 52009369;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1677721;
            result[5] += 0;
          } else {
            result[0] += 12679865;
            result[1] += 3776981;
            result[2] += 0;
            result[3] += 539568;
            result[4] += 34262615;
            result[5] += 2428059;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
            result[0] += 48673142;
            result[1] += 425712;
            result[2] += 47301;
            result[3] += 1277137;
            result[4] += 2790782;
            result[5] += 473014;
          } else {
            result[0] += 13927195;
            result[1] += 0;
            result[2] += 8536022;
            result[3] += 14825723;
            result[4] += 1797057;
            result[5] += 14601091;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 130308;
            result[1] += 53426474;
            result[2] += 0;
            result[3] += 0;
            result[4] += 130308;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 37580963;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 46976204;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6710886;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6710886;
            result[4] += 0;
            result[5] += 46976204;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2982616;
            result[3] += 37282702;
            result[4] += 0;
            result[5] += 13421772;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 12632256;
            result[2] += 3158064;
            result[3] += 6316128;
            result[4] += 6316128;
            result[5] += 25264513;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33635286;
            result[3] += 17464475;
            result[4] += 0;
            result[5] += 2587329;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 1731841;
            result[1] += 2309122;
            result[2] += 28864027;
            result[3] += 4618244;
            result[4] += 1731841;
            result[5] += 14432013;
          } else {
            result[0] += 46528812;
            result[1] += 0;
            result[2] += 7158278;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 236507;
            result[1] += 0;
            result[2] += 40442698;
            result[3] += 11352336;
            result[4] += 0;
            result[5] += 1655549;
          } else {
            result[0] += 236854;
            result[1] += 78951;
            result[2] += 51476446;
            result[3] += 1421128;
            result[4] += 78951;
            result[5] += 394758;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 508079;
            result[1] += 0;
            result[2] += 169359;
            result[3] += 338719;
            result[4] += 50638612;
            result[5] += 2032318;
          } else {
            result[0] += 0;
            result[1] += 38347922;
            result[2] += 0;
            result[3] += 0;
            result[4] += 15339168;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a60000))) ) ) {
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
            result[0] += 7255012;
            result[1] += 5804009;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37726064;
            result[5] += 2902004;
          } else {
            result[0] += 51198285;
            result[1] += 0;
            result[2] += 355543;
            result[3] += 711087;
            result[4] += 1422174;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 510225;
            result[1] += 283458;
            result[2] += 0;
            result[3] += 3514888;
            result[4] += 3741655;
            result[5] += 45636862;
          } else {
            result[0] += 2594124;
            result[1] += 676728;
            result[2] += 4173156;
            result[3] += 29437669;
            result[4] += 789516;
            result[5] += 16015896;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42bf0000))) ) ) {
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
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 3745611;
            result[1] += 47444406;
            result[2] += 0;
            result[3] += 1248537;
            result[4] += 1248537;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423a0000))) ) ) {
            result[0] += 0;
            result[1] += 51352869;
            result[2] += 0;
            result[3] += 2334221;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1789569;
            result[1] += 14316557;
            result[2] += 596523;
            result[3] += 0;
            result[4] += 35194870;
            result[5] += 1789569;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42950000))) ) ) {
            result[0] += 48401296;
            result[1] += 155464;
            result[2] += 51821;
            result[3] += 932787;
            result[4] += 2539254;
            result[5] += 1606467;
          } else {
            result[0] += 13234492;
            result[1] += 0;
            result[2] += 14483029;
            result[3] += 9239173;
            result[4] += 3495903;
            result[5] += 13234492;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2825636;
            result[3] += 45210182;
            result[4] += 0;
            result[5] += 5651272;
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
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
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
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42f70000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15907286;
            result[3] += 13918875;
            result[4] += 5965232;
            result[5] += 17895697;
          } else {
            result[0] += 706409;
            result[1] += 0;
            result[2] += 43797363;
            result[3] += 7064090;
            result[4] += 0;
            result[5] += 2119227;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 16519104;
            result[3] += 37167986;
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
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51309803;
            result[3] += 2377288;
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
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42140000))) ) ) {
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
            result[4] += 53178208;
            result[5] += 508882;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x425a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 5263440;
            result[2] += 0;
            result[3] += 4210752;
            result[4] += 24211825;
            result[5] += 20001073;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 44100110;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 9586980;
            result[5] += 0;
          } else {
            result[0] += 294337;
            result[1] += 235469;
            result[2] += 0;
            result[3] += 2707901;
            result[4] += 3532045;
            result[5] += 46917337;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 2334221;
            result[2] += 0;
            result[3] += 4668442;
            result[4] += 3112295;
            result[5] += 43572131;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 38100516;
            result[4] += 0;
            result[5] += 15586574;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 16777215;
            result[2] += 0;
            result[3] += 23488102;
            result[4] += 10066329;
            result[5] += 3355443;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 35791394;
            result[2] += 1491308;
            result[3] += 0;
            result[4] += 16404388;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
            result[0] += 4645998;
            result[1] += 25811101;
            result[2] += 0;
            result[3] += 0;
            result[4] += 22713769;
            result[5] += 516222;
          } else {
            result[0] += 47961719;
            result[1] += 328504;
            result[2] += 0;
            result[3] += 1501736;
            result[4] += 3519695;
            result[5] += 375434;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 1151465;
            result[1] += 1871131;
            result[2] += 11370724;
            result[3] += 19430984;
            result[4] += 4174063;
            result[5] += 15688721;
          } else {
            result[0] += 34672913;
            result[1] += 372827;
            result[2] += 13794599;
            result[3] += 372827;
            result[4] += 4101097;
            result[5] += 372827;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3579139;
            result[3] += 0;
            result[4] += 0;
            result[5] += 50107951;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10475529;
            result[3] += 22260501;
            result[4] += 0;
            result[5] += 20951059;
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
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42740000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
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
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42f90000))) ) ) {
            result[0] += 1006632;
            result[1] += 0;
            result[2] += 41607495;
            result[3] += 8724152;
            result[4] += 0;
            result[5] += 2348810;
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
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 0;
            result[5] += 32212254;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 49213166;
            result[3] += 0;
            result[4] += 0;
            result[5] += 4473924;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
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
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 35791394;
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
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 49793752;
            result[3] += 3790882;
            result[4] += 0;
            result[5] += 102456;
          } else {
            result[0] += 492542;
            result[1] += 0;
            result[2] += 52948278;
            result[3] += 246271;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
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
            result[4] += 50331647;
            result[5] += 3355443;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 1579032;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1579032;
            result[4] += 44212898;
            result[5] += 6316128;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
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
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39045157;
            result[5] += 14641933;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1552932;
            result[4] += 813440;
            result[5] += 51320718;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 14810232;
            result[4] += 0;
            result[5] += 38876859;
          } else {
            result[0] += 0;
            result[1] += 2684354;
            result[2] += 0;
            result[3] += 48318382;
            result[4] += 0;
            result[5] += 2684354;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 44430696;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3702558;
            result[4] += 3702558;
            result[5] += 1851279;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 909950;
            result[1] += 0;
            result[2] += 0;
            result[3] += 10464433;
            result[4] += 6369654;
            result[5] += 35943052;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 339791;
            result[3] += 33299588;
            result[4] += 0;
            result[5] += 20047711;
          }
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42db0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42870000))) ) ) {
            result[0] += 4450743;
            result[1] += 12239544;
            result[2] += 1669028;
            result[3] += 834514;
            result[4] += 33102403;
            result[5] += 1390857;
          } else {
            result[0] += 32915694;
            result[1] += 1725419;
            result[2] += 2787216;
            result[3] += 7034402;
            result[4] += 5640794;
            result[5] += 3583563;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 52085749;
            result[1] += 0;
            result[2] += 252843;
            result[3] += 0;
            result[4] += 1348498;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c00000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d40000))) ) ) {
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
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7227108;
            result[3] += 0;
            result[4] += 2064888;
            result[5] += 44395094;
          } else {
            result[0] += 0;
            result[1] += 33802983;
            result[2] += 1988410;
            result[3] += 15907286;
            result[4] += 0;
            result[5] += 1988410;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11930464;
            result[3] += 36454197;
            result[4] += 0;
            result[5] += 5302428;
          } else {
            result[0] += 1084587;
            result[1] += 542293;
            result[2] += 33622218;
            result[3] += 14641933;
            result[4] += 2711469;
            result[5] += 1084587;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 3303820;
            result[1] += 0;
            result[2] += 33038209;
            result[3] += 4129776;
            result[4] += 1651910;
            result[5] += 11563373;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 29283867;
            result[1] += 0;
            result[2] += 24403223;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 253539;
            result[1] += 0;
            result[2] += 50074146;
            result[3] += 3105864;
            result[4] += 0;
            result[5] += 253539;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 624268;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52022375;
            result[5] += 1040447;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 16953818;
            result[5] += 36733272;
          } else {
            result[0] += 7405116;
            result[1] += 3702558;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40728138;
            result[5] += 1851279;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 53254130;
            result[1] += 432960;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 4737096;
            result[1] += 0;
            result[2] += 0;
            result[3] += 14211288;
            result[4] += 23685481;
            result[5] += 11053224;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 472122;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2360613;
            result[4] += 2630397;
            result[5] += 48223957;
          } else {
            result[0] += 3592444;
            result[1] += 0;
            result[2] += 0;
            result[3] += 16964322;
            result[4] += 5388667;
            result[5] += 27741656;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42890000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x421e0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 8739759;
            result[1] += 4994148;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34959036;
            result[5] += 4994148;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 53558959;
            result[2] += 0;
            result[3] += 0;
            result[4] += 128131;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 17895697;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x423e0000))) ) ) {
            result[0] += 2334221;
            result[1] += 49018648;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2334221;
            result[5] += 0;
          } else {
            result[0] += 47008314;
            result[1] += 1130254;
            result[2] += 308251;
            result[3] += 1181629;
            result[4] += 3750390;
            result[5] += 308251;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 378078;
            result[1] += 3780781;
            result[2] += 7372523;
            result[3] += 20227178;
            result[4] += 3402702;
            result[5] += 18525827;
          } else {
            result[0] += 30045069;
            result[1] += 1477626;
            result[2] += 15761347;
            result[3] += 0;
            result[4] += 4432879;
            result[5] += 1970168;
          }
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5965232;
            result[3] += 0;
            result[4] += 29826161;
            result[5] += 17895697;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2386092;
            result[4] += 1193046;
            result[5] += 50107951;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1464193;
            result[3] += 35628705;
            result[4] += 0;
            result[5] += 16594191;
          } else {
            result[0] += 1533916;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 6135667;
            result[4] += 0;
            result[5] += 13805252;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 2684354;
            result[1] += 40265318;
            result[2] += 2684354;
            result[3] += 2684354;
            result[4] += 2684354;
            result[5] += 2684354;
          } else {
            result[0] += 17895697;
            result[1] += 0;
            result[2] += 13421772;
            result[3] += 0;
            result[4] += 22369621;
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
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 46017506;
            result[4] += 0;
            result[5] += 7669584;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 13421772;
            result[4] += 0;
            result[5] += 29527900;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 391876;
            result[1] += 0;
            result[2] += 30174496;
            result[3] += 18810075;
            result[4] += 0;
            result[5] += 4310642;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 50529027;
            result[3] += 2368548;
            result[4] += 0;
            result[5] += 789516;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e90000))) ) ) {
            result[0] += 16106127;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 5368709;
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
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 598740;
            result[1] += 0;
            result[2] += 48498004;
            result[3] += 4590346;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 104044;
            result[1] += 0;
            result[2] += 52750688;
            result[3] += 832358;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bf0000))) ) ) {
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42660000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 52274272;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1412818;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 0;
            result[1] += 5368709;
            result[2] += 0;
            result[3] += 0;
            result[4] += 48318382;
            result[5] += 0;
          } else {
            result[0] += 1248537;
            result[1] += 2497074;
            result[2] += 0;
            result[3] += 0;
            result[4] += 11236833;
            result[5] += 38704647;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4880644;
            result[5] += 48806446;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36317738;
            result[5] += 17369353;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 168562;
            result[2] += 84281;
            result[3] += 1348498;
            result[4] += 421405;
            result[5] += 51664343;
          } else {
            result[0] += 220934;
            result[1] += 441869;
            result[2] += 0;
            result[3] += 9279250;
            result[4] += 5523363;
            result[5] += 38221673;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
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
            result[3] += 1883757;
            result[4] += 0;
            result[5] += 51803333;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 20878313;
            result[4] += 994205;
            result[5] += 31814572;
          } else {
            result[0] += 0;
            result[1] += 950214;
            result[2] += 0;
            result[3] += 44660058;
            result[4] += 0;
            result[5] += 8076819;
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 26843545;
            result[2] += 0;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 7320966;
            result[1] += 26843545;
            result[2] += 7320966;
            result[3] += 0;
            result[4] += 12201611;
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
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 4283544;
            result[1] += 13136203;
            result[2] += 571139;
            result[3] += 1998987;
            result[4] += 32269368;
            result[5] += 1427848;
          } else {
            result[0] += 46301565;
            result[1] += 662803;
            result[2] += 94686;
            result[3] += 1799038;
            result[4] += 3834792;
            result[5] += 994205;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 568117;
            result[1] += 1988410;
            result[2] += 6533349;
            result[3] += 23008753;
            result[4] += 3408704;
            result[5] += 18179755;
          } else {
            result[0] += 39443577;
            result[1] += 1643482;
            result[2] += 4382619;
            result[3] += 0;
            result[4] += 7669584;
            result[5] += 547827;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 941878;
            result[1] += 941878;
            result[2] += 6279191;
            result[3] += 19465495;
            result[4] += 3139595;
            result[5] += 22919050;
          } else {
            result[0] += 38347922;
            result[1] += 15339168;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52108059;
            result[3] += 1579032;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 6710886;
            result[1] += 0;
            result[2] += 46976204;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 49213166;
            result[1] += 0;
            result[2] += 2236962;
            result[3] += 2236962;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 29782619;
            result[3] += 19593828;
            result[4] += 391876;
            result[5] += 3918765;
          } else {
            result[0] += 689099;
            result[1] += 0;
            result[2] += 49928368;
            result[3] += 2568460;
            result[4] += 0;
            result[5] += 501163;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421a0000))) ) ) {
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
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 258111;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52396536;
            result[5] += 1032444;
          } else {
            result[0] += 29392932;
            result[1] += 0;
            result[2] += 899783;
            result[3] += 299927;
            result[4] += 14696466;
            result[5] += 8397980;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 77247;
            result[3] += 1390457;
            result[4] += 2085685;
            result[5] += 50133700;
          } else {
            result[0] += 634813;
            result[1] += 1723065;
            result[2] += 1995128;
            result[3] += 18772344;
            result[4] += 5622634;
            result[5] += 24939104;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42900000))) ) ) {
            result[0] += 6357681;
            result[1] += 12715363;
            result[2] += 353204;
            result[3] += 1766022;
            result[4] += 27903159;
            result[5] += 4591659;
          } else {
            result[0] += 47679380;
            result[1] += 1146926;
            result[2] += 109231;
            result[3] += 1420004;
            result[4] += 1856928;
            result[5] += 1474620;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 4760431;
            result[1] += 793405;
            result[2] += 18248321;
            result[3] += 16397042;
            result[4] += 5818305;
            result[5] += 7669584;
          } else {
            result[0] += 35174301;
            result[1] += 7405116;
            result[2] += 3702558;
            result[3] += 0;
            result[4] += 5553837;
            result[5] += 1851279;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42880000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42880000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40265318;
            result[3] += 0;
            result[4] += 0;
            result[5] += 13421772;
          } else {
            result[0] += 1789569;
            result[1] += 894784;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 51002736;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 1309441;
            result[1] += 3491843;
            result[2] += 4801284;
            result[3] += 37100835;
            result[4] += 0;
            result[5] += 6983686;
          } else {
            result[0] += 1193046;
            result[1] += 4772185;
            result[2] += 21474836;
            result[3] += 7158278;
            result[4] += 7158278;
            result[5] += 11930464;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 16106127;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 26843545;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47444406;
            result[3] += 3745611;
            result[4] += 0;
            result[5] += 2497074;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 12201611;
            result[1] += 0;
            result[2] += 36604834;
            result[3] += 2440322;
            result[4] += 2440322;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42fc0000))) ) ) {
            result[0] += 1416961;
            result[1] += 0;
            result[2] += 43296041;
            result[3] += 8186887;
            result[4] += 0;
            result[5] += 787200;
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
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
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
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47068134;
            result[3] += 6618956;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 209306;
            result[1] += 0;
            result[2] += 53163825;
            result[3] += 313959;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 2913253;
            result[1] += 624268;
            result[2] += 0;
            result[3] += 0;
            result[4] += 48068674;
            result[5] += 2080895;
          } else {
            result[0] += 0;
            result[1] += 47370962;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6316128;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2206318;
            result[3] += 4412637;
            result[4] += 18385990;
            result[5] += 28682144;
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
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 11504376;
            result[4] += 30678337;
            result[5] += 11504376;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1624537;
            result[4] += 1856614;
            result[5] += 50205939;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 447392;
            result[2] += 0;
            result[3] += 11184810;
            result[4] += 8053063;
            result[5] += 34001824;
          } else {
            result[0] += 1959382;
            result[1] += 0;
            result[2] += 4310642;
            result[3] += 34093262;
            result[4] += 0;
            result[5] += 13323803;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 4319651;
            result[1] += 0;
            result[2] += 0;
            result[3] += 11107674;
            result[4] += 19129883;
            result[5] += 19129883;
          } else {
            result[0] += 42545235;
            result[1] += 3528915;
            result[2] += 198253;
            result[3] += 951617;
            result[4] += 5630403;
            result[5] += 832665;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 1092469;
            result[1] += 1716738;
            result[2] += 2497074;
            result[3] += 22161531;
            result[4] += 3277409;
            result[5] += 22941867;
          } else {
            result[0] += 21387540;
            result[1] += 0;
            result[2] += 23569942;
            result[3] += 5892485;
            result[4] += 872960;
            result[5] += 1964161;
          }
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
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42700000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2147483;
            result[4] += 0;
            result[5] += 51539607;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11930464;
            result[3] += 0;
            result[4] += 41756626;
            result[5] += 0;
          } else {
            result[0] += 1626881;
            result[1] += 0;
            result[2] += 14641933;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 10574730;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7669584;
            result[4] += 0;
            result[5] += 46017506;
          } else {
            result[0] += 0;
            result[1] += 1704352;
            result[2] += 40052274;
            result[3] += 8521760;
            result[4] += 0;
            result[5] += 3408704;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 33554431;
            result[4] += 0;
            result[5] += 2236962;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42182714;
            result[3] += 9586980;
            result[4] += 0;
            result[5] += 1917396;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 43620761;
            result[3] += 9395240;
            result[4] += 335544;
            result[5] += 335544;
          } else {
            result[0] += 838860;
            result[1] += 0;
            result[2] += 51170508;
            result[3] += 1677721;
            result[4] += 0;
            result[5] += 0;
          }
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
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48977697;
            result[3] += 4709393;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 103843;
            result[1] += 0;
            result[2] += 53167873;
            result[3] += 415374;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e60000))) ) ) {
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
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 5651272;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5651272;
            result[5] += 42384545;
          } else {
            result[0] += 9256395;
            result[1] += 1851279;
            result[2] += 0;
            result[3] += 5553837;
            result[4] += 33323022;
            result[5] += 3702558;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42620000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 7158278;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 46528812;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1654224;
            result[4] += 1654224;
            result[5] += 50378642;
          } else {
            result[0] += 185447;
            result[1] += 278171;
            result[2] += 370895;
            result[3] += 20306516;
            result[4] += 5934324;
            result[5] += 26611736;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426c0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c30000))) ) ) {
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
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 40265318;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13421772;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53567520;
            result[2] += 0;
            result[3] += 0;
            result[4] += 119570;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 12611061;
            result[1] += 5765056;
            result[2] += 0;
            result[3] += 2522212;
            result[4] += 30987180;
            result[5] += 1801580;
          } else {
            result[0] += 46288353;
            result[1] += 878600;
            result[2] += 1063568;
            result[3] += 1525989;
            result[4] += 2820768;
            result[5] += 1109810;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 12389328;
            result[1] += 1588375;
            result[2] += 635350;
            result[3] += 15883754;
            result[4] += 8259552;
            result[5] += 14930729;
          } else {
            result[0] += 915120;
            result[1] += 1525201;
            result[2] += 29588908;
            result[3] += 15862095;
            result[4] += 610080;
            result[5] += 5185684;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b60000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4737096;
            result[4] += 0;
            result[5] += 48949994;
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
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 0;
            result[4] += 5368709;
            result[5] += 37580963;
          } else {
            result[0] += 0;
            result[1] += 778073;
            result[2] += 20229918;
            result[3] += 24120287;
            result[4] += 0;
            result[5] += 8558811;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 35791394;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 17895697;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51130563;
            result[3] += 0;
            result[4] += 0;
            result[5] += 2556528;
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d70000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 43074526;
            result[3] += 8739759;
            result[4] += 0;
            result[5] += 1872805;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 394758;
            result[1] += 0;
            result[2] += 48160478;
            result[3] += 4934475;
            result[4] += 0;
            result[5] += 197379;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47370962;
            result[3] += 6316128;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 109789;
            result[1] += 0;
            result[2] += 52589195;
            result[3] += 988105;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x423c0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 683911;
            result[1] += 512933;
            result[2] += 0;
            result[3] += 341955;
            result[4] += 51122421;
            result[5] += 1025867;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8134407;
            result[5] += 45552683;
          } else {
            result[0] += 39045157;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14641933;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 5965232;
            result[2] += 0;
            result[3] += 0;
            result[4] += 22369621;
            result[5] += 25352237;
          } else {
            result[0] += 0;
            result[1] += 83494;
            result[2] += 0;
            result[3] += 1085431;
            result[4] += 918441;
            result[5] += 51599723;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
            result[0] += 3702558;
            result[1] += 1851279;
            result[2] += 0;
            result[3] += 0;
            result[4] += 38876859;
            result[5] += 9256395;
          } else {
            result[0] += 303316;
            result[1] += 0;
            result[2] += 151658;
            result[3] += 13497602;
            result[4] += 5156387;
            result[5] += 34578126;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 5368709;
            result[2] += 0;
            result[3] += 0;
            result[4] += 48318382;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 46976204;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6710886;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 44430696;
            result[2] += 0;
            result[3] += 0;
            result[4] += 9256395;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 3205199;
            result[1] += 3205199;
            result[2] += 1602599;
            result[3] += 18429896;
            result[4] += 8012998;
            result[5] += 19231196;
          } else {
            result[0] += 49040607;
            result[1] += 606063;
            result[2] += 0;
            result[3] += 252526;
            result[4] += 3383852;
            result[5] += 404042;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 1709779;
            result[1] += 854889;
            result[2] += 6668141;
            result[3] += 28553325;
            result[4] += 170977;
            result[5] += 15729975;
          } else {
            result[0] += 28633115;
            result[1] += 2236962;
            result[2] += 9842633;
            result[3] += 3131746;
            result[4] += 8053063;
            result[5] += 1789569;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3928323;
            result[3] += 7856647;
            result[4] += 6547206;
            result[5] += 35354913;
          } else {
            result[0] += 1835456;
            result[1] += 917728;
            result[2] += 12848192;
            result[3] += 25237521;
            result[4] += 2753184;
            result[5] += 10095008;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 18948385;
            result[3] += 31580641;
            result[4] += 0;
            result[5] += 3158064;
          } else {
            result[0] += 4270564;
            result[1] += 1220161;
            result[2] += 40875398;
            result[3] += 3660483;
            result[4] += 0;
            result[5] += 3660483;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42aa0000))) ) ) {
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
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7669584;
            result[3] += 38347922;
            result[4] += 0;
            result[5] += 7669584;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32595733;
            result[3] += 3834792;
            result[4] += 0;
            result[5] += 17256565;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 29964888;
            result[3] += 22473666;
            result[4] += 0;
            result[5] += 1248537;
          } else {
            result[0] += 406720;
            result[1] += 0;
            result[2] += 48399726;
            result[3] += 4880644;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 49629345;
            result[3] += 4057745;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 32212254;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 49392123;
            result[3] += 4294967;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 119570;
            result[1] += 0;
            result[2] += 53208809;
            result[3] += 358711;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 226527;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53234035;
            result[5] += 226527;
          } else {
            result[0] += 3038891;
            result[1] += 0;
            result[2] += 2025927;
            result[3] += 1012963;
            result[4] += 36466703;
            result[5] += 11142603;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a20000))) ) ) {
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42620000))) ) ) {
            result[0] += 52634403;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1052688;
            result[5] += 0;
          } else {
            result[0] += 4880644;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 48806446;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3030191;
            result[4] += 2832570;
            result[5] += 47824329;
          } else {
            result[0] += 0;
            result[1] += 603225;
            result[2] += 0;
            result[3] += 24531180;
            result[4] += 3016128;
            result[5] += 25536556;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 2334221;
            result[1] += 8753330;
            result[2] += 583555;
            result[3] += 2334221;
            result[4] += 38514652;
            result[5] += 1167110;
          } else {
            result[0] += 3834792;
            result[1] += 42182714;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7669584;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 26843545;
            result[1] += 26843545;
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
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 4129776;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26430567;
            result[5] += 1651910;
          } else {
            result[0] += 47295770;
            result[1] += 273913;
            result[2] += 45652;
            result[3] += 1506525;
            result[4] += 3150007;
            result[5] += 1415220;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e50000))) ) ) {
            result[0] += 4880644;
            result[1] += 187717;
            result[2] += 17269973;
            result[3] += 15017368;
            result[4] += 3566624;
            result[5] += 12764762;
          } else {
            result[0] += 42015984;
            result[1] += 0;
            result[2] += 8169774;
            result[3] += 0;
            result[4] += 2917776;
            result[5] += 583555;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429b0000))) ) ) {
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
            result[2] += 0;
            result[3] += 0;
            result[4] += 2556528;
            result[5] += 51130563;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7669584;
            result[3] += 15339168;
            result[4] += 0;
            result[5] += 30678337;
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
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5195524;
            result[3] += 38966437;
            result[4] += 1298881;
            result[5] += 8226247;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 31724190;
            result[3] += 7320966;
            result[4] += 0;
            result[5] += 14641933;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10956549;
            result[3] += 3286964;
            result[4] += 5478274;
            result[5] += 33965302;
          } else {
            result[0] += 2982616;
            result[1] += 0;
            result[2] += 47721858;
            result[3] += 2982616;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6710886;
            result[3] += 0;
            result[4] += 0;
            result[5] += 46976204;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 47721858;
            result[4] += 0;
            result[5] += 5965232;
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
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42e00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33554431;
            result[3] += 6710886;
            result[4] += 13421772;
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
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 815913;
            result[1] += 0;
            result[2] += 46180689;
            result[3] += 6364123;
            result[4] += 0;
            result[5] += 326365;
          } else {
            result[0] += 95189;
            result[1] += 0;
            result[2] += 52259243;
            result[3] += 1237468;
            result[4] += 0;
            result[5] += 95189;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 781850;
            result[1] += 260616;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51341538;
            result[5] += 1303084;
          } else {
            result[0] += 31426589;
            result[1] += 0;
            result[2] += 2618882;
            result[3] += 0;
            result[4] += 9166088;
            result[5] += 10475529;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 2982616;
            result[2] += 0;
            result[3] += 0;
            result[4] += 44739242;
            result[5] += 5965232;
          } else {
            result[0] += 0;
            result[1] += 3579139;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5368709;
            result[5] += 44739242;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 307368;
            result[4] += 717193;
            result[5] += 52662528;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6042702;
            result[4] += 6042702;
            result[5] += 41601685;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 5752188;
            result[2] += 1150437;
            result[3] += 12271335;
            result[4] += 1533916;
            result[5] += 32979213;
          } else {
            result[0] += 0;
            result[1] += 406720;
            result[2] += 406720;
            result[3] += 37418275;
            result[4] += 813440;
            result[5] += 14641933;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c20000))) ) ) {
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
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 24403223;
            result[2] += 0;
            result[3] += 0;
            result[4] += 29283867;
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
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
            result[0] += 33515640;
            result[1] += 2792970;
            result[2] += 0;
            result[3] += 0;
            result[4] += 16447490;
            result[5] += 930990;
          } else {
            result[0] += 2204542;
            result[1] += 129678;
            result[2] += 3890368;
            result[3] += 22045423;
            result[4] += 8299453;
            result[5] += 17117623;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 5921370;
            result[1] += 10658466;
            result[2] += 1973790;
            result[3] += 394758;
            result[4] += 32764915;
            result[5] += 1973790;
          } else {
            result[0] += 44029822;
            result[1] += 457690;
            result[2] += 2700373;
            result[3] += 2151145;
            result[4] += 2563066;
            result[5] += 1784992;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d50000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2982616;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 23860929;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4601750;
            result[3] += 47551423;
            result[4] += 0;
            result[5] += 1533916;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429c0000))) ) ) {
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
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
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
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d50000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 32212254;
            result[4] += 0;
            result[5] += 16106127;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 4294967;
            result[4] += 0;
            result[5] += 6442450;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 1263225;
            result[1] += 0;
            result[2] += 34738706;
            result[3] += 13895482;
            result[4] += 0;
            result[5] += 3789677;
          } else {
            result[0] += 2490638;
            result[1] += 0;
            result[2] += 48429077;
            result[3] += 2767375;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48371537;
            result[3] += 5315553;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52670640;
            result[3] += 1016450;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42340000))) ) ) {
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
            result[4] += 52300339;
            result[5] += 1386751;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42830000))) ) ) {
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
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 808540;
            result[4] += 1212810;
            result[5] += 51665739;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1193046;
            result[3] += 20281790;
            result[4] += 7158278;
            result[5] += 25053975;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42820000))) ) ) {
            result[0] += 19221304;
            result[1] += 2651214;
            result[2] += 0;
            result[3] += 3976821;
            result[4] += 22535322;
            result[5] += 5302428;
          } else {
            result[0] += 155614;
            result[1] += 0;
            result[2] += 311229;
            result[3] += 17895697;
            result[4] += 4668442;
            result[5] += 30656107;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b00000))) ) ) {
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
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 15828066;
            result[1] += 4491748;
            result[2] += 213892;
            result[3] += 5561212;
            result[4] += 23528207;
            result[5] += 4063963;
          } else {
            result[0] += 50111309;
            result[1] += 251815;
            result[2] += 50363;
            result[3] += 906536;
            result[4] += 1913798;
            result[5] += 453268;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 928307;
            result[1] += 0;
            result[2] += 13769887;
            result[3] += 13769887;
            result[4] += 773589;
            result[5] += 24445419;
          } else {
            result[0] += 30358771;
            result[1] += 4473924;
            result[2] += 10545678;
            result[3] += 1917396;
            result[4] += 5113056;
            result[5] += 1278264;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42860000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429e0000))) ) ) {
            result[0] += 0;
            result[1] += 14641933;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39045157;
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
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42830000))) ) ) {
            result[0] += 4473924;
            result[1] += 17895697;
            result[2] += 22369621;
            result[3] += 0;
            result[4] += 4473924;
            result[5] += 4473924;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5113056;
            result[4] += 2556528;
            result[5] += 46017506;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8753330;
            result[3] += 40848873;
            result[4] += 0;
            result[5] += 4084887;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36507222;
            result[3] += 2147483;
            result[4] += 0;
            result[5] += 15032385;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 4994148;
            result[1] += 0;
            result[2] += 44947332;
            result[3] += 1248537;
            result[4] += 0;
            result[5] += 2497074;
          } else {
            result[0] += 41756626;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 11930464;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a30000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24403223;
            result[3] += 29283867;
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
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 6710886;
            result[4] += 0;
            result[5] += 20132659;
          } else {
            result[0] += 457746;
            result[1] += 0;
            result[2] += 51202183;
            result[3] += 1961769;
            result[4] += 0;
            result[5] += 65392;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 282563;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53404527;
            result[5] += 0;
          } else {
            result[0] += 3579139;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3579139;
            result[4] += 35791394;
            result[5] += 10737418;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42680000))) ) ) {
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
            result[4] += 17895697;
            result[5] += 35791394;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
            result[0] += 3702558;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37025580;
            result[5] += 12958953;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 138905;
            result[3] += 2778115;
            result[4] += 1597416;
            result[5] += 49172652;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 923365;
            result[1] += 2770095;
            result[2] += 527637;
            result[3] += 16620573;
            result[4] += 8310286;
            result[5] += 24535132;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 2147483;
            result[2] += 0;
            result[3] += 0;
            result[4] += 47244640;
            result[5] += 4294967;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
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
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42850000))) ) ) {
            result[0] += 41257589;
            result[1] += 1775643;
            result[2] += 0;
            result[3] += 0;
            result[4] += 9922711;
            result[5] += 731147;
          } else {
            result[0] += 2890843;
            result[1] += 3166161;
            result[2] += 3992117;
            result[3] += 16519104;
            result[4] += 5644027;
            result[5] += 21474836;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42950000))) ) ) {
            result[0] += 50901085;
            result[1] += 527082;
            result[2] += 301189;
            result[3] += 150594;
            result[4] += 1807139;
            result[5] += 0;
          } else {
            result[0] += 31684184;
            result[1] += 0;
            result[2] += 6160813;
            result[3] += 2640348;
            result[4] += 11441511;
            result[5] += 1760232;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6316128;
            result[4] += 0;
            result[5] += 47370962;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5684515;
            result[3] += 41686447;
            result[4] += 0;
            result[5] += 6316128;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36507222;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 6442450;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 44739242;
            result[3] += 8947848;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15339168;
            result[3] += 38347922;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 17895697;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48035818;
            result[3] += 5651272;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13421772;
            result[3] += 0;
            result[4] += 0;
            result[5] += 40265318;
          } else {
            result[0] += 644245;
            result[1] += 0;
            result[2] += 43379169;
            result[3] += 7730941;
            result[4] += 0;
            result[5] += 1932735;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42e80000))) ) ) {
            result[0] += 10324440;
            result[1] += 0;
            result[2] += 28908433;
            result[3] += 2064888;
            result[4] += 12389328;
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47020066;
            result[3] += 6667024;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52123389;
            result[3] += 1563701;
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
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42e50000))) ) ) {
            result[0] += 0;
            result[1] += 229432;
            result[2] += 0;
            result[3] += 0;
            result[4] += 50475042;
            result[5] += 2982616;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42580000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
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
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 7320966;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 43925801;
            result[5] += 2440322;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13918875;
            result[5] += 39768215;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x424e0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42900000))) ) ) {
            result[0] += 0;
            result[1] += 50331647;
            result[2] += 0;
            result[3] += 3355443;
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
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8589934;
            result[3] += 4294967;
            result[4] += 36507222;
            result[5] += 4294967;
          } else {
            result[0] += 58165;
            result[1] += 116331;
            result[2] += 58165;
            result[3] += 3664449;
            result[4] += 2268468;
            result[5] += 47521509;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 35791394;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 48318382;
            result[4] += 0;
            result[5] += 5368709;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12632256;
            result[3] += 0;
            result[4] += 0;
            result[5] += 41054834;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6194664;
            result[3] += 24778657;
            result[4] += 0;
            result[5] += 22713769;
          }
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 6763728;
            result[1] += 2113665;
            result[2] += 0;
            result[3] += 0;
            result[4] += 44386965;
            result[5] += 422733;
          } else {
            result[0] += 0;
            result[1] += 49503681;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4183409;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
            result[0] += 48289466;
            result[1] += 963861;
            result[2] += 0;
            result[3] += 1012054;
            result[4] += 2602426;
            result[5] += 819282;
          } else {
            result[0] += 7644763;
            result[1] += 1911190;
            result[2] += 9729699;
            result[3] += 12857102;
            result[4] += 3822381;
            result[5] += 17721952;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42bc0000))) ) ) {
            result[0] += 0;
            result[1] += 40265318;
            result[2] += 0;
            result[3] += 0;
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
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 2697843;
            result[2] += 13759003;
            result[3] += 20503612;
            result[4] += 3237412;
            result[5] += 13489218;
          } else {
            result[0] += 2497074;
            result[1] += 4994148;
            result[2] += 40577452;
            result[3] += 4369879;
            result[4] += 0;
            result[5] += 1248537;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 50433328;
            result[1] += 0;
            result[2] += 3253763;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 17895697;
            result[1] += 0;
            result[2] += 22369621;
            result[3] += 0;
            result[4] += 13421772;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28121809;
            result[3] += 20452225;
            result[4] += 0;
            result[5] += 5113056;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 45335765;
            result[3] += 8351325;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 1769904;
            result[1] += 0;
            result[2] += 45722522;
            result[3] += 5899680;
            result[4] += 0;
            result[5] += 294984;
          } else {
            result[0] += 784389;
            result[1] += 0;
            result[2] += 52031158;
            result[3] += 871543;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x429b0000))) ) ) {
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
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x426e0000))) ) ) {
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
            result[4] += 49852298;
            result[5] += 3834792;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x424c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 193583;
            result[1] += 0;
            result[2] += 64527;
            result[3] += 2581110;
            result[4] += 2387526;
            result[5] += 48460343;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42620000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 165700;
            result[1] += 1325607;
            result[2] += 0;
            result[3] += 21541116;
            result[4] += 5302428;
            result[5] += 25352237;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42820000))) ) ) {
            result[0] += 1579032;
            result[1] += 9474192;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42633866;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 45733448;
            result[2] += 5965232;
            result[3] += 0;
            result[4] += 1988410;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42600000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 29710332;
            result[1] += 1389957;
            result[2] += 868723;
            result[3] += 6602296;
            result[4] += 9034720;
            result[5] += 6081062;
          } else {
            result[0] += 47878986;
            result[1] += 1717178;
            result[2] += 303031;
            result[3] += 1010105;
            result[4] += 2777789;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 1056139;
            result[1] += 1056139;
            result[2] += 11089464;
            result[3] += 22002906;
            result[4] += 3696488;
            result[5] += 14785952;
          } else {
            result[0] += 38809945;
            result[1] += 0;
            result[2] += 3234162;
            result[3] += 0;
            result[4] += 11642983;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
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
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14403853;
            result[3] += 18332177;
            result[4] += 1309441;
            result[5] += 19641618;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34164512;
            result[3] += 15862095;
            result[4] += 0;
            result[5] += 3660483;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 2825636;
            result[1] += 0;
            result[2] += 49448636;
            result[3] += 1412818;
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
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 18948385;
            result[3] += 31580641;
            result[4] += 0;
            result[5] += 3158064;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51769695;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1917396;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 508882;
            result[1] += 0;
            result[2] += 47834943;
            result[3] += 4834382;
            result[4] += 0;
            result[5] += 508882;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
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
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48737217;
            result[3] += 4949873;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 550072;
            result[1] += 0;
            result[2] += 52366916;
            result[3] += 770101;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42920000))) ) ) {
            result[0] += 460833;
            result[1] += 691250;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51152507;
            result[5] += 1382500;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7669584;
            result[4] += 0;
            result[5] += 46017506;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 26843545;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
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
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26272406;
            result[5] += 27414684;
          } else {
            result[0] += 78033;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2965275;
            result[4] += 312134;
            result[5] += 50331647;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 46281975;
            result[1] += 1851279;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4628197;
            result[5] += 925639;
          } else {
            result[0] += 333460;
            result[1] += 222306;
            result[2] += 555766;
            result[3] += 17562236;
            result[4] += 6780357;
            result[5] += 28232963;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
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
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42860000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 130625;
            result[1] += 53295214;
            result[2] += 0;
            result[3] += 0;
            result[4] += 261251;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42890000))) ) ) {
            result[0] += 6927366;
            result[1] += 13854733;
            result[2] += 346368;
            result[3] += 2424578;
            result[4] += 25284888;
            result[5] += 4849156;
          } else {
            result[0] += 47909108;
            result[1] += 481498;
            result[2] += 48149;
            result[3] += 1011147;
            result[4] += 3707539;
            result[5] += 529648;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 1646843;
            result[2] += 8069532;
            result[3] += 18279960;
            result[4] += 1152790;
            result[5] += 24537964;
          } else {
            result[0] += 25297582;
            result[1] += 1124336;
            result[2] += 19675897;
            result[3] += 3091926;
            result[4] += 2529758;
            result[5] += 1967589;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42df0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3501332;
            result[3] += 7002664;
            result[4] += 1167110;
            result[5] += 42015984;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8947848;
            result[3] += 0;
            result[4] += 44739242;
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
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 43925801;
            result[2] += 0;
            result[3] += 0;
            result[4] += 9761289;
            result[5] += 0;
          } else {
            result[0] += 4473924;
            result[1] += 1491308;
            result[2] += 7456540;
            result[3] += 20878313;
            result[4] += 0;
            result[5] += 19387005;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24778657;
            result[3] += 28908433;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 4473924;
            result[1] += 639132;
            result[2] += 37069658;
            result[3] += 8308716;
            result[4] += 0;
            result[5] += 3195660;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7953643;
            result[3] += 43745037;
            result[4] += 0;
            result[5] += 1988410;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48318382;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 2982616;
            result[1] += 0;
            result[2] += 44739242;
            result[3] += 5965232;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 458864;
            result[1] += 0;
            result[2] += 47951290;
            result[3] += 5276936;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 46528812;
            result[3] += 7158278;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53130171;
            result[3] += 556920;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42300000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 29826161;
            result[5] += 23860929;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42460000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 17895697;
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
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
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
            result[4] += 41485479;
            result[5] += 12201611;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42600000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 801299;
            result[2] += 0;
            result[3] += 4807799;
            result[4] += 22436396;
            result[5] += 25641595;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426c0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 50107951;
            result[5] += 3579139;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 52716842;
            result[1] += 0;
            result[2] += 323416;
            result[3] += 0;
            result[4] += 646832;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 17895697;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 248168;
            result[3] += 1406287;
            result[4] += 661782;
            result[5] += 51370853;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 234441;
            result[1] += 703324;
            result[2] += 0;
            result[3] += 8439892;
            result[4] += 12190955;
            result[5] += 32118478;
          } else {
            result[0] += 1885498;
            result[1] += 992367;
            result[2] += 4564891;
            result[3] += 26893163;
            result[4] += 1190841;
            result[5] += 18160328;
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
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
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 32212254;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          } else {
            result[0] += 111384;
            result[1] += 53352939;
            result[2] += 0;
            result[3] += 0;
            result[4] += 222768;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 50704475;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2982616;
            result[5] += 0;
          } else {
            result[0] += 5113056;
            result[1] += 6646973;
            result[2] += 511305;
            result[3] += 0;
            result[4] += 37836616;
            result[5] += 3579139;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 49426210;
            result[1] += 213044;
            result[2] += 159783;
            result[3] += 1011959;
            result[4] += 2396745;
            result[5] += 479349;
          } else {
            result[0] += 7856647;
            result[1] += 0;
            result[2] += 26188824;
            result[3] += 4583044;
            result[4] += 2618882;
            result[5] += 12439691;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4880644;
            result[4] += 43925801;
            result[5] += 4880644;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
            result[0] += 44739242;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5113056;
            result[4] += 0;
            result[5] += 3834792;
          } else {
            result[0] += 12715363;
            result[1] += 0;
            result[2] += 35320454;
            result[3] += 2825636;
            result[4] += 0;
            result[5] += 2825636;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 13421772;
            result[1] += 20132659;
            result[2] += 0;
            result[3] += 0;
            result[4] += 20132659;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 19418735;
            result[3] += 22845570;
            result[4] += 0;
            result[5] += 11422785;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41705422;
            result[3] += 10599168;
            result[4] += 0;
            result[5] += 1382500;
          } else {
            result[0] += 598184;
            result[1] += 0;
            result[2] += 50546620;
            result[3] += 2317966;
            result[4] += 0;
            result[5] += 224319;
          }
        }
      }
    }
  }
  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52905240;
            result[5] += 781850;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36368674;
            result[5] += 17318416;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7456540;
            result[5] += 46230550;
          } else {
            result[0] += 27531841;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 23402065;
            result[5] += 2753184;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42480000))) ) ) {
            result[0] += 0;
            result[1] += 41485479;
            result[2] += 0;
            result[3] += 0;
            result[4] += 9761289;
            result[5] += 2440322;
          } else {
            result[0] += 2105376;
            result[1] += 1052688;
            result[2] += 0;
            result[3] += 0;
            result[4] += 50529027;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42850000))) ) ) {
            result[0] += 2684354;
            result[1] += 2684354;
            result[2] += 0;
            result[3] += 16106127;
            result[4] += 29527900;
            result[5] += 2684354;
          } else {
            result[0] += 50485567;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3201523;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 370255;
            result[2] += 74051;
            result[3] += 2739892;
            result[4] += 1703176;
            result[5] += 48799714;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 15194459;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 33427811;
            result[5] += 5064819;
          } else {
            result[0] += 290200;
            result[1] += 580400;
            result[2] += 290200;
            result[3] += 12768821;
            result[4] += 5804009;
            result[5] += 33953457;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42820000))) ) ) {
            result[0] += 8724152;
            result[1] += 10066329;
            result[2] += 4026531;
            result[3] += 2684354;
            result[4] += 19461570;
            result[5] += 8724152;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 17412029;
            result[4] += 2902004;
            result[5] += 33373056;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 293372;
            result[3] += 45472672;
            result[4] += 0;
            result[5] += 7921046;
          } else {
            result[0] += 4818072;
            result[1] += 0;
            result[2] += 11012736;
            result[3] += 15830808;
            result[4] += 2753184;
            result[5] += 19272289;
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42640000))) ) ) {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 49213166;
            result[1] += 310689;
            result[2] += 0;
            result[3] += 621378;
            result[4] += 3417581;
            result[5] += 124275;
          } else {
            result[0] += 7405116;
            result[1] += 38876859;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7405116;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 679583;
            result[2] += 25824170;
            result[3] += 8155001;
            result[4] += 2038750;
            result[5] += 16989585;
          } else {
            result[0] += 38347922;
            result[1] += 0;
            result[2] += 4601750;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a50000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x425c0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 46727653;
            result[1] += 994205;
            result[2] += 1988410;
            result[3] += 994205;
            result[4] += 2982616;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42e50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41054834;
            result[3] += 3158064;
            result[4] += 0;
            result[5] += 9474192;
          } else {
            result[0] += 26843545;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 26843545;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 16310002;
            result[3] += 28542504;
            result[4] += 679583;
            result[5] += 8155001;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40802189;
            result[3] += 6442450;
            result[4] += 0;
            result[5] += 6442450;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 922987;
            result[1] += 0;
            result[2] += 43534231;
            result[3] += 7845391;
            result[4] += 0;
            result[5] += 1384480;
          } else {
            result[0] += 820346;
            result[1] += 91149;
            result[2] += 51408352;
            result[3] += 1276093;
            result[4] += 0;
            result[5] += 91149;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b60000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x422c0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42910000))) ) ) {
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
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42640000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 0;
            result[4] += 0;
            result[5] += 26843545;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 13421772;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40265318;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 473014;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52031542;
            result[5] += 1182535;
          } else {
            result[0] += 1964161;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34045472;
            result[5] += 17677456;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 42384545;
            result[1] += 4944863;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6357681;
            result[5] += 0;
          } else {
            result[0] += 144449;
            result[1] += 818547;
            result[2] += 96299;
            result[3] += 8137325;
            result[4] += 1974144;
            result[5] += 42516324;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
            result[0] += 4344620;
            result[1] += 17688810;
            result[2] += 0;
            result[3] += 0;
            result[4] += 29171020;
            result[5] += 2482640;
          } else {
            result[0] += 47094771;
            result[1] += 426840;
            result[2] += 331987;
            result[3] += 1375376;
            result[4] += 4078701;
            result[5] += 379414;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1012963;
            result[3] += 10636121;
            result[4] += 0;
            result[5] += 42038005;
          } else {
            result[0] += 10781424;
            result[1] += 1760232;
            result[2] += 12541656;
            result[3] += 11881569;
            result[4] += 7480988;
            result[5] += 9241220;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42840000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3158064;
            result[4] += 0;
            result[5] += 50529027;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 1278264;
            result[2] += 1278264;
            result[3] += 14060904;
            result[4] += 7669584;
            result[5] += 29400073;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10029456;
            result[3] += 33628177;
            result[4] += 0;
            result[5] += 10029456;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43010000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33444417;
            result[3] += 16722208;
            result[4] += 0;
            result[5] += 3520464;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47444406;
            result[3] += 4994148;
            result[4] += 0;
            result[5] += 1248537;
          }
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
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 19173961;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 7669584;
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e90000))) ) ) {
            result[0] += 841490;
            result[1] += 0;
            result[2] += 45103888;
            result[3] += 6563625;
            result[4] += 0;
            result[5] += 1178086;
          } else {
            result[0] += 32212254;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 276262;
            result[1] += 0;
            result[2] += 51753250;
            result[3] += 1657577;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 240749;
            result[4] += 51520347;
            result[5] += 1925994;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 13421772;
            result[4] += 0;
            result[5] += 40265318;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
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
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42680000))) ) ) {
            result[0] += 28036592;
            result[1] += 2982616;
            result[2] += 0;
            result[3] += 0;
            result[4] += 15509604;
            result[5] += 7158278;
          } else {
            result[0] += 181784;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2969150;
            result[4] += 2969150;
            result[5] += 47567005;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 1118481;
            result[2] += 0;
            result[3] += 4473924;
            result[4] += 3355443;
            result[5] += 44739242;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 565127;
            result[3] += 36168145;
            result[4] += 282563;
            result[5] += 16671254;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42240000))) ) ) {
            result[0] += 0;
            result[1] += 40265318;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13421772;
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
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0;
            result[1] += 53436216;
            result[2] += 0;
            result[3] += 0;
            result[4] += 250874;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 41297762;
            result[2] += 0;
            result[3] += 0;
            result[4] += 12389328;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
            result[0] += 9003425;
            result[1] += 9670345;
            result[2] += 333460;
            result[3] += 3334601;
            result[4] += 29011036;
            result[5] += 2334221;
          } else {
            result[0] += 46163775;
            result[1] += 445166;
            result[2] += 667749;
            result[3] += 1736149;
            result[4] += 3739399;
            result[5] += 934849;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 2076296;
            result[2] += 4152592;
            result[3] += 26398624;
            result[4] += 3559365;
            result[5] += 17500212;
          } else {
            result[0] += 33234865;
            result[1] += 1533916;
            result[2] += 13805252;
            result[3] += 0;
            result[4] += 4090445;
            result[5] += 1022611;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 43925801;
            result[4] += 0;
            result[5] += 9761289;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5965232;
            result[3] += 2982616;
            result[4] += 0;
            result[5] += 44739242;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1451002;
            result[3] += 46432078;
            result[4] += 0;
            result[5] += 5804009;
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
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3834792;
            result[3] += 42182714;
            result[4] += 0;
            result[5] += 7669584;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3158064;
            result[3] += 31580641;
            result[4] += 0;
            result[5] += 18948385;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 45145963;
            result[3] += 6100805;
            result[4] += 0;
            result[5] += 2440322;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9336885;
            result[3] += 4668442;
            result[4] += 0;
            result[5] += 39681763;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36156612;
            result[3] += 10956549;
            result[4] += 0;
            result[5] += 6573929;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 639132;
            result[1] += 0;
            result[2] += 44100110;
            result[3] += 8308716;
            result[4] += 0;
            result[5] += 639132;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8947848;
            result[3] += 44739242;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x43040000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 1731841;
            result[1] += 0;
            result[2] += 38100516;
            result[3] += 7793287;
            result[4] += 3463683;
            result[5] += 2597762;
          } else {
            result[0] += 584349;
            result[1] += 0;
            result[2] += 51787955;
            result[3] += 1241742;
            result[4] += 0;
            result[5] += 73043;
          }
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
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x423e0000))) ) ) {
            result[0] += 0;
            result[1] += 48806446;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 4880644;
          } else {
            result[0] += 235469;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52745212;
            result[5] += 706409;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42620000))) ) ) {
            result[0] += 47721858;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5965232;
            result[5] += 0;
          } else {
            result[0] += 1491308;
            result[1] += 8947848;
            result[2] += 0;
            result[3] += 7456540;
            result[4] += 13421772;
            result[5] += 22369621;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 2119227;
            result[2] += 0;
            result[3] += 5651272;
            result[4] += 29669181;
            result[5] += 16247409;
          } else {
            result[0] += 125290;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2819042;
            result[4] += 3069623;
            result[5] += 47673134;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3928323;
            result[3] += 14403853;
            result[4] += 654720;
            result[5] += 34700193;
          } else {
            result[0] += 2684354;
            result[1] += 0;
            result[2] += 894784;
            result[3] += 39668795;
            result[4] += 298261;
            result[5] += 10140895;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
            result[0] += 1342177;
            result[1] += 22145925;
            result[2] += 1006632;
            result[3] += 0;
            result[4] += 29192355;
            result[5] += 0;
          } else {
            result[0] += 43715429;
            result[1] += 757341;
            result[2] += 715266;
            result[3] += 1851279;
            result[4] += 3029365;
            result[5] += 3618408;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 1809677;
            result[1] += 603225;
            result[2] += 3016128;
            result[3] += 25637094;
            result[4] += 7540321;
            result[5] += 15080643;
          } else {
            result[0] += 13421772;
            result[1] += 1643482;
            result[2] += 23556580;
            result[3] += 4108705;
            result[4] += 2739137;
            result[5] += 8217411;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42940000))) ) ) {
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
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 26843545;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 4294967;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 49392123;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 5368709;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 16106127;
            result[4] += 8053063;
            result[5] += 18790481;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 22667882;
            result[3] += 25053975;
            result[4] += 0;
            result[5] += 5965232;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5965232;
            result[3] += 47721858;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 45097156;
            result[3] += 6442450;
            result[4] += 0;
            result[5] += 2147483;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 30678337;
            result[2] += 0;
            result[3] += 0;
            result[4] += 23008753;
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
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15339168;
            result[3] += 30678337;
            result[4] += 0;
            result[5] += 7669584;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47244640;
            result[3] += 2147483;
            result[4] += 0;
            result[5] += 4294967;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42db0000))) ) ) {
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
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 805306;
            result[1] += 0;
            result[2] += 45097156;
            result[3] += 6979321;
            result[4] += 268435;
            result[5] += 536870;
          } else {
            result[0] += 169895;
            result[1] += 0;
            result[2] += 51903184;
            result[3] += 1529062;
            result[4] += 0;
            result[5] += 84947;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d00000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51907408;
            result[5] += 1779682;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 9761289;
            result[4] += 9761289;
            result[5] += 34164512;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
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
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42680000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 15339168;
            result[5] += 38347922;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 44483589;
            result[5] += 9203501;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 15339168;
            result[2] += 0;
            result[3] += 0;
            result[4] += 38347922;
            result[5] += 0;
          } else {
            result[0] += 50465865;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2147483;
            result[5] += 1073741;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 8947848;
            result[4] += 40265318;
            result[5] += 4473924;
          } else {
            result[0] += 60594;
            result[1] += 0;
            result[2] += 181784;
            result[3] += 2181416;
            result[4] += 1817847;
            result[5] += 49445447;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 1602599;
            result[1] += 400649;
            result[2] += 801299;
            result[3] += 10016248;
            result[4] += 2403899;
            result[5] += 38462393;
          } else {
            result[0] += 0;
            result[1] += 282563;
            result[2] += 282563;
            result[3] += 33059945;
            result[4] += 847690;
            result[5] += 19214327;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 48318382;
            result[2] += 0;
            result[3] += 894784;
            result[4] += 4473924;
            result[5] += 0;
          } else {
            result[0] += 4684108;
            result[1] += 7566637;
            result[2] += 3242844;
            result[3] += 4323792;
            result[4] += 33149076;
            result[5] += 720632;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 46528812;
            result[1] += 1002159;
            result[2] += 0;
            result[3] += 906715;
            result[4] += 4390411;
            result[5] += 858993;
          } else {
            result[0] += 15455374;
            result[1] += 203360;
            result[2] += 6100805;
            result[3] += 16878896;
            result[4] += 2033601;
            result[5] += 13015052;
          }
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
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8947848;
            result[3] += 36537048;
            result[4] += 0;
            result[5] += 8202194;
          } else {
            result[0] += 1184274;
            result[1] += 1579032;
            result[2] += 22501207;
            result[3] += 9868950;
            result[4] += 1184274;
            result[5] += 17369353;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 1412818;
            result[1] += 0;
            result[2] += 41599646;
            result[3] += 8005969;
            result[4] += 0;
            result[5] += 2668656;
          } else {
            result[0] += 44739242;
            result[1] += 0;
            result[2] += 8947848;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 487326;
            result[1] += 0;
            result[2] += 51656565;
            result[3] += 1461978;
            result[4] += 0;
            result[5] += 81221;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423c0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42700000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e40000))) ) ) {
            result[0] += 0;
            result[1] += 44739242;
            result[2] += 0;
            result[3] += 5965232;
            result[4] += 0;
            result[5] += 2982616;
          } else {
            result[0] += 0;
            result[1] += 10737418;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 598740;
            result[1] += 3792025;
            result[2] += 0;
            result[3] += 0;
            result[4] += 47699683;
            result[5] += 1596642;
          } else {
            result[0] += 34378575;
            result[1] += 470939;
            result[2] += 235469;
            result[3] += 0;
            result[4] += 10596136;
            result[5] += 8005969;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 251461;
            result[1] += 125730;
            result[2] += 0;
            result[3] += 2263156;
            result[4] += 3017541;
            result[5] += 48029201;
          } else {
            result[0] += 2645166;
            result[1] += 587814;
            result[2] += 2351259;
            result[3] += 26745576;
            result[4] += 3820796;
            result[5] += 17536476;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42940000))) ) ) {
            result[0] += 4218271;
            result[1] += 20324398;
            result[2] += 0;
            result[3] += 2300875;
            result[4] += 24159191;
            result[5] += 2684354;
          } else {
            result[0] += 47032493;
            result[1] += 1150795;
            result[2] += 300207;
            result[3] += 700483;
            result[4] += 3152177;
            result[5] += 1350933;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 838860;
            result[2] += 2516582;
            result[3] += 13421772;
            result[4] += 4194303;
            result[5] += 32715571;
          } else {
            result[0] += 9761289;
            result[1] += 0;
            result[2] += 25290613;
            result[3] += 7986509;
            result[4] += 2662169;
            result[5] += 7986509;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d60000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3904515;
            result[3] += 36116770;
            result[4] += 0;
            result[5] += 13665805;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26247022;
            result[3] += 16702650;
            result[4] += 0;
            result[5] += 10737418;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42556840;
            result[3] += 9820809;
            result[4] += 0;
            result[5] += 1309441;
          } else {
            result[0] += 11930464;
            result[1] += 0;
            result[2] += 11930464;
            result[3] += 29826161;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ef0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38837470;
            result[3] += 12565063;
            result[4] += 0;
            result[5] += 2284557;
          } else {
            result[0] += 1234186;
            result[1] += 0;
            result[2] += 50601626;
            result[3] += 1234186;
            result[4] += 617093;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42aa0000))) ) ) {
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
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47721858;
            result[3] += 1988410;
            result[4] += 0;
            result[5] += 3976821;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36507222;
            result[3] += 17179869;
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
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48068674;
            result[3] += 5618416;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 94853;
            result[1] += 0;
            result[2] += 52833409;
            result[3] += 663974;
            result[4] += 0;
            result[5] += 94853;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 227487;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53232115;
            result[5] += 227487;
          } else {
            result[0] += 4601750;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41415756;
            result[5] += 7669584;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15339168;
            result[3] += 3834792;
            result[4] += 23008753;
            result[5] += 11504376;
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42660000))) ) ) {
            result[0] += 49906310;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3780781;
            result[5] += 0;
          } else {
            result[0] += 2556528;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30678337;
            result[5] += 20452225;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 81467;
            result[3] += 814675;
            result[4] += 1303480;
            result[5] += 51487468;
          } else {
            result[0] += 653581;
            result[1] += 1400532;
            result[2] += 560213;
            result[3] += 16713024;
            result[4] += 3734754;
            result[5] += 30624984;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42420000))) ) ) {
            result[0] += 0;
            result[1] += 49085340;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4601750;
            result[5] += 0;
          } else {
            result[0] += 1012963;
            result[1] += 4051855;
            result[2] += 0;
            result[3] += 6077783;
            result[4] += 40518559;
            result[5] += 2025927;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42660000))) ) ) {
            result[0] += 123418;
            result[1] += 53563672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 7158278;
            result[1] += 39370533;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7158278;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 10820654;
            result[1] += 12069191;
            result[2] += 416179;
            result[3] += 0;
            result[4] += 27467814;
            result[5] += 2913253;
          } else {
            result[0] += 48087193;
            result[1] += 51375;
            result[2] += 102750;
            result[3] += 1541256;
            result[4] += 1900882;
            result[5] += 2003633;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42dd0000))) ) ) {
            result[0] += 4382619;
            result[1] += 1278264;
            result[2] += 9495675;
            result[3] += 17347869;
            result[4] += 5660883;
            result[5] += 15521778;
          } else {
            result[0] += 41485479;
            result[1] += 0;
            result[2] += 7320966;
            result[3] += 0;
            result[4] += 1830241;
            result[5] += 3050402;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5804009;
            result[3] += 35549560;
            result[4] += 0;
            result[5] += 12333520;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 44739242;
            result[3] += 8947848;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a40000))) ) ) {
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
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42e90000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 10737418;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 46017506;
            result[3] += 5965232;
            result[4] += 0;
            result[5] += 1704352;
          }
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
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42da0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 39045157;
            result[4] += 0;
            result[5] += 14641933;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34738706;
            result[3] += 12632256;
            result[4] += 0;
            result[5] += 6316128;
          } else {
            result[0] += 1533916;
            result[1] += 0;
            result[2] += 46400985;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 383479;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ff0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47919056;
            result[3] += 4880644;
            result[4] += 0;
            result[5] += 887389;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52910892;
            result[3] += 776198;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e80000))) ) ) {
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
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 294984;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53392107;
            result[5] += 0;
          } else {
            result[0] += 958698;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42182714;
            result[5] += 10545678;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 1789569;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 16106127;
          } else {
            result[0] += 1265352;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2169175;
            result[4] += 1988410;
            result[5] += 48264152;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42820000))) ) ) {
            result[0] += 28716351;
            result[1] += 4994148;
            result[2] += 0;
            result[3] += 2497074;
            result[4] += 16230981;
            result[5] += 1248537;
          } else {
            result[0] += 626088;
            result[1] += 782610;
            result[2] += 2034787;
            result[3] += 21287009;
            result[4] += 939132;
            result[5] += 28017461;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42870000))) ) ) {
            result[0] += 3528728;
            result[1] += 16887488;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30498300;
            result[5] += 2772572;
          } else {
            result[0] += 47018487;
            result[1] += 193292;
            result[2] += 0;
            result[3] += 1401373;
            result[4] += 3527594;
            result[5] += 1546342;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 1485413;
            result[1] += 1485413;
            result[2] += 9336885;
            result[3] += 23978819;
            result[4] += 1485413;
            result[5] += 15915145;
          } else {
            result[0] += 23973480;
            result[1] += 675309;
            result[2] += 23298171;
            result[3] += 0;
            result[4] += 3714201;
            result[5] += 2025927;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a60000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 50107951;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3579139;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42600000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 26843545;
            result[2] += 13421772;
            result[3] += 13421772;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 46017506;
            result[2] += 7669584;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1533916;
            result[2] += 3067833;
            result[3] += 4601750;
            result[4] += 1533916;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6710886;
            result[3] += 0;
            result[4] += 40265318;
            result[5] += 6710886;
          } else {
            result[0] += 3158064;
            result[1] += 0;
            result[2] += 50529027;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 32212254;
            result[5] += 21474836;
          } else {
            result[0] += 0;
            result[1] += 1342177;
            result[2] += 4026531;
            result[3] += 46976204;
            result[4] += 0;
            result[5] += 1342177;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 26843545;
            result[1] += 0;
            result[2] += 0;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 288640;
            result[1] += 0;
            result[2] += 34348192;
            result[3] += 17029776;
            result[4] += 0;
            result[5] += 2020481;
          } else {
            result[0] += 2334221;
            result[1] += 0;
            result[2] += 46217582;
            result[3] += 4201598;
            result[4] += 0;
            result[5] += 933688;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 46459982;
            result[3] += 7227108;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52229523;
            result[3] += 1457568;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ee0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51130563;
            result[3] += 2556528;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 1137438;
            result[2] += 0;
            result[3] += 227487;
            result[4] += 50729751;
            result[5] += 1592413;
          } else {
            result[0] += 2982616;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 29826161;
            result[5] += 20878313;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 47721858;
            result[5] += 5965232;
          } else {
            result[0] += 49557314;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1376592;
            result[4] += 2753184;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 3579139;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30422685;
            result[5] += 19685266;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3284050;
            result[4] += 1285063;
            result[5] += 49117977;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 2767375;
            result[2] += 1660425;
            result[3] += 5534751;
            result[4] += 30441134;
            result[5] += 13283404;
          } else {
            result[0] += 174308;
            result[1] += 522926;
            result[2] += 697234;
            result[3] += 23183062;
            result[4] += 2266013;
            result[5] += 26843545;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
            result[0] += 0;
            result[1] += 51170508;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2516582;
            result[5] += 0;
          } else {
            result[0] += 6362914;
            result[1] += 6362914;
            result[2] += 397682;
            result[3] += 0;
            result[4] += 40563580;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 48333533;
            result[1] += 959599;
            result[2] += 0;
            result[3] += 454547;
            result[4] += 3434357;
            result[5] += 505052;
          } else {
            result[0] += 13545666;
            result[1] += 825955;
            result[2] += 13876048;
            result[3] += 14371621;
            result[4] += 2147483;
            result[5] += 8920316;
          }
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
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 41857732;
            result[4] += 0;
            result[5] += 11829359;
          } else {
            result[0] += 0;
            result[1] += 4129776;
            result[2] += 8259552;
            result[3] += 18583993;
            result[4] += 0;
            result[5] += 22713769;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42da0000))) ) ) {
            result[0] += 745654;
            result[1] += 0;
            result[2] += 2982616;
            result[3] += 3728270;
            result[4] += 9693502;
            result[5] += 36537048;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14454216;
            result[3] += 14454216;
            result[4] += 0;
            result[5] += 24778657;
          } else {
            result[0] += 2440322;
            result[1] += 0;
            result[2] += 41485479;
            result[3] += 4880644;
            result[4] += 2440322;
            result[5] += 2440322;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 7669584;
            result[2] += 7669584;
            result[3] += 0;
            result[4] += 0;
            result[5] += 38347922;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8947848;
            result[3] += 40265318;
            result[4] += 0;
            result[5] += 4473924;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 46976204;
            result[3] += 6710886;
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
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 417257;
            result[1] += 0;
            result[2] += 44646518;
            result[3] += 6954286;
            result[4] += 417257;
            result[5] += 1251771;
          } else {
            result[0] += 29826161;
            result[1] += 0;
            result[2] += 20878313;
            result[3] += 0;
            result[4] += 2982616;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38347922;
            result[3] += 15339168;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 89181;
            result[1] += 0;
            result[2] += 52527735;
            result[3] += 1070174;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 247405;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52697467;
            result[5] += 742217;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 9761289;
            result[1] += 0;
            result[2] += 24403223;
            result[3] += 0;
            result[4] += 19522578;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 19976592;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1248537;
            result[4] += 28716351;
            result[5] += 3745611;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3099716;
            result[4] += 2169801;
            result[5] += 48417572;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 6002283;
            result[1] += 2334221;
            result[2] += 333460;
            result[3] += 13004947;
            result[4] += 3001141;
            result[5] += 29011036;
          } else {
            result[0] += 2035529;
            result[1] += 254441;
            result[2] += 3816617;
            result[3] += 36893972;
            result[4] += 1781088;
            result[5] += 8905441;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
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
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 31724190;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21962900;
            result[5] += 0;
          } else {
            result[0] += 110923;
            result[1] += 53021548;
            result[2] += 0;
            result[3] += 221847;
            result[4] += 332771;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
            result[0] += 3080406;
            result[1] += 17162266;
            result[2] += 0;
            result[3] += 2640348;
            result[4] += 28163719;
            result[5] += 2640348;
          } else {
            result[0] += 47338489;
            result[1] += 230021;
            result[2] += 276026;
            result[3] += 1012095;
            result[4] += 3174301;
            result[5] += 1656157;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 785664;
            result[1] += 4975876;
            result[2] += 4452100;
            result[3] += 24617495;
            result[4] += 1833217;
            result[5] += 17022736;
          } else {
            result[0] += 16237071;
            result[1] += 0;
            result[2] += 23046165;
            result[3] += 5499653;
            result[4] += 4713988;
            result[5] += 4190211;
          }
        }
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 5368709;
            result[2] += 0;
            result[3] += 5368709;
            result[4] += 37580963;
            result[5] += 5368709;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1248537;
            result[3] += 17479518;
            result[4] += 0;
            result[5] += 34959036;
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
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8947848;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 8947848;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14810232;
            result[3] += 11107674;
            result[4] += 0;
            result[5] += 27769185;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
            result[0] += 1118481;
            result[1] += 0;
            result[2] += 41010972;
            result[3] += 7829367;
            result[4] += 0;
            result[5] += 3728270;
          } else {
            result[0] += 26843545;
            result[1] += 0;
            result[2] += 0;
            result[3] += 8947848;
            result[4] += 0;
            result[5] += 17895697;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 53687091;
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e20000))) ) ) {
            result[0] += 14641933;
            result[1] += 0;
            result[2] += 39045157;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 46017506;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7669584;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7669584;
            result[3] += 38347922;
            result[4] += 0;
            result[5] += 7669584;
          } else {
            result[0] += 283683;
            result[1] += 0;
            result[2] += 50992098;
            result[3] += 2340388;
            result[4] += 0;
            result[5] += 70920;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x423c0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 7669584;
            result[2] += 0;
            result[3] += 46017506;
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
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 0;
            result[1] += 53570633;
            result[2] += 0;
            result[3] += 0;
            result[4] += 116457;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 1364926;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 46179997;
            result[5] += 6142167;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 1331084;
            result[1] += 0;
            result[2] += 63384;
            result[3] += 2218474;
            result[4] += 3866484;
            result[5] += 46207661;
          } else {
            result[0] += 642959;
            result[1] += 0;
            result[2] += 0;
            result[3] += 26039846;
            result[4] += 964438;
            result[5] += 26039846;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
            result[0] += 14572210;
            result[1] += 17640044;
            result[2] += 0;
            result[3] += 1533916;
            result[4] += 14955689;
            result[5] += 4985229;
          } else {
            result[0] += 1538801;
            result[1] += 683911;
            result[2] += 2735647;
            result[3] += 17952689;
            result[4] += 4445427;
            result[5] += 26330611;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
            result[0] += 3928323;
            result[1] += 22696981;
            result[2] += 1309441;
            result[3] += 436480;
            result[4] += 24879383;
            result[5] += 436480;
          } else {
            result[0] += 40144735;
            result[1] += 408125;
            result[2] += 3339210;
            result[3] += 4489383;
            result[4] += 3265006;
            result[5] += 2040628;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d50000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42e50000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2236962;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 15658734;
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
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 53687091;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 40265318;
            result[4] += 0;
            result[5] += 13421772;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28908433;
            result[3] += 4129776;
            result[4] += 4129776;
            result[5] += 16519104;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 18673770;
            result[3] += 35013320;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 4709393;
            result[1] += 0;
            result[2] += 41442666;
            result[3] += 6593151;
            result[4] += 0;
            result[5] += 941878;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 23008753;
            result[3] += 15339168;
            result[4] += 0;
            result[5] += 15339168;
          } else {
            result[0] += 305735;
            result[1] += 0;
            result[2] += 50446298;
            result[3] += 2690469;
            result[4] += 0;
            result[5] += 244588;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 436480;
            result[1] += 218240;
            result[2] += 436480;
            result[3] += 0;
            result[4] += 51722929;
            result[5] += 872960;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 2825636;
            result[1] += 1883757;
            result[2] += 4709393;
            result[3] += 10360666;
            result[4] += 13186303;
            result[5] += 20721333;
          } else {
            result[0] += 0;
            result[1] += 48574034;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 5113056;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42680000))) ) ) {
            result[0] += 27514634;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 20132659;
            result[5] += 6039797;
          } else {
            result[0] += 0;
            result[1] += 398666;
            result[2] += 0;
            result[3] += 3255776;
            result[4] += 2325554;
            result[5] += 47707093;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 13634816;
            result[4] += 0;
            result[5] += 40052274;
          } else {
            result[0] += 1651910;
            result[1] += 1101273;
            result[2] += 3854457;
            result[3] += 34965438;
            result[4] += 0;
            result[5] += 12114010;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c00000))) ) ) {
            result[0] += 0;
            result[1] += 1789569;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51897521;
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
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 53554856;
            result[2] += 0;
            result[3] += 0;
            result[4] += 132234;
            result[5] += 0;
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42820000))) ) ) {
            result[0] += 24365679;
            result[1] += 1651910;
            result[2] += 0;
            result[3] += 0;
            result[4] += 23126746;
            result[5] += 4542753;
          } else {
            result[0] += 847690;
            result[1] += 282563;
            result[2] += 3390763;
            result[3] += 15258436;
            result[4] += 6498963;
            result[5] += 27408672;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42970000))) ) ) {
            result[0] += 44864852;
            result[1] += 1285652;
            result[2] += 354662;
            result[3] += 1329985;
            result[4] += 5053945;
            result[5] += 797991;
          } else {
            result[0] += 11445978;
            result[1] += 272523;
            result[2] += 19349154;
            result[3] += 15806351;
            result[4] += 2997756;
            result[5] += 3815326;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3355443;
            result[5] += 50331647;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 32212254;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 8169774;
            result[2] += 2334221;
            result[3] += 14005328;
            result[4] += 1167110;
            result[5] += 28010656;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 22605091;
            result[3] += 23546969;
            result[4] += 0;
            result[5] += 7535030;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 17895697;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48806446;
            result[3] += 4880644;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
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
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42700000))) ) ) {
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
          result[4] += 0;
          result[5] += 53687091;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 14454216;
            result[1] += 0;
            result[2] += 15486660;
            result[3] += 13421772;
            result[4] += 3097332;
            result[5] += 7227108;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48914905;
            result[3] += 2386092;
            result[4] += 0;
            result[5] += 2386092;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 389036;
            result[1] += 0;
            result[2] += 49796722;
            result[3] += 3501332;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 21474836;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 610080;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51551809;
            result[5] += 1525201;
          } else {
            result[0] += 958698;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34513130;
            result[5] += 18215263;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 48318382;
            result[2] += 0;
            result[3] += 1789569;
            result[4] += 1789569;
            result[5] += 1789569;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41564199;
            result[5] += 12122891;
          } else {
            result[0] += 84149;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1262235;
            result[4] += 504894;
            result[5] += 51835812;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
            result[0] += 37167986;
            result[1] += 1651910;
            result[2] += 0;
            result[3] += 2477865;
            result[4] += 4955731;
            result[5] += 7433597;
          } else {
            result[0] += 0;
            result[1] += 505290;
            result[2] += 1010580;
            result[3] += 17432514;
            result[4] += 3284386;
            result[5] += 31454319;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42820000))) ) ) {
            result[0] += 29539622;
            result[1] += 937765;
            result[2] += 234441;
            result[3] += 1641090;
            result[4] += 18989757;
            result[5] += 2344414;
          } else {
            result[0] += 3121342;
            result[1] += 312134;
            result[2] += 6086617;
            result[3] += 20288726;
            result[4] += 7647289;
            result[5] += 16230981;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42950000))) ) ) {
            result[0] += 44532631;
            result[1] += 3528281;
            result[2] += 333756;
            result[3] += 286076;
            result[4] += 4910986;
            result[5] += 95358;
          } else {
            result[0] += 10936259;
            result[1] += 0;
            result[2] += 17564295;
            result[3] += 10273455;
            result[4] += 5633830;
            result[5] += 9279250;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 53571882;
            result[2] += 0;
            result[3] += 0;
            result[4] += 115208;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 26843545;
            result[2] += 0;
            result[3] += 26843545;
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
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 8947848;
            result[4] += 0;
            result[5] += 44739242;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10391049;
            result[3] += 24245783;
            result[4] += 0;
            result[5] += 19050258;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 16106127;
            result[4] += 0;
            result[5] += 16106127;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 26843545;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51002736;
            result[3] += 2684354;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42700000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 5368709;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 0;
            result[4] += 0;
            result[5] += 16106127;
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
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 45115202;
            result[3] += 7669584;
            result[4] += 0;
            result[5] += 902304;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42f90000))) ) ) {
            result[0] += 160021;
            result[1] += 0;
            result[2] += 52006869;
            result[3] += 1520200;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 9256395;
            result[1] += 0;
            result[2] += 44430696;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42300000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x429e0000))) ) ) {
            result[0] += 0;
            result[1] += 40265318;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3355443;
            result[5] += 10066329;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 488064;
            result[1] += 244032;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52710962;
            result[5] += 244032;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6442450;
            result[4] += 32212254;
            result[5] += 15032385;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2556528;
            result[3] += 0;
            result[4] += 40904450;
            result[5] += 10226112;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1579032;
            result[4] += 1080390;
            result[5] += 51027668;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 41297762;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 11563373;
            result[5] += 825955;
          } else {
            result[0] += 366882;
            result[1] += 0;
            result[2] += 856058;
            result[3] += 19811637;
            result[4] += 5136350;
            result[5] += 27516162;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
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
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42980000))) ) ) {
            result[0] += 3834792;
            result[1] += 1095654;
            result[2] += 0;
            result[3] += 0;
            result[4] += 48756644;
            result[5] += 0;
          } else {
            result[0] += 6547206;
            result[1] += 31426589;
            result[2] += 2618882;
            result[3] += 2618882;
            result[4] += 7856647;
            result[5] += 2618882;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
            result[0] += 46116950;
            result[1] += 1044157;
            result[2] += 217532;
            result[3] += 1479222;
            result[4] += 3393511;
            result[5] += 1435716;
          } else {
            result[0] += 11271323;
            result[1] += 741534;
            result[2] += 7860264;
            result[3] += 13199312;
            result[4] += 3114444;
            result[5] += 17500212;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 30678337;
            result[2] += 7669584;
            result[3] += 2556528;
            result[4] += 10226112;
            result[5] += 2556528;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4353007;
            result[3] += 11608019;
            result[4] += 1451002;
            result[5] += 36275061;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2176503;
            result[3] += 39902567;
            result[4] += 0;
            result[5] += 11608019;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 43925801;
            result[3] += 4880644;
            result[4] += 0;
            result[5] += 4880644;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9474192;
            result[3] += 41054834;
            result[4] += 0;
            result[5] += 3158064;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12782640;
            result[3] += 12782640;
            result[4] += 0;
            result[5] += 28121809;
          } else {
            result[0] += 756156;
            result[1] += 0;
            result[2] += 46881685;
            result[3] += 4536937;
            result[4] += 0;
            result[5] += 1512312;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 662803;
            result[1] += 0;
            result[2] += 43745037;
            result[3] += 8616446;
            result[4] += 331401;
            result[5] += 331401;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 50846504;
            result[3] += 2840586;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42da0000))) ) ) {
            result[0] += 3834792;
            result[1] += 0;
            result[2] += 49852298;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 41756626;
            result[1] += 5965232;
            result[2] += 5965232;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 310929;
            result[1] += 0;
            result[2] += 52961589;
            result[3] += 414572;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 872960;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52595890;
            result[5] += 218240;
          } else {
            result[0] += 0;
            result[1] += 2556528;
            result[2] += 0;
            result[3] += 0;
            result[4] += 33234865;
            result[5] += 17895697;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 50704475;
            result[5] += 2982616;
          } else {
            result[0] += 10157017;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 15961027;
            result[5] += 27569046;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
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
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 149130;
            result[3] += 1193046;
            result[4] += 1938700;
            result[5] += 50406213;
          } else {
            result[0] += 749819;
            result[1] += 299927;
            result[2] += 149963;
            result[3] += 14096610;
            result[4] += 9747656;
            result[5] += 28643112;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 13421772;
            result[2] += 0;
            result[3] += 40265318;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 0;
            result[1] += 51955249;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1731841;
            result[5] += 0;
          } else {
            result[0] += 8765239;
            result[1] += 6573929;
            result[2] += 0;
            result[3] += 2191309;
            result[4] += 35060957;
            result[5] += 1095654;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
            result[0] += 3158064;
            result[1] += 526344;
            result[2] += 526344;
            result[3] += 20001073;
            result[4] += 526344;
            result[5] += 28948921;
          } else {
            result[0] += 46791937;
            result[1] += 1711900;
            result[2] += 618186;
            result[3] += 903502;
            result[4] += 2472744;
            result[5] += 1188819;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 168827;
            result[1] += 337654;
            result[2] += 7766057;
            result[3] += 29544782;
            result[4] += 1181791;
            result[5] += 14687977;
          } else {
            result[0] += 20596934;
            result[1] += 3038891;
            result[2] += 19583970;
            result[3] += 1012963;
            result[4] += 4727165;
            result[5] += 4727165;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 8947848;
            result[1] += 8947848;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 8947848;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2902004;
            result[4] += 0;
            result[5] += 50785086;
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
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42640000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 3253763;
            result[1] += 0;
            result[2] += 3253763;
            result[3] += 37418275;
            result[4] += 0;
            result[5] += 9761289;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 2618882;
            result[1] += 0;
            result[2] += 26188824;
            result[3] += 22260501;
            result[4] += 0;
            result[5] += 2618882;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 49710269;
            result[3] += 1988410;
            result[4] += 0;
            result[5] += 1988410;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42bc0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15339168;
            result[3] += 30678337;
            result[4] += 0;
            result[5] += 7669584;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 725501;
            result[1] += 0;
            result[2] += 44799701;
            result[3] += 7799138;
            result[4] += 0;
            result[5] += 362750;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 7953643;
            result[1] += 0;
            result[2] += 43745037;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1988410;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52605483;
            result[3] += 1081608;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42dc0000))) ) ) {
            result[0] += 210537;
            result[1] += 631612;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52213327;
            result[5] += 631612;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 20132659;
            result[5] += 33554431;
          } else {
            result[0] += 44921851;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6573929;
            result[5] += 2191309;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1223637;
            result[4] += 1835456;
            result[5] += 50627997;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 14683648;
            result[4] += 1376592;
            result[5] += 37626850;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 255652;
            result[1] += 255652;
            result[2] += 0;
            result[3] += 11504376;
            result[4] += 5113056;
            result[5] += 36558352;
          } else {
            result[0] += 1059613;
            result[1] += 0;
            result[2] += 1412818;
            result[3] += 35673659;
            result[4] += 0;
            result[5] += 15541000;
          }
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42460000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42aa0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x425a0000))) ) ) {
            result[0] += 0;
            result[1] += 26843545;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
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
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 10737418;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 7770500;
            result[1] += 8830113;
            result[2] += 0;
            result[3] += 1059613;
            result[4] += 33907636;
            result[5] += 2119227;
          } else {
            result[0] += 0;
            result[1] += 50947953;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2739137;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
            result[0] += 46657211;
            result[1] += 962997;
            result[2] += 385198;
            result[3] += 1540795;
            result[4] += 2840841;
            result[5] += 1300046;
          } else {
            result[0] += 10623594;
            result[1] += 569121;
            result[2] += 10433886;
            result[3] += 15555976;
            result[4] += 3604433;
            result[5] += 12900078;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 32212254;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4129776;
            result[4] += 4129776;
            result[5] += 45427538;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3221225;
            result[3] += 38654705;
            result[4] += 1073741;
            result[5] += 10737418;
          } else {
            result[0] += 0;
            result[1] += 2684354;
            result[2] += 16106127;
            result[3] += 10737418;
            result[4] += 2684354;
            result[5] += 21474836;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42dd0000))) ) ) {
            result[0] += 0;
            result[1] += 29826161;
            result[2] += 17895697;
            result[3] += 5965232;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 49213166;
            result[1] += 0;
            result[2] += 4473924;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 8947848;
            result[4] += 0;
            result[5] += 44739242;
          } else {
            result[0] += 1717986;
            result[1] += 0;
            result[2] += 36507222;
            result[3] += 11166914;
            result[4] += 1288490;
            result[5] += 3006477;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e50000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17256565;
            result[3] += 24926149;
            result[4] += 0;
            result[5] += 11504376;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41010972;
            result[3] += 12676118;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ae0000))) ) ) {
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37167986;
            result[3] += 15142512;
            result[4] += 0;
            result[5] += 1376592;
          } else {
            result[0] += 1272205;
            result[1] += 0;
            result[2] += 47326061;
            result[3] += 4325500;
            result[4] += 0;
            result[5] += 763323;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51224380;
            result[3] += 2462710;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 190379;
            result[1] += 0;
            result[2] += 53115951;
            result[3] += 380759;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 1082401;
            result[1] += 649440;
            result[2] += 0;
            result[3] += 0;
            result[4] += 50872848;
            result[5] += 1082401;
          } else {
            result[0] += 0;
            result[1] += 40265318;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 13421772;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 13421772;
            result[2] += 0;
            result[3] += 13421772;
            result[4] += 26843545;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
            result[0] += 5368709;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 5368709;
          } else {
            result[0] += 1044256;
            result[1] += 61426;
            result[2] += 0;
            result[3] += 2211367;
            result[4] += 1597098;
            result[5] += 48772940;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42820000))) ) ) {
            result[0] += 22667882;
            result[1] += 1193046;
            result[2] += 0;
            result[3] += 0;
            result[4] += 22667882;
            result[5] += 7158278;
          } else {
            result[0] += 354370;
            result[1] += 531555;
            result[2] += 0;
            result[3] += 24274361;
            result[4] += 885925;
            result[5] += 27640878;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b20000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 1789569;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51897521;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 49213166;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4473924;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 44050946;
            result[2] += 0;
            result[3] += 0;
            result[4] += 9636144;
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
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 14725602;
            result[1] += 4601750;
            result[2] += 0;
            result[3] += 3374617;
            result[4] += 27610504;
            result[5] += 3374617;
          } else {
            result[0] += 47192308;
            result[1] += 700875;
            result[2] += 420525;
            result[3] += 1261576;
            result[4] += 2616603;
            result[5] += 1495201;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 1898900;
            result[1] += 2244154;
            result[2] += 9494501;
            result[3] += 22096294;
            result[4] += 4315682;
            result[5] += 13637556;
          } else {
            result[0] += 23008753;
            result[1] += 0;
            result[2] += 21304401;
            result[3] += 2130440;
            result[4] += 5965232;
            result[5] += 1278264;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b20000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 16519104;
            result[4] += 0;
            result[5] += 37167986;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 16106127;
            result[3] += 34896609;
            result[4] += 0;
            result[5] += 2684354;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 21474836;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
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
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 31317469;
            result[3] += 4473924;
            result[4] += 0;
            result[5] += 17895697;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2236962;
            result[3] += 44739242;
            result[4] += 0;
            result[5] += 6710886;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 49213166;
            result[3] += 0;
            result[4] += 0;
            result[5] += 4473924;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 583555;
            result[1] += 0;
            result[2] += 44787872;
            result[3] += 7732108;
            result[4] += 0;
            result[5] += 583555;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 305619;
            result[1] += 0;
            result[2] += 51853376;
            result[3] += 1426222;
            result[4] += 0;
            result[5] += 101873;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428c0000))) ) ) {
            result[0] += 0;
            result[1] += 665542;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52799701;
            result[5] += 221847;
          } else {
            result[0] += 0;
            result[1] += 2147483;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40802189;
            result[5] += 10737418;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 10737418;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 83106;
            result[1] += 0;
            result[2] += 0;
            result[3] += 332427;
            result[4] += 1080390;
            result[5] += 52191166;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 18407002;
            result[4] += 766958;
            result[5] += 34513130;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 40609466;
            result[1] += 688296;
            result[2] += 0;
            result[3] += 4818072;
            result[4] += 4129776;
            result[5] += 3441480;
          } else {
            result[0] += 990130;
            result[1] += 220029;
            result[2] += 330043;
            result[3] += 16062121;
            result[4] += 4290566;
            result[5] += 31794199;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b60000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 6316128;
            result[2] += 0;
            result[3] += 0;
            result[4] += 44212898;
            result[5] += 3158064;
          } else {
            result[0] += 0;
            result[1] += 26843545;
            result[2] += 0;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42600000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 47721858;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5965232;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 17895697;
            result[1] += 397682;
            result[2] += 0;
            result[3] += 3976821;
            result[4] += 24656293;
            result[5] += 6760596;
          } else {
            result[0] += 43629492;
            result[1] += 1769392;
            result[2] += 884696;
            result[3] += 1396888;
            result[4] += 4935673;
            result[5] += 1070948;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 2924588;
            result[1] += 2924588;
            result[2] += 5222479;
            result[3] += 17129733;
            result[4] += 10444959;
            result[5] += 15040741;
          } else {
            result[0] += 26155249;
            result[1] += 0;
            result[2] += 23402065;
            result[3] += 4129776;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13421772;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 13421772;
          } else {
            result[0] += 0;
            result[1] += 1167110;
            result[2] += 1167110;
            result[3] += 7002664;
            result[4] += 3501332;
            result[5] += 40848873;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d50000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 1660425;
            result[2] += 7748652;
            result[3] += 38743261;
            result[4] += 0;
            result[5] += 5534751;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 8947848;
            result[4] += 0;
            result[5] += 8947848;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 17895697;
            result[1] += 35791394;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2147483;
            result[1] += 0;
            result[2] += 36507222;
            result[3] += 2147483;
            result[4] += 0;
            result[5] += 12884901;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42f00000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12389328;
            result[3] += 18583993;
            result[4] += 12389328;
            result[5] += 10324440;
          } else {
            result[0] += 303316;
            result[1] += 0;
            result[2] += 42767682;
            result[3] += 9099506;
            result[4] += 0;
            result[5] += 1516584;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42980000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
            result[0] += 37580963;
            result[1] += 0;
            result[2] += 16106127;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 658288;
            result[1] += 0;
            result[2] += 51419652;
            result[3] += 1536006;
            result[4] += 0;
            result[5] += 73143;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53216151;
            result[5] += 470939;
          } else {
            result[0] += 7158278;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 46528812;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 0;
          } else {
            result[0] += 52591436;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1095654;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 11184810;
            result[5] += 42502280;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 46528812;
            result[5] += 7158278;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2982616;
            result[5] += 50704475;
          } else {
            result[0] += 0;
            result[1] += 5113056;
            result[2] += 0;
            result[3] += 6391320;
            result[4] += 34513130;
            result[5] += 7669584;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1561175;
            result[4] += 346927;
            result[5] += 51778987;
          } else {
            result[0] += 0;
            result[1] += 470939;
            result[2] += 0;
            result[3] += 7064090;
            result[4] += 8005969;
            result[5] += 38146091;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1293664;
            result[3] += 18111307;
            result[4] += 0;
            result[5] += 34282118;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 40190336;
            result[4] += 299927;
            result[5] += 13196826;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 3158064;
            result[2] += 3158064;
            result[3] += 0;
            result[4] += 0;
            result[5] += 47370962;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 5237764;
            result[1] += 6547206;
            result[2] += 0;
            result[3] += 872960;
            result[4] += 41029159;
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
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 27917287;
            result[2] += 0;
            result[3] += 0;
            result[4] += 25769803;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
            result[0] += 11671106;
            result[1] += 24509324;
            result[2] += 0;
            result[3] += 1167110;
            result[4] += 14005328;
            result[5] += 2334221;
          } else {
            result[0] += 49553742;
            result[1] += 232210;
            result[2] += 46442;
            result[3] += 882400;
            result[4] += 2600758;
            result[5] += 371536;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42dd0000))) ) ) {
            result[0] += 2113665;
            result[1] += 3804597;
            result[2] += 1690932;
            result[3] += 19868451;
            result[4] += 2536398;
            result[5] += 23673048;
          } else {
            result[0] += 39768215;
            result[1] += 0;
            result[2] += 994205;
            result[3] += 0;
            result[4] += 10936259;
            result[5] += 1988410;
          }
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 40265318;
            result[4] += 0;
            result[5] += 13421772;
          } else {
            result[0] += 0;
            result[1] += 1626881;
            result[2] += 4880644;
            result[3] += 16268815;
            result[4] += 0;
            result[5] += 30910749;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 285569;
            result[1] += 285569;
            result[2] += 23702279;
            result[3] += 19133165;
            result[4] += 856708;
            result[5] += 9423797;
          } else {
            result[0] += 865920;
            result[1] += 0;
            result[2] += 47625645;
            result[3] += 2597762;
            result[4] += 0;
            result[5] += 2597762;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7856647;
            result[3] += 9166088;
            result[4] += 0;
            result[5] += 36664354;
          } else {
            result[0] += 5368709;
            result[1] += 0;
            result[2] += 45097156;
            result[3] += 0;
            result[4] += 1073741;
            result[5] += 2147483;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 45311904;
            result[3] += 7945689;
            result[4] += 0;
            result[5] += 429496;
          } else {
            result[0] += 1569314;
            result[1] += 0;
            result[2] += 50218079;
            result[3] += 1569314;
            result[4] += 0;
            result[5] += 330382;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42400000))) ) ) {
            result[0] += 0;
            result[1] += 48806446;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4880644;
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
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30537611;
            result[5] += 23149479;
          } else {
            result[0] += 23198125;
            result[1] += 12593268;
            result[2] += 0;
            result[3] += 1325607;
            result[4] += 16570089;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 10737418;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 85353;
            result[3] += 938883;
            result[4] += 853530;
            result[5] += 51809323;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2526451;
            result[4] += 34738706;
            result[5] += 16421933;
          } else {
            result[0] += 1756119;
            result[1] += 0;
            result[2] += 2508742;
            result[3] += 21951497;
            result[4] += 627185;
            result[5] += 26843545;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 0;
            result[1] += 22713769;
            result[2] += 0;
            result[3] += 4129776;
            result[4] += 20648881;
            result[5] += 6194664;
          } else {
            result[0] += 1917396;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2876094;
            result[4] += 47934902;
            result[5] += 958698;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 229432;
            result[1] += 52769363;
            result[2] += 0;
            result[3] += 114716;
            result[4] += 573580;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 28256363;
            result[2] += 0;
            result[3] += 0;
            result[4] += 25430727;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
            result[0] += 8053063;
            result[1] += 23488102;
            result[2] += 671088;
            result[3] += 671088;
            result[4] += 20132659;
            result[5] += 671088;
          } else {
            result[0] += 44005812;
            result[1] += 308040;
            result[2] += 1276168;
            result[3] += 1672220;
            result[4] += 2992395;
            result[5] += 3432453;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 1260260;
            result[1] += 252052;
            result[2] += 6805405;
            result[3] += 19660061;
            result[4] += 2016416;
            result[5] += 23692894;
          } else {
            result[0] += 13952577;
            result[1] += 2729852;
            result[2] += 22142133;
            result[3] += 4853070;
            result[4] += 5459704;
            result[5] += 4549753;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ed0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
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
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 10737418;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 21474836;
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b20000))) ) ) {
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
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 2236962;
            result[1] += 8947848;
            result[2] += 2236962;
            result[3] += 8947848;
            result[4] += 17895697;
            result[5] += 13421772;
          } else {
            result[0] += 4006499;
            result[1] += 0;
            result[2] += 39263693;
            result[3] += 801299;
            result[4] += 0;
            result[5] += 9615598;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 29940877;
            result[3] += 13421772;
            result[4] += 0;
            result[5] += 10324440;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 18512790;
            result[3] += 35174301;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 50331647;
            result[3] += 3355443;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42245579;
            result[3] += 11441511;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 32212254;
            result[4] += 0;
            result[5] += 10737418;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47721858;
            result[3] += 5965232;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48753682;
            result[3] += 4353007;
            result[4] += 0;
            result[5] += 580400;
          } else {
            result[0] += 226527;
            result[1] += 0;
            result[2] += 52894243;
            result[3] += 566319;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53482957;
            result[5] += 204133;
          } else {
            result[0] += 778073;
            result[1] += 5446516;
            result[2] += 0;
            result[3] += 0;
            result[4] += 31901025;
            result[5] += 15561475;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x422a0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 5113056;
            result[1] += 5113056;
            result[2] += 10226112;
            result[3] += 0;
            result[4] += 28121809;
            result[5] += 5113056;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x425e0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 53566446;
            result[2] += 0;
            result[3] += 0;
            result[4] += 120645;
            result[5] += 0;
          } else {
            result[0] += 17895697;
            result[1] += 35791394;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 17895697;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 51002736;
            result[2] += 0;
            result[3] += 2684354;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42600000))) ) ) {
            result[0] += 28908433;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 20648881;
            result[5] += 4129776;
          } else {
            result[0] += 0;
            result[1] += 207019;
            result[2] += 138013;
            result[3] += 2208209;
            result[4] += 759071;
            result[5] += 50374777;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
            result[0] += 35471828;
            result[1] += 6710886;
            result[2] += 0;
            result[3] += 0;
            result[4] += 9586980;
            result[5] += 1917396;
          } else {
            result[0] += 0;
            result[1] += 542293;
            result[2] += 542293;
            result[3] += 23499400;
            result[4] += 2169175;
            result[5] += 26933927;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 14167426;
            result[1] += 9693502;
            result[2] += 0;
            result[3] += 0;
            result[4] += 29826161;
            result[5] += 0;
          } else {
            result[0] += 48101417;
            result[1] += 92325;
            result[2] += 92325;
            result[3] += 2123479;
            result[4] += 1984991;
            result[5] += 1292552;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 865920;
            result[1] += 288640;
            result[2] += 3463683;
            result[3] += 17895697;
            result[4] += 2020481;
            result[5] += 29152667;
          } else {
            result[0] += 28351609;
            result[1] += 0;
            result[2] += 14477417;
            result[3] += 603225;
            result[4] += 9048386;
            result[5] += 1206451;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42be0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1917396;
            result[4] += 1917396;
            result[5] += 49852298;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 41756626;
            result[4] += 0;
            result[5] += 11930464;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8134407;
            result[3] += 37960569;
            result[4] += 0;
            result[5] += 7592113;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 45210182;
            result[3] += 8476909;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 3579139;
            result[2] += 7158278;
            result[3] += 7158278;
            result[4] += 0;
            result[5] += 35791394;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36125893;
            result[3] += 12041964;
            result[4] += 0;
            result[5] += 5519233;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7456540;
            result[3] += 11930464;
            result[4] += 0;
            result[5] += 34300086;
          } else {
            result[0] += 0;
            result[1] += 19779454;
            result[2] += 16953818;
            result[3] += 0;
            result[4] += 16953818;
            result[5] += 0;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b90000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13421772;
            result[3] += 0;
            result[4] += 0;
            result[5] += 40265318;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42dc0000))) ) ) {
            result[0] += 719023;
            result[1] += 0;
            result[2] += 49432868;
            result[3] += 3115768;
            result[4] += 59918;
            result[5] += 359511;
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
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 894784;
            result[1] += 671088;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51002736;
            result[5] += 1118481;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 8134407;
            result[4] += 21149460;
            result[5] += 24403223;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 16106127;
            result[5] += 37580963;
          } else {
            result[0] += 48264152;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4338350;
            result[5] += 1084587;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 1193046;
            result[2] += 0;
            result[3] += 0;
            result[4] += 47721858;
            result[5] += 4772185;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 40265318;
            result[4] += 0;
            result[5] += 13421772;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 81344;
            result[3] += 732096;
            result[4] += 1626881;
            result[5] += 51246768;
          } else {
            result[0] += 312134;
            result[1] += 156067;
            result[2] += 0;
            result[3] += 13421772;
            result[4] += 7491222;
            result[5] += 32305894;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 2334221;
            result[1] += 1167110;
            result[2] += 3501332;
            result[3] += 7002664;
            result[4] += 36180431;
            result[5] += 3501332;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 5651272;
            result[1] += 48035818;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
            result[0] += 11433362;
            result[1] += 20381210;
            result[2] += 1491308;
            result[3] += 3976821;
            result[4] += 14415978;
            result[5] += 1988410;
          } else {
            result[0] += 47674515;
            result[1] += 189372;
            result[2] += 189372;
            result[3] += 1893724;
            result[4] += 1799038;
            result[5] += 1941067;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 227487;
            result[2] += 3184827;
            result[3] += 31620786;
            result[4] += 1137438;
            result[5] += 17516550;
          } else {
            result[0] += 16855249;
            result[1] += 1248537;
            result[2] += 20600860;
            result[3] += 3121342;
            result[4] += 5930550;
            result[5] += 5930550;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 13421772;
            result[4] += 40265318;
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
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 25917906;
            result[4] += 1851279;
            result[5] += 25917906;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2618882;
            result[3] += 44521002;
            result[4] += 0;
            result[5] += 6547206;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x427c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1073741;
            result[2] += 11811160;
            result[3] += 13958643;
            result[4] += 1073741;
            result[5] += 25769803;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e50000))) ) ) {
            result[0] += 4473924;
            result[1] += 4473924;
            result[2] += 32808777;
            result[3] += 4473924;
            result[4] += 4473924;
            result[5] += 2982616;
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
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32341621;
            result[3] += 17464475;
            result[4] += 0;
            result[5] += 3880994;
          } else {
            result[0] += 287096;
            result[1] += 0;
            result[2] += 46222575;
            result[3] += 5167741;
            result[4] += 0;
            result[5] += 2009677;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a60000))) ) ) {
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
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 2206318;
            result[1] += 0;
            result[2] += 38978299;
            result[3] += 12502473;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52142138;
            result[3] += 1544952;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 0;
            result[4] += 0;
            result[5] += 17895697;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52993715;
            result[3] += 693375;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1533916;
            result[2] += 1533916;
            result[3] += 2300875;
            result[4] += 35280088;
            result[5] += 13038293;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
            result[0] += 46646161;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7040929;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 18790481;
            result[5] += 34896609;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 2718333;
            result[2] += 679583;
            result[3] += 5436667;
            result[4] += 26503753;
            result[5] += 18348752;
          } else {
            result[0] += 0;
            result[1] += 245988;
            result[2] += 122994;
            result[3] += 3628337;
            result[4] += 1906414;
            result[5] += 47783356;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 37580963;
            result[4] += 0;
            result[5] += 16106127;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 42949672;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1731841;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51955249;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x427c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 222306;
            result[1] += 53242477;
            result[2] += 0;
            result[3] += 0;
            result[4] += 222306;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 13180663;
            result[1] += 7072550;
            result[2] += 0;
            result[3] += 0;
            result[4] += 33112397;
            result[5] += 321479;
          } else {
            result[0] += 47790546;
            result[1] += 618186;
            result[2] += 665738;
            result[3] += 1379030;
            result[4] += 2234980;
            result[5] += 998608;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 600974;
            result[1] += 400649;
            result[2] += 16226322;
            result[3] += 19431521;
            result[4] += 1001624;
            result[5] += 16025997;
          } else {
            result[0] += 35280088;
            result[1] += 0;
            result[2] += 6135667;
            result[3] += 0;
            result[4] += 9203501;
            result[5] += 3067833;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8947848;
            result[5] += 44739242;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2191309;
            result[3] += 38347922;
            result[4] += 1095654;
            result[5] += 12052204;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1248537;
            result[3] += 4994148;
            result[4] += 0;
            result[5] += 47444406;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42740000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42520000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 40265318;
            result[2] += 13421772;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42e90000))) ) ) {
            result[0] += 941878;
            result[1] += 0;
            result[2] += 40500788;
            result[3] += 5651272;
            result[4] += 4709393;
            result[5] += 1883757;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 6442450;
            result[3] += 0;
            result[4] += 4294967;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4668442;
            result[3] += 35013320;
            result[4] += 0;
            result[5] += 14005328;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40265318;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 8053063;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 44029095;
            result[3] += 8805819;
            result[4] += 0;
            result[5] += 852176;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13421772;
            result[3] += 13421772;
            result[4] += 0;
            result[5] += 26843545;
          } else {
            result[0] += 611818;
            result[1] += 0;
            result[2] += 51239816;
            result[3] += 1835456;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42880000))) ) ) {
            result[0] += 0;
            result[1] += 281084;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53124922;
            result[5] += 281084;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 23860929;
            result[5] += 29826161;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 28807707;
            result[1] += 0;
            result[2] += 2618882;
            result[3] += 0;
            result[4] += 8511368;
            result[5] += 13749133;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 154717;
            result[2] += 0;
            result[3] += 1315101;
            result[4] += 1392460;
            result[5] += 50824811;
          } else {
            result[0] += 0;
            result[1] += 248551;
            result[2] += 0;
            result[3] += 11184810;
            result[4] += 7953643;
            result[5] += 34300086;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5162220;
            result[4] += 4129776;
            result[5] += 44395094;
          } else {
            result[0] += 0;
            result[1] += 253240;
            result[2] += 1012963;
            result[3] += 34187534;
            result[4] += 759722;
            result[5] += 17473628;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42420000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x429a0000))) ) ) {
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
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 941878;
            result[1] += 4709393;
            result[2] += 0;
            result[3] += 0;
            result[4] += 48035818;
            result[5] += 0;
          } else {
            result[0] += 3234162;
            result[1] += 31047956;
            result[2] += 2587329;
            result[3] += 0;
            result[4] += 14230313;
            result[5] += 2587329;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42720000))) ) ) {
            result[0] += 958698;
            result[1] += 34513130;
            result[2] += 0;
            result[3] += 0;
            result[4] += 18215263;
            result[5] += 0;
          } else {
            result[0] += 46602155;
            result[1] += 176023;
            result[2] += 0;
            result[3] += 1364180;
            result[4] += 3960523;
            result[5] += 1584209;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 210537;
            result[1] += 1684300;
            result[2] += 9263654;
            result[3] += 25264513;
            result[4] += 3158064;
            result[5] += 14106020;
          } else {
            result[0] += 24970740;
            result[1] += 0;
            result[2] += 18728055;
            result[3] += 1248537;
            result[4] += 6554819;
            result[5] += 2184939;
          }
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 8259552;
            result[4] += 0;
            result[5] += 45427538;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11504376;
            result[3] += 23008753;
            result[4] += 0;
            result[5] += 19173961;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 0;
            result[4] += 0;
            result[5] += 26843545;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 17895697;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51835812;
            result[3] += 1851279;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30973321;
            result[3] += 22713769;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 15032385;
            result[4] += 0;
            result[5] += 6442450;
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
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42960000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 40265318;
            result[2] += 13421772;
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
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 353204;
            result[1] += 0;
            result[2] += 46623000;
            result[3] += 6710886;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 905763;
            result[1] += 0;
            result[2] += 51628537;
            result[3] += 905763;
            result[4] += 0;
            result[5] += 247026;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42440000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 539568;
            result[1] += 539568;
            result[2] += 0;
            result[3] += 0;
            result[4] += 50719463;
            result[5] += 1888490;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42620000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 735439;
            result[1] += 6618956;
            result[2] += 3677198;
            result[3] += 0;
            result[4] += 25740386;
            result[5] += 16915110;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 749819;
            result[2] += 0;
            result[3] += 1049747;
            result[4] += 1574621;
            result[5] += 50312902;
          } else {
            result[0] += 0;
            result[1] += 1917396;
            result[2] += 0;
            result[3] += 7669584;
            result[4] += 10737418;
            result[5] += 33362692;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 12729928;
            result[4] += 0;
            result[5] += 40957162;
          } else {
            result[0] += 0;
            result[1] += 249707;
            result[2] += 3495903;
            result[3] += 30714010;
            result[4] += 749122;
            result[5] += 18478347;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42240000))) ) ) {
            result[0] += 1376592;
            result[1] += 48180722;
            result[2] += 0;
            result[3] += 2753184;
            result[4] += 1376592;
            result[5] += 0;
          } else {
            result[0] += 2618882;
            result[1] += 2618882;
            result[2] += 0;
            result[3] += 3055362;
            result[4] += 43211561;
            result[5] += 2182402;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
            result[0] += 49153514;
            result[1] += 0;
            result[2] += 238609;
            result[3] += 0;
            result[4] += 4294967;
            result[5] += 0;
          } else {
            result[0] += 3387198;
            result[1] += 338719;
            result[2] += 1185519;
            result[3] += 17105350;
            result[4] += 8467995;
            result[5] += 23202307;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 48141140;
            result[1] += 285873;
            result[2] += 1486543;
            result[3] += 514572;
            result[4] += 3087436;
            result[5] += 171524;
          } else {
            result[0] += 3745611;
            result[1] += 47444406;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2497074;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x425e0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38347922;
            result[3] += 15339168;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 925639;
            result[2] += 0;
            result[3] += 3702558;
            result[4] += 1851279;
            result[5] += 47207614;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 1342177;
            result[5] += 30870077;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7669584;
            result[3] += 5113056;
            result[4] += 12782640;
            result[5] += 28121809;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10226112;
            result[3] += 34513130;
            result[4] += 0;
            result[5] += 8947848;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 40265318;
            result[4] += 0;
            result[5] += 8053063;
          } else {
            result[0] += 631612;
            result[1] += 0;
            result[2] += 36633544;
            result[3] += 13263869;
            result[4] += 0;
            result[5] += 3158064;
          }
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 29527900;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 2684354;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 29826161;
            result[3] += 20878313;
            result[4] += 0;
            result[5] += 2982616;
          } else {
            result[0] += 884952;
            result[1] += 0;
            result[2] += 48377378;
            result[3] += 3539808;
            result[4] += 0;
            result[5] += 884952;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42de0000))) ) ) {
            result[0] += 3501332;
            result[1] += 0;
            result[2] += 49018648;
            result[3] += 1167110;
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
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 50448822;
            result[3] += 3238268;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 158837;
            result[1] += 0;
            result[2] += 53210578;
            result[3] += 317675;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42f30000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42920000))) ) ) {
            result[0] += 485856;
            result[1] += 485856;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51986595;
            result[5] += 728784;
          } else {
            result[0] += 0;
            result[1] += 6710886;
            result[2] += 0;
            result[3] += 13421772;
            result[4] += 16777215;
            result[5] += 16777215;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 31213425;
            result[1] += 0;
            result[2] += 0;
            result[3] += 624268;
            result[4] += 16855249;
            result[5] += 4994148;
          } else {
            result[0] += 386635;
            result[1] += 110467;
            result[2] += 0;
            result[3] += 3093083;
            result[4] += 2209345;
            result[5] += 47887559;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 1032444;
            result[1] += 0;
            result[2] += 0;
            result[3] += 12389328;
            result[4] += 1032444;
            result[5] += 39232874;
          } else {
            result[0] += 0;
            result[1] += 586744;
            result[2] += 0;
            result[3] += 35204649;
            result[4] += 0;
            result[5] += 17895697;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42240000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 4026531;
            result[2] += 0;
            result[3] += 1342177;
            result[4] += 46976204;
            result[5] += 1342177;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42600000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 349373;
            result[1] += 52988343;
            result[2] += 116457;
            result[3] += 0;
            result[4] += 232915;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c80000))) ) ) {
            result[0] += 11530113;
            result[1] += 2882528;
            result[2] += 2522212;
            result[3] += 2161896;
            result[4] += 32788760;
            result[5] += 1801580;
          } else {
            result[0] += 3221225;
            result[1] += 50465865;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 19647723;
            result[1] += 250289;
            result[2] += 6507526;
            result[3] += 14516789;
            result[4] += 3253763;
            result[5] += 9510999;
          } else {
            result[0] += 45160317;
            result[1] += 368440;
            result[2] += 3842311;
            result[3] += 842150;
            result[4] += 2631720;
            result[5] += 842150;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2284557;
            result[3] += 3426835;
            result[4] += 3426835;
            result[5] += 44548862;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 1032444;
            result[1] += 4129776;
            result[2] += 6194664;
            result[3] += 24778657;
            result[4] += 0;
            result[5] += 17551549;
          } else {
            result[0] += 735439;
            result[1] += 0;
            result[2] += 33830221;
            result[3] += 17650550;
            result[4] += 0;
            result[5] += 1470879;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e00000))) ) ) {
            result[0] += 26843545;
            result[1] += 0;
            result[2] += 26843545;
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
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 50861454;
            result[4] += 0;
            result[5] += 2825636;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40265318;
            result[3] += 13421772;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13421772;
            result[3] += 0;
            result[4] += 0;
            result[5] += 40265318;
          } else {
            result[0] += 1851279;
            result[1] += 0;
            result[2] += 46281975;
            result[3] += 5553837;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 16106127;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 10737418;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 1353456;
            result[1] += 0;
            result[2] += 44664050;
            result[3] += 5864976;
            result[4] += 0;
            result[5] += 1804608;
          } else {
            result[0] += 229105;
            result[1] += 0;
            result[2] += 51930614;
            result[3] += 1527371;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42840000))) ) ) {
            result[0] += 0;
            result[1] += 290200;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53396890;
            result[5] += 0;
          } else {
            result[0] += 30678337;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 15339168;
            result[5] += 7669584;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 1431655;
            result[2] += 0;
            result[3] += 1431655;
            result[4] += 48676296;
            result[5] += 2147483;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 27221623;
            result[5] += 26465467;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42600000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 64065;
            result[2] += 192197;
            result[3] += 3075155;
            result[4] += 2626695;
            result[5] += 47728977;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 30117148;
            result[1] += 0;
            result[2] += 6547206;
            result[3] += 0;
            result[4] += 15713294;
            result[5] += 1309441;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 189039;
            result[3] += 26087389;
            result[4] += 2646546;
            result[5] += 24764116;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42480000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42aa0000))) ) ) {
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
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 4129776;
            result[2] += 0;
            result[3] += 0;
            result[4] += 48869018;
            result[5] += 688296;
          } else {
            result[0] += 0;
            result[1] += 41297762;
            result[2] += 0;
            result[3] += 0;
            result[4] += 12389328;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
            result[0] += 12321627;
            result[1] += 9681278;
            result[2] += 0;
            result[3] += 4400581;
            result[4] += 23763138;
            result[5] += 3520464;
          } else {
            result[0] += 49086695;
            result[1] += 616547;
            result[2] += 0;
            result[3] += 1090815;
            result[4] += 2608471;
            result[5] += 284560;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 739491;
            result[1] += 887389;
            result[2] += 16120917;
            result[3] += 15529323;
            result[4] += 739491;
            result[5] += 19670476;
          } else {
            result[0] += 38483667;
            result[1] += 475107;
            result[2] += 9977247;
            result[3] += 950214;
            result[4] += 3800856;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 6316128;
            result[2] += 0;
            result[3] += 15790320;
            result[4] += 0;
            result[5] += 31580641;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 3253763;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1626881;
            result[4] += 0;
            result[5] += 48806446;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d00000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 0;
            result[4] += 17895697;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
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
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 29283867;
            result[4] += 0;
            result[5] += 24403223;
          } else {
            result[0] += 207286;
            result[1] += 0;
            result[2] += 39177066;
            result[3] += 12851736;
            result[4] += 621858;
            result[5] += 829144;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 9761289;
            result[1] += 0;
            result[2] += 29283867;
            result[3] += 2440322;
            result[4] += 4880644;
            result[5] += 7320966;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52076478;
            result[3] += 1610612;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a00000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6710886;
            result[3] += 46976204;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 46976204;
            result[3] += 6710886;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48273266;
            result[3] += 4962672;
            result[4] += 0;
            result[5] += 451152;
          } else {
            result[0] += 245146;
            result[1] += 0;
            result[2] += 52829078;
            result[3] += 612866;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 841490;
            result[1] += 168298;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51667514;
            result[5] += 1009788;
          } else {
            result[0] += 0;
            result[1] += 44739242;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8947848;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 1470879;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 32359342;
            result[5] += 19856869;
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x425e0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 0;
            result[1] += 15099494;
            result[2] += 0;
            result[3] += 0;
            result[4] += 38587596;
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
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42520000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 130466;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2283169;
            result[4] += 1500368;
            result[5] += 49773086;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 5592405;
            result[1] += 0;
            result[2] += 1118481;
            result[3] += 5033164;
            result[4] += 2796202;
            result[5] += 39146837;
          } else {
            result[0] += 4473924;
            result[1] += 2013265;
            result[2] += 223696;
            result[3] += 31317469;
            result[4] += 671088;
            result[5] += 14987646;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
            result[0] += 21474836;
            result[1] += 1431655;
            result[2] += 0;
            result[3] += 7158278;
            result[4] += 7158278;
            result[5] += 16464041;
          } else {
            result[0] += 49504944;
            result[1] += 437666;
            result[2] += 0;
            result[3] += 778073;
            result[4] += 2771887;
            result[5] += 194518;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 1361081;
            result[1] += 2268468;
            result[2] += 13762043;
            result[3] += 16635436;
            result[4] += 3932012;
            result[5] += 15728049;
          } else {
            result[0] += 37366215;
            result[1] += 0;
            result[2] += 11596411;
            result[3] += 0;
            result[4] += 3435973;
            result[5] += 1288490;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1278264;
            result[4] += 1278264;
            result[5] += 51130563;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 26843545;
            result[4] += 26843545;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4880644;
            result[3] += 48806446;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42dd0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 825955;
            result[2] += 19822925;
            result[3] += 18171015;
            result[4] += 825955;
            result[5] += 14041239;
          } else {
            result[0] += 1052688;
            result[1] += 3158064;
            result[2] += 41054834;
            result[3] += 4737096;
            result[4] += 0;
            result[5] += 3684408;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 44785604;
            result[3] += 8066972;
            result[4] += 0;
            result[5] += 834514;
          } else {
            result[0] += 33038209;
            result[1] += 0;
            result[2] += 20648881;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 85488;
            result[1] += 0;
            result[2] += 52575734;
            result[3] += 1025867;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
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
            result[4] += 33038209;
            result[5] += 20648881;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x425a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 1142278;
            result[1] += 2284557;
            result[2] += 0;
            result[3] += 2284557;
            result[4] += 20561013;
            result[5] += 27414684;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
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
            result[3] += 1145761;
            result[4] += 1636801;
            result[5] += 50904528;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42620000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 217356;
            result[1] += 652069;
            result[2] += 434713;
            result[3] += 17497209;
            result[4] += 4781846;
            result[5] += 30103895;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x424e0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
            result[0] += 224163;
            result[1] += 53126683;
            result[2] += 0;
            result[3] += 0;
            result[4] += 336244;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 17895697;
            result[2] += 17895697;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 3273603;
            result[1] += 654720;
            result[2] += 0;
            result[3] += 1309441;
            result[4] += 46485164;
            result[5] += 1964161;
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42da0000))) ) ) {
            result[0] += 46171837;
            result[1] += 751525;
            result[2] += 187881;
            result[3] += 1456080;
            result[4] += 3569745;
            result[5] += 1550021;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 1077332;
            result[1] += 2513776;
            result[2] += 11671106;
            result[3] += 17955548;
            result[4] += 2693332;
            result[5] += 17775993;
          } else {
            result[0] += 39105412;
            result[1] += 0;
            result[2] += 7290839;
            result[3] += 0;
            result[4] += 5965232;
            result[5] += 1325607;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 45427538;
            result[4] += 0;
            result[5] += 8259552;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21730489;
            result[3] += 1278264;
            result[4] += 1278264;
            result[5] += 29400073;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 536870;
            result[2] += 4294967;
            result[3] += 40265318;
            result[4] += 536870;
            result[5] += 8053063;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24403223;
            result[3] += 29283867;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38146091;
            result[3] += 2825636;
            result[4] += 0;
            result[5] += 12715363;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 30064771;
            result[1] += 2147483;
            result[2] += 4294967;
            result[3] += 2147483;
            result[4] += 2147483;
            result[5] += 12884901;
          } else {
            result[0] += 2147483;
            result[1] += 0;
            result[2] += 40802189;
            result[3] += 6442450;
            result[4] += 0;
            result[5] += 4294967;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
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
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 46017506;
            result[1] += 7669584;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 401935;
            result[1] += 0;
            result[2] += 49036123;
            result[3] += 3904515;
            result[4] += 0;
            result[5] += 344516;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 240749;
            result[1] += 722247;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52242595;
            result[5] += 481498;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35280088;
            result[5] += 18407002;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x425a0000))) ) ) {
            result[0] += 0;
            result[1] += 44739242;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 8947848;
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2825636;
            result[4] += 31082000;
            result[5] += 19779454;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 76260;
            result[3] += 1906501;
            result[4] += 457560;
            result[5] += 51246768;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42910000))) ) ) {
            result[0] += 18385990;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3677198;
            result[4] += 25004946;
            result[5] += 6618956;
          } else {
            result[0] += 2570126;
            result[1] += 285569;
            result[2] += 0;
            result[3] += 21560507;
            result[4] += 1142278;
            result[5] += 28128608;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0;
            result[1] += 49085340;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4601750;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 4880644;
            result[2] += 1626881;
            result[3] += 1626881;
            result[4] += 43925801;
            result[5] += 1626881;
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
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
            result[0] += 12333520;
            result[1] += 2902004;
            result[2] += 0;
            result[3] += 7980513;
            result[4] += 24667041;
            result[5] += 5804009;
          } else {
            result[0] += 45307116;
            result[1] += 1197139;
            result[2] += 368350;
            result[3] += 920876;
            result[4] += 5525258;
            result[5] += 368350;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 1412818;
            result[1] += 2590166;
            result[2] += 9654257;
            result[3] += 16953818;
            result[4] += 4944863;
            result[5] += 18131166;
          } else {
            result[0] += 33554431;
            result[1] += 894784;
            result[2] += 11632203;
            result[3] += 2684354;
            result[4] += 4921316;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 5752188;
            result[2] += 0;
            result[3] += 13421772;
            result[4] += 3834792;
            result[5] += 30678337;
          } else {
            result[0] += 0;
            result[1] += 1167110;
            result[2] += 0;
            result[3] += 42015984;
            result[4] += 1167110;
            result[5] += 9336885;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 4473924;
            result[2] += 4473924;
            result[3] += 13421772;
            result[4] += 31317469;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4880644;
            result[3] += 4880644;
            result[4] += 0;
            result[5] += 43925801;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5592405;
            result[3] += 38028356;
            result[4] += 0;
            result[5] += 10066329;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 45427538;
            result[3] += 0;
            result[4] += 0;
            result[5] += 8259552;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 1988410;
            result[4] += 3976821;
            result[5] += 29826161;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 44430696;
            result[3] += 5553837;
            result[4] += 0;
            result[5] += 3702558;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e00000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 26843545;
            result[4] += 16106127;
            result[5] += 10737418;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 44739242;
            result[3] += 7571256;
            result[4] += 0;
            result[5] += 1376592;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8476909;
            result[3] += 45210182;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 7669584;
            result[1] += 0;
            result[2] += 46017506;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 348617;
            result[1] += 0;
            result[2] += 47063359;
            result[3] += 5577879;
            result[4] += 0;
            result[5] += 697234;
          } else {
            result[0] += 648133;
            result[1] += 0;
            result[2] += 52282801;
            result[3] += 756156;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429e0000))) ) ) {
            result[0] += 43460978;
            result[1] += 2556528;
            result[2] += 7669584;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53109810;
            result[3] += 0;
            result[4] += 0;
            result[5] += 577280;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 703324;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52280442;
            result[5] += 703324;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30285025;
            result[5] += 23402065;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42800000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 41756626;
            result[2] += 0;
            result[3] += 0;
            result[4] += 11930464;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
            result[0] += 603225;
            result[1] += 15683869;
            result[2] += 0;
            result[3] += 4825805;
            result[4] += 22319352;
            result[5] += 10254837;
          } else {
            result[0] += 2175768;
            result[1] += 108788;
            result[2] += 163182;
            result[3] += 3100470;
            result[4] += 1577432;
            result[5] += 46561448;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7320966;
            result[3] += 14641933;
            result[4] += 1220161;
            result[5] += 30504029;
          } else {
            result[0] += 1709779;
            result[1] += 0;
            result[2] += 3761515;
            result[3] += 39324939;
            result[4] += 0;
            result[5] += 8890855;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42460000))) ) ) {
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
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 32808777;
            result[2] += 0;
            result[3] += 0;
            result[4] += 20878313;
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 10025902;
            result[1] += 11642983;
            result[2] += 0;
            result[3] += 0;
            result[4] += 31047956;
            result[5] += 970248;
          } else {
            result[0] += 46185994;
            result[1] += 471767;
            result[2] += 896357;
            result[3] += 1981421;
            result[4] += 3255192;
            result[5] += 896357;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 1175629;
            result[1] += 195938;
            result[2] += 9209099;
            result[3] += 20377582;
            result[4] += 4702518;
            result[5] += 18026322;
          } else {
            result[0] += 37107254;
            result[1] += 1579032;
            result[2] += 7895160;
            result[3] += 0;
            result[4] += 6316128;
            result[5] += 789516;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42700000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
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
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1731841;
            result[3] += 3463683;
            result[4] += 3463683;
            result[5] += 45027882;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2236962;
            result[3] += 31317469;
            result[4] += 0;
            result[5] += 20132659;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 20132659;
            result[3] += 3355443;
            result[4] += 0;
            result[5] += 30198988;
          } else {
            result[0] += 1988410;
            result[1] += 0;
            result[2] += 47721858;
            result[3] += 1988410;
            result[4] += 0;
            result[5] += 1988410;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7405116;
            result[3] += 27769185;
            result[4] += 0;
            result[5] += 18512790;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47721858;
            result[3] += 0;
            result[4] += 0;
            result[5] += 5965232;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 447392;
            result[1] += 0;
            result[2] += 45410331;
            result[3] += 7605671;
            result[4] += 0;
            result[5] += 223696;
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
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48273266;
            result[3] += 5413824;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42960000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 119570;
            result[1] += 0;
            result[2] += 52610957;
            result[3] += 956562;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 239674;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53207742;
            result[5] += 239674;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 31082000;
            result[5] += 22605091;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428a0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7456540;
            result[5] += 46230550;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 29283867;
            result[3] += 0;
            result[4] += 24403223;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42720000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 11930464;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 5965232;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42810000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30678337;
            result[5] += 23008753;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 773094;
            result[4] += 429496;
            result[5] += 52484500;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42384545;
            result[5] += 11302545;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 8999570;
            result[4] += 620660;
            result[5] += 44066860;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 1651910;
            result[2] += 2477865;
            result[3] += 18171015;
            result[4] += 825955;
            result[5] += 30560344;
          } else {
            result[0] += 0;
            result[1] += 49557314;
            result[2] += 0;
            result[3] += 4129776;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8947848;
            result[3] += 11504376;
            result[4] += 6391320;
            result[5] += 26843545;
          } else {
            result[0] += 321479;
            result[1] += 0;
            result[2] += 2250357;
            result[3] += 44042703;
            result[4] += 0;
            result[5] += 7072550;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42aa0000))) ) ) {
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
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 35791394;
            result[2] += 0;
            result[3] += 17895697;
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
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 9789998;
            result[1] += 3473870;
            result[2] += 0;
            result[3] += 1894838;
            result[4] += 36949350;
            result[5] += 1579032;
          } else {
            result[0] += 3408704;
            result[1] += 42608802;
            result[2] += 6817408;
            result[3] += 852176;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 46817402;
            result[1] += 611684;
            result[2] += 47052;
            result[3] += 941053;
            result[4] += 3858318;
            result[5] += 1411579;
          } else {
            result[0] += 11155759;
            result[1] += 348617;
            result[2] += 8192510;
            result[3] += 13944699;
            result[4] += 3311866;
            result[5] += 16733638;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6710886;
            result[3] += 23229991;
            result[4] += 5162220;
            result[5] += 18583993;
          } else {
            result[0] += 7669584;
            result[1] += 30678337;
            result[2] += 5113056;
            result[3] += 0;
            result[4] += 7669584;
            result[5] += 2556528;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 18837575;
            result[3] += 27314484;
            result[4] += 0;
            result[5] += 7535030;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48180722;
            result[3] += 1376592;
            result[4] += 0;
            result[5] += 4129776;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429e0000))) ) ) {
            result[0] += 26843545;
            result[1] += 0;
            result[2] += 9586980;
            result[3] += 9586980;
            result[4] += 0;
            result[5] += 7669584;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 46976204;
            result[3] += 2236962;
            result[4] += 0;
            result[5] += 4473924;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 596523;
            result[1] += 0;
            result[2] += 38774010;
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 466265;
            result[1] += 0;
            result[2] += 51488984;
            result[3] += 1731841;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 725501;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52719756;
            result[5] += 241833;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3579139;
            result[3] += 0;
            result[4] += 34001824;
            result[5] += 16106127;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42500000))) ) ) {
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1851279;
            result[4] += 23140987;
            result[5] += 28694824;
          } else {
            result[0] += 89627;
            result[1] += 0;
            result[2] += 89627;
            result[3] += 1613301;
            result[4] += 179255;
            result[5] += 51715278;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42820000))) ) ) {
            result[0] += 23534067;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 19121429;
            result[5] += 11031594;
          } else {
            result[0] += 0;
            result[1] += 688296;
            result[2] += 0;
            result[3] += 17379475;
            result[4] += 2753184;
            result[5] += 32866135;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427c0000))) ) ) {
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
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 26843545;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 10666309;
            result[1] += 1422174;
            result[2] += 0;
            result[3] += 355543;
            result[4] += 25954686;
            result[5] += 15288376;
          } else {
            result[0] += 44334258;
            result[1] += 1696347;
            result[2] += 91694;
            result[3] += 1742194;
            result[4] += 4951499;
            result[5] += 871097;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 730436;
            result[1] += 852176;
            result[2] += 5721753;
            result[3] += 23008753;
            result[4] += 3043485;
            result[5] += 20330485;
          } else {
            result[0] += 24976168;
            result[1] += 4201598;
            result[2] += 18440348;
            result[3] += 3501332;
            result[4] += 2100799;
            result[5] += 466844;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42aa0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42d50000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 8947848;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2236962;
            result[5] += 42502280;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8628282;
            result[3] += 25884847;
            result[4] += 0;
            result[5] += 19173961;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c70000))) ) ) {
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
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e60000))) ) ) {
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
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ac0000))) ) ) {
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
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e00000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 19522578;
            result[4] += 0;
            result[5] += 7320966;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a00000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 17895697;
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
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 44785604;
            result[3] += 7510629;
            result[4] += 0;
            result[5] += 1390857;
          } else {
            result[0] += 149963;
            result[1] += 0;
            result[2] += 52187451;
            result[3] += 1274693;
            result[4] += 0;
            result[5] += 74981;
          }
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x421a0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1388459;
            result[1] += 231409;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51372992;
            result[5] += 694229;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
            result[0] += 1376592;
            result[1] += 17207401;
            result[2] += 0;
            result[3] += 0;
            result[4] += 32349913;
            result[5] += 2753184;
          } else {
            result[0] += 40053951;
            result[1] += 1690932;
            result[2] += 739782;
            result[3] += 1796615;
            result[4] += 5284162;
            result[5] += 4121646;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 2147483;
            result[2] += 0;
            result[3] += 1073741;
            result[4] += 41875931;
            result[5] += 8589934;
          } else {
            result[0] += 127674;
            result[1] += 63837;
            result[2] += 63837;
            result[3] += 2617325;
            result[4] += 2617325;
            result[5] += 48197091;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42850000))) ) ) {
            result[0] += 34939218;
            result[1] += 3408704;
            result[2] += 0;
            result[3] += 1704352;
            result[4] += 11078288;
            result[5] += 2556528;
          } else {
            result[0] += 2470953;
            result[1] += 1123160;
            result[2] += 4792153;
            result[3] += 20890792;
            result[4] += 3818747;
            result[5] += 20591283;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 5965232;
            result[1] += 23860929;
            result[2] += 0;
            result[3] += 0;
            result[4] += 23860929;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 48318382;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5368709;
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
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x429d0000))) ) ) {
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
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 35791394;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53146617;
            result[1] += 0;
            result[2] += 90079;
            result[3] += 0;
            result[4] += 450395;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 2982616;
            result[1] += 0;
            result[2] += 44739242;
            result[3] += 2982616;
            result[4] += 0;
            result[5] += 2982616;
          } else {
            result[0] += 44739242;
            result[1] += 0;
            result[2] += 4473924;
            result[3] += 4473924;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11388170;
            result[3] += 24403223;
            result[4] += 4880644;
            result[5] += 13015052;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47370962;
            result[3] += 6316128;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e50000))) ) ) {
            result[0] += 13421772;
            result[1] += 0;
            result[2] += 40265318;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 49213166;
            result[1] += 0;
            result[2] += 4473924;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4129776;
            result[3] += 49557314;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42e90000))) ) ) {
            result[0] += 1809677;
            result[1] += 0;
            result[2] += 35590318;
            result[3] += 9651611;
            result[4] += 0;
            result[5] += 6635483;
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
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 45932289;
            result[3] += 7754802;
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
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 48318382;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1234186;
            result[1] += 0;
            result[2] += 50777938;
            result[3] += 1674966;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 700266;
            result[2] += 0;
            result[3] += 466844;
            result[4] += 50886025;
            result[5] += 1633954;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42830000))) ) ) {
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
            result[3] += 23008753;
            result[4] += 0;
            result[5] += 30678337;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 976128;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1952257;
            result[4] += 30259996;
            result[5] += 20498707;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 83106;
            result[3] += 1329711;
            result[4] += 664855;
            result[5] += 51609417;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42870000))) ) ) {
            result[0] += 19311903;
            result[1] += 1931190;
            result[2] += 0;
            result[3] += 3476142;
            result[4] += 20856855;
            result[5] += 8110999;
          } else {
            result[0] += 1104104;
            result[1] += 0;
            result[2] += 2070196;
            result[3] += 22220107;
            result[4] += 966091;
            result[5] += 27326591;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 44739242;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8947848;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 35791394;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17895697;
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 48133254;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2776918;
            result[4] += 2776918;
            result[5] += 0;
          } else {
            result[0] += 1206451;
            result[1] += 1508064;
            result[2] += 603225;
            result[3] += 14477417;
            result[4] += 5429031;
            result[5] += 30462900;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
            result[0] += 4880644;
            result[1] += 14641933;
            result[2] += 1220161;
            result[3] += 610080;
            result[4] += 28673787;
            result[5] += 3660483;
          } else {
            result[0] += 45337621;
            result[1] += 584462;
            result[2] += 1377662;
            result[3] += 1878630;
            result[4] += 3506777;
            result[5] += 1001936;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 23008753;
            result[2] += 15339168;
            result[3] += 0;
            result[4] += 15339168;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2982616;
            result[3] += 4473924;
            result[4] += 0;
            result[5] += 46230550;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 47492426;
            result[4] += 0;
            result[5] += 6194664;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7669584;
            result[3] += 21091357;
            result[4] += 0;
            result[5] += 24926149;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 32212254;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8947848;
            result[3] += 44739242;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40750442;
            result[3] += 7761989;
            result[4] += 0;
            result[5] += 5174659;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x426e0000))) ) ) {
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
            result[3] += 4129776;
            result[4] += 0;
            result[5] += 49557314;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
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
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d80000))) ) ) {
            result[0] += 1376592;
            result[1] += 0;
            result[2] += 33038209;
            result[3] += 8259552;
            result[4] += 4129776;
            result[5] += 6882960;
          } else {
            result[0] += 33554431;
            result[1] += 16777215;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3355443;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 1538801;
            result[1] += 0;
            result[2] += 42060587;
            result[3] += 8548899;
            result[4] += 0;
            result[5] += 1538801;
          } else {
            result[0] += 85082;
            result[1] += 0;
            result[2] += 51985440;
            result[3] += 1616568;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52461358;
            result[5] += 1225732;
          } else {
            result[0] += 1917396;
            result[1] += 2876094;
            result[2] += 0;
            result[3] += 0;
            result[4] += 24926149;
            result[5] += 23967451;
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4473924;
            result[3] += 0;
            result[4] += 44739242;
            result[5] += 4473924;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 160739;
            result[3] += 1366288;
            result[4] += 1125178;
            result[5] += 51034884;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 45857723;
            result[1] += 2236962;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4473924;
            result[5] += 1118481;
          } else {
            result[0] += 110695;
            result[1] += 332085;
            result[2] += 2435290;
            result[3] += 20257191;
            result[4] += 2545985;
            result[5] += 28005843;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 2119227;
            result[1] += 4238454;
            result[2] += 0;
            result[3] += 2825636;
            result[4] += 42384545;
            result[5] += 2119227;
          } else {
            result[0] += 0;
            result[1] += 51622203;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2064888;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 53438539;
            result[2] += 0;
            result[3] += 0;
            result[4] += 248551;
            result[5] += 0;
          } else {
            result[0] += 10737418;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
            result[0] += 5148077;
            result[1] += 13973352;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30153023;
            result[5] += 4412637;
          } else {
            result[0] += 45383132;
            result[1] += 932530;
            result[2] += 177624;
            result[3] += 1598623;
            result[4] += 3818932;
            result[5] += 1776247;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 2001891;
            result[1] += 1273930;
            result[2] += 16197122;
            result[3] += 18381004;
            result[4] += 2001891;
            result[5] += 13831250;
          } else {
            result[0] += 37069658;
            result[1] += 852176;
            result[2] += 8095672;
            result[3] += 1704352;
            result[4] += 5539144;
            result[5] += 426088;
          }
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 41415756;
            result[4] += 0;
            result[5] += 12271335;
          } else {
            result[0] += 7669584;
            result[1] += 0;
            result[2] += 7669584;
            result[3] += 7669584;
            result[4] += 0;
            result[5] += 30678337;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 10737418;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30001609;
            result[3] += 6316128;
            result[4] += 3158064;
            result[5] += 14211288;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 26843545;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 26843545;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47244640;
            result[3] += 4294967;
            result[4] += 0;
            result[5] += 2147483;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42f20000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 15339168;
            result[1] += 0;
            result[2] += 38347922;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 19916178;
            result[3] += 28575387;
            result[4] += 865920;
            result[5] += 4329604;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 50680614;
            result[3] += 2147483;
            result[4] += 0;
            result[5] += 858993;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40265318;
            result[3] += 13421772;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 46759724;
            result[3] += 6927366;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53160747;
            result[3] += 526344;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 45427538;
            result[3] += 8259552;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 126919;
            result[1] += 0;
            result[2] += 53179411;
            result[3] += 380759;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x423c0000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421e0000))) ) ) {
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
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a00000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42540000))) ) ) {
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
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42880000))) ) ) {
            result[0] += 0;
            result[1] += 46017506;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7669584;
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
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42340000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 916161;
            result[1] += 0;
            result[2] += 366464;
            result[3] += 0;
            result[4] += 49839210;
            result[5] += 2565253;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 44313154;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8521760;
            result[5] += 852176;
          } else {
            result[0] += 405568;
            result[1] += 304176;
            result[2] += 152088;
            result[3] += 4664034;
            result[4] += 3802201;
            result[5] += 44359022;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42870000))) ) ) {
            result[0] += 2334221;
            result[1] += 21941680;
            result[2] += 0;
            result[3] += 1400532;
            result[4] += 27076967;
            result[5] += 933688;
          } else {
            result[0] += 45304720;
            result[1] += 1945907;
            result[2] += 0;
            result[3] += 798321;
            result[4] += 3193284;
            result[5] += 2444858;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 148306;
            result[1] += 1038148;
            result[2] += 9195026;
            result[3] += 24470635;
            result[4] += 296613;
            result[5] += 18538360;
          } else {
            result[0] += 38428654;
            result[1] += 2260509;
            result[2] += 3390763;
            result[3] += 565127;
            result[4] += 9042036;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42960000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1789569;
            result[2] += 7158278;
            result[3] += 8947848;
            result[4] += 0;
            result[5] += 35791394;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 2684354;
            result[1] += 10737418;
            result[2] += 0;
            result[3] += 16106127;
            result[4] += 8053063;
            result[5] += 16106127;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6710886;
            result[3] += 44459622;
            result[4] += 0;
            result[5] += 2516582;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42fd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 18948385;
            result[3] += 6316128;
            result[4] += 1579032;
            result[5] += 26843545;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 2776918;
            result[1] += 0;
            result[2] += 39802498;
            result[3] += 9256395;
            result[4] += 0;
            result[5] += 1851279;
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
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e80000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21810380;
            result[3] += 23488102;
            result[4] += 0;
            result[5] += 8388607;
          } else {
            result[0] += 1451002;
            result[1] += 207286;
            result[2] += 44151932;
            result[3] += 6840440;
            result[4] += 207286;
            result[5] += 829144;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 13421772;
            result[1] += 0;
            result[2] += 40265318;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51952585;
            result[3] += 1734506;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42240000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429f0000))) ) ) {
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
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 197379;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53094954;
            result[5] += 394758;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 43620761;
            result[5] += 10066329;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42870000))) ) ) {
            result[0] += 5965232;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 47721858;
            result[5] += 0;
          } else {
            result[0] += 52418892;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1268199;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 73644;
            result[3] += 1472896;
            result[4] += 3682242;
            result[5] += 48458307;
          } else {
            result[0] += 3244249;
            result[1] += 313959;
            result[2] += 209306;
            result[3] += 14965407;
            result[4] += 4918700;
            result[5] += 30035468;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42890000))) ) ) {
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
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 2825636;
            result[1] += 6593151;
            result[2] += 0;
            result[3] += 941878;
            result[4] += 43326424;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 43247934;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10439156;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42900000))) ) ) {
            result[0] += 16434823;
            result[1] += 9860894;
            result[2] += 2191309;
            result[3] += 0;
            result[4] += 23008753;
            result[5] += 2191309;
          } else {
            result[0] += 49422739;
            result[1] += 382698;
            result[2] += 109342;
            result[3] += 1421450;
            result[4] += 1968162;
            result[5] += 382698;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 1336608;
            result[1] += 2227680;
            result[2] += 3787056;
            result[3] += 25841089;
            result[4] += 4455360;
            result[5] += 16039296;
          } else {
            result[0] += 46784465;
            result[1] += 0;
            result[2] += 3067833;
            result[3] += 0;
            result[4] += 3834792;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2825636;
            result[3] += 34849515;
            result[4] += 470939;
            result[5] += 15541000;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e40000))) ) ) {
            result[0] += 825955;
            result[1] += 0;
            result[2] += 22300791;
            result[3] += 15280172;
            result[4] += 412977;
            result[5] += 14867194;
          } else {
            result[0] += 33554431;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 20132659;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d40000))) ) ) {
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
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52792306;
            result[3] += 0;
            result[4] += 0;
            result[5] += 894784;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 0;
            result[4] += 0;
            result[5] += 35791394;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17506660;
            result[3] += 36180431;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
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
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d90000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 367719;
            result[1] += 0;
            result[2] += 40081458;
            result[3] += 12870193;
            result[4] += 0;
            result[5] += 367719;
          } else {
            result[0] += 783753;
            result[1] += 0;
            result[2] += 49376448;
            result[3] += 3135012;
            result[4] += 0;
            result[5] += 391876;
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
            result[0] += 823141;
            result[1] += 0;
            result[2] += 50851827;
            result[3] += 1737742;
            result[4] += 0;
            result[5] += 274380;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53228227;
            result[5] += 458864;
          } else {
            result[0] += 2440322;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 46366124;
            result[5] += 4880644;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42620000))) ) ) {
            result[0] += 44901930;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6832902;
            result[5] += 1952257;
          } else {
            result[0] += 2825636;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 12715363;
            result[5] += 38146091;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 491640;
            result[2] += 0;
            result[3] += 491640;
            result[4] += 1376592;
            result[5] += 51327219;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 11085830;
            result[4] += 4117594;
            result[5] += 38483667;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2255760;
            result[3] += 15790320;
            result[4] += 6767280;
            result[5] += 28873729;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 43818140;
            result[4] += 394758;
            result[5] += 9474192;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 3408704;
            result[1] += 16475403;
            result[2] += 852176;
            result[3] += 0;
            result[4] += 32950807;
            result[5] += 0;
          } else {
            result[0] += 46317360;
            result[1] += 1445959;
            result[2] += 0;
            result[3] += 1819110;
            result[4] += 3125139;
            result[5] += 979521;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 329368;
            result[1] += 2964317;
            result[2] += 4611161;
            result[3] += 18774013;
            result[4] += 2634949;
            result[5] += 24373280;
          } else {
            result[0] += 13083408;
            result[1] += 2932488;
            result[2] += 23008753;
            result[3] += 8120736;
            result[4] += 3383640;
            result[5] += 3158064;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42020000))) ) ) {
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
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 1095654;
            result[1] += 2191309;
            result[2] += 8765239;
            result[3] += 1095654;
            result[4] += 20817443;
            result[5] += 19721788;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2191309;
            result[4] += 0;
            result[5] += 51495781;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14641933;
            result[3] += 24403223;
            result[4] += 0;
            result[5] += 14641933;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51352869;
            result[3] += 0;
            result[4] += 0;
            result[5] += 2334221;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 1988410;
            result[1] += 7953643;
            result[2] += 1988410;
            result[3] += 37779804;
            result[4] += 0;
            result[5] += 3976821;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38347922;
            result[3] += 15339168;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 8053063;
            result[1] += 6710886;
            result[2] += 37580963;
            result[3] += 1342177;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 41607495;
            result[1] += 0;
            result[2] += 12079595;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 46976204;
            result[4] += 0;
            result[5] += 6710886;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 5368709;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 720632;
            result[1] += 720632;
            result[2] += 39274449;
            result[3] += 11530113;
            result[4] += 0;
            result[5] += 1441264;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 50796247;
            result[3] += 2890843;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41054834;
            result[3] += 12632256;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 92404;
            result[1] += 0;
            result[2] += 52301021;
            result[3] += 1293664;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428c0000))) ) ) {
            result[0] += 230416;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53456674;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 33554431;
            result[5] += 20132659;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 10737418;
            result[4] += 42949672;
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
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42810000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 823141;
            result[4] += 731680;
            result[5] += 52132269;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
            result[0] += 26572398;
            result[1] += 1626881;
            result[2] += 0;
            result[3] += 7049820;
            result[4] += 11930464;
            result[5] += 6507526;
          } else {
            result[0] += 358711;
            result[1] += 0;
            result[2] += 0;
            result[3] += 15663717;
            result[4] += 4663244;
            result[5] += 33001419;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b40000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x424a0000))) ) ) {
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
            result[4] += 46017506;
            result[5] += 7669584;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 15658734;
            result[1] += 26843545;
            result[2] += 4473924;
            result[3] += 6710886;
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
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42940000))) ) ) {
            result[0] += 9800024;
            result[1] += 11930464;
            result[2] += 852176;
            result[3] += 3834792;
            result[4] += 25139193;
            result[5] += 2130440;
          } else {
            result[0] += 11613942;
            result[1] += 438261;
            result[2] += 10737418;
            result[3] += 12709597;
            result[4] += 2191309;
            result[5] += 15996561;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42420000))) ) ) {
            result[0] += 3221225;
            result[1] += 44023414;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6442450;
            result[5] += 0;
          } else {
            result[0] += 44439162;
            result[1] += 327360;
            result[2] += 1677721;
            result[3] += 1677721;
            result[4] += 4828564;
            result[5] += 736560;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42be0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5113056;
            result[4] += 12782640;
            result[5] += 35791394;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 36238786;
            result[4] += 0;
            result[5] += 17448304;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1579032;
            result[3] += 0;
            result[4] += 0;
            result[5] += 52108059;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42e30000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 39232874;
            result[4] += 2064888;
            result[5] += 12389328;
          } else {
            result[0] += 0;
            result[1] += 497102;
            result[2] += 30323264;
            result[3] += 10439156;
            result[4] += 3976821;
            result[5] += 8450745;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
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
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4238454;
            result[3] += 33907636;
            result[4] += 0;
            result[5] += 15541000;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28256363;
            result[3] += 8476909;
            result[4] += 0;
            result[5] += 16953818;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30804068;
            result[3] += 22883022;
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
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
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 0;
            result[5] += 32212254;
          } else {
            result[0] += 267766;
            result[1] += 0;
            result[2] += 51277196;
            result[3] += 1941303;
            result[4] += 0;
            result[5] += 200824;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x422e0000))) ) ) {
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
            result[4] += 53196798;
            result[5] += 490293;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 45634027;
            result[5] += 8053063;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42560000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 17895697;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3834792;
            result[5] += 49852298;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 35791394;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 17895697;
          } else {
            result[0] += 0;
            result[1] += 2982616;
            result[2] += 0;
            result[3] += 0;
            result[4] += 47721858;
            result[5] += 2982616;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 131909;
            result[2] += 65954;
            result[3] += 1846730;
            result[4] += 2110549;
            result[5] += 49531947;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3158064;
            result[3] += 31580641;
            result[4] += 12632256;
            result[5] += 6316128;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 49018648;
            result[4] += 0;
            result[5] += 4668442;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 0;
            result[4] += 0;
            result[5] += 48318382;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42780000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 26843545;
            result[4] += 26843545;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 947419;
            result[1] += 0;
            result[2] += 1263225;
            result[3] += 10105805;
            result[4] += 7263547;
            result[5] += 34107093;
          } else {
            result[0] += 0;
            result[1] += 303316;
            result[2] += 0;
            result[3] += 33061542;
            result[4] += 1819901;
            result[5] += 18502330;
          }
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x422a0000))) ) ) {
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
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2825636;
            result[1] += 50861454;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42870000))) ) ) {
            result[0] += 8089835;
            result[1] += 7354396;
            result[2] += 0;
            result[3] += 1470879;
            result[4] += 33830221;
            result[5] += 2941758;
          } else {
            result[0] += 45850217;
            result[1] += 945829;
            result[2] += 270237;
            result[3] += 2251975;
            result[4] += 3468041;
            result[5] += 900790;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 783753;
            result[1] += 0;
            result[2] += 10580667;
            result[3] += 18418199;
            result[4] += 1175629;
            result[5] += 22728841;
          } else {
            result[0] += 26178003;
            result[1] += 3105864;
            result[2] += 16416713;
            result[3] += 2662169;
            result[4] += 5324339;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 725501;
            result[3] += 27569046;
            result[4] += 7255012;
            result[5] += 18137530;
          } else {
            result[0] += 2206318;
            result[1] += 1470879;
            result[2] += 14708792;
            result[3] += 11767033;
            result[4] += 0;
            result[5] += 23534067;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 20648881;
            result[3] += 30678337;
            result[4] += 589968;
            result[5] += 1769904;
          } else {
            result[0] += 789516;
            result[1] += 0;
            result[2] += 48160478;
            result[3] += 3158064;
            result[4] += 0;
            result[5] += 1579032;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 4229892;
            result[1] += 0;
            result[2] += 30910749;
            result[3] += 12038923;
            result[4] += 2603010;
            result[5] += 3904515;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 50529027;
            result[3] += 2368548;
            result[4] += 394758;
            result[5] += 394758;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33554431;
            result[3] += 18790481;
            result[4] += 0;
            result[5] += 1342177;
          } else {
            result[0] += 88446;
            result[1] += 88446;
            result[2] += 51829712;
            result[3] += 1680485;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42810000))) ) ) {
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
            result[4] += 38347922;
            result[5] += 15339168;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42740000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x423a0000))) ) ) {
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
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36909875;
            result[5] += 16777215;
          } else {
            result[0] += 0;
            result[1] += 17895697;
            result[2] += 0;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
            result[0] += 44483589;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7669584;
            result[5] += 1533916;
          } else {
            result[0] += 1677721;
            result[1] += 11744051;
            result[2] += 0;
            result[3] += 3355443;
            result[4] += 16777215;
            result[5] += 20132659;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1342177;
            result[3] += 8053063;
            result[4] += 32212254;
            result[5] += 12079595;
          } else {
            result[0] += 61216;
            result[1] += 183650;
            result[2] += 61216;
            result[3] += 2142586;
            result[4] += 2203803;
            result[5] += 49034618;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 35791394;
            result[4] += 17895697;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4880644;
            result[4] += 2711469;
            result[5] += 46094977;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1819901;
            result[3] += 22748767;
            result[4] += 2729852;
            result[5] += 26388570;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42482828;
            result[4] += 0;
            result[5] += 11204262;
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42240000))) ) ) {
            result[0] += 715827;
            result[1] += 49392123;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3579139;
            result[5] += 0;
          } else {
            result[0] += 789516;
            result[1] += 3947580;
            result[2] += 2763306;
            result[3] += 2763306;
            result[4] += 42633866;
            result[5] += 789516;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 25589982;
            result[1] += 1037431;
            result[2] += 2852937;
            result[3] += 9250432;
            result[4] += 4581990;
            result[5] += 10374317;
          } else {
            result[0] += 47702106;
            result[1] += 474058;
            result[2] += 1244402;
            result[3] += 1125888;
            result[4] += 3022121;
            result[5] += 118514;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 14913080;
            result[1] += 29826161;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8947848;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42e10000))) ) ) {
            result[0] += 0;
            result[1] += 4880644;
            result[2] += 48806446;
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
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 2386092;
            result[2] += 4772185;
            result[3] += 34001824;
            result[4] += 2982616;
            result[5] += 9544371;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 5752188;
            result[1] += 11504376;
            result[2] += 11504376;
            result[3] += 17256565;
            result[4] += 5752188;
            result[5] += 1917396;
          } else {
            result[0] += 603225;
            result[1] += 0;
            result[2] += 41622576;
            result[3] += 8445160;
            result[4] += 603225;
            result[5] += 2412902;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 5113056;
            result[1] += 0;
            result[2] += 31956601;
            result[3] += 0;
            result[4] += 3834792;
            result[5] += 12782640;
          } else {
            result[0] += 40802189;
            result[1] += 0;
            result[2] += 12884901;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 43925801;
            result[3] += 8541128;
            result[4] += 0;
            result[5] += 1220161;
          } else {
            result[0] += 253639;
            result[1] += 0;
            result[2] += 51319786;
            result[3] += 1944571;
            result[4] += 0;
            result[5] += 169093;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
            result[0] += 488064;
            result[1] += 244032;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52222897;
            result[5] += 732096;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42264305;
            result[5] += 11422785;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x427a0000))) ) ) {
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
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 155389;
            result[3] += 621558;
            result[4] += 932337;
            result[5] += 51977806;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
            result[0] += 26582928;
            result[1] += 11988379;
            result[2] += 0;
            result[3] += 1042467;
            result[4] += 12509613;
            result[5] += 1563701;
          } else {
            result[0] += 0;
            result[1] += 842622;
            result[2] += 1564870;
            result[3] += 19019193;
            result[4] += 1925994;
            result[5] += 30334410;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 4880644;
            result[2] += 0;
            result[3] += 3486174;
            result[4] += 43228566;
            result[5] += 2091704;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 8706014;
            result[1] += 18863032;
            result[2] += 7255012;
            result[3] += 0;
            result[4] += 17412029;
            result[5] += 1451002;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 16139064;
            result[1] += 8892953;
            result[2] += 0;
            result[3] += 1646843;
            result[4] += 23385174;
            result[5] += 3623055;
          } else {
            result[0] += 48564277;
            result[1] += 819650;
            result[2] += 153684;
            result[3] += 1229475;
            result[4] += 2458950;
            result[5] += 461053;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 1258291;
            result[1] += 419430;
            result[2] += 1258291;
            result[3] += 27262975;
            result[4] += 7549747;
            result[5] += 15938355;
          } else {
            result[0] += 22946901;
            result[1] += 2164802;
            result[2] += 15586574;
            result[3] += 2597762;
            result[4] += 6494406;
            result[5] += 3896643;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b80000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42700000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2876094;
            result[3] += 7669584;
            result[4] += 0;
            result[5] += 43141412;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 5368709;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 48318382;
          } else {
            result[0] += 0;
            result[1] += 596523;
            result[2] += 5368709;
            result[3] += 39370533;
            result[4] += 596523;
            result[5] += 7754802;
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
            result[2] += 38347922;
            result[3] += 7669584;
            result[4] += 0;
            result[5] += 7669584;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42500000))) ) ) {
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
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 27350027;
            result[3] += 15194459;
            result[4] += 0;
            result[5] += 11142603;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24311135;
            result[3] += 25324099;
            result[4] += 1012963;
            result[5] += 3038891;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 43844457;
            result[3] += 8947848;
            result[4] += 0;
            result[5] += 894784;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 159308;
            result[1] += 0;
            result[2] += 47314736;
            result[3] += 5575810;
            result[4] += 0;
            result[5] += 637235;
          } else {
            result[0] += 292307;
            result[1] += 0;
            result[2] += 52225555;
            result[3] += 1071793;
            result[4] += 0;
            result[5] += 97435;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 229432;
            result[1] += 229432;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51622203;
            result[5] += 1606024;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 4382619;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 12052204;
            result[5] += 37252267;
          } else {
            result[0] += 52613349;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1073741;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 941878;
            result[4] += 1113129;
            result[5] += 51632082;
          } else {
            result[0] += 0;
            result[1] += 603225;
            result[2] += 0;
            result[3] += 6635483;
            result[4] += 7640859;
            result[5] += 38807522;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1626881;
            result[3] += 3253763;
            result[4] += 0;
            result[5] += 48806446;
          } else {
            result[0] += 258111;
            result[1] += 0;
            result[2] += 0;
            result[3] += 39490985;
            result[4] += 258111;
            result[5] += 13679883;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d90000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 31193685;
            result[1] += 5375782;
            result[2] += 1131743;
            result[3] += 1343945;
            result[4] += 13439456;
            result[5] += 1202477;
          } else {
            result[0] += 3238664;
            result[1] += 2242152;
            result[2] += 12705529;
            result[3] += 18435474;
            result[4] += 2740408;
            result[5] += 14324861;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428c0000))) ) ) {
            result[0] += 3067833;
            result[1] += 32212254;
            result[2] += 0;
            result[3] += 0;
            result[4] += 18407002;
            result[5] += 0;
          } else {
            result[0] += 50713913;
            result[1] += 84947;
            result[2] += 764531;
            result[3] += 84947;
            result[4] += 2038750;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42700000))) ) ) {
            result[0] += 0;
            result[1] += 53417306;
            result[2] += 0;
            result[3] += 0;
            result[4] += 269784;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 29527900;
            result[2] += 0;
            result[3] += 0;
            result[4] += 18790481;
            result[5] += 5368709;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 23008753;
            result[1] += 30678337;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42700000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b00000))) ) ) {
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
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42dc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4353007;
            result[4] += 0;
            result[5] += 49334083;
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
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 17895697;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48318382;
            result[3] += 2684354;
            result[4] += 0;
            result[5] += 2684354;
          } else {
            result[0] += 16106127;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 5368709;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 894784;
            result[1] += 894784;
            result[2] += 12526987;
            result[3] += 26843545;
            result[4] += 1789569;
            result[5] += 10737418;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30198988;
            result[3] += 0;
            result[4] += 3355443;
            result[5] += 20132659;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 4294967;
            result[4] += 0;
            result[5] += 6442450;
          } else {
            result[0] += 37347541;
            result[1] += 4668442;
            result[2] += 11671106;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 220934;
            result[1] += 0;
            result[2] += 48384662;
            result[3] += 4860559;
            result[4] += 0;
            result[5] += 220934;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52894661;
            result[3] += 792429;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42db0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c00000))) ) ) {
            result[0] += 232411;
            result[1] += 0;
            result[2] += 464823;
            result[3] += 0;
            result[4] += 51130563;
            result[5] += 1859293;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 44739242;
            result[5] += 8947848;
          } else {
            result[0] += 50910172;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2776918;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 131909;
            result[2] += 0;
            result[3] += 2176503;
            result[4] += 2242458;
            result[5] += 49136219;
          } else {
            result[0] += 1266952;
            result[1] += 475107;
            result[2] += 3959225;
            result[3] += 21221446;
            result[4] += 3642487;
            result[5] += 23121874;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42420000))) ) ) {
            result[0] += 0;
            result[1] += 47721858;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5965232;
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
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 17895697;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53328380;
            result[2] += 0;
            result[3] += 0;
            result[4] += 358711;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 7118730;
            result[1] += 12457778;
            result[2] += 1483068;
            result[3] += 5932275;
            result[4] += 23135873;
            result[5] += 3559365;
          } else {
            result[0] += 47272529;
            result[1] += 418340;
            result[2] += 743717;
            result[3] += 1022611;
            result[4] += 2742457;
            result[5] += 1487434;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 1612224;
            result[1] += 967334;
            result[2] += 12897799;
            result[3] += 21442591;
            result[4] += 1773447;
            result[5] += 14993692;
          } else {
            result[0] += 44291850;
            result[1] += 671088;
            result[2] += 4026531;
            result[3] += 0;
            result[4] += 4697620;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x425a0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40265318;
            result[5] += 13421772;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1789569;
            result[5] += 51897521;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38347922;
            result[3] += 0;
            result[4] += 0;
            result[5] += 15339168;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3702558;
            result[3] += 39802498;
            result[4] += 1851279;
            result[5] += 8330755;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42e90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34282118;
            result[3] += 16817643;
            result[4] += 0;
            result[5] += 2587329;
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
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42930000))) ) ) {
            result[0] += 17895697;
            result[1] += 8947848;
            result[2] += 8947848;
            result[3] += 5965232;
            result[4] += 0;
            result[5] += 11930464;
          } else {
            result[0] += 7669584;
            result[1] += 0;
            result[2] += 46017506;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x425a0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30973321;
            result[3] += 14454216;
            result[4] += 0;
            result[5] += 8259552;
          } else {
            result[0] += 134554;
            result[1] += 0;
            result[2] += 51265117;
            result[3] += 2220142;
            result[4] += 0;
            result[5] += 67277;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53254130;
            result[5] += 432960;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x427e0000))) ) ) {
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
            result[3] += 913822;
            result[4] += 1827645;
            result[5] += 50945622;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42940000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 2876094;
            result[2] += 0;
            result[3] += 1438047;
            result[4] += 46017506;
            result[5] += 3355443;
          } else {
            result[0] += 20878313;
            result[1] += 4772185;
            result[2] += 0;
            result[3] += 2982616;
            result[4] += 16702650;
            result[5] += 8351325;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 4396787;
            result[1] += 231409;
            result[2] += 0;
            result[3] += 10413444;
            result[4] += 3239738;
            result[5] += 35405710;
          } else {
            result[0] += 700266;
            result[1] += 0;
            result[2] += 466844;
            result[3] += 30811721;
            result[4] += 3501332;
            result[5] += 18206926;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b20000))) ) ) {
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
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 6357681;
            result[1] += 7417295;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39912113;
            result[5] += 0;
          } else {
            result[0] += 48862348;
            result[1] += 709521;
            result[2] += 47301;
            result[3] += 662219;
            result[4] += 2885385;
            result[5] += 520315;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 961559;
            result[1] += 1923119;
            result[2] += 10577158;
            result[3] += 16506777;
            result[4] += 2403899;
            result[5] += 21314576;
          } else {
            result[0] += 48227386;
            result[1] += 909950;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4549753;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7669584;
            result[4] += 3834792;
            result[5] += 42182714;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 37117001;
            result[4] += 2651214;
            result[5] += 13918875;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28121809;
            result[3] += 7669584;
            result[4] += 2556528;
            result[5] += 15339168;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 2236962;
            result[2] += 15658734;
            result[3] += 6710886;
            result[4] += 0;
            result[5] += 29080507;
          } else {
            result[0] += 8947848;
            result[1] += 22369621;
            result[2] += 8947848;
            result[3] += 8947848;
            result[4] += 4473924;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 1851279;
            result[1] += 0;
            result[2] += 27769185;
            result[3] += 14810232;
            result[4] += 0;
            result[5] += 9256395;
          } else {
            result[0] += 2982616;
            result[1] += 0;
            result[2] += 45733448;
            result[3] += 2982616;
            result[4] += 0;
            result[5] += 1988410;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42900000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 0;
            result[5] += 32212254;
          }
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
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 3874326;
            result[1] += 0;
            result[2] += 29334183;
            result[3] += 11069503;
            result[4] += 0;
            result[5] += 9409077;
          } else {
            result[0] += 797333;
            result[1] += 0;
            result[2] += 46511093;
            result[3] += 6378664;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48709480;
            result[3] += 4977611;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 117477;
            result[1] += 0;
            result[2] += 52864750;
            result[3] += 704863;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42420000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42800000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b00000))) ) ) {
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
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 213892;
            result[2] += 0;
            result[3] += 855571;
            result[4] += 49623128;
            result[5] += 2994499;
          } else {
            result[0] += 0;
            result[1] += 44739242;
            result[2] += 0;
            result[3] += 5965232;
            result[4] += 2982616;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
            result[0] += 226527;
            result[1] += 0;
            result[2] += 226527;
            result[3] += 1132639;
            result[4] += 3624444;
            result[5] += 48476951;
          } else {
            result[0] += 9203501;
            result[1] += 180460;
            result[2] += 902304;
            result[3] += 16241472;
            result[4] += 5413824;
            result[5] += 21745527;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 36578018;
            result[1] += 5309712;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10029456;
            result[5] += 1769904;
          } else {
            result[0] += 2426535;
            result[1] += 2123218;
            result[2] += 0;
            result[3] += 15469161;
            result[4] += 1516584;
            result[5] += 32151591;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 2706912;
            result[1] += 23008753;
            result[2] += 0;
            result[3] += 0;
            result[4] += 27971425;
            result[5] += 0;
          } else {
            result[0] += 45046160;
            result[1] += 283309;
            result[2] += 2833091;
            result[3] += 1747073;
            result[4] += 2880310;
            result[5] += 897145;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c20000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2334221;
            result[3] += 4668442;
            result[4] += 2334221;
            result[5] += 44350205;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
            result[0] += 10737418;
            result[1] += 25053975;
            result[2] += 3579139;
            result[3] += 10737418;
            result[4] += 3579139;
            result[5] += 0;
          } else {
            result[0] += 479349;
            result[1] += 958698;
            result[2] += 8148933;
            result[3] += 32116384;
            result[4] += 0;
            result[5] += 11983725;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d90000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40265318;
            result[3] += 13421772;
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
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42aa0000))) ) ) {
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
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 341955;
            result[1] += 0;
            result[2] += 34195599;
            result[3] += 14704107;
            result[4] += 0;
            result[5] += 4445427;
          } else {
            result[0] += 1940497;
            result[1] += 0;
            result[2] += 47865599;
            result[3] += 1940497;
            result[4] += 0;
            result[5] += 1940497;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 44212898;
            result[1] += 0;
            result[2] += 3158064;
            result[3] += 0;
            result[4] += 6316128;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42e70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48221938;
            result[3] += 5465152;
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
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42980000))) ) ) {
            result[0] += 4880644;
            result[1] += 0;
            result[2] += 39045157;
            result[3] += 0;
            result[4] += 0;
            result[5] += 9761289;
          } else {
            result[0] += 181069;
            result[1] += 0;
            result[2] += 52510139;
            result[3] += 995881;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42460000))) ) ) {
            result[0] += 4129776;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 49557314;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53473198;
            result[5] += 213892;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x426a0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42520000))) ) ) {
            result[0] += 12389328;
            result[1] += 20648881;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4129776;
            result[5] += 16519104;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 47139884;
            result[5] += 6547206;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42780000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
            result[0] += 39370533;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14316557;
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
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 323806;
            result[3] += 1942838;
            result[4] += 1878076;
            result[5] += 49542370;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 577280;
            result[3] += 11545611;
            result[4] += 12122891;
            result[5] += 29441308;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 228455;
            result[1] += 685367;
            result[2] += 685367;
            result[3] += 18961823;
            result[4] += 4112202;
            result[5] += 29013874;
          } else {
            result[0] += 702710;
            result[1] += 843252;
            result[2] += 4918974;
            result[3] += 30919267;
            result[4] += 1124336;
            result[5] += 15178549;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 35791394;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17895697;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 53242477;
            result[2] += 0;
            result[3] += 0;
            result[4] += 444613;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42900000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 4697620;
            result[1] += 9395240;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39594229;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
            result[0] += 48816625;
            result[1] += 391876;
            result[2] += 1063664;
            result[3] += 1007682;
            result[4] += 2183312;
            result[5] += 223929;
          } else {
            result[0] += 16106127;
            result[1] += 2236962;
            result[2] += 11632203;
            result[3] += 9842633;
            result[4] += 8053063;
            result[5] += 5816101;
          }
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42e50000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42820000))) ) ) {
            result[0] += 2982616;
            result[1] += 7456540;
            result[2] += 19387005;
            result[3] += 0;
            result[4] += 23860929;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34282118;
            result[3] += 10349318;
            result[4] += 0;
            result[5] += 9055653;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 51450129;
            result[1] += 0;
            result[2] += 2236962;
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
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3355443;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 23488102;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38347922;
            result[3] += 0;
            result[4] += 2556528;
            result[5] += 12782640;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35204649;
            result[3] += 15842092;
            result[4] += 0;
            result[5] += 2640348;
          } else {
            result[0] += 247977;
            result[1] += 0;
            result[2] += 50339397;
            result[3] += 2975727;
            result[4] += 0;
            result[5] += 123988;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53187676;
            result[5] += 499414;
          } else {
            result[0] += 0;
            result[1] += 1118481;
            result[2] += 0;
            result[3] += 4473924;
            result[4] += 34672913;
            result[5] += 13421772;
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
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40672038;
            result[5] += 13015052;
          } else {
            result[0] += 149963;
            result[1] += 0;
            result[2] += 74981;
            result[3] += 1124729;
            result[4] += 1274693;
            result[5] += 51062722;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 40459836;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10893032;
            result[5] += 2334221;
          } else {
            result[0] += 694229;
            result[1] += 115704;
            result[2] += 115704;
            result[3] += 18512790;
            result[4] += 3124033;
            result[5] += 31124628;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 3067833;
            result[2] += 0;
            result[3] += 0;
            result[4] += 47551423;
            result[5] += 3067833;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 35791394;
            result[2] += 0;
            result[3] += 5965232;
            result[4] += 11930464;
            result[5] += 0;
          } else {
            result[0] += 124853;
            result[1] += 53437383;
            result[2] += 0;
            result[3] += 0;
            result[4] += 124853;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42870000))) ) ) {
            result[0] += 36806752;
            result[1] += 2665316;
            result[2] += 253839;
            result[3] += 1142278;
            result[4] += 11676625;
            result[5] += 1142278;
          } else {
            result[0] += 3299206;
            result[1] += 0;
            result[2] += 14246574;
            result[3] += 18295600;
            result[4] += 1949531;
            result[5] += 15896177;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
            result[0] += 48374631;
            result[1] += 1062491;
            result[2] += 374997;
            result[3] += 437496;
            result[4] += 3124976;
            result[5] += 312497;
          } else {
            result[0] += 21149460;
            result[1] += 1626881;
            result[2] += 23318635;
            result[3] += 3253763;
            result[4] += 2711469;
            result[5] += 1626881;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42780000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9761289;
            result[3] += 0;
            result[4] += 0;
            result[5] += 43925801;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 1118481;
            result[1] += 0;
            result[2] += 3355443;
            result[3] += 41383799;
            result[4] += 4473924;
            result[5] += 3355443;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 35791394;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 17895697;
          } else {
            result[0] += 3834792;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 6391320;
            result[4] += 0;
            result[5] += 7669584;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42f10000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 475107;
            result[1] += 0;
            result[2] += 36108132;
            result[3] += 16153638;
            result[4] += 0;
            result[5] += 950214;
          } else {
            result[0] += 440058;
            result[1] += 0;
            result[2] += 46206103;
            result[3] += 7040929;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42be0000))) ) ) {
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
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52408827;
            result[3] += 1278264;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 19522578;
            result[3] += 34164512;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 178066;
            result[1] += 0;
            result[2] += 52529658;
            result[3] += 890333;
            result[4] += 0;
            result[5] += 89033;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 518715;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51352869;
            result[5] += 1815505;
          } else {
            result[0] += 2556528;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34939218;
            result[5] += 16191344;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42780000))) ) ) {
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
            result[3] += 2252097;
            result[4] += 799131;
            result[5] += 50635862;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 4656533;
            result[1] += 0;
            result[2] += 0;
            result[3] += 9313066;
            result[4] += 5478274;
            result[5] += 34239216;
          } else {
            result[0] += 4955731;
            result[1] += 1156337;
            result[2] += 4790540;
            result[3] += 23291938;
            result[4] += 1321528;
            result[5] += 18171015;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42420000))) ) ) {
            result[0] += 0;
            result[1] += 46017506;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7669584;
            result[5] += 0;
          } else {
            result[0] += 967334;
            result[1] += 1934669;
            result[2] += 0;
            result[3] += 967334;
            result[4] += 45464743;
            result[5] += 4353007;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 358711;
            result[1] += 53208809;
            result[2] += 0;
            result[3] += 0;
            result[4] += 119570;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 21149460;
            result[2] += 0;
            result[3] += 22776341;
            result[4] += 8134407;
            result[5] += 1626881;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42890000))) ) ) {
            result[0] += 6194664;
            result[1] += 8259552;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36479690;
            result[5] += 2753184;
          } else {
            result[0] += 48078707;
            result[1] += 383479;
            result[2] += 383479;
            result[3] += 1198372;
            result[4] += 2636419;
            result[5] += 1006632;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 603225;
            result[1] += 1508064;
            result[2] += 1508064;
            result[3] += 27748384;
            result[4] += 1508064;
            result[5] += 20811288;
          } else {
            result[0] += 18215263;
            result[1] += 3195660;
            result[2] += 19493527;
            result[3] += 4154358;
            result[4] += 6071754;
            result[5] += 2556528;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 32212254;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6479476;
            result[3] += 2776918;
            result[4] += 3702558;
            result[5] += 40728138;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7320966;
            result[3] += 19522578;
            result[4] += 0;
            result[5] += 26843545;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25884847;
            result[3] += 23967451;
            result[4] += 0;
            result[5] += 3834792;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 50785086;
            result[3] += 2902004;
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
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 0;
            result[4] += 35791394;
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
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 1704352;
            result[1] += 852176;
            result[2] += 34939218;
            result[3] += 10652200;
            result[4] += 0;
            result[5] += 5539144;
          } else {
            result[0] += 1789569;
            result[1] += 0;
            result[2] += 51897521;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42e10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48232253;
            result[3] += 4593547;
            result[4] += 0;
            result[5] += 861290;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13421772;
            result[3] += 40265318;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52621871;
            result[3] += 1065220;
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
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 400649;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52084491;
            result[5] += 1201949;
          } else {
            result[0] += 0;
            result[1] += 35791394;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 17895697;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 34513130;
            result[2] += 0;
            result[3] += 15339168;
            result[4] += 3834792;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 32777381;
            result[1] += 2825636;
            result[2] += 0;
            result[3] += 0;
            result[4] += 11302545;
            result[5] += 6781527;
          } else {
            result[0] += 159151;
            result[1] += 424403;
            result[2] += 0;
            result[3] += 3289130;
            result[4] += 2758625;
            result[5] += 47055780;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42245579;
            result[4] += 0;
            result[5] += 11441511;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5772805;
            result[3] += 18472977;
            result[4] += 577280;
            result[5] += 28864027;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 8947848;
            result[2] += 0;
            result[3] += 0;
            result[4] += 44739242;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53565901;
            result[2] += 0;
            result[3] += 0;
            result[4] += 121189;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42980000))) ) ) {
            result[0] += 1320174;
            result[1] += 5720755;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42685638;
            result[5] += 3960523;
          } else {
            result[0] += 4709393;
            result[1] += 22605091;
            result[2] += 2825636;
            result[3] += 8476909;
            result[4] += 6593151;
            result[5] += 8476909;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
            result[0] += 10737418;
            result[1] += 12632256;
            result[2] += 0;
            result[3] += 1894838;
            result[4] += 26527739;
            result[5] += 1894838;
          } else {
            result[0] += 48948463;
            result[1] += 104145;
            result[2] += 364509;
            result[3] += 1562185;
            result[4] += 2239131;
            result[5] += 468655;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 1109237;
            result[1] += 221847;
            result[2] += 6211729;
            result[3] += 21075511;
            result[4] += 5768034;
            result[5] += 19300731;
          } else {
            result[0] += 18246593;
            result[1] += 1052688;
            result[2] += 24562721;
            result[3] += 1052688;
            result[4] += 4210752;
            result[5] += 4561648;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5368709;
            result[4] += 37580963;
            result[5] += 10737418;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9761289;
            result[3] += 0;
            result[4] += 0;
            result[5] += 43925801;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1342177;
            result[3] += 51002736;
            result[4] += 0;
            result[5] += 1342177;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 0;
            result[4] += 0;
            result[5] += 26843545;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 3253763;
            result[1] += 3253763;
            result[2] += 4880644;
            result[3] += 1626881;
            result[4] += 4880644;
            result[5] += 35791394;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28121809;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 7669584;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42e60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 46366124;
            result[3] += 7320966;
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
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 14641933;
            result[1] += 2440322;
            result[2] += 7320966;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 2440322;
          } else {
            result[0] += 0;
            result[1] += 3834792;
            result[2] += 46017506;
            result[3] += 1917396;
            result[4] += 0;
            result[5] += 1917396;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 1309441;
            result[1] += 0;
            result[2] += 46812524;
            result[3] += 4910404;
            result[4] += 0;
            result[5] += 654720;
          } else {
            result[0] += 294984;
            result[1] += 0;
            result[2] += 52310499;
            result[3] += 1081608;
            result[4] += 0;
            result[5] += 0;
          }
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
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b20000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42e50000))) ) ) {
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
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
            result[0] += 950214;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52736877;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 2684354;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37580963;
            result[5] += 13421772;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 1292923;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1847032;
            result[4] += 3139956;
            result[5] += 47407179;
          } else {
            result[0] += 4831838;
            result[1] += 1968526;
            result[2] += 0;
            result[3] += 25590846;
            result[4] += 3042268;
            result[5] += 18253611;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42850000))) ) ) {
            result[0] += 24823063;
            result[1] += 1154561;
            result[2] += 0;
            result[3] += 4040963;
            result[4] += 20204819;
            result[5] += 3463683;
          } else {
            result[0] += 0;
            result[1] += 3286964;
            result[2] += 0;
            result[3] += 13513077;
            result[4] += 1095654;
            result[5] += 35791394;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 44350205;
            result[1] += 2240852;
            result[2] += 280106;
            result[3] += 326790;
            result[4] += 6255713;
            result[5] += 233422;
          } else {
            result[0] += 24120287;
            result[1] += 2852937;
            result[2] += 4927800;
            result[3] += 11930464;
            result[4] += 2334221;
            result[5] += 7521379;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4668442;
            result[3] += 2334221;
            result[4] += 2334221;
            result[5] += 44350205;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 617093;
            result[2] += 2468372;
            result[3] += 41345231;
            result[4] += 0;
            result[5] += 9256395;
          } else {
            result[0] += 0;
            result[1] += 3639802;
            result[2] += 9099506;
            result[3] += 19108964;
            result[4] += 1819901;
            result[5] += 20018915;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 10737418;
            result[2] += 0;
            result[3] += 10737418;
            result[4] += 10737418;
            result[5] += 21474836;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 27440068;
            result[4] += 0;
            result[5] += 4772185;
          } else {
            result[0] += 1052688;
            result[1] += 0;
            result[2] += 42107522;
            result[3] += 7368816;
            result[4] += 0;
            result[5] += 3158064;
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1073741;
            result[1] += 0;
            result[2] += 44560285;
            result[3] += 4831838;
            result[4] += 1610612;
            result[5] += 1610612;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 46017506;
            result[1] += 0;
            result[2] += 7669584;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 380309;
            result[1] += 0;
            result[2] += 50454456;
            result[3] += 2662169;
            result[4] += 0;
            result[5] += 190154;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d00000))) ) ) {
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
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 30678337;
            result[1] += 0;
            result[2] += 7669584;
            result[3] += 15339168;
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
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42890000))) ) ) {
            result[0] += 189039;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 50473427;
            result[5] += 3024624;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
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
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
            result[0] += 46684427;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7002664;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 66858;
            result[2] += 0;
            result[3] += 2005744;
            result[4] += 3075474;
            result[5] += 48539013;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 2393691;
            result[1] += 1709779;
            result[2] += 0;
            result[3] += 11626503;
            result[4] += 4787383;
            result[5] += 33169731;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 331401;
            result[3] += 41425224;
            result[4] += 0;
            result[5] += 11930464;
          }
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 5488013;
            result[1] += 21713445;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26485631;
            result[5] += 0;
          } else {
            result[0] += 46419803;
            result[1] += 1135513;
            result[2] += 0;
            result[3] += 1044672;
            result[4] += 3860746;
            result[5] += 1226354;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 179555;
            result[1] += 2334221;
            result[2] += 9875551;
            result[3] += 24599101;
            result[4] += 0;
            result[5] += 16698660;
          } else {
            result[0] += 31863070;
            result[1] += 0;
            result[2] += 10912010;
            result[3] += 1745921;
            result[4] += 8729608;
            result[5] += 436480;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429e0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 46528812;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7158278;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42f10000))) ) ) {
            result[0] += 41756626;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 11930464;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d50000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4473924;
            result[4] += 4473924;
            result[5] += 44739242;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2403899;
            result[3] += 39263693;
            result[4] += 2403899;
            result[5] += 9615598;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14913080;
            result[3] += 11930464;
            result[4] += 0;
            result[5] += 26843545;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5965232;
            result[3] += 11930464;
            result[4] += 5965232;
            result[5] += 29826161;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48035818;
            result[3] += 2825636;
            result[4] += 0;
            result[5] += 2825636;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42740000))) ) ) {
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
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 26843545;
            result[2] += 26843545;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 48574034;
            result[1] += 0;
            result[2] += 5113056;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 16106127;
            result[3] += 29527900;
            result[4] += 0;
            result[5] += 8053063;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 44182677;
            result[3] += 8733785;
            result[4] += 0;
            result[5] += 770628;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 0;
            result[4] += 0;
            result[5] += 26843545;
          } else {
            result[0] += 394758;
            result[1] += 0;
            result[2] += 51081688;
            result[3] += 1973790;
            result[4] += 0;
            result[5] += 236854;
          }
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42890000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
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
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
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
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42890000))) ) ) {
            result[0] += 6710886;
            result[1] += 1677721;
            result[2] += 0;
            result[3] += 5033164;
            result[4] += 30198988;
            result[5] += 10066329;
          } else {
            result[0] += 44268303;
            result[1] += 4709393;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4709393;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 144126;
            result[1] += 144126;
            result[2] += 72063;
            result[3] += 1729517;
            result[4] += 2522212;
            result[5] += 49075045;
          } else {
            result[0] += 481498;
            result[1] += 1685245;
            result[2] += 2407492;
            result[3] += 11555965;
            result[4] += 3851988;
            result[5] += 33704900;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4129776;
            result[4] += 4129776;
            result[5] += 45427538;
          } else {
            result[0] += 0;
            result[1] += 5553837;
            result[2] += 0;
            result[3] += 25917906;
            result[4] += 0;
            result[5] += 22215348;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 967334;
            result[3] += 45948411;
            result[4] += 0;
            result[5] += 6771344;
          } else {
            result[0] += 2191309;
            result[1] += 0;
            result[2] += 8765239;
            result[3] += 17530478;
            result[4] += 0;
            result[5] += 25200063;
          }
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0;
            result[1] += 10737418;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
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
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42900000))) ) ) {
            result[0] += 3397917;
            result[1] += 3737708;
            result[2] += 0;
            result[3] += 0;
            result[4] += 44852506;
            result[5] += 1698958;
          } else {
            result[0] += 15509604;
            result[1] += 8351325;
            result[2] += 1193046;
            result[3] += 4772185;
            result[4] += 13123511;
            result[5] += 10737418;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
            result[0] += 47439866;
            result[1] += 488064;
            result[2] += 146419;
            result[3] += 1659419;
            result[4] += 3172419;
            result[5] += 780903;
          } else {
            result[0] += 11835173;
            result[1] += 0;
            result[2] += 8233164;
            result[3] += 12178221;
            result[4] += 5488776;
            result[5] += 15951755;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c40000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 14641933;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3253763;
            result[5] += 35791394;
          } else {
            result[0] += 0;
            result[1] += 2403899;
            result[2] += 4006499;
            result[3] += 32853294;
            result[4] += 4006499;
            result[5] += 10416898;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 4473924;
            result[1] += 17895697;
            result[2] += 11184810;
            result[3] += 11184810;
            result[4] += 0;
            result[5] += 8947848;
          } else {
            result[0] += 4238454;
            result[1] += 0;
            result[2] += 40971727;
            result[3] += 1412818;
            result[4] += 0;
            result[5] += 7064090;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
            result[0] += 36814005;
            result[1] += 0;
            result[2] += 3067833;
            result[3] += 9203501;
            result[4] += 0;
            result[5] += 4601750;
          } else {
            result[0] += 1683567;
            result[1] += 0;
            result[2] += 35916102;
            result[3] += 13842664;
            result[4] += 0;
            result[5] += 2244756;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 17895697;
            result[1] += 0;
            result[2] += 8947848;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 432960;
            result[1] += 0;
            result[2] += 51666609;
            result[3] += 1587521;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
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
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 0;
            result[1] += 11930464;
            result[2] += 0;
            result[3] += 5965232;
            result[4] += 35791394;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2556528;
            result[4] += 15339168;
            result[5] += 35791394;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2825636;
            result[3] += 0;
            result[4] += 50861454;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 960016;
            result[4] += 1698491;
            result[5] += 51028583;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42620000))) ) ) {
            result[0] += 48716064;
            result[1] += 0;
            result[2] += 0;
            result[3] += 994205;
            result[4] += 3976821;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 492542;
            result[2] += 246271;
            result[3] += 20440498;
            result[4] += 4186608;
            result[5] += 28321171;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42500000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 27769185;
            result[2] += 0;
            result[3] += 0;
            result[4] += 25917906;
            result[5] += 0;
          } else {
            result[0] += 1342177;
            result[1] += 52344913;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 5565125;
            result[1] += 11130250;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36991715;
            result[5] += 0;
          } else {
            result[0] += 47326286;
            result[1] += 284812;
            result[2] += 379749;
            result[3] += 1518998;
            result[4] += 2800652;
            result[5] += 1376592;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 1032444;
            result[2] += 4473924;
            result[3] += 28908433;
            result[4] += 1376592;
            result[5] += 17895697;
          } else {
            result[0] += 19007231;
            result[1] += 666920;
            result[2] += 24009133;
            result[3] += 3334601;
            result[4] += 3668062;
            result[5] += 3001141;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42dc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 50529027;
            result[5] += 3158064;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 33554431;
            result[4] += 0;
            result[5] += 20132659;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1917396;
            result[3] += 2876094;
            result[4] += 0;
            result[5] += 48893600;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 17895697;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7669584;
            result[3] += 0;
            result[4] += 0;
            result[5] += 46017506;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 2191309;
            result[1] += 1643482;
            result[2] += 10408721;
            result[3] += 26843545;
            result[4] += 2191309;
            result[5] += 10408721;
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
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42aa0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 46017506;
            result[3] += 7669584;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17895697;
            result[5] += 35791394;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 40628069;
            result[1] += 0;
            result[2] += 13059022;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3579139;
            result[3] += 50107951;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32051994;
            result[3] += 17628597;
            result[4] += 0;
            result[5] += 4006499;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 26843545;
          } else {
            result[0] += 501163;
            result[1] += 0;
            result[2] += 50492176;
            result[3] += 2380524;
            result[4] += 0;
            result[5] += 313226;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
            result[0] += 236507;
            result[1] += 473014;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52031542;
            result[5] += 946028;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 31082000;
            result[5] += 22605091;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1407526;
            result[4] += 2949103;
            result[5] += 49330460;
          } else {
            result[0] += 12356552;
            result[1] += 0;
            result[2] += 0;
            result[3] += 8947848;
            result[4] += 4260880;
            result[5] += 28121809;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42400000))) ) ) {
            result[0] += 0;
            result[1] += 50331647;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 3355443;
          } else {
            result[0] += 14005328;
            result[1] += 7002664;
            result[2] += 0;
            result[3] += 5446516;
            result[4] += 16339549;
            result[5] += 10893032;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 2236962;
            result[1] += 1118481;
            result[2] += 0;
            result[3] += 5592405;
            result[4] += 6710886;
            result[5] += 38028356;
          } else {
            result[0] += 719023;
            result[1] += 239674;
            result[2] += 958698;
            result[3] += 29959314;
            result[4] += 1198372;
            result[5] += 20612008;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a50000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c50000))) ) ) {
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
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 53566716;
            result[2] += 0;
            result[3] += 0;
            result[4] += 120374;
            result[5] += 0;
          } else {
            result[0] += 40265318;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13421772;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 9148472;
            result[1] += 1925994;
            result[2] += 0;
            result[3] += 481498;
            result[4] += 39964381;
            result[5] += 2166743;
          } else {
            result[0] += 0;
            result[1] += 50465865;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3221225;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
            result[0] += 47776585;
            result[1] += 541796;
            result[2] += 394033;
            result[3] += 1871660;
            result[4] += 2511964;
            result[5] += 591050;
          } else {
            result[0] += 11531382;
            result[1] += 0;
            result[2] += 6805405;
            result[3] += 14556007;
            result[4] += 3969820;
            result[5] += 16824475;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 35791394;
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
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5553837;
            result[3] += 42579417;
            result[4] += 0;
            result[5] += 5553837;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 17895697;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11930464;
            result[3] += 7953643;
            result[4] += 0;
            result[5] += 33802983;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25053975;
            result[3] += 25053975;
            result[4] += 0;
            result[5] += 3579139;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 6710886;
            result[1] += 0;
            result[2] += 20132659;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 50107951;
            result[3] += 3579139;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42df0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35103098;
            result[3] += 14041239;
            result[4] += 0;
            result[5] += 4542753;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 46759724;
            result[3] += 6927366;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42e00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c40000))) ) ) {
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
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 8947848;
            result[4] += 0;
            result[5] += 26843545;
          } else {
            result[0] += 766958;
            result[1] += 0;
            result[2] += 50410086;
            result[3] += 2370598;
            result[4] += 0;
            result[5] += 139446;
          }
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
    

    FILE* file = fopen("./codegen/dataset_146/split_4/test_data.csv", "r");
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
