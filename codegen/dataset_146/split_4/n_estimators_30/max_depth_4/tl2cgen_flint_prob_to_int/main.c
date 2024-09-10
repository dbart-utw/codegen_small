
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
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
          result[0] += 2457778;
          result[1] += 3686667;
          result[2] += 0;
          result[3] += 0;
          result[4] += 134563353;
          result[5] += 2457778;
        } else {
          result[0] += 44251178;
          result[1] += 36442146;
          result[2] += 0;
          result[3] += 6507526;
          result[4] += 18221073;
          result[5] += 37743651;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 168628;
          result[1] += 337256;
          result[2] += 0;
          result[3] += 7756909;
          result[4] += 10286337;
          result[5] += 124616444;
        } else {
          result[0] += 2097664;
          result[1] += 0;
          result[2] += 7866240;
          result[3] += 76564740;
          result[4] += 2622080;
          result[5] += 54014851;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 104419401;
          result[1] += 6063725;
          result[2] += 102775;
          result[3] += 2261050;
          result[4] += 23946575;
          result[5] += 6372050;
        } else {
          result[0] += 27905154;
          result[1] += 606633;
          result[2] += 37611295;
          result[3] += 34578126;
          result[4] += 6066337;
          result[5] += 36398027;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c40000))) ) ) {
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
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 3253763;
          result[1] += 14641933;
          result[2] += 27656986;
          result[3] += 16268815;
          result[4] += 22776341;
          result[5] += 58567735;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 23373971;
          result[3] += 102261126;
          result[4] += 2921746;
          result[5] += 14608732;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 49557314;
          result[3] += 88101893;
          result[4] += 0;
          result[5] += 5506368;
        } else {
          result[0] += 7738679;
          result[1] += 0;
          result[2] += 123818876;
          result[3] += 7738679;
          result[4] += 0;
          result[5] += 3869339;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42980000))) ) ) {
          result[0] += 114532461;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 109796156;
          result[3] += 26910822;
          result[4] += 0;
          result[5] += 6458597;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 122287263;
          result[3] += 20878313;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 715827;
          result[1] += 0;
          result[2] += 139825046;
          result[3] += 2624702;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
          result[0] += 5174659;
          result[1] += 8049470;
          result[2] += 0;
          result[3] += 0;
          result[4] += 124191825;
          result[5] += 5749621;
        } else {
          result[0] += 95443717;
          result[1] += 1272582;
          result[2] += 1272582;
          result[3] += 0;
          result[4] += 26724240;
          result[5] += 18452452;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 7508087;
          result[4] += 9214470;
          result[5] += 126443018;
        } else {
          result[0] += 4106087;
          result[1] += 4653565;
          result[2] += 3558608;
          result[3] += 59948874;
          result[4] += 13960696;
          result[5] += 56937743;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42900000))) ) ) {
          result[0] += 7856647;
          result[1] += 51504689;
          result[2] += 872960;
          result[3] += 11348490;
          result[4] += 60234297;
          result[5] += 11348490;
        } else {
          result[0] += 113923245;
          result[1] += 2802390;
          result[2] += 6213995;
          result[3] += 5482936;
          result[4] += 5604780;
          result[5] += 9138228;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42740000))) ) ) {
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
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 2626891;
          result[2] += 11821010;
          result[3] += 61731945;
          result[4] += 7880673;
          result[5] += 59105054;
        } else {
          result[0] += 59652323;
          result[1] += 59652323;
          result[2] += 0;
          result[3] += 17895697;
          result[4] += 5965232;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 4853070;
          result[1] += 0;
          result[2] += 109194083;
          result[3] += 12132675;
          result[4] += 1213267;
          result[5] += 15772478;
        } else {
          result[0] += 95443717;
          result[1] += 23860929;
          result[2] += 11930464;
          result[3] += 11930464;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 2701237;
          result[1] += 0;
          result[2] += 37817322;
          result[3] += 72933406;
          result[4] += 2701237;
          result[5] += 27012372;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 103397360;
          result[3] += 23860929;
          result[4] += 0;
          result[5] += 15907286;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 2309122;
          result[1] += 0;
          result[2] += 116610671;
          result[3] += 21359380;
          result[4] += 0;
          result[5] += 2886402;
        } else {
          result[0] += 1539414;
          result[1] += 0;
          result[2] += 137007917;
          result[3] += 4618244;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          result[0] += 565871;
          result[1] += 3395231;
          result[2] += 0;
          result[3] += 0;
          result[4] += 137506858;
          result[5] += 1697615;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 69918072;
          result[5] += 73247504;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 3648637;
          result[1] += 347489;
          result[2] += 0;
          result[3] += 5386083;
          result[4] += 3996126;
          result[5] += 129787239;
        } else {
          result[0] += 11843381;
          result[1] += 2786677;
          result[2] += 0;
          result[3] += 54688553;
          result[4] += 9056703;
          result[5] += 64790260;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 141923358;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1242217;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 112588641;
          result[1] += 3385303;
          result[2] += 109203;
          result[3] += 2511676;
          result[4] += 22059074;
          result[5] += 2511676;
        } else {
          result[0] += 24179075;
          result[1] += 1908874;
          result[2] += 42631527;
          result[3] += 39131924;
          result[4] += 6044768;
          result[5] += 29269406;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 7279605;
          result[1] += 24265351;
          result[2] += 7279605;
          result[3] += 0;
          result[4] += 2426535;
          result[5] += 101914478;
        } else {
          result[0] += 7405116;
          result[1] += 9873488;
          result[2] += 59240928;
          result[3] += 19746976;
          result[4] += 2468372;
          result[5] += 44430696;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 22369621;
          result[3] += 85004561;
          result[4] += 0;
          result[5] += 35791394;
        } else {
          result[0] += 6607641;
          result[1] += 0;
          result[2] += 114532461;
          result[3] += 13215283;
          result[4] += 0;
          result[5] += 8810189;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 143165576;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 47721858;
          result[3] += 95443717;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1706383;
          result[1] += 0;
          result[2] += 132415360;
          result[3] += 8190640;
          result[4] += 0;
          result[5] += 853191;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 1561806;
          result[1] += 1041204;
          result[2] += 0;
          result[3] += 0;
          result[4] += 139000759;
          result[5] += 1561806;
        } else {
          result[0] += 10683998;
          result[1] += 4273599;
          result[2] += 0;
          result[3] += 4273599;
          result[4] += 66240789;
          result[5] += 57693590;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42780000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 57266230;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42880000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4210752;
          result[3] += 0;
          result[4] += 101058054;
          result[5] += 37896770;
        } else {
          result[0] += 129171948;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 13993627;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 175663;
          result[1] += 0;
          result[2] += 175663;
          result[3] += 8080511;
          result[4] += 6850868;
          result[5] += 127882870;
        } else {
          result[0] += 1664716;
          result[1] += 2219621;
          result[2] += 4994148;
          result[3] += 65478829;
          result[4] += 8601032;
          result[5] += 60207228;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 141260934;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1904641;
          result[5] += 0;
        } else {
          result[0] += 5929935;
          result[1] += 59299351;
          result[2] += 0;
          result[3] += 847133;
          result[4] += 75394889;
          result[5] += 1694267;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42900000))) ) ) {
          result[0] += 26587892;
          result[1] += 44994895;
          result[2] += 6135667;
          result[3] += 0;
          result[4] += 55221008;
          result[5] += 10226112;
        } else {
          result[0] += 131517289;
          result[1] += 812671;
          result[2] += 948116;
          result[3] += 3386130;
          result[4] += 5282362;
          result[5] += 1219006;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 9706140;
          result[2] += 16985746;
          result[3] += 63089915;
          result[4] += 0;
          result[5] += 53383774;
        } else {
          result[0] += 3534952;
          result[1] += 0;
          result[2] += 92792503;
          result[3] += 30930834;
          result[4] += 0;
          result[5] += 15907286;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 17179869;
          result[1] += 0;
          result[2] += 62992853;
          result[3] += 11453246;
          result[4] += 14316557;
          result[5] += 37223049;
        } else {
          result[0] += 2094376;
          result[1] += 0;
          result[2] += 130898515;
          result[3] += 9275094;
          result[4] += 299196;
          result[5] += 598393;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 1313445;
          result[1] += 11164288;
          result[2] += 0;
          result[3] += 0;
          result[4] += 126747505;
          result[5] += 3940336;
        } else {
          result[0] += 50301418;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 45142298;
          result[5] += 47721858;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 1585443;
          result[2] += 317088;
          result[3] += 7768674;
          result[4] += 9671207;
          result[5] += 123823161;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1250354;
          result[3] += 76896794;
          result[4] += 625177;
          result[5] += 64393250;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 3112295;
          result[1] += 32160383;
          result[2] += 0;
          result[3] += 12449180;
          result[4] += 92331422;
          result[5] += 3112295;
        } else {
          result[0] += 303960;
          result[1] += 139822006;
          result[2] += 0;
          result[3] += 303960;
          result[4] += 1823765;
          result[5] += 911882;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 118413735;
          result[1] += 3021351;
          result[2] += 232411;
          result[3] += 3486174;
          result[4] += 12666434;
          result[5] += 5345467;
        } else {
          result[0] += 34047973;
          result[1] += 2871515;
          result[2] += 18459744;
          result[3] += 39380788;
          result[4] += 6563464;
          result[5] += 41842088;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6135667;
          result[3] += 116577683;
          result[4] += 0;
          result[5] += 20452225;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40904450;
          result[3] += 53175785;
          result[4] += 0;
          result[5] += 49085340;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 28633115;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 126646471;
          result[3] += 5506368;
          result[4] += 0;
          result[5] += 11012736;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 72488899;
          result[3] += 50742229;
          result[4] += 0;
          result[5] += 19934447;
        } else {
          result[0] += 13379960;
          result[1] += 0;
          result[2] += 116405655;
          result[3] += 5351984;
          result[4] += 2675992;
          result[5] += 5351984;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 0;
          result[4] += 0;
          result[5] += 114532461;
        } else {
          result[0] += 1868115;
          result[1] += 0;
          result[2] += 132296541;
          result[3] += 7642290;
          result[4] += 0;
          result[5] += 1358629;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2631720;
          result[3] += 526344;
          result[4] += 131586007;
          result[5] += 8421504;
        } else {
          result[0] += 0;
          result[1] += 110127366;
          result[2] += 0;
          result[3] += 0;
          result[4] += 33038209;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 3372569;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4047083;
          result[4] += 8431423;
          result[5] += 127314499;
        } else {
          result[0] += 11705361;
          result[1] += 2701237;
          result[2] += 5402474;
          result[3] += 57626395;
          result[4] += 14856805;
          result[5] += 50873302;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 142549810;
          result[2] += 0;
          result[3] += 0;
          result[4] += 615765;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 37841121;
          result[1] += 5676168;
          result[2] += 3784112;
          result[3] += 19551246;
          result[4] += 28065498;
          result[5] += 48247429;
        } else {
          result[0] += 110127366;
          result[1] += 4855077;
          result[2] += 6039242;
          result[3] += 6631325;
          result[4] += 13025817;
          result[5] += 2486746;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2807168;
          result[3] += 14035840;
          result[4] += 0;
          result[5] += 126322567;
        } else {
          result[0] += 0;
          result[1] += 19346699;
          result[2] += 34824059;
          result[3] += 27085379;
          result[4] += 30954719;
          result[5] += 30954719;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4693953;
          result[3] += 93879066;
          result[4] += 0;
          result[5] += 44592556;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 73891910;
          result[3] += 45522694;
          result[4] += 3958495;
          result[5] += 19792476;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 11012736;
          result[1] += 11012736;
          result[2] += 55063683;
          result[3] += 0;
          result[4] += 22025473;
          result[5] += 44050946;
        } else {
          result[0] += 130150524;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 13015052;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 4252442;
          result[1] += 0;
          result[2] += 110563514;
          result[3] += 24097176;
          result[4] += 0;
          result[5] += 4252442;
        } else {
          result[0] += 1159235;
          result[1] += 0;
          result[2] += 136982987;
          result[3] += 4830147;
          result[4] += 0;
          result[5] += 193205;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 594048;
          result[2] += 0;
          result[3] += 2376192;
          result[4] += 131284615;
          result[5] += 8910720;
        } else {
          result[0] += 0;
          result[1] += 136348168;
          result[2] += 0;
          result[3] += 6817408;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42830000))) ) ) {
          result[0] += 661782;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2867723;
          result[4] += 7059011;
          result[5] += 132577059;
        } else {
          result[0] += 11767033;
          result[1] += 1225732;
          result[2] += 490293;
          result[3] += 45597255;
          result[4] += 9315568;
          result[5] += 74769693;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 106577676;
          result[1] += 8016450;
          result[2] += 1336075;
          result[3] += 3802675;
          result[4] += 19835575;
          result[5] += 3597125;
        } else {
          result[0] += 23456506;
          result[1] += 808845;
          result[2] += 23860929;
          result[3] += 32353802;
          result[4] += 12132675;
          result[5] += 50552816;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42520000))) ) ) {
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
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 5436667;
          result[1] += 12685557;
          result[2] += 18122224;
          result[3] += 25371114;
          result[4] += 25371114;
          result[5] += 56178897;
        } else {
          result[0] += 6157659;
          result[1] += 0;
          result[2] += 29248881;
          result[3] += 84667814;
          result[4] += 0;
          result[5] += 23091222;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ef0000))) ) ) {
          result[0] += 10873334;
          result[1] += 0;
          result[2] += 112357794;
          result[3] += 14497779;
          result[4] += 0;
          result[5] += 5436667;
        } else {
          result[0] += 115895942;
          result[1] += 0;
          result[2] += 20452225;
          result[3] += 0;
          result[4] += 0;
          result[5] += 6817408;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 59361336;
          result[3] += 59361336;
          result[4] += 0;
          result[5] += 24442903;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 137438953;
          result[3] += 5726623;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 1173488;
          result[1] += 0;
          result[2] += 117348833;
          result[3] += 12908371;
          result[4] += 0;
          result[5] += 11734883;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 139147635;
          result[3] += 4017940;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 2945793;
          result[1] += 7659063;
          result[2] += 0;
          result[3] += 0;
          result[4] += 129614925;
          result[5] += 2945793;
        } else {
          result[0] += 57058744;
          result[1] += 16598907;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36310109;
          result[5] += 33197814;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 491415;
          result[1] += 491415;
          result[2] += 163805;
          result[3] += 9500690;
          result[4] += 8681665;
          result[5] += 123836585;
        } else {
          result[0] += 0;
          result[1] += 644889;
          result[2] += 1289779;
          result[3] += 81256138;
          result[4] += 4514229;
          result[5] += 55460538;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 6434407;
          result[1] += 28954835;
          result[2] += 0;
          result[3] += 0;
          result[4] += 98124720;
          result[5] += 9651611;
        } else {
          result[0] += 927638;
          result[1] += 137908957;
          result[2] += 618425;
          result[3] += 0;
          result[4] += 3710554;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
          result[0] += 25858099;
          result[1] += 3784112;
          result[2] += 630685;
          result[3] += 37841121;
          result[4] += 7568224;
          result[5] += 67483333;
        } else {
          result[0] += 113830224;
          result[1] += 4983611;
          result[2] += 4530556;
          result[3] += 6682570;
          result[4] += 9627431;
          result[5] += 3511181;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24997164;
          result[3] += 24997164;
          result[4] += 13634816;
          result[5] += 79536431;
        } else {
          result[0] += 8299453;
          result[1] += 9336885;
          result[2] += 9336885;
          result[3] += 92331422;
          result[4] += 7262021;
          result[5] += 16598907;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 929646;
          result[1] += 0;
          result[2] += 99472186;
          result[3] += 34396924;
          result[4] += 1859293;
          result[5] += 6507526;
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
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11453246;
          result[3] += 97352592;
          result[4] += 0;
          result[5] += 34359738;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 99114629;
          result[3] += 25696385;
          result[4] += 0;
          result[5] += 18354561;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 827546;
          result[1] += 0;
          result[2] += 118339175;
          result[3] += 18206027;
          result[4] += 0;
          result[5] += 5792826;
        } else {
          result[0] += 1433703;
          result[1] += 0;
          result[2] += 134972982;
          result[3] += 5734815;
          result[4] += 0;
          result[5] += 1024074;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 4749568;
          result[2] += 0;
          result[3] += 0;
          result[4] += 135023458;
          result[5] += 3392549;
        } else {
          result[0] += 0;
          result[1] += 58567735;
          result[2] += 0;
          result[3] += 22776341;
          result[4] += 22776341;
          result[5] += 39045157;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 6439455;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5241417;
          result[4] += 10482835;
          result[5] += 121001868;
        } else {
          result[0] += 10692864;
          result[1] += 2970240;
          result[2] += 0;
          result[3] += 69503620;
          result[4] += 7722624;
          result[5] += 52276227;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 74695083;
          result[2] += 0;
          result[3] += 0;
          result[4] += 68470493;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 141890159;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1275417;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 57628293;
          result[1] += 6788673;
          result[2] += 11163596;
          result[3] += 18404847;
          result[4] += 26249536;
          result[5] += 22930629;
        } else {
          result[0] += 126566669;
          result[1] += 2452111;
          result[2] += 3772478;
          result[3] += 943119;
          result[4] += 8299453;
          result[5] += 1131743;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4090445;
          result[4] += 4090445;
          result[5] += 134984686;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 102261126;
          result[4] += 0;
          result[5] += 40904450;
        } else {
          result[0] += 3579139;
          result[1] += 3579139;
          result[2] += 84109776;
          result[3] += 42949672;
          result[4] += 1789569;
          result[5] += 7158278;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 5302428;
          result[1] += 7069905;
          result[2] += 80420169;
          result[3] += 25628405;
          result[4] += 2651214;
          result[5] += 22093453;
        } else {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42850000))) ) ) {
          result[0] += 132152839;
          result[1] += 0;
          result[2] += 11012736;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1384914;
          result[1] += 0;
          result[2] += 133990515;
          result[3] += 6751460;
          result[4] += 0;
          result[5] += 1038686;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 1001157;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 129149366;
          result[5] += 13015052;
        } else {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 5831591;
          result[1] += 583159;
          result[2] += 0;
          result[3] += 8018438;
          result[4] += 9622126;
          result[5] += 119110260;
        } else {
          result[0] += 557064;
          result[1] += 1114129;
          result[2] += 557064;
          result[3] += 79660223;
          result[4] += 10027161;
          result[5] += 51249934;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 40298458;
          result[2] += 0;
          result[3] += 0;
          result[4] += 100746146;
          result[5] += 2120971;
        } else {
          result[0] += 0;
          result[1] += 138599931;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4565644;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 121301134;
          result[1] += 3140106;
          result[2] += 581501;
          result[3] += 3256406;
          result[4] += 10001819;
          result[5] += 4884609;
        } else {
          result[0] += 20686769;
          result[1] += 3611975;
          result[2] += 31851057;
          result[3] += 38418285;
          result[4] += 15104625;
          result[5] += 33492864;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20951059;
          result[3] += 101263456;
          result[4] += 0;
          result[5] += 20951059;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 143165576;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20452225;
          result[3] += 102261126;
          result[4] += 0;
          result[5] += 20452225;
        } else {
          result[0] += 5726623;
          result[1] += 0;
          result[2] += 98497916;
          result[3] += 34359738;
          result[4] += 0;
          result[5] += 4581298;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30140121;
          result[3] += 97955394;
          result[4] += 0;
          result[5] += 15070060;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 143165576;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
          result[0] += 119304647;
          result[1] += 0;
          result[2] += 23860929;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1376592;
          result[1] += 0;
          result[2] += 136626764;
          result[3] += 4645998;
          result[4] += 0;
          result[5] += 516222;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0;
          result[1] += 131235111;
          result[2] += 0;
          result[3] += 0;
          result[4] += 11930464;
          result[5] += 0;
        } else {
          result[0] += 540247;
          result[1] += 1080494;
          result[2] += 0;
          result[3] += 2160989;
          result[4] += 133981369;
          result[5] += 5402474;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 7542970;
          result[1] += 301718;
          result[2] += 0;
          result[3] += 6486954;
          result[4] += 10258439;
          result[5] += 118575493;
        } else {
          result[0] += 19088743;
          result[1] += 5408477;
          result[2] += 1590728;
          result[3] += 62038416;
          result[4] += 13362120;
          result[5] += 41677090;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42890000))) ) ) {
          result[0] += 7079616;
          result[1] += 55850307;
          result[2] += 786624;
          result[3] += 5506368;
          result[4] += 66076419;
          result[5] += 7866240;
        } else {
          result[0] += 102800837;
          result[1] += 1193046;
          result[2] += 9047269;
          result[3] += 11035679;
          result[4] += 7456540;
          result[5] += 11632203;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 25053975;
          result[1] += 118111600;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
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
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 47721858;
          result[4] += 95443717;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14524043;
          result[3] += 8299453;
          result[4] += 12449180;
          result[5] += 107892898;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 1934669;
          result[2] += 17412029;
          result[3] += 88994817;
          result[4] += 0;
          result[5] += 34824059;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 102261126;
          result[3] += 20452225;
          result[4] += 0;
          result[5] += 20452225;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
          result[0] += 40904450;
          result[1] += 13634816;
          result[2] += 54539267;
          result[3] += 0;
          result[4] += 10226112;
          result[5] += 23860929;
        } else {
          result[0] += 1048832;
          result[1] += 0;
          result[2] += 106456454;
          result[3] += 31989377;
          result[4] += 1048832;
          result[5] += 2622080;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 101867814;
          result[3] += 41297762;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 139289689;
          result[3] += 3633644;
          result[4] += 0;
          result[5] += 242242;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 559240;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 134776968;
          result[5] += 7829367;
        } else {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42830000))) ) ) {
          result[0] += 224749;
          result[1] += 0;
          result[2] += 1123748;
          result[3] += 4494994;
          result[4] += 5618743;
          result[5] += 131703340;
        } else {
          result[0] += 13679742;
          result[1] += 4009579;
          result[2] += 1179288;
          result[3] += 42218514;
          result[4] += 7075728;
          result[5] += 75002723;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 141405344;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1760232;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 108886494;
          result[1] += 3472717;
          result[2] += 1232254;
          result[3] += 4144856;
          result[4] += 23076767;
          result[5] += 2352485;
        } else {
          result[0] += 23144550;
          result[1] += 4628910;
          result[2] += 25128369;
          result[3] += 31741097;
          result[4] += 16201185;
          result[5] += 42321463;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17278604;
          result[3] += 101203252;
          result[4] += 0;
          result[5] += 24683720;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31814572;
          result[3] += 0;
          result[4] += 0;
          result[5] += 111351003;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 4772185;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 23860929;
          result[4] += 0;
          result[5] += 71582788;
        } else {
          result[0] += 4772185;
          result[1] += 0;
          result[2] += 106578818;
          result[3] += 28633115;
          result[4] += 0;
          result[5] += 3181457;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42870000))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1584858;
          result[1] += 0;
          result[2] += 120977553;
          result[3] += 17433446;
          result[4] += 0;
          result[5] += 3169717;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 445998;
          result[1] += 0;
          result[2] += 140489584;
          result[3] += 2229993;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1193046;
          result[1] += 7158278;
          result[2] += 0;
          result[3] += 0;
          result[4] += 131235111;
          result[5] += 3579139;
        } else {
          result[0] += 76695844;
          result[1] += 13634816;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28973985;
          result[5] += 23860929;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 164369;
          result[1] += 1479322;
          result[2] += 1479322;
          result[3] += 6574768;
          result[4] += 10848367;
          result[5] += 122619426;
        } else {
          result[0] += 1285918;
          result[1] += 857278;
          result[2] += 5572312;
          result[3] += 69439590;
          result[4] += 428639;
          result[5] += 65581835;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42500000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 141869960;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1295616;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 105344376;
          result[1] += 3597125;
          result[2] += 1952725;
          result[3] += 4419325;
          result[4] += 21685525;
          result[5] += 6166500;
        } else {
          result[0] += 19828096;
          result[1] += 1008208;
          result[2] += 36967637;
          result[3] += 42680817;
          result[4] += 8401735;
          result[5] += 34279081;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 116322030;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 51783293;
          result[3] += 67013674;
          result[4] += 0;
          result[5] += 24368608;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 105692707;
          result[3] += 23060227;
          result[4] += 0;
          result[5] += 14412641;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428e0000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
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
          result[5] += 143165576;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 120298852;
          result[3] += 21872518;
          result[4] += 0;
          result[5] += 994205;
        } else {
          result[0] += 2061584;
          result[1] += 0;
          result[2] += 137209888;
          result[3] += 3665038;
          result[4] += 0;
          result[5] += 229064;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 141996877;
          result[5] += 1168698;
        } else {
          result[0] += 2556528;
          result[1] += 5113056;
          result[2] += 0;
          result[3] += 10226112;
          result[4] += 74139316;
          result[5] += 51130563;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 76056712;
          result[1] += 0;
          result[2] += 4473924;
          result[3] += 7456540;
          result[4] += 47721858;
          result[5] += 7456540;
        } else {
          result[0] += 385891;
          result[1] += 643151;
          result[2] += 385891;
          result[3] += 22896201;
          result[4] += 5788365;
          result[5] += 113066075;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 47721858;
          result[2] += 2651214;
          result[3] += 3976821;
          result[4] += 87490074;
          result[5] += 1325607;
        } else {
          result[0] += 958698;
          result[1] += 139011218;
          result[2] += 0;
          result[3] += 639132;
          result[4] += 2556528;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
          result[0] += 119780401;
          result[1] += 3403476;
          result[2] += 109789;
          result[3] += 4611161;
          result[4] += 11308323;
          result[5] += 3952423;
        } else {
          result[0] += 16656382;
          result[1] += 1189741;
          result[2] += 48779406;
          result[3] += 44020440;
          result[4] += 8724771;
          result[5] += 23794832;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6658864;
          result[3] += 9988296;
          result[4] += 0;
          result[5] += 126518416;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 22025473;
          result[3] += 77089156;
          result[4] += 0;
          result[5] += 44050946;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 132939463;
          result[3] += 0;
          result[4] += 0;
          result[5] += 10226112;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 47721858;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 95443717;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 50233535;
          result[1] += 0;
          result[2] += 60280242;
          result[3] += 0;
          result[4] += 0;
          result[5] += 32651798;
        } else {
          result[0] += 1395980;
          result[1] += 0;
          result[2] += 129360878;
          result[3] += 10857627;
          result[4] += 155108;
          result[5] += 1395980;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x423c0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 15907286;
          result[1] += 79536431;
          result[2] += 7953643;
          result[3] += 23860929;
          result[4] += 15907286;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
          result[0] += 2426535;
          result[1] += 606633;
          result[2] += 0;
          result[3] += 0;
          result[4] += 129212999;
          result[5] += 10919408;
        } else {
          result[0] += 5242331;
          result[1] += 873721;
          result[2] += 748904;
          result[3] += 22217500;
          result[4] += 7364227;
          result[5] += 106718890;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 106719621;
          result[1] += 8587839;
          result[2] += 209459;
          result[3] += 4293919;
          result[4] += 19165545;
          result[5] += 4189190;
        } else {
          result[0] += 23179188;
          result[1] += 1090785;
          result[2] += 32996256;
          result[3] += 38995576;
          result[4] += 10635157;
          result[5] += 36268612;
        }
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42540000))) ) ) {
          result[0] += 0;
          result[1] += 128849018;
          result[2] += 7158278;
          result[3] += 7158278;
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
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11302545;
          result[3] += 15070060;
          result[4] += 0;
          result[5] += 116792970;
        } else {
          result[0] += 9544371;
          result[1] += 0;
          result[2] += 68401330;
          result[3] += 38177487;
          result[4] += 1590728;
          result[5] += 25451658;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 54539267;
          result[3] += 88626309;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 92864157;
          result[3] += 7738679;
          result[4] += 0;
          result[5] += 42562738;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42870000))) ) ) {
          result[0] += 121140103;
          result[1] += 0;
          result[2] += 22025473;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 837225;
          result[1] += 0;
          result[2] += 132114198;
          result[3] += 9544371;
          result[4] += 0;
          result[5] += 669780;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 1060485;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 135211933;
          result[5] += 6893157;
        } else {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 454493;
          result[1] += 0;
          result[2] += 227246;
          result[3] += 3408704;
          result[4] += 2499716;
          result[5] += 136575415;
        } else {
          result[0] += 17791043;
          result[1] += 3558208;
          result[2] += 6069885;
          result[3] += 38093764;
          result[4] += 12349077;
          result[5] += 65303596;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 4853070;
          result[1] += 27905154;
          result[2] += 0;
          result[3] += 9706140;
          result[4] += 94634872;
          result[5] += 6066337;
        } else {
          result[0] += 0;
          result[1] += 142164418;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1001157;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 115678721;
          result[1] += 3742890;
          result[2] += 935722;
          result[3] += 6316128;
          result[4] += 11579568;
          result[5] += 4912544;
        } else {
          result[0] += 36268612;
          result[1] += 1431655;
          result[2] += 38177487;
          result[3] += 33405301;
          result[4] += 11930464;
          result[5] += 21952055;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 28010656;
          result[4] += 15561475;
          result[5] += 99593444;
        } else {
          result[0] += 0;
          result[1] += 114532461;
          result[2] += 0;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 14316557;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32928082;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 24338148;
        } else {
          result[0] += 2603010;
          result[1] += 0;
          result[2] += 109326440;
          result[3] += 15618062;
          result[4] += 0;
          result[5] += 15618062;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 4405094;
          result[1] += 0;
          result[2] += 55063683;
          result[3] += 39645851;
          result[4] += 0;
          result[5] += 44050946;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 137863147;
          result[3] += 0;
          result[4] += 0;
          result[5] += 5302428;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 114033046;
          result[3] += 26635456;
          result[4] += 0;
          result[5] += 2497074;
        } else {
          result[0] += 1684300;
          result[1] += 0;
          result[2] += 137059985;
          result[3] += 4421289;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0;
          result[1] += 137659208;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 5506368;
        } else {
          result[0] += 565871;
          result[1] += 1131743;
          result[2] += 0;
          result[3] += 0;
          result[4] += 129018780;
          result[5] += 12449180;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42870000))) ) ) {
          result[0] += 769707;
          result[1] += 0;
          result[2] += 769707;
          result[3] += 6350086;
          result[4] += 5195524;
          result[5] += 130080550;
        } else {
          result[0] += 12033313;
          result[1] += 1234186;
          result[2] += 3702558;
          result[3] += 45047789;
          result[4] += 8639302;
          result[5] += 72508427;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 17287918;
          result[1] += 37817322;
          result[2] += 2160989;
          result[3] += 3241484;
          result[4] += 73473654;
          result[5] += 9184206;
        } else {
          result[0] += 98713548;
          result[1] += 972111;
          result[2] += 8925755;
          result[3] += 14846800;
          result[4] += 9190876;
          result[5] += 10516483;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42900000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 122713351;
          result[4] += 20452225;
          result[5] += 0;
        } else {
          result[0] += 714042;
          result[1] += 141380469;
          result[2] += 0;
          result[3] += 714042;
          result[4] += 357021;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15561475;
          result[3] += 71582788;
          result[4] += 0;
          result[5] += 56021312;
        } else {
          result[0] += 0;
          result[1] += 62992853;
          result[2] += 40086361;
          result[3] += 0;
          result[4] += 0;
          result[5] += 40086361;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 5113056;
          result[2] += 122713351;
          result[3] += 0;
          result[4] += 0;
          result[5] += 15339168;
        } else {
          result[0] += 71582788;
          result[1] += 0;
          result[2] += 0;
          result[3] += 71582788;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 22605091;
          result[3] += 82885333;
          result[4] += 7535030;
          result[5] += 30140121;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 78090314;
          result[3] += 0;
          result[4] += 0;
          result[5] += 65075262;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 112083576;
          result[3] += 26372606;
          result[4] += 0;
          result[5] += 4709393;
        } else {
          result[0] += 938175;
          result[1] += 0;
          result[2] += 136598348;
          result[3] += 4878512;
          result[4] += 0;
          result[5] += 750540;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 2386092;
          result[1] += 1193046;
          result[2] += 0;
          result[3] += 0;
          result[4] += 136007297;
          result[5] += 3579139;
        } else {
          result[0] += 65204123;
          result[1] += 22679695;
          result[2] += 0;
          result[3] += 0;
          result[4] += 26932138;
          result[5] += 28349619;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 608352;
          result[3] += 3447329;
          result[4] += 4866818;
          result[5] += 134243075;
        } else {
          result[0] += 611818;
          result[1] += 4282730;
          result[2] += 5812277;
          result[3] += 54145955;
          result[4] += 9483189;
          result[5] += 68829604;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 139171687;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3993889;
          result[5] += 0;
        } else {
          result[0] += 5915932;
          result[1] += 26030104;
          result[2] += 4732746;
          result[3] += 4732746;
          result[4] += 99387672;
          result[5] += 2366373;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 121430868;
          result[1] += 2834961;
          result[2] += 2362468;
          result[3] += 3661825;
          result[4] += 10867353;
          result[5] += 2008098;
        } else {
          result[0] += 31763423;
          result[1] += 2301697;
          result[2] += 23477313;
          result[3] += 42351231;
          result[4] += 10587807;
          result[5] += 32684102;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 132939463;
          result[5] += 10226112;
        } else {
          result[0] += 5067808;
          result[1] += 2533904;
          result[2] += 6334760;
          result[3] += 30406848;
          result[4] += 6334760;
          result[5] += 92487496;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 1664716;
          result[2] += 16647160;
          result[3] += 111535972;
          result[4] += 0;
          result[5] += 13317728;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 71582788;
          result[3] += 41442666;
          result[4] += 0;
          result[5] += 30140121;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 1109810;
          result[1] += 0;
          result[2] += 87675042;
          result[3] += 49941480;
          result[4] += 0;
          result[5] += 4439242;
        } else {
          result[0] += 3747789;
          result[1] += 0;
          result[2] += 125925742;
          result[3] += 11243369;
          result[4] += 0;
          result[5] += 2248673;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 143165576;
        } else {
          result[0] += 486957;
          result[1] += 0;
          result[2] += 138782956;
          result[3] += 3895661;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 1239528;
          result[1] += 619764;
          result[2] += 0;
          result[3] += 0;
          result[4] += 136348168;
          result[5] += 4958115;
        } else {
          result[0] += 57561417;
          result[1] += 19187139;
          result[2] += 0;
          result[3] += 0;
          result[4] += 26566808;
          result[5] += 39850212;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 7324750;
          result[4] += 6492392;
          result[5] += 129348433;
        } else {
          result[0] += 0;
          result[1] += 5877765;
          result[2] += 3778563;
          result[3] += 57937975;
          result[4] += 8816648;
          result[5] += 66754623;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 104449795;
          result[1] += 7039232;
          result[2] += 207036;
          result[3] += 4347761;
          result[4] += 22670470;
          result[5] += 4451279;
        } else {
          result[0] += 22676344;
          result[1] += 2707623;
          result[2] += 30122308;
          result[3] += 40275895;
          result[4] += 11507398;
          result[5] += 35876007;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
          result[0] += 344977;
          result[1] += 142820599;
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
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 7535030;
          result[4] += 0;
          result[5] += 135630546;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13015052;
          result[3] += 69413612;
          result[4] += 0;
          result[5] += 60736911;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42107522;
          result[3] += 84215045;
          result[4] += 0;
          result[5] += 16843009;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 112487238;
          result[3] += 0;
          result[4] += 0;
          result[5] += 30678337;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 95443717;
          result[2] += 47721858;
          result[3] += 0;
          result[4] += 0;
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 15907286;
          result[1] += 0;
          result[2] += 31814572;
          result[3] += 0;
          result[4] += 0;
          result[5] += 95443717;
        } else {
          result[0] += 886474;
          result[1] += 0;
          result[2] += 131936903;
          result[3] += 9603470;
          result[4] += 0;
          result[5] += 738728;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42260000))) ) ) {
          result[0] += 0;
          result[1] += 128849018;
          result[2] += 0;
          result[3] += 0;
          result[4] += 14316557;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 1101273;
          result[2] += 0;
          result[3] += 1101273;
          result[4] += 134355387;
          result[5] += 6607641;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 3470680;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5726623;
          result[4] += 10412041;
          result[5] += 123556230;
        } else {
          result[0] += 16742513;
          result[1] += 4783575;
          result[2] += 5808627;
          result[3] += 51594276;
          result[4] += 13325674;
          result[5] += 50910909;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 142472280;
          result[2] += 0;
          result[3] += 0;
          result[4] += 693295;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42890000))) ) ) {
          result[0] += 26512143;
          result[1] += 24391172;
          result[2] += 0;
          result[3] += 1060485;
          result[4] += 86959831;
          result[5] += 4241943;
        } else {
          result[0] += 107279496;
          result[1] += 2083097;
          result[2] += 7006780;
          result[3] += 8332388;
          result[4] += 6722722;
          result[5] += 11741092;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 143165576;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1724886;
          result[3] += 29323069;
          result[4] += 6899545;
          result[5] += 105218074;
        } else {
          result[0] += 2726963;
          result[1] += 2726963;
          result[2] += 47721858;
          result[3] += 44994895;
          result[4] += 17725261;
          result[5] += 27269633;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32651798;
          result[3] += 72838626;
          result[4] += 0;
          result[5] += 37675151;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 119859552;
          result[3] += 13317728;
          result[4] += 0;
          result[5] += 9988296;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 4338350;
          result[1] += 0;
          result[2] += 95443717;
          result[3] += 28922338;
          result[4] += 2892233;
          result[5] += 11568935;
        } else {
          result[0] += 2097664;
          result[1] += 0;
          result[2] += 132327645;
          result[3] += 8390656;
          result[4] += 0;
          result[5] += 349610;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 1595159;
          result[1] += 2791529;
          result[2] += 0;
          result[3] += 0;
          result[4] += 130404299;
          result[5] += 8374588;
        } else {
          result[0] += 8421504;
          result[1] += 101058054;
          result[2] += 0;
          result[3] += 0;
          result[4] += 25264513;
          result[5] += 8421504;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
          result[0] += 131324814;
          result[1] += 4305731;
          result[2] += 1076432;
          result[3] += 0;
          result[4] += 6458597;
          result[5] += 0;
        } else {
          result[0] += 3420338;
          result[1] += 195447;
          result[2] += 4104405;
          result[3] += 29805802;
          result[4] += 8697430;
          result[5] += 96942151;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42910000))) ) ) {
          result[0] += 7362801;
          result[1] += 60538586;
          result[2] += 3272356;
          result[3] += 5726623;
          result[4] += 58902408;
          result[5] += 7362801;
        } else {
          result[0] += 114555911;
          result[1] += 1172527;
          result[2] += 8207690;
          result[3] += 5628130;
          result[4] += 6448899;
          result[5] += 7152416;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 335282;
          result[1] += 142159729;
          result[2] += 0;
          result[3] += 0;
          result[4] += 670564;
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
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 15907286;
          result[4] += 0;
          result[5] += 127258290;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 27837750;
          result[2] += 11930464;
          result[3] += 55675501;
          result[4] += 0;
          result[5] += 47721858;
        } else {
          result[0] += 1266952;
          result[1] += 0;
          result[2] += 100089208;
          result[3] += 39275512;
          result[4] += 0;
          result[5] += 2533904;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 71582788;
          result[4] += 0;
          result[5] += 71582788;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 112010373;
          result[3] += 25962669;
          result[4] += 0;
          result[5] += 5192533;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 0;
          result[4] += 0;
          result[5] += 28633115;
        } else {
          result[0] += 436480;
          result[1] += 0;
          result[2] += 138364291;
          result[3] += 3928323;
          result[4] += 0;
          result[5] += 436480;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42830000))) ) ) {
          result[0] += 1114129;
          result[1] += 0;
          result[2] += 557064;
          result[3] += 0;
          result[4] += 134809609;
          result[5] += 6684774;
        } else {
          result[0] += 0;
          result[1] += 89478485;
          result[2] += 0;
          result[3] += 35791394;
          result[4] += 0;
          result[5] += 17895697;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 6101651;
          result[1] += 2529953;
          result[2] += 148820;
          result[3] += 4762264;
          result[4] += 9822170;
          result[5] += 119800716;
        } else {
          result[0] += 2511676;
          result[1] += 0;
          result[2] += 13563054;
          result[3] += 61284913;
          result[4] += 1507006;
          result[5] += 64298925;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
          result[0] += 5219578;
          result[1] += 62634939;
          result[2] += 0;
          result[3] += 2236962;
          result[4] += 68600172;
          result[5] += 4473924;
        } else {
          result[0] += 105844635;
          result[1] += 1019697;
          result[2] += 6016217;
          result[3] += 10910766;
          result[4] += 11624555;
          result[5] += 7749703;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 142189447;
          result[2] += 325376;
          result[3] += 650752;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 114532461;
          result[1] += 14316557;
          result[2] += 14316557;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42740000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6092152;
          result[3] += 3046076;
          result[4] += 3046076;
          result[5] += 130981272;
        } else {
          result[0] += 0;
          result[1] += 2779914;
          result[2] += 33358969;
          result[3] += 52818368;
          result[4] += 4169871;
          result[5] += 50038453;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 37117001;
          result[1] += 7953643;
          result[2] += 18558500;
          result[3] += 31814572;
          result[4] += 23860929;
          result[5] += 23860929;
        } else {
          result[0] += 759499;
          result[1] += 0;
          result[2] += 106329871;
          result[3] += 30379963;
          result[4] += 0;
          result[5] += 5696243;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 143165576;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 139117740;
          result[3] += 3834792;
          result[4] += 0;
          result[5] += 213044;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 719425;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 138849026;
          result[5] += 3597125;
        } else {
          result[0] += 59279496;
          result[1] += 3355443;
          result[2] += 1118481;
          result[3] += 10066329;
          result[4] += 22369621;
          result[5] += 46976204;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 318145;
          result[2] += 0;
          result[3] += 7635497;
          result[4] += 11612318;
          result[5] += 123599614;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4713270;
          result[3] += 74823161;
          result[4] += 4124111;
          result[5] += 59505033;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 104389284;
          result[1] += 6572252;
          result[2] += 2628901;
          result[3] += 3395664;
          result[4] += 21031209;
          result[5] += 5148264;
        } else {
          result[0] += 32609936;
          result[1] += 7953643;
          result[2] += 30223843;
          result[3] += 45070644;
          result[4] += 6628035;
          result[5] += 20679472;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 95443717;
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
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19976592;
          result[3] += 0;
          result[4] += 23306024;
          result[5] += 99882960;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12184304;
          result[3] += 73105826;
          result[4] += 0;
          result[5] += 57875445;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 22605091;
          result[3] += 113025455;
          result[4] += 7535030;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 105490424;
          result[3] += 37675151;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 8504885;
          result[1] += 6378664;
          result[2] += 85757597;
          result[3] += 33310802;
          result[4] += 0;
          result[5] += 9213626;
        } else {
          result[0] += 110627945;
          result[1] += 0;
          result[2] += 32537631;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
          result[0] += 32537631;
          result[1] += 6507526;
          result[2] += 91105366;
          result[3] += 0;
          result[4] += 0;
          result[5] += 13015052;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 135694312;
          result[3] += 7269338;
          result[4] += 0;
          result[5] += 201926;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42420000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42a00000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 135211933;
          result[5] += 7953643;
        } else {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42960000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
        } else {
          result[0] += 599019;
          result[1] += 141069009;
          result[2] += 299509;
          result[3] += 299509;
          result[4] += 898528;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
          result[0] += 1278264;
          result[1] += 3834792;
          result[2] += 0;
          result[3] += 0;
          result[4] += 128465539;
          result[5] += 9586980;
        } else {
          result[0] += 4916561;
          result[1] += 3277707;
          result[2] += 1872975;
          result[3] += 22358646;
          result[4] += 6555414;
          result[5] += 104184270;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 111173862;
          result[1] += 6270801;
          result[2] += 1806840;
          result[3] += 3719966;
          result[4] += 18706118;
          result[5] += 1487986;
        } else {
          result[0] += 28633115;
          result[1] += 4328261;
          result[2] += 32295490;
          result[3] += 38621411;
          result[4] += 12651841;
          result[5] += 26635456;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 9544371;
          result[2] += 76354974;
          result[3] += 9544371;
          result[4] += 47721858;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 2045222;
          result[2] += 6135667;
          result[3] += 38859227;
          result[4] += 6135667;
          result[5] += 89989790;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 22025473;
          result[3] += 88101893;
          result[4] += 0;
          result[5] += 33038209;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 101058054;
          result[3] += 29475265;
          result[4] += 0;
          result[5] += 12632256;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42540000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 56243619;
          result[3] += 20452225;
          result[4] += 5113056;
          result[5] += 61356675;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 89478485;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1314953;
          result[1] += 0;
          result[2] += 132974685;
          result[3] += 8875937;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 636291;
          result[1] += 1908874;
          result[2] += 0;
          result[3] += 0;
          result[4] += 136166370;
          result[5] += 4454040;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 7723769;
          result[1] += 2068866;
          result[2] += 0;
          result[3] += 8413391;
          result[4] += 7585844;
          result[5] += 117373704;
        } else {
          result[0] += 1917396;
          result[1] += 0;
          result[2] += 3834792;
          result[3] += 76056712;
          result[4] += 8308716;
          result[5] += 53047959;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 44212898;
          result[2] += 0;
          result[3] += 0;
          result[4] += 98952677;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 140308613;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2856962;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 116098334;
          result[1] += 1565873;
          result[2] += 0;
          result[3] += 5145012;
          result[4] += 14428405;
          result[5] += 5927949;
        } else {
          result[0] += 22136042;
          result[1] += 4599697;
          result[2] += 36510096;
          result[3] += 38522464;
          result[4] += 9486875;
          result[5] += 31910399;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20951059;
          result[3] += 52377649;
          result[4] += 0;
          result[5] += 69836866;
        } else {
          result[0] += 0;
          result[1] += 114532461;
          result[2] += 28633115;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 75253700;
          result[3] += 55063683;
          result[4] += 0;
          result[5] += 12848192;
        } else {
          result[0] += 4839399;
          result[1] += 0;
          result[2] += 117355444;
          result[3] += 19357599;
          result[4] += 0;
          result[5] += 1613133;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b60000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 143165576;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 107374182;
          result[3] += 0;
          result[4] += 0;
          result[5] += 35791394;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
          result[0] += 35791394;
          result[1] += 0;
          result[2] += 107374182;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 139098372;
          result[3] += 4067203;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
          result[0] += 641998;
          result[1] += 8987973;
          result[2] += 0;
          result[3] += 641998;
          result[4] += 130325614;
          result[5] += 2567992;
        } else {
          result[0] += 53687091;
          result[1] += 3355443;
          result[2] += 0;
          result[3] += 0;
          result[4] += 44739242;
          result[5] += 41383799;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4668442;
          result[4] += 6224590;
          result[5] += 132272543;
        } else {
          result[0] += 3067833;
          result[1] += 1533916;
          result[2] += 1022611;
          result[3] += 73628010;
          result[4] += 13805252;
          result[5] += 50107951;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 6410398;
          result[1] += 49146391;
          result[2] += 8547198;
          result[3] += 0;
          result[4] += 79061587;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 142825515;
          result[2] += 0;
          result[3] += 0;
          result[4] += 340060;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 113911559;
          result[1] += 5492590;
          result[2] += 119404;
          result[3] += 2865699;
          result[4] += 18149430;
          result[5] += 2626891;
        } else {
          result[0] += 25386919;
          result[1] += 1664716;
          result[2] += 25803098;
          result[3] += 29132530;
          result[4] += 9988296;
          result[5] += 51190017;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 1154561;
          result[2] += 2309122;
          result[3] += 33482271;
          result[4] += 21936660;
          result[5] += 84282960;
        } else {
          result[0] += 847133;
          result[1] += 2541400;
          result[2] += 22025473;
          result[3] += 79630557;
          result[4] += 3388534;
          result[5] += 34732477;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42860000))) ) ) {
          result[0] += 122713351;
          result[1] += 0;
          result[2] += 20452225;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 5052902;
          result[1] += 1684300;
          result[2] += 92636549;
          result[3] += 32001717;
          result[4] += 5052902;
          result[5] += 6737203;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 11012736;
          result[1] += 132152839;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 3163880;
          result[1] += 1581940;
          result[2] += 87006703;
          result[3] += 36384621;
          result[4] += 1581940;
          result[5] += 13446490;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 15176562;
          result[1] += 0;
          result[2] += 114330107;
          result[3] += 13658906;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 3035312;
          result[1] += 0;
          result[2] += 134818466;
          result[3] += 5311797;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 1827645;
          result[1] += 2436860;
          result[2] += 0;
          result[3] += 0;
          result[4] += 132808917;
          result[5] += 6092152;
        } else {
          result[0] += 65075262;
          result[1] += 7809031;
          result[2] += 0;
          result[3] += 5206020;
          result[4] += 15618062;
          result[5] += 49457199;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4560676;
          result[4] += 9121352;
          result[5] += 129483547;
        } else {
          result[0] += 900412;
          result[1] += 3301512;
          result[2] += 900412;
          result[3] += 54625020;
          result[4] += 7503436;
          result[5] += 75934781;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 3869339;
          result[2] += 0;
          result[3] += 0;
          result[4] += 139296236;
          result[5] += 0;
        } else {
          result[0] += 312588;
          result[1] += 142852987;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 41291966;
          result[1] += 5123820;
          result[2] += 7836431;
          result[3] += 33154133;
          result[4] += 21098084;
          result[5] += 34661139;
        } else {
          result[0] += 110633097;
          result[1] += 2947193;
          result[2] += 12015479;
          result[3] += 5327618;
          result[4] += 9861761;
          result[5] += 2380425;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 3181457;
          result[2] += 12725829;
          result[3] += 3181457;
          result[4] += 28633115;
          result[5] += 95443717;
        } else {
          result[0] += 0;
          result[1] += 4338350;
          result[2] += 21691754;
          result[3] += 91105366;
          result[4] += 4338350;
          result[5] += 21691754;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 23860929;
          result[3] += 79536431;
          result[4] += 0;
          result[5] += 39768215;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 103519724;
          result[3] += 26430567;
          result[4] += 0;
          result[5] += 13215283;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 71582788;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 17895697;
          result[5] += 0;
        } else {
          result[0] += 2468372;
          result[1] += 0;
          result[2] += 113051437;
          result[3] += 27645766;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 18472977;
          result[2] += 78510154;
          result[3] += 46182444;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1088711;
          result[1] += 0;
          result[2] += 140171619;
          result[3] += 1360889;
          result[4] += 544355;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 1745921;
          result[1] += 581973;
          result[2] += 0;
          result[3] += 0;
          result[4] += 136181889;
          result[5] += 4655791;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 71582788;
          result[3] += 0;
          result[4] += 0;
          result[5] += 71582788;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42620000))) ) ) {
          result[0] += 139836144;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3329432;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 956829;
          result[2] += 598018;
          result[3] += 20811036;
          result[4] += 8850670;
          result[5] += 111949022;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 10928669;
          result[1] += 30600275;
          result[2] += 0;
          result[3] += 1092866;
          result[4] += 99450896;
          result[5] += 1092866;
        } else {
          result[0] += 0;
          result[1] += 138278398;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4887178;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 127455371;
          result[1] += 2787294;
          result[2] += 0;
          result[3] += 2660599;
          result[4] += 8361883;
          result[5] += 1900428;
        } else {
          result[0] += 33197814;
          result[1] += 2904808;
          result[2] += 34857705;
          result[3] += 34027760;
          result[4] += 6639562;
          result[5] += 31537924;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 1626881;
          result[2] += 6507526;
          result[3] += 3253763;
          result[4] += 17895697;
          result[5] += 113881708;
        } else {
          result[0] += 39045157;
          result[1] += 26030104;
          result[2] += 52060209;
          result[3] += 0;
          result[4] += 26030104;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11930464;
          result[3] += 85004561;
          result[4] += 0;
          result[5] += 46230550;
        } else {
          result[0] += 0;
          result[1] += 8947848;
          result[2] += 98426333;
          result[3] += 0;
          result[4] += 8947848;
          result[5] += 26843545;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 3940336;
          result[1] += 0;
          result[2] += 51224380;
          result[3] += 63045391;
          result[4] += 5253782;
          result[5] += 19701684;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 117135471;
          result[3] += 26030104;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 107374182;
          result[1] += 23860929;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 11930464;
        } else {
          result[0] += 851162;
          result[1] += 0;
          result[2] += 131419530;
          result[3] += 10043720;
          result[4] += 0;
          result[5] += 851162;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 1239528;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 117755236;
          result[5] += 24170811;
        } else {
          result[0] += 98335951;
          result[1] += 2892233;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41937391;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 174592;
          result[2] += 0;
          result[3] += 6110725;
          result[4] += 8031239;
          result[5] += 128849018;
        } else {
          result[0] += 380759;
          result[1] += 1142278;
          result[2] += 380759;
          result[3] += 64729117;
          result[4] += 6472911;
          result[5] += 70059750;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 40904450;
          result[2] += 0;
          result[3] += 0;
          result[4] += 99854981;
          result[5] += 2406144;
        } else {
          result[0] += 0;
          result[1] += 140090420;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3075155;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 114686996;
          result[1] += 3752991;
          result[2] += 2759552;
          result[3] += 6071015;
          result[4] += 10375916;
          result[5] += 5519104;
        } else {
          result[0] += 18334556;
          result[1] += 3510872;
          result[2] += 44861147;
          result[3] += 37449306;
          result[4] += 9362326;
          result[5] += 29647367;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429e0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 19088743;
          result[4] += 4772185;
          result[5] += 119304647;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 100215903;
          result[4] += 0;
          result[5] += 42949672;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
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
          result[5] += 143165576;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 7844689;
          result[1] += 7844689;
          result[2] += 39223445;
          result[3] += 60796340;
          result[4] += 11767033;
          result[5] += 15689378;
        } else {
          result[0] += 3123612;
          result[1] += 0;
          result[2] += 109847042;
          result[3] += 26030104;
          result[4] += 0;
          result[5] += 4164816;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 63629145;
          result[3] += 0;
          result[4] += 0;
          result[5] += 79536431;
        } else {
          result[0] += 207186;
          result[1] += 207186;
          result[2] += 138400296;
          result[3] += 4350907;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 137997144;
          result[5] += 5168432;
        } else {
          result[0] += 0;
          result[1] += 97955394;
          result[2] += 0;
          result[3] += 22605091;
          result[4] += 22605091;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 7889886;
          result[1] += 430357;
          result[2] += 0;
          result[3] += 5307741;
          result[4] += 10328578;
          result[5] += 119209012;
        } else {
          result[0] += 1052688;
          result[1] += 0;
          result[2] += 1579032;
          result[3] += 76319884;
          result[4] += 1052688;
          result[5] += 63161283;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 30954719;
          result[2] += 1934669;
          result[3] += 0;
          result[4] += 110276187;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 142272651;
          result[2] += 0;
          result[3] += 0;
          result[4] += 892924;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 114258241;
          result[1] += 2970714;
          result[2] += 1142582;
          result[3] += 4113296;
          result[4] += 15767637;
          result[5] += 4913104;
        } else {
          result[0] += 29856137;
          result[1] += 3237412;
          result[2] += 27697862;
          result[3] += 43525212;
          result[4] += 8992812;
          result[5] += 29856137;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 143165576;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41648167;
          result[3] += 75487303;
          result[4] += 2603010;
          result[5] += 23427094;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 4772185;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 47721858;
          result[4] += 0;
          result[5] += 4772185;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 139398061;
          result[3] += 3767515;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 66076419;
          result[3] += 55063683;
          result[4] += 0;
          result[5] += 22025473;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 143165576;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 47721858;
          result[3] += 71582788;
          result[4] += 0;
          result[5] += 23860929;
        } else {
          result[0] += 1486147;
          result[1] += 0;
          result[2] += 133092796;
          result[3] += 7595866;
          result[4] += 0;
          result[5] += 990765;
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
