
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
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42850000))) ) ) {
          result[0] += 3564288;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 851864882;
          result[5] += 3564288;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 107374182;
          result[3] += 0;
          result[4] += 429496729;
          result[5] += 322122547;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3863538;
          result[3] += 15454155;
          result[4] += 30908310;
          result[5] += 808767454;
        } else {
          result[0] += 81879792;
          result[1] += 11909787;
          result[2] += 2977446;
          result[3] += 264992782;
          result[4] += 66992557;
          result[5] += 430241091;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 54618081;
          result[1] += 183715364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 620660013;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 853069366;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5924092;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 385231049;
          result[1] += 26320133;
          result[2] += 11963697;
          result[3] += 196204634;
          result[4] += 62211225;
          result[5] += 177062718;
        } else {
          result[0] += 740567543;
          result[1] += 12978182;
          result[2] += 21089546;
          result[3] += 12978182;
          result[4] += 60024094;
          result[5] += 11355909;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 68536712;
          result[3] += 470618756;
          result[4] += 0;
          result[5] += 319837990;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 592409282;
          result[3] += 118481856;
          result[4] += 88861392;
          result[5] += 59240928;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 755914243;
          result[3] += 34359738;
          result[4] += 0;
          result[5] += 68719476;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 396458519;
          result[3] += 462534939;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 13215283;
          result[1] += 0;
          result[2] += 541826643;
          result[3] += 231267469;
          result[4] += 13215283;
          result[5] += 59468777;
        } else {
          result[0] += 13542689;
          result[1] += 0;
          result[2] += 785476000;
          result[3] += 54170758;
          result[4] += 0;
          result[5] += 5804009;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 858993459;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 858993459;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0;
          result[1] += 858993459;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 3035312;
          result[2] += 0;
          result[3] += 3035312;
          result[4] += 780075332;
          result[5] += 72847501;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 19272289;
          result[1] += 3670912;
          result[2] += 3670912;
          result[3] += 33955938;
          result[4] += 66076419;
          result[5] += 732346987;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37580963;
          result[3] += 531502202;
          result[4] += 0;
          result[5] += 289910292;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 245426702;
          result[2] += 0;
          result[3] += 0;
          result[4] += 613566756;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 850571954;
          result[2] += 0;
          result[3] += 6316128;
          result[4] += 2105376;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 365702742;
          result[1] += 54150710;
          result[2] += 9643277;
          result[3] += 126104393;
          result[4] += 155776015;
          result[5] += 147616319;
        } else {
          result[0] += 784507312;
          result[1] += 0;
          result[2] += 40847241;
          result[3] += 18020841;
          result[4] += 13215283;
          result[5] += 2402778;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29620464;
          result[3] += 710891138;
          result[4] += 0;
          result[5] += 118481856;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 429496729;
          result[3] += 0;
          result[4] += 0;
          result[5] += 429496729;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 277909648;
          result[3] += 202116108;
          result[4] += 75793540;
          result[5] += 303174162;
        } else {
          result[0] += 66076419;
          result[1] += 0;
          result[2] += 792917039;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 322122547;
          result[4] += 0;
          result[5] += 536870911;
        } else {
          result[0] += 8810189;
          result[1] += 0;
          result[2] += 612308157;
          result[3] += 202634354;
          result[4] += 0;
          result[5] += 35240757;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 139836144;
          result[1] += 0;
          result[2] += 579321170;
          result[3] += 19976592;
          result[4] += 0;
          result[5] += 119859552;
        } else {
          result[0] += 4416418;
          result[1] += 0;
          result[2] += 804892328;
          result[3] += 49684711;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 2315346;
          result[1] += 32414847;
          result[2] += 0;
          result[3] += 23153462;
          result[4] += 764064262;
          result[5] += 37045540;
        } else {
          result[0] += 0;
          result[1] += 581898794;
          result[2] += 0;
          result[3] += 0;
          result[4] += 221675731;
          result[5] += 55418932;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 701938684;
          result[1] += 25641595;
          result[2] += 19231196;
          result[3] += 0;
          result[4] += 76924787;
          result[5] += 35257194;
        } else {
          result[0] += 25520820;
          result[1] += 8091967;
          result[2] += 7469508;
          result[3] += 158727052;
          result[4] += 60378525;
          result[5] += 598805585;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42940000))) ) ) {
          result[0] += 1993024;
          result[1] += 857000434;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 627725989;
          result[1] += 231267469;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42980000))) ) ) {
          result[0] += 49367440;
          result[1] += 306078129;
          result[2] += 0;
          result[3] += 19746976;
          result[4] += 444306961;
          result[5] += 39493952;
        } else {
          result[0] += 715827882;
          result[1] += 18418963;
          result[2] += 41024054;
          result[3] += 26791218;
          result[4] += 29302895;
          result[5] += 27628444;
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 671088639;
          result[4] += 0;
          result[5] += 187904819;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 330382099;
          result[3] += 436104371;
          result[4] += 26430567;
          result[5] += 66076419;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 17895697;
          result[1] += 0;
          result[2] += 465288123;
          result[3] += 89478485;
          result[4] += 0;
          result[5] += 286331153;
        } else {
          result[0] += 13527456;
          result[1] += 0;
          result[2] += 615499250;
          result[3] += 216439296;
          result[4] += 0;
          result[5] += 13527456;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 858993459;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 858993459;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 122713351;
          result[3] += 245426702;
          result[4] += 0;
          result[5] += 490853405;
        } else {
          result[0] += 13634816;
          result[1] += 0;
          result[2] += 792767205;
          result[3] += 44800112;
          result[4] += 1947830;
          result[5] += 5843492;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 820892942;
          result[5] += 38100516;
        } else {
          result[0] += 353703189;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 244223630;
          result[5] += 261066639;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 8937504;
          result[2] += 5958336;
          result[3] += 67527809;
          result[4] += 33763904;
          result[5] += 742805904;
        } else {
          result[0] += 2982616;
          result[1] += 50704475;
          result[2] += 23860929;
          result[3] += 423531497;
          result[4] += 29826161;
          result[5] += 328087779;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 485518042;
          result[2] += 0;
          result[3] += 74695083;
          result[4] += 261432791;
          result[5] += 37347541;
        } else {
          result[0] += 0;
          result[1] += 858993459;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 120419643;
          result[1] += 164573513;
          result[2] += 16055952;
          result[3] += 20069940;
          result[4] += 509776492;
          result[5] += 28097916;
        } else {
          result[0] += 636575509;
          result[1] += 4129776;
          result[2] += 37757954;
          result[3] += 79055716;
          result[4] += 46017506;
          result[5] += 55456995;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 231267469;
          result[3] += 33038209;
          result[4] += 396458519;
          result[5] += 198229259;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 858993459;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 8676701;
          result[1] += 78090314;
          result[2] += 86767016;
          result[3] += 520602096;
          result[4] += 0;
          result[5] += 164857330;
        } else {
          result[0] += 28010656;
          result[1] += 9336885;
          result[2] += 504191812;
          result[3] += 205411479;
          result[4] += 37347541;
          result[5] += 74695083;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42930000))) ) ) {
          result[0] += 490853405;
          result[1] += 0;
          result[2] += 245426702;
          result[3] += 0;
          result[4] += 0;
          result[5] += 122713351;
        } else {
          result[0] += 8442196;
          result[1] += 0;
          result[2] += 698591732;
          result[3] += 137185687;
          result[4] += 0;
          result[5] += 14773843;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 858993459;
        } else {
          result[0] += 6070625;
          result[1] += 0;
          result[2] += 821052051;
          result[3] += 30353125;
          result[4] += 0;
          result[5] += 1517656;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 14658591;
          result[1] += 2931718;
          result[2] += 0;
          result[3] += 0;
          result[4] += 823812839;
          result[5] += 17590309;
        } else {
          result[0] += 0;
          result[1] += 24898361;
          result[2] += 12449180;
          result[3] += 37347541;
          result[4] += 547763944;
          result[5] += 236534430;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
          result[0] += 648012609;
          result[1] += 0;
          result[2] += 0;
          result[3] += 7535030;
          result[4] += 165770667;
          result[5] += 37675151;
        } else {
          result[0] += 3879825;
          result[1] += 1551930;
          result[2] += 4655791;
          result[3] += 90011961;
          result[4] += 59749319;
          result[5] += 699144631;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 343597383;
          result[2] += 0;
          result[3] += 0;
          result[4] += 515396075;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 853317290;
          result[2] += 0;
          result[3] += 1892056;
          result[4] += 3784112;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 710216105;
          result[1] += 24274199;
          result[2] += 3132154;
          result[3] += 28189393;
          result[4] += 74388676;
          result[5] += 18792928;
        } else {
          result[0] += 174189528;
          result[1] += 25616107;
          result[2] += 133203757;
          result[3] += 286900399;
          result[4] += 35862549;
          result[5] += 203221116;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 193273528;
          result[5] += 579820584;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 858993459;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 69648118;
          result[2] += 46432078;
          result[3] += 510752867;
          result[4] += 23216039;
          result[5] += 208944354;
        } else {
          result[0] += 7341824;
          result[1] += 7341824;
          result[2] += 418483992;
          result[3] += 352407572;
          result[4] += 0;
          result[5] += 73418244;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42860000))) ) ) {
          result[0] += 45210182;
          result[1] += 0;
          result[2] += 180840728;
          result[3] += 0;
          result[4] += 587732366;
          result[5] += 45210182;
        } else {
          result[0] += 84215045;
          result[1] += 33686018;
          result[2] += 437918234;
          result[3] += 0;
          result[4] += 16843009;
          result[5] += 286331153;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 31094785;
          result[1] += 0;
          result[2] += 652990502;
          result[3] += 147700232;
          result[4] += 0;
          result[5] += 27207937;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 825758593;
          result[3] += 33234865;
          result[4] += 0;
          result[5] += 0;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_0/test_data.csv", "r");
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
