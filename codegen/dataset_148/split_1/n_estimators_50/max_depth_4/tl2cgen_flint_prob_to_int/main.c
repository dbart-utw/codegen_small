
#include "header.h"


static const int32_t num_class[] = {  7, };

int32_t get_num_target(void) {
  return N_TARGET;
}
void get_num_class(int32_t* out) {
  for (int i = 0; i < N_TARGET; ++i) {
    out[i] = num_class[i];
  }
}
int32_t get_num_feature(void) {
  return 7;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "uint32";
}


void predict(union Entry* data, int pred_margin, uint32_t* result) {
  unsigned int tmp;
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
          result[0] += 0;
          result[1] += 15618062;
          result[2] += 0;
          result[3] += 70281283;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 372575;
          result[1] += 248383;
          result[2] += 662356;
          result[3] += 84616030;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 6607641;
          result[1] += 0;
          result[2] += 79291703;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 85366754;
          result[1] += 0;
          result[2] += 418464;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 114126;
        } else {
          result[0] += 85885101;
          result[1] += 0;
          result[2] += 14244;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 55165367;
          result[1] += 194742;
          result[2] += 442597;
          result[3] += 27458756;
          result[4] += 2460842;
          result[5] += 53111;
          result[6] += 123927;
        } else {
          result[0] += 0;
          result[1] += 47735;
          result[2] += 596688;
          result[3] += 69335259;
          result[4] += 15848059;
          result[5] += 71602;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 75084680;
          result[1] += 0;
          result[2] += 102996;
          result[3] += 10711669;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84914749;
          result[1] += 0;
          result[2] += 665267;
          result[3] += 159664;
          result[4] += 0;
          result[5] += 0;
          result[6] += 159664;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41300000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 5515206;
          result[1] += 0;
          result[2] += 0;
          result[3] += 80384139;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85757363;
          result[5] += 141982;
          result[6] += 0;
        } else {
          result[0] += 19088743;
          result[1] += 19088743;
          result[2] += 31814572;
          result[3] += 0;
          result[4] += 0;
          result[5] += 15907286;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d60000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 39027;
          result[2] += 273191;
          result[3] += 62795114;
          result[4] += 22479792;
          result[5] += 312219;
          result[6] += 0;
        } else {
          result[0] += 30168402;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 55730942;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x41dc0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 10105805;
          result[2] += 0;
          result[3] += 0;
          result[4] += 75793540;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40900000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40600000))) ) ) {
          result[0] += 85840330;
          result[1] += 0;
          result[2] += 59015;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85489325;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 410020;
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 6831118;
          result[1] += 1570371;
          result[2] += 1256297;
          result[3] += 76241558;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84155743;
          result[1] += 0;
          result[2] += 441282;
          result[3] += 1216216;
          result[4] += 0;
          result[5] += 0;
          result[6] += 86103;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41100000))) ) ) {
          result[0] += 0;
          result[1] += 57766;
          result[2] += 0;
          result[3] += 85841579;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 962997;
          result[3] += 84936348;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e00000))) ) ) {
          result[0] += 0;
          result[1] += 27235;
          result[2] += 0;
          result[3] += 85681465;
          result[4] += 81705;
          result[5] += 108940;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 365529;
          result[4] += 85533816;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
          result[0] += 0;
          result[1] += 29451204;
          result[2] += 53993874;
          result[3] += 0;
          result[4] += 0;
          result[5] += 2454267;
          result[6] += 0;
        } else {
          result[0] += 84467690;
          result[1] += 0;
          result[2] += 1431655;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
          result[0] += 85778045;
          result[1] += 0;
          result[2] += 111969;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9330;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 36027479;
          result[1] += 347446;
          result[2] += 587985;
          result[3] += 48936435;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 51814032;
          result[1] += 108898;
          result[2] += 762291;
          result[3] += 33127004;
          result[4] += 0;
          result[5] += 0;
          result[6] += 87119;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 85780481;
          result[1] += 0;
          result[2] += 118864;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85380421;
          result[1] += 0;
          result[2] += 518924;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 21133966;
          result[1] += 0;
          result[2] += 0;
          result[3] += 64765379;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85177069;
          result[1] += 0;
          result[2] += 335342;
          result[3] += 154773;
          result[4] += 0;
          result[5] += 0;
          result[6] += 232160;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43320000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 57844;
          result[2] += 0;
          result[3] += 82602199;
          result[4] += 3152534;
          result[5] += 86767;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 61975624;
          result[4] += 23923721;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 27790964;
          result[2] += 53055478;
          result[3] += 0;
          result[4] += 0;
          result[5] += 5052902;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42020000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 85422368;
          result[1] += 0;
          result[2] += 433616;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 43361;
        } else {
          result[0] += 85866329;
          result[1] += 0;
          result[2] += 33016;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 84975112;
          result[1] += 380566;
          result[2] += 489300;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 54366;
        } else {
          result[0] += 69426932;
          result[1] += 0;
          result[2] += 1130254;
          result[3] += 15174713;
          result[4] += 0;
          result[5] += 0;
          result[6] += 167445;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41100000))) ) ) {
          result[0] += 0;
          result[1] += 117509;
          result[2] += 0;
          result[3] += 85781836;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 978909;
          result[3] += 84920435;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 29181723;
          result[1] += 0;
          result[2] += 1519222;
          result[3] += 55198400;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 43086892;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42812453;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 370655;
          result[1] += 1853276;
          result[2] += 0;
          result[3] += 83675414;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41300000))) ) ) {
          result[0] += 85636548;
          result[1] += 10653;
          result[2] += 56821;
          result[3] += 166912;
          result[4] += 10653;
          result[5] += 0;
          result[6] += 17756;
        } else {
          result[0] += 27536282;
          result[1] += 2251394;
          result[2] += 346368;
          result[3] += 54726196;
          result[4] += 692736;
          result[5] += 346368;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 799311;
          result[3] += 72470912;
          result[4] += 12415972;
          result[5] += 213149;
          result[6] += 0;
        } else {
          result[0] += 85021611;
          result[1] += 0;
          result[2] += 782844;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 94890;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
          result[0] += 22096214;
          result[1] += 0;
          result[2] += 0;
          result[3] += 63803131;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 52464303;
          result[1] += 0;
          result[2] += 1119368;
          result[3] += 0;
          result[4] += 32315674;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 83880823;
          result[4] += 1345681;
          result[5] += 672840;
          result[6] += 0;
        } else {
          result[0] += 85338523;
          result[1] += 0;
          result[2] += 420617;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 140205;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 83151034;
          result[4] += 2602124;
          result[5] += 146186;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 59788972;
          result[4] += 26110373;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
          result[0] += 82831512;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3067833;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 19940919;
          result[2] += 0;
          result[3] += 0;
          result[4] += 62890592;
          result[5] += 3067833;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 503922;
          result[3] += 0;
          result[4] += 85279134;
          result[5] += 116289;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 85759823;
          result[1] += 0;
          result[2] += 139522;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85051654;
          result[1] += 0;
          result[2] += 565127;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 282563;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 85866267;
          result[1] += 0;
          result[2] += 33078;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 85286160;
          result[1] += 266602;
          result[2] += 239942;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 106641;
        } else {
          result[0] += 271451;
          result[1] += 0;
          result[2] += 633387;
          result[3] += 84994507;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
          result[0] += 82139500;
          result[1] += 0;
          result[2] += 699506;
          result[3] += 3007876;
          result[4] += 0;
          result[5] += 0;
          result[6] += 52462;
        } else {
          result[0] += 24028600;
          result[1] += 464320;
          result[2] += 2205523;
          result[3] += 59200900;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
          result[0] += 17884406;
          result[1] += 0;
          result[2] += 0;
          result[3] += 67743963;
          result[4] += 270975;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85785913;
          result[1] += 0;
          result[2] += 30936;
          result[3] += 61872;
          result[4] += 0;
          result[5] += 0;
          result[6] += 20624;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0;
          result[1] += 198496;
          result[2] += 248120;
          result[3] += 62625635;
          result[4] += 22827093;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85410090;
          result[1] += 0;
          result[2] += 489255;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 25738793;
          result[1] += 0;
          result[2] += 2790953;
          result[3] += 3101059;
          result[4] += 54268539;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 741092;
          result[3] += 84551905;
          result[4] += 471604;
          result[5] += 134744;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 83886794;
          result[1] += 0;
          result[2] += 914796;
          result[3] += 823316;
          result[4] += 0;
          result[5] += 0;
          result[6] += 274438;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428c0000))) ) ) {
          result[0] += 84597396;
          result[1] += 11729;
          result[2] += 64511;
          result[3] += 1219844;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5864;
        } else {
          result[0] += 1827645;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 84071700;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 44234981;
          result[1] += 254516;
          result[2] += 458129;
          result[3] += 40849911;
          result[4] += 0;
          result[5] += 0;
          result[6] += 101806;
        } else {
          result[0] += 84825429;
          result[1] += 0;
          result[2] += 55787;
          result[3] += 1018128;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41e00000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 25850306;
          result[1] += 238526;
          result[2] += 1401343;
          result[3] += 58349538;
          result[4] += 0;
          result[5] += 59631;
          result[6] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85531665;
          result[1] += 0;
          result[2] += 344700;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 22980;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 37942627;
          result[1] += 156960;
          result[2] += 429025;
          result[3] += 39972652;
          result[4] += 7293439;
          result[5] += 73248;
          result[6] += 31392;
        } else {
          result[0] += 80743482;
          result[1] += 0;
          result[2] += 818089;
          result[3] += 4261672;
          result[4] += 0;
          result[5] += 0;
          result[6] += 76101;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41980000))) ) ) {
          result[0] += 30598133;
          result[1] += 2245734;
          result[2] += 0;
          result[3] += 53055478;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 2988871;
          result[1] += 0;
          result[2] += 982642;
          result[3] += 79594055;
          result[4] += 2292832;
          result[5] += 40943;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41880000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 797826;
          result[1] += 265942;
          result[2] += 0;
          result[3] += 84835576;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e00000))) ) ) {
          result[0] += 26893;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85630406;
          result[4] += 107575;
          result[5] += 134469;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42740000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 80172722;
          result[3] += 0;
          result[4] += 5726623;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85823530;
          result[5] += 75815;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 37223049;
          result[2] += 37223049;
          result[3] += 0;
          result[4] += 0;
          result[5] += 11453246;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 85375814;
          result[1] += 0;
          result[2] += 483259;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 40271;
        } else {
          result[0] += 85884696;
          result[1] += 0;
          result[2] += 14649;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 67306413;
          result[1] += 0;
          result[2] += 0;
          result[3] += 18592932;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 28633115;
          result[1] += 3579139;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
          result[0] += 79662711;
          result[1] += 92341;
          result[2] += 411987;
          result[3] += 5590241;
          result[4] += 0;
          result[5] += 0;
          result[6] += 142064;
        } else {
          result[0] += 21992996;
          result[1] += 575732;
          result[2] += 2533224;
          result[3] += 60797392;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 24448043;
          result[1] += 0;
          result[2] += 0;
          result[3] += 61451302;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84428247;
          result[1] += 0;
          result[2] += 1343176;
          result[3] += 127921;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x4467a000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 332620;
          result[3] += 83792746;
          result[4] += 1552230;
          result[5] += 221747;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 629628;
          result[2] += 0;
          result[3] += 8095226;
          result[4] += 77174490;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 85697215;
          result[1] += 24877;
          result[2] += 158594;
          result[3] += 3109;
          result[4] += 0;
          result[5] += 0;
          result[6] += 15548;
        } else {
          result[0] += 76499040;
          result[1] += 0;
          result[2] += 3889781;
          result[3] += 5510524;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 80488363;
          result[1] += 5410982;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1344044;
          result[1] += 0;
          result[2] += 806426;
          result[3] += 83748875;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 40626043;
          result[1] += 0;
          result[2] += 0;
          result[3] += 45273302;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84292463;
          result[1] += 0;
          result[2] += 964129;
          result[3] += 183643;
          result[4] += 275465;
          result[5] += 0;
          result[6] += 183643;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
          result[0] += 75054;
          result[1] += 0;
          result[2] += 0;
          result[3] += 83647724;
          result[4] += 2101513;
          result[5] += 75054;
          result[6] += 0;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 77108;
          result[2] += 0;
          result[3] += 73870353;
          result[4] += 11951883;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 79027398;
          result[5] += 6871947;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 30480413;
          result[2] += 49877039;
          result[3] += 0;
          result[4] += 0;
          result[5] += 5541893;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84846856;
          result[1] += 0;
          result[2] += 728646;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 323842;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 85841523;
          result[1] += 0;
          result[2] += 57822;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 7204461;
          result[1] += 2032027;
          result[2] += 3971690;
          result[3] += 72691166;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 50688789;
          result[1] += 0;
          result[2] += 277139;
          result[3] += 34877988;
          result[4] += 0;
          result[5] += 0;
          result[6] += 55427;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42520000))) ) ) {
          result[0] += 71925289;
          result[1] += 0;
          result[2] += 0;
          result[3] += 13974056;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84738834;
          result[1] += 0;
          result[2] += 709201;
          result[3] += 343855;
          result[4] += 0;
          result[5] += 0;
          result[6] += 107454;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x420c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 766958;
          result[4] += 85132387;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 79121;
          result[1] += 26373;
          result[2] += 0;
          result[3] += 85714729;
          result[4] += 52747;
          result[5] += 26373;
          result[6] += 0;
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
          result[0] += 44667659;
          result[1] += 6871947;
          result[2] += 27487790;
          result[3] += 0;
          result[4] += 0;
          result[5] += 6871947;
          result[6] += 0;
        } else {
          result[0] += 71582788;
          result[1] += 4090445;
          result[2] += 8180890;
          result[3] += 0;
          result[4] += 0;
          result[5] += 2045222;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42020000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 1130254;
          result[2] += 0;
          result[3] += 84769091;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 85625751;
          result[1] += 50316;
          result[2] += 207554;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 15723;
        } else {
          result[0] += 4090445;
          result[1] += 0;
          result[2] += 0;
          result[3] += 81808900;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 22131543;
          result[1] += 0;
          result[2] += 165469;
          result[3] += 63602332;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 82711506;
          result[1] += 0;
          result[2] += 2843208;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 344631;
        } else {
          result[0] += 85540984;
          result[1] += 0;
          result[2] += 286689;
          result[3] += 71672;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85145842;
          result[1] += 0;
          result[2] += 659315;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 94187;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 84825604;
          result[1] += 0;
          result[2] += 1073741;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85888577;
          result[1] += 0;
          result[2] += 10768;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 2225254;
          result[1] += 681200;
          result[2] += 386013;
          result[3] += 76952916;
          result[4] += 5585841;
          result[5] += 68120;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2084351;
          result[3] += 22527033;
          result[4] += 61207793;
          result[5] += 80167;
          result[6] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 70495454;
          result[1] += 0;
          result[2] += 362444;
          result[3] += 14860224;
          result[4] += 0;
          result[5] += 0;
          result[6] += 181222;
        } else {
          result[0] += 84998861;
          result[1] += 0;
          result[2] += 353354;
          result[3] += 444542;
          result[4] += 0;
          result[5] += 0;
          result[6] += 102586;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 114076;
          result[3] += 85785269;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x43460000))) ) ) {
          result[0] += 0;
          result[1] += 856851;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85042494;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85797810;
          result[5] += 101535;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 55652;
          result[2] += 445218;
          result[3] += 85203691;
          result[4] += 0;
          result[5] += 194783;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
          result[0] += 85796718;
          result[1] += 0;
          result[2] += 102627;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 75844156;
          result[1] += 0;
          result[2] += 786714;
          result[3] += 9194721;
          result[4] += 0;
          result[5] += 0;
          result[6] += 73754;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 967879;
          result[3] += 84931465;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
          result[0] += 32897621;
          result[1] += 3289762;
          result[2] += 0;
          result[3] += 49711961;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85329136;
          result[1] += 105764;
          result[2] += 298900;
          result[3] += 151749;
          result[4] += 0;
          result[5] += 0;
          result[6] += 13795;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 37252132;
          result[1] += 0;
          result[2] += 211509;
          result[3] += 48356387;
          result[4] += 0;
          result[5] += 0;
          result[6] += 79316;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40b00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42dc0000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 800659;
          result[2] += 0;
          result[3] += 114379;
          result[4] += 84984306;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 54905;
          result[2] += 0;
          result[3] += 85515008;
          result[4] += 329431;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1267699;
          result[3] += 0;
          result[4] += 84479522;
          result[5] += 152123;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
          result[0] += 84231397;
          result[1] += 0;
          result[2] += 1459454;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 208493;
        } else {
          result[0] += 85739582;
          result[1] += 0;
          result[2] += 159763;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85817683;
          result[1] += 0;
          result[2] += 81661;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42100000))) ) ) {
          result[0] += 0;
          result[1] += 3916383;
          result[2] += 5482936;
          result[3] += 76500025;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85471692;
          result[1] += 0;
          result[2] += 353920;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 73733;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 72377287;
          result[1] += 0;
          result[2] += 1121645;
          result[3] += 12306942;
          result[4] += 0;
          result[5] += 0;
          result[6] += 93470;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 275122;
          result[3] += 85624223;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 85645830;
          result[1] += 0;
          result[2] += 253515;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85862792;
          result[1] += 0;
          result[2] += 36552;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 85626649;
          result[1] += 0;
          result[2] += 272696;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 2016767;
          result[1] += 423272;
          result[2] += 1095527;
          result[3] += 80795181;
          result[4] += 1469003;
          result[5] += 99593;
          result[6] += 0;
        } else {
          result[0] += 84144996;
          result[1] += 0;
          result[2] += 659210;
          result[3] += 988815;
          result[4] += 0;
          result[5] += 0;
          result[6] += 106324;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 195670;
          result[2] += 0;
          result[3] += 19567049;
          result[4] += 66136626;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 473927;
          result[3] += 85188454;
          result[4] += 236963;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 14939016;
          result[1] += 59756066;
          result[2] += 0;
          result[3] += 11204262;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41700000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 83496566;
          result[5] += 2402778;
          result[6] += 0;
        } else {
          result[0] += 27408;
          result[1] += 109635;
          result[2] += 137044;
          result[3] += 85515621;
          result[4] += 0;
          result[5] += 109635;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 83749032;
          result[1] += 0;
          result[2] += 2150313;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41500000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40900000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85807615;
          result[1] += 0;
          result[2] += 80263;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 11466;
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x433e8000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 78741885;
          result[1] += 137454;
          result[2] += 667636;
          result[3] += 6195278;
          result[4] += 0;
          result[5] += 0;
          result[6] += 157091;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 0;
          result[1] += 61753;
          result[2] += 0;
          result[3] += 85837592;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 85061757;
          result[1] += 0;
          result[2] += 744523;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 93065;
        } else {
          result[0] += 85823351;
          result[1] += 0;
          result[2] += 75994;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 38359351;
          result[1] += 220335;
          result[2] += 356733;
          result[3] += 40300401;
          result[4] += 6547110;
          result[5] += 52460;
          result[6] += 62952;
        } else {
          result[0] += 80127221;
          result[1] += 0;
          result[2] += 643513;
          result[3] += 4933606;
          result[4] += 0;
          result[5] += 0;
          result[6] += 195004;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42960000))) ) ) {
          result[0] += 286809;
          result[1] += 0;
          result[2] += 1075534;
          result[3] += 84393597;
          result[4] += 0;
          result[5] += 143404;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 1425715;
          result[1] += 2138572;
          result[2] += 0;
          result[3] += 17465012;
          result[4] += 64870045;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 155897;
          result[2] += 0;
          result[3] += 3117943;
          result[4] += 82625505;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
          result[0] += 9044061;
          result[1] += 230912;
          result[2] += 461824;
          result[3] += 46028502;
          result[4] += 30134044;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
          result[0] += 38177487;
          result[1] += 0;
          result[2] += 2386092;
          result[3] += 44540401;
          result[4] += 795364;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85416297;
          result[1] += 16656;
          result[2] += 37477;
          result[3] += 420585;
          result[4] += 0;
          result[5] += 0;
          result[6] += 8328;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 56039789;
          result[1] += 78283;
          result[2] += 290767;
          result[3] += 28031078;
          result[4] += 1431469;
          result[5] += 16775;
          result[6] += 11183;
        } else {
          result[0] += 84570602;
          result[1] += 0;
          result[2] += 859775;
          result[3] += 52107;
          result[4] += 286591;
          result[5] += 0;
          result[6] += 130268;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x433f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41400000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
          result[0] += 13616725;
          result[1] += 539870;
          result[2] += 479884;
          result[3] += 71262865;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d00000))) ) ) {
          result[0] += 876523;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85022821;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 696952;
          result[1] += 1219666;
          result[2] += 0;
          result[3] += 174238;
          result[4] += 83808489;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43320000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41700000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85486368;
          result[5] += 412977;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 27835;
          result[2] += 0;
          result[3] += 85871510;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85821819;
          result[5] += 77526;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 31426589;
          result[2] += 50282543;
          result[3] += 0;
          result[4] += 0;
          result[5] += 4190211;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x41480000))) ) ) {
          result[0] += 74250857;
          result[1] += 0;
          result[2] += 374337;
          result[3] += 11274151;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 70804801;
          result[1] += 0;
          result[2] += 240614;
          result[3] += 14821847;
          result[4] += 0;
          result[5] += 0;
          result[6] += 32081;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84022367;
          result[1] += 0;
          result[2] += 938488;
          result[3] += 662462;
          result[4] += 0;
          result[5] += 0;
          result[6] += 276026;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
          result[0] += 85804502;
          result[1] += 18968;
          result[2] += 75874;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84612971;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1286374;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 71031508;
          result[1] += 141996;
          result[2] += 509515;
          result[3] += 14199619;
          result[4] += 0;
          result[5] += 0;
          result[6] += 16705;
        } else {
          result[0] += 19498624;
          result[1] += 1053979;
          result[2] += 0;
          result[3] += 65346741;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e40000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41700000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 84965657;
          result[5] += 933688;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 31826;
          result[2] += 0;
          result[3] += 85803866;
          result[4] += 0;
          result[5] += 63652;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42200000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85768997;
          result[5] += 130348;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41300000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 33405301;
          result[2] += 50107951;
          result[3] += 0;
          result[4] += 0;
          result[5] += 2386092;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 85535056;
          result[1] += 0;
          result[2] += 364288;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85843693;
          result[1] += 13913;
          result[2] += 13913;
          result[3] += 27826;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 50071980;
          result[1] += 0;
          result[2] += 0;
          result[3] += 35827365;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 83615723;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2283622;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 83801071;
          result[1] += 119901;
          result[2] += 389679;
          result[3] += 1528742;
          result[4] += 0;
          result[5] += 0;
          result[6] += 59950;
        } else {
          result[0] += 53719432;
          result[1] += 0;
          result[2] += 442002;
          result[3] += 31662447;
          result[4] += 0;
          result[5] += 0;
          result[6] += 75463;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 43293270;
          result[1] += 0;
          result[2] += 2405181;
          result[3] += 40200893;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 16127573;
          result[1] += 228759;
          result[2] += 0;
          result[3] += 69543012;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40900000))) ) ) {
          result[0] += 85855333;
          result[1] += 0;
          result[2] += 39611;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 4401;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
          result[0] += 55182174;
          result[1] += 143070;
          result[2] += 443517;
          result[3] += 29980359;
          result[4] += 0;
          result[5] += 57228;
          result[6] += 92995;
        } else {
          result[0] += 110695;
          result[1] += 0;
          result[2] += 1439035;
          result[3] += 69129048;
          result[4] += 15054524;
          result[5] += 166042;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x42a20000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40b00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
          result[0] += 0;
          result[1] += 320519;
          result[2] += 0;
          result[3] += 85578825;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 83934328;
          result[1] += 0;
          result[2] += 1965017;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c00000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 4169871;
          result[1] += 0;
          result[2] += 0;
          result[3] += 81729474;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41dc0000))) ) ) {
          result[0] += 0;
          result[1] += 48751;
          result[2] += 48751;
          result[3] += 85655590;
          result[4] += 146253;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84275378;
          result[1] += 427359;
          result[2] += 1196607;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2013265;
          result[4] += 83886079;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 143885;
          result[1] += 0;
          result[2] += 1726620;
          result[3] += 27338150;
          result[4] += 56690690;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42ce0000))) ) ) {
          result[0] += 36814005;
          result[1] += 0;
          result[2] += 0;
          result[3] += 24542670;
          result[4] += 24542670;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 1309441;
          result[2] += 0;
          result[3] += 2749826;
          result[4] += 81840078;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
          result[0] += 231690;
          result[1] += 115845;
          result[2] += 463381;
          result[3] += 84914660;
          result[4] += 0;
          result[5] += 173768;
          result[6] += 0;
        } else {
          result[0] += 79257643;
          result[1] += 0;
          result[2] += 6641702;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 84688608;
          result[1] += 90980;
          result[2] += 195957;
          result[3] += 895805;
          result[4] += 0;
          result[5] += 0;
          result[6] += 27993;
        } else {
          result[0] += 85782823;
          result[1] += 0;
          result[2] += 105425;
          result[3] += 11097;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 36077383;
          result[1] += 0;
          result[2] += 580516;
          result[3] += 49156075;
          result[4] += 0;
          result[5] += 51222;
          result[6] += 34148;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41b80000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 18084072;
          result[1] += 326820;
          result[2] += 0;
          result[3] += 67433982;
          result[4] += 54470;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 2883546;
          result[1] += 0;
          result[2] += 3642375;
          result[3] += 79373423;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84835106;
          result[1] += 0;
          result[2] += 1064239;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x419c0000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 668477;
          result[1] += 334238;
          result[2] += 0;
          result[3] += 84896629;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40c00000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 795364;
          result[3] += 68202489;
          result[4] += 16702650;
          result[5] += 198841;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 13320857;
          result[1] += 161464;
          result[2] += 807324;
          result[3] += 71367501;
          result[4] += 0;
          result[5] += 242197;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 85660871;
          result[1] += 17664;
          result[2] += 57410;
          result[3] += 163399;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 82739660;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3159685;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 77865647;
          result[1] += 97061;
          result[2] += 321049;
          result[3] += 7533458;
          result[4] += 0;
          result[5] += 22398;
          result[6] += 59730;
        } else {
          result[0] += 44505234;
          result[1] += 0;
          result[2] += 303031;
          result[3] += 41091079;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42100000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 193794;
          result[2] += 726728;
          result[3] += 84930374;
          result[4] += 48448;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 3988183;
          result[2] += 0;
          result[3] += 306783;
          result[4] += 81604378;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
          result[0] += 84128225;
          result[1] += 1771120;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 73430086;
          result[1] += 0;
          result[2] += 6234629;
          result[3] += 6234629;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 85425418;
          result[1] += 0;
          result[2] += 434433;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 39493;
        } else {
          result[0] += 85860282;
          result[1] += 0;
          result[2] += 39062;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41980000))) ) ) {
          result[0] += 58618215;
          result[1] += 0;
          result[2] += 434566;
          result[3] += 23828739;
          result[4] += 3017824;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 74745905;
          result[1] += 194819;
          result[2] += 357169;
          result[3] += 10309220;
          result[4] += 32469;
          result[5] += 48704;
          result[6] += 211054;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1261370;
          result[3] += 0;
          result[4] += 84511838;
          result[5] += 126137;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 540426;
          result[3] += 85358919;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 34397746;
          result[1] += 0;
          result[2] += 760171;
          result[3] += 50741427;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 74861999;
          result[1] += 0;
          result[2] += 959769;
          result[3] += 10077576;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 21504538;
          result[1] += 475238;
          result[2] += 0;
          result[3] += 63919568;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 274877;
          result[1] += 1236950;
          result[2] += 0;
          result[3] += 84387517;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 84257957;
          result[5] += 1641388;
          result[6] += 0;
        } else {
          result[0] += 10437285;
          result[1] += 49001;
          result[2] += 882024;
          result[3] += 74384031;
          result[4] += 0;
          result[5] += 147004;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 85846703;
          result[1] += 0;
          result[2] += 46062;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 6580;
        } else {
          result[0] += 59962747;
          result[1] += 150115;
          result[2] += 600461;
          result[3] += 25094284;
          result[4] += 0;
          result[5] += 25019;
          result[6] += 66717;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x42ec0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42820000))) ) ) {
          result[0] += 84718775;
          result[1] += 6416;
          result[2] += 25664;
          result[3] += 1148489;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 134217;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85765128;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 85457558;
          result[1] += 0;
          result[2] += 33983;
          result[3] += 385148;
          result[4] += 0;
          result[5] += 0;
          result[6] += 22655;
        } else {
          result[0] += 9817068;
          result[1] += 0;
          result[2] += 9817068;
          result[3] += 62174764;
          result[4] += 4090445;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 60014731;
          result[1] += 120430;
          result[2] += 232833;
          result[3] += 25491206;
          result[4] += 0;
          result[5] += 24086;
          result[6] += 16057;
        } else {
          result[0] += 82983862;
          result[1] += 0;
          result[2] += 383616;
          result[3] += 2470488;
          result[4] += 0;
          result[5] += 0;
          result[6] += 61378;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 775965;
          result[1] += 0;
          result[2] += 155193;
          result[3] += 84037029;
          result[4] += 775965;
          result[5] += 155193;
          result[6] += 0;
        } else {
          result[0] += 24812260;
          result[1] += 0;
          result[2] += 2586066;
          result[3] += 41027596;
          result[4] += 17473422;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d40000))) ) ) {
          result[0] += 2147483;
          result[1] += 0;
          result[2] += 0;
          result[3] += 83751862;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 352046;
          result[1] += 4224557;
          result[2] += 0;
          result[3] += 1056139;
          result[4] += 80266601;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 166149;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85733196;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 83741070;
          result[1] += 2158275;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 20988001;
          result[1] += 0;
          result[2] += 0;
          result[3] += 23368084;
          result[4] += 41543260;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1817975;
          result[1] += 0;
          result[2] += 1022611;
          result[3] += 16475403;
          result[4] += 66583355;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 85774739;
          result[1] += 0;
          result[2] += 124606;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85864889;
          result[1] += 0;
          result[2] += 34456;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41980000))) ) ) {
          result[0] += 85837414;
          result[1] += 0;
          result[2] += 61931;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 74248667;
          result[1] += 227806;
          result[2] += 488156;
          result[3] += 10755724;
          result[4] += 0;
          result[5] += 65087;
          result[6] += 113903;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 14553586;
          result[1] += 260732;
          result[2] += 1208848;
          result[3] += 69828772;
          result[4] += 0;
          result[5] += 47405;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28633115;
          result[5] += 57266230;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x41f40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 57266230;
          result[3] += 28633115;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 169705;
          result[2] += 989949;
          result[3] += 84711406;
          result[4] += 0;
          result[5] += 28284;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41700000))) ) ) {
          result[0] += 360921;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 84816581;
          result[5] += 721843;
          result[6] += 0;
        } else {
          result[0] += 79659;
          result[1] += 53106;
          result[2] += 0;
          result[3] += 85766580;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42960000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 64424509;
          result[3] += 0;
          result[4] += 0;
          result[5] += 21474836;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 528286;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85371059;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40200000))) ) ) {
          result[0] += 85481953;
          result[1] += 0;
          result[2] += 417392;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84379003;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 1520342;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42120000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85876571;
          result[1] += 0;
          result[2] += 22774;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x425c0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
          result[0] += 45074188;
          result[1] += 200967;
          result[2] += 315806;
          result[3] += 40265318;
          result[4] += 0;
          result[5] += 0;
          result[6] += 43064;
        } else {
          result[0] += 81002997;
          result[1] += 0;
          result[2] += 1023626;
          result[3] += 3702116;
          result[4] += 0;
          result[5] += 0;
          result[6] += 170604;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 1455921;
          result[2] += 0;
          result[3] += 84443424;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 81516726;
          result[1] += 0;
          result[2] += 4382619;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3fc00000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 85162874;
          result[1] += 0;
          result[2] += 736471;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85878552;
          result[1] += 0;
          result[2] += 20793;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 76904649;
          result[1] += 224867;
          result[2] += 182704;
          result[3] += 8544961;
          result[4] += 0;
          result[5] += 0;
          result[6] += 42162;
        } else {
          result[0] += 9268677;
          result[1] += 176088;
          result[2] += 816411;
          result[3] += 48920685;
          result[4] += 26717481;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42080000))) ) ) {
          result[0] += 82631195;
          result[1] += 0;
          result[2] += 1324925;
          result[3] += 1810731;
          result[4] += 0;
          result[5] += 0;
          result[6] += 132492;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 46854188;
          result[4] += 23427094;
          result[5] += 15618062;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41100000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1410035;
          result[3] += 84489310;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85781352;
          result[5] += 117993;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 70740637;
          result[3] += 0;
          result[4] += 0;
          result[5] += 15158708;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x423a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41280000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 14557298;
          result[1] += 22569;
          result[2] += 0;
          result[3] += 71296908;
          result[4] += 0;
          result[5] += 22569;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41400000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43780000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 448365;
          result[2] += 336274;
          result[3] += 0;
          result[4] += 85077342;
          result[5] += 37363;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 85596705;
          result[1] += 0;
          result[2] += 302640;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85019830;
          result[1] += 0;
          result[2] += 586343;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 293171;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 85882801;
          result[1] += 0;
          result[2] += 16544;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 84695719;
          result[1] += 289479;
          result[2] += 700846;
          result[3] += 137122;
          result[4] += 0;
          result[5] += 0;
          result[6] += 76178;
        } else {
          result[0] += 27487790;
          result[1] += 1527099;
          result[2] += 0;
          result[3] += 56884455;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 21068455;
          result[1] += 0;
          result[2] += 337770;
          result[3] += 64493119;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 82540153;
          result[1] += 0;
          result[2] += 2330868;
          result[3] += 685549;
          result[4] += 0;
          result[5] += 0;
          result[6] += 342774;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42200000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85648178;
          result[5] += 251167;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41700000))) ) ) {
          result[0] += 0;
          result[1] += 36814005;
          result[2] += 49085340;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 27417;
          result[2] += 329011;
          result[3] += 85488081;
          result[4] += 0;
          result[5] += 54835;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 78730093;
          result[1] += 0;
          result[2] += 204835;
          result[3] += 6964416;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 81215126;
          result[1] += 175933;
          result[2] += 271230;
          result[3] += 4207733;
          result[4] += 0;
          result[5] += 0;
          result[6] += 29322;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 61932487;
          result[1] += 0;
          result[2] += 241358;
          result[3] += 23677229;
          result[4] += 0;
          result[5] += 0;
          result[6] += 48271;
        } else {
          result[0] += 66123000;
          result[1] += 0;
          result[2] += 118155;
          result[3] += 19643419;
          result[4] += 0;
          result[5] += 0;
          result[6] += 14769;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 85289554;
          result[1] += 0;
          result[2] += 223590;
          result[3] += 315059;
          result[4] += 0;
          result[5] += 0;
          result[6] += 71142;
        } else {
          result[0] += 79945925;
          result[1] += 0;
          result[2] += 5953420;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
          result[0] += 57735625;
          result[1] += 0;
          result[2] += 0;
          result[3] += 28163719;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42100000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 391936;
          result[2] += 1045163;
          result[3] += 80477562;
          result[4] += 3984684;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 908026;
          result[2] += 0;
          result[3] += 66921583;
          result[4] += 18069735;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
          result[0] += 83242665;
          result[1] += 2656680;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 80248073;
          result[1] += 0;
          result[2] += 5651272;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 3388141;
          result[1] += 0;
          result[2] += 0;
          result[3] += 17339311;
          result[4] += 65171893;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 462238;
          result[1] += 0;
          result[2] += 1155596;
          result[3] += 11478926;
          result[4] += 72802584;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 85757545;
          result[1] += 0;
          result[2] += 133922;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7877;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
          result[0] += 78306681;
          result[1] += 201130;
          result[2] += 234651;
          result[3] += 7106599;
          result[4] += 0;
          result[5] += 16760;
          result[6] += 33521;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 968509;
          result[3] += 80758795;
          result[4] += 3948538;
          result[5] += 223502;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 22569200;
          result[1] += 0;
          result[2] += 0;
          result[3] += 63330145;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 52613349;
          result[1] += 0;
          result[2] += 1820692;
          result[3] += 233422;
          result[4] += 30765037;
          result[5] += 233422;
          result[6] += 233422;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 38753878;
          result[1] += 0;
          result[2] += 0;
          result[3] += 38143581;
          result[4] += 9001885;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 13571765;
          result[1] += 0;
          result[2] += 0;
          result[3] += 72327580;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
          result[0] += 760171;
          result[1] += 1900428;
          result[2] += 0;
          result[3] += 13302996;
          result[4] += 69935750;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 561892;
          result[1] += 632129;
          result[2] += 913075;
          result[3] += 83581538;
          result[4] += 210709;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84202949;
          result[1] += 0;
          result[2] += 1387960;
          result[3] += 308435;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 1735340;
          result[2] += 0;
          result[3] += 84164005;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 84856288;
          result[1] += 20944;
          result[2] += 62834;
          result[3] += 950899;
          result[4] += 4188;
          result[5] += 0;
          result[6] += 4188;
        } else {
          result[0] += 74566298;
          result[1] += 0;
          result[2] += 1416630;
          result[3] += 9916416;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x433f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 57266230;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28633115;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 85864625;
          result[1] += 0;
          result[2] += 34720;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 40999077;
          result[1] += 134103;
          result[2] += 280398;
          result[3] += 44363854;
          result[4] += 12191;
          result[5] += 48764;
          result[6] += 60956;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1558264;
          result[3] += 69829740;
          result[4] += 14219166;
          result[5] += 292174;
          result[6] += 0;
        } else {
          result[0] += 85187922;
          result[1] += 0;
          result[2] += 670771;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 40652;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84794531;
          result[1] += 0;
          result[2] += 1104814;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
          result[0] += 85841259;
          result[1] += 0;
          result[2] += 47525;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 10561;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x42020000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 103368;
          result[1] += 0;
          result[2] += 0;
          result[3] += 18916462;
          result[4] += 66776146;
          result[5] += 103368;
          result[6] += 0;
        } else {
          result[0] += 47854335;
          result[1] += 114412;
          result[2] += 710558;
          result[3] += 36738304;
          result[4] += 391409;
          result[5] += 42151;
          result[6] += 48173;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 62720157;
          result[4] += 23179188;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 1633954;
          result[2] += 0;
          result[3] += 27777234;
          result[4] += 56488156;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41b80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 6979321;
          result[4] += 78920024;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
          result[0] += 56528806;
          result[1] += 0;
          result[2] += 758493;
          result[3] += 28485630;
          result[4] += 42138;
          result[5] += 0;
          result[6] += 84277;
        } else {
          result[0] += 37377088;
          result[1] += 0;
          result[2] += 0;
          result[3] += 24057253;
          result[4] += 24465003;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 13656106;
          result[1] += 487718;
          result[2] += 670612;
          result[3] += 70902015;
          result[4] += 0;
          result[5] += 182894;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41dc0000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 309212;
          result[2] += 618425;
          result[3] += 84848022;
          result[4] += 0;
          result[5] += 123685;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 84938472;
          result[1] += 82754;
          result[2] += 248264;
          result[3] += 620660;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9194;
        } else {
          result[0] += 31699264;
          result[1] += 707572;
          result[2] += 0;
          result[3] += 53492508;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 42408006;
          result[1] += 0;
          result[2] += 225694;
          result[3] += 43265645;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85432891;
          result[1] += 0;
          result[2] += 215286;
          result[3] += 179405;
          result[4] += 0;
          result[5] += 0;
          result[6] += 71762;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 84896629;
          result[1] += 0;
          result[2] += 1002716;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 8180890;
          result[1] += 0;
          result[2] += 77718455;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 12915864;
          result[1] += 707718;
          result[2] += 176929;
          result[3] += 72098833;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 87652;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85811693;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
          result[0] += 1523038;
          result[1] += 2741468;
          result[2] += 0;
          result[3] += 8529013;
          result[4] += 73105826;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 13758769;
          result[4] += 72140576;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85546576;
          result[4] += 58794;
          result[5] += 293974;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9250698;
          result[3] += 0;
          result[4] += 75327118;
          result[5] += 1321528;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1412044;
          result[3] += 0;
          result[4] += 84487301;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85744822;
          result[1] += 0;
          result[2] += 139070;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 15452;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 44555004;
          result[1] += 126736;
          result[2] += 619601;
          result[3] += 40541674;
          result[4] += 0;
          result[5] += 42245;
          result[6] += 14081;
        } else {
          result[0] += 83063833;
          result[1] += 0;
          result[2] += 354439;
          result[3] += 2355977;
          result[4] += 0;
          result[5] += 0;
          result[6] += 125096;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42df0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 29256806;
          result[1] += 0;
          result[2] += 0;
          result[3] += 56557490;
          result[4] += 85048;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 20387502;
          result[4] += 65511842;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42240000))) ) ) {
          result[0] += 2134145;
          result[1] += 3201217;
          result[2] += 0;
          result[3] += 9070117;
          result[4] += 71493865;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 746950;
          result[1] += 0;
          result[2] += 0;
          result[3] += 34359738;
          result[4] += 50792656;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
          result[0] += 8297095;
          result[1] += 0;
          result[2] += 1659419;
          result[3] += 72233540;
          result[4] += 3514064;
          result[5] += 195225;
          result[6] += 0;
        } else {
          result[0] += 76674189;
          result[1] += 0;
          result[2] += 288737;
          result[3] += 8914764;
          result[4] += 0;
          result[5] += 0;
          result[6] += 21655;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 16221802;
          result[1] += 0;
          result[2] += 0;
          result[3] += 11540343;
          result[4] += 58137199;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 63161;
          result[2] += 631612;
          result[3] += 81920185;
          result[4] += 2968580;
          result[5] += 315806;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 69918072;
          result[4] += 15981273;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 138435;
          result[2] += 0;
          result[3] += 207653;
          result[4] += 85553256;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 85270046;
          result[1] += 0;
          result[2] += 629299;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85874171;
          result[1] += 0;
          result[2] += 25174;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 42050446;
          result[1] += 352274;
          result[2] += 686008;
          result[3] += 42754994;
          result[4] += 0;
          result[5] += 0;
          result[6] += 55622;
        } else {
          result[0] += 83172891;
          result[1] += 0;
          result[2] += 416987;
          result[3] += 2309467;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41700000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 31236125;
          result[3] += 0;
          result[4] += 0;
          result[5] += 11713547;
          result[6] += 0;
        } else {
          result[0] += 26528;
          result[1] += 26528;
          result[2] += 185699;
          result[3] += 85527946;
          result[4] += 0;
          result[5] += 132642;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42740000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 73628010;
          result[3] += 0;
          result[4] += 12271335;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 258343;
          result[3] += 0;
          result[4] += 85641002;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 79708402;
          result[1] += 0;
          result[2] += 0;
          result[3] += 6190943;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42180000))) ) ) {
          result[0] += 0;
          result[1] += 672840;
          result[2] += 0;
          result[3] += 85226505;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
          result[0] += 84088821;
          result[1] += 1005847;
          result[2] += 201169;
          result[3] += 603508;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85676073;
          result[1] += 44654;
          result[2] += 162670;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 15948;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 35775013;
          result[1] += 0;
          result[2] += 704361;
          result[3] += 49338068;
          result[4] += 0;
          result[5] += 0;
          result[6] += 81902;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42440000))) ) ) {
          result[0] += 46528812;
          result[1] += 0;
          result[2] += 39370533;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 594048;
          result[2] += 198016;
          result[3] += 85107281;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 82641686;
          result[1] += 0;
          result[2] += 3257659;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
          result[0] += 53704216;
          result[1] += 0;
          result[2] += 639335;
          result[3] += 29592119;
          result[4] += 1963674;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 65869931;
          result[1] += 0;
          result[2] += 447392;
          result[3] += 19203459;
          result[4] += 34414;
          result[5] += 68829;
          result[6] += 275318;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41100000))) ) ) {
          result[0] += 85737298;
          result[1] += 10568;
          result[2] += 49318;
          result[3] += 91592;
          result[4] += 0;
          result[5] += 0;
          result[6] += 10568;
        } else {
          result[0] += 1732839;
          result[1] += 1980388;
          result[2] += 0;
          result[3] += 79710632;
          result[4] += 1237742;
          result[5] += 1237742;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
          result[0] += 23300228;
          result[1] += 0;
          result[2] += 0;
          result[3] += 62599117;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 54010617;
          result[1] += 0;
          result[2] += 1123186;
          result[3] += 0;
          result[4] += 30765541;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 72287886;
          result[1] += 0;
          result[2] += 490503;
          result[3] += 12507827;
          result[4] += 122625;
          result[5] += 61312;
          result[6] += 429190;
        } else {
          result[0] += 80809743;
          result[1] += 0;
          result[2] += 131344;
          result[3] += 4826912;
          result[4] += 98508;
          result[5] += 0;
          result[6] += 32836;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 85295837;
          result[1] += 0;
          result[2] += 603508;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85872933;
          result[1] += 0;
          result[2] += 26412;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 97391;
          result[2] += 0;
          result[3] += 18796568;
          result[4] += 67005385;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1997659;
          result[1] += 433227;
          result[2] += 1347818;
          result[3] += 81904027;
          result[4] += 144409;
          result[5] += 72204;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 85379706;
          result[1] += 0;
          result[2] += 418598;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 101041;
        } else {
          result[0] += 36373257;
          result[1] += 0;
          result[2] += 433014;
          result[3] += 48966776;
          result[4] += 0;
          result[5] += 0;
          result[6] += 126296;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 167119;
          result[1] += 1169835;
          result[2] += 0;
          result[3] += 30248602;
          result[4] += 54313788;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 85217;
          result[2] += 0;
          result[3] += 16446997;
          result[4] += 69367130;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3fc00000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 85616036;
          result[1] += 0;
          result[2] += 283309;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85863294;
          result[1] += 0;
          result[2] += 36051;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40200000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85684597;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 214748;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1968427;
          result[1] += 640331;
          result[2] += 830059;
          result[3] += 82365662;
          result[4] += 0;
          result[5] += 94863;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 84834526;
          result[1] += 0;
          result[2] += 397844;
          result[3] += 549961;
          result[4] += 0;
          result[5] += 0;
          result[6] += 117013;
        } else {
          result[0] += 73353688;
          result[1] += 0;
          result[2] += 2176287;
          result[3] += 10369369;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 0;
          result[1] += 56327;
          result[2] += 0;
          result[3] += 85843018;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 904203;
          result[3] += 0;
          result[4] += 84995142;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85736142;
          result[4] += 27200;
          result[5] += 136002;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 397682;
          result[4] += 85501663;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x41dc0000))) ) ) {
          result[0] += 0;
          result[1] += 316388;
          result[2] += 316388;
          result[3] += 0;
          result[4] += 85068827;
          result[5] += 197742;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 3846239;
          result[2] += 0;
          result[3] += 0;
          result[4] += 82053106;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42800000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1363481;
          result[1] += 1363481;
          result[2] += 0;
          result[3] += 83172382;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
          result[0] += 83682255;
          result[1] += 0;
          result[2] += 2113969;
          result[3] += 103120;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85746405;
          result[1] += 59846;
          result[2] += 76470;
          result[3] += 6649;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9974;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x41080000))) ) ) {
          result[0] += 35252939;
          result[1] += 0;
          result[2] += 633476;
          result[3] += 49981256;
          result[4] += 0;
          result[5] += 0;
          result[6] += 31673;
        } else {
          result[0] += 83372894;
          result[1] += 0;
          result[2] += 2526451;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 42949672;
          result[6] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 16106127;
          result[2] += 59055800;
          result[3] += 0;
          result[4] += 0;
          result[5] += 10737418;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 85584860;
          result[1] += 0;
          result[2] += 314485;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85862624;
          result[1] += 0;
          result[2] += 29377;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7344;
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 85156070;
          result[1] += 145740;
          result[2] += 539239;
          result[3] += 29148;
          result[4] += 0;
          result[5] += 0;
          result[6] += 29148;
        } else {
          result[0] += 303531;
          result[1] += 1821187;
          result[2] += 0;
          result[3] += 83774627;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 720050;
          result[3] += 85179295;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84901854;
          result[1] += 0;
          result[2] += 844031;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 153460;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85765754;
          result[4] += 0;
          result[5] += 133591;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 71582788;
          result[3] += 0;
          result[4] += 14316557;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84128225;
          result[1] += 0;
          result[2] += 1771120;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42f50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 426652;
          result[3] += 0;
          result[4] += 85472693;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 3233857;
          result[2] += 0;
          result[3] += 0;
          result[4] += 82665488;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3fc00000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 84738543;
          result[1] += 0;
          result[2] += 1160801;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85854314;
          result[1] += 0;
          result[2] += 45031;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 42252795;
          result[1] += 605183;
          result[2] += 1283722;
          result[3] += 41684289;
          result[4] += 0;
          result[5] += 0;
          result[6] += 73355;
        } else {
          result[0] += 81850428;
          result[1] += 0;
          result[2] += 1245820;
          result[3] += 2616223;
          result[4] += 0;
          result[5] += 0;
          result[6] += 186873;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 49645249;
          result[1] += 0;
          result[2] += 130645;
          result[3] += 36123451;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84937997;
          result[1] += 0;
          result[2] += 0;
          result[3] += 961348;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 35376067;
          result[1] += 244309;
          result[2] += 1026101;
          result[3] += 49252867;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 45044778;
          result[1] += 0;
          result[2] += 0;
          result[3] += 40854566;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 2866850;
          result[1] += 955616;
          result[2] += 1061796;
          result[3] += 81015081;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40e00000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 85852214;
          result[1] += 0;
          result[2] += 38562;
          result[3] += 0;
          result[4] += 8569;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 75911049;
          result[1] += 0;
          result[2] += 0;
          result[3] += 9988296;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 104246;
          result[1] += 0;
          result[2] += 0;
          result[3] += 19911134;
          result[4] += 65779717;
          result[5] += 104246;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 18501397;
          result[3] += 64754891;
          result[4] += 2643056;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 44229413;
          result[1] += 78351;
          result[2] += 430933;
          result[3] += 41108413;
          result[4] += 0;
          result[5] += 13058;
          result[6] += 39175;
        } else {
          result[0] += 84727783;
          result[1] += 0;
          result[2] += 228820;
          result[3] += 896977;
          result[4] += 0;
          result[5] += 0;
          result[6] += 45764;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42960000))) ) ) {
          result[0] += 1838599;
          result[1] += 0;
          result[2] += 1397335;
          result[3] += 82075059;
          result[4] += 0;
          result[5] += 588351;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
          result[0] += 54143;
          result[1] += 27071;
          result[2] += 0;
          result[3] += 85709842;
          result[4] += 0;
          result[5] += 108287;
          result[6] += 0;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 79817976;
          result[1] += 6081369;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 79117818;
          result[3] += 0;
          result[4] += 0;
          result[5] += 6781527;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d00000))) ) ) {
          result[0] += 52480292;
          result[1] += 742645;
          result[2] += 0;
          result[3] += 32676408;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 3346727;
          result[1] += 0;
          result[2] += 0;
          result[3] += 82552618;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 85700949;
          result[1] += 54399;
          result[2] += 124797;
          result[3] += 6399;
          result[4] += 0;
          result[5] += 0;
          result[6] += 12799;
        } else {
          result[0] += 81792136;
          result[1] += 0;
          result[2] += 3637813;
          result[3] += 469395;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 711721;
          result[3] += 85187624;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85629804;
          result[1] += 0;
          result[2] += 219002;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 50538;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 85518586;
          result[1] += 0;
          result[2] += 380759;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85848316;
          result[1] += 0;
          result[2] += 51029;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
          result[0] += 891688;
          result[1] += 0;
          result[2] += 0;
          result[3] += 8025198;
          result[4] += 76982458;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 321720;
          result[2] += 0;
          result[3] += 21716126;
          result[4] += 63700638;
          result[5] += 160860;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 64293714;
          result[1] += 65397;
          result[2] += 645798;
          result[3] += 18883468;
          result[4] += 1888346;
          result[5] += 16349;
          result[6] += 106270;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 800304;
          result[3] += 84624786;
          result[4] += 414972;
          result[5] += 59281;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 566618;
          result[1] += 566618;
          result[2] += 0;
          result[3] += 5099565;
          result[4] += 79666543;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
          result[0] += 7944902;
          result[1] += 314649;
          result[2] += 314649;
          result[3] += 45427538;
          result[4] += 31897605;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x44db3000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85146668;
          result[1] += 0;
          result[2] += 752677;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 85876848;
          result[1] += 0;
          result[2] += 22497;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
          result[0] += 56450573;
          result[1] += 0;
          result[2] += 978788;
          result[3] += 28363593;
          result[4] += 21278;
          result[5] += 0;
          result[6] += 85112;
        } else {
          result[0] += 36154900;
          result[1] += 0;
          result[2] += 419430;
          result[3] += 34141634;
          result[4] += 15099494;
          result[5] += 83886;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 7678153;
          result[1] += 239942;
          result[2] += 79980;
          result[3] += 77901269;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 51552258;
          result[1] += 147593;
          result[2] += 537661;
          result[3] += 33577493;
          result[4] += 0;
          result[5] += 52711;
          result[6] += 31627;
        } else {
          result[0] += 12665301;
          result[1] += 510697;
          result[2] += 714976;
          result[3] += 72008369;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b40000))) ) ) {
          result[0] += 3642375;
          result[1] += 0;
          result[2] += 0;
          result[3] += 81852262;
          result[4] += 101177;
          result[5] += 303531;
          result[6] += 0;
        } else {
          result[0] += 12316066;
          result[1] += 104373;
          result[2] += 0;
          result[3] += 73478905;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 72684061;
          result[3] += 0;
          result[4] += 13215283;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1085806;
          result[3] += 0;
          result[4] += 84572249;
          result[5] += 241290;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41500000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x43390000))) ) ) {
          result[0] += 0;
          result[1] += 718549;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85180796;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
          result[0] += 85634768;
          result[1] += 0;
          result[2] += 249878;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 14698;
        } else {
          result[0] += 85866509;
          result[1] += 0;
          result[2] += 32836;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 82553967;
          result[1] += 155840;
          result[2] += 644141;
          result[3] += 2462281;
          result[4] += 0;
          result[5] += 0;
          result[6] += 83114;
        } else {
          result[0] += 11646172;
          result[1] += 423497;
          result[2] += 1270491;
          result[3] += 72347435;
          result[4] += 0;
          result[5] += 211748;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
          result[0] += 0;
          result[1] += 30066;
          result[2] += 541192;
          result[3] += 85328086;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
  result[6] += 0;
  
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
    

    FILE* file = fopen("./codegen/dataset_148/split_1/test_data.csv", "r");
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
