
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
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 1118481;
          result[1] += 559240;
          result[2] += 1677721;
          result[3] += 1118481;
          result[4] += 134776968;
          result[5] += 3914683;
        } else {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 2565116;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4649274;
          result[4] += 7535030;
          result[5] += 128416155;
        } else {
          result[0] += 18472977;
          result[1] += 1259521;
          result[2] += 5038084;
          result[3] += 54579252;
          result[4] += 11335690;
          result[5] += 52480050;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 33038209;
          result[2] += 0;
          result[3] += 5506368;
          result[4] += 100950085;
          result[5] += 3670912;
        } else {
          result[0] += 0;
          result[1] += 142537657;
          result[2] += 0;
          result[3] += 0;
          result[4] += 627919;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42950000))) ) ) {
          result[0] += 20204819;
          result[1] += 1154561;
          result[2] += 11545611;
          result[3] += 35214113;
          result[4] += 12700172;
          result[5] += 62346299;
        } else {
          result[0] += 109217981;
          result[1] += 4338350;
          result[2] += 5856773;
          result[3] += 6507526;
          result[4] += 13448887;
          result[5] += 3796056;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 143165576;
        } else {
          result[0] += 0;
          result[1] += 11930464;
          result[2] += 0;
          result[3] += 0;
          result[4] += 131235111;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 3922344;
          result[2] += 7844689;
          result[3] += 117670336;
          result[4] += 0;
          result[5] += 13728205;
        } else {
          result[0] += 0;
          result[1] += 3742890;
          result[2] += 44914690;
          result[3] += 38364631;
          result[4] += 1871445;
          result[5] += 54271917;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 91268055;
          result[3] += 41160103;
          result[4] += 0;
          result[5] += 10737418;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 118572716;
          result[3] += 21957910;
          result[4] += 878316;
          result[5] += 1756632;
        } else {
          result[0] += 2847042;
          result[1] += 0;
          result[2] += 134827808;
          result[3] += 5287365;
          result[4] += 0;
          result[5] += 203360;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 1188096;
          result[1] += 2376192;
          result[2] += 0;
          result[3] += 0;
          result[4] += 139007240;
          result[5] += 594048;
        } else {
          result[0] += 0;
          result[1] += 31814572;
          result[2] += 0;
          result[3] += 10604857;
          result[4] += 42419430;
          result[5] += 58326716;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 3808515;
          result[1] += 0;
          result[2] += 519343;
          result[3] += 5539659;
          result[4] += 10213747;
          result[5] += 123084310;
        } else {
          result[0] += 6766532;
          result[1] += 5341999;
          result[2] += 356133;
          result[3] += 58049723;
          result[4] += 2136799;
          result[5] += 70514388;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 42107522;
          result[2] += 0;
          result[3] += 16843009;
          result[4] += 84215045;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 142487066;
          result[2] += 0;
          result[3] += 0;
          result[4] += 678509;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 104356884;
          result[1] += 3849655;
          result[2] += 3017297;
          result[3] += 4577969;
          result[4] += 19872547;
          result[5] += 7491222;
        } else {
          result[0] += 22088403;
          result[1] += 6135667;
          result[2] += 44994895;
          result[3] += 37632094;
          result[4] += 8180890;
          result[5] += 24133625;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42e00000))) ) ) {
          result[0] += 4521018;
          result[1] += 0;
          result[2] += 18084072;
          result[3] += 34661139;
          result[4] += 16577066;
          result[5] += 69322279;
        } else {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42820000))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 10226112;
          result[1] += 0;
          result[2] += 102261126;
          result[3] += 23860929;
          result[4] += 0;
          result[5] += 6817408;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6817408;
          result[3] += 115895942;
          result[4] += 0;
          result[5] += 20452225;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 97352592;
          result[3] += 40086361;
          result[4] += 0;
          result[5] += 5726623;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 115633734;
          result[1] += 0;
          result[2] += 27531841;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 802497;
          result[1] += 0;
          result[2] += 133375105;
          result[3] += 8666974;
          result[4] += 0;
          result[5] += 320999;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 1470879;
          result[1] += 2941758;
          result[2] += 0;
          result[3] += 0;
          result[4] += 128456784;
          result[5] += 10296154;
        } else {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42870000))) ) ) {
          result[0] += 190633;
          result[1] += 0;
          result[2] += 381266;
          result[3] += 6862797;
          result[4] += 3240765;
          result[5] += 132490114;
        } else {
          result[0] += 19467273;
          result[1] += 1622272;
          result[2] += 2027841;
          result[3] += 45829207;
          result[4] += 11355909;
          result[5] += 62863071;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426c0000))) ) ) {
          result[0] += 0;
          result[1] += 141741043;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1424533;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 28633115;
          result[2] += 0;
          result[3] += 28633115;
          result[4] += 85899345;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 105035540;
          result[1] += 7219286;
          result[2] += 1423521;
          result[3] += 4473924;
          result[4] += 17082256;
          result[5] += 7931047;
        } else {
          result[0] += 27515305;
          result[1] += 3009486;
          result[2] += 37833545;
          result[3] += 37403619;
          result[4] += 9888313;
          result[5] += 27515305;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 16843009;
          result[4] += 16843009;
          result[5] += 109479558;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11228672;
          result[3] += 98250885;
          result[4] += 5614336;
          result[5] += 28071681;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7158278;
          result[3] += 16702650;
          result[4] += 35791394;
          result[5] += 83513252;
        } else {
          result[0] += 12132675;
          result[1] += 12132675;
          result[2] += 70369520;
          result[3] += 9706140;
          result[4] += 12132675;
          result[5] += 26691887;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 6817408;
          result[2] += 6817408;
          result[3] += 40904450;
          result[4] += 0;
          result[5] += 88626309;
        } else {
          result[0] += 4761604;
          result[1] += 0;
          result[2] += 106025061;
          result[3] += 28569627;
          result[4] += 0;
          result[5] += 3809283;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 114532461;
          result[3] += 28633115;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 139680816;
          result[3] += 3484760;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b00000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 0;
          result[1] += 142209013;
          result[2] += 0;
          result[3] += 0;
          result[4] += 956562;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
          result[0] += 16470376;
          result[1] += 422317;
          result[2] += 844634;
          result[3] += 3378538;
          result[4] += 103890064;
          result[5] += 18159645;
        } else {
          result[0] += 87710135;
          result[1] += 20088450;
          result[2] += 848807;
          result[3] += 2546423;
          result[4] += 29425335;
          result[5] += 2546423;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 330636;
          result[2] += 495954;
          result[3] += 6612728;
          result[4] += 11902911;
          result[5] += 123823345;
        } else {
          result[0] += 17823048;
          result[1] += 1743559;
          result[2] += 1937287;
          result[3] += 48044740;
          result[4] += 21503895;
          result[5] += 52113044;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42800000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 95443717;
          result[3] += 0;
          result[4] += 0;
          result[5] += 47721858;
        } else {
          result[0] += 140192489;
          result[1] += 0;
          result[2] += 228699;
          result[3] += 457398;
          result[4] += 1600893;
          result[5] += 686097;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 43383508;
          result[3] += 43383508;
          result[4] += 0;
          result[5] += 56398560;
        } else {
          result[0] += 89478485;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 23306024;
          result[3] += 108206540;
          result[4] += 0;
          result[5] += 11653012;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 76820553;
          result[3] += 41902119;
          result[4] += 0;
          result[5] += 24442903;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 49557314;
          result[1] += 0;
          result[2] += 67453012;
          result[3] += 13765920;
          result[4] += 4129776;
          result[5] += 8259552;
        } else {
          result[0] += 3418879;
          result[1] += 0;
          result[2] += 125786272;
          result[3] += 12250984;
          result[4] += 0;
          result[5] += 1709439;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 1307448;
          result[2] += 0;
          result[3] += 0;
          result[4] += 141204404;
          result[5] += 653724;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9544371;
          result[3] += 28633115;
          result[4] += 47721858;
          result[5] += 57266230;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3534952;
          result[4] += 6284360;
          result[5] += 133346263;
        } else {
          result[0] += 10944475;
          result[1] += 3845356;
          result[2] += 2070576;
          result[3] += 48214853;
          result[4] += 10944475;
          result[5] += 67145838;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 3742890;
          result[1] += 17778731;
          result[2] += 935722;
          result[3] += 3742890;
          result[4] += 108543835;
          result[5] += 8421504;
        } else {
          result[0] += 317440;
          result[1] += 139673733;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3174403;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 120834920;
          result[1] += 4080729;
          result[2] += 0;
          result[3] += 5100911;
          result[4] += 12015479;
          result[5] += 1133535;
        } else {
          result[0] += 26635456;
          result[1] += 1816053;
          result[2] += 31780941;
          result[3] += 34505022;
          result[4] += 8172242;
          result[5] += 40255859;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 47721858;
          result[4] += 0;
          result[5] += 95443717;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4210752;
          result[3] += 126322567;
          result[4] += 0;
          result[5] += 12632256;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 143165576;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85570229;
          result[3] += 47721858;
          result[4] += 0;
          result[5] += 9873488;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 12725829;
          result[2] += 22270200;
          result[3] += 22270200;
          result[4] += 9544371;
          result[5] += 76354974;
        } else {
          result[0] += 4772185;
          result[1] += 0;
          result[2] += 109760275;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 14316557;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 3961102;
          result[1] += 1131743;
          result[2] += 113740240;
          result[3] += 23766617;
          result[4] += 0;
          result[5] += 565871;
        } else {
          result[0] += 493674;
          result[1] += 0;
          result[2] += 137735158;
          result[3] += 4936744;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          result[0] += 3351702;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 134546913;
          result[5] += 5266961;
        } else {
          result[0] += 74301121;
          result[1] += 0;
          result[2] += 3624444;
          result[3] += 0;
          result[4] += 41681117;
          result[5] += 23558892;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 166085;
          result[3] += 6145158;
          result[4] += 8138182;
          result[5] += 128716150;
        } else {
          result[0] += 1289779;
          result[1] += 7738679;
          result[2] += 0;
          result[3] += 42562738;
          result[4] += 27085379;
          result[5] += 64488998;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
          result[0] += 9103013;
          result[1] += 9516786;
          result[2] += 10758106;
          result[3] += 63307321;
          result[4] += 6206600;
          result[5] += 44273747;
        } else {
          result[0] += 107213682;
          result[1] += 7489977;
          result[2] += 4279987;
          result[3] += 7168978;
          result[4] += 12090964;
          result[5] += 4921985;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 142823075;
          result[2] += 0;
          result[3] += 0;
          result[4] += 342501;
          result[5] += 0;
        } else {
          result[0] += 44050946;
          result[1] += 66076419;
          result[2] += 0;
          result[3] += 33038209;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42820000))) ) ) {
          result[0] += 7953643;
          result[1] += 3976821;
          result[2] += 3976821;
          result[3] += 3976821;
          result[4] += 75559609;
          result[5] += 47721858;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 24442903;
          result[4] += 6983686;
          result[5] += 111738986;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 2152865;
          result[1] += 0;
          result[2] += 23681523;
          result[3] += 88267498;
          result[4] += 1076432;
          result[5] += 27987255;
        } else {
          result[0] += 4338350;
          result[1] += 13015052;
          result[2] += 75921139;
          result[3] += 23860929;
          result[4] += 0;
          result[5] += 26030104;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42bc0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 120560485;
          result[3] += 22605091;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 125565010;
          result[3] += 14595591;
          result[4] += 0;
          result[5] += 3004974;
        } else {
          result[0] += 2316595;
          result[1] += 0;
          result[2] += 139922343;
          result[3] += 926638;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x41fc0000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 530242;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 136272419;
          result[5] += 6362914;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 3566979;
          result[1] += 648541;
          result[2] += 324270;
          result[3] += 4864062;
          result[4] += 7782500;
          result[5] += 125979221;
        } else {
          result[0] += 4069305;
          result[1] += 2959495;
          result[2] += 2589558;
          result[3] += 56600344;
          result[4] += 7398737;
          result[5] += 69548135;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 45274584;
          result[2] += 0;
          result[3] += 0;
          result[4] += 97890992;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 141239582;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1925994;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 117791692;
          result[1] += 2187403;
          result[2] += 2187403;
          result[3] += 5577879;
          result[4] += 12468201;
          result[5] += 2952995;
        } else {
          result[0] += 23021600;
          result[1] += 2517987;
          result[2] += 30575562;
          result[3] += 42805787;
          result[4] += 17625912;
          result[5] += 26618725;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19272289;
          result[3] += 55063683;
          result[4] += 0;
          result[5] += 68829604;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 76097018;
          result[3] += 43852518;
          result[4] += 1289779;
          result[5] += 21926259;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 129083716;
          result[3] += 7040929;
          result[4] += 0;
          result[5] += 7040929;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42880000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42e40000))) ) ) {
          result[0] += 0;
          result[1] += 107374182;
          result[2] += 35791394;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 977239;
          result[1] += 0;
          result[2] += 121666309;
          result[3] += 17590309;
          result[4] += 488619;
          result[5] += 2443098;
        } else {
          result[0] += 1494421;
          result[1] += 0;
          result[2] += 138981196;
          result[3] += 2689958;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 980586;
          result[2] += 0;
          result[3] += 1961172;
          result[4] += 135811180;
          result[5] += 4412637;
        } else {
          result[0] += 0;
          result[1] += 71582788;
          result[2] += 0;
          result[3] += 40265318;
          result[4] += 0;
          result[5] += 31317469;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 4973827;
          result[1] += 940994;
          result[2] += 403283;
          result[3] += 9275516;
          result[4] += 9678799;
          result[5] += 117893155;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8476909;
          result[3] += 99839152;
          result[4] += 0;
          result[5] += 34849515;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 4294967;
          result[1] += 8589934;
          result[2] += 0;
          result[3] += 0;
          result[4] += 130280674;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 141306283;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1859293;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 122588642;
          result[1] += 2244756;
          result[2] += 872960;
          result[3] += 4988347;
          result[4] += 7981356;
          result[5] += 4489512;
        } else {
          result[0] += 23236297;
          result[1] += 3373010;
          result[2] += 29607540;
          result[3] += 31106656;
          result[4] += 9369474;
          result[5] += 46472595;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15907286;
          result[3] += 6362914;
          result[4] += 28633115;
          result[5] += 92262260;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39200098;
          result[3] += 74991492;
          result[4] += 0;
          result[5] += 28973985;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 47721858;
          result[3] += 95443717;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 5113056;
          result[1] += 0;
          result[2] += 127826407;
          result[3] += 10226112;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 11012736;
          result[2] += 18354561;
          result[3] += 58734595;
          result[4] += 14683648;
          result[5] += 40380034;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 95443717;
          result[3] += 0;
          result[4] += 34087042;
          result[5] += 13634816;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 120360440;
          result[3] += 20271232;
          result[4] += 422317;
          result[5] += 2111586;
        } else {
          result[0] += 2762036;
          result[1] += 230169;
          result[2] += 135339805;
          result[3] += 4373225;
          result[4] += 230169;
          result[5] += 230169;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 2281523;
          result[1] += 570380;
          result[2] += 0;
          result[3] += 1140761;
          result[4] += 133469103;
          result[5] += 5703807;
        } else {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42980000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 143165576;
        } else {
          result[0] += 0;
          result[1] += 13634816;
          result[2] += 0;
          result[3] += 102261126;
          result[4] += 20452225;
          result[5] += 6817408;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
          result[0] += 89989790;
          result[1] += 4090445;
          result[2] += 0;
          result[3] += 8180890;
          result[4] += 36814005;
          result[5] += 4090445;
        } else {
          result[0] += 486957;
          result[1] += 0;
          result[2] += 162319;
          result[3] += 6168131;
          result[4] += 6330450;
          result[5] += 130017717;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 76231021;
          result[1] += 9296466;
          result[2] += 0;
          result[3] += 29748691;
          result[4] += 16733638;
          result[5] += 11155759;
        } else {
          result[0] += 2902004;
          result[1] += 1612224;
          result[2] += 3869339;
          result[3] += 69003228;
          result[4] += 4191784;
          result[5] += 61586993;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 141204404;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1961172;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 43572131;
          result[2] += 3112295;
          result[3] += 0;
          result[4] += 96481149;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42910000))) ) ) {
          result[0] += 19822925;
          result[1] += 30835662;
          result[2] += 0;
          result[3] += 0;
          result[4] += 89203166;
          result[5] += 3303820;
        } else {
          result[0] += 117907725;
          result[1] += 453055;
          result[2] += 4304028;
          result[3] += 7135626;
          result[4] += 6909098;
          result[5] += 6456042;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 1812222;
          result[1] += 0;
          result[2] += 47117784;
          result[3] += 57085008;
          result[4] += 906111;
          result[5] += 36244449;
        } else {
          result[0] += 5302428;
          result[1] += 2651214;
          result[2] += 108699789;
          result[3] += 10604857;
          result[4] += 0;
          result[5] += 15907286;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 7069905;
          result[2] += 56559240;
          result[3] += 60094192;
          result[4] += 5302428;
          result[5] += 14139810;
        } else {
          result[0] += 4463960;
          result[1] += 956562;
          result[2] += 128019997;
          result[3] += 8449638;
          result[4] += 637708;
          result[5] += 637708;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42780000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 8765239;
          result[2] += 0;
          result[3] += 0;
          result[4] += 105182872;
          result[5] += 29217464;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 35791394;
          result[2] += 0;
          result[3] += 0;
          result[4] += 17895697;
          result[5] += 89478485;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 23860929;
          result[3] += 0;
          result[4] += 119304647;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 290691;
          result[1] += 290691;
          result[2] += 0;
          result[3] += 6104522;
          result[4] += 10028857;
          result[5] += 126450813;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3949395;
          result[3] += 74051160;
          result[4] += 1974697;
          result[5] += 63190323;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 103285050;
          result[1] += 2205374;
          result[2] += 7167467;
          result[3] += 7902592;
          result[4] += 17459216;
          result[5] += 5145874;
        } else {
          result[0] += 5614336;
          result[1] += 129129735;
          result[2] += 1403584;
          result[3] += 1403584;
          result[4] += 5614336;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 59652323;
          result[1] += 23860929;
          result[2] += 0;
          result[3] += 0;
          result[4] += 59652323;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 6263493;
          result[1] += 10737418;
          result[2] += 18790481;
          result[3] += 54581876;
          result[4] += 3579139;
          result[5] += 49213166;
        } else {
          result[0] += 20452225;
          result[1] += 0;
          result[2] += 96683246;
          result[3] += 20452225;
          result[4] += 0;
          result[5] += 5577879;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 49941480;
          result[3] += 43282616;
          result[4] += 3329432;
          result[5] += 46612048;
        } else {
          result[0] += 697518;
          result[1] += 523138;
          result[2] += 129389595;
          result[3] += 10114011;
          result[4] += 0;
          result[5] += 2441313;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x424a0000))) ) ) {
          result[0] += 47721858;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 87490074;
          result[5] += 7953643;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 137701241;
          result[5] += 5464334;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 199394;
          result[1] += 199394;
          result[2] += 0;
          result[3] += 2990924;
          result[4] += 5383663;
          result[5] += 134392198;
        } else {
          result[0] += 11748320;
          result[1] += 546433;
          result[2] += 819650;
          result[3] += 44807546;
          result[4] += 13934054;
          result[5] += 71309571;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 5237764;
          result[1] += 48885806;
          result[2] += 0;
          result[3] += 5237764;
          result[4] += 83804239;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 142840200;
          result[2] += 0;
          result[3] += 0;
          result[4] += 325376;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 116493008;
          result[1] += 5129339;
          result[2] += 911882;
          result[3] += 4103471;
          result[4] += 13564254;
          result[5] += 2963618;
        } else {
          result[0] += 19828096;
          result[1] += 2016416;
          result[2] += 34279081;
          result[3] += 42680817;
          result[4] += 16803471;
          result[5] += 27557693;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 13015052;
          result[1] += 14874345;
          result[2] += 31607984;
          result[3] += 26030104;
          result[4] += 11155759;
          result[5] += 46482330;
        } else {
          result[0] += 6817408;
          result[1] += 0;
          result[2] += 27269633;
          result[3] += 105669830;
          result[4] += 0;
          result[5] += 3408704;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
          result[0] += 39045157;
          result[1] += 0;
          result[2] += 39045157;
          result[3] += 4338350;
          result[4] += 4338350;
          result[5] += 56398560;
        } else {
          result[0] += 5592405;
          result[1] += 0;
          result[2] += 109611144;
          result[3] += 26843545;
          result[4] += 0;
          result[5] += 1118481;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 47721858;
          result[3] += 74991492;
          result[4] += 0;
          result[5] += 20452225;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 122713351;
          result[3] += 0;
          result[4] += 0;
          result[5] += 20452225;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 124572644;
          result[3] += 16733638;
          result[4] += 0;
          result[5] += 1859293;
        } else {
          result[0] += 765591;
          result[1] += 0;
          result[2] += 140358408;
          result[3] += 1275985;
          result[4] += 0;
          result[5] += 765591;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 1883757;
          result[1] += 2511676;
          result[2] += 0;
          result[3] += 0;
          result[4] += 135002626;
          result[5] += 3767515;
        } else {
          result[0] += 0;
          result[1] += 45921033;
          result[2] += 0;
          result[3] += 18908661;
          result[4] += 35116084;
          result[5] += 43219796;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1881007;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3971015;
          result[4] += 9614038;
          result[5] += 127699514;
        } else {
          result[0] += 8450745;
          result[1] += 1242756;
          result[2] += 5716681;
          result[3] += 46230550;
          result[4] += 8947848;
          result[5] += 72576993;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 43677633;
          result[2] += 0;
          result[3] += 24265351;
          result[4] += 72796055;
          result[5] += 2426535;
        } else {
          result[0] += 0;
          result[1] += 141758543;
          result[2] += 0;
          result[3] += 703516;
          result[4] += 703516;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 56340092;
          result[1] += 5016583;
          result[2] += 12605774;
          result[3] += 23796614;
          result[4] += 25211548;
          result[5] += 20194964;
        } else {
          result[0] += 120755440;
          result[1] += 2037285;
          result[2] += 13705372;
          result[3] += 555623;
          result[4] += 5926647;
          result[5] += 185207;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42e50000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11608019;
          result[3] += 7738679;
          result[4] += 19346699;
          result[5] += 104472177;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27709466;
          result[3] += 78510154;
          result[4] += 0;
          result[5] += 36945955;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 128849018;
          result[3] += 0;
          result[4] += 0;
          result[5] += 14316557;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
        } else {
          result[0] += 81808900;
          result[1] += 0;
          result[2] += 20452225;
          result[3] += 20452225;
          result[4] += 0;
          result[5] += 20452225;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 57266230;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 879395;
          result[1] += 0;
          result[2] += 132436952;
          result[3] += 9497470;
          result[4] += 0;
          result[5] += 351758;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c00000))) ) ) {
          result[0] += 900412;
          result[1] += 450206;
          result[2] += 0;
          result[3] += 2251031;
          result[4] += 134611658;
          result[5] += 4952268;
        } else {
          result[0] += 0;
          result[1] += 115895942;
          result[2] += 0;
          result[3] += 6817408;
          result[4] += 0;
          result[5] += 20452225;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42620000))) ) ) {
          result[0] += 131825728;
          result[1] += 0;
          result[2] += 1417480;
          result[3] += 0;
          result[4] += 9922366;
          result[5] += 0;
        } else {
          result[0] += 1450111;
          result[1] += 527313;
          result[2] += 1977425;
          result[3] += 11732722;
          result[4] += 11864550;
          result[5] += 115613453;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 63669113;
          result[1] += 10431662;
          result[2] += 4496406;
          result[3] += 24100737;
          result[4] += 22841743;
          result[5] += 17625912;
        } else {
          result[0] += 131283025;
          result[1] += 766616;
          result[2] += 5941275;
          result[3] += 2683156;
          result[4] += 2108194;
          result[5] += 383308;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
          result[0] += 330636;
          result[1] += 141512394;
          result[2] += 0;
          result[3] += 1322545;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 122713351;
          result[1] += 20452225;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42800000))) ) ) {
          result[0] += 0;
          result[1] += 13015052;
          result[2] += 0;
          result[3] += 0;
          result[4] += 130150524;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 49047466;
          result[4] += 9279250;
          result[5] += 84838860;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 1684300;
          result[1] += 0;
          result[2] += 16843009;
          result[3] += 101058054;
          result[4] += 0;
          result[5] += 23580212;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 79871321;
          result[3] += 55005721;
          result[4] += 753503;
          result[5] += 7535030;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42d50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19088743;
          result[3] += 19088743;
          result[4] += 9544371;
          result[5] += 95443717;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 143165576;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 37817322;
          result[1] += 0;
          result[2] += 83738356;
          result[3] += 2701237;
          result[4] += 13506186;
          result[5] += 5402474;
        } else {
          result[0] += 352190;
          result[1] += 176095;
          result[2] += 133480328;
          result[3] += 7219912;
          result[4] += 0;
          result[5] += 1937049;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 5302428;
          result[2] += 0;
          result[3] += 0;
          result[4] += 133090961;
          result[5] += 4772185;
        } else {
          result[0] += 65358197;
          result[1] += 1556147;
          result[2] += 0;
          result[3] += 0;
          result[4] += 34235246;
          result[5] += 42015984;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 6933411;
          result[4] += 4497347;
          result[5] += 131734817;
        } else {
          result[0] += 1424533;
          result[1] += 2849066;
          result[2] += 10683998;
          result[3] += 56269057;
          result[4] += 12464664;
          result[5] += 59474256;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 81344077;
          result[2] += 0;
          result[3] += 0;
          result[4] += 61821498;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 108176928;
          result[1] += 3653877;
          result[2] += 221447;
          result[3] += 2325194;
          result[4] += 17715771;
          result[5] += 11072357;
        } else {
          result[0] += 28264448;
          result[1] += 2765000;
          result[2] += 28878893;
          result[3] += 44854451;
          result[4] += 8909445;
          result[5] += 29493337;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 23860929;
          result[2] += 0;
          result[3] += 0;
          result[4] += 95443717;
          result[5] += 23860929;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13634816;
          result[3] += 6817408;
          result[4] += 0;
          result[5] += 122713351;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24898361;
          result[3] += 105818034;
          result[4] += 0;
          result[5] += 12449180;
        } else {
          result[0] += 0;
          result[1] += 9138228;
          result[2] += 82244054;
          result[3] += 21322532;
          result[4] += 6092152;
          result[5] += 24368608;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 57266230;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 97612893;
          result[3] += 41648167;
          result[4] += 0;
          result[5] += 3904515;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 15339168;
          result[1] += 0;
          result[2] += 97148069;
          result[3] += 0;
          result[4] += 0;
          result[5] += 30678337;
        } else {
          result[0] += 1077783;
          result[1] += 0;
          result[2] += 133645155;
          result[3] += 8442637;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 804300;
          result[1] += 1608601;
          result[2] += 0;
          result[3] += 0;
          result[4] += 139144071;
          result[5] += 1608601;
        } else {
          result[0] += 48094685;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 58161015;
          result[5] += 36909875;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 340465;
          result[2] += 170232;
          result[3] += 7149767;
          result[4] += 9192557;
          result[5] += 126312553;
        } else {
          result[0] += 973915;
          result[1] += 13147859;
          result[2] += 3408704;
          result[3] += 74017576;
          result[4] += 2921746;
          result[5] += 48695774;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 23860929;
          result[2] += 0;
          result[3] += 0;
          result[4] += 119304647;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 142495011;
          result[2] += 0;
          result[3] += 0;
          result[4] += 670564;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 104922717;
          result[1] += 3726227;
          result[2] += 1470879;
          result[3] += 3824285;
          result[4] += 23337950;
          result[5] += 5883516;
        } else {
          result[0] += 19574917;
          result[1] += 3838219;
          result[2] += 32624863;
          result[3] += 40685123;
          result[4] += 9211726;
          result[5] += 37230726;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42db0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31814572;
          result[3] += 91908765;
          result[4] += 0;
          result[5] += 19442238;
        } else {
          result[0] += 50107951;
          result[1] += 0;
          result[2] += 64424509;
          result[3] += 0;
          result[4] += 7158278;
          result[5] += 21474836;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 22025473;
          result[1] += 0;
          result[2] += 44050946;
          result[3] += 33038209;
          result[4] += 0;
          result[5] += 44050946;
        } else {
          result[0] += 1223637;
          result[1] += 0;
          result[2] += 124811015;
          result[3] += 13460011;
          result[4] += 0;
          result[5] += 3670912;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 111351003;
          result[1] += 0;
          result[2] += 31814572;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 423566;
          result[1] += 0;
          result[2] += 121987236;
          result[3] += 18636938;
          result[4] += 0;
          result[5] += 2117833;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 143165576;
        } else {
          result[0] += 1923529;
          result[1] += 0;
          result[2] += 136570617;
          result[3] += 4671429;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 1272582;
          result[1] += 4454040;
          result[2] += 0;
          result[3] += 0;
          result[4] += 135530079;
          result[5] += 1908874;
        } else {
          result[0] += 47721858;
          result[1] += 0;
          result[2] += 0;
          result[3] += 11228672;
          result[4] += 29475265;
          result[5] += 54739779;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 455941;
          result[1] += 911882;
          result[2] += 0;
          result[3] += 7143080;
          result[4] += 8358924;
          result[5] += 126295747;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 86423122;
          result[4] += 0;
          result[5] += 56742454;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 139296236;
          result[2] += 0;
          result[3] += 322444;
          result[4] += 3546894;
          result[5] += 0;
        } else {
          result[0] += 66076419;
          result[1] += 22025473;
          result[2] += 11012736;
          result[3] += 44050946;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 114966296;
          result[1] += 5748314;
          result[2] += 433835;
          result[3] += 3145304;
          result[4] += 17136485;
          result[5] += 1735340;
        } else {
          result[0] += 28893416;
          result[1] += 3123612;
          result[2] += 30455222;
          result[3] += 37743651;
          result[4] += 8850235;
          result[5] += 34099437;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 143165576;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7738679;
          result[3] += 100602837;
          result[4] += 0;
          result[5] += 34824059;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20452225;
          result[3] += 0;
          result[4] += 0;
          result[5] += 122713351;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 91105366;
          result[3] += 13015052;
          result[4] += 0;
          result[5] += 39045157;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42440000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 110356798;
          result[3] += 29826161;
          result[4] += 0;
          result[5] += 2982616;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 47721858;
          result[2] += 0;
          result[3] += 0;
          result[4] += 95443717;
          result[5] += 0;
        } else {
          result[0] += 1929455;
          result[1] += 0;
          result[2] += 135447755;
          result[3] += 5402474;
          result[4] += 0;
          result[5] += 385891;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 520602;
          result[2] += 3123612;
          result[3] += 520602;
          result[4] += 136397749;
          result[5] += 2603010;
        } else {
          result[0] += 5302428;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 76885217;
          result[5] += 60977930;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 373800;
          result[2] += 373800;
          result[3] += 5420106;
          result[4] += 4485605;
          result[5] += 132512263;
        } else {
          result[0] += 18081833;
          result[1] += 1914547;
          result[2] += 0;
          result[3] += 47438222;
          result[4] += 7870915;
          result[5] += 67860057;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 47721858;
          result[2] += 0;
          result[3] += 0;
          result[4] += 95443717;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 142511852;
          result[2] += 0;
          result[3] += 326862;
          result[4] += 326862;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 25696385;
          result[1] += 24778657;
          result[2] += 0;
          result[3] += 3670912;
          result[4] += 82595524;
          result[5] += 6424096;
        } else {
          result[0] += 109886838;
          result[1] += 5472007;
          result[2] += 5807028;
          result[3] += 6923764;
          result[4] += 9492257;
          result[5] += 5583680;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20607166;
          result[3] += 86767016;
          result[4] += 0;
          result[5] += 35791394;
        } else {
          result[0] += 6316128;
          result[1] += 0;
          result[2] += 77898916;
          result[3] += 46318274;
          result[4] += 2105376;
          result[5] += 10526880;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ed0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 120167090;
          result[3] += 18973751;
          result[4] += 0;
          result[5] += 4024735;
        } else {
          result[0] += 92035013;
          result[1] += 0;
          result[2] += 51130563;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d50000))) ) ) {
          result[0] += 1250354;
          result[1] += 0;
          result[2] += 129411678;
          result[3] += 10628012;
          result[4] += 0;
          result[5] += 1875531;
        } else {
          result[0] += 17895697;
          result[1] += 0;
          result[2] += 59652323;
          result[3] += 65617555;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 79536431;
          result[3] += 63629145;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 139991173;
          result[3] += 2856962;
          result[4] += 0;
          result[5] += 317440;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 17566328;
          result[1] += 439158;
          result[2] += 0;
          result[3] += 2195791;
          result[4] += 107593761;
          result[5] += 15370537;
        } else {
          result[0] += 2921746;
          result[1] += 102261126;
          result[2] += 0;
          result[3] += 32139211;
          result[4] += 5843492;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 205402;
          result[3] += 2670233;
          result[4] += 4108050;
          result[5] += 136181889;
        } else {
          result[0] += 1491308;
          result[1] += 0;
          result[2] += 3280877;
          result[3] += 47721858;
          result[4] += 15509604;
          result[5] += 75161927;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42930000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 139896956;
          result[2] += 0;
          result[3] += 653724;
          result[4] += 2288034;
          result[5] += 326862;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 106934230;
          result[1] += 6314606;
          result[2] += 207036;
          result[3] += 3519616;
          result[4] += 19254372;
          result[5] += 6935714;
        } else {
          result[0] += 21262214;
          result[1] += 1417480;
          result[2] += 33310802;
          result[3] += 49966203;
          result[4] += 4961183;
          result[5] += 32247691;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8676701;
          result[3] += 4338350;
          result[4] += 4338350;
          result[5] += 125812173;
        } else {
          result[0] += 8103711;
          result[1] += 1350618;
          result[2] += 32414847;
          result[3] += 81037118;
          result[4] += 2701237;
          result[5] += 17558042;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 15230380;
          result[1] += 3046076;
          result[2] += 54829369;
          result[3] += 42645065;
          result[4] += 3046076;
          result[5] += 24368608;
        } else {
          result[0] += 8206943;
          result[1] += 0;
          result[2] += 116720979;
          result[3] += 17325770;
          result[4] += 0;
          result[5] += 911882;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 3670912;
          result[1] += 0;
          result[2] += 110127366;
          result[3] += 29367297;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 6771344;
          result[1] += 0;
          result[2] += 122851541;
          result[3] += 11608019;
          result[4] += 0;
          result[5] += 1934669;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 141474644;
          result[3] += 1690932;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 516843;
          result[2] += 1550529;
          result[3] += 1033686;
          result[4] += 138513987;
          result[5] += 1550529;
        } else {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1848622;
          result[4] += 4724258;
          result[5] += 136592694;
        } else {
          result[0] += 13679742;
          result[1] += 1179288;
          result[2] += 10141877;
          result[3] += 44341232;
          result[4] += 18161036;
          result[5] += 55662398;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          result[0] += 10226112;
          result[1] += 61356675;
          result[2] += 0;
          result[3] += 852176;
          result[4] += 67321907;
          result[5] += 3408704;
        } else {
          result[0] += 98756107;
          result[1] += 1494972;
          result[2] += 8706014;
          result[3] += 12399475;
          result[4] += 8969833;
          result[5] += 12839173;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 143165576;
        } else {
          result[0] += 376751;
          result[1] += 141281818;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1507006;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8947848;
          result[3] += 55476660;
          result[4] += 8947848;
          result[5] += 69793218;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 57266230;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 9296466;
          result[1] += 0;
          result[2] += 91105366;
          result[3] += 9296466;
          result[4] += 1859293;
          result[5] += 31607984;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 143165576;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41756626;
          result[3] += 89478485;
          result[4] += 0;
          result[5] += 11930464;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 61356675;
          result[4] += 0;
          result[5] += 81808900;
        } else {
          result[0] += 2363582;
          result[1] += 0;
          result[2] += 130165872;
          result[3] += 9454330;
          result[4] += 0;
          result[5] += 1181791;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 1645581;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 138228832;
          result[5] += 3291162;
        } else {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 136348168;
          result[2] += 0;
          result[3] += 0;
          result[4] += 6817408;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 109842554;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 16044418;
          result[5] += 17278604;
        } else {
          result[0] += 1308111;
          result[1] += 726728;
          result[2] += 0;
          result[3] += 8866091;
          result[4] += 8866091;
          result[5] += 123398552;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 18472977;
          result[1] += 0;
          result[2] += 2309122;
          result[3] += 11545611;
          result[4] += 4618244;
          result[5] += 106219621;
        } else {
          result[0] += 903252;
          result[1] += 0;
          result[2] += 4064637;
          result[3] += 99809439;
          result[4] += 0;
          result[5] += 38388246;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42560000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 107374182;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35791394;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42890000))) ) ) {
          result[0] += 7708915;
          result[1] += 57266230;
          result[2] += 0;
          result[3] += 1101273;
          result[4] += 73785335;
          result[5] += 3303820;
        } else {
          result[0] += 75503598;
          result[1] += 4032833;
          result[2] += 6049249;
          result[3] += 17923702;
          result[4] += 23524859;
          result[5] += 16131332;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 26552697;
          result[1] += 0;
          result[2] += 97451138;
          result[3] += 16561218;
          result[4] += 410608;
          result[5] += 2189913;
        } else {
          result[0] += 94717909;
          result[1] += 0;
          result[2] += 46270243;
          result[3] += 725807;
          result[4] += 1270163;
          result[5] += 181451;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 2898088;
          result[2] += 0;
          result[3] += 0;
          result[4] += 134471310;
          result[5] += 5796177;
        } else {
          result[0] += 0;
          result[1] += 130716395;
          result[2] += 0;
          result[3] += 0;
          result[4] += 12449180;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 6280444;
          result[1] += 428212;
          result[2] += 856424;
          result[3] += 7707817;
          result[4] += 8278767;
          result[5] += 119613911;
        } else {
          result[0] += 0;
          result[1] += 2055008;
          result[2] += 8220033;
          result[3] += 78090314;
          result[4] += 5480022;
          result[5] += 49320198;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42bc0000))) ) ) {
          result[0] += 0;
          result[1] += 28633115;
          result[2] += 8589934;
          result[3] += 0;
          result[4] += 105942526;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 142498137;
          result[2] += 0;
          result[3] += 333719;
          result[4] += 333719;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
          result[0] += 28380841;
          result[1] += 12613707;
          result[2] += 5676168;
          result[3] += 35318380;
          result[4] += 13875077;
          result[5] += 47301401;
        } else {
          result[0] += 111867932;
          result[1] += 4652352;
          result[2] += 3806470;
          result[3] += 4758087;
          result[4] += 14802939;
          result[5] += 3277793;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1664716;
          result[3] += 74912220;
          result[4] += 4994148;
          result[5] += 61594492;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 43572131;
          result[3] += 91293990;
          result[4] += 0;
          result[5] += 8299453;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12271335;
          result[3] += 8180890;
          result[4] += 4090445;
          result[5] += 118622906;
        } else {
          result[0] += 0;
          result[1] += 18179755;
          result[2] += 79536431;
          result[3] += 18179755;
          result[4] += 11362347;
          result[5] += 15907286;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42f90000))) ) ) {
          result[0] += 2708537;
          result[1] += 0;
          result[2] += 112984725;
          result[3] += 21668303;
          result[4] += 0;
          result[5] += 5804009;
        } else {
          result[0] += 107374182;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 3491843;
          result[1] += 0;
          result[2] += 101263456;
          result[3] += 38410276;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 139847169;
          result[3] += 3318407;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42810000))) ) ) {
          result[0] += 2416296;
          result[1] += 4228519;
          result[2] += 0;
          result[3] += 0;
          result[4] += 131084093;
          result[5] += 5436667;
        } else {
          result[0] += 72563374;
          result[1] += 1961172;
          result[2] += 0;
          result[3] += 8825275;
          result[4] += 30398170;
          result[5] += 29417584;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 299196;
          result[1] += 0;
          result[2] += 299196;
          result[3] += 8826299;
          result[4] += 8227906;
          result[5] += 125512976;
        } else {
          result[0] += 732304;
          result[1] += 2563066;
          result[2] += 1464609;
          result[3] += 69568950;
          result[4] += 5858437;
          result[5] += 62978207;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 6817408;
          result[2] += 0;
          result[3] += 0;
          result[4] += 129530759;
          result[5] += 6817408;
        } else {
          result[0] += 989623;
          result[1] += 137227833;
          result[2] += 0;
          result[3] += 659749;
          result[4] += 4288369;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 9693502;
          result[1] += 49213166;
          result[2] += 745654;
          result[3] += 1491308;
          result[4] += 76802366;
          result[5] += 5219578;
        } else {
          result[0] += 108907344;
          result[1] += 317205;
          result[2] += 8458822;
          result[3] += 8881763;
          result[4] += 8670293;
          result[5] += 7930146;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38930990;
          result[3] += 74094465;
          result[4] += 0;
          result[5] += 30140121;
        } else {
          result[0] += 1859293;
          result[1] += 0;
          result[2] += 96683246;
          result[3] += 35326570;
          result[4] += 0;
          result[5] += 9296466;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 2016416;
          result[1] += 0;
          result[2] += 125017827;
          result[3] += 13106707;
          result[4] += 0;
          result[5] += 3024624;
        } else {
          result[0] += 52060209;
          result[1] += 0;
          result[2] += 91105366;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 143165576;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 111518449;
          result[3] += 31647127;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 133414360;
          result[3] += 8421504;
          result[4] += 0;
          result[5] += 1329711;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 142713950;
          result[3] += 451626;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cc0000))) ) ) {
          result[0] += 591593;
          result[1] += 591593;
          result[2] += 0;
          result[3] += 0;
          result[4] += 134883270;
          result[5] += 7099119;
        } else {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 5442930;
          result[1] += 1319498;
          result[2] += 0;
          result[3] += 3298746;
          result[4] += 8411802;
          result[5] += 124692598;
        } else {
          result[0] += 1008208;
          result[1] += 0;
          result[2] += 504104;
          result[3] += 82168975;
          result[4] += 0;
          result[5] += 59484288;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 13681352;
          result[1] += 32248901;
          result[2] += 5374816;
          result[3] += 4886197;
          result[4] += 82088112;
          result[5] += 4886197;
        } else {
          result[0] += 93399764;
          result[1] += 355470;
          result[2] += 12085982;
          result[3] += 16085021;
          result[4] += 7820341;
          result[5] += 13418995;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0;
          result[1] += 141362483;
          result[2] += 0;
          result[3] += 360618;
          result[4] += 721237;
          result[5] += 721237;
        } else {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429c0000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 4772185;
          result[1] += 0;
          result[2] += 11930464;
          result[3] += 23860929;
          result[4] += 4772185;
          result[5] += 97829810;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
          result[0] += 116322030;
          result[1] += 0;
          result[2] += 17895697;
          result[3] += 8947848;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 16843009;
          result[1] += 0;
          result[2] += 103865222;
          result[3] += 14035840;
          result[4] += 0;
          result[5] += 8421504;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 1015358;
          result[2] += 61936880;
          result[3] += 67013674;
          result[4] += 0;
          result[5] += 13199663;
        } else {
          result[0] += 2541400;
          result[1] += 2541400;
          result[2] += 120292969;
          result[3] += 10165603;
          result[4] += 0;
          result[5] += 7624202;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 71582788;
          result[4] += 0;
          result[5] += 35791394;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 138213985;
          result[3] += 4951591;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 636291;
          result[2] += 1908874;
          result[3] += 0;
          result[4] += 139347827;
          result[5] += 1272582;
        } else {
          result[0] += 15907286;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 71582788;
          result[5] += 55675501;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 3197606;
          result[1] += 1162766;
          result[2] += 0;
          result[3] += 5668484;
          result[4] += 8866091;
          result[5] += 124270627;
        } else {
          result[0] += 22987148;
          result[1] += 6452533;
          result[2] += 5645966;
          result[3] += 56459663;
          result[4] += 8468949;
          result[5] += 43151314;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 26030104;
          result[2] += 0;
          result[3] += 0;
          result[4] += 117135471;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 62523555;
          result[1] += 6980064;
          result[2] += 3415776;
          result[3] += 16484832;
          result[4] += 30296449;
          result[5] += 23464897;
        } else {
          result[0] += 132136832;
          result[1] += 0;
          result[2] += 7491222;
          result[3] += 1872805;
          result[4] += 1664716;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 0;
          result[4] += 0;
          result[5] += 107374182;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17179869;
          result[3] += 93057624;
          result[4] += 0;
          result[5] += 32928082;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 59652323;
          result[3] += 15907286;
          result[4] += 11930464;
          result[5] += 55675501;
        } else {
          result[0] += 1507006;
          result[1] += 0;
          result[2] += 97955394;
          result[3] += 40689163;
          result[4] += 0;
          result[5] += 3014012;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 106048575;
          result[3] += 27572629;
          result[4] += 0;
          result[5] += 9544371;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 100215903;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 2356635;
          result[1] += 0;
          result[2] += 132953491;
          result[3] += 6677132;
          result[4] += 392772;
          result[5] += 785545;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42400000))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 138393390;
          result[5] += 4772185;
        } else {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4586083;
          result[4] += 2193344;
          result[5] += 136386148;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3329432;
          result[3] += 26635456;
          result[4] += 43282616;
          result[5] += 69918072;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 113250381;
          result[1] += 9615598;
          result[2] += 0;
          result[3] += 7478798;
          result[4] += 9615598;
          result[5] += 3205199;
        } else {
          result[0] += 2343135;
          result[1] += 1405881;
          result[2] += 1874508;
          result[3] += 56000937;
          result[4] += 7732347;
          result[5] += 73808766;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 4853070;
          result[1] += 41251098;
          result[2] += 0;
          result[3] += 0;
          result[4] += 94634872;
          result[5] += 2426535;
        } else {
          result[0] += 0;
          result[1] += 138973791;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4191784;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 127039783;
          result[1] += 1704352;
          result[2] += 262208;
          result[3] += 2097664;
          result[4] += 10881632;
          result[5] += 1179936;
        } else {
          result[0] += 41953282;
          result[1] += 2622080;
          result[2] += 36184706;
          result[3] += 30416129;
          result[4] += 7866240;
          result[5] += 24123137;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42d80000))) ) ) {
          result[0] += 3904515;
          result[1] += 23427094;
          result[2] += 35140641;
          result[3] += 31236125;
          result[4] += 23427094;
          result[5] += 26030104;
        } else {
          result[0] += 132152839;
          result[1] += 5506368;
          result[2] += 5506368;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 73929764;
          result[3] += 45766044;
          result[4] += 0;
          result[5] += 23469766;
        } else {
          result[0] += 2164130;
          result[1] += 0;
          result[2] += 131346092;
          result[3] += 8989466;
          result[4] += 0;
          result[5] += 665886;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x423c0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 28633115;
          result[2] += 0;
          result[3] += 14316557;
          result[4] += 100215903;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 71582788;
          result[1] += 0;
          result[2] += 71582788;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42850000))) ) ) {
          result[0] += 5614336;
          result[1] += 18848129;
          result[2] += 0;
          result[3] += 0;
          result[4] += 113489798;
          result[5] += 5213312;
        } else {
          result[0] += 108431312;
          result[1] += 9061112;
          result[2] += 0;
          result[3] += 906111;
          result[4] += 13289631;
          result[5] += 11477409;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 7067875;
          result[4] += 8054090;
          result[5] += 128043609;
        } else {
          result[0] += 20346145;
          result[1] += 2673216;
          result[2] += 8019648;
          result[3] += 50791107;
          result[4] += 19009537;
          result[5] += 42325922;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 140981694;
          result[1] += 0;
          result[2] += 0;
          result[3] += 485307;
          result[4] += 1698574;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 14316557;
          result[4] += 57266230;
          result[5] += 57266230;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ea0000))) ) ) {
          result[0] += 3869339;
          result[1] += 0;
          result[2] += 116080197;
          result[3] += 11608019;
          result[4] += 0;
          result[5] += 11608019;
        } else {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 7953643;
          result[1] += 0;
          result[2] += 111351003;
          result[3] += 15907286;
          result[4] += 0;
          result[5] += 7953643;
        } else {
          result[0] += 131557556;
          result[1] += 0;
          result[2] += 5804009;
          result[3] += 3869339;
          result[4] += 1934669;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 3089904;
          result[1] += 0;
          result[2] += 95787040;
          result[3] += 36048886;
          result[4] += 0;
          result[5] += 8239745;
        } else {
          result[0] += 2322500;
          result[1] += 0;
          result[2] += 133377895;
          result[3] += 7133394;
          result[4] += 0;
          result[5] += 331785;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 458864;
          result[1] += 458864;
          result[2] += 0;
          result[3] += 0;
          result[4] += 132152839;
          result[5] += 10095008;
        } else {
          result[0] += 8947848;
          result[1] += 125269879;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8947848;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1066807;
          result[3] += 2987061;
          result[4] += 2987061;
          result[5] += 136124646;
        } else {
          result[0] += 9786001;
          result[1] += 2899555;
          result[2] += 3624444;
          result[3] += 51829563;
          result[4] += 10873334;
          result[5] += 64152676;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 3869339;
          result[1] += 34824059;
          result[2] += 0;
          result[3] += 2579559;
          result[4] += 100602837;
          result[5] += 1289779;
        } else {
          result[0] += 331401;
          result[1] += 138194549;
          result[2] += 0;
          result[3] += 1325607;
          result[4] += 3314017;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 60222613;
          result[1] += 547478;
          result[2] += 8759652;
          result[3] += 27373915;
          result[4] += 16150609;
          result[5] += 30111306;
        } else {
          result[0] += 122103717;
          result[1] += 4955731;
          result[2] += 3028502;
          result[3] += 1789569;
          result[4] += 9636144;
          result[5] += 1651910;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 723058;
          result[1] += 4338350;
          result[2] += 7230584;
          result[3] += 64352203;
          result[4] += 7953643;
          result[5] += 58567735;
        } else {
          result[0] += 15618062;
          result[1] += 0;
          result[2] += 80693324;
          result[3] += 39045157;
          result[4] += 0;
          result[5] += 7809031;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42e90000))) ) ) {
          result[0] += 6205319;
          result[1] += 0;
          result[2] += 100171579;
          result[3] += 26594224;
          result[4] += 886474;
          result[5] += 9307978;
        } else {
          result[0] += 132560718;
          result[1] += 0;
          result[2] += 10604857;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 73891910;
          result[3] += 69273666;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 1908874;
          result[2] += 123122395;
          result[3] += 13362120;
          result[4] += 0;
          result[5] += 4772185;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 143165576;
        } else {
          result[0] += 264631;
          result[1] += 0;
          result[2] += 141842419;
          result[3] += 1058525;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 1033686;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 138513987;
          result[5] += 3617902;
        } else {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
          result[0] += 2185733;
          result[1] += 312247;
          result[2] += 156123;
          result[3] += 8430688;
          result[4] += 6244954;
          result[5] += 125835828;
        } else {
          result[0] += 52494044;
          result[1] += 9544371;
          result[2] += 1908874;
          result[3] += 13362120;
          result[4] += 20043180;
          result[5] += 45812984;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 40904450;
          result[2] += 0;
          result[3] += 0;
          result[4] += 102261126;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 141360968;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1804608;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 113353319;
          result[1] += 2780994;
          result[2] += 1112397;
          result[3] += 6118187;
          result[4] += 13126292;
          result[5] += 6674385;
        } else {
          result[0] += 18187157;
          result[1] += 2098518;
          result[2] += 24482712;
          result[3] += 51996618;
          result[4] += 10492591;
          result[5] += 35907978;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 14810232;
          result[2] += 19746976;
          result[3] += 0;
          result[4] += 9873488;
          result[5] += 98734880;
        } else {
          result[0] += 2105376;
          result[1] += 4210752;
          result[2] += 27369889;
          result[3] += 61055907;
          result[4] += 2105376;
          result[5] += 46318274;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 73891910;
          result[3] += 66964543;
          result[4] += 0;
          result[5] += 2309122;
        } else {
          result[0] += 11453246;
          result[1] += 0;
          result[2] += 131712330;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 28633115;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 122713351;
          result[3] += 13634816;
          result[4] += 0;
          result[5] += 6817408;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 178288;
          result[1] += 0;
          result[2] += 134251157;
          result[3] += 7309823;
          result[4] += 0;
          result[5] += 1426307;
        } else {
          result[0] += 66076419;
          result[1] += 0;
          result[2] += 77089156;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 141947146;
          result[5] += 1218430;
        } else {
          result[0] += 10226112;
          result[1] += 0;
          result[2] += 15339168;
          result[3] += 30678337;
          result[4] += 25565281;
          result[5] += 61356675;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 6314233;
          result[1] += 128861;
          result[2] += 0;
          result[3] += 9020333;
          result[4] += 12370742;
          result[5] += 115331405;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3767515;
          result[3] += 97013515;
          result[4] += 941878;
          result[5] += 41442666;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42420000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 95443717;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 47721858;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 9433390;
          result[1] += 69918072;
          result[2] += 0;
          result[3] += 0;
          result[4] += 63814113;
          result[5] += 0;
        } else {
          result[0] += 105916188;
          result[1] += 1693153;
          result[2] += 5079461;
          result[3] += 12322398;
          result[4] += 8842026;
          result[5] += 9312346;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11495046;
          result[3] += 94050378;
          result[4] += 1045004;
          result[5] += 36575147;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 102261126;
          result[3] += 12271335;
          result[4] += 12271335;
          result[5] += 16361780;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 572662;
          result[1] += 0;
          result[2] += 111096487;
          result[3] += 26342466;
          result[4] += 0;
          result[5] += 5153960;
        } else {
          result[0] += 114532461;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 143165576;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 122713351;
          result[1] += 0;
          result[2] += 20452225;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1363481;
          result[1] += 0;
          result[2] += 124758573;
          result[3] += 15680039;
          result[4] += 0;
          result[5] += 1363481;
        } else {
          result[0] += 284623;
          result[1] += 0;
          result[2] += 140603965;
          result[3] += 1992363;
          result[4] += 0;
          result[5] += 284623;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1072401;
          result[4] += 140484573;
          result[5] += 1608601;
        } else {
          result[0] += 0;
          result[1] += 89478485;
          result[2] += 0;
          result[3] += 35791394;
          result[4] += 0;
          result[5] += 17895697;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 143165576;
        } else {
          result[0] += 13015052;
          result[1] += 6507526;
          result[2] += 22776341;
          result[3] += 13015052;
          result[4] += 61821498;
          result[5] += 26030104;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 134744072;
          result[5] += 8421504;
        } else {
          result[0] += 602379;
          result[1] += 200793;
          result[2] += 803172;
          result[3] += 4015864;
          result[4] += 3815071;
          result[5] += 133728294;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 34164512;
          result[1] += 813440;
          result[2] += 0;
          result[3] += 8947848;
          result[4] += 29283867;
          result[5] += 69955906;
        } else {
          result[0] += 834784;
          result[1] += 417392;
          result[2] += 4173923;
          result[3] += 86817609;
          result[4] += 834784;
          result[5] += 50087082;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 122713351;
          result[2] += 0;
          result[3] += 0;
          result[4] += 20452225;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 64835904;
          result[1] += 15468464;
          result[2] += 6582325;
          result[3] += 16455813;
          result[4] += 25012836;
          result[5] += 14810232;
        } else {
          result[0] += 121719145;
          result[1] += 4260880;
          result[2] += 2414498;
          result[3] += 2272469;
          result[4] += 11504376;
          result[5] += 994205;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 1859293;
          result[1] += 1859293;
          result[2] += 62596204;
          result[3] += 52060209;
          result[4] += 6817408;
          result[5] += 17973167;
        } else {
          result[0] += 3236250;
          result[1] += 462321;
          result[2] += 126830214;
          result[3] += 8784109;
          result[4] += 924643;
          result[5] += 2928036;
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
