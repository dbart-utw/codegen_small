
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
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
          result[0] += 6790462;
          result[1] += 0;
          result[2] += 2263487;
          result[3] += 0;
          result[4] += 268223253;
          result[5] += 9053949;
        } else {
          result[0] += 105818034;
          result[1] += 18673770;
          result[2] += 6224590;
          result[3] += 15561475;
          result[4] += 65358197;
          result[5] += 74695083;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 617758;
          result[1] += 1235517;
          result[2] += 0;
          result[3] += 9575259;
          result[4] += 28416899;
          result[5] += 246485717;
        } else {
          result[0] += 0;
          result[1] += 1613133;
          result[2] += 0;
          result[3] += 136309760;
          result[4] += 7259099;
          result[5] += 141149159;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 2834961;
          result[1] += 85048857;
          result[2] += 0;
          result[3] += 0;
          result[4] += 195612371;
          result[5] += 2834961;
        } else {
          result[0] += 0;
          result[1] += 282986162;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3344990;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 245988062;
          result[1] += 7859043;
          result[2] += 785904;
          result[3] += 6025266;
          result[4] += 22791226;
          result[5] += 2881649;
        } else {
          result[0] += 49770007;
          result[1] += 7987778;
          result[2] += 64516676;
          result[3] += 98311125;
          result[4] += 10445557;
          result[5] += 55300008;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52060209;
          result[5] += 234270943;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 61356675;
          result[3] += 204522252;
          result[4] += 0;
          result[5] += 20452225;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 229064922;
          result[4] += 0;
          result[5] += 28633115;
        } else {
          result[0] += 0;
          result[1] += 16268815;
          result[2] += 182210733;
          result[3] += 22776341;
          result[4] += 0;
          result[5] += 65075262;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 61356675;
          result[3] += 122713351;
          result[4] += 0;
          result[5] += 102261126;
        } else {
          result[0] += 5159119;
          result[1] += 0;
          result[2] += 236029734;
          result[3] += 41272958;
          result[4] += 0;
          result[5] += 3869339;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 95443717;
          result[3] += 0;
          result[4] += 0;
          result[5] += 190887435;
        } else {
          result[0] += 397130;
          result[1] += 0;
          result[2] += 274814365;
          result[3] += 9928264;
          result[4] += 0;
          result[5] += 1191391;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 1389957;
          result[2] += 0;
          result[3] += 0;
          result[4] += 284941195;
          result[5] += 0;
        } else {
          result[0] += 40904450;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 212703142;
          result[5] += 32723560;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 286331153;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 22906492;
          result[1] += 0;
          result[2] += 3817748;
          result[3] += 0;
          result[4] += 125985707;
          result[5] += 133621204;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 397682;
          result[2] += 0;
          result[3] += 6760596;
          result[4] += 7555960;
          result[5] += 271616913;
        } else {
          result[0] += 4812288;
          result[1] += 2406144;
          result[2] += 0;
          result[3] += 49325954;
          result[4] += 54138243;
          result[5] += 175648522;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 16679484;
          result[2] += 0;
          result[3] += 50038453;
          result[4] += 38918797;
          result[5] += 180694416;
        } else {
          result[0] += 0;
          result[1] += 5168432;
          result[2] += 2067372;
          result[3] += 192265683;
          result[4] += 11370551;
          result[5] += 75459112;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 286331153;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 255870392;
          result[2] += 0;
          result[3] += 0;
          result[4] += 30460760;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 107472240;
          result[1] += 7844689;
          result[2] += 26671943;
          result[3] += 29809818;
          result[4] += 82369235;
          result[5] += 32163225;
        } else {
          result[0] += 234945427;
          result[1] += 11541178;
          result[2] += 4671429;
          result[3] += 6045379;
          result[4] += 23357147;
          result[5] += 5770589;
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 3046076;
          result[1] += 18276456;
          result[2] += 24368608;
          result[3] += 191902794;
          result[4] += 12184304;
          result[5] += 36552913;
        } else {
          result[0] += 12694484;
          result[1] += 2820996;
          result[2] += 142460327;
          result[3] += 71935412;
          result[4] += 7052491;
          result[5] += 49367440;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 33197814;
          result[1] += 45646995;
          result[2] += 124491805;
          result[3] += 58096175;
          result[4] += 12449180;
          result[5] += 12449180;
        } else {
          result[0] += 12408717;
          result[1] += 620435;
          result[2] += 258411538;
          result[3] += 14580242;
          result[4] += 0;
          result[5] += 310217;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b80000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          result[0] += 1168698;
          result[1] += 1168698;
          result[2] += 0;
          result[3] += 0;
          result[4] += 278150262;
          result[5] += 5843492;
        } else {
          result[0] += 0;
          result[1] += 14316557;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 128849018;
          result[5] += 100215903;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 132152839;
          result[4] += 0;
          result[5] += 154178313;
        } else {
          result[0] += 0;
          result[1] += 286331153;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
          result[0] += 212097150;
          result[1] += 15907286;
          result[2] += 0;
          result[3] += 0;
          result[4] += 58326716;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 592205;
          result[2] += 0;
          result[3] += 13620716;
          result[4] += 20431075;
          result[5] += 251687156;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 2074863;
          result[1] += 0;
          result[2] += 5187158;
          result[3] += 168063937;
          result[4] += 7262021;
          result[5] += 103743171;
        } else {
          result[0] += 26030104;
          result[1] += 65075262;
          result[2] += 195225786;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 46612048;
          result[2] += 0;
          result[3] += 0;
          result[4] += 239719104;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 284295623;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2035529;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 37817322;
          result[1] += 63479076;
          result[2] += 6753093;
          result[3] += 31064228;
          result[4] += 131010008;
          result[5] += 16207423;
        } else {
          result[0] += 227361350;
          result[1] += 4149726;
          result[2] += 5241760;
          result[3] += 17690940;
          result[4] += 16162094;
          result[5] += 15725280;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 22025473;
          result[3] += 26430567;
          result[4] += 26430567;
          result[5] += 211444543;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 86152736;
          result[3] += 136830816;
          result[4] += 0;
          result[5] += 63347600;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 7880673;
          result[1] += 5253782;
          result[2] += 97194978;
          result[3] += 131344565;
          result[4] += 15761347;
          result[5] += 28895804;
        } else {
          result[0] += 6976288;
          result[1] += 909950;
          result[2] += 257212730;
          result[3] += 17895697;
          result[4] += 909950;
          result[5] += 2426535;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 4354846;
          result[2] += 0;
          result[3] += 0;
          result[4] += 268911767;
          result[5] += 13064539;
        } else {
          result[0] += 0;
          result[1] += 273881972;
          result[2] += 0;
          result[3] += 0;
          result[4] += 12449180;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 12890761;
          result[4] += 6640695;
          result[5] += 266799696;
        } else {
          result[0] += 31275342;
          result[1] += 539230;
          result[2] += 539230;
          result[3] += 88972957;
          result[4] += 25343812;
          result[5] += 139660581;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 71582788;
          result[2] += 0;
          result[3] += 0;
          result[4] += 214748364;
          result[5] += 0;
        } else {
          result[0] += 698368;
          result[1] += 282839309;
          result[2] += 698368;
          result[3] += 0;
          result[4] += 2095105;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 204816317;
          result[1] += 13379960;
          result[2] += 4116910;
          result[3] += 8439667;
          result[4] += 36022970;
          result[5] += 19555326;
        } else {
          result[0] += 36686178;
          result[1] += 13421772;
          result[2] += 51897521;
          result[3] += 99321118;
          result[4] += 22369621;
          result[5] += 62634939;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 74836551;
          result[3] += 182210733;
          result[4] += 3253763;
          result[5] += 26030104;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 143165576;
          result[3] += 0;
          result[4] += 0;
          result[5] += 143165576;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 57266230;
          result[3] += 19088743;
          result[4] += 0;
          result[5] += 209976178;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 257698037;
          result[3] += 28633115;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 114532461;
          result[3] += 120895375;
          result[4] += 0;
          result[5] += 50903316;
        } else {
          result[0] += 8810189;
          result[1] += 0;
          result[2] += 239343476;
          result[3] += 32304027;
          result[4] += 0;
          result[5] += 5873459;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 286331153;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1579758;
          result[1] += 0;
          result[2] += 274088027;
          result[3] += 9478548;
          result[4] += 0;
          result[5] += 1184818;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 1396737;
          result[2] += 0;
          result[3] += 0;
          result[4] += 284934415;
          result[5] += 0;
        } else {
          result[0] += 8421504;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 202116108;
          result[5] += 75793540;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 7905902;
          result[1] += 0;
          result[2] += 687469;
          result[3] += 8593371;
          result[4] += 17186743;
          result[5] += 251957665;
        } else {
          result[0] += 14634703;
          result[1] += 10816954;
          result[2] += 17179869;
          result[3] += 114532461;
          result[4] += 3817748;
          result[5] += 125349415;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 10226112;
          result[2] += 0;
          result[3] += 0;
          result[4] += 265878927;
          result[5] += 10226112;
        } else {
          result[0] += 0;
          result[1] += 285115309;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1215843;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 227423935;
          result[1] += 8204933;
          result[2] += 2945360;
          result[3] += 5890721;
          result[4] += 35554713;
          result[5] += 6311487;
        } else {
          result[0] += 43572131;
          result[1] += 7780737;
          result[2] += 66136271;
          result[3] += 84810042;
          result[4] += 21786065;
          result[5] += 62245902;
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 286331153;
        } else {
          result[0] += 0;
          result[1] += 17530478;
          result[2] += 23373971;
          result[3] += 216209237;
          result[4] += 0;
          result[5] += 29217464;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 16131332;
          result[1] += 20164165;
          result[2] += 104853661;
          result[3] += 125017827;
          result[4] += 4032833;
          result[5] += 16131332;
        } else {
          result[0] += 11930464;
          result[1] += 0;
          result[2] += 230655651;
          result[3] += 3976821;
          result[4] += 19884107;
          result[5] += 19884107;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 206424784;
          result[3] += 66588640;
          result[4] += 0;
          result[5] += 13317728;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 271392136;
          result[3] += 14939016;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 235047961;
          result[3] += 38462393;
          result[4] += 0;
          result[5] += 12820797;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 282401117;
          result[3] += 3930035;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42870000))) ) ) {
          result[0] += 2105376;
          result[1] += 7368816;
          result[2] += 1052688;
          result[3] += 0;
          result[4] += 269488144;
          result[5] += 6316128;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 286331153;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 11961614;
          result[4] += 9718811;
          result[5] += 264650726;
        } else {
          result[0] += 20371386;
          result[1] += 8488077;
          result[2] += 8488077;
          result[3] += 101291060;
          result[4] += 28859464;
          result[5] += 118833087;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 6983686;
          result[1] += 34918433;
          result[2] += 0;
          result[3] += 0;
          result[4] += 240937189;
          result[5] += 3491843;
        } else {
          result[0] += 606633;
          result[1] += 273591843;
          result[2] += 1213267;
          result[3] += 1819901;
          result[4] += 9099506;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 232838093;
          result[1] += 10507565;
          result[2] += 7164249;
          result[3] += 8119482;
          result[4] += 17194197;
          result[5] += 10507565;
        } else {
          result[0] += 39598989;
          result[1] += 8529013;
          result[2] += 73105826;
          result[3] += 73715041;
          result[4] += 15839595;
          result[5] += 75542687;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 22025473;
          result[4] += 22025473;
          result[5] += 242280206;
        } else {
          result[0] += 0;
          result[1] += 5965232;
          result[2] += 74565404;
          result[3] += 86495869;
          result[4] += 44739242;
          result[5] += 74565404;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42e40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 229064922;
          result[3] += 22906492;
          result[4] += 3817748;
          result[5] += 30541989;
        } else {
          result[0] += 286331153;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 125269879;
          result[3] += 134217727;
          result[4] += 0;
          result[5] += 26843545;
        } else {
          result[0] += 0;
          result[1] += 1475933;
          result[2] += 237625338;
          result[3] += 45753947;
          result[4] += 0;
          result[5] += 1475933;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 232160394;
          result[3] += 54170758;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 281342805;
          result[3] += 4988347;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 1272582;
          result[2] += 0;
          result[3] += 0;
          result[4] += 279968238;
          result[5] += 5090331;
        } else {
          result[0] += 22025473;
          result[1] += 0;
          result[2] += 0;
          result[3] += 33038209;
          result[4] += 88101893;
          result[5] += 143165576;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 15935391;
          result[1] += 1011770;
          result[2] += 0;
          result[3] += 16694219;
          result[4] += 23270729;
          result[5] += 229419042;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3181457;
          result[3] += 184524520;
          result[4] += 0;
          result[5] += 98625174;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 6224590;
          result[1] += 64320766;
          result[2] += 6224590;
          result[3] += 2074863;
          result[4] += 205411479;
          result[5] += 2074863;
        } else {
          result[0] += 0;
          result[1] += 286331153;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 248300879;
          result[1] += 12267830;
          result[2] += 2698922;
          result[3] += 4661775;
          result[4] += 17174962;
          result[5] += 1226783;
        } else {
          result[0] += 50380848;
          result[1] += 4198404;
          result[2] += 62136379;
          result[3] += 74731591;
          result[4] += 22671381;
          result[5] += 72212548;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 243911722;
          result[4] += 0;
          result[5] += 42419430;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 132690046;
          result[3] += 139673733;
          result[4] += 0;
          result[5] += 13967373;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 16361780;
          result[1] += 0;
          result[2] += 122713351;
          result[3] += 98170681;
          result[4] += 8180890;
          result[5] += 40904450;
        } else {
          result[0] += 10804949;
          result[1] += 0;
          result[2] += 243111356;
          result[3] += 21609898;
          result[4] += 0;
          result[5] += 10804949;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 252925851;
          result[3] += 28633115;
          result[4] += 0;
          result[5] += 4772185;
        } else {
          result[0] += 190887435;
          result[1] += 0;
          result[2] += 95443717;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 156180628;
          result[3] += 52060209;
          result[4] += 0;
          result[5] += 78090314;
        } else {
          result[0] += 1339560;
          result[1] += 0;
          result[2] += 270591311;
          result[3] += 13730499;
          result[4] += 0;
          result[5] += 669780;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          result[0] += 5182464;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 274670608;
          result[5] += 6478080;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 171798691;
          result[5] += 114532461;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 8667321;
          result[1] += 0;
          result[2] += 619094;
          result[3] += 14239170;
          result[4] += 14239170;
          result[5] += 248566395;
        } else {
          result[0] += 14316557;
          result[1] += 27917287;
          result[2] += 9305762;
          result[3] += 117395772;
          result[4] += 6442450;
          result[5] += 110953321;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42db0000))) ) ) {
          result[0] += 132819626;
          result[1] += 13421772;
          result[2] += 14260633;
          result[3] += 37189495;
          result[4] += 52009369;
          result[5] += 36630254;
        } else {
          result[0] += 267647227;
          result[1] += 934196;
          result[2] += 8874864;
          result[3] += 0;
          result[4] += 8407766;
          result[5] += 467098;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 286331153;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 234270943;
          result[1] += 0;
          result[2] += 52060209;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42740000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 286331153;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 190887435;
          result[2] += 0;
          result[3] += 0;
          result[4] += 95443717;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42950000))) ) ) {
          result[0] += 9138228;
          result[1] += 6092152;
          result[2] += 18276456;
          result[3] += 21322532;
          result[4] += 51783293;
          result[5] += 179718489;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 61909438;
          result[3] += 147034916;
          result[4] += 3869339;
          result[5] += 73517458;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 10046707;
          result[1] += 0;
          result[2] += 115537131;
          result[3] += 150700606;
          result[4] += 0;
          result[5] += 10046707;
        } else {
          result[0] += 15070060;
          result[1] += 0;
          result[2] += 238609294;
          result[3] += 20093414;
          result[4] += 0;
          result[5] += 12558383;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 5005789;
          result[1] += 0;
          result[2] += 243281364;
          result[3] += 37042841;
          result[4] += 0;
          result[5] += 1001157;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 280465896;
          result[3] += 5865256;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 3670912;
          result[2] += 0;
          result[3] += 4894549;
          result[4] += 271647504;
          result[5] += 6118187;
        } else {
          result[0] += 0;
          result[1] += 114532461;
          result[2] += 0;
          result[3] += 76354974;
          result[4] += 19088743;
          result[5] += 76354974;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1750190;
          result[3] += 10501142;
          result[4] += 15401675;
          result[5] += 258678144;
        } else {
          result[0] += 22167573;
          result[1] += 3694595;
          result[2] += 11083786;
          result[3] += 98522547;
          result[4] += 17857211;
          result[5] += 133005438;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 286331153;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 284204931;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2126221;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 211868597;
          result[1] += 11930464;
          result[2] += 617093;
          result[3] += 6993720;
          result[4] += 44224998;
          result[5] += 10696278;
        } else {
          result[0] += 49910934;
          result[1] += 2626891;
          result[2] += 79463462;
          result[3] += 74209679;
          result[4] += 11164288;
          result[5] += 68955896;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 21209715;
          result[5] += 265121437;
        } else {
          result[0] += 0;
          result[1] += 11930464;
          result[2] += 59652323;
          result[3] += 171003327;
          result[4] += 7953643;
          result[5] += 35791394;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31814572;
          result[3] += 0;
          result[4] += 254516580;
          result[5] += 0;
        } else {
          result[0] += 10412041;
          result[1] += 0;
          result[2] += 239476964;
          result[3] += 10412041;
          result[4] += 0;
          result[5] += 26030104;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33686018;
          result[3] += 235802126;
          result[4] += 0;
          result[5] += 16843009;
        } else {
          result[0] += 2511676;
          result[1] += 0;
          result[2] += 205957496;
          result[3] += 67815273;
          result[4] += 0;
          result[5] += 10046707;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 95443717;
          result[1] += 0;
          result[2] += 190887435;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 763549;
          result[1] += 0;
          result[2] += 274114357;
          result[3] += 9544371;
          result[4] += 0;
          result[5] += 1908874;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428b0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 6157659;
          result[1] += 9236488;
          result[2] += 0;
          result[3] += 0;
          result[4] += 264779345;
          result[5] += 6157659;
        } else {
          result[0] += 52060209;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 91105366;
          result[5] += 143165576;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 45646995;
          result[2] += 0;
          result[3] += 0;
          result[4] += 178438254;
          result[5] += 62245902;
        } else {
          result[0] += 1226257;
          result[1] += 919693;
          result[2] += 2452515;
          result[3] += 23298894;
          result[4] += 10423189;
          result[5] += 248010602;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42420000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 47721858;
          result[2] += 0;
          result[3] += 0;
          result[4] += 238609294;
          result[5] += 0;
        } else {
          result[0] += 1420998;
          result[1] += 284199655;
          result[2] += 0;
          result[3] += 0;
          result[4] += 710499;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          result[0] += 204353341;
          result[1] += 13203157;
          result[2] += 2167682;
          result[3] += 13400219;
          result[4] += 39215347;
          result[5] += 13991405;
        } else {
          result[0] += 31654700;
          result[1] += 2877700;
          result[2] += 52278217;
          result[3] += 101678734;
          result[4] += 18225433;
          result[5] += 79616367;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 15907286;
          result[5] += 270423866;
        } else {
          result[0] += 8421504;
          result[1] += 33686018;
          result[2] += 8421504;
          result[3] += 109479558;
          result[4] += 16843009;
          result[5] += 109479558;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30140121;
          result[3] += 226050910;
          result[4] += 0;
          result[5] += 30140121;
        } else {
          result[0] += 6362914;
          result[1] += 0;
          result[2] += 216339093;
          result[3] += 57266230;
          result[4] += 0;
          result[5] += 6362914;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42f90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 178406333;
          result[3] += 88101893;
          result[4] += 6607641;
          result[5] += 13215283;
        } else {
          result[0] += 286331153;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 127258290;
          result[1] += 10604857;
          result[2] += 148468005;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1368368;
          result[1] += 0;
          result[2] += 270252820;
          result[3] += 10946949;
          result[4] += 0;
          result[5] += 3763013;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 1168698;
          result[1] += 1168698;
          result[2] += 0;
          result[3] += 0;
          result[4] += 272306769;
          result[5] += 11686985;
        } else {
          result[0] += 0;
          result[1] += 286331153;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 9741162;
          result[1] += 295186;
          result[2] += 0;
          result[3] += 12397843;
          result[4] += 21548633;
          result[5] += 242348326;
        } else {
          result[0] += 22319800;
          result[1] += 2550834;
          result[2] += 2550834;
          result[3] += 132643384;
          result[4] += 23595217;
          result[5] += 102671081;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 95443717;
          result[2] += 7535030;
          result[3] += 2511676;
          result[4] += 178329051;
          result[5] += 2511676;
        } else {
          result[0] += 0;
          result[1] += 286331153;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 241511875;
          result[1] += 10756626;
          result[2] += 768330;
          result[3] += 7427194;
          result[4] += 21513252;
          result[5] += 4353872;
        } else {
          result[0] += 59387202;
          result[1] += 18028257;
          result[2] += 36056515;
          result[3] += 84838860;
          result[4] += 23330686;
          result[5] += 64689630;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20452225;
          result[3] += 102261126;
          result[4] += 0;
          result[5] += 163617801;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 74590468;
          result[3] += 187679243;
          result[4] += 0;
          result[5] += 24061441;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 286331153;
        } else {
          result[0] += 17895697;
          result[1] += 0;
          result[2] += 268435455;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 49796722;
          result[3] += 161839347;
          result[4] += 0;
          result[5] += 74695083;
        } else {
          result[0] += 7279605;
          result[1] += 0;
          result[2] += 215961632;
          result[3] += 38824563;
          result[4] += 0;
          result[5] += 24265351;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42910000))) ) ) {
          result[0] += 161839347;
          result[1] += 0;
          result[2] += 99593444;
          result[3] += 0;
          result[4] += 12449180;
          result[5] += 12449180;
        } else {
          result[0] += 1573248;
          result[1] += 0;
          result[2] += 268710774;
          result[3] += 15103181;
          result[4] += 0;
          result[5] += 943948;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 9590038;
          result[2] += 0;
          result[3] += 0;
          result[4] += 276741114;
          result[5] += 0;
        } else {
          result[0] += 6092152;
          result[1] += 51783293;
          result[2] += 0;
          result[3] += 6092152;
          result[4] += 127935196;
          result[5] += 94428358;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 286331153;
          result[5] += 0;
        } else {
          result[0] += 214025306;
          result[1] += 0;
          result[2] += 0;
          result[3] += 23137870;
          result[4] += 11568935;
          result[5] += 37599040;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 12725829;
          result[2] += 0;
          result[3] += 0;
          result[4] += 235427836;
          result[5] += 38177487;
        } else {
          result[0] += 1690932;
          result[1] += 0;
          result[2] += 281822;
          result[3] += 23391226;
          result[4] += 15218388;
          result[5] += 245748784;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 2436860;
          result[1] += 0;
          result[2] += 4873721;
          result[3] += 196167300;
          result[4] += 7310582;
          result[5] += 75542687;
        } else {
          result[0] += 20452225;
          result[1] += 0;
          result[2] += 102261126;
          result[3] += 46017506;
          result[4] += 0;
          result[5] += 117600294;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 271557309;
          result[2] += 0;
          result[3] += 3517581;
          result[4] += 7035163;
          result[5] += 4221098;
        } else {
          result[0] += 0;
          result[1] += 68829604;
          result[2] += 8259552;
          result[3] += 0;
          result[4] += 187216523;
          result[5] += 22025473;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 255781757;
          result[1] += 6109879;
          result[2] += 0;
          result[3] += 4443548;
          result[4] += 17496472;
          result[5] += 2499496;
        } else {
          result[0] += 85471985;
          result[1] += 8547198;
          result[2] += 28490661;
          result[3] += 65528522;
          result[4] += 19943463;
          result[5] += 78349320;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 10873334;
          result[1] += 43493339;
          result[2] += 10873334;
          result[3] += 28995559;
          result[4] += 28995559;
          result[5] += 163100023;
        } else {
          result[0] += 25922985;
          result[1] += 0;
          result[2] += 102513622;
          result[3] += 122545020;
          result[4] += 3534952;
          result[5] += 31814572;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 85004561;
          result[1] += 0;
          result[2] += 165535197;
          result[3] += 13421772;
          result[4] += 0;
          result[5] += 22369621;
        } else {
          result[0] += 2327895;
          result[1] += 0;
          result[2] += 267707988;
          result[3] += 14965042;
          result[4] += 0;
          result[5] += 1330226;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 5206020;
          result[1] += 3123612;
          result[2] += 0;
          result[3] += 0;
          result[4] += 272795498;
          result[5] += 5206020;
        } else {
          result[0] += 154711187;
          result[1] += 4618244;
          result[2] += 0;
          result[3] += 0;
          result[4] += 43873321;
          result[5] += 83128399;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 993056;
          result[2] += 0;
          result[3] += 12247690;
          result[4] += 13240746;
          result[5] += 259849659;
        } else {
          result[0] += 0;
          result[1] += 10162065;
          result[2] += 17933057;
          result[3] += 130313551;
          result[4] += 14944214;
          result[5] += 112978262;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 6582325;
          result[1] += 55949765;
          result[2] += 0;
          result[3] += 3291162;
          result[4] += 220507899;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 281501470;
          result[2] += 1379909;
          result[3] += 0;
          result[4] += 3449772;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 234226674;
          result[1] += 8034802;
          result[2] += 0;
          result[3] += 7060887;
          result[4] += 24347887;
          result[5] += 12660901;
        } else {
          result[0] += 67326514;
          result[1] += 13155755;
          result[2] += 72743590;
          result[3] += 62683306;
          result[4] += 17798963;
          result[5] += 52623022;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 18472977;
          result[2] += 55418932;
          result[3] += 27709466;
          result[4] += 18472977;
          result[5] += 166256798;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 108341517;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 34824059;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 229730808;
          result[3] += 49941480;
          result[4] += 0;
          result[5] += 6658864;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 81808900;
          result[3] += 204522252;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42980000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 286331153;
        result[5] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 143165576;
        } else {
          result[0] += 1381573;
          result[1] += 0;
          result[2] += 270443055;
          result[3] += 12088770;
          result[4] += 0;
          result[5] += 2417754;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          result[0] += 1183186;
          result[1] += 1183186;
          result[2] += 2366373;
          result[3] += 0;
          result[4] += 269766540;
          result[5] += 11831865;
        } else {
          result[0] += 0;
          result[1] += 127258290;
          result[2] += 23860929;
          result[3] += 15907286;
          result[4] += 47721858;
          result[5] += 71582788;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 2654286;
          result[1] += 0;
          result[2] += 0;
          result[3] += 12939646;
          result[4] += 23556792;
          result[5] += 247180427;
        } else {
          result[0] += 15577601;
          result[1] += 2225371;
          result[2] += 5934324;
          result[3] += 126104393;
          result[4] += 16319392;
          result[5] += 120170069;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 286331153;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 281320357;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5010795;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 209202860;
          result[1] += 17297901;
          result[2] += 6105141;
          result[3] += 9157712;
          result[4] += 35409822;
          result[5] += 9157712;
        } else {
          result[0] += 52386401;
          result[1] += 5023353;
          result[2] += 68891705;
          result[3] += 83961766;
          result[4] += 13634816;
          result[5] += 62433108;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11012736;
          result[3] += 0;
          result[4] += 11012736;
          result[5] += 264305679;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 23860929;
          result[3] += 95443717;
          result[4] += 0;
          result[5] += 167026505;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42d20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 80373656;
          result[3] += 115537131;
          result[4] += 10046707;
          result[5] += 80373656;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 286331153;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0;
          result[1] += 286331153;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 10786447;
          result[1] += 1961172;
          result[2] += 209845434;
          result[3] += 45106962;
          result[4] += 0;
          result[5] += 18631136;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 251312235;
          result[3] += 35018917;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 284737473;
          result[3] += 1062453;
          result[4] += 0;
          result[5] += 531226;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 286331153;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 279609764;
          result[5] += 6721388;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 196852667;
          result[5] += 89478485;
        } else {
          result[0] += 0;
          result[1] += 246837200;
          result[2] += 0;
          result[3] += 9873488;
          result[4] += 9873488;
          result[5] += 19746976;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          result[0] += 223696213;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 62634939;
          result[5] += 0;
        } else {
          result[0] += 1845313;
          result[1] += 307552;
          result[2] += 307552;
          result[3] += 8919015;
          result[4] += 15685165;
          result[5] += 259266554;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 5755400;
          result[1] += 1438850;
          result[2] += 23021600;
          result[3] += 90647550;
          result[4] += 5755400;
          result[5] += 159712351;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4061434;
          result[3] += 205102457;
          result[4] += 2030717;
          result[5] += 75136543;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 283301193;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3029959;
          result[5] += 0;
        } else {
          result[0] += 56143363;
          result[1] += 185273099;
          result[2] += 0;
          result[3] += 5614336;
          result[4] += 39300354;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
          result[0] += 11012736;
          result[1] += 95968133;
          result[2] += 0;
          result[3] += 0;
          result[4] += 169910794;
          result[5] += 9439488;
        } else {
          result[0] += 215397755;
          result[1] += 3996247;
          result[2] += 9790807;
          result[3] += 21180113;
          result[4] += 20181051;
          result[5] += 15785178;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
          result[0] += 8180890;
          result[1] += 12271335;
          result[2] += 0;
          result[3] += 28633115;
          result[4] += 49085340;
          result[5] += 188160471;
        } else {
          result[0] += 1331772;
          result[1] += 0;
          result[2] += 105210051;
          result[3] += 143831462;
          result[4] += 3995318;
          result[5] += 31962547;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 15070060;
          result[2] += 95443717;
          result[3] += 5023353;
          result[4] += 60280242;
          result[5] += 110513778;
        } else {
          result[0] += 2723720;
          result[1] += 0;
          result[2] += 269307897;
          result[3] += 12937673;
          result[4] += 0;
          result[5] += 1361860;
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
