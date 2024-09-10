
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42420000))) ) ) {
          result[0] += 143165576;
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
          result[4] += 143165576;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 108049;
          result[2] += 0;
          result[3] += 142949477;
          result[4] += 0;
          result[5] += 108049;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 25451658;
          result[2] += 114532461;
          result[3] += 0;
          result[4] += 0;
          result[5] += 3181457;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 141897221;
          result[1] += 0;
          result[2] += 1189082;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 79272;
        } else {
          result[0] += 143086775;
          result[1] += 0;
          result[2] += 78800;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 8180890;
          result[1] += 1879393;
          result[2] += 3869339;
          result[3] += 129014847;
          result[4] += 0;
          result[5] += 221105;
          result[6] += 0;
        } else {
          result[0] += 140538363;
          result[1] += 17514;
          result[2] += 770649;
          result[3] += 1593842;
          result[4] += 0;
          result[5] += 52544;
          result[6] += 192662;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 0;
          result[1] += 207787;
          result[2] += 0;
          result[3] += 142957789;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 143165576;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 143165576;
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
          result[3] += 136532816;
          result[4] += 6632760;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 94279769;
          result[1] += 0;
          result[2] += 48885806;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 2108821;
          result[2] += 0;
          result[3] += 0;
          result[4] += 140588127;
          result[5] += 468627;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 69363;
          result[2] += 0;
          result[3] += 130888295;
          result[4] += 11999827;
          result[5] += 208089;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0;
          result[1] += 136348;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143029228;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 13967373;
          result[1] += 0;
          result[2] += 1862316;
          result[3] += 0;
          result[4] += 127335886;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 142999432;
          result[1] += 0;
          result[2] += 144473;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 21670;
        } else {
          result[0] += 112880550;
          result[1] += 0;
          result[2] += 0;
          result[3] += 30285025;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42100000))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 6983686;
          result[2] += 0;
          result[3] += 136181889;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
          result[0] += 133129325;
          result[1] += 47678;
          result[2] += 667494;
          result[3] += 9189964;
          result[4] += 0;
          result[5] += 11919;
          result[6] += 119195;
        } else {
          result[0] += 37324685;
          result[1] += 1401866;
          result[2] += 5432231;
          result[3] += 99006794;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1065220;
          result[3] += 142100356;
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
      result[4] += 143165576;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
          result[0] += 139975257;
          result[1] += 0;
          result[2] += 2791529;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 398789;
        } else {
          result[0] += 142988171;
          result[1] += 0;
          result[2] += 177404;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420a0000))) ) ) {
          result[0] += 142908022;
          result[1] += 0;
          result[2] += 257553;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 143156597;
          result[1] += 0;
          result[2] += 8979;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42990000))) ) ) {
          result[0] += 105952437;
          result[1] += 141584;
          result[2] += 330363;
          result[3] += 36481618;
          result[4] += 94389;
          result[5] += 23597;
          result[6] += 141584;
        } else {
          result[0] += 36616205;
          result[1] += 811289;
          result[2] += 1568493;
          result[3] += 91729814;
          result[4] += 12439774;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
          result[0] += 9527508;
          result[1] += 0;
          result[2] += 674513;
          result[3] += 17031476;
          result[4] += 115932077;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 125379315;
          result[1] += 0;
          result[2] += 1889214;
          result[3] += 9399992;
          result[4] += 6082348;
          result[5] += 230391;
          result[6] += 184313;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
          result[0] += 0;
          result[1] += 5532969;
          result[2] += 0;
          result[3] += 137632607;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 209612;
          result[3] += 0;
          result[4] += 142536737;
          result[5] += 419225;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 142808045;
          result[4] += 255379;
          result[5] += 102151;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 138691652;
          result[3] += 0;
          result[4] += 4473924;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 142788824;
          result[1] += 0;
          result[2] += 376751;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 143165576;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1418261;
          result[1] += 945507;
          result[2] += 2678937;
          result[3] += 137965285;
          result[4] += 0;
          result[5] += 157584;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 142447954;
          result[1] += 0;
          result[2] += 538216;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 179405;
        } else {
          result[0] += 57944302;
          result[1] += 0;
          result[2] += 385267;
          result[3] += 84450738;
          result[4] += 0;
          result[5] += 0;
          result[6] += 385267;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
          result[0] += 0;
          result[1] += 708740;
          result[2] += 0;
          result[3] += 4252442;
          result[4] += 138204393;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 46344691;
          result[1] += 1347229;
          result[2] += 1975936;
          result[3] += 93318089;
          result[4] += 179630;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 42524428;
          result[1] += 0;
          result[2] += 3543702;
          result[3] += 97097445;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
          result[0] += 140576214;
          result[1] += 160253;
          result[2] += 118081;
          result[3] += 2226682;
          result[4] += 42172;
          result[5] += 16868;
          result[6] += 25303;
        } else {
          result[0] += 100353046;
          result[1] += 0;
          result[2] += 1073294;
          result[3] += 36909409;
          result[4] += 4710570;
          result[5] += 0;
          result[6] += 119254;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 99379882;
          result[1] += 0;
          result[2] += 148846;
          result[3] += 43612040;
          result[4] += 24807;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 262689;
          result[1] += 0;
          result[2] += 262689;
          result[3] += 0;
          result[4] += 142640198;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 416582;
          result[1] += 0;
          result[2] += 0;
          result[3] += 141707537;
          result[4] += 486013;
          result[5] += 555443;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1835456;
          result[3] += 128359563;
          result[4] += 12970556;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2726963;
          result[3] += 0;
          result[4] += 140438613;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41500000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 3169717;
          result[2] += 0;
          result[3] += 0;
          result[4] += 139995858;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 240210;
          result[2] += 0;
          result[3] += 0;
          result[4] += 142925365;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 124256915;
          result[1] += 18908661;
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
        result[3] += 143165576;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 141839322;
          result[1] += 0;
          result[2] += 907436;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 418816;
        } else {
          result[0] += 143141215;
          result[1] += 0;
          result[2] += 24361;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 141332405;
          result[1] += 305528;
          result[2] += 1349417;
          result[3] += 101842;
          result[4] += 0;
          result[5] += 0;
          result[6] += 76382;
        } else {
          result[0] += 59141579;
          result[1] += 0;
          result[2] += 1152448;
          result[3] += 82714396;
          result[4] += 0;
          result[5] += 0;
          result[6] += 157152;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 143165576;
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
        result[4] += 143165576;
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
          result[4] += 142583602;
          result[5] += 581973;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 143078066;
          result[4] += 0;
          result[5] += 87509;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 22776341;
          result[2] += 0;
          result[3] += 0;
          result[4] += 120389234;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1269316;
          result[3] += 0;
          result[4] += 141829453;
          result[5] += 66806;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40600000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 141728171;
          result[1] += 0;
          result[2] += 1245751;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 191654;
        } else {
          result[0] += 143055786;
          result[1] += 0;
          result[2] += 109789;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 135424143;
          result[1] += 169768;
          result[2] += 1035586;
          result[3] += 6400263;
          result[4] += 0;
          result[5] += 16976;
          result[6] += 118837;
        } else {
          result[0] += 0;
          result[1] += 146936;
          result[2] += 734684;
          result[3] += 142283954;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x43370000))) ) ) {
          result[0] += 0;
          result[1] += 4382619;
          result[2] += 0;
          result[3] += 138782956;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 143165576;
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
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41e80000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 775264;
          result[1] += 3876324;
          result[2] += 0;
          result[3] += 138513987;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 142730015;
          result[1] += 0;
          result[2] += 435561;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 141219053;
          result[1] += 30038;
          result[2] += 102132;
          result[3] += 1796328;
          result[4] += 0;
          result[5] += 6007;
          result[6] += 12015;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 0;
          result[1] += 558645;
          result[2] += 1929865;
          result[3] += 140677065;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 138895331;
          result[1] += 449499;
          result[2] += 3595995;
          result[3] += 224749;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41700000))) ) ) {
          result[0] += 21413444;
          result[1] += 0;
          result[2] += 0;
          result[3] += 121752131;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 72754355;
          result[1] += 0;
          result[2] += 0;
          result[3] += 70411220;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 135330644;
          result[1] += 0;
          result[2] += 5935554;
          result[3] += 474844;
          result[4] += 474844;
          result[5] += 474844;
          result[6] += 474844;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
          result[0] += 49990173;
          result[1] += 785185;
          result[2] += 0;
          result[3] += 91866759;
          result[4] += 0;
          result[5] += 523457;
          result[6] += 0;
        } else {
          result[0] += 142787324;
          result[1] += 90567;
          result[2] += 181134;
          result[3] += 69257;
          result[4] += 0;
          result[5] += 0;
          result[6] += 37292;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 32785439;
          result[1] += 0;
          result[2] += 224046;
          result[3] += 109857362;
          result[4] += 149364;
          result[5] += 149364;
          result[6] += 0;
        } else {
          result[0] += 104774807;
          result[1] += 0;
          result[2] += 0;
          result[3] += 36791153;
          result[4] += 0;
          result[5] += 1599615;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 53210450;
          result[1] += 0;
          result[2] += 2426535;
          result[3] += 85448703;
          result[4] += 2079887;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 241425;
          result[1] += 724277;
          result[2] += 0;
          result[3] += 33799630;
          result[4] += 108400242;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 46833877;
          result[1] += 773403;
          result[2] += 3523282;
          result[3] += 92035013;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 107632417;
          result[1] += 0;
          result[2] += 0;
          result[3] += 35533158;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
          result[0] += 83513252;
          result[1] += 0;
          result[2] += 23860929;
          result[3] += 0;
          result[4] += 0;
          result[5] += 35791394;
          result[6] += 0;
        } else {
          result[0] += 140508807;
          result[1] += 0;
          result[2] += 2014002;
          result[3] += 128553;
          result[4] += 257106;
          result[5] += 85702;
          result[6] += 171404;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6362914;
          result[3] += 0;
          result[4] += 136802661;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x430d0000))) ) ) {
        result[0] += 143165576;
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
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 138576936;
          result[1] += 0;
          result[2] += 4588640;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 142794200;
          result[1] += 0;
          result[2] += 371376;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 143118013;
          result[1] += 0;
          result[2] += 47563;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 139132426;
          result[1] += 337973;
          result[2] += 450631;
          result[3] += 3064293;
          result[4] += 0;
          result[5] += 0;
          result[6] += 180252;
        } else {
          result[0] += 95415090;
          result[1] += 0;
          result[2] += 0;
          result[3] += 47664604;
          result[4] += 0;
          result[5] += 85882;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 18491175;
          result[1] += 438773;
          result[2] += 1755094;
          result[3] += 94336336;
          result[4] += 27987491;
          result[5] += 156704;
          result[6] += 0;
        } else {
          result[0] += 278532;
          result[1] += 557064;
          result[2] += 0;
          result[3] += 16851201;
          result[4] += 125478778;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 0;
          result[1] += 320999;
          result[2] += 0;
          result[3] += 142844577;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 143165576;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 143165576;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 594870;
          result[3] += 0;
          result[4] += 142174125;
          result[5] += 396580;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 7584931;
          result[2] += 0;
          result[3] += 11377396;
          result[4] += 124203248;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 105325516;
          result[4] += 37840059;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 96983132;
          result[1] += 0;
          result[2] += 46182444;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
          result[0] += 0;
          result[1] += 324638;
          result[2] += 0;
          result[3] += 1623192;
          result[4] += 141217745;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 27414684;
          result[4] += 115750891;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 49531218;
          result[1] += 1055459;
          result[2] += 2337089;
          result[3] += 87904719;
          result[4] += 2337089;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 11837153;
          result[1] += 0;
          result[2] += 1279692;
          result[3] += 20155153;
          result[4] += 109893576;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40e00000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 142997360;
          result[1] += 0;
          result[2] += 140179;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 28035;
        } else {
          result[0] += 100019786;
          result[1] += 490293;
          result[2] += 0;
          result[3] += 42655497;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 594048;
          result[1] += 1782144;
          result[2] += 0;
          result[3] += 139007240;
          result[4] += 1782144;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3534952;
          result[3] += 0;
          result[4] += 139630623;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 130400611;
          result[1] += 154259;
          result[2] += 398503;
          result[3] += 11993668;
          result[4] += 0;
          result[5] += 38564;
          result[6] += 179969;
        } else {
          result[0] += 72744307;
          result[1] += 0;
          result[2] += 663725;
          result[3] += 69757543;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42440000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1012665;
          result[3] += 141266828;
          result[4] += 0;
          result[5] += 886082;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 0;
          result[4] += 102261126;
          result[5] += 5113056;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
          result[0] += 22950206;
          result[1] += 0;
          result[2] += 0;
          result[3] += 118758213;
          result[4] += 364288;
          result[5] += 1092866;
          result[6] += 0;
        } else {
          result[0] += 142974596;
          result[1] += 0;
          result[2] += 34723;
          result[3] += 121532;
          result[4] += 0;
          result[5] += 0;
          result[6] += 34723;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0;
          result[1] += 354151;
          result[2] += 0;
          result[3] += 104474570;
          result[4] += 38336855;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 142530414;
          result[1] += 0;
          result[2] += 635162;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42300000))) ) ) {
          result[0] += 12024675;
          result[1] += 0;
          result[2] += 0;
          result[3] += 131140901;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 137669777;
          result[1] += 0;
          result[2] += 4121849;
          result[3] += 0;
          result[4] += 961764;
          result[5] += 0;
          result[6] += 412184;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41280000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 225103;
          result[1] += 1125515;
          result[2] += 2363582;
          result[3] += 139451375;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 139775499;
          result[1] += 521550;
          result[2] += 2346976;
          result[3] += 521550;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 142794565;
          result[1] += 0;
          result[2] += 371010;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 143115820;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 49756;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 116453567;
          result[1] += 404727;
          result[2] += 863418;
          result[3] += 22826626;
          result[4] += 2509309;
          result[5] += 80945;
          result[6] += 26981;
        } else {
          result[0] += 0;
          result[1] += 303316;
          result[2] += 303316;
          result[3] += 111741945;
          result[4] += 30695670;
          result[5] += 121326;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 139494664;
          result[5] += 3670912;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 1512692;
          result[2] += 1296593;
          result[3] += 139924091;
          result[4] += 0;
          result[5] += 432197;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40200000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 38401787;
          result[1] += 116017;
          result[2] += 0;
          result[3] += 93394075;
          result[4] += 10441573;
          result[5] += 812122;
          result[6] += 0;
        } else {
          result[0] += 9407183;
          result[1] += 0;
          result[2] += 2057821;
          result[3] += 0;
          result[4] += 131700571;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41280000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 19365391;
          result[1] += 0;
          result[2] += 0;
          result[3] += 123800184;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41100000))) ) ) {
          result[0] += 139621412;
          result[1] += 0;
          result[2] += 3357629;
          result[3] += 186534;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 142890120;
          result[1] += 55091;
          result[2] += 176291;
          result[3] += 22036;
          result[4] += 0;
          result[5] += 0;
          result[6] += 22036;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x43230000))) ) ) {
          result[0] += 441869;
          result[1] += 4860559;
          result[2] += 0;
          result[3] += 137863147;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 95443717;
          result[1] += 0;
          result[2] += 0;
          result[3] += 47721858;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 135787718;
          result[1] += 0;
          result[2] += 0;
          result[3] += 7377857;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 2376557;
          result[1] += 0;
          result[2] += 880206;
          result[3] += 139864802;
          result[4] += 0;
          result[5] += 44010;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42180000))) ) ) {
          result[0] += 142486932;
          result[1] += 0;
          result[2] += 395875;
          result[3] += 197937;
          result[4] += 0;
          result[5] += 0;
          result[6] += 84830;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 143165576;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41100000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 142866692;
          result[5] += 298884;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41780000))) ) ) {
          result[0] += 0;
          result[1] += 35791394;
          result[2] += 95443717;
          result[3] += 0;
          result[4] += 0;
          result[5] += 11930464;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 89758;
          result[2] += 1256625;
          result[3] += 141684553;
          result[4] += 0;
          result[5] += 134638;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41300000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x44b9e000))) ) ) {
          result[0] += 95443717;
          result[1] += 0;
          result[2] += 0;
          result[3] += 47721858;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 3014012;
          result[2] += 0;
          result[3] += 140151564;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 143078253;
          result[1] += 0;
          result[2] += 87322;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 97185391;
          result[1] += 1567506;
          result[2] += 0;
          result[3] += 44412678;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 77955669;
          result[1] += 333767;
          result[2] += 1272490;
          result[3] += 63478485;
          result[4] += 0;
          result[5] += 41720;
          result[6] += 83441;
        } else {
          result[0] += 141380943;
          result[1] += 0;
          result[2] += 263306;
          result[3] += 1477441;
          result[4] += 0;
          result[5] += 0;
          result[6] += 43884;
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
      result[4] += 143165576;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40900000))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 142455012;
          result[1] += 0;
          result[2] += 710564;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 142979647;
          result[5] += 185929;
          result[6] += 0;
        } else {
          result[0] += 2964405;
          result[1] += 950129;
          result[2] += 2736374;
          result[3] += 136172620;
          result[4] += 0;
          result[5] += 342046;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 52935171;
          result[4] += 90230405;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 1321841;
          result[2] += 0;
          result[3] += 7829367;
          result[4] += 134014367;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41700000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42180000))) ) ) {
          result[0] += 142046220;
          result[1] += 0;
          result[2] += 932796;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 186559;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 60818;
          result[3] += 143104758;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42220000))) ) ) {
          result[0] += 105653104;
          result[1] += 140496;
          result[2] += 1264465;
          result[3] += 35686022;
          result[4] += 0;
          result[5] += 0;
          result[6] += 421488;
        } else {
          result[0] += 139365451;
          result[1] += 0;
          result[2] += 660891;
          result[3] += 3139233;
          result[4] += 0;
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
      result[4] += 143165576;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41780000))) ) ) {
          result[0] += 0;
          result[1] += 40086361;
          result[2] += 91625968;
          result[3] += 0;
          result[4] += 0;
          result[5] += 11453246;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 225457;
          result[2] += 721464;
          result[3] += 142038288;
          result[4] += 0;
          result[5] += 180366;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42380000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
          result[0] += 22369621;
          result[1] += 0;
          result[2] += 0;
          result[3] += 120795955;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 142394272;
          result[1] += 130287;
          result[2] += 359594;
          result[3] += 276210;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5211;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 459600;
          result[3] += 142660015;
          result[4] += 0;
          result[5] += 45960;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x439bc000))) ) ) {
          result[0] += 142671523;
          result[1] += 0;
          result[2] += 274473;
          result[3] += 137236;
          result[4] += 0;
          result[5] += 0;
          result[6] += 82342;
        } else {
          result[0] += 95443717;
          result[1] += 0;
          result[2] += 47721858;
          result[3] += 0;
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
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x420c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 44433;
          result[1] += 0;
          result[2] += 0;
          result[3] += 142765672;
          result[4] += 266602;
          result[5] += 88867;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
          result[0] += 141658570;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1507006;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 143165576;
          result[3] += 0;
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
          result[4] += 143101663;
          result[5] += 63913;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 28633115;
          result[2] += 102261126;
          result[3] += 0;
          result[4] += 0;
          result[5] += 12271335;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 142922127;
          result[1] += 0;
          result[2] += 226060;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 17389;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 9585600;
          result[1] += 4792800;
          result[2] += 6493471;
          result[3] += 122293705;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 83121875;
          result[1] += 0;
          result[2] += 224714;
          result[3] += 59661686;
          result[4] += 0;
          result[5] += 22471;
          result[6] += 134828;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 140412392;
          result[1] += 0;
          result[2] += 2753184;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 142503886;
          result[1] += 0;
          result[2] += 300768;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 360921;
        } else {
          result[0] += 127935196;
          result[1] += 0;
          result[2] += 397314;
          result[3] += 14833066;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 142844375;
          result[1] += 0;
          result[2] += 244112;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 77088;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x430d0000))) ) ) {
          result[0] += 143165576;
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
          result[4] += 143165576;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42960000))) ) ) {
          result[0] += 2737163;
          result[1] += 674373;
          result[2] += 3292530;
          result[3] += 110319608;
          result[4] += 25943554;
          result[5] += 198345;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 82239509;
          result[1] += 0;
          result[2] += 379749;
          result[3] += 60475114;
          result[4] += 0;
          result[5] += 0;
          result[6] += 71203;
        } else {
          result[0] += 138745836;
          result[1] += 0;
          result[2] += 679959;
          result[3] += 3569789;
          result[4] += 0;
          result[5] += 0;
          result[6] += 169989;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 1892056;
          result[2] += 0;
          result[3] += 141273520;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x3f800000))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 129160248;
          result[1] += 0;
          result[2] += 14005328;
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
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 28633115;
          result[1] += 114532461;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 44809;
          result[1] += 44809;
          result[2] += 1254659;
          result[3] += 135503193;
          result[4] += 5914821;
          result[5] += 403283;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 139075131;
          result[4] += 4090445;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 5804009;
          result[2] += 0;
          result[3] += 0;
          result[4] += 137361566;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 142915359;
          result[1] += 78192;
          result[2] += 135533;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 36489;
        } else {
          result[0] += 130290974;
          result[1] += 0;
          result[2] += 9784697;
          result[3] += 3089904;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 55063683;
          result[1] += 88101893;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 498518;
          result[3] += 142576417;
          result[4] += 0;
          result[5] += 90639;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42180000))) ) ) {
          result[0] += 142486261;
          result[1] += 0;
          result[2] += 339657;
          result[3] += 198133;
          result[4] += 0;
          result[5] += 0;
          result[6] += 141523;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 143165576;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 19848624;
          result[1] += 0;
          result[2] += 0;
          result[3] += 123218691;
          result[4] += 0;
          result[5] += 98260;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12481101;
          result[3] += 0;
          result[4] += 129950292;
          result[5] += 734182;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 2618882;
          result[2] += 0;
          result[3] += 33608992;
          result[4] += 106937701;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
          result[0] += 213679;
          result[1] += 0;
          result[2] += 0;
          result[3] += 132196671;
          result[4] += 10683998;
          result[5] += 71226;
          result[6] += 0;
        } else {
          result[0] += 143165576;
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
          result[4] += 143165576;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 109078534;
          result[1] += 3408704;
          result[2] += 28973985;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1704352;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42180000))) ) ) {
          result[0] += 0;
          result[1] += 2450266;
          result[2] += 0;
          result[3] += 140715309;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
          result[0] += 124012721;
          result[1] += 68247;
          result[2] += 409487;
          result[3] += 18613076;
          result[4] += 0;
          result[5] += 12408;
          result[6] += 49634;
        } else {
          result[0] += 142502772;
          result[1] += 0;
          result[2] += 662803;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 143060338;
          result[1] += 0;
          result[2] += 105237;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 119304647;
          result[1] += 0;
          result[2] += 23860929;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42520000))) ) ) {
          result[0] += 126160355;
          result[1] += 0;
          result[2] += 0;
          result[3] += 17005220;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 140801751;
          result[1] += 0;
          result[2] += 411100;
          result[3] += 1747175;
          result[4] += 0;
          result[5] += 0;
          result[6] += 205550;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42400000))) ) ) {
          result[0] += 143165576;
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
          result[3] += 141883496;
          result[4] += 1282079;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
          result[0] += 37718425;
          result[1] += 1130525;
          result[2] += 0;
          result[3] += 104316626;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 77599892;
          result[1] += 0;
          result[2] += 4703023;
          result[3] += 60862660;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 923648;
          result[1] += 5541893;
          result[2] += 0;
          result[3] += 30942237;
          result[4] += 105757796;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 20132659;
          result[4] += 123032917;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
          result[0] += 35153888;
          result[1] += 364288;
          result[2] += 0;
          result[3] += 107647399;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 142690342;
          result[1] += 99224;
          result[2] += 167115;
          result[3] += 188004;
          result[4] += 0;
          result[5] += 0;
          result[6] += 20889;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42540000))) ) ) {
          result[0] += 2525669;
          result[1] += 0;
          result[2] += 1728089;
          result[3] += 138247167;
          result[4] += 0;
          result[5] += 664649;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5681173;
          result[3] += 0;
          result[4] += 137484402;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1180040;
          result[3] += 115872378;
          result[4] += 25846696;
          result[5] += 266460;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
          result[0] += 104120419;
          result[1] += 0;
          result[2] += 0;
          result[3] += 39045157;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 142649044;
          result[1] += 0;
          result[2] += 516532;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x42d80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 461229;
          result[3] += 140075340;
          result[4] += 2352269;
          result[5] += 276737;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 9168238;
          result[2] += 0;
          result[3] += 133997337;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12271335;
          result[3] += 0;
          result[4] += 130894241;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
          result[0] += 86209611;
          result[1] += 443237;
          result[2] += 0;
          result[3] += 56512727;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 141916279;
          result[1] += 184844;
          result[2] += 420681;
          result[3] += 592778;
          result[4] += 0;
          result[5] += 0;
          result[6] += 50991;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 847133;
          result[3] += 142318442;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42240000))) ) ) {
          result[0] += 143081000;
          result[1] += 0;
          result[2] += 84575;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 118937555;
          result[1] += 0;
          result[2] += 24228020;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42520000))) ) ) {
          result[0] += 125449434;
          result[1] += 0;
          result[2] += 0;
          result[3] += 17716141;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 140679710;
          result[1] += 0;
          result[2] += 659515;
          result[3] += 1623422;
          result[4] += 0;
          result[5] += 0;
          result[6] += 202927;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45cb4000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
          result[0] += 142809963;
          result[1] += 0;
          result[2] += 355612;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
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
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41ec0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 128970689;
          result[4] += 14194887;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 142544467;
          result[1] += 0;
          result[2] += 414072;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 207036;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 66473926;
          result[1] += 782967;
          result[2] += 1213599;
          result[3] += 74029561;
          result[4] += 548077;
          result[5] += 0;
          result[6] += 117445;
        } else {
          result[0] += 97637062;
          result[1] += 465254;
          result[2] += 398789;
          result[3] += 42005870;
          result[4] += 2592134;
          result[5] += 66464;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
          result[0] += 68131207;
          result[1] += 0;
          result[2] += 1280586;
          result[3] += 58846954;
          result[4] += 14806782;
          result[5] += 40018;
          result[6] += 60027;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4051855;
          result[3] += 137377210;
          result[4] += 385891;
          result[5] += 1350618;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0;
          result[1] += 2063647;
          result[2] += 0;
          result[3] += 28633115;
          result[4] += 112468813;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 115270;
          result[2] += 0;
          result[3] += 6916211;
          result[4] += 136134094;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45aa3c00))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42020000))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 141548495;
          result[1] += 0;
          result[2] += 1617081;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 143024401;
          result[1] += 0;
          result[2] += 141175;
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
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 143165576;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41b40000))) ) ) {
          result[0] += 143165576;
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
          result[4] += 143052758;
          result[5] += 112817;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
          result[0] += 72097772;
          result[1] += 0;
          result[2] += 0;
          result[3] += 71067804;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 109120;
          result[1] += 1309441;
          result[2] += 2546135;
          result[3] += 138982639;
          result[4] += 0;
          result[5] += 218240;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 141909907;
          result[1] += 0;
          result[2] += 405677;
          result[3] += 656811;
          result[4] += 0;
          result[5] += 0;
          result[6] += 193179;
        } else {
          result[0] += 129227342;
          result[1] += 199117;
          result[2] += 3584117;
          result[3] += 10154999;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 143165576;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
          result[0] += 23378003;
          result[1] += 658535;
          result[2] += 0;
          result[3] += 90746165;
          result[4] += 28382871;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 64891760;
          result[1] += 0;
          result[2] += 2766123;
          result[3] += 44108454;
          result[4] += 31399238;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 4894549;
          result[1] += 13460011;
          result[2] += 0;
          result[3] += 124811015;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41c80000))) ) ) {
          result[0] += 91894727;
          result[1] += 0;
          result[2] += 413474;
          result[3] += 50650637;
          result[4] += 0;
          result[5] += 103368;
          result[6] += 103368;
        } else {
          result[0] += 135857058;
          result[1] += 156499;
          result[2] += 156499;
          result[3] += 6964219;
          result[4] += 15649;
          result[5] += 0;
          result[6] += 15649;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41100000))) ) ) {
          result[0] += 93434376;
          result[1] += 0;
          result[2] += 15070060;
          result[3] += 1507006;
          result[4] += 33154133;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 142696013;
          result[1] += 8537;
          result[2] += 42687;
          result[3] += 401263;
          result[4] += 8537;
          result[5] += 8537;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42440000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 140200258;
          result[1] += 0;
          result[2] += 1541965;
          result[3] += 0;
          result[4] += 711676;
          result[5] += 355838;
          result[6] += 355838;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7238708;
          result[3] += 603225;
          result[4] += 134921491;
          result[5] += 402150;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41100000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0;
          result[1] += 756346;
          result[2] += 108049;
          result[3] += 94111107;
          result[4] += 48190073;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 141757390;
          result[1] += 0;
          result[2] += 1408185;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 104374444;
          result[1] += 0;
          result[2] += 82184;
          result[3] += 38626762;
          result[4] += 82184;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 140822531;
          result[1] += 0;
          result[2] += 18449;
          result[3] += 2269248;
          result[4] += 0;
          result[5] += 55347;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 93290204;
          result[1] += 0;
          result[2] += 0;
          result[3] += 49875372;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 29444032;
          result[1] += 0;
          result[2] += 0;
          result[3] += 113721543;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 134200217;
          result[1] += 0;
          result[2] += 7144270;
          result[3] += 0;
          result[4] += 980586;
          result[5] += 280167;
          result[6] += 560334;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 46717188;
          result[1] += 137000;
          result[2] += 2329009;
          result[3] += 93845377;
          result[4] += 0;
          result[5] += 137000;
          result[6] += 0;
        } else {
          result[0] += 20452225;
          result[1] += 0;
          result[2] += 0;
          result[3] += 122501411;
          result[4] += 0;
          result[5] += 211940;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3fc00000))) ) ) {
          result[0] += 142961574;
          result[1] += 0;
          result[2] += 204001;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 136269807;
          result[1] += 901151;
          result[2] += 1292956;
          result[3] += 4662480;
          result[4] += 0;
          result[5] += 0;
          result[6] += 39180;
        } else {
          result[0] += 63984370;
          result[1] += 0;
          result[2] += 700718;
          result[3] += 78480487;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
          result[0] += 0;
          result[1] += 3792465;
          result[2] += 0;
          result[3] += 16117978;
          result[4] += 123255132;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 555828;
          result[2] += 1588081;
          result[3] += 141021666;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 75965407;
          result[1] += 0;
          result[2] += 0;
          result[3] += 67200168;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 3408704;
          result[3] += 96807199;
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
          result[4] += 143165576;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
          result[0] += 139137343;
          result[1] += 0;
          result[2] += 93318;
          result[3] += 3919361;
          result[4] += 0;
          result[5] += 0;
          result[6] += 15553;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1623806;
          result[3] += 131528299;
          result[4] += 9472202;
          result[5] += 541268;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
          result[0] += 139863259;
          result[1] += 157969;
          result[2] += 195581;
          result[3] += 2888586;
          result[4] += 15044;
          result[5] += 0;
          result[6] += 45134;
        } else {
          result[0] += 4786058;
          result[1] += 0;
          result[2] += 4369879;
          result[3] += 111119793;
          result[4] += 22889845;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
          result[0] += 47062;
          result[1] += 0;
          result[2] += 0;
          result[3] += 142553757;
          result[4] += 423566;
          result[5] += 141188;
          result[6] += 0;
        } else {
          result[0] += 69005597;
          result[1] += 0;
          result[2] += 2419403;
          result[3] += 0;
          result[4] += 71740575;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42890000))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 139506392;
          result[1] += 0;
          result[2] += 2973087;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 686097;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
          result[0] += 38977;
          result[1] += 701600;
          result[2] += 194889;
          result[3] += 132563606;
          result[4] += 9666502;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 142615409;
          result[1] += 104793;
          result[2] += 375510;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 69862;
        } else {
          result[0] += 50529027;
          result[1] += 92636549;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 143139300;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 26276;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 72884293;
          result[1] += 0;
          result[2] += 19522578;
          result[3] += 0;
          result[4] += 50758704;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 88293752;
          result[1] += 0;
          result[2] += 7482521;
          result[3] += 47389302;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42440000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5710868;
          result[3] += 0;
          result[4] += 136273148;
          result[5] += 1181559;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x439bc000))) ) ) {
          result[0] += 142517181;
          result[1] += 0;
          result[2] += 583555;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 64839;
        } else {
          result[0] += 71582788;
          result[1] += 0;
          result[2] += 71582788;
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
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x453af800))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40900000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 142876936;
          result[5] += 288640;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ea0000))) ) ) {
          result[0] += 0;
          result[1] += 89478;
          result[2] += 1386916;
          result[3] += 141420746;
          result[4] += 0;
          result[5] += 268435;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 132939463;
          result[1] += 10226112;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 142653587;
          result[1] += 87917;
          result[2] += 372355;
          result[3] += 15514;
          result[4] += 0;
          result[5] += 0;
          result[6] += 36201;
        } else {
          result[0] += 116717317;
          result[1] += 0;
          result[2] += 1724886;
          result[3] += 24723372;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 22521300;
          result[1] += 0;
          result[2] += 0;
          result[3] += 120644276;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 113025455;
          result[1] += 0;
          result[2] += 22605091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 7535030;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 141815594;
          result[1] += 0;
          result[2] += 877488;
          result[3] += 269996;
          result[4] += 0;
          result[5] += 0;
          result[6] += 202497;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
          result[0] += 141699091;
          result[1] += 0;
          result[2] += 1466484;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 105722271;
          result[1] += 0;
          result[2] += 33038209;
          result[3] += 4405094;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41980000))) ) ) {
          result[0] += 46755340;
          result[1] += 2899555;
          result[2] += 0;
          result[3] += 93510680;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 3713763;
          result[1] += 0;
          result[2] += 742752;
          result[3] += 138709060;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 71314687;
          result[4] += 71850888;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 158019;
          result[1] += 474058;
          result[2] += 0;
          result[3] += 16908075;
          result[4] += 125625423;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40e00000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
          result[0] += 142948510;
          result[1] += 10853;
          result[2] += 184505;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 21706;
        } else {
          result[0] += 141254882;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1910694;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0;
          result[1] += 1105525;
          result[2] += 6080391;
          result[3] += 135979659;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1411491;
          result[3] += 0;
          result[4] += 141350801;
          result[5] += 403283;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 98478055;
          result[1] += 228288;
          result[2] += 656330;
          result[3] += 39807849;
          result[4] += 3681155;
          result[5] += 114144;
          result[6] += 199752;
        } else {
          result[0] += 386803;
          result[1] += 0;
          result[2] += 773606;
          result[3] += 141086508;
          result[4] += 676905;
          result[5] += 241752;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 134599273;
          result[1] += 0;
          result[2] += 98463;
          result[3] += 8467840;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 142697303;
          result[1] += 0;
          result[2] += 270157;
          result[3] += 126073;
          result[4] += 0;
          result[5] += 0;
          result[6] += 72042;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 140464339;
          result[1] += 0;
          result[2] += 1906755;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 794481;
        } else {
          result[0] += 143137844;
          result[1] += 0;
          result[2] += 27731;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45a27400))) ) ) {
        result[0] += 143165576;
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
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 3829277;
          result[1] += 947025;
          result[2] += 699975;
          result[3] += 127230840;
          result[4] += 10376107;
          result[5] += 82350;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1740384;
          result[3] += 26635456;
          result[4] += 114487059;
          result[5] += 302675;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 142378428;
          result[1] += 47705;
          result[2] += 524765;
          result[3] += 47705;
          result[4] += 0;
          result[5] += 0;
          result[6] += 166970;
        } else {
          result[0] += 135115548;
          result[1] += 0;
          result[2] += 1249142;
          result[3] += 6384504;
          result[4] += 0;
          result[5] += 208190;
          result[6] += 208190;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41ac0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 142753589;
          result[5] += 411987;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 124076832;
          result[3] += 0;
          result[4] += 0;
          result[5] += 19088743;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
          result[0] += 0;
          result[1] += 141982;
          result[2] += 0;
          result[3] += 143023594;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 143165576;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_3/test_data.csv", "r");
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
