
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
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1228889;
          result[3] += 614444;
          result[4] += 137021131;
          result[5] += 4301111;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 184254;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4237848;
          result[4] += 6080391;
          result[5] += 132663082;
        } else {
          result[0] += 15115090;
          result[1] += 5133427;
          result[2] += 0;
          result[3] += 43348939;
          result[4] += 17966994;
          result[5] += 61601124;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
        } else {
          result[0] += 743717;
          result[1] += 139446990;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2974869;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          result[0] += 108697703;
          result[1] += 7321606;
          result[2] += 563200;
          result[3] += 2478082;
          result[4] += 19712018;
          result[5] += 4392964;
        } else {
          result[0] += 26973224;
          result[1] += 4668442;
          result[2] += 29826161;
          result[3] += 38644331;
          result[4] += 8040095;
          result[5] += 35013320;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 20452225;
          result[4] += 0;
          result[5] += 122713351;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 44739242;
          result[3] += 87241523;
          result[4] += 0;
          result[5] += 11184810;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 71582788;
          result[3] += 35791394;
          result[4] += 0;
          result[5] += 35791394;
        } else {
          result[0] += 2651214;
          result[1] += 0;
          result[2] += 127258290;
          result[3] += 2651214;
          result[4] += 0;
          result[5] += 10604857;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42660000))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26030104;
          result[3] += 26030104;
          result[4] += 65075262;
          result[5] += 26030104;
        } else {
          result[0] += 659749;
          result[1] += 0;
          result[2] += 133764150;
          result[3] += 7587115;
          result[4] += 0;
          result[5] += 1154561;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 71582788;
          result[2] += 0;
          result[3] += 0;
          result[4] += 71582788;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 142850926;
          result[2] += 0;
          result[3] += 0;
          result[4] += 314649;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 516843;
          result[1] += 4134745;
          result[2] += 516843;
          result[3] += 516843;
          result[4] += 132311868;
          result[5] += 5168432;
        } else {
          result[0] += 3303820;
          result[1] += 2753184;
          result[2] += 2753184;
          result[3] += 24117893;
          result[4] += 6938024;
          result[5] += 103299469;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 105885013;
          result[1] += 5032362;
          result[2] += 821610;
          result[3] += 5751271;
          result[4] += 19102437;
          result[5] += 6572881;
        } else {
          result[0] += 23860929;
          result[1] += 6710886;
          result[2] += 38028356;
          result[3] += 35791394;
          result[4] += 4846751;
          result[5] += 33927259;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42740000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3408704;
          result[3] += 0;
          result[4] += 20452225;
          result[5] += 119304647;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 4618244;
          result[2] += 13854733;
          result[3] += 106219621;
          result[4] += 0;
          result[5] += 18472977;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 67013674;
          result[3] += 30460760;
          result[4] += 0;
          result[5] += 45691141;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 143165576;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 105317205;
          result[3] += 32911626;
          result[4] += 0;
          result[5] += 4936744;
        } else {
          result[0] += 545739;
          result[1] += 0;
          result[2] += 135343315;
          result[3] += 6730783;
          result[4] += 0;
          result[5] += 545739;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 538216;
          result[1] += 0;
          result[2] += 0;
          result[3] += 538216;
          result[4] += 133477680;
          result[5] += 8611463;
        } else {
          result[0] += 0;
          result[1] += 71582788;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 17895697;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 383308;
          result[1] += 0;
          result[2] += 958270;
          result[3] += 4024735;
          result[4] += 2874810;
          result[5] += 134924452;
        } else {
          result[0] += 11971183;
          result[1] += 5619126;
          result[2] += 5130507;
          result[3] += 46174563;
          result[4] += 10505323;
          result[5] += 63764872;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 23860929;
          result[2] += 0;
          result[3] += 0;
          result[4] += 119304647;
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
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42890000))) ) ) {
          result[0] += 16702650;
          result[1] += 11930464;
          result[2] += 3976821;
          result[3] += 1590728;
          result[4] += 106578818;
          result[5] += 2386092;
        } else {
          result[0] += 96830981;
          result[1] += 2589558;
          result[2] += 9063453;
          result[3] += 14427538;
          result[4] += 9155938;
          result[5] += 11098106;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42800000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 57266230;
          result[5] += 0;
        } else {
          result[0] += 5113056;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 138052520;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 5052902;
          result[2] += 21895911;
          result[3] += 97689452;
          result[4] += 0;
          result[5] += 18527309;
        } else {
          result[0] += 9296466;
          result[1] += 0;
          result[2] += 105979712;
          result[3] += 14874345;
          result[4] += 0;
          result[5] += 13015052;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39768215;
          result[3] += 55675501;
          result[4] += 7953643;
          result[5] += 39768215;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 112654879;
          result[3] += 14081859;
          result[4] += 0;
          result[5] += 16428836;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1812222;
          result[1] += 0;
          result[2] += 122325017;
          result[3] += 19028336;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 226886;
          result[1] += 0;
          result[2] += 139081613;
          result[3] += 3630188;
          result[4] += 0;
          result[5] += 226886;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 990765;
          result[2] += 0;
          result[3] += 0;
          result[4] += 136725602;
          result[5] += 5449208;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3919518;
          result[4] += 3919518;
          result[5] += 135326539;
        } else {
          result[0] += 13845800;
          result[1] += 6645984;
          result[2] += 0;
          result[3] += 43475813;
          result[4] += 17445708;
          result[5] += 61752269;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 68641029;
          result[2] += 0;
          result[3] += 0;
          result[4] += 74524546;
          result[5] += 0;
        } else {
          result[0] += 336860;
          result[1] += 140133834;
          result[2] += 673720;
          result[3] += 673720;
          result[4] += 1347440;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 51323508;
          result[1] += 4389510;
          result[2] += 3714201;
          result[3] += 21609898;
          result[4] += 16545078;
          result[5] += 45583379;
        } else {
          result[0] += 117310506;
          result[1] += 6463767;
          result[2] += 2062904;
          result[3] += 3713228;
          result[4] += 11552265;
          result[5] += 2062904;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4936744;
          result[3] += 24683720;
          result[4] += 12341860;
          result[5] += 101203252;
        } else {
          result[0] += 0;
          result[1] += 3534952;
          result[2] += 10604857;
          result[3] += 109583527;
          result[4] += 5302428;
          result[5] += 14139810;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 1908874;
          result[1] += 19088743;
          result[2] += 13362120;
          result[3] += 66810602;
          result[4] += 5726623;
          result[5] += 36268612;
        } else {
          result[0] += 1908874;
          result[1] += 0;
          result[2] += 97352592;
          result[3] += 32450864;
          result[4] += 0;
          result[5] += 11453246;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 1255838;
          result[1] += 313959;
          result[2] += 116479010;
          result[3] += 21035293;
          result[4] += 627919;
          result[5] += 3453555;
        } else {
          result[0] += 103212392;
          result[1] += 0;
          result[2] += 29964888;
          result[3] += 9988296;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 5436667;
          result[1] += 0;
          result[2] += 110545571;
          result[3] += 18122224;
          result[4] += 0;
          result[5] += 9061112;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 141124519;
          result[3] += 2041057;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 142477280;
          result[5] += 688296;
        } else {
          result[0] += 4936744;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 98734880;
          result[5] += 39493952;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a50000))) ) ) {
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
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
          result[0] += 111351003;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 27837750;
          result[5] += 3976821;
        } else {
          result[0] += 323538;
          result[1] += 323538;
          result[2] += 485307;
          result[3] += 4529532;
          result[4] += 5661915;
          result[5] += 131841745;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 14259519;
          result[1] += 2281523;
          result[2] += 1711142;
          result[3] += 29089419;
          result[4] += 11977996;
          result[5] += 83845975;
        } else {
          result[0] += 799807;
          result[1] += 3999038;
          result[2] += 799807;
          result[3] += 103974999;
          result[4] += 0;
          result[5] += 33591922;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 5052902;
          result[1] += 48002575;
          result[2] += 0;
          result[3] += 0;
          result[4] += 87583646;
          result[5] += 2526451;
        } else {
          result[0] += 0;
          result[1] += 142463784;
          result[2] += 0;
          result[3] += 0;
          result[4] += 701792;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
          result[0] += 24183374;
          result[1] += 16444694;
          result[2] += 0;
          result[3] += 40628069;
          result[4] += 11608019;
          result[5] += 50301418;
        } else {
          result[0] += 119935888;
          result[1] += 2903710;
          result[2] += 1136234;
          result[3] += 4797435;
          result[4] += 11614843;
          result[5] += 2777462;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 2641431;
          result[2] += 39621469;
          result[3] += 71846931;
          result[4] += 528286;
          result[5] += 28527458;
        } else {
          result[0] += 1507006;
          result[1] += 3014012;
          result[2] += 105490424;
          result[3] += 24112097;
          result[4] += 0;
          result[5] += 9042036;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 48885806;
          result[1] += 0;
          result[2] += 73328709;
          result[3] += 1745921;
          result[4] += 10475529;
          result[5] += 8729608;
        } else {
          result[0] += 466844;
          result[1] += 0;
          result[2] += 133206232;
          result[3] += 7469508;
          result[4] += 466844;
          result[5] += 1556147;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x423e0000))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 530242;
          result[1] += 2120971;
          result[2] += 0;
          result[3] += 530242;
          result[4] += 138393390;
          result[5] += 1590728;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 109479558;
          result[5] += 33686018;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 134400337;
          result[5] += 8765239;
        } else {
          result[0] += 3287384;
          result[1] += 164369;
          result[2] += 0;
          result[3] += 5424183;
          result[4] += 6903506;
          result[5] += 127386132;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42820000))) ) ) {
          result[0] += 75487303;
          result[1] += 31236125;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36442146;
          result[5] += 0;
        } else {
          result[0] += 1655093;
          result[1] += 1655093;
          result[2] += 11999426;
          result[3] += 66203734;
          result[4] += 4137733;
          result[5] += 57514494;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
        } else {
          result[0] += 647808;
          result[1] += 142193864;
          result[2] += 0;
          result[3] += 0;
          result[4] += 323904;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 16361780;
          result[1] += 27815026;
          result[2] += 0;
          result[3] += 0;
          result[4] += 92444057;
          result[5] += 6544712;
        } else {
          result[0] += 107399876;
          result[1] += 1438850;
          result[2] += 3905450;
          result[3] += 8735875;
          result[4] += 9146975;
          result[5] += 12538550;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 8994695;
          result[2] += 35978783;
          result[3] += 74206241;
          result[4] += 3747789;
          result[5] += 20238065;
        } else {
          result[0] += 30140121;
          result[1] += 5023353;
          result[2] += 85397010;
          result[3] += 2511676;
          result[4] += 12558383;
          result[5] += 7535030;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 98997473;
          result[3] += 27414684;
          result[4] += 1523038;
          result[5] += 15230380;
        } else {
          result[0] += 3042479;
          result[1] += 0;
          result[2] += 132009817;
          result[3] += 7099119;
          result[4] += 0;
          result[5] += 1014159;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 2009341;
          result[2] += 0;
          result[3] += 1004670;
          result[4] += 134625875;
          result[5] += 5525688;
        } else {
          result[0] += 0;
          result[1] += 47721858;
          result[2] += 0;
          result[3] += 47721858;
          result[4] += 0;
          result[5] += 47721858;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 5609099;
          result[1] += 1602599;
          result[2] += 133549;
          result[3] += 6677498;
          result[4] += 14824047;
          result[5] += 114318781;
        } else {
          result[0] += 3112295;
          result[1] += 0;
          result[2] += 4979672;
          result[3] += 95858690;
          result[4] += 0;
          result[5] += 39214918;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 1234186;
          result[1] += 28386278;
          result[2] += 0;
          result[3] += 4936744;
          result[4] += 104905810;
          result[5] += 3702558;
        } else {
          result[0] += 706990;
          result[1] += 142458585;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 116322030;
          result[1] += 7722115;
          result[2] += 245146;
          result[3] += 3309478;
          result[4] += 12379900;
          result[5] += 3186904;
        } else {
          result[0] += 21906801;
          result[1] += 3702558;
          result[2] += 20981162;
          result[3] += 38876859;
          result[4] += 7096569;
          result[5] += 50601626;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 118267215;
          result[4] += 0;
          result[5] += 24898361;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 65617555;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 23860929;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 115456110;
          result[3] += 9236488;
          result[4] += 0;
          result[5] += 18472977;
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
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37347541;
          result[3] += 74695083;
          result[4] += 0;
          result[5] += 31122951;
        } else {
          result[0] += 6983686;
          result[1] += 0;
          result[2] += 104755299;
          result[3] += 24442903;
          result[4] += 0;
          result[5] += 6983686;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 7238708;
          result[1] += 0;
          result[2] += 111797837;
          result[3] += 21716126;
          result[4] += 0;
          result[5] += 2412902;
        } else {
          result[0] += 1032940;
          result[1] += 0;
          result[2] += 138207461;
          result[3] += 3305410;
          result[4] += 0;
          result[5] += 619764;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 1037431;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1037431;
          result[4] += 126566669;
          result[5] += 14524043;
        } else {
          result[0] += 0;
          result[1] += 65075262;
          result[2] += 0;
          result[3] += 58567735;
          result[4] += 19522578;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 10204354;
          result[1] += 152303;
          result[2] += 152303;
          result[3] += 5482936;
          result[4] += 10204354;
          result[5] += 116969322;
        } else {
          result[0] += 1255838;
          result[1] += 418612;
          result[2] += 1255838;
          result[3] += 78280592;
          result[4] += 837225;
          result[5] += 61117468;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 108912660;
          result[1] += 7431141;
          result[2] += 116111;
          result[3] += 3599458;
          result[4] += 19855079;
          result[5] += 3251124;
        } else {
          result[0] += 30830966;
          result[1] += 3357828;
          result[2] += 38462393;
          result[3] += 39072907;
          result[4] += 6105141;
          result[5] += 25336338;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428e0000))) ) ) {
          result[0] += 0;
          result[1] += 78090314;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 65075262;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19822925;
          result[3] += 107924819;
          result[4] += 0;
          result[5] += 15417831;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 5965232;
          result[2] += 17895697;
          result[3] += 0;
          result[4] += 5965232;
          result[5] += 113339414;
        } else {
          result[0] += 8810189;
          result[1] += 0;
          result[2] += 101317177;
          result[3] += 15417831;
          result[4] += 0;
          result[5] += 17620378;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 83382148;
          result[3] += 51917187;
          result[4] += 1573248;
          result[5] += 6292992;
        } else {
          result[0] += 1544952;
          result[1] += 0;
          result[2] += 123596181;
          result[3] += 14934538;
          result[4] += 0;
          result[5] += 3089904;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 262208;
          result[1] += 0;
          result[2] += 139756872;
          result[3] += 2359872;
          result[4] += 0;
          result[5] += 786624;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
          result[0] += 662803;
          result[1] += 1325607;
          result[2] += 0;
          result[3] += 0;
          result[4] += 141177165;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 71582788;
          result[5] += 71582788;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
          result[0] += 139874413;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3291162;
          result[5] += 0;
        } else {
          result[0] += 5464334;
          result[1] += 1092866;
          result[2] += 0;
          result[3] += 13114403;
          result[4] += 75407822;
          result[5] += 48086147;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42780000))) ) ) {
          result[0] += 0;
          result[1] += 25565281;
          result[2] += 0;
          result[3] += 17895697;
          result[4] += 74139316;
          result[5] += 25565281;
        } else {
          result[0] += 418205;
          result[1] += 278803;
          result[2] += 0;
          result[3] += 10873334;
          result[4] += 6691283;
          result[5] += 124903949;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 13015052;
          result[4] += 0;
          result[5] += 130150524;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 672138;
          result[3] += 105525800;
          result[4] += 0;
          result[5] += 36967637;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
          result[0] += 112131266;
          result[1] += 7248889;
          result[2] += 453055;
          result[3] += 4304028;
          result[4] += 17669169;
          result[5] += 1359166;
        } else {
          result[0] += 9177280;
          result[1] += 9177280;
          result[2] += 36709122;
          result[3] += 37626850;
          result[4] += 8259552;
          result[5] += 42215490;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
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
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42900000))) ) ) {
          result[0] += 0;
          result[1] += 76354974;
          result[2] += 9544371;
          result[3] += 0;
          result[4] += 54084773;
          result[5] += 3181457;
        } else {
          result[0] += 3869339;
          result[1] += 2579559;
          result[2] += 34824059;
          result[3] += 60619658;
          result[4] += 5804009;
          result[5] += 35468949;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
          result[0] += 71582788;
          result[1] += 0;
          result[2] += 66810602;
          result[3] += 0;
          result[4] += 0;
          result[5] += 4772185;
        } else {
          result[0] += 160140;
          result[1] += 0;
          result[2] += 133717289;
          result[3] += 8807725;
          result[4] += 0;
          result[5] += 480421;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 8339742;
          result[1] += 463319;
          result[2] += 0;
          result[3] += 463319;
          result[4] += 117219711;
          result[5] += 16679484;
        } else {
          result[0] += 65075262;
          result[1] += 23860929;
          result[2] += 10845877;
          result[3] += 8676701;
          result[4] += 13015052;
          result[5] += 21691754;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 449734;
          result[2] += 0;
          result[3] += 7945314;
          result[4] += 13492043;
          result[5] += 121278483;
        } else {
          result[0] += 1507006;
          result[1] += 7032694;
          result[2] += 502335;
          result[3] += 71331620;
          result[4] += 14065389;
          result[5] += 48726529;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 28633115;
          result[2] += 0;
          result[3] += 0;
          result[4] += 114532461;
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
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
          result[0] += 31716681;
          result[1] += 5726623;
          result[2] += 3524075;
          result[3] += 29073624;
          result[4] += 14536812;
          result[5] += 58587758;
        } else {
          result[0] += 110041863;
          result[1] += 4557289;
          result[2] += 4668442;
          result[3] += 5335363;
          result[4] += 15450322;
          result[5] += 3112295;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 87688915;
          result[4] += 0;
          result[5] += 28633115;
        } else {
          result[0] += 16519104;
          result[1] += 0;
          result[2] += 104620998;
          result[3] += 11012736;
          result[4] += 0;
          result[5] += 11012736;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 71582788;
          result[4] += 0;
          result[5] += 71582788;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 117600294;
          result[3] += 20452225;
          result[4] += 0;
          result[5] += 5113056;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 52060209;
          result[1] += 0;
          result[2] += 13015052;
          result[3] += 78090314;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 5487182;
          result[1] += 0;
          result[2] += 114731995;
          result[3] += 17958051;
          result[4] += 1995339;
          result[5] += 2993008;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 136830816;
          result[3] += 5701284;
          result[4] += 0;
          result[5] += 633476;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 142421859;
          result[3] += 743717;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
          result[0] += 2584216;
          result[1] += 7235805;
          result[2] += 0;
          result[3] += 0;
          result[4] += 129727652;
          result[5] += 3617902;
        } else {
          result[0] += 70907478;
          result[1] += 675309;
          result[2] += 6077783;
          result[3] += 4051855;
          result[4] += 39843250;
          result[5] += 21609898;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 6758126;
          result[4] += 9781499;
          result[5] += 126625950;
        } else {
          result[0] += 3303820;
          result[1] += 3303820;
          result[2] += 4955731;
          result[3] += 42949672;
          result[4] += 36342030;
          result[5] += 52310499;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
          result[0] += 12550229;
          result[1] += 1394469;
          result[2] += 0;
          result[3] += 55778796;
          result[4] += 14409522;
          result[5] += 59032559;
        } else {
          result[0] += 108252672;
          result[1] += 11448711;
          result[2] += 5440972;
          result[3] += 5894386;
          result[4] += 10315176;
          result[5] += 1813657;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 10737418;
          result[1] += 107374182;
          result[2] += 0;
          result[3] += 0;
          result[4] += 25053975;
          result[5] += 0;
        } else {
          result[0] += 377745;
          result[1] += 142787830;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1745921;
          result[3] += 57615414;
          result[4] += 8729608;
          result[5] += 75074631;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36984440;
          result[3] += 83513252;
          result[4] += 0;
          result[5] += 22667882;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 7158278;
          result[5] += 50107951;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 130150524;
          result[3] += 0;
          result[4] += 0;
          result[5] += 13015052;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 6817408;
          result[2] += 13634816;
          result[3] += 47721858;
          result[4] += 0;
          result[5] += 74991492;
        } else {
          result[0] += 23860929;
          result[1] += 12848192;
          result[2] += 88101893;
          result[3] += 5506368;
          result[4] += 7341824;
          result[5] += 5506368;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 84430981;
          result[3] += 45886402;
          result[4] += 3670912;
          result[5] += 9177280;
        } else {
          result[0] += 336860;
          result[1] += 0;
          result[2] += 135586222;
          result[3] += 6905633;
          result[4] += 0;
          result[5] += 336860;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 2740011;
          result[2] += 0;
          result[3] += 0;
          result[4] += 132890535;
          result[5] += 7535030;
        } else {
          result[0] += 0;
          result[1] += 93952409;
          result[2] += 0;
          result[3] += 8947848;
          result[4] += 0;
          result[5] += 40265318;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2559793;
          result[4] += 7313694;
          result[5] += 133292088;
        } else {
          result[0] += 9115411;
          result[1] += 2412902;
          result[2] += 5093906;
          result[3] += 51475263;
          result[4] += 10724013;
          result[5] += 64344079;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 22605091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 120560485;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 142097176;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1068399;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 105408839;
          result[1] += 2878812;
          result[2] += 775064;
          result[3] += 4207495;
          result[4] += 24359185;
          result[5] += 5536178;
        } else {
          result[0] += 29888429;
          result[1] += 10460950;
          result[2] += 29589545;
          result[3] += 30785082;
          result[4] += 7472107;
          result[5] += 34969462;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42800000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 5726623;
          result[2] += 8589934;
          result[3] += 20043180;
          result[4] += 0;
          result[5] += 108805838;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 143165576;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 22025473;
          result[1] += 0;
          result[2] += 77089156;
          result[3] += 0;
          result[4] += 0;
          result[5] += 44050946;
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 5174659;
          result[1] += 3449772;
          result[2] += 53471480;
          result[3] += 68995458;
          result[4] += 0;
          result[5] += 12074205;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 143165576;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1751260;
          result[1] += 437815;
          result[2] += 119523554;
          result[3] += 17512608;
          result[4] += 0;
          result[5] += 3940336;
        } else {
          result[0] += 259828;
          result[1] += 0;
          result[2] += 139527975;
          result[3] += 3377772;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1018972;
          result[1] += 509486;
          result[2] += 0;
          result[3] += 0;
          result[4] += 129409453;
          result[5] += 12227664;
        } else {
          result[0] += 85125477;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3869339;
          result[4] += 21281369;
          result[5] += 32889389;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 7251243;
          result[4] += 6879384;
          result[5] += 129034948;
        } else {
          result[0] += 365218;
          result[1] += 7304366;
          result[2] += 5843492;
          result[3] += 47843598;
          result[4] += 7669584;
          result[5] += 74139316;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 10226112;
          result[2] += 0;
          result[3] += 0;
          result[4] += 132939463;
          result[5] += 0;
        } else {
          result[0] += 1720740;
          result[1] += 138347504;
          result[2] += 0;
          result[3] += 1032444;
          result[4] += 2064888;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
          result[0] += 948116;
          result[1] += 68264380;
          result[2] += 948116;
          result[3] += 7584931;
          result[4] += 65420031;
          result[5] += 0;
        } else {
          result[0] += 110608663;
          result[1] += 318145;
          result[2] += 5090331;
          result[3] += 10074614;
          result[4] += 9756468;
          result[5] += 7317351;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4693953;
          result[3] += 16428836;
          result[4] += 14081859;
          result[5] += 107960926;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9269713;
          result[3] += 74157708;
          result[4] += 0;
          result[5] += 59738154;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 104988089;
          result[3] += 23860929;
          result[4] += 0;
          result[5] += 14316557;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 4090445;
          result[1] += 16361780;
          result[2] += 20452225;
          result[3] += 44994895;
          result[4] += 32723560;
          result[5] += 24542670;
        } else {
          result[0] += 0;
          result[1] += 2169175;
          result[2] += 108458770;
          result[3] += 15184227;
          result[4] += 2169175;
          result[5] += 15184227;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 1590728;
          result[2] += 71582788;
          result[3] += 58856959;
          result[4] += 0;
          result[5] += 11135100;
        } else {
          result[0] += 1409726;
          result[1] += 0;
          result[2] += 134237307;
          result[3] += 7361906;
          result[4] += 0;
          result[5] += 156636;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 2254576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 136965492;
          result[5] += 3945508;
        } else {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 5825659;
          result[1] += 873848;
          result[2] += 0;
          result[3] += 5534376;
          result[4] += 11796960;
          result[5] += 119134732;
        } else {
          result[0] += 5487182;
          result[1] += 0;
          result[2] += 4988347;
          result[3] += 75324048;
          result[4] += 997669;
          result[5] += 56368328;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
        } else {
          result[0] += 2517196;
          result[1] += 135613985;
          result[2] += 314649;
          result[3] += 2517196;
          result[4] += 2202547;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 111896963;
          result[1] += 4243597;
          result[2] += 1451757;
          result[3] += 4020250;
          result[4] += 16304348;
          result[5] += 5248659;
        } else {
          result[0] += 28819044;
          result[1] += 4648233;
          result[2] += 22776341;
          result[3] += 51130563;
          result[4] += 8366819;
          result[5] += 27424574;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 114532461;
          result[5] += 28633115;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 37896770;
          result[4] += 0;
          result[5] += 105268806;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 14198238;
          result[2] += 29579664;
          result[3] += 70991194;
          result[4] += 3549559;
          result[5] += 24846918;
        } else {
          result[0] += 4338350;
          result[1] += 0;
          result[2] += 104120419;
          result[3] += 0;
          result[4] += 0;
          result[5] += 34706806;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 4853070;
          result[1] += 0;
          result[2] += 83715464;
          result[3] += 46104168;
          result[4] += 0;
          result[5] += 8492873;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 141281818;
          result[3] += 1883757;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 40086361;
          result[1] += 0;
          result[2] += 91625968;
          result[3] += 11453246;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 3829907;
          result[1] += 0;
          result[2] += 134411503;
          result[3] += 4924166;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 2177423;
          result[1] += 3810490;
          result[2] += 0;
          result[3] += 1633067;
          result[4] += 131734104;
          result[5] += 3810490;
        } else {
          result[0] += 0;
          result[1] += 30140121;
          result[2] += 0;
          result[3] += 7535030;
          result[4] += 7535030;
          result[5] += 97955394;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 3985678;
          result[1] += 797135;
          result[2] += 0;
          result[3] += 6377085;
          result[4] += 10841045;
          result[5] += 121164630;
        } else {
          result[0] += 11536069;
          result[1] += 2366373;
          result[2] += 1183186;
          result[3] += 57976142;
          result[4] += 7690712;
          result[5] += 62413092;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 104168587;
          result[1] += 10385067;
          result[2] += 953730;
          result[3] += 4556713;
          result[4] += 19180584;
          result[5] += 3920892;
        } else {
          result[0] += 20061418;
          result[1] += 4559413;
          result[2] += 38299071;
          result[3] += 36475306;
          result[4] += 12766357;
          result[5] += 31004010;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42820000))) ) ) {
          result[0] += 700076;
          result[1] += 142115462;
          result[2] += 0;
          result[3] += 0;
          result[4] += 350038;
          result[5] += 0;
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
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17895697;
          result[3] += 92035013;
          result[4] += 0;
          result[5] += 33234865;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 75793540;
          result[3] += 0;
          result[4] += 0;
          result[5] += 67372036;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9544371;
          result[3] += 19088743;
          result[4] += 19088743;
          result[5] += 95443717;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 103212392;
          result[3] += 39953184;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 46432078;
          result[3] += 50301418;
          result[4] += 0;
          result[5] += 46432078;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 110627945;
          result[3] += 32537631;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 52060209;
          result[1] += 0;
          result[2] += 78090314;
          result[3] += 6507526;
          result[4] += 0;
          result[5] += 6507526;
        } else {
          result[0] += 1970168;
          result[1] += 0;
          result[2] += 133807276;
          result[3] += 6895589;
          result[4] += 0;
          result[5] += 492542;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42300000))) ) ) {
          result[0] += 0;
          result[1] += 130716395;
          result[2] += 0;
          result[3] += 0;
          result[4] += 12449180;
          result[5] += 0;
        } else {
          result[0] += 428639;
          result[1] += 2143197;
          result[2] += 0;
          result[3] += 0;
          result[4] += 136735984;
          result[5] += 3857755;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426c0000))) ) ) {
          result[0] += 0;
          result[1] += 142837966;
          result[2] += 0;
          result[3] += 0;
          result[4] += 327610;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 116322030;
          result[2] += 0;
          result[3] += 0;
          result[4] += 26843545;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 574962;
          result[3] += 3833081;
          result[4] += 4024735;
          result[5] += 134732798;
        } else {
          result[0] += 13698769;
          result[1] += 4566256;
          result[2] += 1074413;
          result[3] += 55869493;
          result[4] += 12892959;
          result[5] += 55063683;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 55932071;
          result[1] += 4105106;
          result[2] += 5387951;
          result[3] += 31044865;
          result[4] += 12058749;
          result[5] += 34636833;
        } else {
          result[0] += 113905458;
          result[1] += 2090008;
          result[2] += 12540050;
          result[3] += 4833144;
          result[4] += 8621284;
          result[5] += 1175629;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b00000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 95443717;
          result[4] += 0;
          result[5] += 47721858;
        } else {
          result[0] += 0;
          result[1] += 9544371;
          result[2] += 4772185;
          result[3] += 0;
          result[4] += 9544371;
          result[5] += 119304647;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27837750;
          result[3] += 95443717;
          result[4] += 0;
          result[5] += 19884107;
        } else {
          result[0] += 1883757;
          result[1] += 0;
          result[2] += 97955394;
          result[3] += 41442666;
          result[4] += 0;
          result[5] += 1883757;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 57266230;
          result[3] += 0;
          result[4] += 19088743;
          result[5] += 66810602;
        } else {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 5726623;
          result[1] += 4294967;
          result[2] += 94489280;
          result[3] += 32928082;
          result[4] += 0;
          result[5] += 5726623;
        } else {
          result[0] += 357913;
          result[1] += 0;
          result[2] += 137259996;
          result[3] += 5189752;
          result[4] += 0;
          result[5] += 357913;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 622459;
          result[1] += 3734754;
          result[2] += 0;
          result[3] += 0;
          result[4] += 137563445;
          result[5] += 1244918;
        } else {
          result[0] += 11228672;
          result[1] += 2807168;
          result[2] += 0;
          result[3] += 8421504;
          result[4] += 75793540;
          result[5] += 44914690;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 4681574;
          result[1] += 755092;
          result[2] += 0;
          result[3] += 8003982;
          result[4] += 12232501;
          result[5] += 117492424;
        } else {
          result[0] += 12155567;
          result[1] += 5740129;
          result[2] += 6415438;
          result[3] += 74959334;
          result[4] += 3714201;
          result[5] += 40180904;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42420000))) ) ) {
          result[0] += 658232;
          result[1] += 140532646;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1974697;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 40518559;
          result[2] += 0;
          result[3] += 0;
          result[4] += 101296398;
          result[5] += 1350618;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 119956585;
          result[1] += 5215503;
          result[2] += 0;
          result[3] += 2738139;
          result[4] += 11865270;
          result[5] += 3390077;
        } else {
          result[0] += 28973985;
          result[1] += 3067833;
          result[2] += 37495746;
          result[3] += 31360078;
          result[4] += 5794797;
          result[5] += 36473134;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 19976592;
          result[4] += 16647160;
          result[5] += 106541824;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 143165576;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19346699;
          result[3] += 104472177;
          result[4] += 0;
          result[5] += 19346699;
        } else {
          result[0] += 0;
          result[1] += 5422938;
          result[2] += 81344077;
          result[3] += 41214332;
          result[4] += 0;
          result[5] += 15184227;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 143165576;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 135211933;
          result[1] += 0;
          result[2] += 7953643;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 3549559;
          result[1] += 0;
          result[2] += 115360691;
          result[3] += 19522578;
          result[4] += 0;
          result[5] += 4732746;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 139265232;
          result[3] += 3900344;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
          result[0] += 32778650;
          result[1] += 964077;
          result[2] += 0;
          result[3] += 0;
          result[4] += 106530614;
          result[5] += 2892233;
        } else {
          result[0] += 0;
          result[1] += 9236488;
          result[2] += 0;
          result[3] += 18472977;
          result[4] += 32327710;
          result[5] += 83128399;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 428639;
          result[2] += 0;
          result[3] += 7429750;
          result[4] += 11001745;
          result[5] += 124305440;
        } else {
          result[0] += 0;
          result[1] += 463319;
          result[2] += 1389957;
          result[3] += 78300914;
          result[4] += 3243233;
          result[5] += 59768153;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 39493952;
          result[2] += 0;
          result[3] += 0;
          result[4] += 103671624;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 141538694;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1626881;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 112214190;
          result[1] += 3699368;
          result[2] += 986498;
          result[3] += 5179116;
          result[4] += 17387033;
          result[5] += 3699368;
        } else {
          result[0] += 31339728;
          result[1] += 9615598;
          result[2] += 30627461;
          result[3] += 38462393;
          result[4] += 7834932;
          result[5] += 25285462;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20245637;
          result[3] += 98335951;
          result[4] += 0;
          result[5] += 24583987;
        } else {
          result[0] += 5113056;
          result[1] += 0;
          result[2] += 102261126;
          result[3] += 10226112;
          result[4] += 5113056;
          result[5] += 20452225;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42dd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 117135471;
          result[3] += 16268815;
          result[4] += 0;
          result[5] += 9761289;
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
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
          result[0] += 81808900;
          result[1] += 0;
          result[2] += 61356675;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 2202547;
          result[1] += 0;
          result[2] += 92506987;
          result[3] += 41848399;
          result[4] += 0;
          result[5] += 6607641;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 837225;
          result[1] += 0;
          result[2] += 134793320;
          result[3] += 6028024;
          result[4] += 0;
          result[5] += 1507006;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42870000))) ) ) {
          result[0] += 1745921;
          result[1] += 13530892;
          result[2] += 0;
          result[3] += 3055362;
          result[4] += 108247143;
          result[5] += 16586255;
        } else {
          result[0] += 116577683;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10226112;
          result[5] += 16361780;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 501163;
          result[2] += 501163;
          result[3] += 8853880;
          result[4] += 8686826;
          result[5] += 124622543;
        } else {
          result[0] += 3320851;
          result[1] += 368983;
          result[2] += 4058817;
          result[3] += 74903639;
          result[4] += 14390354;
          result[5] += 46122930;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 141658570;
          result[2] += 0;
          result[3] += 602802;
          result[4] += 904203;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 69896961;
          result[1] += 7651058;
          result[2] += 12578859;
          result[3] += 16339549;
          result[4] += 17636339;
          result[5] += 19062807;
        } else {
          result[0] += 135530079;
          result[1] += 0;
          result[2] += 6272015;
          result[3] += 272696;
          result[4] += 545392;
          result[5] += 545392;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 20452225;
          result[2] += 0;
          result[3] += 0;
          result[4] += 102261126;
          result[5] += 20452225;
        } else {
          result[0] += 5965232;
          result[1] += 2982616;
          result[2] += 5965232;
          result[3] += 14913080;
          result[4] += 0;
          result[5] += 113339414;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 47721858;
          result[2] += 95443717;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 5726623;
          result[1] += 0;
          result[2] += 34359738;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 17179869;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 123515399;
          result[3] += 19650177;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 86767016;
          result[3] += 39045157;
          result[4] += 0;
          result[5] += 17353403;
        } else {
          result[0] += 523138;
          result[1] += 0;
          result[2] += 136539155;
          result[3] += 5405764;
          result[4] += 0;
          result[5] += 697518;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 3604888;
          result[1] += 514984;
          result[2] += 0;
          result[3] += 0;
          result[4] += 128231037;
          result[5] += 10814665;
        } else {
          result[0] += 0;
          result[1] += 124076832;
          result[2] += 0;
          result[3] += 0;
          result[4] += 19088743;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 22025473;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 27531841;
          result[5] += 93608261;
        } else {
          result[0] += 139003786;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4161790;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 15561475;
          result[4] += 46684427;
          result[5] += 80919673;
        } else {
          result[0] += 406143;
          result[1] += 0;
          result[2] += 1218430;
          result[3] += 4264506;
          result[4] += 3858363;
          result[5] += 133418132;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 3467678;
          result[1] += 1486147;
          result[2] += 990765;
          result[3] += 20310687;
          result[4] += 29227574;
          result[5] += 87682723;
        } else {
          result[0] += 1908874;
          result[1] += 545392;
          result[2] += 7090104;
          result[3] += 78536544;
          result[4] += 1636178;
          result[5] += 53448481;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 1507006;
          result[1] += 43703175;
          result[2] += 1507006;
          result[3] += 1507006;
          result[4] += 94941382;
          result[5] += 0;
        } else {
          result[0] += 347489;
          result[1] += 142123108;
          result[2] += 0;
          result[3] += 347489;
          result[4] += 347489;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 11453246;
          result[1] += 57266230;
          result[2] += 0;
          result[3] += 3817748;
          result[4] += 70628351;
          result[5] += 0;
        } else {
          result[0] += 122242479;
          result[1] += 429926;
          result[2] += 4585884;
          result[3] += 5159119;
          result[4] += 5445737;
          result[5] += 5302428;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 6899545;
          result[2] += 41397275;
          result[3] += 70720345;
          result[4] += 0;
          result[5] += 24148410;
        } else {
          result[0] += 2921746;
          result[1] += 2921746;
          result[2] += 105182872;
          result[3] += 11686985;
          result[4] += 17530478;
          result[5] += 2921746;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
          result[0] += 46684427;
          result[1] += 12449180;
          result[2] += 46684427;
          result[3] += 3112295;
          result[4] += 6224590;
          result[5] += 28010656;
        } else {
          result[0] += 862443;
          result[1] += 0;
          result[2] += 133966182;
          result[3] += 7474508;
          result[4] += 143740;
          result[5] += 718702;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
          result[0] += 659749;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 130630341;
          result[5] += 11875485;
        } else {
          result[0] += 63116006;
          result[1] += 4618244;
          result[2] += 0;
          result[3] += 1539414;
          result[4] += 27709466;
          result[5] += 46182444;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 658232;
          result[2] += 0;
          result[3] += 8886139;
          result[4] += 11025394;
          result[5] += 122595809;
        } else {
          result[0] += 786624;
          result[1] += 10226112;
          result[2] += 5899680;
          result[3] += 63323235;
          result[4] += 4719744;
          result[5] += 58210179;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 105442260;
          result[1] += 8846168;
          result[2] += 2338642;
          result[3] += 3660483;
          result[4] += 20234339;
          result[5] += 2643682;
        } else {
          result[0] += 18126907;
          result[1] += 739873;
          result[2] += 26265519;
          result[3] += 42172805;
          result[4] += 11837980;
          result[5] += 44022489;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
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
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 3670912;
          result[2] += 18354561;
          result[3] += 29367297;
          result[4] += 0;
          result[5] += 91772805;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 0;
          result[4] += 114532461;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 65579070;
          result[3] += 66502719;
          result[4] += 0;
          result[5] += 11083786;
        } else {
          result[0] += 0;
          result[1] += 2468372;
          result[2] += 130823716;
          result[3] += 4936744;
          result[4] += 0;
          result[5] += 4936744;
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 4618244;
          result[1] += 0;
          result[2] += 60037177;
          result[3] += 60037177;
          result[4] += 0;
          result[5] += 18472977;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 135426896;
          result[3] += 0;
          result[4] += 0;
          result[5] += 7738679;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 57266230;
          result[2] += 0;
          result[3] += 0;
          result[4] += 57266230;
          result[5] += 28633115;
        } else {
          result[0] += 370895;
          result[1] += 0;
          result[2] += 137602147;
          result[3] += 5007086;
          result[4] += 0;
          result[5] += 185447;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 1122867;
          result[2] += 0;
          result[3] += 561433;
          result[4] += 133621204;
          result[5] += 7860070;
        } else {
          result[0] += 0;
          result[1] += 133621204;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9544371;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 2200129;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5657476;
          result[4] += 10843495;
          result[5] += 124464474;
        } else {
          result[0] += 1453457;
          result[1] += 726728;
          result[2] += 0;
          result[3] += 74853067;
          result[4] += 1453457;
          result[5] += 64678864;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 106219621;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36945955;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 142780722;
          result[2] += 0;
          result[3] += 0;
          result[4] += 384853;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 103638015;
          result[1] += 5523029;
          result[2] += 108294;
          result[3] += 3790314;
          result[4] += 23824831;
          result[5] += 6281091;
        } else {
          result[0] += 20849355;
          result[1] += 2084935;
          result[2] += 28957438;
          result[3] += 41467052;
          result[4] += 6023147;
          result[5] += 43783647;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 11930464;
          result[2] += 2982616;
          result[3] += 17895697;
          result[4] += 17895697;
          result[5] += 92461101;
        } else {
          result[0] += 12449180;
          result[1] += 0;
          result[2] += 93368854;
          result[3] += 0;
          result[4] += 24898361;
          result[5] += 12449180;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52060209;
          result[3] += 0;
          result[4] += 0;
          result[5] += 91105366;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29620464;
          result[3] += 103671624;
          result[4] += 0;
          result[5] += 9873488;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42980000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 11012736;
          result[2] += 11012736;
          result[3] += 33038209;
          result[4] += 44050946;
          result[5] += 44050946;
        } else {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 5898207;
          result[1] += 536200;
          result[2] += 113138339;
          result[3] += 18230822;
          result[4] += 536200;
          result[5] += 4825805;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 139135730;
          result[3] += 3605651;
          result[4] += 0;
          result[5] += 424194;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 497102;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 135709036;
          result[5] += 6959437;
        } else {
          result[0] += 101263456;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 12221451;
          result[5] += 29680668;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 162135;
          result[1] += 1459218;
          result[2] += 0;
          result[3] += 5674739;
          result[4] += 13781510;
          result[5] += 122087971;
        } else {
          result[0] += 0;
          result[1] += 354370;
          result[2] += 0;
          result[3] += 72645898;
          result[4] += 2126221;
          result[5] += 68039085;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 60492497;
          result[2] += 0;
          result[3] += 0;
          result[4] += 81664871;
          result[5] += 1008208;
        } else {
          result[0] += 0;
          result[1] += 141605188;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1560387;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 122660411;
          result[1] += 4817478;
          result[2] += 864675;
          result[3] += 3829277;
          result[4] += 8399705;
          result[5] += 2594026;
        } else {
          result[0] += 22664735;
          result[1] += 4910692;
          result[2] += 29464155;
          result[3] += 41174268;
          result[4] += 12843349;
          result[5] += 32108374;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39045157;
          result[3] += 0;
          result[4] += 26030104;
          result[5] += 78090314;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31378756;
          result[3] += 94136269;
          result[4] += 0;
          result[5] += 17650550;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 107374182;
          result[3] += 28633115;
          result[4] += 0;
          result[5] += 7158278;
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
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 84928731;
          result[3] += 41251098;
          result[4] += 0;
          result[5] += 16985746;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 122713351;
          result[3] += 17725261;
          result[4] += 0;
          result[5] += 2726963;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 57266230;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1966069;
          result[1] += 0;
          result[2] += 135301300;
          result[3] += 5719473;
          result[4] += 0;
          result[5] += 178733;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 1183186;
          result[1] += 1183186;
          result[2] += 0;
          result[3] += 0;
          result[4] += 136658050;
          result[5] += 4141153;
        } else {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 3470680;
          result[1] += 0;
          result[2] += 520602;
          result[3] += 4685418;
          result[4] += 3644214;
          result[5] += 130844660;
        } else {
          result[0] += 9057414;
          result[1] += 5259143;
          result[2] += 1460873;
          result[3] += 56974055;
          result[4] += 6720016;
          result[5] += 63694072;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42580000))) ) ) {
          result[0] += 0;
          result[1] += 139783712;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3381864;
          result[5] += 0;
        } else {
          result[0] += 6710886;
          result[1] += 58161015;
          result[2] += 2236962;
          result[3] += 0;
          result[4] += 64871901;
          result[5] += 11184810;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 106024083;
          result[1] += 5069758;
          result[2] += 2314455;
          result[3] += 4739122;
          result[4] += 19397337;
          result[5] += 5620819;
        } else {
          result[0] += 14027751;
          result[1] += 2062904;
          result[2] += 29293244;
          result[3] += 37544863;
          result[4] += 10314522;
          result[5] += 49922290;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 143165576;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11228672;
          result[3] += 89829381;
          result[4] += 0;
          result[5] += 42107522;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 69114416;
          result[3] += 74051160;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 120259084;
          result[3] += 11453246;
          result[4] += 0;
          result[5] += 11453246;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 103597201;
          result[3] += 33093550;
          result[4] += 0;
          result[5] += 6474825;
        } else {
          result[0] += 7069905;
          result[1] += 0;
          result[2] += 130793242;
          result[3] += 3534952;
          result[4] += 0;
          result[5] += 1767476;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 71582788;
          result[4] += 0;
          result[5] += 71582788;
        } else {
          result[0] += 2039924;
          result[1] += 0;
          result[2] += 138343937;
          result[3] += 2225371;
          result[4] += 0;
          result[5] += 556342;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 662803;
          result[1] += 1325607;
          result[2] += 0;
          result[3] += 0;
          result[4] += 139188754;
          result[5] += 1988410;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 44050946;
          result[5] += 45427538;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 184017;
          result[2] += 552052;
          result[3] += 5520523;
          result[4] += 8096767;
          result[5] += 128812215;
        } else {
          result[0] += 306564;
          result[1] += 2452515;
          result[2] += 306564;
          result[3] += 52115948;
          result[4] += 13182269;
          result[5] += 74801714;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 109159501;
          result[1] += 5214264;
          result[2] += 1473596;
          result[3] += 3173900;
          result[4] += 21877241;
          result[5] += 2267071;
        } else {
          result[0] += 25506510;
          result[1] += 4388216;
          result[2] += 33185890;
          result[3] += 34008681;
          result[4] += 7405116;
          result[5] += 38671161;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
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
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42910000))) ) ) {
          result[0] += 6983686;
          result[1] += 10475529;
          result[2] += 6983686;
          result[3] += 0;
          result[4] += 45393963;
          result[5] += 73328709;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20782099;
          result[3] += 115456110;
          result[4] += 0;
          result[5] += 6927366;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 17895697;
          result[1] += 5113056;
          result[2] += 66469731;
          result[3] += 40904450;
          result[4] += 0;
          result[5] += 12782640;
        } else {
          result[0] += 3329432;
          result[1] += 0;
          result[2] += 133177280;
          result[3] += 6658864;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ed0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20452225;
          result[3] += 47721858;
          result[4] += 6817408;
          result[5] += 68174084;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 143165576;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 106139996;
          result[3] += 29620464;
          result[4] += 0;
          result[5] += 7405116;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 138066528;
          result[3] += 4902930;
          result[4] += 0;
          result[5] += 196117;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 1213267;
          result[1] += 5459704;
          result[2] += 0;
          result[3] += 0;
          result[4] += 135279337;
          result[5] += 1213267;
        } else {
          result[0] += 47093939;
          result[1] += 13186303;
          result[2] += 0;
          result[3] += 0;
          result[4] += 33907636;
          result[5] += 48977697;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 1092866;
          result[2] += 1092866;
          result[3] += 9991926;
          result[4] += 8118440;
          result[5] += 122869475;
        } else {
          result[0] += 0;
          result[1] += 4818072;
          result[2] += 0;
          result[3] += 74335972;
          result[4] += 6194664;
          result[5] += 57816867;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 20001073;
          result[2] += 2105376;
          result[3] += 6316128;
          result[4] += 110532246;
          result[5] += 4210752;
        } else {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 116248567;
          result[1] += 3996411;
          result[2] += 0;
          result[3] += 4231494;
          result[4] += 13399733;
          result[5] += 5289368;
        } else {
          result[0] += 24442903;
          result[1] += 5103463;
          result[2] += 29546366;
          result[3] += 42707929;
          result[4] += 7789496;
          result[5] += 33575416;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 114532461;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9544371;
          result[3] += 23860929;
          result[4] += 0;
          result[5] += 109760275;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 100215903;
          result[4] += 0;
          result[5] += 14316557;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 143165576;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1507006;
          result[1] += 6028024;
          result[2] += 60280242;
          result[3] += 60280242;
          result[4] += 0;
          result[5] += 15070060;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 127628227;
          result[3] += 8878485;
          result[4] += 0;
          result[5] += 6658864;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 28633115;
        } else {
          result[0] += 725807;
          result[1] += 0;
          result[2] += 135181691;
          result[3] += 6350817;
          result[4] += 181451;
          result[5] += 725807;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 594048;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 140789384;
          result[5] += 1782144;
        } else {
          result[0] += 17895697;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 71582788;
          result[5] += 53687091;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42520000))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 9387906;
          result[1] += 35204649;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39898603;
          result[5] += 58674416;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19088743;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 38177487;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 218573;
          result[3] += 4371467;
          result[4] += 2185733;
          result[5] += 136389801;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 4312216;
          result[2] += 1724886;
          result[3] += 22854745;
          result[4] += 15955199;
          result[5] += 98318528;
        } else {
          result[0] += 0;
          result[1] += 3886848;
          result[2] += 2591232;
          result[3] += 82271620;
          result[4] += 1943424;
          result[5] += 52472451;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 25565281;
          result[2] += 0;
          result[3] += 6391320;
          result[4] += 108652446;
          result[5] += 2556528;
        } else {
          result[0] += 0;
          result[1] += 139025848;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4139727;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 121910618;
          result[1] += 5252661;
          result[2] += 977239;
          result[3] += 3298183;
          result[4] += 9039464;
          result[5] += 2687408;
        } else {
          result[0] += 25313333;
          result[1] += 2489836;
          result[2] += 18258798;
          result[3] += 35687650;
          result[4] += 16183934;
          result[5] += 45232022;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42700000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 4473924;
          result[1] += 745654;
          result[2] += 55178399;
          result[3] += 51450129;
          result[4] += 2236962;
          result[5] += 29080507;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
          result[0] += 90141288;
          result[1] += 0;
          result[2] += 37117001;
          result[3] += 10604857;
          result[4] += 0;
          result[5] += 5302428;
        } else {
          result[0] += 1029968;
          result[1] += 0;
          result[2] += 130511681;
          result[3] += 10446820;
          result[4] += 294276;
          result[5] += 882829;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 6927366;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 121459827;
          result[5] += 14778382;
        } else {
          result[0] += 65917963;
          result[1] += 21629331;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50468440;
          result[5] += 5149840;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 716723;
          result[2] += 0;
          result[3] += 4479523;
          result[4] += 8779866;
          result[5] += 129189462;
        } else {
          result[0] += 2591232;
          result[1] += 0;
          result[2] += 1295616;
          result[3] += 46642178;
          result[4] += 22025473;
          result[5] += 70611076;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x425e0000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 91382282;
          result[2] += 0;
          result[3] += 15230380;
          result[4] += 30460760;
          result[5] += 6092152;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 57403231;
          result[1] += 8494034;
          result[2] += 7398029;
          result[3] += 26578107;
          result[4] += 16029064;
          result[5] += 27263109;
        } else {
          result[0] += 131254200;
          result[1] += 0;
          result[2] += 6413817;
          result[3] += 3435973;
          result[4] += 1374389;
          result[5] += 687194;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 114532461;
          result[5] += 28633115;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 7953643;
          result[4] += 2651214;
          result[5] += 132560718;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 3869339;
          result[1] += 1289779;
          result[2] += 9028459;
          result[3] += 92864157;
          result[4] += 15477359;
          result[5] += 20636479;
        } else {
          result[0] += 0;
          result[1] += 3408704;
          result[2] += 71582788;
          result[3] += 34087042;
          result[4] += 0;
          result[5] += 34087042;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 76695844;
          result[3] += 58800147;
          result[4] += 0;
          result[5] += 7669584;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 143165576;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 3817748;
          result[1] += 0;
          result[2] += 106896963;
          result[3] += 28633115;
          result[4] += 0;
          result[5] += 3817748;
        } else {
          result[0] += 1092866;
          result[1] += 0;
          result[2] += 134969074;
          result[3] += 6192912;
          result[4] += 364288;
          result[5] += 546433;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1664716;
          result[1] += 2219621;
          result[2] += 0;
          result[3] += 0;
          result[4] += 137616523;
          result[5] += 1664716;
        } else {
          result[0] += 70141524;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39394554;
          result[5] += 33629497;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4349333;
          result[4] += 4711778;
          result[5] += 134104464;
        } else {
          result[0] += 2055008;
          result[1] += 2740011;
          result[2] += 0;
          result[3] += 36990148;
          result[4] += 25345102;
          result[5] += 76035306;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 66076419;
          result[2] += 0;
          result[3] += 0;
          result[4] += 77089156;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 142814680;
          result[2] += 0;
          result[3] += 0;
          result[4] += 350896;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 125556976;
          result[1] += 1913978;
          result[2] += 127598;
          result[3] += 3955555;
          result[4] += 7911110;
          result[5] += 3700358;
        } else {
          result[0] += 13497091;
          result[1] += 1687136;
          result[2] += 28199280;
          result[3] += 61218950;
          result[4] += 2892233;
          result[5] += 35670884;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 41564199;
          result[2] += 18472977;
          result[3] += 4618244;
          result[4] += 23091222;
          result[5] += 55418932;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24265351;
          result[3] += 94634872;
          result[4] += 0;
          result[5] += 24265351;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 78090314;
          result[1] += 0;
          result[2] += 45552683;
          result[3] += 3253763;
          result[4] += 0;
          result[5] += 16268815;
        } else {
          result[0] += 4648233;
          result[1] += 5577879;
          result[2] += 100401832;
          result[3] += 21381871;
          result[4] += 1859293;
          result[5] += 9296466;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 50800688;
          result[3] += 78510154;
          result[4] += 0;
          result[5] += 13854733;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 116995524;
          result[3] += 23091222;
          result[4] += 0;
          result[5] += 3078829;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 129178135;
          result[3] += 13987441;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 140450367;
          result[3] += 2468372;
          result[4] += 0;
          result[5] += 246837;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 3408704;
          result[1] += 12498582;
          result[2] += 0;
          result[3] += 0;
          result[4] += 123092096;
          result[5] += 4166194;
        } else {
          result[0] += 116857372;
          result[1] += 917728;
          result[2] += 0;
          result[3] += 0;
          result[4] += 16213195;
          result[5] += 9177280;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 151497;
          result[1] += 454493;
          result[2] += 0;
          result[3] += 7271902;
          result[4] += 13180322;
          result[5] += 122107359;
        } else {
          result[0] += 18576294;
          result[1] += 5604916;
          result[2] += 10729411;
          result[3] += 51084808;
          result[4] += 10569270;
          result[5] += 46600875;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426c0000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 119304647;
          result[2] += 0;
          result[3] += 0;
          result[4] += 23860929;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426a0000))) ) ) {
          result[0] += 143165576;
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
          result[4] += 143165576;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428e0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20452225;
          result[3] += 81808900;
          result[4] += 0;
          result[5] += 40904450;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 143165576;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 142397246;
          result[1] += 0;
          result[2] += 0;
          result[3] += 256110;
          result[4] += 256110;
          result[5] += 256110;
        } else {
          result[0] += 59240928;
          result[1] += 0;
          result[2] += 83924648;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 32537631;
          result[1] += 0;
          result[2] += 84597840;
          result[3] += 21691754;
          result[4] += 0;
          result[5] += 4338350;
        } else {
          result[0] += 119304647;
          result[1] += 0;
          result[2] += 23860929;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 2796202;
          result[1] += 0;
          result[2] += 109051903;
          result[3] += 26843545;
          result[4] += 0;
          result[5] += 4473924;
        } else {
          result[0] += 409629;
          result[1] += 0;
          result[2] += 138454835;
          result[3] += 3891482;
          result[4] += 0;
          result[5] += 409629;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_1/test_data.csv", "r");
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
