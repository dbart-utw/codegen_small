
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
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 1415923;
          result[2] += 0;
          result[3] += 0;
          result[4] += 84011448;
          result[5] += 471974;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1952257;
          result[4] += 33188383;
          result[5] += 50758704;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42680000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 11083786;
          result[4] += 31865886;
          result[5] += 0;
        } else {
          result[0] += 874293;
          result[1] += 145715;
          result[2] += 364288;
          result[3] += 11584390;
          result[4] += 4225752;
          result[5] += 68704905;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 66017598;
          result[1] += 4842989;
          result[2] += 63723;
          result[3] += 1147023;
          result[4] += 12426092;
          result[5] += 1401918;
        } else {
          result[0] += 19903506;
          result[1] += 1745921;
          result[2] += 17808400;
          result[3] += 21998612;
          result[4] += 5586949;
          result[5] += 18855953;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42db0000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 1571329;
          result[2] += 9951753;
          result[3] += 36140578;
          result[4] += 5237764;
          result[5] += 32997919;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 15032385;
          result[1] += 4294967;
          result[2] += 57982058;
          result[3] += 0;
          result[4] += 6442450;
          result[5] += 2147483;
        } else {
          result[0] += 82164591;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3734754;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 43153225;
          result[3] += 35825319;
          result[4] += 0;
          result[5] += 6920800;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 75859162;
          result[3] += 10040183;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 656555;
          result[1] += 0;
          result[2] += 81412883;
          result[3] += 3720481;
          result[4] += 0;
          result[5] += 109425;
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42890000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 3368601;
          result[2] += 0;
          result[3] += 0;
          result[4] += 82193883;
          result[5] += 336860;
        } else {
          result[0] += 20567449;
          result[1] += 3629549;
          result[2] += 0;
          result[3] += 6049249;
          result[4] += 24196998;
          result[5] += 31456098;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42760000))) ) ) {
          result[0] += 83011972;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2887372;
          result[5] += 0;
        } else {
          result[0] += 20211610;
          result[1] += 12632256;
          result[2] += 0;
          result[3] += 0;
          result[4] += 22738062;
          result[5] += 30317416;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 8053063;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 24159191;
        } else {
          result[0] += 0;
          result[1] += 241969;
          result[2] += 0;
          result[3] += 2298714;
          result[4] += 604924;
          result[5] += 82753736;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 8220033;
          result[4] += 13152052;
          result[5] += 64527259;
        } else {
          result[0] += 3620278;
          result[1] += 658232;
          result[2] += 987348;
          result[3] += 33240743;
          result[4] += 6582325;
          result[5] += 40810417;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 24051816;
          result[2] += 0;
          result[3] += 0;
          result[4] += 61847529;
          result[5] += 0;
        } else {
          result[0] += 581711;
          result[1] += 84929827;
          result[2] += 0;
          result[3] += 0;
          result[4] += 387807;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          result[0] += 71997955;
          result[1] += 3455259;
          result[2] += 401774;
          result[3] += 2008871;
          result[4] += 6348033;
          result[5] += 1687452;
        } else {
          result[0] += 26030104;
          result[1] += 2313787;
          result[2] += 12147382;
          result[3] += 24294764;
          result[4] += 4338350;
          result[5] += 16774956;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 881018;
          result[1] += 5286113;
          result[2] += 11893755;
          result[3] += 46694003;
          result[4] += 4405094;
          result[5] += 16739359;
        } else {
          result[0] += 2061584;
          result[1] += 6184752;
          result[2] += 46729244;
          result[3] += 10995116;
          result[4] += 4123168;
          result[5] += 15805479;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 9938767;
          result[1] += 1419823;
          result[2] += 44724452;
          result[3] += 15618062;
          result[4] += 2129735;
          result[5] += 12068503;
        } else {
          result[0] += 998829;
          result[1] += 0;
          result[2] += 79207187;
          result[3] += 5193913;
          result[4] += 0;
          result[5] += 499414;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 69992059;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9544371;
          result[5] += 6362914;
        } else {
          result[0] += 602802;
          result[1] += 602802;
          result[2] += 0;
          result[3] += 0;
          result[4] += 78665716;
          result[5] += 6028024;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
          result[0] += 123064;
          result[1] += 0;
          result[2] += 369194;
          result[3] += 1722909;
          result[4] += 2461299;
          result[5] += 81222877;
        } else {
          result[0] += 8506537;
          result[1] += 1334358;
          result[2] += 333589;
          result[3] += 31524225;
          result[4] += 5837819;
          result[5] += 38362814;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 197016;
          result[1] += 85702329;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 63988090;
          result[1] += 3130179;
          result[2] += 1083523;
          result[3] += 2708809;
          result[4] += 9932299;
          result[5] += 5056443;
        } else {
          result[0] += 12940680;
          result[1] += 2231151;
          result[2] += 16510523;
          result[3] += 28558743;
          result[4] += 4462303;
          result[5] += 21195942;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11713547;
          result[3] += 70281283;
          result[4] += 0;
          result[5] += 3904515;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5726623;
          result[3] += 28633115;
          result[4] += 5726623;
          result[5] += 45812984;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 37580963;
          result[4] += 0;
          result[5] += 48318382;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 64424509;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 1590728;
          result[1] += 0;
          result[2] += 53289409;
          result[3] += 27042386;
          result[4] += 0;
          result[5] += 3976821;
        } else {
          result[0] += 447392;
          result[1] += 0;
          result[2] += 77398889;
          result[3] += 7158278;
          result[4] += 0;
          result[5] += 894784;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 81079342;
          result[3] += 4647860;
          result[4] += 0;
          result[5] += 172142;
        } else {
          result[0] += 584349;
          result[1] += 0;
          result[2] += 85314996;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 1684300;
          result[2] += 0;
          result[3] += 0;
          result[4] += 81857023;
          result[5] += 2358021;
        } else {
          result[0] += 0;
          result[1] += 81808900;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 4090445;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 53953308;
          result[1] += 3549559;
          result[2] += 0;
          result[3] += 0;
          result[4] += 22007270;
          result[5] += 6389207;
        } else {
          result[0] += 1208634;
          result[1] += 0;
          result[2] += 258993;
          result[3] += 8719431;
          result[4] += 4316550;
          result[5] += 71395737;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 1150437;
          result[1] += 83406730;
          result[2] += 0;
          result[3] += 766958;
          result[4] += 575218;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
          result[0] += 13036699;
          result[1] += 714339;
          result[2] += 2857358;
          result[3] += 33931134;
          result[4] += 7857736;
          result[5] += 27502077;
        } else {
          result[0] += 60210908;
          result[1] += 4765728;
          result[2] += 5172558;
          result[3] += 3603355;
          result[4] += 7904134;
          result[5] += 4242660;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6135667;
          result[3] += 64424509;
          result[4] += 0;
          result[5] += 15339168;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 50107951;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 75161927;
          result[3] += 3579139;
          result[4] += 0;
          result[5] += 7158278;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 38177487;
          result[4] += 0;
          result[5] += 47721858;
        } else {
          result[0] += 1184818;
          result[1] += 0;
          result[2] += 64572611;
          result[3] += 15402641;
          result[4] += 592409;
          result[5] += 4146864;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 572662;
          result[1] += 0;
          result[2] += 70437463;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 572662;
        } else {
          result[0] += 283496;
          result[1] += 0;
          result[2] += 82922635;
          result[3] += 2267969;
          result[4] += 0;
          result[5] += 425244;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
          result[0] += 846298;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 81667851;
          result[5] += 3385195;
        } else {
          result[0] += 33098830;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 30734628;
          result[5] += 22065887;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 470939;
          result[2] += 94187;
          result[3] += 6404775;
          result[4] += 3955890;
          result[5] += 74973551;
        } else {
          result[0] += 0;
          result[1] += 673720;
          result[2] += 673720;
          result[3] += 49518446;
          result[4] += 1684300;
          result[5] += 33349157;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 85282843;
          result[2] += 0;
          result[3] += 0;
          result[4] += 616502;
          result[5] += 0;
        } else {
          result[0] += 2603010;
          result[1] += 29283867;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52710962;
          result[5] += 1301505;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          result[0] += 71884923;
          result[1] += 2440322;
          result[2] += 766958;
          result[3] += 2091704;
          result[4] += 6344838;
          result[5] += 2370598;
        } else {
          result[0] += 15432133;
          result[1] += 4648233;
          result[2] += 22683377;
          result[3] += 21753730;
          result[4] += 2974869;
          result[5] += 18407002;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 3303820;
          result[1] += 6607641;
          result[2] += 9911462;
          result[3] += 3303820;
          result[4] += 19822925;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10367162;
          result[3] += 59240928;
          result[4] += 2962046;
          result[5] += 13329208;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5368709;
          result[3] += 0;
          result[4] += 0;
          result[5] += 80530636;
        } else {
          result[0] += 13929623;
          result[1] += 4643207;
          result[2] += 55718494;
          result[3] += 6964811;
          result[4] += 0;
          result[5] += 4643207;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 61549925;
          result[3] += 21643929;
          result[4] += 0;
          result[5] += 2705491;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 612691;
          result[1] += 0;
          result[2] += 81733043;
          result[3] += 3308534;
          result[4] += 0;
          result[5] += 245076;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
          result[0] += 2037138;
          result[1] += 1018569;
          result[2] += 0;
          result[3] += 0;
          result[4] += 75034606;
          result[5] += 7809031;
        } else {
          result[0] += 66138463;
          result[1] += 806566;
          result[2] += 0;
          result[3] += 806566;
          result[4] += 12501782;
          result[5] += 5645966;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 232474;
          result[2] += 0;
          result[3] += 3719592;
          result[4] += 5346914;
          result[5] += 76600363;
        } else {
          result[0] += 770397;
          result[1] += 1155596;
          result[2] += 1669195;
          result[3] += 30173910;
          result[4] += 10785568;
          result[5] += 41344677;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 54919253;
          result[1] += 18306417;
          result[2] += 0;
          result[3] += 0;
          result[4] += 12673673;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85709303;
          result[2] += 0;
          result[3] += 0;
          result[4] += 190042;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42910000))) ) ) {
          result[0] += 3253763;
          result[1] += 24728599;
          result[2] += 3253763;
          result[3] += 2603010;
          result[4] += 44251178;
          result[5] += 7809031;
        } else {
          result[0] += 66259218;
          result[1] += 1957023;
          result[2] += 7828093;
          result[3] += 3494684;
          result[4] += 4193621;
          result[5] += 2166704;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c50000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 58567735;
          result[2] += 3904515;
          result[3] += 0;
          result[4] += 23427094;
          result[5] += 0;
        } else {
          result[0] += 4643207;
          result[1] += 4643207;
          result[2] += 0;
          result[3] += 4643207;
          result[4] += 23216039;
          result[5] += 48753682;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 18611524;
          result[3] += 48676296;
          result[4] += 0;
          result[5] += 18611524;
        } else {
          result[0] += 3335896;
          result[1] += 0;
          result[2] += 54208325;
          result[3] += 22517304;
          result[4] += 0;
          result[5] += 5837819;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 1091940;
          result[1] += 0;
          result[2] += 69884213;
          result[3] += 13103290;
          result[4] += 0;
          result[5] += 1819901;
        } else {
          result[0] += 50529027;
          result[1] += 0;
          result[2] += 35370318;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 73240494;
          result[3] += 12658850;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 169093;
          result[1] += 0;
          result[2] += 83532041;
          result[3] += 2198211;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 376751;
          result[1] += 1883757;
          result[2] += 0;
          result[3] += 0;
          result[4] += 79494570;
          result[5] += 4144266;
        } else {
          result[0] += 0;
          result[1] += 57266230;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 28633115;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 2183881;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3951785;
          result[4] += 5095723;
          result[5] += 74667954;
        } else {
          result[0] += 9023040;
          result[1] += 1082764;
          result[2] += 3428755;
          result[3] += 33024328;
          result[4] += 8662118;
          result[5] += 30678337;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 54829369;
          result[2] += 0;
          result[3] += 3655291;
          result[4] += 23759393;
          result[5] += 3655291;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
          result[0] += 64408519;
          result[1] += 4157451;
          result[2] += 383764;
          result[3] += 3006157;
          result[4] += 8570746;
          result[5] += 5372706;
        } else {
          result[0] += 15359485;
          result[1] += 853304;
          result[2] += 27305752;
          result[3] += 15643920;
          result[4] += 5404263;
          result[5] += 21332619;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5965232;
          result[4] += 15509604;
          result[5] += 64424509;
        } else {
          result[0] += 0;
          result[1] += 3303820;
          result[2] += 6607641;
          result[3] += 47905404;
          result[4] += 1651910;
          result[5] += 26430567;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27859247;
          result[3] += 41788870;
          result[4] += 0;
          result[5] += 16251227;
        } else {
          result[0] += 2045222;
          result[1] += 0;
          result[2] += 75673233;
          result[3] += 8180890;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 79906368;
          result[3] += 5992977;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1115575;
          result[1] += 0;
          result[2] += 50200916;
          result[3] += 31236125;
          result[4] += 0;
          result[5] += 3346727;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1032444;
          result[1] += 0;
          result[2] += 80530636;
          result[3] += 4336265;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 17179869;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 25769803;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x425a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 82595524;
          result[5] += 3303820;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42620000))) ) ) {
          result[0] += 73628010;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 12271335;
          result[5] += 0;
        } else {
          result[0] += 90135;
          result[1] += 450678;
          result[2] += 0;
          result[3] += 2974478;
          result[4] += 4326514;
          result[5] += 78057537;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          result[0] += 77309411;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8589934;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 1511425;
          result[2] += 1007616;
          result[3] += 39297061;
          result[4] += 5541893;
          result[5] += 38541348;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 23642021;
          result[2] += 788067;
          result[3] += 0;
          result[4] += 59893121;
          result[5] += 1576134;
        } else {
          result[0] += 374289;
          result[1] += 84027900;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1497156;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
          result[0] += 17471053;
          result[1] += 5823684;
          result[2] += 0;
          result[3] += 22566777;
          result[4] += 15287171;
          result[5] += 24750658;
        } else {
          result[0] += 68625377;
          result[1] += 2688555;
          result[2] += 1680347;
          result[3] += 3898405;
          result[4] += 6855816;
          result[5] += 2150844;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 421075;
          result[1] += 4631827;
          result[2] += 8000429;
          result[3] += 31580641;
          result[4] += 2105376;
          result[5] += 39159995;
        } else {
          result[0] += 933688;
          result[1] += 0;
          result[2] += 55087624;
          result[3] += 17740082;
          result[4] += 933688;
          result[5] += 11204262;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 4042322;
          result[1] += 0;
          result[2] += 62150703;
          result[3] += 16927224;
          result[4] += 0;
          result[5] += 2779096;
        } else {
          result[0] += 133177;
          result[1] += 0;
          result[2] += 80439077;
          result[3] += 5060736;
          result[4] += 0;
          result[5] += 266354;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 1193046;
          result[2] += 0;
          result[3] += 0;
          result[4] += 79635851;
          result[5] += 5070447;
        } else {
          result[0] += 0;
          result[1] += 21474836;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 64424509;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 2459285;
          result[1] += 175663;
          result[2] += 0;
          result[3] += 4128087;
          result[4] += 4303750;
          result[5] += 74832559;
        } else {
          result[0] += 4936744;
          result[1] += 2632930;
          result[2] += 2632930;
          result[3] += 42785114;
          result[4] += 4607627;
          result[5] += 28303999;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 84500984;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1398361;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 66990684;
          result[1] += 4321979;
          result[2] += 607778;
          result[3] += 1485680;
          result[4] += 9994577;
          result[5] += 2498644;
        } else {
          result[0] += 12488313;
          result[1] += 506282;
          result[2] += 15526011;
          result[3] += 23795300;
          result[4] += 8944332;
          result[5] += 24639105;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 2770946;
          result[2] += 2770946;
          result[3] += 11083786;
          result[4] += 2770946;
          result[5] += 66502719;
        } else {
          result[0] += 1047552;
          result[1] += 5237764;
          result[2] += 14665741;
          result[3] += 39807013;
          result[4] += 4190211;
          result[5] += 20951059;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e80000))) ) ) {
          result[0] += 6135667;
          result[1] += 2045222;
          result[2] += 63401898;
          result[3] += 8180890;
          result[4] += 0;
          result[5] += 6135667;
        } else {
          result[0] += 67492343;
          result[1] += 0;
          result[2] += 18407002;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37896770;
          result[3] += 37896770;
          result[4] += 0;
          result[5] += 10105805;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 70216477;
          result[3] += 14257152;
          result[4] += 0;
          result[5] += 1425715;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42e50000))) ) ) {
          result[0] += 616502;
          result[1] += 0;
          result[2] += 79323319;
          result[3] += 5548522;
          result[4] += 0;
          result[5] += 411001;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 972445;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 77795634;
          result[5] += 7131266;
        } else {
          result[0] += 0;
          result[1] += 81808900;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4090445;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 3413830;
          result[1] += 922656;
          result[2] += 0;
          result[3] += 4797815;
          result[4] += 3967424;
          result[5] += 72797619;
        } else {
          result[0] += 2055008;
          result[1] += 0;
          result[2] += 4932019;
          result[3] += 57540231;
          result[4] += 0;
          result[5] += 21372086;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 14665741;
          result[2] += 0;
          result[3] += 2095105;
          result[4] += 69138497;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85088974;
          result[2] += 0;
          result[3] += 0;
          result[4] += 810371;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 30660238;
          result[1] += 2533904;
          result[2] += 5447893;
          result[3] += 14189862;
          result[4] += 15456814;
          result[5] += 17610632;
        } else {
          result[0] += 69400616;
          result[1] += 3178654;
          result[2] += 3632747;
          result[3] += 2875925;
          result[4] += 5751850;
          result[5] += 1059551;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7332870;
          result[3] += 9427976;
          result[4] += 2095105;
          result[5] += 67043391;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 25094190;
          result[3] += 42467092;
          result[4] += 0;
          result[5] += 18338062;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 72684061;
          result[3] += 13215283;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425e0000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 19634136;
          result[1] += 0;
          result[2] += 31905471;
          result[3] += 17179869;
          result[4] += 7362801;
          result[5] += 9817068;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 2723034;
          result[1] += 0;
          result[2] += 72531724;
          result[3] += 9406844;
          result[4] += 0;
          result[5] += 1237742;
        } else {
          result[0] += 688571;
          result[1] += 0;
          result[2] += 82284343;
          result[3] += 2754287;
          result[4] += 0;
          result[5] += 172142;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 737333;
          result[1] += 1106000;
          result[2] += 0;
          result[3] += 1106000;
          result[4] += 79263344;
          result[5] += 3686667;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 71582788;
          result[3] += 0;
          result[4] += 14316557;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 62992853;
          result[5] += 22906492;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 260301;
          result[3] += 2863311;
          result[4] += 1431655;
          result[5] += 81344077;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 12310415;
          result[1] += 5744860;
          result[2] += 0;
          result[3] += 7933379;
          result[4] += 7933379;
          result[5] += 51977311;
        } else {
          result[0] += 1336954;
          result[1] += 0;
          result[2] += 5682057;
          result[3] += 50135805;
          result[4] += 668477;
          result[5] += 28076050;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85518417;
          result[2] += 0;
          result[3] += 0;
          result[4] += 380928;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 58001522;
          result[1] += 5060535;
          result[2] += 259514;
          result[3] += 2076117;
          result[4] += 18944568;
          result[5] += 1557087;
        } else {
          result[0] += 3189896;
          result[1] += 2962046;
          result[2] += 12076035;
          result[3] += 31215412;
          result[4] += 12759584;
          result[5] += 23696371;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 75320042;
          result[1] += 344977;
          result[2] += 919939;
          result[3] += 2069863;
          result[4] += 3219788;
          result[5] += 4024735;
        } else {
          result[0] += 2467914;
          result[1] += 0;
          result[2] += 70932638;
          result[3] += 9473607;
          result[4] += 79610;
          result[5] += 2945575;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 907387;
          result[1] += 907387;
          result[2] += 0;
          result[3] += 0;
          result[4] += 82269796;
          result[5] += 1814774;
        } else {
          result[0] += 7809031;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 21474836;
          result[5] += 56615477;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
          result[0] += 83577741;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2321603;
          result[5] += 0;
        } else {
          result[0] += 342228;
          result[1] += 1454470;
          result[2] += 0;
          result[3] += 7186797;
          result[4] += 4106741;
          result[5] += 72809106;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 4294967;
          result[1] += 45097156;
          result[2] += 0;
          result[3] += 10737418;
          result[4] += 25769803;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85466603;
          result[2] += 0;
          result[3] += 0;
          result[4] += 432742;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 70620228;
          result[1] += 1900751;
          result[2] += 0;
          result[3] += 3289762;
          result[4] += 8114746;
          result[5] += 1973857;
        } else {
          result[0] += 9617564;
          result[1] += 2898444;
          result[2] += 17127170;
          result[3] += 27535219;
          result[4] += 4742908;
          result[5] += 23978038;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 2095105;
          result[2] += 8380423;
          result[3] += 16760847;
          result[4] += 5237764;
          result[5] += 53425202;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 22906492;
          result[3] += 47721858;
          result[4] += 0;
          result[5] += 15270994;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 17179869;
          result[1] += 60129542;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8589934;
          result[5] += 0;
        } else {
          result[0] += 3123612;
          result[1] += 0;
          result[2] += 68719476;
          result[3] += 12494450;
          result[4] += 0;
          result[5] += 1561806;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 54252218;
          result[4] += 0;
          result[5] += 31647127;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 35791394;
          result[4] += 0;
          result[5] += 14316557;
        } else {
          result[0] += 1020402;
          result[1] += 0;
          result[2] += 80426277;
          result[3] += 4267138;
          result[4] += 0;
          result[5] += 185527;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42bc0000))) ) ) {
          result[0] += 0;
          result[1] += 701219;
          result[2] += 0;
          result[3] += 0;
          result[4] += 78887154;
          result[5] += 6310972;
        } else {
          result[0] += 0;
          result[1] += 73628010;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 12271335;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 2809393;
          result[1] += 595932;
          result[2] += 85133;
          result[3] += 6725518;
          result[4] += 6895784;
          result[5] += 68787583;
        } else {
          result[0] += 1423746;
          result[1] += 0;
          result[2] += 6169566;
          result[3] += 58373588;
          result[4] += 0;
          result[5] += 19932444;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 10105805;
          result[2] += 0;
          result[3] += 0;
          result[4] += 75793540;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 84326817;
          result[2] += 0;
          result[3] += 1179396;
          result[4] += 393132;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 10027161;
          result[1] += 18717367;
          result[2] += 3676625;
          result[3] += 6350535;
          result[4] += 43116792;
          result[5] += 4010864;
        } else {
          result[0] += 58985712;
          result[1] += 616770;
          result[2] += 5607006;
          result[3] += 7793739;
          result[4] += 5046306;
          result[5] += 7849809;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5128319;
          result[3] += 3846239;
          result[4] += 7692478;
          result[5] += 69232308;
        } else {
          result[0] += 7060220;
          result[1] += 11767033;
          result[2] += 32947694;
          result[3] += 20003957;
          result[4] += 2353406;
          result[5] += 11767033;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37039167;
          result[3] += 39403369;
          result[4] += 0;
          result[5] += 9456808;
        } else {
          result[0] += 13488327;
          result[1] += 0;
          result[2] += 63892075;
          result[3] += 8518943;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 73524016;
          result[3] += 9463487;
          result[4] += 0;
          result[5] += 2911842;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 57266230;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42900000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 82788031;
          result[3] += 3111314;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 2505397;
          result[1] += 357913;
          result[2] += 0;
          result[3] += 0;
          result[4] += 81246464;
          result[5] += 1789569;
        } else {
          result[0] += 39045157;
          result[1] += 15618062;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10932644;
          result[5] += 20303481;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5089562;
          result[4] += 5193430;
          result[5] += 75616352;
        } else {
          result[0] += 617980;
          result[1] += 5870818;
          result[2] += 0;
          result[3] += 33679959;
          result[4] += 3707885;
          result[5] += 42022701;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 1448904;
          result[1] += 84450441;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 7809031;
          result[1] += 14385057;
          result[2] += 1644006;
          result[3] += 3288013;
          result[4] += 54663220;
          result[5] += 4110016;
        } else {
          result[0] += 65404688;
          result[1] += 1900953;
          result[2] += 1722739;
          result[3] += 5643456;
          result[4] += 4692979;
          result[5] += 6534528;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8692195;
          result[3] += 56754924;
          result[4] += 511305;
          result[5] += 19940919;
        } else {
          result[0] += 9544371;
          result[1] += 0;
          result[2] += 6362914;
          result[3] += 6362914;
          result[4] += 3181457;
          result[5] += 60447687;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ed0000))) ) ) {
          result[0] += 3346727;
          result[1] += 0;
          result[2] += 60798887;
          result[3] += 17849214;
          result[4] += 0;
          result[5] += 3904515;
        } else {
          result[0] += 62038416;
          result[1] += 0;
          result[2] += 4772185;
          result[3] += 0;
          result[4] += 9544371;
          result[5] += 9544371;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38592459;
          result[3] += 18673770;
          result[4] += 0;
          result[5] += 28633115;
        } else {
          result[0] += 2816371;
          result[1] += 1408185;
          result[2] += 71817485;
          result[3] += 5632743;
          result[4] += 0;
          result[5] += 4224557;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 71173743;
          result[3] += 13498468;
          result[4] += 0;
          result[5] += 1227133;
        } else {
          result[0] += 405185;
          result[1] += 0;
          result[2] += 82927984;
          result[3] += 2566175;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 1182101;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 74866402;
          result[5] += 9850842;
        } else {
          result[0] += 30317416;
          result[1] += 12632256;
          result[2] += 0;
          result[3] += 1263225;
          result[4] += 39159995;
          result[5] += 2526451;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 101296;
          result[1] += 405185;
          result[2] += 202592;
          result[3] += 3342781;
          result[4] += 5672598;
          result[5] += 76174891;
        } else {
          result[0] += 0;
          result[1] += 1882725;
          result[2] += 3530110;
          result[3] += 34595079;
          result[4] += 2588747;
          result[5] += 43302683;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 52745212;
          result[2] += 0;
          result[3] += 12056048;
          result[4] += 21098084;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85706313;
          result[2] += 0;
          result[3] += 0;
          result[4] += 193032;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 63351568;
          result[1] += 3651202;
          result[2] += 128112;
          result[3] += 2049797;
          result[4] += 13836136;
          result[5] += 2882528;
        } else {
          result[0] += 14661157;
          result[1] += 1315744;
          result[2] += 24247298;
          result[3] += 24059335;
          result[4] += 3383344;
          result[5] += 18232465;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16183934;
          result[3] += 12449180;
          result[4] += 2489836;
          result[5] += 54776394;
        } else {
          result[0] += 4685418;
          result[1] += 3123612;
          result[2] += 45292382;
          result[3] += 14056256;
          result[4] += 1561806;
          result[5] += 17179869;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41358944;
          result[3] += 38177487;
          result[4] += 0;
          result[5] += 6362914;
        } else {
          result[0] += 456911;
          result[1] += 0;
          result[2] += 75847294;
          result[3] += 9595139;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 71206036;
          result[3] += 14693309;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 83382148;
          result[3] += 2517196;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 1584858;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 81778713;
          result[5] += 2535774;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1739733;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2500867;
          result[4] += 2827067;
          result[5] += 78831678;
        } else {
          result[0] += 5113056;
          result[1] += 3579139;
          result[2] += 3408704;
          result[3] += 23860929;
          result[4] += 7499149;
          result[5] += 42438367;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1328340;
          result[1] += 31437389;
          result[2] += 0;
          result[3] += 1328340;
          result[4] += 49591374;
          result[5] += 2213900;
        } else {
          result[0] += 67380623;
          result[1] += 437942;
          result[2] += 2314840;
          result[3] += 4879933;
          result[4] += 6006072;
          result[5] += 4879933;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42910000))) ) ) {
          result[0] += 397682;
          result[1] += 84905140;
          result[2] += 0;
          result[3] += 0;
          result[4] += 596523;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 34359738;
          result[2] += 0;
          result[3] += 51539607;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 1209849;
          result[2] += 4839399;
          result[3] += 13308349;
          result[4] += 14518199;
          result[5] += 52023547;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9626650;
          result[3] += 55538370;
          result[4] += 0;
          result[5] += 20734324;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 2321603;
          result[1] += 0;
          result[2] += 30180851;
          result[3] += 40628069;
          result[4] += 2321603;
          result[5] += 10447217;
        } else {
          result[0] += 1130254;
          result[1] += 0;
          result[2] += 72336291;
          result[3] += 12432800;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 13362120;
          result[2] += 17179869;
          result[3] += 13362120;
          result[4] += 13362120;
          result[5] += 28633115;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 79763678;
          result[3] += 6135667;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 61356675;
          result[1] += 0;
          result[2] += 24542670;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 521867;
          result[1] += 0;
          result[2] += 78801951;
          result[3] += 5844912;
          result[4] += 0;
          result[5] += 730614;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 1125318;
          result[1] += 3751063;
          result[2] += 0;
          result[3] += 0;
          result[4] += 77647006;
          result[5] += 3375956;
        } else {
          result[0] += 51835812;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1481023;
          result[4] += 16291255;
          result[5] += 16291255;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 115301;
          result[3] += 2997829;
          result[4] += 4035539;
          result[5] += 78750675;
        } else {
          result[0] += 0;
          result[1] += 1863326;
          result[2] += 745330;
          result[3] += 29813222;
          result[4] += 6148977;
          result[5] += 47328489;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 11204262;
          result[2] += 0;
          result[3] += 0;
          result[4] += 74695083;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85508894;
          result[2] += 0;
          result[3] += 0;
          result[4] += 390451;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 66081369;
          result[1] += 4118021;
          result[2] += 257376;
          result[3] += 1479913;
          result[4] += 12675783;
          result[5] += 1286881;
        } else {
          result[0] += 20132659;
          result[1] += 1342177;
          result[2] += 13690208;
          result[3] += 23085449;
          result[4] += 3221225;
          result[5] += 24427626;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 30317416;
          result[4] += 0;
          result[5] += 55581929;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1908874;
          result[3] += 64901728;
          result[4] += 0;
          result[5] += 19088743;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 22167573;
          result[3] += 58189879;
          result[4] += 0;
          result[5] += 5541893;
        } else {
          result[0] += 4294967;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 19327352;
          result[4] += 0;
          result[5] += 8589934;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53330873;
          result[3] += 26054777;
          result[4] += 0;
          result[5] += 6513694;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 79536431;
          result[3] += 6362914;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 59055800;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1021260;
          result[1] += 0;
          result[2] += 80793043;
          result[3] += 3290727;
          result[4] += 0;
          result[5] += 794313;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 864758;
          result[1] += 864758;
          result[2] += 0;
          result[3] += 288252;
          result[4] += 80134289;
          result[5] += 3747286;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 753503;
          result[1] += 94187;
          result[2] += 188375;
          result[3] += 6028024;
          result[4] += 3673327;
          result[5] += 75161927;
        } else {
          result[0] += 19822925;
          result[1] += 440509;
          result[2] += 2936729;
          result[3] += 29660970;
          result[4] += 7782333;
          result[5] += 25255876;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 27126109;
          result[2] += 0;
          result[3] += 2260509;
          result[4] += 27126109;
          result[5] += 29386618;
        } else {
          result[0] += 0;
          result[1] += 82758939;
          result[2] += 369459;
          result[3] += 923648;
          result[4] += 1662567;
          result[5] += 184729;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
          result[0] += 68865688;
          result[1] += 2851127;
          result[2] += 804164;
          result[3] += 1900751;
          result[4] += 8553381;
          result[5] += 2924233;
        } else {
          result[0] += 12938813;
          result[1] += 2875291;
          result[2] += 28034096;
          result[3] += 18329985;
          result[4] += 6469406;
          result[5] += 17251751;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 4772185;
          result[2] += 12725829;
          result[3] += 15907286;
          result[4] += 6362914;
          result[5] += 46131130;
        } else {
          result[0] += 36814005;
          result[1] += 4090445;
          result[2] += 40904450;
          result[3] += 0;
          result[4] += 4090445;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9761289;
          result[3] += 70281283;
          result[4] += 0;
          result[5] += 5856773;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 68719476;
          result[3] += 8589934;
          result[4] += 0;
          result[5] += 8589934;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 65014014;
          result[3] += 17853589;
          result[4] += 0;
          result[5] += 3031741;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 2016416;
          result[1] += 0;
          result[2] += 73800846;
          result[3] += 9678799;
          result[4] += 0;
          result[5] += 403283;
        } else {
          result[0] += 699791;
          result[1] += 0;
          result[2] += 83100181;
          result[3] += 2099373;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42900000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 84405444;
          result[5] += 1493901;
        } else {
          result[0] += 12271335;
          result[1] += 0;
          result[2] += 12271335;
          result[3] += 12271335;
          result[4] += 0;
          result[5] += 49085340;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          result[0] += 65516450;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 18926974;
          result[5] += 1455921;
        } else {
          result[0] += 0;
          result[1] += 813160;
          result[2] += 0;
          result[3] += 14341198;
          result[4] += 3474414;
          result[5] += 67270572;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 82731691;
          result[2] += 0;
          result[3] += 372665;
          result[4] += 2794989;
          result[5] += 0;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 65982519;
          result[1] += 4561595;
          result[2] += 513982;
          result[3] += 2505665;
          result[4] += 10665139;
          result[5] += 1670443;
        } else {
          result[0] += 13191685;
          result[1] += 0;
          result[2] += 17793435;
          result[3] += 25769803;
          result[4] += 6749234;
          result[5] += 22395186;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4772185;
          result[3] += 3181457;
          result[4] += 6362914;
          result[5] += 71582788;
        } else {
          result[0] += 0;
          result[1] += 2622880;
          result[2] += 15737284;
          result[3] += 37376051;
          result[4] += 0;
          result[5] += 30163129;
        }
      } else {
        result[0] += 0;
        result[1] += 85899345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
          result[0] += 38738920;
          result[1] += 0;
          result[2] += 15158708;
          result[3] += 10105805;
          result[4] += 6737203;
          result[5] += 15158708;
        } else {
          result[0] += 479884;
          result[1] += 0;
          result[2] += 59265749;
          result[3] += 20155153;
          result[4] += 0;
          result[5] += 5998557;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 130744;
          result[1] += 0;
          result[2] += 82892215;
          result[3] += 2614896;
          result[4] += 0;
          result[5] += 261489;
        } else {
          result[0] += 33405301;
          result[1] += 0;
          result[2] += 52494044;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 607062;
          result[1] += 303531;
          result[2] += 0;
          result[3] += 607062;
          result[4] += 78007533;
          result[5] += 6374156;
        } else {
          result[0] += 0;
          result[1] += 80530636;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5368709;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 5581277;
          result[1] += 174414;
          result[2] += 87207;
          result[3] += 4883617;
          result[4] += 4447580;
          result[5] += 70725248;
        } else {
          result[0] += 0;
          result[1] += 376751;
          result[2] += 0;
          result[3] += 54252218;
          result[4] += 376751;
          result[5] += 30893624;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 2078209;
          result[1] += 22860309;
          result[2] += 692736;
          result[3] += 1385473;
          result[4] += 56804406;
          result[5] += 2078209;
        } else {
          result[0] += 0;
          result[1] += 83891309;
          result[2] += 223115;
          result[3] += 0;
          result[4] += 1784921;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 71463682;
          result[1] += 2930010;
          result[2] += 571709;
          result[3] += 2072446;
          result[4] += 6431731;
          result[5] += 2429765;
        } else {
          result[0] += 11404195;
          result[1] += 2391202;
          result[2] += 25383532;
          result[3] += 25567471;
          result[4] += 4230588;
          result[5] += 16922355;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42400000))) ) ) {
          result[0] += 0;
          result[1] += 81378327;
          result[2] += 4521018;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 12419182;
          result[1] += 2069863;
          result[2] += 8279455;
          result[3] += 9314386;
          result[4] += 8279455;
          result[5] += 45537002;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 10737418;
          result[4] += 0;
          result[5] += 39370533;
        } else {
          result[0] += 2526451;
          result[1] += 0;
          result[2] += 83372894;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 34359738;
          result[4] += 0;
          result[5] += 22906492;
        } else {
          result[0] += 1282079;
          result[1] += 0;
          result[2] += 68377588;
          result[3] += 13675517;
          result[4] += 0;
          result[5] += 2564159;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 57266230;
          result[3] += 28633115;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 120645;
          result[1] += 0;
          result[2] += 82279991;
          result[3] += 3498709;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x423a0000))) ) ) {
          result[0] += 64424509;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 21474836;
          result[5] += 0;
        } else {
          result[0] += 784468;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 82761470;
          result[5] += 2353406;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x426a0000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5436667;
          result[3] += 0;
          result[4] += 35882005;
          result[5] += 44580673;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 8180890;
          result[2] += 0;
          result[3] += 14316557;
          result[4] += 36814005;
          result[5] += 26587892;
        } else {
          result[0] += 0;
          result[1] += 294512;
          result[2] += 0;
          result[3] += 3239632;
          result[4] += 4221339;
          result[5] += 78143862;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 818089;
          result[2] += 4090445;
          result[3] += 15543691;
          result[4] += 4090445;
          result[5] += 61356675;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 461824;
          result[3] += 63731772;
          result[4] += 923648;
          result[5] += 20782099;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 4772185;
          result[1] += 14316557;
          result[2] += 0;
          result[3] += 0;
          result[4] += 66810602;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 82671395;
          result[2] += 0;
          result[3] += 358661;
          result[4] += 2869289;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 74683189;
          result[1] += 2051735;
          result[2] += 478738;
          result[3] += 1709779;
          result[4] += 5881643;
          result[5] += 1094259;
        } else {
          result[0] += 21277819;
          result[1] += 4728404;
          result[2] += 3152269;
          result[3] += 24824122;
          result[4] += 10244876;
          result[5] += 21671853;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11498337;
          result[3] += 52080705;
          result[4] += 0;
          result[5] += 22320302;
        } else {
          result[0] += 1408185;
          result[1] += 0;
          result[2] += 48582416;
          result[3] += 21826882;
          result[4] += 0;
          result[5] += 14081859;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 16421933;
          result[1] += 1894838;
          result[2] += 39791608;
          result[3] += 10737418;
          result[4] += 3789677;
          result[5] += 13263869;
        } else {
          result[0] += 2090250;
          result[1] += 0;
          result[2] += 77239736;
          result[3] += 5773073;
          result[4] += 199071;
          result[5] += 597214;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 1193046;
          result[2] += 0;
          result[3] += 0;
          result[4] += 80331795;
          result[5] += 4374503;
        } else {
          result[0] += 37066156;
          result[1] += 0;
          result[2] += 588351;
          result[3] += 588351;
          result[4] += 25887474;
          result[5] += 21769012;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2530368;
          result[4] += 1198595;
          result[5] += 82170382;
        } else {
          result[0] += 173885;
          result[1] += 4173247;
          result[2] += 869426;
          result[3] += 30256044;
          result[4] += 5738215;
          result[5] += 44688526;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 19088743;
          result[2] += 0;
          result[3] += 0;
          result[4] += 66810602;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85305571;
          result[2] += 0;
          result[3] += 0;
          result[4] += 593774;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 65053202;
          result[1] += 2978020;
          result[2] += 794138;
          result[3] += 2316238;
          result[4] += 10853230;
          result[5] += 3904515;
        } else {
          result[0] += 14422606;
          result[1] += 2757262;
          result[2] += 19088743;
          result[3] += 23542783;
          result[4] += 7847594;
          result[5] += 18240354;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1867377;
          result[3] += 11204262;
          result[4] += 11204262;
          result[5] += 61623443;
        } else {
          result[0] += 57266230;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5453926;
          result[3] += 61356675;
          result[4] += 4090445;
          result[5] += 14998298;
        } else {
          result[0] += 2045222;
          result[1] += 0;
          result[2] += 57266230;
          result[3] += 20452225;
          result[4] += 0;
          result[5] += 6135667;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 7362801;
          result[1] += 22088403;
          result[2] += 14725602;
          result[3] += 9817068;
          result[4] += 2454267;
          result[5] += 29451204;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 55105240;
          result[3] += 24311135;
          result[4] += 2431113;
          result[5] += 4051855;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42d50000))) ) ) {
          result[0] += 1188918;
          result[1] += 0;
          result[2] += 78567683;
          result[3] += 5746438;
          result[4] += 0;
          result[5] += 396306;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42360000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 6135667;
          result[2] += 0;
          result[3] += 0;
          result[4] += 67492343;
          result[5] += 12271335;
        } else {
          result[0] += 861146;
          result[1] += 83531193;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1291719;
          result[5] += 215286;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 5889080;
          result[1] += 16245739;
          result[2] += 0;
          result[3] += 0;
          result[4] += 59703091;
          result[5] += 4061434;
        } else {
          result[0] += 77509177;
          result[1] += 1398361;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4994148;
          result[5] += 1997659;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 0;
          result[4] += 75161927;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 437146;
          result[3] += 3715747;
          result[4] += 1639300;
          result[5] += 80107150;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 1216704;
          result[1] += 2190068;
          result[2] += 1338375;
          result[3] += 33337706;
          result[4] += 8273591;
          result[5] += 39542900;
        } else {
          result[0] += 22223958;
          result[1] += 8739759;
          result[2] += 10487710;
          result[3] += 11985955;
          result[4] += 14982444;
          result[5] += 17479518;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 79291703;
          result[3] += 6607641;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 84516103;
          result[1] += 0;
          result[2] += 553296;
          result[3] += 276648;
          result[4] += 553296;
          result[5] += 0;
        } else {
          result[0] += 25053975;
          result[1] += 0;
          result[2] += 39370533;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 3303820;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 33038209;
          result[4] += 0;
          result[5] += 6607641;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 74836551;
          result[3] += 8459784;
          result[4] += 0;
          result[5] += 2603010;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 60129542;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 25769803;
          result[5] += 0;
        } else {
          result[0] += 986089;
          result[1] += 0;
          result[2] += 79544547;
          result[3] += 4820881;
          result[4] += 0;
          result[5] += 547827;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
          result[0] += 650752;
          result[1] += 3253763;
          result[2] += 0;
          result[3] += 1301505;
          result[4] += 74185798;
          result[5] += 6507526;
        } else {
          result[0] += 59803342;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9786001;
          result[5] += 16310002;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 296204;
          result[2] += 197469;
          result[3] += 3751925;
          result[4] += 5924092;
          result[5] += 75729653;
        } else {
          result[0] += 260301;
          result[1] += 0;
          result[2] += 1561806;
          result[3] += 43470275;
          result[4] += 1301505;
          result[5] += 39305458;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 9544371;
          result[2] += 0;
          result[3] += 0;
          result[4] += 73968881;
          result[5] += 2386092;
        } else {
          result[0] += 0;
          result[1] += 83461154;
          result[2] += 187553;
          result[3] += 0;
          result[4] += 2250637;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 66587567;
          result[1] += 2353406;
          result[2] += 969049;
          result[3] += 2214971;
          result[4] += 11074855;
          result[5] += 2699495;
        } else {
          result[0] += 17492230;
          result[1] += 2967431;
          result[2] += 21396746;
          result[3] += 21396746;
          result[4] += 4529238;
          result[5] += 18116952;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 46253493;
          result[4] += 0;
          result[5] += 39645851;
        } else {
          result[0] += 23427094;
          result[1] += 0;
          result[2] += 54663220;
          result[3] += 0;
          result[4] += 0;
          result[5] += 7809031;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 357913;
          result[1] += 0;
          result[2] += 68003648;
          result[3] += 15748213;
          result[4] += 0;
          result[5] += 1789569;
        } else {
          result[0] += 71582788;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42e30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 74446099;
          result[3] += 9305762;
          result[4] += 0;
          result[5] += 2147483;
        } else {
          result[0] += 51539607;
          result[1] += 0;
          result[2] += 25769803;
          result[3] += 8589934;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 72684061;
          result[3] += 0;
          result[4] += 0;
          result[5] += 13215283;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 84998303;
          result[3] += 901042;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 365529;
          result[1] += 5482936;
          result[2] += 0;
          result[3] += 0;
          result[4] += 77857705;
          result[5] += 2193174;
        } else {
          result[0] += 50931470;
          result[1] += 1520342;
          result[2] += 760171;
          result[3] += 760171;
          result[4] += 17483937;
          result[5] += 14443252;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3545778;
          result[4] += 4003298;
          result[5] += 78350268;
        } else {
          result[0] += 327860;
          result[1] += 3606461;
          result[2] += 2458950;
          result[3] += 30818849;
          result[4] += 7376852;
          result[5] += 41310372;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 85499814;
          result[2] += 0;
          result[3] += 0;
          result[4] += 399531;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 27201459;
          result[2] += 0;
          result[3] += 0;
          result[4] += 58697886;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 8409726;
          result[1] += 22225704;
          result[2] += 5406252;
          result[3] += 4805557;
          result[4] += 37243073;
          result[5] += 7809031;
        } else {
          result[0] += 64317211;
          result[1] += 613128;
          result[2] += 4107963;
          result[3] += 7050981;
          result[4] += 3985337;
          result[5] += 5824723;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1827645;
          result[3] += 3655291;
          result[4] += 14621165;
          result[5] += 65795243;
        } else {
          result[0] += 5965232;
          result[1] += 19088743;
          result[2] += 2386092;
          result[3] += 40563580;
          result[4] += 2386092;
          result[5] += 15509604;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 5823684;
          result[1] += 0;
          result[2] += 69884213;
          result[3] += 8735526;
          result[4] += 0;
          result[5] += 1455921;
        } else {
          result[0] += 60129542;
          result[1] += 0;
          result[2] += 8589934;
          result[3] += 8589934;
          result[4] += 8589934;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20894435;
          result[3] += 60361702;
          result[4] += 0;
          result[5] += 4643207;
        } else {
          result[0] += 21474836;
          result[1] += 0;
          result[2] += 64424509;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 433835;
          result[1] += 0;
          result[2] += 63773756;
          result[3] += 15184227;
          result[4] += 0;
          result[5] += 6507526;
        } else {
          result[0] += 353980;
          result[1] += 0;
          result[2] += 81887563;
          result[3] += 3421814;
          result[4] += 0;
          result[5] += 235987;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 554189;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85345156;
          result[5] += 0;
        } else {
          result[0] += 1684300;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53897628;
          result[5] += 30317416;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2749826;
          result[4] += 1833217;
          result[5] += 81316301;
        } else {
          result[0] += 7485781;
          result[1] += 4865758;
          result[2] += 0;
          result[3] += 28445970;
          result[4] += 6737203;
          result[5] += 38364631;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 14489046;
          result[1] += 19663705;
          result[2] += 3622261;
          result[3] += 2587329;
          result[4] += 40362343;
          result[5] += 5174659;
        } else {
          result[0] += 62227220;
          result[1] += 292971;
          result[2] += 3984417;
          result[3] += 7324296;
          result[4] += 4980521;
          result[5] += 7089918;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 73628010;
          result[5] += 12271335;
        } else {
          result[0] += 0;
          result[1] += 85692857;
          result[2] += 0;
          result[3] += 0;
          result[4] += 206488;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 71582788;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1101273;
          result[3] += 9911462;
          result[4] += 8810189;
          result[5] += 66076419;
        } else {
          result[0] += 412977;
          result[1] += 825955;
          result[2] += 26430567;
          result[3] += 32625232;
          result[4] += 2064888;
          result[5] += 23539724;
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27126109;
          result[3] += 58773236;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 67708896;
          result[3] += 13137547;
          result[4] += 0;
          result[5] += 5052902;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
          result[0] += 30678337;
          result[1] += 0;
          result[2] += 55221008;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 208493;
          result[1] += 0;
          result[2] += 79227552;
          result[3] += 6359053;
          result[4] += 0;
          result[5] += 104246;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 1700977;
          result[2] += 0;
          result[3] += 0;
          result[4] += 78670193;
          result[5] += 5528175;
        } else {
          result[0] += 43411497;
          result[1] += 0;
          result[2] += 0;
          result[3] += 923648;
          result[4] += 24938519;
          result[5] += 16625679;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 693535;
          result[2] += 0;
          result[3] += 4260290;
          result[4] += 5746438;
          result[5] += 75199081;
        } else {
          result[0] += 773867;
          result[1] += 0;
          result[2] += 515911;
          result[3] += 43336606;
          result[4] += 257955;
          result[5] += 41015002;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 200231;
          result[1] += 85298651;
          result[2] += 0;
          result[3] += 400463;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 64170103;
          result[1] += 4070491;
          result[2] += 1077483;
          result[3] += 2154966;
          result[4] += 11313572;
          result[5] += 3112728;
        } else {
          result[0] += 15401145;
          result[1] += 1735340;
          result[2] += 22776341;
          result[3] += 20173331;
          result[4] += 7158278;
          result[5] += 18654908;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e40000))) ) ) {
          result[0] += 0;
          result[1] += 4908534;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7362801;
          result[5] += 73628010;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 2962046;
          result[2] += 26658417;
          result[3] += 50354788;
          result[4] += 0;
          result[5] += 5924092;
        } else {
          result[0] += 1827645;
          result[1] += 0;
          result[2] += 56657015;
          result[3] += 9138228;
          result[4] += 0;
          result[5] += 18276456;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 44714728;
          result[3] += 34124397;
          result[4] += 0;
          result[5] += 7060220;
        } else {
          result[0] += 894784;
          result[1] += 0;
          result[2] += 76951497;
          result[3] += 8053063;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 28633115;
          result[1] += 0;
          result[2] += 47721858;
          result[3] += 0;
          result[4] += 0;
          result[5] += 9544371;
        } else {
          result[0] += 234377;
          result[1] += 0;
          result[2] += 82383683;
          result[3] += 3046907;
          result[4] += 0;
          result[5] += 234377;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 320519;
          result[1] += 0;
          result[2] += 0;
          result[3] += 320519;
          result[4] += 77565827;
          result[5] += 7692478;
        } else {
          result[0] += 42548274;
          result[1] += 0;
          result[2] += 802797;
          result[3] += 8027976;
          result[4] += 13647559;
          result[5] += 20872738;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 180460;
          result[1] += 360921;
          result[2] += 270691;
          result[3] += 4601750;
          result[4] += 5684515;
          result[5] += 74801006;
        } else {
          result[0] += 0;
          result[1] += 965161;
          result[2] += 321720;
          result[3] += 43432253;
          result[4] += 2573763;
          result[5] += 38606447;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 41318672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 44580673;
          result[5] += 0;
        } else {
          result[0] += 609215;
          result[1] += 84883987;
          result[2] += 0;
          result[3] += 0;
          result[4] += 406143;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 72747955;
          result[1] += 3253238;
          result[2] += 0;
          result[3] += 553742;
          result[4] += 9067537;
          result[5] += 276871;
        } else {
          result[0] += 16667037;
          result[1] += 1495759;
          result[2] += 24145836;
          result[3] += 21367996;
          result[4] += 2991519;
          result[5] += 19231196;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 1789569;
          result[2] += 8947848;
          result[3] += 5368709;
          result[4] += 17895697;
          result[5] += 51897521;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20567449;
          result[3] += 44764447;
          result[4] += 6049249;
          result[5] += 14518199;
        } else {
          result[0] += 2419699;
          result[1] += 6049249;
          result[2] += 48393997;
          result[3] += 24196998;
          result[4] += 0;
          result[5] += 4839399;
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 7310582;
          result[1] += 0;
          result[2] += 38380558;
          result[3] += 38380558;
          result[4] += 0;
          result[5] += 1827645;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 72155450;
          result[3] += 12025908;
          result[4] += 0;
          result[5] += 1717986;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 753503;
          result[1] += 0;
          result[2] += 69322279;
          result[3] += 15446812;
          result[4] += 0;
          result[5] += 376751;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 83614788;
          result[3] += 2284557;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d00000))) ) ) {
          result[0] += 1843333;
          result[1] += 368666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 82212678;
          result[5] += 1474666;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
          result[0] += 80911641;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4987703;
          result[5] += 0;
        } else {
          result[0] += 12494450;
          result[1] += 780903;
          result[2] += 0;
          result[3] += 3904515;
          result[4] += 30455222;
          result[5] += 38264254;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 68719476;
          result[5] += 17179869;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 252645;
          result[3] += 2779096;
          result[4] += 2147483;
          result[5] += 80720120;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 486681;
          result[1] += 3893454;
          result[2] += 1946727;
          result[3] += 13627091;
          result[4] += 15817160;
          result[5] += 50128230;
        } else {
          result[0] += 1395116;
          result[1] += 199302;
          result[2] += 5381165;
          result[3] += 45640255;
          result[4] += 0;
          result[5] += 33283505;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42900000))) ) ) {
          result[0] += 7579354;
          result[1] += 28422577;
          result[2] += 631612;
          result[3] += 1263225;
          result[4] += 45476124;
          result[5] += 2526451;
        } else {
          result[0] += 73428836;
          result[1] += 2246240;
          result[2] += 3795372;
          result[3] += 1781501;
          result[4] += 3175719;
          result[5] += 1471674;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 10475529;
          result[1] += 12570635;
          result[2] += 10475529;
          result[3] += 2095105;
          result[4] += 25141271;
          result[5] += 25141271;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40823451;
          result[3] += 35720520;
          result[4] += 850488;
          result[5] += 8504885;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 4772185;
          result[1] += 0;
          result[2] += 64003434;
          result[3] += 16000858;
          result[4] += 0;
          result[5] += 1122867;
        } else {
          result[0] += 594048;
          result[1] += 0;
          result[2] += 81384580;
          result[3] += 3564288;
          result[4] += 0;
          result[5] += 356428;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 71582788;
          result[5] += 14316557;
        } else {
          result[0] += 791699;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85107646;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 2977843;
          result[1] += 305419;
          result[2] += 229064;
          result[3] += 6337462;
          result[4] += 4428588;
          result[5] += 71620965;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1419823;
          result[3] += 61762339;
          result[4] += 0;
          result[5] += 22717182;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 2643056;
          result[1] += 17179869;
          result[2] += 3964585;
          result[3] += 660764;
          result[4] += 59468777;
          result[5] += 1982292;
        } else {
          result[0] += 0;
          result[1] += 84421507;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1477838;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 71546907;
          result[1] += 2798725;
          result[2] += 215286;
          result[3] += 1507006;
          result[4] += 8037365;
          result[5] += 1794054;
        } else {
          result[0] += 19756849;
          result[1] += 1431655;
          result[2] += 10021590;
          result[3] += 23479154;
          result[4] += 9448928;
          result[5] += 21761167;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
          result[0] += 3775795;
          result[1] += 943948;
          result[2] += 7551590;
          result[3] += 19822925;
          result[4] += 4719744;
          result[5] += 49085340;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 52344913;
          result[4] += 0;
          result[5] += 22817013;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7579354;
          result[3] += 60634832;
          result[4] += 0;
          result[5] += 17685159;
        } else {
          result[0] += 0;
          result[1] += 7040929;
          result[2] += 53511067;
          result[3] += 9153208;
          result[4] += 4928650;
          result[5] += 11265487;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1060485;
          result[1] += 0;
          result[2] += 45600887;
          result[3] += 31814572;
          result[4] += 0;
          result[5] += 7423400;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 33038209;
          result[1] += 0;
          result[2] += 46253493;
          result[3] += 6607641;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 80409538;
          result[3] += 5059234;
          result[4] += 0;
          result[5] += 430573;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 692736;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 78971979;
          result[5] += 6234629;
        } else {
          result[0] += 5726623;
          result[1] += 5726623;
          result[2] += 34359738;
          result[3] += 0;
          result[4] += 22906492;
          result[5] += 17179869;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 3194247;
          result[1] += 863310;
          result[2] += 0;
          result[3] += 4057557;
          result[4] += 4316550;
          result[5] += 73467681;
        } else {
          result[0] += 346368;
          result[1] += 0;
          result[2] += 2770946;
          result[3] += 49530671;
          result[4] += 1731841;
          result[5] += 31519518;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42890000))) ) ) {
          result[0] += 5206020;
          result[1] += 21257918;
          result[2] += 0;
          result[3] += 0;
          result[4] += 55530890;
          result[5] += 3904515;
        } else {
          result[0] += 59307403;
          result[1] += 1814375;
          result[2] += 3005059;
          result[3] += 7597697;
          result[4] += 6010119;
          result[5] += 8164690;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 385198;
          result[1] += 85514147;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11083786;
          result[3] += 54864743;
          result[4] += 554189;
          result[5] += 19396626;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 56879296;
          result[3] += 22055237;
          result[4] += 0;
          result[5] += 6964811;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 50107951;
          result[3] += 28633115;
          result[4] += 0;
          result[5] += 7158278;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 83256289;
          result[3] += 2643056;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24542670;
          result[3] += 12271335;
          result[4] += 0;
          result[5] += 49085340;
        } else {
          result[0] += 4382619;
          result[1] += 0;
          result[2] += 67054081;
          result[3] += 11394811;
          result[4] += 1314785;
          result[5] += 1753047;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42800000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 82279600;
          result[3] += 3062861;
          result[4] += 0;
          result[5] += 556883;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 692736;
          result[1] += 2078209;
          result[2] += 0;
          result[3] += 0;
          result[4] += 78971979;
          result[5] += 4156419;
        } else {
          result[0] += 0;
          result[1] += 78319991;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7579354;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 122888;
          result[3] += 3195111;
          result[4] += 983111;
          result[5] += 81598234;
        } else {
          result[0] += 8941195;
          result[1] += 319328;
          result[2] += 319328;
          result[3] += 24268960;
          result[4] += 8462203;
          result[5] += 43588329;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 10412041;
          result[2] += 0;
          result[3] += 0;
          result[4] += 75487303;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 67369440;
          result[1] += 2250059;
          result[2] += 860317;
          result[3] += 1985346;
          result[4] += 9529665;
          result[5] += 3904515;
        } else {
          result[0] += 15502005;
          result[1] += 2006141;
          result[2] += 19149535;
          result[3] += 21702807;
          result[4] += 6018425;
          result[5] += 21520430;
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6607641;
          result[3] += 0;
          result[4] += 16519104;
          result[5] += 62772598;
        } else {
          result[0] += 6028024;
          result[1] += 7535030;
          result[2] += 7535030;
          result[3] += 48224194;
          result[4] += 4521018;
          result[5] += 12056048;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 73014444;
          result[3] += 8589934;
          result[4] += 0;
          result[5] += 4294967;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20211610;
          result[3] += 5052902;
          result[4] += 0;
          result[5] += 60634832;
        } else {
          result[0] += 349184;
          result[1] += 0;
          result[2] += 63551548;
          result[3] += 18506769;
          result[4] += 0;
          result[5] += 3491843;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 28633115;
          result[1] += 0;
          result[2] += 46854188;
          result[3] += 2603010;
          result[4] += 0;
          result[5] += 7809031;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 80627080;
          result[3] += 5272265;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42400000))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 56021312;
          result[5] += 29878033;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42620000))) ) ) {
          result[0] += 38177487;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28633115;
          result[5] += 19088743;
        } else {
          result[0] += 308251;
          result[1] += 102750;
          result[2] += 0;
          result[3] += 2774261;
          result[4] += 3801765;
          result[5] += 78912317;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 71582788;
          result[1] += 14316557;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1034931;
          result[1] += 1034931;
          result[2] += 1241918;
          result[3] += 31668915;
          result[4] += 5381645;
          result[5] += 45537002;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1908874;
          result[3] += 0;
          result[4] += 83990471;
          result[5] += 0;
        } else {
          result[0] += 354224;
          result[1] += 83419777;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2125344;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 70462163;
          result[1] += 3018826;
          result[2] += 137219;
          result[3] += 1166364;
          result[4] += 10017016;
          result[5] += 1097755;
        } else {
          result[0] += 23115770;
          result[1] += 0;
          result[2] += 9988296;
          result[3] += 25969569;
          result[4] += 4851458;
          result[5] += 21974251;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 479884;
          result[1] += 479884;
          result[2] += 23514346;
          result[3] += 34551692;
          result[4] += 4318961;
          result[5] += 22554576;
        } else {
          result[0] += 9831852;
          result[1] += 7761989;
          result[2] += 55368855;
          result[3] += 3104795;
          result[4] += 1552397;
          result[5] += 8279455;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 1952257;
          result[1] += 0;
          result[2] += 55639349;
          result[3] += 19522578;
          result[4] += 0;
          result[5] += 8785160;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 79724296;
          result[3] += 6175049;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          result[0] += 395849;
          result[1] += 1187548;
          result[2] += 0;
          result[3] += 0;
          result[4] += 81149151;
          result[5] += 3166796;
        } else {
          result[0] += 46037557;
          result[1] += 0;
          result[2] += 561433;
          result[3] += 561433;
          result[4] += 18527309;
          result[5] += 20211610;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 2845526;
          result[2] += 88922;
          result[3] += 5068594;
          result[4] += 3912599;
          result[5] += 73983701;
        } else {
          result[0] += 1812222;
          result[1] += 0;
          result[2] += 1449777;
          result[3] += 57266230;
          result[4] += 0;
          result[5] += 25371114;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 23315536;
          result[2] += 0;
          result[3] += 0;
          result[4] += 62583809;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 84730647;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1168698;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 65482300;
          result[1] += 1343226;
          result[2] += 1410388;
          result[3] += 2082001;
          result[4] += 9805554;
          result[5] += 5775874;
        } else {
          result[0] += 16962402;
          result[1] += 3914400;
          result[2] += 17179869;
          result[3] += 23051470;
          result[4] += 6306534;
          result[5] += 18484669;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 3014012;
          result[1] += 13563054;
          result[2] += 4521018;
          result[3] += 12056048;
          result[4] += 6028024;
          result[5] += 46717188;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29801813;
          result[3] += 50838388;
          result[4] += 0;
          result[5] += 5259143;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 5368709;
          result[2] += 33554431;
          result[3] += 30870077;
          result[4] += 0;
          result[5] += 16106127;
        } else {
          result[0] += 11512283;
          result[1] += 0;
          result[2] += 66417020;
          result[3] += 7970042;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 63039036;
          result[3] += 20782099;
          result[4] += 0;
          result[5] += 2078209;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
          result[0] += 16106127;
          result[1] += 0;
          result[2] += 64424509;
          result[3] += 0;
          result[4] += 0;
          result[5] += 5368709;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 83783598;
          result[3] += 2115747;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 1474666;
          result[1] += 4424000;
          result[2] += 0;
          result[3] += 0;
          result[4] += 78157344;
          result[5] += 1843333;
        } else {
          result[0] += 31167019;
          result[1] += 6081369;
          result[2] += 0;
          result[3] += 0;
          result[4] += 27366163;
          result[5] += 21284793;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 350609;
          result[2] += 87652;
          result[3] += 6749234;
          result[4] += 5259143;
          result[5] += 73452705;
        } else {
          result[0] += 933688;
          result[1] += 0;
          result[2] += 1400532;
          result[3] += 56488156;
          result[4] += 0;
          result[5] += 27076967;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 68487316;
          result[1] += 1741202;
          result[2] += 902845;
          result[3] += 2579559;
          result[4] += 10447217;
          result[5] += 1741202;
        } else {
          result[0] += 10595514;
          result[1] += 1702850;
          result[2] += 17028504;
          result[3] += 23839906;
          result[4] += 4919345;
          result[5] += 27813224;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 2386092;
          result[1] += 0;
          result[2] += 2386092;
          result[3] += 11930464;
          result[4] += 9544371;
          result[5] += 59652323;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 18926974;
          result[3] += 64060529;
          result[4] += 0;
          result[5] += 2911842;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20211610;
          result[3] += 5052902;
          result[4] += 5052902;
          result[5] += 55581929;
        } else {
          result[0] += 3655291;
          result[1] += 2741468;
          result[2] += 61835344;
          result[3] += 14621165;
          result[4] += 0;
          result[5] += 3046076;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 61960183;
          result[3] += 23939161;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 645859;
          result[1] += 0;
          result[2] += 74273870;
          result[3] += 10979615;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 84818850;
          result[3] += 900412;
          result[4] += 0;
          result[5] += 180082;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 442780;
          result[3] += 885560;
          result[4] += 76600963;
          result[5] += 7970042;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 112728;
          result[3] += 2141847;
          result[4] += 2480033;
          result[5] += 81164736;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42940000))) ) ) {
          result[0] += 18592932;
          result[1] += 7437172;
          result[2] += 743717;
          result[3] += 6321596;
          result[4] += 46482330;
          result[5] += 6321596;
        } else {
          result[0] += 4521018;
          result[1] += 361681;
          result[2] += 2350929;
          result[3] += 31647127;
          result[4] += 4882699;
          result[5] += 42135889;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 21036574;
          result[2] += 0;
          result[3] += 0;
          result[4] += 64862771;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 84686649;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1212696;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42910000))) ) ) {
          result[0] += 24795687;
          result[1] += 12840623;
          result[2] += 885560;
          result[3] += 1328340;
          result[4] += 40735772;
          result[5] += 5313361;
        } else {
          result[0] += 67933026;
          result[1] += 2983086;
          result[2] += 1694935;
          result[3] += 4135643;
          result[4] += 4745820;
          result[5] += 4406833;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 12271335;
          result[5] += 73628010;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6135667;
          result[3] += 56974055;
          result[4] += 0;
          result[5] += 22789622;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11893755;
          result[3] += 13215283;
          result[4] += 3964585;
          result[5] += 56825721;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 71582788;
          result[3] += 7158278;
          result[4] += 0;
          result[5] += 7158278;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42660000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1321528;
          result[1] += 1321528;
          result[2] += 46253493;
          result[3] += 31055917;
          result[4] += 0;
          result[5] += 5946877;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 19396626;
          result[1] += 11083786;
          result[2] += 13854733;
          result[3] += 2770946;
          result[4] += 11083786;
          result[5] += 27709466;
        } else {
          result[0] += 877518;
          result[1] += 0;
          result[2] += 77319161;
          result[3] += 7117652;
          result[4] += 0;
          result[5] += 585012;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 383479;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 84365429;
          result[5] += 1150437;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39045157;
          result[5] += 46854188;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2311193;
          result[4] += 2054393;
          result[5] += 81533758;
        } else {
          result[0] += 5368709;
          result[1] += 3947580;
          result[2] += 1105322;
          result[3] += 26685642;
          result[4] += 6000321;
          result[5] += 42791769;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 16106127;
          result[2] += 0;
          result[3] += 0;
          result[4] += 69793218;
          result[5] += 0;
        } else {
          result[0] += 200699;
          result[1] += 85698646;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 64117098;
          result[1] += 2283622;
          result[2] += 117108;
          result[3] += 2986275;
          result[4] += 11945103;
          result[5] += 4450136;
        } else {
          result[0] += 16825645;
          result[1] += 4206411;
          result[2] += 21917616;
          result[3] += 19482325;
          result[4] += 6198921;
          result[5] += 17268425;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5368709;
          result[3] += 0;
          result[4] += 16106127;
          result[5] += 64424509;
        } else {
          result[0] += 0;
          result[1] += 2629571;
          result[2] += 16653954;
          result[3] += 51714912;
          result[4] += 0;
          result[5] += 14900906;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 28633115;
          result[2] += 0;
          result[3] += 47721858;
          result[4] += 4772185;
          result[5] += 4772185;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 76857309;
          result[3] += 7535030;
          result[4] += 0;
          result[5] += 1507006;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 16361780;
          result[2] += 8180890;
          result[3] += 0;
          result[4] += 4090445;
          result[5] += 57266230;
        } else {
          result[0] += 4259471;
          result[1] += 0;
          result[2] += 59632603;
          result[3] += 13488327;
          result[4] += 0;
          result[5] += 8518943;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 872074;
          result[1] += 0;
          result[2] += 70638040;
          result[3] += 13953193;
          result[4] += 0;
          result[5] += 436037;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 83788397;
          result[3] += 1948567;
          result[4] += 0;
          result[5] += 162380;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42900000))) ) ) {
          result[0] += 698368;
          result[1] += 1047552;
          result[2] += 0;
          result[3] += 0;
          result[4] += 82058318;
          result[5] += 2095105;
        } else {
          result[0] += 12271335;
          result[1] += 0;
          result[2] += 18407002;
          result[3] += 0;
          result[4] += 18407002;
          result[5] += 36814005;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2457778;
          result[4] += 1966222;
          result[5] += 81475345;
        } else {
          result[0] += 6327760;
          result[1] += 3163880;
          result[2] += 2689298;
          result[3] += 29107697;
          result[4] += 8226088;
          result[5] += 36384621;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 5992977;
          result[1] += 13983614;
          result[2] += 0;
          result[3] += 0;
          result[4] += 65922753;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85522594;
          result[2] += 0;
          result[3] += 0;
          result[4] += 376751;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 68799944;
          result[1] += 4224557;
          result[2] += 67056;
          result[3] += 1139960;
          result[4] += 9320850;
          result[5] += 2346976;
        } else {
          result[0] += 17009771;
          result[1] += 3968946;
          result[2] += 14741801;
          result[3] += 23530183;
          result[4] += 6520412;
          result[5] += 20128229;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3158064;
          result[3] += 18948385;
          result[4] += 1894838;
          result[5] += 61898058;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 20043180;
          result[2] += 0;
          result[3] += 54402919;
          result[4] += 2863311;
          result[5] += 8589934;
        } else {
          result[0] += 19283526;
          result[1] += 5259143;
          result[2] += 49085340;
          result[3] += 4382619;
          result[4] += 2629571;
          result[5] += 5259143;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36814005;
          result[3] += 30678337;
          result[4] += 0;
          result[5] += 18407002;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 846298;
          result[1] += 0;
          result[2] += 69396515;
          result[3] += 13963933;
          result[4] += 0;
          result[5] += 1692597;
        } else {
          result[0] += 514367;
          result[1] += 0;
          result[2] += 83498964;
          result[3] += 1886013;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 335544;
          result[1] += 335544;
          result[2] += 0;
          result[3] += 0;
          result[4] += 81201725;
          result[5] += 4026531;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 18673770;
          result[4] += 7469508;
          result[5] += 59756066;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 17895697;
          result[4] += 35791394;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
          result[0] += 39214918;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 3734754;
        } else {
          result[0] += 104500;
          result[1] += 0;
          result[2] += 104500;
          result[3] += 3866515;
          result[4] += 4493518;
          result[5] += 77330311;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42620000))) ) ) {
          result[0] += 84535864;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1363481;
          result[5] += 0;
        } else {
          result[0] += 2357443;
          result[1] += 3683505;
          result[2] += 4272866;
          result[3] += 36245693;
          result[4] += 3830845;
          result[5] += 35508992;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 11816841;
          result[1] += 24088176;
          result[2] += 1363481;
          result[3] += 1363481;
          result[4] += 46358377;
          result[5] += 908987;
        } else {
          result[0] += 68548106;
          result[1] += 1999319;
          result[2] += 4284256;
          result[3] += 3927235;
          result[4] += 3070383;
          result[5] += 4070043;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42740000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 64424509;
          result[1] += 21474836;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 2684354;
          result[1] += 1789569;
          result[2] += 10737418;
          result[3] += 15211342;
          result[4] += 13421772;
          result[5] += 42054888;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 45434364;
          result[3] += 26976654;
          result[4] += 2839647;
          result[5] += 10648679;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 16015132;
          result[1] += 1455921;
          result[2] += 46589475;
          result[3] += 2911842;
          result[4] += 5823684;
          result[5] += 13103290;
        } else {
          result[0] += 571392;
          result[1] += 0;
          result[2] += 79804492;
          result[3] += 4952068;
          result[4] += 95232;
          result[5] += 476160;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 737333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 81106678;
          result[5] += 4055333;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5648913;
          result[4] += 4572929;
          result[5] += 75677503;
        } else {
          result[0] += 10950341;
          result[1] += 486681;
          result[2] += 730022;
          result[3] += 32607683;
          result[4] += 8030250;
          result[5] += 33094365;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 40086361;
          result[2] += 0;
          result[3] += 5726623;
          result[4] += 40086361;
          result[5] += 0;
        } else {
          result[0] += 441641;
          result[1] += 84574420;
          result[2] += 441641;
          result[3] += 0;
          result[4] += 441641;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 67198472;
          result[1] += 2867467;
          result[2] += 1246724;
          result[3] += 2306441;
          result[4] += 9288100;
          result[5] += 2992139;
        } else {
          result[0] += 9850842;
          result[1] += 1576134;
          result[2] += 19110634;
          result[3] += 24233072;
          result[4] += 9653825;
          result[5] += 21474836;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 33038209;
          result[2] += 13215283;
          result[3] += 0;
          result[4] += 39645851;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7953643;
          result[3] += 12725829;
          result[4] += 3181457;
          result[5] += 62038416;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 2816371;
          result[2] += 18306417;
          result[3] += 47878323;
          result[4] += 4224557;
          result[5] += 12673673;
        } else {
          result[0] += 0;
          result[1] += 2987803;
          result[2] += 49298755;
          result[3] += 29131082;
          result[4] += 0;
          result[5] += 4481705;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 3655291;
          result[1] += 0;
          result[2] += 49346432;
          result[3] += 27414684;
          result[4] += 0;
          result[5] += 5482936;
        } else {
          result[0] += 341774;
          result[1] += 0;
          result[2] += 80430952;
          result[3] += 4784844;
          result[4] += 0;
          result[5] += 341774;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 409044;
          result[1] += 818089;
          result[2] += 0;
          result[3] += 0;
          result[4] += 84672212;
          result[5] += 0;
        } else {
          result[0] += 39370533;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 16106127;
          result[5] += 30422685;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 585677;
          result[2] += 0;
          result[3] += 4294967;
          result[4] += 4002128;
          result[5] += 77016572;
        } else {
          result[0] += 0;
          result[1] += 1399012;
          result[2] += 1119209;
          result[3] += 37773328;
          result[4] += 1958617;
          result[5] += 43649179;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 1717986;
          result[1] += 24910810;
          result[2] += 0;
          result[3] += 0;
          result[4] += 55834574;
          result[5] += 3435973;
        } else {
          result[0] += 394033;
          result[1] += 82747076;
          result[2] += 197016;
          result[3] += 394033;
          result[4] += 2167185;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 70913790;
          result[1] += 4415386;
          result[2] += 133799;
          result[3] += 1204196;
          result[4] += 8161775;
          result[5] += 1070396;
        } else {
          result[0] += 14655812;
          result[1] += 407105;
          result[2] += 23612142;
          result[3] += 20151742;
          result[4] += 3460400;
          result[5] += 23612142;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 18855953;
          result[2] += 6285317;
          result[3] += 4190211;
          result[4] += 14665741;
          result[5] += 41902119;
        } else {
          result[0] += 1301505;
          result[1] += 0;
          result[2] += 10412041;
          result[3] += 46854188;
          result[4] += 0;
          result[5] += 27331610;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 47721858;
          result[4] += 0;
          result[5] += 9544371;
        } else {
          result[0] += 4090445;
          result[1] += 0;
          result[2] += 69537565;
          result[3] += 12271335;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 2045222;
          result[1] += 0;
          result[2] += 51130563;
          result[3] += 24542670;
          result[4] += 2045222;
          result[5] += 6135667;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 709074;
          result[1] += 0;
          result[2] += 80834525;
          result[3] += 4051855;
          result[4] += 0;
          result[5] += 303889;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
          result[0] += 447392;
          result[1] += 2236962;
          result[2] += 0;
          result[3] += 0;
          result[4] += 82767598;
          result[5] += 447392;
        } else {
          result[0] += 16858750;
          result[1] += 4013988;
          result[2] += 0;
          result[3] += 0;
          result[4] += 43351071;
          result[5] += 21675535;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 568242;
          result[2] += 662949;
          result[3] += 4924769;
          result[4] += 4072405;
          result[5] += 75670978;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4008636;
          result[3] += 50966945;
          result[4] += 4581298;
          result[5] += 26342466;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 18407002;
          result[2] += 0;
          result[3] += 0;
          result[4] += 67492343;
          result[5] += 0;
        } else {
          result[0] += 625480;
          result[1] += 82563448;
          result[2] += 833974;
          result[3] += 625480;
          result[4] += 1250961;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 61798510;
          result[1] += 5777197;
          result[2] += 0;
          result[3] += 1809021;
          result[4] += 11379329;
          result[5] += 5135286;
        } else {
          result[0] += 11265487;
          result[1] += 1408185;
          result[2] += 15490045;
          result[3] += 33561766;
          result[4] += 3285767;
          result[5] += 20888092;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28633115;
          result[5] += 57266230;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7929170;
          result[3] += 33038209;
          result[4] += 1321528;
          result[5] += 43610437;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 25379352;
          result[1] += 17570320;
          result[2] += 9761289;
          result[3] += 9761289;
          result[4] += 13665805;
          result[5] += 9761289;
        } else {
          result[0] += 2120971;
          result[1] += 2120971;
          result[2] += 44540401;
          result[3] += 32344815;
          result[4] += 0;
          result[5] += 4772185;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
          result[0] += 73628010;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 12271335;
        } else {
          result[0] += 2684354;
          result[1] += 0;
          result[2] += 61740154;
          result[3] += 10737418;
          result[4] += 0;
          result[5] += 10737418;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42870000))) ) ) {
          result[0] += 49085340;
          result[1] += 0;
          result[2] += 36814005;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 209255;
          result[1] += 0;
          result[2] += 80249449;
          result[3] += 5231385;
          result[4] += 0;
          result[5] += 209255;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 284434;
          result[1] += 2844349;
          result[2] += 0;
          result[3] += 0;
          result[4] += 81632822;
          result[5] += 1137739;
        } else {
          result[0] += 8765239;
          result[1] += 10518287;
          result[2] += 0;
          result[3] += 3506095;
          result[4] += 31554861;
          result[5] += 31554861;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 643096;
          result[1] += 183741;
          result[2] += 0;
          result[3] += 5512257;
          result[4] += 2664257;
          result[5] += 76895991;
        } else {
          result[0] += 27137913;
          result[1] += 0;
          result[2] += 672840;
          result[3] += 14129657;
          result[4] += 13905377;
          result[5] += 30053557;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 2454267;
          result[1] += 45403939;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38041138;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 72092693;
          result[1] += 1882725;
          result[2] += 392234;
          result[3] += 3922344;
          result[4] += 5334388;
          result[5] += 2274959;
        } else {
          result[0] += 12522411;
          result[1] += 2636297;
          result[2] += 17795005;
          result[3] += 28120501;
          result[4] += 6371051;
          result[5] += 18454079;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 12271335;
          result[2] += 49085340;
          result[3] += 24542670;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 1684300;
          result[2] += 0;
          result[3] += 5052902;
          result[4] += 5052902;
          result[5] += 74109239;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 4908534;
          result[2] += 4908534;
          result[3] += 2454267;
          result[4] += 9817068;
          result[5] += 63810942;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14837159;
          result[3] += 56225026;
          result[4] += 0;
          result[5] += 14837159;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 4190211;
          result[1] += 14665741;
          result[2] += 41902119;
          result[3] += 20951059;
          result[4] += 2095105;
          result[5] += 2095105;
        } else {
          result[0] += 77309411;
          result[1] += 0;
          result[2] += 8589934;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 1047552;
          result[1] += 2095105;
          result[2] += 51330096;
          result[3] += 24093718;
          result[4] += 0;
          result[5] += 7332870;
        } else {
          result[0] += 1118216;
          result[1] += 0;
          result[2] += 78986735;
          result[3] += 5286113;
          result[4] += 0;
          result[5] += 508280;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 578446;
          result[1] += 4627574;
          result[2] += 0;
          result[3] += 0;
          result[4] += 78957984;
          result[5] += 1735340;
        } else {
          result[0] += 68141308;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4955731;
          result[5] += 12802306;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 128591;
          result[2] += 0;
          result[3] += 2829020;
          result[4] += 1285918;
          result[5] += 81655815;
        } else {
          result[0] += 2049288;
          result[1] += 1536966;
          result[2] += 170774;
          result[3] += 20663659;
          result[4] += 12466505;
          result[5] += 49012151;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 4462303;
          result[1] += 36814005;
          result[2] += 1115575;
          result[3] += 2231151;
          result[4] += 39045157;
          result[5] += 2231151;
        } else {
          result[0] += 0;
          result[1] += 85697704;
          result[2] += 0;
          result[3] += 0;
          result[4] += 201641;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 73144355;
          result[1] += 3149380;
          result[2] += 393672;
          result[3] += 3149380;
          result[4] += 3936725;
          result[5] += 2125831;
        } else {
          result[0] += 21786065;
          result[1] += 2178606;
          result[2] += 13694098;
          result[3] += 24275902;
          result[4] += 6847049;
          result[5] += 17117623;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 6507526;
          result[2] += 5206020;
          result[3] += 14316557;
          result[4] += 7809031;
          result[5] += 52060209;
        } else {
          result[0] += 1385473;
          result[1] += 2770946;
          result[2] += 0;
          result[3] += 52647986;
          result[4] += 2770946;
          result[5] += 26323993;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 24542670;
          result[2] += 6135667;
          result[3] += 0;
          result[4] += 0;
          result[5] += 55221008;
        } else {
          result[0] += 4742908;
          result[1] += 1053979;
          result[2] += 36889289;
          result[3] += 34254340;
          result[4] += 526989;
          result[5] += 8431837;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
          result[0] += 68214186;
          result[1] += 0;
          result[2] += 7579354;
          result[3] += 5052902;
          result[4] += 5052902;
          result[5] += 0;
        } else {
          result[0] += 2795540;
          result[1] += 0;
          result[2] += 69634380;
          result[3] += 11690443;
          result[4] += 0;
          result[5] += 1778980;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 7990636;
          result[1] += 0;
          result[2] += 53936798;
          result[3] += 17978932;
          result[4] += 0;
          result[5] += 5992977;
        } else {
          result[0] += 613566;
          result[1] += 0;
          result[2] += 83445078;
          result[3] += 1840700;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c80000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 83588152;
          result[5] += 2311193;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 28633115;
          result[4] += 28633115;
          result[5] += 28633115;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          result[0] += 49392123;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 34359738;
          result[5] += 2147483;
        } else {
          result[0] += 0;
          result[1] += 448794;
          result[2] += 179517;
          result[3] += 4667467;
          result[4] += 4218672;
          result[5] += 76384893;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 6841540;
          result[1] += 0;
          result[2] += 0;
          result[3] += 12922910;
          result[4] += 7601712;
          result[5] += 58533182;
        } else {
          result[0] += 5075870;
          result[1] += 390451;
          result[2] += 1561806;
          result[3] += 51930059;
          result[4] += 2342709;
          result[5] += 24598449;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 16106127;
          result[2] += 0;
          result[3] += 0;
          result[4] += 69793218;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85515866;
          result[2] += 0;
          result[3] += 0;
          result[4] += 383479;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 8462989;
          result[1] += 21580623;
          result[2] += 423149;
          result[3] += 846298;
          result[4] += 52470536;
          result[5] += 2115747;
        } else {
          result[0] += 68599710;
          result[1] += 1530352;
          result[2] += 1264204;
          result[3] += 4324908;
          result[4] += 4790668;
          result[5] += 5389501;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6871947;
          result[3] += 27487790;
          result[4] += 0;
          result[5] += 51539607;
        } else {
          result[0] += 350609;
          result[1] += 1402438;
          result[2] += 38216443;
          result[3] += 33307909;
          result[4] += 350609;
          result[5] += 12271335;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 7177573;
          result[1] += 0;
          result[2] += 61125141;
          result[3] += 14818216;
          result[4] += 926138;
          result[5] += 1852277;
        } else {
          result[0] += 421764;
          result[1] += 0;
          result[2] += 80697585;
          result[3] += 3514703;
          result[4] += 0;
          result[5] += 1265293;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 7362801;
          result[1] += 0;
          result[2] += 2454267;
          result[3] += 2454267;
          result[4] += 26996937;
          result[5] += 46631073;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 32212254;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 104373;
          result[2] += 417493;
          result[3] += 3861817;
          result[4] += 2818083;
          result[5] += 78697578;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 10965873;
          result[1] += 8093859;
          result[2] += 1305461;
          result[3] += 17754272;
          result[4] += 4960752;
          result[5] += 42819126;
        } else {
          result[0] += 854719;
          result[1] += 2991519;
          result[2] += 6410398;
          result[3] += 53847351;
          result[4] += 0;
          result[5] += 21795356;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 3303820;
          result[2] += 0;
          result[3] += 0;
          result[4] += 82595524;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85544389;
          result[2] += 0;
          result[3] += 0;
          result[4] += 354955;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
          result[0] += 21091357;
          result[1] += 3834792;
          result[2] += 5368709;
          result[3] += 16106127;
          result[4] += 21091357;
          result[5] += 18407002;
        } else {
          result[0] += 70461540;
          result[1] += 1699574;
          result[2] += 1982837;
          result[3] += 2195284;
          result[4] += 7789718;
          result[5] += 1770390;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14586681;
          result[3] += 9724454;
          result[4] += 1620742;
          result[5] += 59967467;
        } else {
          result[0] += 0;
          result[1] += 3385195;
          result[2] += 34275108;
          result[3] += 34698257;
          result[4] += 846298;
          result[5] += 12694484;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 6585616;
          result[1] += 1431655;
          result[2] += 58411555;
          result[3] += 16320875;
          result[4] += 1145324;
          result[5] += 2004318;
        } else {
          result[0] += 783276;
          result[1] += 0;
          result[2] += 80938593;
          result[3] += 3916383;
          result[4] += 0;
          result[5] += 261092;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 79988840;
          result[5] += 5910505;
        } else {
          result[0] += 0;
          result[1] += 17179869;
          result[2] += 51539607;
          result[3] += 0;
          result[4] += 17179869;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 491415;
          result[1] += 1474245;
          result[2] += 0;
          result[3] += 3145056;
          result[4] += 4029603;
          result[5] += 76759026;
        } else {
          result[0] += 5052902;
          result[1] += 5052902;
          result[2] += 2887372;
          result[3] += 29956494;
          result[4] += 5413824;
          result[5] += 37535848;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 21474836;
          result[2] += 0;
          result[3] += 0;
          result[4] += 64424509;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85342762;
          result[2] += 0;
          result[3] += 0;
          result[4] += 556583;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 30213514;
          result[1] += 3253763;
          result[2] += 1673363;
          result[3] += 12922087;
          result[4] += 17384391;
          result[5] += 20452225;
        } else {
          result[0] += 74459249;
          result[1] += 1972430;
          result[2] += 2860024;
          result[3] += 493107;
          result[4] += 5917291;
          result[5] += 197243;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5856773;
          result[3] += 59543864;
          result[4] += 0;
          result[5] += 20498707;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 61847529;
          result[3] += 24051816;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 64424509;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 7158278;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 2021161;
          result[1] += 0;
          result[2] += 39412641;
          result[3] += 27285674;
          result[4] += 0;
          result[5] += 17179869;
        } else {
          result[0] += 5331683;
          result[1] += 0;
          result[2] += 67830862;
          result[3] += 10959571;
          result[4] += 1481023;
          result[5] += 296204;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 73040162;
          result[3] += 10801714;
          result[4] += 0;
          result[5] += 2057469;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 84451604;
          result[3] += 1286881;
          result[4] += 0;
          result[5] += 160860;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 3579139;
          result[2] += 0;
          result[3] += 0;
          result[4] += 81524842;
          result[5] += 795364;
        } else {
          result[0] += 5992977;
          result[1] += 11985955;
          result[2] += 0;
          result[3] += 9988296;
          result[4] += 13983614;
          result[5] += 43948502;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1508896;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3017793;
          result[4] += 4418912;
          result[5] += 76953742;
        } else {
          result[0] += 6696454;
          result[1] += 1616385;
          result[2] += 3694595;
          result[3] += 28864027;
          result[4] += 4849156;
          result[5] += 40178726;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 617980;
          result[1] += 84457390;
          result[2] += 0;
          result[3] += 0;
          result[4] += 823974;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 12092626;
          result[1] += 23768265;
          result[2] += 3335896;
          result[3] += 2084935;
          result[4] += 40447750;
          result[5] += 4169871;
        } else {
          result[0] += 65360742;
          result[1] += 1638407;
          result[2] += 2867212;
          result[3] += 5558881;
          result[4] += 5090765;
          result[5] += 5383337;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42640000))) ) ) {
          result[0] += 0;
          result[1] += 39645851;
          result[2] += 0;
          result[3] += 0;
          result[4] += 46253493;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 1209849;
          result[2] += 10888649;
          result[3] += 8468949;
          result[4] += 12098499;
          result[5] += 53233397;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 2342709;
          result[1] += 0;
          result[2] += 11713547;
          result[3] += 59348638;
          result[4] += 780903;
          result[5] += 11713547;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52800515;
          result[3] += 21277819;
          result[4] += 0;
          result[5] += 11821010;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e50000))) ) ) {
          result[0] += 1263225;
          result[1] += 0;
          result[2] += 45476124;
          result[3] += 7579354;
          result[4] += 1263225;
          result[5] += 30317416;
        } else {
          result[0] += 80846443;
          result[1] += 0;
          result[2] += 5052902;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 928641;
          result[1] += 0;
          result[2] += 71505401;
          result[3] += 11840180;
          result[4] += 0;
          result[5] += 1625122;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 82508582;
          result[3] += 3390763;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 78223234;
          result[5] += 7676111;
        } else {
          result[0] += 0;
          result[1] += 76354974;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 9544371;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1974697;
          result[4] += 2591790;
          result[5] += 81332857;
        } else {
          result[0] += 7242493;
          result[1] += 336860;
          result[2] += 1347440;
          result[3] += 30485846;
          result[4] += 8084644;
          result[5] += 38402060;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 84746334;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1153011;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 28633115;
          result[2] += 0;
          result[3] += 2489836;
          result[4] += 54776394;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 72484157;
          result[1] += 2668990;
          result[2] += 1194021;
          result[3] += 1474968;
          result[4] += 5618926;
          result[5] += 2458280;
        } else {
          result[0] += 11109384;
          result[1] += 2182200;
          result[2] += 19639804;
          result[3] += 21822004;
          result[4] += 7935274;
          result[5] += 23210677;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42880000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 54663220;
          result[3] += 0;
          result[4] += 7809031;
          result[5] += 23427094;
        } else {
          result[0] += 0;
          result[1] += 28633115;
          result[2] += 0;
          result[3] += 0;
          result[4] += 57266230;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 1952257;
          result[1] += 1952257;
          result[2] += 3904515;
          result[3] += 0;
          result[4] += 7809031;
          result[5] += 70281283;
        } else {
          result[0] += 0;
          result[1] += 3655291;
          result[2] += 12793519;
          result[3] += 42035850;
          result[4] += 0;
          result[5] += 27414684;
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 2816371;
          result[2] += 22530975;
          result[3] += 57735625;
          result[4] += 0;
          result[5] += 2816371;
        } else {
          result[0] += 0;
          result[1] += 3221225;
          result[2] += 64424509;
          result[3] += 11811160;
          result[4] += 4294967;
          result[5] += 2147483;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 22270200;
          result[1] += 0;
          result[2] += 47721858;
          result[3] += 0;
          result[4] += 0;
          result[5] += 15907286;
        } else {
          result[0] += 1021395;
          result[1] += 0;
          result[2] += 78953857;
          result[3] += 5515534;
          result[4] += 0;
          result[5] += 408558;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 1374389;
          result[2] += 0;
          result[3] += 2061584;
          result[4] += 78340203;
          result[5] += 4123168;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1721813;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4687158;
          result[4] += 4974126;
          result[5] += 74516247;
        } else {
          result[0] += 8271788;
          result[1] += 0;
          result[2] += 0;
          result[3] += 38495632;
          result[4] += 6044768;
          result[5] += 33087155;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 4405094;
          result[2] += 0;
          result[3] += 0;
          result[4] += 81494251;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 83523406;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2375939;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 69108035;
          result[1] += 1595868;
          result[2] += 138771;
          result[3] += 2289724;
          result[4] += 8603811;
          result[5] += 4163134;
        } else {
          result[0] += 16424349;
          result[1] += 3449113;
          result[2] += 16752836;
          result[3] += 24636523;
          result[4] += 4598817;
          result[5] += 20037705;
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1789569;
          result[3] += 23264406;
          result[4] += 1789569;
          result[5] += 59055800;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30678337;
          result[3] += 43826196;
          result[4] += 0;
          result[5] += 11394811;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 73819750;
          result[3] += 9395240;
          result[4] += 0;
          result[5] += 2684354;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 2321603;
          result[1] += 0;
          result[2] += 37145663;
          result[3] += 27859247;
          result[4] += 4643207;
          result[5] += 13929623;
        } else {
          result[0] += 1296970;
          result[1] += 99766;
          result[2] += 78815892;
          result[3] += 5187881;
          result[4] += 199533;
          result[5] += 299300;
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
