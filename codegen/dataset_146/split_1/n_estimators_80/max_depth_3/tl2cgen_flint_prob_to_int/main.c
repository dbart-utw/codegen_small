
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
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        result[0] += 725501;
        result[1] += 3264755;
        result[2] += 0;
        result[3] += 362750;
        result[4] += 44799701;
        result[5] += 4534382;
      } else {
        result[0] += 1448629;
        result[1] += 834059;
        result[2] += 351182;
        result[3] += 9350245;
        result[4] += 2721667;
        result[5] += 38981305;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 180460;
        result[1] += 43581285;
        result[2] += 90230;
        result[3] += 541382;
        result[4] += 9203501;
        result[5] += 90230;
      } else {
        result[0] += 34555322;
        result[1] += 820401;
        result[2] += 3117526;
        result[3] += 5644364;
        result[4] += 4725514;
        result[5] += 4823962;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 0;
        result[1] += 1220161;
        result[2] += 7320966;
        result[3] += 28063706;
        result[4] += 2440322;
        result[5] += 14641933;
      } else {
        result[0] += 6170930;
        result[1] += 1851279;
        result[2] += 34248661;
        result[3] += 5245290;
        result[4] += 617093;
        result[5] += 5553837;
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 44503772;
        result[3] += 8241439;
        result[4] += 0;
        result[5] += 941878;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 51579918;
        result[3] += 1465859;
        result[4] += 0;
        result[5] += 641313;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        result[0] += 618871;
        result[1] += 2320767;
        result[2] += 0;
        result[3] += 0;
        result[4] += 45796481;
        result[5] += 4950970;
      } else {
        result[0] += 2180893;
        result[1] += 324813;
        result[2] += 0;
        result[3] += 8677170;
        result[4] += 3433746;
        result[5] += 39070467;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 128131;
        result[1] += 52149513;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1409446;
        result[5] += 0;
      } else {
        result[0] += 31687605;
        result[1] += 1878004;
        result[2] += 3815628;
        result[3] += 5246489;
        result[4] += 5842681;
        result[5] += 5216680;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0;
        result[1] += 5609099;
        result[2] += 1602599;
        result[3] += 2403899;
        result[4] += 7211698;
        result[5] += 36859793;
      } else {
        result[0] += 429496;
        result[1] += 0;
        result[2] += 23622320;
        result[3] += 24910810;
        result[4] += 0;
        result[5] += 4724464;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 15862095;
        result[1] += 6100805;
        result[2] += 24403223;
        result[3] += 1220161;
        result[4] += 2440322;
        result[5] += 3660483;
      } else {
        result[0] += 61994;
        result[1] += 0;
        result[2] += 49471476;
        result[3] += 3533676;
        result[4] += 0;
        result[5] += 619943;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 10378173;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40315213;
        result[5] += 2993703;
      } else {
        result[0] += 0;
        result[1] += 450120;
        result[2] += 122760;
        result[3] += 8797808;
        result[4] += 4255684;
        result[5] += 40060718;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 44803615;
        result[2] += 0;
        result[3] += 482797;
        result[4] += 8207558;
        result[5] += 193119;
      } else {
        result[0] += 36153151;
        result[1] += 2136630;
        result[2] += 2814926;
        result[3] += 4442835;
        result[4] += 4273261;
        result[5] += 3866284;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42aa0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 15339168;
        result[3] += 29498401;
        result[4] += 0;
        result[5] += 8849520;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 41054834;
        result[3] += 4737096;
        result[4] += 0;
        result[5] += 7895160;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 7895160;
        result[1] += 0;
        result[2] += 22106449;
        result[3] += 20527417;
        result[4] += 1579032;
        result[5] += 1579032;
      } else {
        result[0] += 294014;
        result[1] += 0;
        result[2] += 50688140;
        result[3] += 2646132;
        result[4] += 0;
        result[5] += 58802;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        result[0] += 11876602;
        result[1] += 1575467;
        result[2] += 121189;
        result[3] += 242379;
        result[4] += 36356946;
        result[5] += 3514504;
      } else {
        result[0] += 143548;
        result[1] += 622042;
        result[2] += 1100537;
        result[3] += 5406988;
        result[4] += 4402150;
        result[5] += 42011823;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x425a0000))) ) ) {
        result[0] += 589968;
        result[1] += 51563206;
        result[2] += 0;
        result[3] += 235987;
        result[4] += 1297929;
        result[5] += 0;
      } else {
        result[0] += 31813381;
        result[1] += 1930033;
        result[2] += 3216722;
        result[3] += 7430627;
        result[4] += 3441892;
        result[5] += 5854434;
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0;
        result[1] += 1451002;
        result[2] += 0;
        result[3] += 7255012;
        result[4] += 8706014;
        result[5] += 36275061;
      } else {
        result[0] += 2300875;
        result[1] += 0;
        result[2] += 19940919;
        result[3] += 29911379;
        result[4] += 0;
        result[5] += 1533916;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 3200856;
        result[1] += 872960;
        result[2] += 36227874;
        result[3] += 8293127;
        result[4] += 0;
        result[5] += 5092271;
      } else {
        result[0] += 0;
        result[1] += 81221;
        result[2] += 52143891;
        result[3] += 974652;
        result[4] += 0;
        result[5] += 487326;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c60000))) ) ) {
        result[0] += 0;
        result[1] += 28633115;
        result[2] += 0;
        result[3] += 0;
        result[4] += 25053975;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 53151559;
        result[2] += 0;
        result[3] += 0;
        result[4] += 535532;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
        result[0] += 3144576;
        result[1] += 393072;
        result[2] += 98268;
        result[3] += 8123489;
        result[4] += 10547433;
        result[5] += 31380252;
      } else {
        result[0] += 32972425;
        result[1] += 3389096;
        result[2] += 3009011;
        result[3] += 4656048;
        result[4] += 6208064;
        result[5] += 3452444;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 1563701;
        result[2] += 13030847;
        result[3] += 22413057;
        result[4] += 1042467;
        result[5] += 15637016;
      } else {
        result[0] += 0;
        result[1] += 3976821;
        result[2] += 41756626;
        result[3] += 0;
        result[4] += 0;
        result[5] += 7953643;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 9395240;
        result[1] += 0;
        result[2] += 29527900;
        result[3] += 1342177;
        result[4] += 0;
        result[5] += 13421772;
      } else {
        result[0] += 59257;
        result[1] += 0;
        result[2] += 51079771;
        result[3] += 2311033;
        result[4] += 0;
        result[5] += 237029;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        result[0] += 1671916;
        result[1] += 1300379;
        result[2] += 0;
        result[3] += 0;
        result[4] += 44770204;
        result[5] += 5944591;
      } else {
        result[0] += 1760936;
        result[1] += 558345;
        result[2] += 214748;
        result[3] += 8461085;
        result[4] += 2705829;
        result[5] += 39986145;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 581448;
        result[1] += 45740626;
        result[2] += 0;
        result[3] += 96908;
        result[4] += 7268108;
        result[5] += 0;
      } else {
        result[0] += 34953858;
        result[1] += 1971919;
        result[2] += 3880228;
        result[3] += 4866187;
        result[4] += 4293695;
        result[5] += 3721202;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6927366;
        result[3] += 0;
        result[4] += 1731841;
        result[5] += 45027882;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 25582439;
        result[3] += 23420543;
        result[4] += 0;
        result[5] += 4684108;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 25053975;
        result[3] += 0;
        result[4] += 7158278;
        result[5] += 21474836;
      } else {
        result[0] += 450071;
        result[1] += 128591;
        result[2] += 49636448;
        result[3] += 3214795;
        result[4] += 0;
        result[5] += 257183;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 5701284;
        result[1] += 4592701;
        result[2] += 0;
        result[3] += 791845;
        result[4] += 36899977;
        result[5] += 5701284;
      } else {
        result[0] += 0;
        result[1] += 438460;
        result[2] += 97435;
        result[3] += 9207677;
        result[4] += 2630764;
        result[5] += 41312752;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 32611703;
        result[1] += 2235720;
        result[2] += 1490480;
        result[3] += 4471440;
        result[4] += 7362971;
        result[5] += 5514776;
      } else {
        result[0] += 946623;
        result[1] += 52740467;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 14293316;
        result[3] += 31026955;
        result[4] += 0;
        result[5] += 8366819;
      } else {
        result[0] += 11107674;
        result[1] += 0;
        result[2] += 37951219;
        result[3] += 925639;
        result[4] += 2776918;
        result[5] += 925639;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 2667681;
        result[1] += 0;
        result[2] += 42349444;
        result[3] += 7336124;
        result[4] += 0;
        result[5] += 1333840;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 52207201;
        result[3] += 1397673;
        result[4] += 0;
        result[5] += 82216;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 2794123;
        result[2] += 0;
        result[3] += 1197481;
        result[4] += 48098843;
        result[5] += 1596642;
      } else {
        result[0] += 3616963;
        result[1] += 1134733;
        result[2] += 886510;
        result[3] += 8900567;
        result[4] += 2730453;
        result[5] += 36417861;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 45675645;
        result[2] += 0;
        result[3] += 0;
        result[4] += 7907401;
        result[5] += 104044;
      } else {
        result[0] += 38020395;
        result[1] += 764229;
        result[2] += 3897568;
        result[3] += 4203259;
        result[4] += 3591876;
        result[5] += 3209762;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 2497074;
        result[1] += 13733907;
        result[2] += 0;
        result[3] += 1248537;
        result[4] += 11236833;
        result[5] += 24970740;
      } else {
        result[0] += 688296;
        result[1] += 0;
        result[2] += 24090361;
        result[3] += 22369621;
        result[4] += 0;
        result[5] += 6538812;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428d0000))) ) ) {
        result[0] += 32212254;
        result[1] += 2684354;
        result[2] += 10737418;
        result[3] += 2684354;
        result[4] += 5368709;
        result[5] += 0;
      } else {
        result[0] += 237816;
        result[1] += 0;
        result[2] += 48990213;
        result[3] += 3983427;
        result[4] += 0;
        result[5] += 475633;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 9749471;
        result[1] += 259985;
        result[2] += 0;
        result[3] += 0;
        result[4] += 37177985;
        result[5] += 6499647;
      } else {
        result[0] += 106100;
        result[1] += 318302;
        result[2] += 53050;
        result[3] += 4827594;
        result[4] += 3607433;
        result[5] += 44774609;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 305619;
        result[1] += 47574708;
        result[2] += 203746;
        result[3] += 509365;
        result[4] += 4889905;
        result[5] += 203746;
      } else {
        result[0] += 32749125;
        result[1] += 1168483;
        result[2] += 3442289;
        result[3] += 7737257;
        result[4] += 3094902;
        result[5] += 5495031;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 9431516;
        result[3] += 4353007;
        result[4] += 10882518;
        result[5] += 29020049;
      } else {
        result[0] += 2556528;
        result[1] += 3579139;
        result[2] += 18151349;
        result[3] += 24798323;
        result[4] += 766958;
        result[5] += 3834792;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 28063706;
        result[3] += 8541128;
        result[4] += 0;
        result[5] += 17082256;
      } else {
        result[0] += 444219;
        result[1] += 0;
        result[2] += 50831394;
        result[3] += 2411476;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 2556528;
        result[2] += 0;
        result[3] += 0;
        result[4] += 49669689;
        result[5] += 1460873;
      } else {
        result[0] += 2100433;
        result[1] += 378078;
        result[2] += 210043;
        result[3] += 9283917;
        result[4] += 3318685;
        result[5] += 38395932;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 136608;
        result[1] += 51228140;
        result[2] += 683041;
        result[3] += 0;
        result[4] += 1639300;
        result[5] += 0;
      } else {
        result[0] += 32638101;
        result[1] += 2889673;
        result[2] += 3589278;
        result[3] += 4471389;
        result[4] += 5049324;
        result[5] += 5049324;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
        result[0] += 1579032;
        result[1] += 2368548;
        result[2] += 10263708;
        result[3] += 3947580;
        result[4] += 6316128;
        result[5] += 29212093;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 24211825;
        result[3] += 22632793;
        result[4] += 1052688;
        result[5] += 5789784;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 43561056;
        result[3] += 8788634;
        result[4] += 191057;
        result[5] += 1146343;
      } else {
        result[0] += 416179;
        result[1] += 0;
        result[2] += 51855903;
        result[3] += 1165301;
        result[4] += 0;
        result[5] += 249707;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6983686;
        result[1] += 581973;
        result[2] += 0;
        result[3] += 581973;
        result[4] += 38846757;
        result[5] += 6692699;
      } else {
        result[0] += 89627;
        result[1] += 134441;
        result[2] += 0;
        result[3] += 8380205;
        result[4] += 3136975;
        result[5] += 41945840;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 113503;
        result[1] += 52098044;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1475543;
        result[5] += 0;
      } else {
        result[0] += 32659647;
        result[1] += 2268918;
        result[2] += 3834792;
        result[3] += 5240882;
        result[4] += 6135667;
        result[5] += 3547182;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 15276814;
        result[3] += 23569942;
        result[4] += 0;
        result[5] += 14840334;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 46475392;
        result[3] += 801299;
        result[4] += 0;
        result[5] += 6410398;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42320000))) ) ) {
        result[0] += 0;
        result[1] += 33038209;
        result[2] += 20648881;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 297270;
        result[1] += 0;
        result[2] += 49584755;
        result[3] += 3151069;
        result[4] += 237816;
        result[5] += 416179;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 443694;
        result[1] += 1774779;
        result[2] += 0;
        result[3] += 0;
        result[4] += 50803073;
        result[5] += 665542;
      } else {
        result[0] += 2854789;
        result[1] += 553914;
        result[2] += 340870;
        result[3] += 8734804;
        result[4] += 2854789;
        result[5] += 38347922;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 52704261;
        result[2] += 0;
        result[3] += 0;
        result[4] += 982830;
        result[5] += 0;
      } else {
        result[0] += 32783713;
        result[1] += 1985068;
        result[2] += 2045222;
        result[3] += 4722057;
        result[4] += 7098125;
        result[5] += 5052902;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7874106;
        result[3] += 37223049;
        result[4] += 0;
        result[5] += 8589934;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 36238786;
        result[3] += 6710886;
        result[4] += 0;
        result[5] += 10737418;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 751619;
        result[1] += 0;
        result[2] += 45419279;
        result[3] += 6442450;
        result[4] += 0;
        result[5] += 1073741;
      } else {
        result[0] += 881923;
        result[1] += 0;
        result[2] += 52364205;
        result[3] += 330721;
        result[4] += 0;
        result[5] += 110240;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 174876;
        result[1] += 1399012;
        result[2] += 0;
        result[3] += 874382;
        result[4] += 48265919;
        result[5] += 2972900;
      } else {
        result[0] += 3235521;
        result[1] += 188111;
        result[2] += 150489;
        result[3] += 9518454;
        result[4] += 2972165;
        result[5] += 37622348;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 97612;
        result[1] += 45975672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 7320966;
        result[5] += 292838;
      } else {
        result[0] += 37558247;
        result[1] += 1022250;
        result[2] += 3596807;
        result[3] += 5035531;
        result[4] += 3558946;
        result[5] += 2915307;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 0;
        result[1] += 2825636;
        result[2] += 5651272;
        result[3] += 1412818;
        result[4] += 4238454;
        result[5] += 39558909;
      } else {
        result[0] += 2252605;
        result[1] += 750868;
        result[2] += 21024315;
        result[3] += 23652354;
        result[4] += 0;
        result[5] += 6006947;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 8180890;
        result[1] += 5624361;
        result[2] += 29144420;
        result[3] += 7158278;
        result[4] += 0;
        result[5] += 3579139;
      } else {
        result[0] += 384394;
        result[1] += 0;
        result[2] += 50227541;
        result[3] += 2306366;
        result[4] += 0;
        result[5] += 768788;
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 354370;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 52269610;
        result[5] += 1063110;
      } else {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 1756393;
        result[1] += 0;
        result[2] += 58546;
        result[3] += 1990579;
        result[4] += 2224764;
        result[5] += 47656807;
      } else {
        result[0] += 2291522;
        result[1] += 1800481;
        result[2] += 2455202;
        result[3] += 24715703;
        result[4] += 2455202;
        result[5] += 19968979;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        result[0] += 0;
        result[1] += 43712440;
        result[2] += 0;
        result[3] += 293372;
        result[4] += 9485697;
        result[5] += 195581;
      } else {
        result[0] += 39302728;
        result[1] += 1816207;
        result[2] += 617510;
        result[3] += 3341821;
        result[4] += 4649490;
        result[5] += 3959332;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 220029;
        result[1] += 0;
        result[2] += 25303342;
        result[3] += 19582586;
        result[4] += 880116;
        result[5] += 7701017;
      } else {
        result[0] += 1456835;
        result[1] += 215827;
        result[2] += 47158309;
        result[3] += 3507196;
        result[4] += 0;
        result[5] += 1348921;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 848807;
        result[2] += 0;
        result[3] += 0;
        result[4] += 47745436;
        result[5] += 5092846;
      } else {
        result[0] += 721600;
        result[1] += 1298881;
        result[2] += 721600;
        result[3] += 7023580;
        result[4] += 2357228;
        result[5] += 41564199;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cd0000))) ) ) {
        result[0] += 29475265;
        result[1] += 2294320;
        result[2] += 2483264;
        result[3] += 6235152;
        result[4] += 7098896;
        result[5] += 6100192;
      } else {
        result[0] += 1060485;
        result[1] += 52626605;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 12033313;
        result[3] += 31471743;
        result[4] += 0;
        result[5] += 10182034;
      } else {
        result[0] += 1745921;
        result[1] += 2182402;
        result[2] += 33172511;
        result[3] += 4801284;
        result[4] += 872960;
        result[5] += 10912010;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 34164512;
        result[3] += 19522578;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 324589;
        result[1] += 0;
        result[2] += 50635950;
        result[3] += 2272125;
        result[4] += 0;
        result[5] += 454425;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 215610;
        result[1] += 1293664;
        result[2] += 0;
        result[3] += 0;
        result[4] += 49159264;
        result[5] += 3018551;
      } else {
        result[0] += 1436161;
        result[1] += 591360;
        result[2] += 633600;
        result[3] += 8236807;
        result[4] += 2365442;
        result[5] += 40423718;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 52771319;
        result[2] += 0;
        result[3] += 0;
        result[4] += 915771;
        result[5] += 0;
      } else {
        result[0] += 33367151;
        result[1] += 1186110;
        result[2] += 3402263;
        result[3] += 4900507;
        result[4] += 6117831;
        result[5] += 4713227;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2902004;
        result[3] += 4353007;
        result[4] += 7255012;
        result[5] += 39177066;
      } else {
        result[0] += 0;
        result[1] += 3221225;
        result[2] += 20759008;
        result[3] += 22906492;
        result[4] += 715827;
        result[5] += 6084537;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 10226112;
        result[1] += 25565281;
        result[2] += 2556528;
        result[3] += 2556528;
        result[4] += 7669584;
        result[5] += 5113056;
      } else {
        result[0] += 118123;
        result[1] += 59061;
        result[2] += 49907141;
        result[3] += 2834961;
        result[4] += 118123;
        result[5] += 649678;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        result[0] += 8272539;
        result[1] += 506481;
        result[2] += 337654;
        result[3] += 1012963;
        result[4] += 36129048;
        result[5] += 7428402;
      } else {
        result[0] += 180007;
        result[1] += 225008;
        result[2] += 0;
        result[3] += 8685338;
        result[4] += 3510136;
        result[5] += 41086600;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
        result[0] += 683290;
        result[1] += 42656834;
        result[2] += 0;
        result[3] += 195225;
        result[4] += 9761289;
        result[5] += 390451;
      } else {
        result[0] += 40312019;
        result[1] += 2428434;
        result[2] += 1008734;
        result[3] += 3399808;
        result[4] += 3698693;
        result[5] += 2839400;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3158064;
        result[3] += 36317738;
        result[4] += 0;
        result[5] += 14211288;
      } else {
        result[0] += 880116;
        result[1] += 0;
        result[2] += 28750464;
        result[3] += 15842092;
        result[4] += 586744;
        result[5] += 7627674;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 4129776;
        result[1] += 1376592;
        result[2] += 23402065;
        result[3] += 9636144;
        result[4] += 0;
        result[5] += 15142512;
      } else {
        result[0] += 1015990;
        result[1] += 0;
        result[2] += 49837020;
        result[3] += 2513240;
        result[4] += 0;
        result[5] += 320839;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 215610;
        result[1] += 646832;
        result[2] += 0;
        result[3] += 0;
        result[4] += 49590485;
        result[5] += 3234162;
      } else {
        result[0] += 2949009;
        result[1] += 491501;
        result[2] += 0;
        result[3] += 8695796;
        result[4] += 3175856;
        result[5] += 38374927;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cd0000))) ) ) {
        result[0] += 32898724;
        result[1] += 3011398;
        result[2] += 3885676;
        result[3] += 4274243;
        result[4] += 6670410;
        result[5] += 2946637;
      } else {
        result[0] += 752622;
        result[1] += 52683594;
        result[2] += 0;
        result[3] += 0;
        result[4] += 250874;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 838860;
        result[2] += 7549747;
        result[3] += 34393292;
        result[4] += 0;
        result[5] += 10905190;
      } else {
        result[0] += 1118481;
        result[1] += 1491308;
        result[2] += 37282702;
        result[3] += 2609789;
        result[4] += 1864135;
        result[5] += 9320675;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 40615451;
        result[3] += 8870041;
        result[4] += 0;
        result[5] += 4201598;
      } else {
        result[0] += 71774;
        result[1] += 0;
        result[2] += 51533865;
        result[3] += 2009677;
        result[4] += 0;
        result[5] += 71774;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 10891438;
        result[1] += 110014;
        result[2] += 0;
        result[3] += 0;
        result[4] += 37074896;
        result[5] += 5610741;
      } else {
        result[0] += 0;
        result[1] += 582289;
        result[2] += 232915;
        result[3] += 11063500;
        result[4] += 3183182;
        result[5] += 38625202;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 297161;
        result[1] += 42890240;
        result[2] += 0;
        result[3] += 99053;
        result[4] += 10400635;
        result[5] += 0;
      } else {
        result[0] += 37826798;
        result[1] += 674062;
        result[2] += 4599484;
        result[3] += 4361580;
        result[4] += 3449613;
        result[5] += 2775551;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 0;
        result[1] += 6547206;
        result[2] += 5237764;
        result[3] += 9166088;
        result[4] += 3928323;
        result[5] += 28807707;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 33554431;
        result[3] += 13421772;
        result[4] += 0;
        result[5] += 6710886;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 177771;
        result[1] += 0;
        result[2] += 41598607;
        result[3] += 9599678;
        result[4] += 0;
        result[5] += 2311033;
      } else {
        result[0] += 488064;
        result[1] += 0;
        result[2] += 51165424;
        result[3] += 1789569;
        result[4] += 0;
        result[5] += 244032;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 357913;
        result[1] += 178956;
        result[2] += 536870;
        result[3] += 1789569;
        result[4] += 46886726;
        result[5] += 3937053;
      } else {
        result[0] += 2591790;
        result[1] += 277691;
        result[2] += 92563;
        result[3] += 8377037;
        result[4] += 3008328;
        result[5] += 39339678;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 51318543;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2368548;
        result[5] += 0;
      } else {
        result[0] += 36523698;
        result[1] += 1750666;
        result[2] += 2368548;
        result[3] += 4290848;
        result[4] += 5972860;
        result[5] += 2780469;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 8753330;
        result[3] += 4668442;
        result[4] += 1167110;
        result[5] += 39098207;
      } else {
        result[0] += 2147483;
        result[1] += 5726623;
        result[2] += 10021590;
        result[3] += 23264406;
        result[4] += 1431655;
        result[5] += 11095332;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 2284557;
        result[1] += 0;
        result[2] += 36299073;
        result[3] += 12311224;
        result[4] += 0;
        result[5] += 2792236;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 50925576;
        result[3] += 2192967;
        result[4] += 0;
        result[5] += 568547;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
      } else {
        result[0] += 231909;
        result[1] += 53107316;
        result[2] += 0;
        result[3] += 0;
        result[4] += 347864;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        result[0] += 22980693;
        result[1] += 3993795;
        result[2] += 0;
        result[3] += 851136;
        result[4] += 23177110;
        result[5] += 2684354;
      } else {
        result[0] += 3930454;
        result[1] += 1106350;
        result[2] += 1805097;
        result[3] += 10859699;
        result[4] += 4891231;
        result[5] += 31094258;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
        result[0] += 41370640;
        result[1] += 0;
        result[2] += 7263547;
        result[3] += 3473870;
        result[4] += 0;
        result[5] += 1579032;
      } else {
        result[0] += 869155;
        result[1] += 0;
        result[2] += 45864688;
        result[3] += 5816658;
        result[4] += 0;
        result[5] += 1136588;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 51890033;
        result[1] += 0;
        result[2] += 1235476;
        result[3] += 0;
        result[4] += 561580;
        result[5] += 0;
      } else {
        result[0] += 1559376;
        result[1] += 0;
        result[2] += 52127715;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 196656;
        result[1] += 196656;
        result[2] += 589968;
        result[3] += 393312;
        result[4] += 49950626;
        result[5] += 2359872;
      } else {
        result[0] += 1897212;
        result[1] += 282563;
        result[2] += 0;
        result[3] += 8719106;
        result[4] += 3148566;
        result[5] += 39639641;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
        result[0] += 362750;
        result[1] += 50059585;
        result[2] += 241833;
        result[3] += 241833;
        result[4] += 2781088;
        result[5] += 0;
      } else {
        result[0] += 34413993;
        result[1] += 2428851;
        result[2] += 3185896;
        result[3] += 4605355;
        result[4] += 5804009;
        result[5] += 3248983;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1118481;
        result[3] += 21251140;
        result[4] += 0;
        result[5] += 31317469;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 42949672;
        result[3] += 3579139;
        result[4] += 0;
        result[5] += 7158278;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 2386092;
        result[2] += 28633115;
        result[3] += 18492220;
        result[4] += 596523;
        result[5] += 3579139;
      } else {
        result[0] += 813440;
        result[1] += 232411;
        result[2] += 49561784;
        result[3] += 2556528;
        result[4] += 58102;
        result[5] += 464823;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        result[0] += 169895;
        result[1] += 1189271;
        result[2] += 0;
        result[3] += 0;
        result[4] += 51308549;
        result[5] += 1019375;
      } else {
        result[0] += 4852055;
        result[1] += 314485;
        result[2] += 134779;
        result[3] += 4178158;
        result[4] += 4402790;
        result[5] += 39804822;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0;
        result[1] += 51305808;
        result[2] += 0;
        result[3] += 324720;
        result[4] += 2056561;
        result[5] += 0;
      } else {
        result[0] += 29749773;
        result[1] += 1968735;
        result[2] += 4281217;
        result[3] += 7312444;
        result[4] += 4312467;
        result[5] += 6062453;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42950000))) ) ) {
        result[0] += 0;
        result[1] += 565127;
        result[2] += 5651272;
        result[3] += 12432800;
        result[4] += 4521018;
        result[5] += 30516872;
      } else {
        result[0] += 5169868;
        result[1] += 795364;
        result[2] += 24258611;
        result[3] += 19884107;
        result[4] += 1590728;
        result[5] += 1988410;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 23008753;
        result[1] += 0;
        result[2] += 26843545;
        result[3] += 2556528;
        result[4] += 0;
        result[5] += 1278264;
      } else {
        result[0] += 518090;
        result[1] += 0;
        result[2] += 51226163;
        result[3] += 1683792;
        result[4] += 0;
        result[5] += 259045;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 563151;
        result[1] += 1501736;
        result[2] += 0;
        result[3] += 0;
        result[4] += 50308183;
        result[5] += 1314019;
      } else {
        result[0] += 3061273;
        result[1] += 344393;
        result[2] += 38265;
        result[3] += 8609832;
        result[4] += 2869944;
        result[5] += 38763380;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42660000))) ) ) {
        result[0] += 0;
        result[1] += 49091745;
        result[2] += 0;
        result[3] += 112081;
        result[4] += 4483264;
        result[5] += 0;
      } else {
        result[0] += 34841279;
        result[1] += 1877874;
        result[2] += 3789282;
        result[3] += 4627619;
        result[4] += 4862353;
        result[5] += 3688682;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 14230313;
        result[3] += 21345469;
        result[4] += 0;
        result[5] += 18111307;
      } else {
        result[0] += 2982616;
        result[1] += 2982616;
        result[2] += 36984440;
        result[3] += 4175662;
        result[4] += 0;
        result[5] += 6561755;
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 10737418;
        result[3] += 32212254;
        result[4] += 0;
        result[5] += 10737418;
      } else {
        result[0] += 183232;
        result[1] += 0;
        result[2] += 50633217;
        result[3] += 2382021;
        result[4] += 122154;
        result[5] += 366464;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42850000))) ) ) {
        result[0] += 198841;
        result[1] += 596523;
        result[2] += 0;
        result[3] += 397682;
        result[4] += 50903316;
        result[5] += 1590728;
      } else {
        result[0] += 0;
        result[1] += 19173961;
        result[2] += 0;
        result[3] += 23008753;
        result[4] += 0;
        result[5] += 11504376;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 2336478;
        result[1] += 51921;
        result[2] += 51921;
        result[3] += 2284557;
        result[4] += 4413348;
        result[5] += 44548862;
      } else {
        result[0] += 4139425;
        result[1] += 125437;
        result[2] += 0;
        result[3] += 27219856;
        result[4] += 1630682;
        result[5] += 20571689;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 37825852;
        result[1] += 4483343;
        result[2] += 1733056;
        result[3] += 2222833;
        result[4] += 5877323;
        result[5] += 1544681;
      } else {
        result[0] += 399655;
        result[1] += 52754561;
        result[2] += 0;
        result[3] += 0;
        result[4] += 532874;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 229432;
        result[1] += 2064888;
        result[2] += 21566609;
        result[3] += 19042857;
        result[4] += 917728;
        result[5] += 9865576;
      } else {
        result[0] += 1371183;
        result[1] += 52737;
        result[2] += 47358553;
        result[3] += 3322482;
        result[4] += 105475;
        result[5] += 1476658;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 10416898;
        result[1] += 2403899;
        result[2] += 0;
        result[3] += 133549;
        result[4] += 35924944;
        result[5] += 4807799;
      } else {
        result[0] += 300167;
        result[1] += 214405;
        result[2] += 0;
        result[3] += 9905525;
        result[4] += 3258960;
        result[5] += 40008032;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 108240;
        result[1] += 49357487;
        result[2] += 0;
        result[3] += 432960;
        result[4] += 3680163;
        result[5] += 108240;
      } else {
        result[0] += 33434075;
        result[1] += 1992099;
        result[2] += 4117006;
        result[3] += 4980249;
        result[4] += 5445072;
        result[5] += 3718586;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 994205;
        result[2] += 13421772;
        result[3] += 23860929;
        result[4] += 994205;
        result[5] += 14415978;
      } else {
        result[0] += 1769904;
        result[1] += 0;
        result[2] += 41297762;
        result[3] += 9734472;
        result[4] += 0;
        result[5] += 884952;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 1309441;
        result[2] += 34045472;
        result[3] += 5237764;
        result[4] += 0;
        result[5] += 13094412;
      } else {
        result[0] += 73746;
        result[1] += 0;
        result[2] += 51917187;
        result[3] += 1622412;
        result[4] += 0;
        result[5] += 73746;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
      } else {
        result[0] += 958698;
        result[1] += 51769695;
        result[2] += 0;
        result[3] += 239674;
        result[4] += 719023;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
        result[0] += 1154961;
        result[1] += 298054;
        result[2] += 111770;
        result[3] += 7004283;
        result[4] += 10245628;
        result[5] += 34872392;
      } else {
        result[0] += 30982165;
        result[1] += 2874041;
        result[2] += 2960262;
        result[3] += 4627206;
        result[4] += 7098881;
        result[5] += 5144533;
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 679583;
        result[1] += 0;
        result[2] += 13591668;
        result[3] += 33299588;
        result[4] += 0;
        result[5] += 6116250;
      } else {
        result[0] += 1412818;
        result[1] += 0;
        result[2] += 42384545;
        result[3] += 8005969;
        result[4] += 0;
        result[5] += 1883757;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 2556528;
        result[1] += 0;
        result[2] += 41834097;
        result[3] += 8134407;
        result[4] += 0;
        result[5] += 1162058;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 52422873;
        result[3] += 1095654;
        result[4] += 0;
        result[5] += 168562;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 0;
        result[1] += 1533916;
        result[2] += 0;
        result[3] += 1314785;
        result[4] += 50180995;
        result[5] += 657392;
      } else {
        result[0] += 2240126;
        result[1] += 1025142;
        result[2] += 721396;
        result[3] += 9378155;
        result[4] += 2695745;
        result[5] += 37626525;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 372180;
        result[1] += 42521664;
        result[2] += 279135;
        result[3] += 372180;
        result[4] += 9676702;
        result[5] += 465226;
      } else {
        result[0] += 35689521;
        result[1] += 1052688;
        result[2] += 3871175;
        result[3] += 3939090;
        result[4] += 4991778;
        result[5] += 4142836;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 5113056;
        result[2] += 2556528;
        result[3] += 35791394;
        result[4] += 0;
        result[5] += 10226112;
      } else {
        result[0] += 0;
        result[1] += 2386092;
        result[2] += 4772185;
        result[3] += 1193046;
        result[4] += 4772185;
        result[5] += 40563580;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 35549560;
        result[3] += 14872775;
        result[4] += 0;
        result[5] += 3264755;
      } else {
        result[0] += 337654;
        result[1] += 0;
        result[2] += 50715730;
        result[3] += 2363582;
        result[4] += 0;
        result[5] += 270123;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 983280;
        result[1] += 786624;
        result[2] += 0;
        result[3] += 0;
        result[4] += 47787410;
        result[5] += 4129776;
      } else {
        result[0] += 2260060;
        result[1] += 938138;
        result[2] += 85285;
        result[3] += 8571171;
        result[4] += 2473273;
        result[5] += 39359162;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
        result[0] += 0;
        result[1] += 52084491;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1602599;
        result[5] += 0;
      } else {
        result[0] += 31046544;
        result[1] += 1523038;
        result[2] += 4246933;
        result[3] += 5594235;
        result[4] += 6795092;
        result[5] += 4481246;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2863311;
        result[3] += 15748213;
        result[4] += 715827;
        result[5] += 34359738;
      } else {
        result[0] += 2334221;
        result[1] += 7002664;
        result[2] += 28944344;
        result[3] += 10270573;
        result[4] += 0;
        result[5] += 5135286;
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 17256565;
        result[3] += 17256565;
        result[4] += 0;
        result[5] += 19173961;
      } else {
        result[0] += 191511;
        result[1] += 0;
        result[2] += 50176044;
        result[3] += 3000348;
        result[4] += 0;
        result[5] += 319186;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 210537;
        result[1] += 1052688;
        result[2] += 0;
        result[3] += 842150;
        result[4] += 46949887;
        result[5] += 4631827;
      } else {
        result[0] += 1834774;
        result[1] += 398863;
        result[2] += 119659;
        result[3] += 8655348;
        result[4] += 3669548;
        result[5] += 39008896;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 53068576;
        result[2] += 0;
        result[3] += 0;
        result[4] += 618514;
        result[5] += 0;
      } else {
        result[0] += 33444930;
        result[1] += 1877171;
        result[2] += 4161062;
        result[3] += 5256078;
        result[4] += 5537654;
        result[5] += 3410194;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5446516;
        result[3] += 23342213;
        result[4] += 778073;
        result[5] += 24120287;
      } else {
        result[0] += 9761289;
        result[1] += 3003473;
        result[2] += 29283867;
        result[3] += 9761289;
        result[4] += 0;
        result[5] += 1877171;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 212201;
        result[1] += 212201;
        result[2] += 43289196;
        result[3] += 8275875;
        result[4] += 0;
        result[5] += 1697615;
      } else {
        result[0] += 176023;
        result[1] += 0;
        result[2] += 52278905;
        result[3] += 1144151;
        result[4] += 0;
        result[5] += 88011;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 379414;
        result[1] += 3604433;
        result[2] += 0;
        result[3] += 379414;
        result[4] += 46667930;
        result[5] += 2655898;
      } else {
        result[0] += 1464976;
        result[1] += 991013;
        result[2] += 344700;
        result[3] += 8876035;
        result[4] += 3188478;
        result[5] += 38821885;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        result[0] += 458080;
        result[1] += 41776985;
        result[2] += 0;
        result[3] += 0;
        result[4] += 11085559;
        result[5] += 366464;
      } else {
        result[0] += 34396924;
        result[1] += 1394469;
        result[2] += 2290914;
        result[3] += 5611081;
        result[4] += 3552578;
        result[5] += 6441122;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 8476909;
        result[3] += 37675151;
        result[4] += 0;
        result[5] += 7535030;
      } else {
        result[0] += 386238;
        result[1] += 0;
        result[2] += 33988949;
        result[3] += 15449522;
        result[4] += 0;
        result[5] += 3862380;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 1451002;
        result[1] += 0;
        result[2] += 32647555;
        result[3] += 13059022;
        result[4] += 725501;
        result[5] += 5804009;
      } else {
        result[0] += 912159;
        result[1] += 0;
        result[2] += 50364225;
        result[3] += 2019781;
        result[4] += 0;
        result[5] += 390925;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
        result[0] += 637613;
        result[1] += 3570637;
        result[2] += 127522;
        result[3] += 0;
        result[4] += 45143064;
        result[5] += 4208251;
      } else {
        result[0] += 247977;
        result[1] += 53439113;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
        result[0] += 1505647;
        result[1] += 344148;
        result[2] += 215092;
        result[3] += 9765200;
        result[4] += 3183369;
        result[5] += 38673633;
      } else {
        result[0] += 35388489;
        result[1] += 1544469;
        result[2] += 3861172;
        result[3] += 5069887;
        result[4] += 3189664;
        result[5] += 4633407;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1851279;
        result[3] += 0;
        result[4] += 5553837;
        result[5] += 46281975;
      } else {
        result[0] += 1906050;
        result[1] += 1588375;
        result[2] += 23507957;
        result[3] += 16836780;
        result[4] += 1906050;
        result[5] += 7941877;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 23183062;
        result[3] += 23183062;
        result[4] += 0;
        result[5] += 7320966;
      } else {
        result[0] += 486406;
        result[1] += 0;
        result[2] += 49674239;
        result[3] += 3100839;
        result[4] += 0;
        result[5] += 425605;
      }
    }
  }
  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 1346384;
        result[1] += 1346384;
        result[2] += 0;
        result[3] += 0;
        result[4] += 49816235;
        result[5] += 1178086;
      } else {
        result[0] += 0;
        result[1] += 5263440;
        result[2] += 0;
        result[3] += 0;
        result[4] += 26317201;
        result[5] += 22106449;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        result[0] += 134554;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1009155;
        result[4] += 1210987;
        result[5] += 51332394;
      } else {
        result[0] += 12990023;
        result[1] += 976128;
        result[2] += 300347;
        result[3] += 14266499;
        result[4] += 5556426;
        result[5] += 19597665;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 661442;
        result[1] += 49608195;
        result[2] += 0;
        result[3] += 220480;
        result[4] += 3196972;
        result[5] += 0;
      } else {
        result[0] += 42902988;
        result[1] += 1213795;
        result[2] += 1820692;
        result[3] += 3174541;
        result[4] += 2147483;
        result[5] += 2427590;
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 2064888;
        result[2] += 20648881;
        result[3] += 21962900;
        result[4] += 563151;
        result[5] += 8447269;
      } else {
        result[0] += 1157956;
        result[1] += 105268;
        result[2] += 47686769;
        result[3] += 3000160;
        result[4] += 684247;
        result[5] += 1052688;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6538812;
        result[1] += 1204518;
        result[2] += 344148;
        result[3] += 1204518;
        result[4] += 38372504;
        result[5] += 6022590;
      } else {
        result[0] += 228845;
        result[1] += 503459;
        result[2] += 457690;
        result[3] += 8604580;
        result[4] += 2517297;
        result[5] += 41375217;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 52794431;
        result[2] += 0;
        result[3] += 0;
        result[4] += 892659;
        result[5] += 0;
      } else {
        result[0] += 35403060;
        result[1] += 2588889;
        result[2] += 2362361;
        result[3] += 3268472;
        result[4] += 6083889;
        result[5] += 3980417;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c60000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3976821;
        result[3] += 25517938;
        result[4] += 3976821;
        result[5] += 20215509;
      } else {
        result[0] += 0;
        result[1] += 518715;
        result[2] += 33457172;
        result[3] += 14783401;
        result[4] += 259357;
        result[5] += 4668442;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 4709393;
        result[1] += 2825636;
        result[2] += 14128181;
        result[3] += 941878;
        result[4] += 10360666;
        result[5] += 20721333;
      } else {
        result[0] += 64295;
        result[1] += 0;
        result[2] += 50279407;
        result[3] += 2507540;
        result[4] += 0;
        result[5] += 835846;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        result[0] += 629145;
        result[1] += 838860;
        result[2] += 209715;
        result[3] += 209715;
        result[4] += 50960793;
        result[5] += 838860;
      } else {
        result[0] += 2474240;
        result[1] += 392736;
        result[2] += 196368;
        result[3] += 7579816;
        result[4] += 3338260;
        result[5] += 39705668;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        result[0] += 0;
        result[1] += 45075894;
        result[2] += 0;
        result[3] += 0;
        result[4] += 8611196;
        result[5] += 0;
      } else {
        result[0] += 41622137;
        result[1] += 2459844;
        result[2] += 1600851;
        result[3] += 2889341;
        result[4] += 3123612;
        result[5] += 1991303;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 1052688;
        result[2] += 2105376;
        result[3] += 16316664;
        result[4] += 2105376;
        result[5] += 32106985;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 26030104;
        result[3] += 23047488;
        result[4] += 0;
        result[5] += 4609497;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 5017485;
        result[1] += 2006994;
        result[2] += 30104910;
        result[3] += 7024479;
        result[4] += 3010491;
        result[5] += 6522730;
      } else {
        result[0] += 175831;
        result[1] += 0;
        result[2] += 50111859;
        result[3] += 3164959;
        result[4] += 0;
        result[5] += 234441;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 10933984;
        result[1] += 368561;
        result[2] += 122853;
        result[3] += 0;
        result[4] += 37101834;
        result[5] += 5159857;
      } else {
        result[0] += 104857;
        result[1] += 891289;
        result[2] += 262143;
        result[3] += 4980735;
        result[4] += 3512729;
        result[5] += 43935334;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 50093431;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3593659;
        result[5] += 0;
      } else {
        result[0] += 30391744;
        result[1] += 1257589;
        result[2] += 3413456;
        result[3] += 8473757;
        result[4] += 3443399;
        result[5] += 6707143;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 53687091;
      } else {
        result[0] += 403662;
        result[1] += 1210987;
        result[2] += 20586779;
        result[3] += 22201428;
        result[4] += 403662;
        result[5] += 8880571;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 0;
        result[1] += 8259552;
        result[2] += 0;
        result[3] += 0;
        result[4] += 28908433;
        result[5] += 16519104;
      } else {
        result[0] += 703324;
        result[1] += 0;
        result[2] += 48881041;
        result[3] += 3458011;
        result[4] += 0;
        result[5] += 644713;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 222768;
        result[1] += 2895984;
        result[2] += 0;
        result[3] += 222768;
        result[4] += 49231730;
        result[5] += 1113840;
      } else {
        result[0] += 2231980;
        result[1] += 518138;
        result[2] += 677565;
        result[3] += 8170641;
        result[4] += 4822671;
        result[5] += 37266095;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 51020129;
        result[2] += 0;
        result[3] += 347864;
        result[4] += 1971232;
        result[5] += 347864;
      } else {
        result[0] += 34268356;
        result[1] += 2157637;
        result[2] += 3172995;
        result[3] += 4600844;
        result[4] += 5425823;
        result[5] += 4061434;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 2091704;
        result[1] += 2091704;
        result[2] += 2788939;
        result[3] += 16733638;
        result[4] += 4183409;
        result[5] += 25797693;
      } else {
        result[0] += 11467145;
        result[1] += 4169871;
        result[2] += 28667864;
        result[3] += 3648637;
        result[4] += 0;
        result[5] += 5733572;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 725501;
        result[1] += 0;
        result[2] += 34461308;
        result[3] += 16686528;
        result[4] += 0;
        result[5] += 1813753;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 50771633;
        result[3] += 2559914;
        result[4] += 0;
        result[5] += 355543;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        result[0] += 7380166;
        result[1] += 434127;
        result[2] += 0;
        result[3] += 1302382;
        result[4] += 37045540;
        result[5] += 7524875;
      } else {
        result[0] += 0;
        result[1] += 348334;
        result[2] += 87083;
        result[3] += 8447117;
        result[4] += 2481884;
        result[5] += 42322670;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42870000))) ) ) {
        result[0] += 463619;
        result[1] += 43858366;
        result[2] += 0;
        result[3] += 0;
        result[4] += 9365105;
        result[5] += 0;
      } else {
        result[0] += 35885027;
        result[1] += 1158714;
        result[2] += 4389068;
        result[3] += 5477558;
        result[4] += 3019679;
        result[5] += 3757043;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4329604;
        result[3] += 28575387;
        result[4] += 0;
        result[5] += 20782099;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 32212254;
        result[3] += 8351325;
        result[4] += 0;
        result[5] += 13123511;
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 371536;
        result[2] += 43284056;
        result[3] += 8916887;
        result[4] += 0;
        result[5] += 1114610;
      } else {
        result[0] += 224319;
        result[1] += 0;
        result[2] += 51144805;
        result[3] += 1495462;
        result[4] += 224319;
        result[5] += 598184;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 249707;
        result[1] += 3246196;
        result[2] += 0;
        result[3] += 0;
        result[4] += 49192357;
        result[5] += 998829;
      } else {
        result[0] += 41353570;
        result[1] += 1451002;
        result[2] += 0;
        result[3] += 0;
        result[4] += 7255012;
        result[5] += 3627506;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 308546;
        result[3] += 1727860;
        result[4] += 4072813;
        result[5] += 47577870;
      } else {
        result[0] += 990130;
        result[1] += 660087;
        result[2] += 660087;
        result[3] += 23873153;
        result[4] += 3080406;
        result[5] += 24423225;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0;
        result[1] += 23569942;
        result[2] += 0;
        result[3] += 0;
        result[4] += 30117148;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 53560768;
        result[2] += 0;
        result[3] += 0;
        result[4] += 126322;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 41297762;
        result[1] += 1707503;
        result[2] += 635350;
        result[3] += 2700238;
        result[4] += 5559314;
        result[5] += 1786922;
      } else {
        result[0] += 1789569;
        result[1] += 0;
        result[2] += 42339592;
        result[3] += 6466854;
        result[4] += 284704;
        result[5] += 2806370;
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 234441;
        result[1] += 1641090;
        result[2] += 0;
        result[3] += 0;
        result[4] += 49701586;
        result[5] += 2109973;
      } else {
        result[0] += 20452225;
        result[1] += 511305;
        result[2] += 511305;
        result[3] += 0;
        result[4] += 16361780;
        result[5] += 15850474;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 62865;
        result[1] += 0;
        result[2] += 0;
        result[3] += 3017541;
        result[4] += 2703214;
        result[5] += 47903470;
      } else {
        result[0] += 0;
        result[1] += 2990527;
        result[2] += 2990527;
        result[3] += 24351439;
        result[4] += 1566466;
        result[5] += 21788129;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42560000))) ) ) {
        result[0] += 368561;
        result[1] += 49510063;
        result[2] += 737122;
        result[3] += 0;
        result[4] += 2948490;
        result[5] += 122853;
      } else {
        result[0] += 34530482;
        result[1] += 1943424;
        result[2] += 1735200;
        result[3] += 2706912;
        result[4] += 7947216;
        result[5] += 4823856;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 4981276;
        result[1] += 2029408;
        result[2] += 25090874;
        result[3] += 15128321;
        result[4] += 1291442;
        result[5] += 5165768;
      } else {
        result[0] += 463485;
        result[1] += 0;
        result[2] += 50597186;
        result[3] += 2162933;
        result[4] += 0;
        result[5] += 463485;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        result[0] += 8761988;
        result[1] += 637235;
        result[2] += 0;
        result[3] += 159308;
        result[4] += 37118968;
        result[5] += 7009590;
      } else {
        result[0] += 136261;
        result[1] += 1317195;
        result[2] += 227102;
        result[3] += 9129530;
        result[4] += 2134765;
        result[5] += 40742234;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42620000))) ) ) {
        result[0] += 213892;
        result[1] += 47270307;
        result[2] += 106946;
        result[3] += 0;
        result[4] += 5775105;
        result[5] += 320839;
      } else {
        result[0] += 33619271;
        result[1] += 1199530;
        result[2] += 3728270;
        result[3] += 4409084;
        result[4] += 6289429;
        result[5] += 4441504;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2440322;
        result[4] += 8134407;
        result[5] += 43112361;
      } else {
        result[0] += 0;
        result[1] += 697234;
        result[2] += 21614283;
        result[3] += 21265665;
        result[4] += 697234;
        result[5] += 9412671;
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 19976592;
        result[1] += 3745611;
        result[2] += 26219277;
        result[3] += 1248537;
        result[4] += 1248537;
        result[5] += 1248537;
      } else {
        result[0] += 1030113;
        result[1] += 60594;
        result[2] += 49263662;
        result[3] += 2908555;
        result[4] += 0;
        result[5] += 424164;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 925639;
        result[1] += 1110767;
        result[2] += 370255;
        result[3] += 0;
        result[4] += 49244021;
        result[5] += 2036406;
      } else {
        result[0] += 1624290;
        result[1] += 598422;
        result[2] += 170977;
        result[3] += 8463410;
        result[4] += 3291326;
        result[5] += 39538661;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 50659185;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3027905;
        result[5] += 0;
      } else {
        result[0] += 32992590;
        result[1] += 1404604;
        result[2] += 3589543;
        result[3] += 4682013;
        result[4] += 6211471;
        result[5] += 4806867;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 2440322;
        result[2] += 7727687;
        result[3] += 19115858;
        result[4] += 5287365;
        result[5] += 19115858;
      } else {
        result[0] += 8351325;
        result[1] += 0;
        result[2] += 34598347;
        result[3] += 5965232;
        result[4] += 0;
        result[5] += 4772185;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 224632;
        result[1] += 0;
        result[2] += 40433792;
        result[3] += 11006976;
        result[4] += 0;
        result[5] += 2021689;
      } else {
        result[0] += 78604;
        result[1] += 0;
        result[2] += 51564761;
        result[3] += 1886515;
        result[4] += 0;
        result[5] += 157209;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 7016853;
        result[1] += 3263652;
        result[2] += 0;
        result[3] += 0;
        result[4] += 36552913;
        result[5] += 6853671;
      } else {
        result[0] += 0;
        result[1] += 916944;
        result[2] += 962791;
        result[3] += 9857151;
        result[4] += 2108971;
        result[5] += 39841231;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cd0000))) ) ) {
        result[0] += 31233429;
        result[1] += 2046634;
        result[2] += 3796656;
        result[3] += 5101756;
        result[4] += 6762793;
        result[5] += 4745820;
      } else {
        result[0] += 1571329;
        result[1] += 52115761;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 1012963;
        result[2] += 2025927;
        result[3] += 2025927;
        result[4] += 7090747;
        result[5] += 41531523;
      } else {
        result[0] += 0;
        result[1] += 845466;
        result[2] += 24518514;
        result[3] += 19868451;
        result[4] += 0;
        result[5] += 8454660;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 921666;
        result[1] += 0;
        result[2] += 39631672;
        result[3] += 9907918;
        result[4] += 691250;
        result[5] += 2534583;
      } else {
        result[0] += 154941;
        result[1] += 0;
        result[2] += 51905268;
        result[3] += 1471940;
        result[4] += 0;
        result[5] += 154941;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 198841;
        result[1] += 198841;
        result[2] += 0;
        result[3] += 198841;
        result[4] += 51102157;
        result[5] += 1988410;
      } else {
        result[0] += 1786664;
        result[1] += 174308;
        result[2] += 0;
        result[3] += 8192510;
        result[4] += 2876094;
        result[5] += 40657513;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 52111623;
        result[2] += 0;
        result[3] += 121189;
        result[4] += 1454277;
        result[5] += 0;
      } else {
        result[0] += 32773569;
        result[1] += 1871050;
        result[2] += 4013706;
        result[3] += 4677627;
        result[4] += 5914935;
        result[5] += 4436201;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 1342177;
        result[1] += 9395240;
        result[2] += 2013265;
        result[3] += 3355443;
        result[4] += 5368709;
        result[5] += 32212254;
      } else {
        result[0] += 7405116;
        result[1] += 0;
        result[2] += 24066627;
        result[3] += 16661511;
        result[4] += 0;
        result[5] += 5553837;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 6781527;
        result[1] += 0;
        result[2] += 28256363;
        result[3] += 12432800;
        result[4] += 565127;
        result[5] += 5651272;
      } else {
        result[0] += 185340;
        result[1] += 0;
        result[2] += 50968757;
        result[3] += 2347651;
        result[4] += 0;
        result[5] += 185340;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2086777;
        result[4] += 48754708;
        result[5] += 2845605;
      } else {
        result[0] += 1677721;
        result[1] += 199728;
        result[2] += 79891;
        result[3] += 6990506;
        result[4] += 3195660;
        result[5] += 41543582;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cd0000))) ) ) {
        result[0] += 31251638;
        result[1] += 3096724;
        result[2] += 4044701;
        result[3] += 4866281;
        result[4] += 6193449;
        result[5] += 4234296;
      } else {
        result[0] += 1319093;
        result[1] += 51840360;
        result[2] += 527637;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 497102;
        result[2] += 4473924;
        result[3] += 18392799;
        result[4] += 5965232;
        result[5] += 24358032;
      } else {
        result[0] += 20546911;
        result[1] += 3976821;
        result[2] += 24523733;
        result[3] += 3976821;
        result[4] += 0;
        result[5] += 662803;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 41661182;
        result[3] += 10093173;
        result[4] += 0;
        result[5] += 1932735;
      } else {
        result[0] += 164180;
        result[1] += 0;
        result[2] += 51716922;
        result[3] += 1641807;
        result[4] += 0;
        result[5] += 164180;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 167772;
        result[1] += 1845493;
        result[2] += 0;
        result[3] += 503316;
        result[4] += 48821698;
        result[5] += 2348810;
      } else {
        result[0] += 2563816;
        result[1] += 267861;
        result[2] += 0;
        result[3] += 8954226;
        result[4] += 2793412;
        result[5] += 39107774;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 51502819;
        result[2] += 0;
        result[3] += 114961;
        result[4] += 2069309;
        result[5] += 0;
      } else {
        result[0] += 32554251;
        result[1] += 1742249;
        result[2] += 4710526;
        result[3] += 5517122;
        result[4] += 5452595;
        result[5] += 3710345;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 8053063;
        result[3] += 28185722;
        result[4] += 0;
        result[5] += 17448304;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 35791394;
        result[3] += 0;
        result[4] += 0;
        result[5] += 17895697;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 212201;
        result[1] += 212201;
        result[2] += 42652590;
        result[3] += 9549087;
        result[4] += 424403;
        result[5] += 636605;
      } else {
        result[0] += 0;
        result[1] += 81221;
        result[2] += 51331681;
        result[3] += 1624420;
        result[4] += 0;
        result[5] += 649768;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a10000))) ) ) {
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
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
        result[0] += 3170497;
        result[1] += 452928;
        result[2] += 724685;
        result[3] += 8243293;
        result[4] += 11806328;
        result[5] += 29289357;
      } else {
        result[0] += 35066871;
        result[1] += 3079219;
        result[2] += 2789410;
        result[3] += 3550158;
        result[4] += 5397690;
        result[5] += 3803741;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 2076296;
        result[1] += 296613;
        result[2] += 16906984;
        result[3] += 18390053;
        result[4] += 593227;
        result[5] += 15423915;
      } else {
        result[0] += 3340530;
        result[1] += 1908874;
        result[2] += 38893314;
        result[3] += 8589934;
        result[4] += 0;
        result[5] += 954437;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 47758455;
        result[3] += 5599267;
        result[4] += 0;
        result[5] += 329368;
      } else {
        result[0] += 194871;
        result[1] += 0;
        result[2] += 52810169;
        result[3] += 682050;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 171936;
        result[1] += 0;
        result[2] += 171936;
        result[3] += 4642278;
        result[4] += 10703030;
        result[5] += 37997909;
      } else {
        result[0] += 18365685;
        result[1] += 4374503;
        result[2] += 2024563;
        result[3] += 10845877;
        result[4] += 8857466;
        result[5] += 9218995;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 0;
        result[1] += 52929155;
        result[2] += 0;
        result[3] += 0;
        result[4] += 631612;
        result[5] += 126322;
      } else {
        result[0] += 14316557;
        result[1] += 14316557;
        result[2] += 3579139;
        result[3] += 10737418;
        result[4] += 10737418;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 44906492;
        result[1] += 0;
        result[2] += 6271856;
        result[3] += 752622;
        result[4] += 501748;
        result[5] += 1254371;
      } else {
        result[0] += 1814939;
        result[1] += 0;
        result[2] += 46661517;
        result[3] += 4215344;
        result[4] += 117092;
        result[5] += 878196;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 52665869;
        result[1] += 0;
        result[2] += 729444;
        result[3] += 0;
        result[4] += 145888;
        result[5] += 145888;
      } else {
        result[0] += 5263440;
        result[1] += 0;
        result[2] += 48423650;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cc0000))) ) ) {
        result[0] += 0;
        result[1] += 397682;
        result[2] += 0;
        result[3] += 0;
        result[4] += 49710269;
        result[5] += 3579139;
      } else {
        result[0] += 0;
        result[1] += 44739242;
        result[2] += 0;
        result[3] += 8947848;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 1395864;
        result[1] += 53687;
        result[2] += 322122;
        result[3] += 3113851;
        result[4] += 4348654;
        result[5] += 44452911;
      } else {
        result[0] += 3238268;
        result[1] += 170435;
        result[2] += 2045222;
        result[3] += 28292244;
        result[4] += 511305;
        result[5] += 19429613;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42560000))) ) ) {
        result[0] += 117477;
        result[1] += 52747273;
        result[2] += 0;
        result[3] += 0;
        result[4] += 822340;
        result[5] += 0;
      } else {
        result[0] += 36881308;
        result[1] += 2320463;
        result[2] += 492219;
        result[3] += 3832280;
        result[4] += 5906634;
        result[5] += 4254183;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 2139702;
        result[1] += 194518;
        result[2] += 23731250;
        result[3] += 18868289;
        result[4] += 389036;
        result[5] += 8364293;
      } else {
        result[0] += 1682980;
        result[1] += 0;
        result[2] += 47964956;
        result[3] += 3646458;
        result[4] += 56099;
        result[5] += 336596;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 9138228;
        result[1] += 253839;
        result[2] += 0;
        result[3] += 634599;
        result[4] += 37695191;
        result[5] += 5965232;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 83106;
        result[3] += 9765066;
        result[4] += 4072240;
        result[5] += 39766676;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 421075;
        result[1] += 49476338;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3789677;
        result[5] += 0;
      } else {
        result[0] += 35411369;
        result[1] += 1312811;
        result[2] += 3903887;
        result[3] += 5182151;
        result[4] += 4422102;
        result[5] += 3454767;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42910000))) ) ) {
        result[0] += 1988410;
        result[1] += 5965232;
        result[2] += 994205;
        result[3] += 0;
        result[4] += 11930464;
        result[5] += 32808777;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 17735914;
        result[3] += 25884847;
        result[4] += 0;
        result[5] += 10066329;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 1434387;
        result[1] += 0;
        result[2] += 42211987;
        result[3] += 9425977;
        result[4] += 0;
        result[5] += 614737;
      } else {
        result[0] += 86731;
        result[1] += 0;
        result[2] += 51952451;
        result[3] += 1561175;
        result[4] += 0;
        result[5] += 86731;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 10611095;
        result[1] += 884257;
        result[2] += 0;
        result[3] += 505290;
        result[4] += 37896770;
        result[5] += 3789677;
      } else {
        result[0] += 51972;
        result[1] += 103944;
        result[2] += 103944;
        result[3] += 3845929;
        result[4] += 3534096;
        result[5] += 46047205;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 526344;
        result[1] += 46528812;
        result[2] += 105268;
        result[3] += 736881;
        result[4] += 5579246;
        result[5] += 210537;
      } else {
        result[0] += 31227113;
        result[1] += 1425046;
        result[2] += 3562617;
        result[3] += 8953011;
        result[4] += 2757155;
        result[5] += 5762145;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 0;
        result[1] += 1626881;
        result[2] += 1626881;
        result[3] += 0;
        result[4] += 3253763;
        result[5] += 47179564;
      } else {
        result[0] += 0;
        result[1] += 675309;
        result[2] += 20259279;
        result[3] += 24986444;
        result[4] += 675309;
        result[5] += 7090747;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 7024479;
        result[1] += 3010491;
        result[2] += 26090922;
        result[3] += 8529724;
        result[4] += 2006994;
        result[5] += 7024479;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 50957239;
        result[3] += 2469866;
        result[4] += 0;
        result[5] += 259985;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 5986017;
        result[1] += 748252;
        result[2] += 0;
        result[3] += 561189;
        result[4] += 40779741;
        result[5] += 5611891;
      } else {
        result[0] += 144190;
        result[1] += 913209;
        result[2] += 192254;
        result[3] += 8170819;
        result[4] += 2355118;
        result[5] += 41911498;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 52030082;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1657008;
        result[5] += 0;
      } else {
        result[0] += 31408383;
        result[1] += 1866128;
        result[2] += 2928386;
        result[3] += 5627096;
        result[4] += 6430967;
        result[5] += 5426128;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 8189556;
        result[3] += 13649260;
        result[4] += 0;
        result[5] += 31848274;
      } else {
        result[0] += 5064819;
        result[1] += 6077783;
        result[2] += 32414847;
        result[3] += 2025927;
        result[4] += 3038891;
        result[5] += 5064819;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 36909875;
        result[3] += 12862532;
        result[4] += 0;
        result[5] += 3914683;
      } else {
        result[0] += 352277;
        result[1] += 0;
        result[2] += 51291604;
        result[3] += 2043209;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42be0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 16977969;
        result[1] += 2936729;
        result[2] += 0;
        result[3] += 0;
        result[4] += 30652117;
        result[5] += 3120275;
      } else {
        result[0] += 1118481;
        result[1] += 719023;
        result[2] += 958698;
        result[3] += 9387251;
        result[4] += 2756256;
        result[5] += 38747379;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 34940427;
        result[1] += 3200649;
        result[2] += 3810297;
        result[3] += 4800974;
        result[4] += 4115121;
        result[5] += 2819620;
      } else {
        result[0] += 677867;
        result[1] += 52738076;
        result[2] += 0;
        result[3] += 135573;
        result[4] += 135573;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0;
        result[1] += 7368816;
        result[2] += 3158064;
        result[3] += 1052688;
        result[4] += 7368816;
        result[5] += 34738706;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 12244424;
        result[3] += 29198242;
        result[4] += 1883757;
        result[5] += 10360666;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 5592405;
        result[1] += 2796202;
        result[2] += 27962026;
        result[3] += 12303291;
        result[4] += 559240;
        result[5] += 4473924;
      } else {
        result[0] += 241833;
        result[1] += 0;
        result[2] += 50422335;
        result[3] += 2357879;
        result[4] += 0;
        result[5] += 665042;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 2004912;
        result[2] += 0;
        result[3] += 445536;
        result[4] += 49677266;
        result[5] += 1559376;
      } else {
        result[0] += 2102205;
        result[1] += 646832;
        result[2] += 1293664;
        result[3] += 8489675;
        result[4] += 2668183;
        result[5] += 38486529;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 191397;
        result[1] += 44212898;
        result[2] += 95698;
        result[3] += 0;
        result[4] += 8708601;
        result[5] += 478494;
      } else {
        result[0] += 34499168;
        result[1] += 1596278;
        result[2] += 3941831;
        result[3] += 4919144;
        result[4] += 4560796;
        result[5] += 4169871;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0;
        result[1] += 1394469;
        result[2] += 10458524;
        result[3] += 32072807;
        result[4] += 2091704;
        result[5] += 7669584;
      } else {
        result[0] += 2268468;
        result[1] += 756156;
        result[2] += 24196998;
        result[3] += 3024624;
        result[4] += 6049249;
        result[5] += 17391592;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 42771458;
        result[3] += 9356256;
        result[4] += 0;
        result[5] += 1559376;
      } else {
        result[0] += 570272;
        result[1] += 0;
        result[2] += 51080130;
        result[3] += 2036687;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 436480;
        result[1] += 218240;
        result[2] += 0;
        result[3] += 218240;
        result[4] += 51068208;
        result[5] += 1745921;
      } else {
        result[0] += 0;
        result[1] += 6442450;
        result[2] += 0;
        result[3] += 12884901;
        result[4] += 0;
        result[5] += 34359738;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 29205777;
        result[1] += 1717986;
        result[2] += 0;
        result[3] += 0;
        result[4] += 20615843;
        result[5] += 2147483;
      } else {
        result[0] += 665370;
        result[1] += 166342;
        result[2] += 457442;
        result[3] += 9273602;
        result[4] += 2245625;
        result[5] += 40878706;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        result[0] += 102848;
        result[1] += 46076277;
        result[2] += 0;
        result[3] += 617093;
        result[4] += 5965232;
        result[5] += 925639;
      } else {
        result[0] += 40142931;
        result[1] += 2039783;
        result[2] += 2406944;
        result[3] += 2692513;
        result[4] += 4038770;
        result[5] += 2366148;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 1252698;
        result[1] += 536870;
        result[2] += 15927170;
        result[3] += 22011707;
        result[4] += 3937053;
        result[5] += 10021590;
      } else {
        result[0] += 536334;
        result[1] += 107266;
        result[2] += 47197442;
        result[3] += 4183409;
        result[4] += 53633;
        result[5] += 1609003;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 1361629;
        result[2] += 0;
        result[3] += 2528739;
        result[4] += 46878945;
        result[5] += 2917776;
      } else {
        result[0] += 3456081;
        result[1] += 196368;
        result[2] += 39273;
        result[3] += 7776184;
        result[4] += 3298987;
        result[5] += 38920195;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42560000))) ) ) {
        result[0] += 264468;
        result[1] += 51439109;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1983513;
        result[5] += 0;
      } else {
        result[0] += 33035792;
        result[1] += 2294588;
        result[2] += 4054821;
        result[3] += 4494879;
        result[4] += 6475140;
        result[5] += 3331868;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 5534751;
        result[2] += 8855602;
        result[3] += 14943829;
        result[4] += 553475;
        result[5] += 23799432;
      } else {
        result[0] += 1309441;
        result[1] += 0;
        result[2] += 41902119;
        result[3] += 3928323;
        result[4] += 0;
        result[5] += 6547206;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 2351259;
        result[1] += 587814;
        result[2] += 39187657;
        result[3] += 7249716;
        result[4] += 0;
        result[5] += 4310642;
      } else {
        result[0] += 245146;
        result[1] += 0;
        result[2] += 51971065;
        result[3] += 1470879;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 326365;
        result[1] += 6364123;
        result[2] += 0;
        result[3] += 489547;
        result[4] += 44712045;
        result[5] += 1795009;
      } else {
        result[0] += 3462482;
        result[1] += 186154;
        result[2] += 893543;
        result[3] += 8935438;
        result[4] += 3164634;
        result[5] += 37044837;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        result[0] += 406720;
        result[1] += 45959403;
        result[2] += 0;
        result[3] += 0;
        result[4] += 6710886;
        result[5] += 610080;
      } else {
        result[0] += 38025165;
        result[1] += 880744;
        result[2] += 4135667;
        result[3] += 3867614;
        result[4] += 3140043;
        result[5] += 3637855;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4772185;
        result[3] += 4772185;
        result[4] += 8351325;
        result[5] += 35791394;
      } else {
        result[0] += 1359166;
        result[1] += 3397917;
        result[2] += 20047711;
        result[3] += 23785420;
        result[4] += 0;
        result[5] += 5096875;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 19522578;
        result[3] += 13015052;
        result[4] += 0;
        result[5] += 21149460;
      } else {
        result[0] += 483123;
        result[1] += 181171;
        result[2] += 50244836;
        result[3] += 2415617;
        result[4] += 0;
        result[5] += 362342;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6213046;
        result[1] += 1911706;
        result[2] += 0;
        result[3] += 2071015;
        result[4] += 37756203;
        result[5] += 5735119;
      } else {
        result[0] += 233422;
        result[1] += 0;
        result[2] += 420159;
        result[3] += 8216459;
        result[4] += 3921491;
        result[5] += 40895558;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 50933907;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2753184;
        result[5] += 0;
      } else {
        result[0] += 32450864;
        result[1] += 1342177;
        result[2] += 3251051;
        result[3] += 5428361;
        result[4] += 6800364;
        result[5] += 4414271;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 0;
        result[1] += 1851279;
        result[2] += 7405116;
        result[3] += 20364069;
        result[4] += 2776918;
        result[5] += 21289708;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 35673659;
        result[3] += 15541000;
        result[4] += 0;
        result[5] += 2472431;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 1248537;
        result[1] += 2497074;
        result[2] += 27467814;
        result[3] += 7491222;
        result[4] += 2497074;
        result[5] += 12485370;
      } else {
        result[0] += 590689;
        result[1] += 0;
        result[2] += 49486634;
        result[3] += 3478503;
        result[4] += 0;
        result[5] += 131264;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 195225;
        result[1] += 390451;
        result[2] += 0;
        result[3] += 0;
        result[4] += 50563478;
        result[5] += 2537935;
      } else {
        result[0] += 2045620;
        result[1] += 292231;
        result[2] += 41747;
        result[3] += 9142669;
        result[4] += 3465029;
        result[5] += 38699792;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 302178;
        result[1] += 48449326;
        result[2] += 0;
        result[3] += 201452;
        result[4] += 4734133;
        result[5] += 0;
      } else {
        result[0] += 38713396;
        result[1] += 1504893;
        result[2] += 1843495;
        result[3] += 4213703;
        result[4] += 5041394;
        result[5] += 2370207;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 9789998;
        result[3] += 30001609;
        result[4] += 0;
        result[5] += 13895482;
      } else {
        result[0] += 2206318;
        result[1] += 3677198;
        result[2] += 38978299;
        result[3] += 6618956;
        result[4] += 1470879;
        result[5] += 735439;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 2191309;
        result[1] += 2191309;
        result[2] += 19721788;
        result[3] += 8765239;
        result[4] += 0;
        result[5] += 20817443;
      } else {
        result[0] += 779688;
        result[1] += 0;
        result[2] += 48674810;
        result[3] += 3397212;
        result[4] += 167076;
        result[5] += 668304;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x423c0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 0;
        result[1] += 25769803;
        result[2] += 0;
        result[3] += 2147483;
        result[4] += 25769803;
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
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
        result[0] += 2647024;
        result[1] += 576915;
        result[2] += 373298;
        result[3] += 7567775;
        result[4] += 12420654;
        result[5] += 30101422;
      } else {
        result[0] += 32773354;
        result[1] += 2008483;
        result[2] += 3474995;
        result[3] += 4941507;
        result[4] += 5387837;
        result[5] += 5100911;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 1032444;
        result[1] += 0;
        result[2] += 9291996;
        result[3] += 5162220;
        result[4] += 5162220;
        result[5] += 33038209;
      } else {
        result[0] += 3632961;
        result[1] += 4843948;
        result[2] += 27045376;
        result[3] += 12109870;
        result[4] += 807324;
        result[5] += 5247610;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 1952257;
        result[1] += 0;
        result[2] += 25379352;
        result[3] += 18546449;
        result[4] += 0;
        result[5] += 7809031;
      } else {
        result[0] += 186413;
        result[1] += 0;
        result[2] += 50145234;
        result[3] += 3106891;
        result[4] += 0;
        result[5] += 248551;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428b0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 2105376;
        result[2] += 0;
        result[3] += 0;
        result[4] += 50529027;
        result[5] += 1052688;
      } else {
        result[0] += 800503;
        result[1] += 160100;
        result[2] += 160100;
        result[3] += 4269351;
        result[4] += 2775078;
        result[5] += 45521957;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 51627154;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2059936;
        result[5] += 0;
      } else {
        result[0] += 27992491;
        result[1] += 1827867;
        result[2] += 2585127;
        result[3] += 7572595;
        result[4] += 6763111;
        result[5] += 6945897;
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 15561475;
        result[3] += 24898361;
        result[4] += 778073;
        result[5] += 12449180;
      } else {
        result[0] += 2618882;
        result[1] += 0;
        result[2] += 39283237;
        result[3] += 10912010;
        result[4] += 0;
        result[5] += 872960;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 830212;
        result[1] += 0;
        result[2] += 39296736;
        result[3] += 10792765;
        result[4] += 0;
        result[5] += 2767375;
      } else {
        result[0] += 760440;
        result[1] += 0;
        result[2] += 51101593;
        result[3] += 1672968;
        result[4] += 0;
        result[5] += 152088;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 7093789;
        result[1] += 967334;
        result[2] += 0;
        result[3] += 161222;
        result[4] += 41434181;
        result[5] += 4030562;
      } else {
        result[0] += 129574;
        result[1] += 691064;
        result[2] += 1079788;
        result[3] += 8681500;
        result[4] += 4362346;
        result[5] += 38742816;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 32988453;
        result[1] += 2833742;
        result[2] += 3049352;
        result[3] += 4065803;
        result[4] += 5544277;
        result[5] += 5205460;
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
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 4129776;
        result[2] += 2064888;
        result[3] += 29940877;
        result[4] += 0;
        result[5] += 17551549;
      } else {
        result[0] += 756156;
        result[1] += 2268468;
        result[2] += 26465467;
        result[3] += 5293093;
        result[4] += 756156;
        result[5] += 18147749;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 621858;
        result[1] += 0;
        result[2] += 41664499;
        result[3] += 9120586;
        result[4] += 0;
        result[5] += 2280146;
      } else {
        result[0] += 150594;
        result[1] += 0;
        result[2] += 51729357;
        result[3] += 1807139;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 771496;
        result[1] += 317675;
        result[2] += 0;
        result[3] += 2132961;
        result[4] += 12389328;
        result[5] += 38075629;
      } else {
        result[0] += 2817398;
        result[1] += 2034787;
        result[2] += 3130442;
        result[3] += 23947886;
        result[4] += 1878265;
        result[5] += 19878310;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 217356;
        result[1] += 47166391;
        result[2] += 0;
        result[3] += 326034;
        result[4] += 5977307;
        result[5] += 0;
      } else {
        result[0] += 31989561;
        result[1] += 1263933;
        result[2] += 4453861;
        result[3] += 5326577;
        result[4] += 4664517;
        result[5] += 5988638;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 6135667;
        result[2] += 3067833;
        result[3] += 9203501;
        result[4] += 0;
        result[5] += 35280088;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 37307978;
        result[3] += 9099506;
        result[4] += 0;
        result[5] += 7279605;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 1573888;
        result[1] += 0;
        result[2] += 41445734;
        result[3] += 8568949;
        result[4] += 0;
        result[5] += 2098518;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 52476754;
        result[3] += 950979;
        result[4] += 0;
        result[5] += 259357;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 629760;
        result[1] += 314880;
        result[2] += 157440;
        result[3] += 944640;
        result[4] += 44713002;
        result[5] += 6927366;
      } else {
        result[0] += 2674069;
        result[1] += 246837;
        result[2] += 123418;
        result[3] += 7981069;
        result[4] += 2550651;
        result[5] += 40111045;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42560000))) ) ) {
        result[0] += 240210;
        result[1] += 52005616;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1441264;
        result[5] += 0;
      } else {
        result[0] += 33586237;
        result[1] += 2735242;
        result[2] += 4389110;
        result[3] += 4738967;
        result[4] += 5406875;
        result[5] += 2830658;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4194303;
        result[3] += 9227468;
        result[4] += 838860;
        result[5] += 39426457;
      } else {
        result[0] += 9988296;
        result[1] += 22473666;
        result[2] += 13733907;
        result[3] += 7491222;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 930990;
        result[1] += 0;
        result[2] += 41118725;
        result[3] += 8999570;
        result[4] += 0;
        result[5] += 2637805;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 52961589;
        result[3] += 725501;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 485856;
        result[1] += 2672208;
        result[2] += 121464;
        result[3] += 850248;
        result[4] += 43848506;
        result[5] += 5708808;
      } else {
        result[0] += 232915;
        result[1] += 51357933;
        result[2] += 0;
        result[3] += 815205;
        result[4] += 1281036;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
        result[0] += 2898785;
        result[1] += 277965;
        result[2] += 119128;
        result[3] += 8815483;
        result[4] += 2382563;
        result[5] += 39193164;
      } else {
        result[0] += 36247794;
        result[1] += 1909675;
        result[2] += 3062686;
        result[3] += 4936329;
        result[4] += 3819350;
        result[5] += 3711255;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5033164;
        result[3] += 40265318;
        result[4] += 0;
        result[5] += 8388607;
      } else {
        result[0] += 1073741;
        result[1] += 0;
        result[2] += 33822867;
        result[3] += 10737418;
        result[4] += 1610612;
        result[5] += 6442450;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 302632;
        result[1] += 0;
        result[2] += 49752862;
        result[3] += 2784223;
        result[4] += 0;
        result[5] += 847372;
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
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 764229;
        result[1] += 1719515;
        result[2] += 0;
        result[3] += 382114;
        result[4] += 49292774;
        result[5] += 1528458;
      } else {
        result[0] += 2108821;
        result[1] += 43933;
        result[2] += 0;
        result[3] += 8303486;
        result[4] += 2636027;
        result[5] += 40594821;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 230912;
        result[1] += 52186161;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1270017;
        result[5] += 0;
      } else {
        result[0] += 33508985;
        result[1] += 1908739;
        result[2] += 3817479;
        result[3] += 5059675;
        result[4] += 5998896;
        result[5] += 3393315;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 13310849;
        result[3] += 22184748;
        result[4] += 0;
        result[5] += 18191493;
      } else {
        result[0] += 967334;
        result[1] += 725501;
        result[2] += 42320905;
        result[3] += 8222347;
        result[4] += 0;
        result[5] += 1451002;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 8947848;
        result[3] += 0;
        result[4] += 0;
        result[5] += 44739242;
      } else {
        result[0] += 145690;
        result[1] += 218536;
        result[2] += 51210346;
        result[3] += 1748290;
        result[4] += 0;
        result[5] += 364227;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 644245;
        result[1] += 429496;
        result[2] += 0;
        result[3] += 0;
        result[4] += 46600395;
        result[5] += 6012954;
      } else {
        result[0] += 24518514;
        result[1] += 8454660;
        result[2] += 0;
        result[3] += 0;
        result[4] += 20291184;
        result[5] += 422733;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2018873;
        result[4] += 1869327;
        result[5] += 49798889;
      } else {
        result[0] += 787860;
        result[1] += 900412;
        result[2] += 1800824;
        result[3] += 21047140;
        result[4] += 5064819;
        result[5] += 24086032;
      }
    }
  } else {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x424e0000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0;
        result[1] += 17895697;
        result[2] += 0;
        result[3] += 7158278;
        result[4] += 14316557;
        result[5] += 14316557;
      } else {
        result[0] += 0;
        result[1] += 52907133;
        result[2] += 0;
        result[3] += 0;
        result[4] += 649964;
        result[5] += 129992;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 38143263;
        result[1] += 2399623;
        result[2] += 322337;
        result[3] += 2865221;
        result[4] += 6016965;
        result[5] += 3939679;
      } else {
        result[0] += 1213724;
        result[1] += 80914;
        result[2] += 41266641;
        result[3] += 7039603;
        result[4] += 161829;
        result[5] += 3924376;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 408266;
        result[1] += 408266;
        result[2] += 0;
        result[3] += 612400;
        result[4] += 50216822;
        result[5] += 2041334;
      } else {
        result[0] += 814984;
        result[1] += 50936;
        result[2] += 0;
        result[3] += 7232985;
        result[4] += 2495889;
        result[5] += 43092295;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 389978;
        result[1] += 50957239;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2339873;
        result[5] += 0;
      } else {
        result[0] += 28748243;
        result[1] += 2463409;
        result[2] += 4012564;
        result[3] += 7237852;
        result[4] += 6069638;
        result[5] += 5155382;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42cd0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 37779804;
        result[4] += 0;
        result[5] += 15907286;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 44739242;
        result[3] += 0;
        result[4] += 0;
        result[5] += 8947848;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 3660483;
        result[1] += 6100805;
        result[2] += 21962900;
        result[3] += 7320966;
        result[4] += 2440322;
        result[5] += 12201611;
      } else {
        result[0] += 298593;
        result[1] += 0;
        result[2] += 50163689;
        result[3] += 2747059;
        result[4] += 0;
        result[5] += 477749;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 8438621;
        result[1] += 2473389;
        result[2] += 0;
        result[3] += 0;
        result[4] += 37682809;
        result[5] += 5092271;
      } else {
        result[0] += 44964;
        result[1] += 719425;
        result[2] += 1124101;
        result[3] += 8363315;
        result[4] += 2607915;
        result[5] += 40827369;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 52484325;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1202765;
        result[5] += 0;
      } else {
        result[0] += 36603275;
        result[1] += 1646632;
        result[2] += 2504254;
        result[3] += 3773533;
        result[4] += 6209177;
        result[5] += 2950217;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2556528;
        result[3] += 3408704;
        result[4] += 5113056;
        result[5] += 42608802;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 13854733;
        result[3] += 27016729;
        result[4] += 0;
        result[5] += 12815628;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 4238454;
        result[1] += 2119227;
        result[2] += 17660227;
        result[3] += 7064090;
        result[4] += 11302545;
        result[5] += 11302545;
      } else {
        result[0] += 117605;
        result[1] += 58802;
        result[2] += 50100111;
        result[3] += 3116556;
        result[4] += 0;
        result[5] += 294014;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b10000))) ) ) {
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
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42be0000))) ) ) {
        result[0] += 5640615;
        result[1] += 404967;
        result[2] += 636377;
        result[3] += 6248066;
        result[4] += 12149018;
        result[5] += 28608045;
      } else {
        result[0] += 38982726;
        result[1] += 2504589;
        result[2] += 2141020;
        result[3] += 4362833;
        result[4] += 3352918;
        result[5] += 2343003;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 8134407;
        result[5] += 45552683;
      } else {
        result[0] += 7542814;
        result[1] += 1996627;
        result[2] += 20188121;
        result[3] += 15751171;
        result[4] += 443694;
        result[5] += 7764661;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 18332177;
        result[3] += 15713294;
        result[4] += 0;
        result[5] += 19641618;
      } else {
        result[0] += 60938;
        result[1] += 182816;
        result[2] += 49787007;
        result[3] += 3473512;
        result[4] += 0;
        result[5] += 182816;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 189039;
        result[1] += 189039;
        result[2] += 0;
        result[3] += 0;
        result[4] += 51229583;
        result[5] += 2079429;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 40265318;
        result[4] += 13421772;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        result[0] += 67872;
        result[1] += 0;
        result[2] += 339362;
        result[3] += 1561065;
        result[4] += 1968300;
        result[5] += 49750490;
      } else {
        result[0] += 6579300;
        result[1] += 614068;
        result[2] += 175448;
        result[3] += 18772937;
        result[4] += 4824820;
        result[5] += 22720517;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 39163047;
        result[1] += 3927420;
        result[2] += 666920;
        result[3] += 2037812;
        result[4] += 6224590;
        result[5] += 1667300;
      } else {
        result[0] += 536870;
        result[1] += 52613349;
        result[2] += 0;
        result[3] += 0;
        result[4] += 536870;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 856708;
        result[1] += 0;
        result[2] += 23416709;
        result[3] += 21132152;
        result[4] += 428354;
        result[5] += 7853164;
      } else {
        result[0] += 1828900;
        result[1] += 117993;
        result[2] += 47610420;
        result[3] += 2241878;
        result[4] += 0;
        result[5] += 1887897;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 209715;
        result[2] += 0;
        result[3] += 0;
        result[4] += 51799654;
        result[5] += 1677721;
      } else {
        result[0] += 3166728;
        result[1] += 589158;
        result[2] += 147289;
        result[3] += 9905231;
        result[4] += 3203550;
        result[5] += 36675132;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 644613;
        result[1] += 43833714;
        result[2] += 368350;
        result[3] += 184175;
        result[4] += 8656237;
        result[5] += 0;
      } else {
        result[0] += 37259886;
        result[1] += 1642720;
        result[2] += 4629484;
        result[3] += 4629484;
        result[4] += 2613418;
        result[5] += 2912095;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7561562;
        result[3] += 25709311;
        result[4] += 1512312;
        result[5] += 18903905;
      } else {
        result[0] += 0;
        result[1] += 1412818;
        result[2] += 37439682;
        result[3] += 8476909;
        result[4] += 706409;
        result[5] += 5651272;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 15790320;
        result[1] += 0;
        result[2] += 17369353;
        result[3] += 11053224;
        result[4] += 0;
        result[5] += 9474192;
      } else {
        result[0] += 117993;
        result[1] += 0;
        result[2] += 49262330;
        result[3] += 3775795;
        result[4] += 0;
        result[5] += 530971;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 5506368;
        result[1] += 688296;
        result[2] += 172074;
        result[3] += 0;
        result[4] += 41641910;
        result[5] += 5678442;
      } else {
        result[0] += 0;
        result[1] += 468882;
        result[2] += 375106;
        result[3] += 8486780;
        result[4] += 3094627;
        result[5] += 41261694;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42480000))) ) ) {
        result[0] += 124853;
        result[1] += 51939139;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1623098;
        result[5] += 0;
      } else {
        result[0] += 35020605;
        result[1] += 2647490;
        result[2] += 1876702;
        result[3] += 3853942;
        result[4] += 5965232;
        result[5] += 4323117;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 865920;
        result[1] += 3030722;
        result[2] += 9958089;
        result[3] += 4762564;
        result[4] += 8659208;
        result[5] += 26410585;
      } else {
        result[0] += 0;
        result[1] += 1084587;
        result[2] += 13015052;
        result[3] += 32537631;
        result[4] += 0;
        result[5] += 7049820;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 3817748;
        result[1] += 477218;
        result[2] += 28633115;
        result[3] += 15748213;
        result[4] += 238609;
        result[5] += 4772185;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 50003275;
        result[3] += 3079911;
        result[4] += 0;
        result[5] += 603904;
      }
    }
  }
  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 2326440;
        result[1] += 1252698;
        result[2] += 0;
        result[3] += 1789569;
        result[4] += 40981146;
        result[5] += 7337235;
      } else {
        result[0] += 33924971;
        result[1] += 3129002;
        result[2] += 0;
        result[3] += 658737;
        result[4] += 15150958;
        result[5] += 823421;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 1742773;
        result[1] += 726155;
        result[2] += 145231;
        result[3] += 3582366;
        result[4] += 4889446;
        result[5] += 42601118;
      } else {
        result[0] += 848328;
        result[1] += 969518;
        result[2] += 3150935;
        result[3] += 27146520;
        result[4] += 1696657;
        result[5] += 19875130;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 552336;
        result[1] += 50373073;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2651214;
        result[5] += 110467;
      } else {
        result[0] += 47650223;
        result[1] += 1523869;
        result[2] += 468882;
        result[3] += 1289427;
        result[4] += 1875531;
        result[5] += 879155;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 17134178;
        result[3] += 21703292;
        result[4] += 1427848;
        result[5] += 13421772;
      } else {
        result[0] += 1928269;
        result[1] += 0;
        result[2] += 47344098;
        result[3] += 3653563;
        result[4] += 50743;
        result[5] += 710415;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 614737;
        result[1] += 1024562;
        result[2] += 0;
        result[3] += 204912;
        result[4] += 48564277;
        result[5] += 3278600;
      } else {
        result[0] += 1430596;
        result[1] += 238432;
        result[2] += 0;
        result[3] += 8265666;
        result[4] += 3775184;
        result[5] += 39977212;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 110467;
        result[1] += 46506718;
        result[2] += 0;
        result[3] += 331401;
        result[4] += 6738503;
        result[5] += 0;
      } else {
        result[0] += 35042066;
        result[1] += 1851279;
        result[2] += 3669499;
        result[3] += 5223251;
        result[4] += 4297611;
        result[5] += 3603382;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4793490;
        result[3] += 10545678;
        result[4] += 2876094;
        result[5] += 35471828;
      } else {
        result[0] += 2609789;
        result[1] += 6338059;
        result[2] += 21996794;
        result[3] += 15285907;
        result[4] += 3355443;
        result[5] += 4101097;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 23008753;
        result[3] += 24287017;
        result[4] += 0;
        result[5] += 6391320;
      } else {
        result[0] += 124708;
        result[1] += 0;
        result[2] += 50881145;
        result[3] += 2431819;
        result[4] += 0;
        result[5] += 249417;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x423c0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b40000))) ) ) {
        result[0] += 0;
        result[1] += 17895697;
        result[2] += 0;
        result[3] += 12782640;
        result[4] += 17895697;
        result[5] += 5113056;
      } else {
        result[0] += 0;
        result[1] += 53421313;
        result[2] += 0;
        result[3] += 0;
        result[4] += 265777;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
        result[0] += 2238543;
        result[1] += 379414;
        result[2] += 37941;
        result[3] += 7208867;
        result[4] += 11003008;
        result[5] += 32819317;
      } else {
        result[0] += 33030830;
        result[1] += 2909782;
        result[2] += 2366196;
        result[3] += 3421392;
        result[4] += 7674152;
        result[5] += 4284735;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7491222;
        result[3] += 12485370;
        result[4] += 1248537;
        result[5] += 32461962;
      } else {
        result[0] += 4880644;
        result[1] += 21474836;
        result[2] += 3904515;
        result[3] += 17570320;
        result[4] += 5856773;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 2535223;
        result[1] += 447392;
        result[2] += 35045740;
        result[3] += 11930464;
        result[4] += 0;
        result[5] += 3728270;
      } else {
        result[0] += 149130;
        result[1] += 0;
        result[2] += 50555344;
        result[3] += 2982616;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 1243716;
        result[1] += 1036430;
        result[2] += 0;
        result[3] += 0;
        result[4] += 48297653;
        result[5] += 3109290;
      } else {
        result[0] += 1756119;
        result[1] += 334499;
        result[2] += 0;
        result[3] += 8906036;
        result[4] += 3010491;
        result[5] += 39679945;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42520000))) ) ) {
        result[0] += 238609;
        result[1] += 51897521;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1550960;
        result[5] += 0;
      } else {
        result[0] += 31405193;
        result[1] += 2193100;
        result[2] += 4503165;
        result[3] += 5760543;
        result[4] += 5672819;
        result[5] += 4152269;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42e30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 13733907;
        result[3] += 11236833;
        result[4] += 0;
        result[5] += 28716351;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 53687091;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 367719;
        result[1] += 551579;
        result[2] += 43390936;
        result[3] += 6986676;
        result[4] += 551579;
        result[5] += 1838599;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 52295809;
        result[3] += 1227601;
        result[4] += 0;
        result[5] += 163680;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        result[0] += 699506;
        result[1] += 4197036;
        result[2] += 0;
        result[3] += 0;
        result[4] += 44768388;
        result[5] += 4022159;
      } else {
        result[0] += 2306690;
        result[1] += 316604;
        result[2] += 587979;
        result[3] += 8412636;
        result[4] += 3437421;
        result[5] += 38625758;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 34205428;
        result[1] += 3504127;
        result[2] += 1928877;
        result[3] += 4661454;
        result[4] += 6300999;
        result[5] += 3086204;
      } else {
        result[0] += 422733;
        result[1] += 53264358;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 703324;
        result[2] += 11253189;
        result[3] += 24381910;
        result[4] += 1172207;
        result[5] += 16176459;
      } else {
        result[0] += 3520464;
        result[1] += 3520464;
        result[2] += 38725114;
        result[3] += 3520464;
        result[4] += 1760232;
        result[5] += 2640348;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
        result[0] += 19293798;
        result[1] += 1677721;
        result[2] += 16777215;
        result[3] += 2516582;
        result[4] += 0;
        result[5] += 13421772;
      } else {
        result[0] += 405404;
        result[1] += 0;
        result[2] += 49690964;
        result[3] += 3301148;
        result[4] += 0;
        result[5] += 289574;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 445536;
        result[2] += 0;
        result[3] += 668304;
        result[4] += 47004050;
        result[5] += 5569200;
      } else {
        result[0] += 2066477;
        result[1] += 123988;
        result[2] += 41329;
        result[3] += 8472558;
        result[4] += 3637000;
        result[5] += 39345735;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 120645;
        result[1] += 51998059;
        result[2] += 0;
        result[3] += 120645;
        result[4] += 1447741;
        result[5] += 0;
      } else {
        result[0] += 33509392;
        result[1] += 2822475;
        result[2] += 2972607;
        result[3] += 5044424;
        result[4] += 5855135;
        result[5] += 3483055;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 13895482;
        result[3] += 28422577;
        result[4] += 631612;
        result[5] += 10737418;
      } else {
        result[0] += 2928386;
        result[1] += 0;
        result[2] += 39045157;
        result[3] += 7809031;
        result[4] += 0;
        result[5] += 3904515;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 1491308;
        result[1] += 0;
        result[2] += 41756626;
        result[3] += 7953643;
        result[4] += 0;
        result[5] += 2485513;
      } else {
        result[0] += 666920;
        result[1] += 0;
        result[2] += 50085721;
        result[3] += 2734373;
        result[4] += 0;
        result[5] += 200076;
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
        result[0] += 247405;
        result[1] += 2474059;
        result[2] += 0;
        result[3] += 0;
        result[4] += 50223407;
        result[5] += 742217;
      } else {
        result[0] += 20817443;
        result[1] += 0;
        result[2] += 0;
        result[3] += 547827;
        result[4] += 15339168;
        result[5] += 16982651;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 149685;
        result[1] += 548845;
        result[2] += 798321;
        result[3] += 4141290;
        result[4] += 3841920;
        result[5] += 44207028;
      } else {
        result[0] += 0;
        result[1] += 360316;
        result[2] += 720632;
        result[3] += 37472869;
        result[4] += 720632;
        result[5] += 14412641;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        result[0] += 238609;
        result[1] += 50227256;
        result[2] += 0;
        result[3] += 119304;
        result[4] += 3101920;
        result[5] += 0;
      } else {
        result[0] += 31797635;
        result[1] += 1890175;
        result[2] += 2713316;
        result[3] += 4664466;
        result[4] += 6920482;
        result[5] += 5701014;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 4705160;
        result[1] += 1206451;
        result[2] += 31005803;
        result[3] += 13270966;
        result[4] += 723870;
        result[5] += 2774838;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 51982739;
        result[3] += 1619134;
        result[4] += 0;
        result[5] += 85217;
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
