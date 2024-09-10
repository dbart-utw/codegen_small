
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 58411555;
          result[2] += 0;
          result[3] += 27487790;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 594753;
          result[1] += 552270;
          result[2] += 764682;
          result[3] += 83987639;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x421c0000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84247435;
          result[1] += 0;
          result[2] += 1651910;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41c80000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1041204;
          result[3] += 75942830;
          result[4] += 8915310;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85404605;
          result[1] += 0;
          result[2] += 401976;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 92763;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 74265259;
          result[1] += 482241;
          result[2] += 120560;
          result[3] += 10971004;
          result[4] += 0;
          result[5] += 0;
          result[6] += 60280;
        } else {
          result[0] += 84735534;
          result[1] += 3592;
          result[2] += 50288;
          result[3] += 1059643;
          result[4] += 21552;
          result[5] += 17960;
          result[6] += 10776;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 14730423;
          result[1] += 0;
          result[2] += 0;
          result[3] += 71168922;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 4365763;
          result[1] += 0;
          result[2] += 2949840;
          result[3] += 0;
          result[4] += 78229761;
          result[5] += 353980;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 85419553;
          result[1] += 0;
          result[2] += 215079;
          result[3] += 198534;
          result[4] += 0;
          result[5] += 0;
          result[6] += 66178;
        } else {
          result[0] += 59055800;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 16106127;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42440000))) ) ) {
          result[0] += 83100620;
          result[1] += 0;
          result[2] += 2798725;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 585677;
          result[3] += 85313668;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
          result[0] += 0;
          result[1] += 1634762;
          result[2] += 0;
          result[3] += 84264583;
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
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40900000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85294420;
          result[5] += 604924;
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
          result[1] += 55996;
          result[2] += 1231933;
          result[3] += 84499421;
          result[4] += 0;
          result[5] += 111993;
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
          result[0] += 85821084;
          result[1] += 0;
          result[2] += 78261;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 83329852;
          result[1] += 136132;
          result[2] += 374363;
          result[3] += 2024964;
          result[4] += 0;
          result[5] += 0;
          result[6] += 34033;
        } else {
          result[0] += 36056724;
          result[1] += 0;
          result[2] += 779055;
          result[3] += 48894205;
          result[4] += 0;
          result[5] += 84679;
          result[6] += 84679;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x4465a000))) ) ) {
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x431e0000))) ) ) {
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85728494;
          result[1] += 0;
          result[2] += 170851;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 37419224;
          result[1] += 156522;
          result[2] += 313044;
          result[3] += 41113146;
          result[4] += 6834799;
          result[5] += 20869;
          result[6] += 41739;
        } else {
          result[0] += 80235441;
          result[1] += 0;
          result[2] += 844785;
          result[3] += 4665521;
          result[4] += 0;
          result[5] += 38399;
          result[6] += 115198;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
          result[0] += 0;
          result[1] += 284031;
          result[2] += 1176703;
          result[3] += 84032850;
          result[4] += 202879;
          result[5] += 202879;
          result[6] += 0;
        } else {
          result[0] += 85352216;
          result[1] += 0;
          result[2] += 547129;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1321528;
          result[1] += 0;
          result[2] += 0;
          result[3] += 72353679;
          result[4] += 12224137;
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
          result[1] += 6871947;
          result[2] += 0;
          result[3] += 79027398;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x41180000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42640000))) ) ) {
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
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bc0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 569408;
          result[3] += 85275707;
          result[4] += 0;
          result[5] += 54229;
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
          result[0] += 84430981;
          result[1] += 0;
          result[2] += 1468364;
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
          result[0] += 85791023;
          result[1] += 0;
          result[2] += 99989;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 8332;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 84897551;
          result[1] += 400717;
          result[2] += 510004;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 91072;
        } else {
          result[0] += 70987878;
          result[1] += 0;
          result[2] += 844842;
          result[3] += 13834293;
          result[4] += 0;
          result[5] += 42242;
          result[6] += 190089;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42cf0000))) ) ) {
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
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42440000))) ) ) {
          result[0] += 84044242;
          result[1] += 0;
          result[2] += 1855103;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 279498;
          result[3] += 85619846;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 15377484;
          result[1] += 357615;
          result[2] += 715231;
          result[3] += 69449013;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 750212;
          result[1] += 3751063;
          result[2] += 0;
          result[3] += 81398070;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85795351;
          result[1] += 0;
          result[2] += 99267;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 4727;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 69567087;
          result[1] += 142284;
          result[2] += 426854;
          result[3] += 15214306;
          result[4] += 426854;
          result[5] += 20326;
          result[6] += 101631;
        } else {
          result[0] += 0;
          result[1] += 81860;
          result[2] += 791321;
          result[3] += 84534997;
          result[4] += 436591;
          result[5] += 54573;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
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
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e00000))) ) ) {
          result[0] += 107240;
          result[1] += 80430;
          result[2] += 0;
          result[3] += 85497195;
          result[4] += 160860;
          result[5] += 53620;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 810371;
          result[4] += 85088974;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0;
          result[1] += 724183;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85175162;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 18011153;
          result[3] += 0;
          result[4] += 63731772;
          result[5] += 4156419;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
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
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
          result[0] += 39998932;
          result[1] += 0;
          result[2] += 0;
          result[3] += 45900413;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85533076;
          result[1] += 0;
          result[2] += 146507;
          result[3] += 210604;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9156;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42740000))) ) ) {
          result[0] += 85388178;
          result[1] += 69704;
          result[2] += 288112;
          result[3] += 144056;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9293;
        } else {
          result[0] += 0;
          result[1] += 5804009;
          result[2] += 0;
          result[3] += 80095336;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85845116;
          result[4] += 0;
          result[5] += 54229;
          result[6] += 0;
        } else {
          result[0] += 83660926;
          result[1] += 0;
          result[2] += 2238419;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 85721025;
          result[1] += 0;
          result[2] += 0;
          result[3] += 178320;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85042871;
          result[1] += 0;
          result[2] += 755712;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 100761;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b40000))) ) ) {
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85783317;
          result[1] += 0;
          result[2] += 116027;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0;
          result[1] += 735229;
          result[2] += 318599;
          result[3] += 77983371;
          result[4] += 6837636;
          result[5] += 24507;
          result[6] += 0;
        } else {
          result[0] += 85676853;
          result[1] += 0;
          result[2] += 171148;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 51344;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42940000))) ) ) {
          result[0] += 74337441;
          result[1] += 0;
          result[2] += 1553471;
          result[3] += 9830165;
          result[4] += 0;
          result[5] += 25466;
          result[6] += 152800;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1623912;
          result[4] += 84275433;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
          result[0] += 0;
          result[1] += 56924;
          result[2] += 0;
          result[3] += 85842421;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85376631;
          result[5] += 522714;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6316128;
          result[3] += 0;
          result[4] += 79583217;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40800000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 21474836;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 64424509;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41300000))) ) ) {
          result[0] += 85745773;
          result[1] += 0;
          result[2] += 52354;
          result[3] += 87257;
          result[4] += 0;
          result[5] += 0;
          result[6] += 13961;
        } else {
          result[0] += 74411445;
          result[1] += 285897;
          result[2] += 233916;
          result[3] += 10864123;
          result[4] += 0;
          result[5] += 25990;
          result[6] += 77972;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42440000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 548048;
          result[3] += 81774561;
          result[4] += 3576735;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85120919;
          result[1] += 0;
          result[2] += 622741;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 155685;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423c0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 68719476;
          result[5] += 17179869;
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
          result[0] += 23520298;
          result[1] += 180925;
          result[2] += 1165963;
          result[3] += 59624961;
          result[4] += 1326786;
          result[5] += 80411;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 15245199;
          result[4] += 70654146;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 5541893;
          result[1] += 30480413;
          result[2] += 0;
          result[3] += 49877039;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
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
          result[3] += 11151844;
          result[4] += 74747500;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0;
          result[1] += 377787;
          result[2] += 991691;
          result[3] += 84435420;
          result[4] += 94446;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 31745410;
          result[1] += 3734754;
          result[2] += 1867377;
          result[3] += 48551804;
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
          result[0] += 38177487;
          result[1] += 0;
          result[2] += 47721858;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a80000))) ) ) {
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 107240;
          result[1] += 1394121;
          result[2] += 0;
          result[3] += 7721289;
          result[4] += 76676694;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 85840206;
          result[1] += 0;
          result[2] += 50690;
          result[3] += 0;
          result[4] += 4224;
          result[5] += 0;
          result[6] += 4224;
        } else {
          result[0] += 60503017;
          result[1] += 0;
          result[2] += 0;
          result[3] += 25396328;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 1689032;
          result[1] += 120645;
          result[2] += 1327096;
          result[3] += 31005803;
          result[4] += 51515478;
          result[5] += 241290;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 10932644;
          result[4] += 74966701;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 85840841;
          result[1] += 0;
          result[2] += 58504;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 58878252;
          result[1] += 67637;
          result[2] += 287458;
          result[3] += 26539177;
          result[4] += 0;
          result[5] += 8454;
          result[6] += 118365;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 84858626;
          result[4] += 960663;
          result[5] += 80055;
          result[6] += 0;
        } else {
          result[0] += 7512110;
          result[1] += 0;
          result[2] += 7838723;
          result[3] += 22536330;
          result[4] += 48012181;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3fc00000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 83059698;
          result[1] += 0;
          result[2] += 2839647;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
          result[0] += 85801769;
          result[1] += 0;
          result[2] += 97575;
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
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40200000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 83128399;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 2770946;
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
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 2157402;
          result[1] += 867920;
          result[2] += 297572;
          result[3] += 77071353;
          result[4] += 5455501;
          result[5] += 49595;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 935537;
          result[3] += 16159282;
          result[4] += 68719476;
          result[5] += 85048;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 72519989;
          result[1] += 0;
          result[2] += 969518;
          result[3] += 12409837;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84942064;
          result[1] += 0;
          result[2] += 456378;
          result[3] += 400722;
          result[4] += 0;
          result[5] += 22262;
          result[6] += 77918;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
          result[0] += 0;
          result[1] += 57476;
          result[2] += 0;
          result[3] += 85841868;
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 734182;
          result[2] += 596523;
          result[3] += 84293321;
          result[4] += 275318;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 3920717;
          result[2] += 0;
          result[3] += 356428;
          result[4] += 81622200;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84955397;
          result[1] += 943948;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2989911;
          result[4] += 82909434;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x428c0000))) ) ) {
          result[0] += 46598991;
          result[1] += 0;
          result[2] += 4678613;
          result[3] += 34621740;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42640000))) ) ) {
          result[0] += 1342177;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 79188459;
          result[5] += 5368709;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 8612159;
          result[1] += 0;
          result[2] += 0;
          result[3] += 77231624;
          result[4] += 0;
          result[5] += 55562;
          result[6] += 0;
        } else {
          result[0] += 52494044;
          result[1] += 0;
          result[2] += 30541989;
          result[3] += 1908874;
          result[4] += 0;
          result[5] += 954437;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
          result[0] += 11951213;
          result[1] += 0;
          result[2] += 5228655;
          result[3] += 68719476;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 82920804;
          result[1] += 34519;
          result[2] += 192323;
          result[3] += 2736904;
          result[4] += 0;
          result[5] += 14794;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 70206552;
          result[1] += 0;
          result[2] += 142156;
          result[3] += 15519733;
          result[4] += 0;
          result[5] += 0;
          result[6] += 30903;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41c80000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 35786313;
          result[1] += 0;
          result[2] += 1219295;
          result[3] += 48284089;
          result[4] += 609647;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 56600641;
          result[1] += 0;
          result[2] += 710387;
          result[3] += 23346804;
          result[4] += 5183912;
          result[5] += 38399;
          result[6] += 19199;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 73049648;
          result[1] += 762767;
          result[2] += 58674;
          result[3] += 12028255;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84771042;
          result[1] += 3616;
          result[2] += 72327;
          result[3] += 1001731;
          result[4] += 32547;
          result[5] += 14465;
          result[6] += 3616;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85552977;
          result[4] += 259776;
          result[5] += 86592;
          result[6] += 0;
        } else {
          result[0] += 39620992;
          result[1] += 0;
          result[2] += 2068306;
          result[3] += 0;
          result[4] += 44210047;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 85674543;
          result[1] += 0;
          result[2] += 0;
          result[3] += 224802;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84666340;
          result[1] += 0;
          result[2] += 976128;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 256876;
        }
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42f40000))) ) ) {
          result[0] += 0;
          result[1] += 568399;
          result[2] += 142099;
          result[3] += 85188846;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 35616801;
          result[2] += 0;
          result[3] += 50282543;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
          result[0] += 74554149;
          result[1] += 0;
          result[2] += 11345196;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40e00000))) ) ) {
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
          result[0] += 84361505;
          result[1] += 0;
          result[2] += 1318148;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 219691;
        } else {
          result[0] += 85843783;
          result[1] += 0;
          result[2] += 55562;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 85838104;
          result[1] += 0;
          result[2] += 61241;
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
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0;
          result[1] += 740511;
          result[2] += 0;
          result[3] += 85158834;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 61135269;
          result[1] += 122649;
          result[2] += 278749;
          result[3] += 24228878;
          result[4] += 55749;
          result[5] += 33449;
          result[6] += 44599;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
          result[0] += 1308850;
          result[1] += 0;
          result[2] += 508997;
          result[3] += 68132917;
          result[4] += 15948580;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 68923190;
          result[1] += 0;
          result[2] += 1234629;
          result[3] += 5494101;
          result[4] += 9815304;
          result[5] += 185194;
          result[6] += 246925;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 13966784;
          result[1] += 1953902;
          result[2] += 0;
          result[3] += 69978658;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 29069595;
          result[1] += 0;
          result[2] += 2356994;
          result[3] += 54472755;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2099907;
          result[4] += 83799438;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 111557;
          result[3] += 85676230;
          result[4] += 111557;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 5541893;
          result[1] += 5937742;
          result[2] += 7521140;
          result[3] += 66898568;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 85596527;
          result[1] += 0;
          result[2] += 302817;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 34359738;
          result[1] += 0;
          result[2] += 51539607;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x420c0000))) ) ) {
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41b80000))) ) ) {
          result[0] += 91674;
          result[1] += 1558472;
          result[2] += 0;
          result[3] += 11734382;
          result[4] += 72514816;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41840000))) ) ) {
          result[0] += 17179869;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 68719476;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 7595085;
          result[1] += 0;
          result[2] += 0;
          result[3] += 78304260;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 55520308;
          result[1] += 0;
          result[2] += 26188824;
          result[3] += 2095105;
          result[4] += 0;
          result[5] += 2095105;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x41a40000))) ) ) {
          result[0] += 85811514;
          result[1] += 0;
          result[2] += 87831;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85262338;
          result[1] += 60032;
          result[2] += 136739;
          result[3] += 413554;
          result[4] += 0;
          result[5] += 0;
          result[6] += 26680;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 37881078;
          result[1] += 0;
          result[2] += 0;
          result[3] += 48018267;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85000399;
          result[1] += 0;
          result[2] += 649239;
          result[3] += 74912;
          result[4] += 0;
          result[5] += 74912;
          result[6] += 99882;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41840000))) ) ) {
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
          result[4] += 85455803;
          result[5] += 443542;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
          result[0] += 0;
          result[1] += 1016159;
          result[2] += 0;
          result[3] += 84815442;
          result[4] += 0;
          result[5] += 67743;
          result[6] += 0;
        } else {
          result[0] += 82030005;
          result[1] += 0;
          result[2] += 3869339;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
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
          result[0] += 0;
          result[1] += 122073;
          result[2] += 0;
          result[3] += 79510810;
          result[4] += 6225769;
          result[5] += 40691;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 102078;
          result[2] += 663512;
          result[3] += 0;
          result[4] += 85082715;
          result[5] += 51039;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
          result[0] += 3904515;
          result[1] += 0;
          result[2] += 0;
          result[3] += 81994830;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 45418044;
          result[1] += 2221534;
          result[2] += 0;
          result[3] += 38259766;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 83080255;
          result[1] += 0;
          result[2] += 2570347;
          result[3] += 248743;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85730839;
          result[1] += 51848;
          result[2] += 87493;
          result[3] += 9721;
          result[4] += 0;
          result[5] += 0;
          result[6] += 19443;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 28269566;
          result[1] += 0;
          result[2] += 0;
          result[3] += 57629779;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84431817;
          result[1] += 0;
          result[2] += 1174022;
          result[3] += 293505;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 77705549;
          result[1] += 0;
          result[2] += 583781;
          result[3] += 7464069;
          result[4] += 0;
          result[5] += 41698;
          result[6] += 104246;
        } else {
          result[0] += 959769;
          result[1] += 0;
          result[2] += 0;
          result[3] += 84939576;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41700000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 85208466;
          result[1] += 0;
          result[2] += 690879;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85859559;
          result[1] += 0;
          result[2] += 35365;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 4420;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 30658308;
          result[1] += 436195;
          result[2] += 716606;
          result[3] += 54025921;
          result[4] += 62313;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 592409;
          result[2] += 0;
          result[3] += 11255776;
          result[4] += 74051160;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
          result[0] += 79758876;
          result[1] += 145668;
          result[2] += 313746;
          result[3] += 5580207;
          result[4] += 0;
          result[5] += 33615;
          result[6] += 67231;
        } else {
          result[0] += 1223453;
          result[1] += 0;
          result[2] += 1545415;
          result[3] += 73664806;
          result[4] += 9079316;
          result[5] += 386353;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42500000))) ) ) {
          result[0] += 0;
          result[1] += 28786;
          result[2] += 0;
          result[3] += 85870559;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 60960826;
          result[3] += 0;
          result[4] += 19396626;
          result[5] += 5541893;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 124853;
          result[3] += 0;
          result[4] += 85774492;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x459b9800))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
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
          result[0] += 85774048;
          result[1] += 0;
          result[2] += 125297;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x46219c00))) ) ) {
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
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
          result[0] += 0;
          result[1] += 1328340;
          result[2] += 0;
          result[3] += 84571005;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 126322;
          result[3] += 0;
          result[4] += 85267733;
          result[5] += 505290;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
          result[0] += 56588065;
          result[1] += 72660;
          result[2] += 632147;
          result[3] += 28512014;
          result[4] += 14532;
          result[5] += 21798;
          result[6] += 58128;
        } else {
          result[0] += 6641325;
          result[1] += 510871;
          result[2] += 1021742;
          result[3] += 77615934;
          result[4] += 72981;
          result[5] += 36490;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85369103;
          result[4] += 530242;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 268435;
          result[1] += 2415919;
          result[2] += 0;
          result[3] += 19327352;
          result[4] += 63887638;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 148872;
          result[4] += 85750473;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x420c0000))) ) ) {
          result[0] += 0;
          result[1] += 75161927;
          result[2] += 0;
          result[3] += 10737418;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 52942;
          result[1] += 52942;
          result[2] += 158827;
          result[3] += 85608161;
          result[4] += 0;
          result[5] += 26471;
          result[6] += 0;
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41980000))) ) ) {
          result[0] += 84163483;
          result[1] += 61995;
          result[2] += 185985;
          result[3] += 1467216;
          result[4] += 0;
          result[5] += 0;
          result[6] += 20665;
        } else {
          result[0] += 5776543;
          result[1] += 2139460;
          result[2] += 2139460;
          result[3] += 75843880;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
          result[0] += 74339557;
          result[1] += 0;
          result[2] += 106541;
          result[3] += 11439928;
          result[4] += 0;
          result[5] += 0;
          result[6] += 13317;
        } else {
          result[0] += 41158252;
          result[1] += 0;
          result[2] += 0;
          result[3] += 44741093;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
          result[0] += 83983375;
          result[1] += 0;
          result[2] += 1915970;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85847739;
          result[1] += 0;
          result[2] += 38705;
          result[3] += 12901;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
          result[0] += 31055917;
          result[1] += 0;
          result[2] += 0;
          result[3] += 54843428;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85345326;
          result[1] += 0;
          result[2] += 369346;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 184673;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41600000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
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
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85588116;
          result[5] += 311229;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c00000))) ) ) {
          result[0] += 0;
          result[1] += 52489;
          result[2] += 708610;
          result[3] += 84954531;
          result[4] += 0;
          result[5] += 183713;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 73628010;
          result[2] += 0;
          result[3] += 12271335;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
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
          result[0] += 0;
          result[1] += 3118458;
          result[2] += 0;
          result[3] += 82780887;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 85635613;
          result[1] += 55849;
          result[2] += 176856;
          result[3] += 9308;
          result[4] += 0;
          result[5] += 0;
          result[6] += 21719;
        } else {
          result[0] += 22025473;
          result[1] += 0;
          result[2] += 15417831;
          result[3] += 48456041;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 24725081;
          result[1] += 0;
          result[2] += 812561;
          result[3] += 60361702;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 44100957;
          result[1] += 0;
          result[2] += 0;
          result[3] += 41798388;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
          result[0] += 80405276;
          result[1] += 0;
          result[2] += 218018;
          result[3] += 5167041;
          result[4] += 0;
          result[5] += 43603;
          result[6] += 65405;
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
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84838541;
          result[1] += 7366;
          result[2] += 58933;
          result[3] += 987137;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7366;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40900000))) ) ) {
          result[0] += 83075257;
          result[1] += 0;
          result[2] += 176505;
          result[3] += 2647582;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 81343450;
          result[1] += 414172;
          result[2] += 248503;
          result[3] += 3810385;
          result[4] += 0;
          result[5] += 0;
          result[6] += 82834;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 15589998;
          result[1] += 0;
          result[2] += 0;
          result[3] += 70309347;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 26628797;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 0;
          result[4] += 47244640;
          result[5] += 1288490;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x433e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85526386;
          result[1] += 0;
          result[2] += 322101;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 50858;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
          result[0] += 0;
          result[1] += 288834;
          result[2] += 664319;
          result[3] += 84512940;
          result[4] += 259950;
          result[5] += 173300;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 1768515;
          result[2] += 0;
          result[3] += 13390192;
          result[4] += 70740637;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42940000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 33791286;
          result[1] += 0;
          result[2] += 6474031;
          result[3] += 45634027;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85128256;
          result[5] += 771089;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d50000))) ) ) {
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
          result[3] += 4743695;
          result[4] += 81155650;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84778169;
          result[1] += 0;
          result[2] += 1121176;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1798939;
          result[3] += 83950495;
          result[4] += 149911;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 4787383;
          result[1] += 170977;
          result[2] += 102586;
          result[3] += 49822988;
          result[4] += 31015408;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 2290649;
          result[1] += 0;
          result[2] += 0;
          result[3] += 83608696;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 3616814;
          result[2] += 0;
          result[3] += 904203;
          result[4] += 81378327;
          result[5] += 0;
          result[6] += 0;
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
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 80711911;
          result[1] += 93560;
          result[2] += 311869;
          result[3] += 4750817;
          result[4] += 0;
          result[5] += 0;
          result[6] += 31186;
        } else {
          result[0] += 85633025;
          result[1] += 13097;
          result[2] += 26195;
          result[3] += 205197;
          result[4] += 17463;
          result[5] += 4365;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 234484;
          result[3] += 85586700;
          result[4] += 0;
          result[5] += 78161;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26030104;
          result[3] += 0;
          result[4] += 59869241;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
          result[0] += 27297276;
          result[1] += 0;
          result[2] += 0;
          result[3] += 58602069;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 73366490;
          result[1] += 0;
          result[2] += 0;
          result[3] += 12532855;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 84600926;
          result[1] += 0;
          result[2] += 1145664;
          result[3] += 50918;
          result[4] += 0;
          result[5] += 0;
          result[6] += 101836;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 780903;
          result[3] += 0;
          result[4] += 84988292;
          result[5] += 130150;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 85855360;
          result[1] += 0;
          result[2] += 43985;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 2097763;
          result[1] += 490386;
          result[2] += 1362184;
          result[3] += 74320778;
          result[4] += 7519257;
          result[5] += 108974;
          result[6] += 0;
        } else {
          result[0] += 63533965;
          result[1] += 0;
          result[2] += 288366;
          result[3] += 21992200;
          result[4] += 0;
          result[5] += 0;
          result[6] += 84813;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 405185;
          result[3] += 0;
          result[4] += 85494160;
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
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 1460873;
          result[2] += 0;
          result[3] += 79617591;
          result[4] += 4820881;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 165828;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85733517;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 4985229;
          result[2] += 0;
          result[3] += 766958;
          result[4] += 80147157;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
          result[0] += 6844569;
          result[1] += 0;
          result[2] += 4448970;
          result[3] += 74605806;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
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
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x429e0000))) ) ) {
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41780000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 955764;
          result[3] += 0;
          result[4] += 84107287;
          result[5] += 836294;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 28719;
          result[2] += 545666;
          result[3] += 85267521;
          result[4] += 0;
          result[5] += 57438;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 83710827;
          result[4] += 2188518;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2770946;
          result[4] += 83128399;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 10052051;
          result[4] += 75847294;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 743717;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85155628;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 79763678;
          result[1] += 6135667;
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
        result[3] += 85899345;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 81834644;
          result[1] += 60069;
          result[2] += 325376;
          result[3] += 3679255;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 63843597;
          result[1] += 0;
          result[2] += 122794;
          result[3] += 21914062;
          result[4] += 0;
          result[5] += 9445;
          result[6] += 9445;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
          result[0] += 85345857;
          result[1] += 0;
          result[2] += 247092;
          result[3] += 247092;
          result[4] += 0;
          result[5] += 0;
          result[6] += 59302;
        } else {
          result[0] += 81272810;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4626535;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420a0000))) ) ) {
          result[0] += 85332086;
          result[1] += 0;
          result[2] += 567259;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85855267;
          result[1] += 0;
          result[2] += 44078;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 38690201;
          result[1] += 0;
          result[2] += 828230;
          result[3] += 37783091;
          result[4] += 8597822;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 69684661;
          result[1] += 114407;
          result[2] += 520034;
          result[3] += 14956200;
          result[4] += 488832;
          result[5] += 31202;
          result[6] += 104006;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1958191;
          result[3] += 0;
          result[4] += 83941154;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 27943;
          result[2] += 726539;
          result[3] += 85144862;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
          result[0] += 12725829;
          result[1] += 1649644;
          result[2] += 530242;
          result[3] += 70993629;
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42020000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 85339284;
          result[1] += 0;
          result[2] += 420045;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 140015;
        } else {
          result[0] += 85876837;
          result[1] += 0;
          result[2] += 22507;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1961996;
          result[1] += 541240;
          result[2] += 1353100;
          result[3] += 81975353;
          result[4] += 0;
          result[5] += 67655;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 708315;
          result[2] += 0;
          result[3] += 17514709;
          result[4] += 67676321;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40600000))) ) ) {
          result[0] += 44919841;
          result[1] += 0;
          result[2] += 276888;
          result[3] += 40617419;
          result[4] += 0;
          result[5] += 0;
          result[6] += 85196;
        } else {
          result[0] += 52341000;
          result[1] += 0;
          result[2] += 0;
          result[3] += 33508257;
          result[4] += 0;
          result[5] += 0;
          result[6] += 50087;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 4772185;
          result[1] += 1193046;
          result[2] += 1193046;
          result[3] += 78741067;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84186303;
          result[1] += 0;
          result[2] += 688748;
          result[3] += 812370;
          result[4] += 0;
          result[5] += 35320;
          result[6] += 176602;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0;
          result[1] += 725909;
          result[2] += 1209849;
          result[3] += 78519261;
          result[4] += 5444324;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85800837;
          result[1] += 98508;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e60000))) ) ) {
          result[0] += 13130328;
          result[1] += 736280;
          result[2] += 0;
          result[3] += 72032737;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 1053979;
          result[2] += 0;
          result[3] += 0;
          result[4] += 84845366;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x41700000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 7785281;
          result[1] += 0;
          result[2] += 261251;
          result[3] += 1306255;
          result[4] += 76546558;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 24626433;
          result[1] += 0;
          result[2] += 4104405;
          result[3] += 57168506;
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41600000))) ) ) {
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
          result[4] += 85543409;
          result[5] += 355936;
          result[6] += 0;
        }
      } else {
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
          result[2] += 959099;
          result[3] += 84700471;
          result[4] += 0;
          result[5] += 239774;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 85815536;
          result[1] += 0;
          result[2] += 83809;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85889392;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9953;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
          result[0] += 59361192;
          result[1] += 194742;
          result[2] += 345226;
          result[3] += 25909664;
          result[4] += 0;
          result[5] += 8851;
          result[6] += 79667;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2005432;
          result[3] += 83559675;
          result[4] += 0;
          result[5] += 334238;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40600000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85844069;
          result[1] += 0;
          result[2] += 55276;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 61558770;
          result[1] += 0;
          result[2] += 728136;
          result[3] += 21719282;
          result[4] += 1705920;
          result[5] += 41607;
          result[6] += 145627;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1822475;
          result[3] += 72109281;
          result[4] += 11906840;
          result[5] += 60749;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 85837684;
          result[1] += 0;
          result[2] += 47431;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 14229;
        } else {
          result[0] += 49404719;
          result[1] += 188928;
          result[2] += 608768;
          result[3] += 33755168;
          result[4] += 1847297;
          result[5] += 52480;
          result[6] += 41984;
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
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 25028226;
          result[1] += 0;
          result[2] += 4325866;
          result[3] += 56545252;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 402810;
          result[1] += 1107728;
          result[2] += 0;
          result[3] += 84388806;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 5459704;
          result[2] += 0;
          result[3] += 80439641;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
          result[0] += 36442146;
          result[1] += 0;
          result[2] += 49457199;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 1195336;
          result[2] += 247310;
          result[3] += 84456698;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 85752383;
          result[1] += 0;
          result[2] += 146962;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 73404895;
          result[1] += 0;
          result[2] += 12494450;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 85888613;
          result[1] += 0;
          result[2] += 10732;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 49002982;
          result[1] += 0;
          result[2] += 892653;
          result[3] += 35650367;
          result[4] += 111581;
          result[5] += 74387;
          result[6] += 167372;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
          result[0] += 13092794;
          result[1] += 0;
          result[2] += 1415437;
          result[3] += 66790943;
          result[4] += 4069381;
          result[5] += 530788;
          result[6] += 0;
        } else {
          result[0] += 79191239;
          result[1] += 60497;
          result[2] += 145905;
          result[3] += 6473233;
          result[4] += 0;
          result[5] += 0;
          result[6] += 28469;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x4500c800))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43070000))) ) ) {
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
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41840000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40900000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85569597;
          result[5] += 329747;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 371170;
          result[2] += 530242;
          result[3] += 84891884;
          result[4] += 0;
          result[5] += 106048;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 82937299;
          result[1] += 0;
          result[2] += 2962046;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 85679542;
          result[1] += 0;
          result[2] += 175843;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 43960;
        } else {
          result[0] += 85884437;
          result[1] += 0;
          result[2] += 14907;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
          result[0] += 42128231;
          result[1] += 1760232;
          result[2] += 0;
          result[3] += 42010882;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 81523948;
          result[1] += 117964;
          result[2] += 782852;
          result[3] += 3356616;
          result[4] += 0;
          result[5] += 32172;
          result[6] += 85792;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
          result[0] += 0;
          result[1] += 118727;
          result[2] += 0;
          result[3] += 85780618;
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 24439223;
          result[1] += 905156;
          result[2] += 0;
          result[3] += 60464450;
          result[4] += 90515;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 7676674;
          result[1] += 0;
          result[2] += 0;
          result[3] += 78222670;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 49364510;
          result[1] += 0;
          result[2] += 1359435;
          result[3] += 35175399;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10007690;
          result[3] += 75891655;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41a40000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 777369;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85121976;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85758308;
          result[1] += 0;
          result[2] += 141036;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b40000))) ) ) {
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
          result[0] += 79843278;
          result[1] += 202619;
          result[2] += 303929;
          result[3] += 5436952;
          result[4] += 0;
          result[5] += 22513;
          result[6] += 90053;
        } else {
          result[0] += 1152556;
          result[1] += 0;
          result[2] += 1423746;
          result[3] += 74034795;
          result[4] += 9017058;
          result[5] += 271189;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
          result[0] += 0;
          result[1] += 28462;
          result[2] += 313085;
          result[3] += 85557797;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2375097;
          result[3] += 0;
          result[4] += 83392298;
          result[5] += 131949;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
          result[0] += 0;
          result[1] += 4693953;
          result[2] += 0;
          result[3] += 0;
          result[4] += 81205392;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 157324;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85742021;
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
          result[1] += 0;
          result[2] += 572662;
          result[3] += 85244874;
          result[4] += 0;
          result[5] += 81808;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 84830059;
          result[1] += 0;
          result[2] += 891072;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 178214;
        } else {
          result[0] += 85853247;
          result[1] += 0;
          result[2] += 46098;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 85367461;
          result[1] += 0;
          result[2] += 531884;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42800000))) ) ) {
          result[0] += 85146101;
          result[1] += 192003;
          result[2] += 457854;
          result[3] += 59077;
          result[4] += 0;
          result[5] += 0;
          result[6] += 44308;
        } else {
          result[0] += 643440;
          result[1] += 1930322;
          result[2] += 0;
          result[3] += 83325582;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 71423410;
          result[1] += 0;
          result[2] += 560571;
          result[3] += 13519666;
          result[4] += 0;
          result[5] += 98924;
          result[6] += 296773;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 314649;
          result[3] += 85584696;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x436c0000))) ) ) {
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3fc00000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 85697156;
          result[1] += 0;
          result[2] += 202189;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85892528;
          result[1] += 0;
          result[2] += 6817;
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 1851279;
          result[1] += 691144;
          result[2] += 296204;
          result[3] += 82838564;
          result[4] += 172786;
          result[5] += 49367;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1946727;
          result[3] += 20643421;
          result[4] += 63268640;
          result[5] += 40556;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
          result[0] += 0;
          result[1] += 1396737;
          result[2] += 0;
          result[3] += 3910864;
          result[4] += 80591744;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 16617432;
          result[4] += 69281912;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42280000))) ) ) {
          result[0] += 84416928;
          result[1] += 0;
          result[2] += 350389;
          result[3] += 1078121;
          result[4] += 0;
          result[5] += 0;
          result[6] += 53906;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 16797487;
          result[1] += 0;
          result[2] += 0;
          result[3] += 69101858;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 83638836;
          result[1] += 0;
          result[2] += 1507006;
          result[3] += 376751;
          result[4] += 0;
          result[5] += 0;
          result[6] += 376751;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41780000))) ) ) {
          result[0] += 186130;
          result[1] += 0;
          result[2] += 558392;
          result[3] += 0;
          result[4] += 84968692;
          result[5] += 186130;
          result[6] += 0;
        } else {
          result[0] += 62358;
          result[1] += 93538;
          result[2] += 31179;
          result[3] += 85649910;
          result[4] += 0;
          result[5] += 62358;
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
          result[0] += 83090647;
          result[1] += 0;
          result[2] += 2808697;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x43390000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0;
          result[1] += 821021;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85078324;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 8886139;
          result[2] += 0;
          result[3] += 0;
          result[4] += 77013206;
          result[5] += 0;
          result[6] += 0;
        }
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
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85776540;
          result[1] += 0;
          result[2] += 103415;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 19390;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 85455266;
          result[1] += 0;
          result[2] += 0;
          result[3] += 444079;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 36022306;
          result[1] += 0;
          result[2] += 0;
          result[3] += 49877039;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423a0000))) ) ) {
          result[0] += 85822340;
          result[1] += 0;
          result[2] += 77005;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 42804866;
          result[1] += 312782;
          result[2] += 590811;
          result[3] += 42132963;
          result[4] += 0;
          result[5] += 0;
          result[6] += 57922;
        } else {
          result[0] += 82874438;
          result[1] += 0;
          result[2] += 621007;
          result[3] += 2203574;
          result[4] += 0;
          result[5] += 0;
          result[6] += 200324;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 84008851;
          result[1] += 0;
          result[2] += 1890494;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 75327118;
          result[1] += 0;
          result[2] += 7929170;
          result[3] += 2643056;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 7676111;
          result[1] += 365529;
          result[2] += 137073;
          result[3] += 77674940;
          result[4] += 45691;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 16751768;
          result[4] += 69147577;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1101273;
          result[1] += 13215283;
          result[2] += 0;
          result[3] += 71582788;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c20000))) ) ) {
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41100000))) ) ) {
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1096799;
          result[3] += 77374222;
          result[4] += 7129197;
          result[5] += 299127;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41980000))) ) ) {
          result[0] += 84119229;
          result[1] += 59835;
          result[2] += 124658;
          result[3] += 1585649;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9972;
        } else {
          result[0] += 5941165;
          result[1] += 742645;
          result[2] += 2723034;
          result[3] += 75997404;
          result[4] += 0;
          result[5] += 495097;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
          result[0] += 80316371;
          result[1] += 0;
          result[2] += 229354;
          result[3] += 5311370;
          result[4] += 0;
          result[5] += 6035;
          result[6] += 36213;
        } else {
          result[0] += 56096382;
          result[1] += 0;
          result[2] += 0;
          result[3] += 29802962;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0;
          result[1] += 424310;
          result[2] += 801475;
          result[3] += 84626413;
          result[4] += 47145;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 31745410;
          result[1] += 1867377;
          result[2] += 3734754;
          result[3] += 48551804;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 82204750;
          result[1] += 0;
          result[2] += 3694595;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
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
          result[3] += 4294967;
          result[4] += 81604378;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 11509047;
          result[4] += 74390298;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 95656;
          result[1] += 1339188;
          result[2] += 0;
          result[3] += 0;
          result[4] += 84464501;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 85821869;
          result[1] += 0;
          result[2] += 55954;
          result[3] += 0;
          result[4] += 21521;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 78642104;
          result[1] += 0;
          result[2] += 0;
          result[3] += 7257241;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 4309331;
          result[1] += 287288;
          result[2] += 1149155;
          result[3] += 80153570;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 520602;
          result[3] += 0;
          result[4] += 84988292;
          result[5] += 390451;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 71481888;
          result[1] += 0;
          result[2] += 112110;
          result[3] += 13767214;
          result[4] += 538132;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 46336272;
          result[1] += 0;
          result[2] += 569708;
          result[3] += 38581909;
          result[4] += 253203;
          result[5] += 0;
          result[6] += 158252;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 36243178;
          result[1] += 301189;
          result[2] += 461824;
          result[3] += 46543871;
          result[4] += 2309122;
          result[5] += 40158;
          result[6] += 0;
        } else {
          result[0] += 84524208;
          result[1] += 0;
          result[2] += 146859;
          result[3] += 1214927;
          result[4] += 0;
          result[5] += 0;
          result[6] += 13350;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 83782108;
          result[1] += 0;
          result[2] += 2117237;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 639937;
          result[2] += 196903;
          result[3] += 85013278;
          result[4] += 49225;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41a40000))) ) ) {
          result[0] += 0;
          result[1] += 76354974;
          result[2] += 0;
          result[3] += 9544371;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 332943;
          result[1] += 665886;
          result[2] += 0;
          result[3] += 84900516;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
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
          result[1] += 52313;
          result[2] += 1150904;
          result[3] += 77162932;
          result[4] += 7376253;
          result[5] += 156941;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 85542655;
          result[1] += 0;
          result[2] += 54552;
          result[3] += 297941;
          result[4] += 0;
          result[5] += 0;
          result[6] += 4196;
        } else {
          result[0] += 68922653;
          result[1] += 32595;
          result[2] += 380277;
          result[3] += 16493195;
          result[4] += 0;
          result[5] += 10865;
          result[6] += 59757;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
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
          result[0] += 85836936;
          result[1] += 0;
          result[2] += 54608;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7801;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 78783169;
          result[1] += 118244;
          result[2] += 354733;
          result[3] += 6524953;
          result[4] += 0;
          result[5] += 10749;
          result[6] += 107495;
        } else {
          result[0] += 15162827;
          result[1] += 0;
          result[2] += 1715885;
          result[3] += 59390660;
          result[4] += 9629971;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85774128;
          result[5] += 125217;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 84215;
          result[2] += 926365;
          result[3] += 84860693;
          result[4] += 0;
          result[5] += 28071;
          result[6] += 0;
        }
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 24728599;
          result[1] += 0;
          result[2] += 3904515;
          result[3] += 57266230;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42f90000))) ) ) {
          result[0] += 0;
          result[1] += 909425;
          result[2] += 0;
          result[3] += 84989920;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 5726623;
          result[1] += 62992853;
          result[2] += 0;
          result[3] += 17179869;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45cb4000))) ) ) {
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 85647687;
          result[1] += 0;
          result[2] += 209715;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 41943;
        } else {
          result[0] += 85870959;
          result[1] += 0;
          result[2] += 28385;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x41f40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34359738;
          result[3] += 51539607;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1912570;
          result[1] += 602875;
          result[2] += 1476005;
          result[3] += 81845528;
          result[4] += 0;
          result[5] += 62366;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 83526190;
          result[1] += 22179;
          result[2] += 288327;
          result[3] += 1996111;
          result[4] += 0;
          result[5] += 0;
          result[6] += 66537;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 243636;
          result[3] += 85655709;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42520000))) ) ) {
          result[0] += 69546947;
          result[1] += 0;
          result[2] += 0;
          result[3] += 16352398;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84580911;
          result[1] += 0;
          result[2] += 581004;
          result[3] += 603351;
          result[4] += 0;
          result[5] += 0;
          result[6] += 134078;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x44db3000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 84692894;
          result[1] += 0;
          result[2] += 1206451;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85866282;
          result[1] += 0;
          result[2] += 26450;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 6612;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42980000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 9544371;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 76354974;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 92364;
          result[2] += 184729;
          result[3] += 21151559;
          result[4] += 64378326;
          result[5] += 92364;
          result[6] += 0;
        } else {
          result[0] += 2655176;
          result[1] += 408488;
          result[2] += 1633954;
          result[3] += 71485529;
          result[4] += 9395240;
          result[5] += 320955;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 50183005;
          result[1] += 0;
          result[2] += 379961;
          result[3] += 35294161;
          result[4] += 0;
          result[5] += 0;
          result[6] += 42217;
        } else {
          result[0] += 83487922;
          result[1] += 0;
          result[2] += 344489;
          result[3] += 1945349;
          result[4] += 0;
          result[5] += 0;
          result[6] += 121584;
        }
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42f90000))) ) ) {
          result[0] += 11722004;
          result[1] += 868296;
          result[2] += 1116381;
          result[3] += 72192663;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 3579139;
          result[1] += 50107951;
          result[2] += 0;
          result[3] += 32212254;
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
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x436c0000))) ) ) {
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
          result[0] += 84128225;
          result[1] += 0;
          result[2] += 1549730;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 221390;
        } else {
          result[0] += 85790059;
          result[1] += 0;
          result[2] += 109286;
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
          result[0] += 85810725;
          result[1] += 0;
          result[2] += 88619;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 1758499;
          result[1] += 556487;
          result[2] += 1424606;
          result[3] += 80445772;
          result[4] += 1624942;
          result[5] += 89037;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 27521149;
          result[4] += 58378196;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 980306;
          result[2] += 0;
          result[3] += 3737418;
          result[4] += 81181621;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 85549395;
          result[1] += 0;
          result[2] += 269192;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 80757;
        } else {
          result[0] += 497486;
          result[1] += 0;
          result[2] += 132663;
          result[3] += 85269196;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42000000))) ) ) {
          result[0] += 83862133;
          result[1] += 56070;
          result[2] += 448560;
          result[3] += 1532581;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 70175397;
          result[1] += 0;
          result[2] += 2620658;
          result[3] += 11356184;
          result[4] += 0;
          result[5] += 291184;
          result[6] += 1455921;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
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
          result[1] += 317792;
          result[2] += 953377;
          result[3] += 84628175;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 85746906;
          result[1] += 76219;
          result[2] += 76219;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 75911049;
          result[1] += 0;
          result[2] += 9988296;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 67649278;
          result[1] += 460681;
          result[2] += 141748;
          result[3] += 17328704;
          result[4] += 0;
          result[5] += 106311;
          result[6] += 212622;
        } else {
          result[0] += 82898171;
          result[1] += 31814;
          result[2] += 84838;
          result[3] += 2831496;
          result[4] += 21209;
          result[5] += 0;
          result[6] += 31814;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41b00000))) ) ) {
          result[0] += 75632491;
          result[1] += 0;
          result[2] += 0;
          result[3] += 10266854;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85825873;
          result[1] += 5248;
          result[2] += 20992;
          result[3] += 26240;
          result[4] += 10496;
          result[5] += 10496;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 14797528;
          result[1] += 0;
          result[2] += 0;
          result[3] += 71101817;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 60416435;
          result[1] += 0;
          result[2] += 0;
          result[3] += 25482910;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42220000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14565541;
          result[3] += 0;
          result[4] += 71333804;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84914056;
          result[1] += 0;
          result[2] += 716574;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 268715;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42440000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 75748;
          result[3] += 68817950;
          result[4] += 16929897;
          result[5] += 75748;
          result[6] += 0;
        } else {
          result[0] += 85172924;
          result[1] += 0;
          result[2] += 544816;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 181605;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e40000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 74597;
          result[2] += 0;
          result[3] += 85414460;
          result[4] += 298391;
          result[5] += 111896;
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
          result[0] += 2454267;
          result[1] += 0;
          result[2] += 76082277;
          result[3] += 0;
          result[4] += 0;
          result[5] += 7362801;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 85810087;
          result[1] += 0;
          result[2] += 89258;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 47345795;
          result[1] += 190859;
          result[2] += 750712;
          result[3] += 37573806;
          result[4] += 0;
          result[5] += 0;
          result[6] += 38171;
        } else {
          result[0] += 83123131;
          result[1] += 0;
          result[2] += 449093;
          result[3] += 2204641;
          result[4] += 0;
          result[5] += 0;
          result[6] += 122480;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42f90000))) ) ) {
          result[0] += 12714616;
          result[1] += 681140;
          result[2] += 0;
          result[3] += 72503588;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 8180890;
          result[1] += 61356675;
          result[2] += 0;
          result[3] += 16361780;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 8810189;
          result[1] += 0;
          result[2] += 0;
          result[3] += 11012736;
          result[4] += 66076419;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42400000))) ) ) {
          result[0] += 78190430;
          result[1] += 0;
          result[2] += 7708915;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 477218;
          result[3] += 85422127;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40b00000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 3995318;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 81904027;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x420c0000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 107778;
          result[1] += 0;
          result[2] += 296390;
          result[3] += 85360454;
          result[4] += 0;
          result[5] += 134722;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85782793;
          result[1] += 0;
          result[2] += 116552;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 85452728;
          result[1] += 0;
          result[2] += 372180;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 74436;
        } else {
          result[0] += 85798251;
          result[1] += 15553;
          result[2] += 54435;
          result[3] += 31106;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 85472111;
          result[1] += 0;
          result[2] += 0;
          result[3] += 427234;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 27269633;
          result[1] += 0;
          result[2] += 0;
          result[3] += 58629712;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 85128948;
          result[1] += 0;
          result[2] += 770397;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
          result[0] += 45085125;
          result[1] += 165422;
          result[2] += 466190;
          result[3] += 40152530;
          result[4] += 0;
          result[5] += 0;
          result[6] += 30076;
        } else {
          result[0] += 73576431;
          result[1] += 251167;
          result[2] += 926180;
          result[3] += 11035679;
          result[4] += 0;
          result[5] += 0;
          result[6] += 109885;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 84645340;
          result[1] += 0;
          result[2] += 1254005;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 75839062;
          result[1] += 0;
          result[2] += 10060283;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x45ad0000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 6990575;
          result[1] += 882648;
          result[2] += 458977;
          result[3] += 77567144;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 80596917;
          result[1] += 228968;
          result[2] += 132560;
          result[3] += 4928848;
          result[4] += 12050;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85634662;
          result[1] += 4726;
          result[2] += 18905;
          result[3] += 207965;
          result[4] += 18905;
          result[5] += 14179;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
          result[0] += 51055667;
          result[1] += 0;
          result[2] += 1209849;
          result[3] += 33633828;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 61274692;
          result[1] += 0;
          result[2] += 626050;
          result[3] += 23137783;
          result[4] += 834734;
          result[5] += 0;
          result[6] += 26085;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 56901012;
          result[1] += 0;
          result[2] += 0;
          result[3] += 28998333;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 32815011;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53084334;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42200000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3686667;
          result[3] += 0;
          result[4] += 81966900;
          result[5] += 245777;
          result[6] += 0;
        } else {
          result[0] += 85438072;
          result[1] += 0;
          result[2] += 384394;
          result[3] += 25626;
          result[4] += 0;
          result[5] += 0;
          result[6] += 51252;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45afc400))) ) ) {
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
          result[0] += 85185006;
          result[1] += 0;
          result[2] += 714339;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85848093;
          result[1] += 0;
          result[2] += 51252;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a80000))) ) ) {
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
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
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
          result[0] += 1923292;
          result[1] += 556132;
          result[2] += 1459848;
          result[3] += 81774694;
          result[4] += 0;
          result[5] += 185377;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 84319467;
          result[1] += 10462;
          result[2] += 554526;
          result[3] += 941649;
          result[4] += 0;
          result[5] += 10462;
          result[6] += 62776;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 135809;
          result[3] += 85763536;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 470681;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85428664;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 9544371;
          result[1] += 71582788;
          result[2] += 0;
          result[3] += 4772185;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
          result[0] += 64424509;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 21474836;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85820704;
          result[1] += 0;
          result[2] += 72087;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 6553;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3fc00000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 81109489;
          result[1] += 205814;
          result[2] += 523890;
          result[3] += 3854337;
          result[4] += 0;
          result[5] += 37420;
          result[6] += 168393;
        } else {
          result[0] += 0;
          result[1] += 201736;
          result[2] += 685903;
          result[3] += 84487191;
          result[4] += 524514;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 46419363;
          result[1] += 0;
          result[2] += 0;
          result[3] += 35990688;
          result[4] += 3450087;
          result[5] += 0;
          result[6] += 39205;
        } else {
          result[0] += 84629003;
          result[1] += 0;
          result[2] += 120984;
          result[3] += 1149357;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42640000))) ) ) {
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
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41780000))) ) ) {
          result[0] += 0;
          result[1] += 49731200;
          result[2] += 22605091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 13563054;
          result[6] += 0;
        } else {
          result[0] += 284434;
          result[1] += 387865;
          result[2] += 620585;
          result[3] += 84606459;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41400000))) ) ) {
          result[0] += 84717882;
          result[1] += 0;
          result[2] += 1181463;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 1289134;
          result[1] += 386740;
          result[2] += 0;
          result[3] += 63124631;
          result[4] += 20969925;
          result[5] += 128913;
          result[6] += 0;
        } else {
          result[0] += 83333127;
          result[1] += 0;
          result[2] += 496687;
          result[3] += 1766000;
          result[4] += 0;
          result[5] += 55187;
          result[6] += 248343;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3542241;
          result[3] += 0;
          result[4] += 82357104;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1336377;
          result[3] += 84562968;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
          result[0] += 14316557;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 71582788;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 84431294;
          result[1] += 82577;
          result[2] += 64227;
          result[3] += 1312070;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9175;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 18601702;
          result[1] += 0;
          result[2] += 0;
          result[3] += 63908818;
          result[4] += 3388824;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85392636;
          result[1] += 0;
          result[2] += 193032;
          result[3] += 289548;
          result[4] += 0;
          result[5] += 0;
          result[6] += 24129;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 30714010;
          result[1] += 332943;
          result[2] += 1248537;
          result[3] += 53603855;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1643291;
          result[3] += 83658493;
          result[4] += 0;
          result[5] += 597560;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 9077691;
          result[1] += 0;
          result[2] += 0;
          result[3] += 76821654;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 50200916;
          result[1] += 0;
          result[2] += 0;
          result[3] += 33839136;
          result[4] += 1115575;
          result[5] += 743717;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
          result[0] += 85713383;
          result[1] += 46490;
          result[2] += 40291;
          result[3] += 86782;
          result[4] += 0;
          result[5] += 0;
          result[6] += 12397;
        } else {
          result[0] += 72871956;
          result[1] += 0;
          result[2] += 0;
          result[3] += 13027388;
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 16181523;
          result[1] += 748759;
          result[2] += 2287876;
          result[3] += 66639589;
          result[4] += 0;
          result[5] += 41597;
          result[6] += 0;
        } else {
          result[0] += 12398549;
          result[1] += 274001;
          result[2] += 274001;
          result[3] += 72952793;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 15202212;
          result[1] += 0;
          result[2] += 794349;
          result[3] += 69902784;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 85279134;
          result[1] += 0;
          result[2] += 0;
          result[3] += 620211;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 46180996;
          result[1] += 0;
          result[2] += 0;
          result[3] += 39718349;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 80308264;
          result[1] += 0;
          result[2] += 411464;
          result[3] += 4647132;
          result[4] += 266241;
          result[5] += 72611;
          result[6] += 193630;
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
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
          result[0] += 21474836;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 64424509;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41700000))) ) ) {
          result[0] += 0;
          result[1] += 868157;
          result[2] += 289385;
          result[3] += 0;
          result[4] += 84548878;
          result[5] += 192923;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 104341;
          result[2] += 182598;
          result[3] += 85586320;
          result[4] += 0;
          result[5] += 26085;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 85684892;
          result[1] += 34188;
          result[2] += 142968;
          result[3] += 24864;
          result[4] += 0;
          result[5] += 0;
          result[6] += 12432;
        } else {
          result[0] += 65999883;
          result[1] += 0;
          result[2] += 3979892;
          result[3] += 15919569;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41dc0000))) ) ) {
          result[0] += 0;
          result[1] += 343597;
          result[2] += 0;
          result[3] += 85555748;
          result[4] += 0;
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
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 23604779;
          result[1] += 0;
          result[2] += 0;
          result[3] += 62294566;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42480000))) ) ) {
          result[0] += 1949093;
          result[1] += 0;
          result[2] += 0;
          result[3] += 83950252;
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
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 84571005;
          result[1] += 0;
          result[2] += 1151228;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 177112;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 380085;
          result[3] += 0;
          result[4] += 84949131;
          result[5] += 570128;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41c00000))) ) ) {
          result[0] += 85060485;
          result[1] += 0;
          result[2] += 671088;
          result[3] += 167772;
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
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
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
          result[4] += 0;
          result[5] += 85899345;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bc0000))) ) ) {
          result[0] += 135701;
          result[1] += 101776;
          result[2] += 101776;
          result[3] += 85458314;
          result[4] += 0;
          result[5] += 101776;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 85109466;
          result[1] += 0;
          result[2] += 724055;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 65823;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
          result[0] += 85869452;
          result[1] += 0;
          result[2] += 29893;
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3fc00000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x425c0000))) ) ) {
          result[0] += 59636395;
          result[1] += 126153;
          result[2] += 814266;
          result[3] += 25150502;
          result[4] += 0;
          result[5] += 34405;
          result[6] += 137622;
        } else {
          result[0] += 6406496;
          result[1] += 1438193;
          result[2] += 261489;
          result[3] += 77793167;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 82042446;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3761667;
          result[4] += 0;
          result[5] += 0;
          result[6] += 95232;
        } else {
          result[0] += 42912260;
          result[1] += 0;
          result[2] += 37412;
          result[3] += 42949672;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_2/test_data.csv", "r");
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
