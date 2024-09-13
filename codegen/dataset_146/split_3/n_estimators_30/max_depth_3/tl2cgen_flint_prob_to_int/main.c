
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
  if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        result[0] += 21992302;
        result[1] += 9055653;
        result[2] += 0;
        result[3] += 431221;
        result[4] += 91418982;
        result[5] += 20267415;
      } else {
        result[0] += 488203;
        result[1] += 1098457;
        result[2] += 1220507;
        result[3] += 22091192;
        result[4] += 10374317;
        result[5] += 107892898;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 141281818;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1883757;
        result[5] += 0;
      } else {
        result[0] += 89100267;
        result[1] += 2866496;
        result[2] += 7484740;
        result[3] += 12341860;
        result[4] += 18472977;
        result[5] += 12899234;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( LIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 22906492;
        result[3] += 87808220;
        result[4] += 0;
        result[5] += 32450864;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 117135471;
        result[3] += 26030104;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 464823;
        result[1] += 0;
        result[2] += 130150524;
        result[3] += 11465641;
        result[4] += 0;
        result[5] += 1084587;
      } else {
        result[0] += 44994895;
        result[1] += 0;
        result[2] += 98170681;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428d0000))) ) ) {
      if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 4316550;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 115108001;
        result[5] += 23741025;
      } else {
        result[0] += 0;
        result[1] += 386238;
        result[2] += 514984;
        result[3] += 19183157;
        result[4] += 10170935;
        result[5] += 112910261;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        result[0] += 761519;
        result[1] += 119558486;
        result[2] += 0;
        result[3] += 507679;
        result[4] += 22337891;
        result[5] += 0;
      } else {
        result[0] += 94670138;
        result[1] += 3040968;
        result[2] += 7282318;
        result[3] += 14804713;
        result[4] += 12724050;
        result[5] += 10643388;
      }
    }
  } else {
    if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
      if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 12030720;
        result[3] += 32482945;
        result[4] += 7218432;
        result[5] += 91433477;
      } else {
        result[0] += 10226112;
        result[1] += 22724694;
        result[2] += 62492910;
        result[3] += 23860929;
        result[4] += 3408704;
        result[5] += 20452225;
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 3239040;
        result[1] += 0;
        result[2] += 103973190;
        result[3] += 29151361;
        result[4] += 0;
        result[5] += 6801984;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 140754366;
        result[3] += 2411209;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
    if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
      if ( LIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
        result[0] += 1512312;
        result[1] += 18651853;
        result[2] += 0;
        result[3] += 0;
        result[4] += 115943952;
        result[5] += 7057457;
      } else {
        result[0] += 100630876;
        result[1] += 2074863;
        result[2] += 0;
        result[3] += 0;
        result[4] += 15561475;
        result[5] += 24898361;
      }
    } else {
      if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 305257;
        result[1] += 152628;
        result[2] += 0;
        result[3] += 10378741;
        result[4] += 8394570;
        result[5] += 123934379;
      } else {
        result[0] += 10897117;
        result[1] += 1503050;
        result[2] += 8642541;
        result[3] += 64255416;
        result[4] += 10145592;
        result[5] += 47721858;
      }
    }
  } else {
    if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
        result[0] += 262689;
        result[1] += 118998176;
        result[2] += 0;
        result[3] += 1050756;
        result[4] += 22065887;
        result[5] += 788067;
      } else {
        result[0] += 112471744;
        result[1] += 1301505;
        result[2] += 3904515;
        result[3] += 5639856;
        result[4] += 9544371;
        result[5] += 10303583;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 723058;
        result[1] += 7953643;
        result[2] += 46275741;
        result[3] += 44106566;
        result[4] += 3615292;
        result[5] += 40491274;
      } else {
        result[0] += 3081842;
        result[1] += 0;
        result[2] += 126635695;
        result[3] += 12047201;
        result[4] += 140083;
        result[5] += 1260753;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 886474;
        result[1] += 11967401;
        result[2] += 0;
        result[3] += 0;
        result[4] += 128095515;
        result[5] += 2216185;
      } else {
        result[0] += 0;
        result[1] += 140225831;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2939744;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
        result[0] += 5596777;
        result[1] += 1007420;
        result[2] += 3246131;
        result[3] += 19029044;
        result[4] += 7163875;
        result[5] += 107122327;
      } else {
        result[0] += 91956675;
        result[1] += 3290192;
        result[2] += 11220401;
        result[3] += 13160771;
        result[4] += 11473493;
        result[5] += 12064040;
      }
    }
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( UNLIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7341824;
        result[3] += 3670912;
        result[4] += 22025473;
        result[5] += 110127366;
      } else {
        result[0] += 0;
        result[1] += 5206020;
        result[2] += 59869241;
        result[3] += 48155693;
        result[4] += 0;
        result[5] += 29934620;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0;
        result[1] += 111351003;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 31814572;
      } else {
        result[0] += 1460873;
        result[1] += 0;
        result[2] += 130342355;
        result[3] += 8927558;
        result[4] += 0;
        result[5] += 2434788;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 4414797;
        result[2] += 0;
        result[3] += 0;
        result[4] += 135597352;
        result[5] += 3153426;
      } else {
        result[0] += 4841879;
        result[1] += 770299;
        result[2] += 220085;
        result[3] += 22448714;
        result[4] += 6052349;
        result[5] += 108832248;
      }
    } else {
      if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 647808;
        result[1] += 139278728;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3239040;
        result[5] += 0;
      } else {
        result[0] += 84719098;
        result[1] += 6305429;
        result[2] += 10589887;
        result[3] += 13015052;
        result[4] += 17622865;
        result[5] += 10913242;
      }
    }
  } else {
    if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 22605091;
        result[3] += 3767515;
        result[4] += 7535030;
        result[5] += 109257939;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 58856959;
        result[3] += 54084773;
        result[4] += 0;
        result[5] += 30223843;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 0;
        result[1] += 5113056;
        result[2] += 84365429;
        result[3] += 44739242;
        result[4] += 2556528;
        result[5] += 6391320;
      } else {
        result[0] += 677706;
        result[1] += 0;
        result[2] += 134863667;
        result[3] += 6946495;
        result[4] += 0;
        result[5] += 677706;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 20206552;
        result[1] += 7308753;
        result[2] += 0;
        result[3] += 0;
        result[4] += 100602837;
        result[5] += 15047432;
      } else {
        result[0] += 123206;
        result[1] += 2217711;
        result[2] += 616030;
        result[3] += 25380472;
        result[4] += 5790690;
        result[5] += 109037465;
      }
    } else {
      if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 136041223;
        result[2] += 0;
        result[3] += 678509;
        result[4] += 6106588;
        result[5] += 339254;
      } else {
        result[0] += 84399588;
        result[1] += 5126720;
        result[2] += 8417003;
        result[3] += 12242914;
        result[4] += 19206071;
        result[5] += 13773278;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
      if ( LIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 6658864;
        result[1] += 0;
        result[2] += 9988296;
        result[3] += 99882960;
        result[4] += 3329432;
        result[5] += 23306024;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 132152839;
        result[3] += 11012736;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 71582788;
        result[3] += 44497408;
        result[4] += 0;
        result[5] += 27085379;
      } else {
        result[0] += 1734384;
        result[1] += 0;
        result[2] += 131813240;
        result[3] += 8829595;
        result[4] += 0;
        result[5] += 788356;
      }
    }
  }
  if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b70000))) ) ) {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c60000))) ) ) {
        result[0] += 0;
        result[1] += 2059936;
        result[2] += 0;
        result[3] += 0;
        result[4] += 134925831;
        result[5] += 6179809;
      } else {
        result[0] += 0;
        result[1] += 111351003;
        result[2] += 0;
        result[3] += 0;
        result[4] += 31814572;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42680000))) ) ) {
        result[0] += 114532461;
        result[1] += 1789569;
        result[2] += 0;
        result[3] += 5368709;
        result[4] += 13421772;
        result[5] += 8053063;
      } else {
        result[0] += 4186127;
        result[1] += 956829;
        result[2] += 358810;
        result[3] += 14711249;
        result[4] += 10046707;
        result[5] += 112905851;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 131309214;
        result[2] += 1778454;
        result[3] += 0;
        result[4] += 10077908;
        result[5] += 0;
      } else {
        result[0] += 104402720;
        result[1] += 5246905;
        result[2] += 3747789;
        result[3] += 12528326;
        result[4] += 9744253;
        result[5] += 7495579;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 3291162;
        result[1] += 6993720;
        result[2] += 30443254;
        result[3] += 54304184;
        result[4] += 6170930;
        result[5] += 41962324;
      } else {
        result[0] += 7550025;
        result[1] += 0;
        result[2] += 120515500;
        result[3] += 14387784;
        result[4] += 0;
        result[5] += 712266;
      }
    }
  }
  if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b70000))) ) ) {
    if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42820000))) ) ) {
        result[0] += 2504354;
        result[1] += 4591315;
        result[2] += 0;
        result[3] += 0;
        result[4] += 125635097;
        result[5] += 10434808;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 31122951;
        result[5] += 112042625;
      }
    } else {
      if ( UNLIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 106653550;
        result[1] += 1921685;
        result[2] += 0;
        result[3] += 960842;
        result[4] += 26903598;
        result[5] += 6725899;
      } else {
        result[0] += 2554247;
        result[1] += 255424;
        result[2] += 255424;
        result[3] += 20433980;
        result[4] += 8684441;
        result[5] += 110982057;
      }
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 976128;
        result[1] += 136332673;
        result[2] += 0;
        result[3] += 0;
        result[4] += 5856773;
        result[5] += 0;
      } else {
        result[0] += 103107326;
        result[1] += 6626176;
        result[2] += 2108328;
        result[3] += 11846800;
        result[4] += 11846800;
        result[5] += 7630142;
      }
    } else {
      if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 4630692;
        result[1] += 385891;
        result[2] += 55182418;
        result[3] += 54410636;
        result[4] += 1929455;
        result[5] += 26626481;
      } else {
        result[0] += 3455202;
        result[1] += 0;
        result[2] += 124687752;
        result[3] += 12619001;
        result[4] += 300452;
        result[5] += 2103166;
      }
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
    if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
        result[0] += 1567506;
        result[1] += 5747523;
        result[2] += 0;
        result[3] += 0;
        result[4] += 132193032;
        result[5] += 3657514;
      } else {
        result[0] += 0;
        result[1] += 35272678;
        result[2] += 2074863;
        result[3] += 33197814;
        result[4] += 37347541;
        result[5] += 35272678;
      }
    } else {
      if ( LIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 4716400;
        result[1] += 0;
        result[2] += 0;
        result[3] += 5933536;
        result[4] += 11258504;
        result[5] += 121257135;
      } else {
        result[0] += 15407954;
        result[1] += 0;
        result[2] += 4814985;
        result[3] += 62273815;
        result[4] += 7703977;
        result[5] += 52964843;
      }
    }
  } else {
    if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 97426963;
        result[1] += 9389430;
        result[2] += 4834162;
        result[3] += 5856773;
        result[4] += 15060274;
        result[5] += 10597971;
      } else {
        result[0] += 1052688;
        result[1] += 141411096;
        result[2] += 0;
        result[3] += 0;
        result[4] += 701792;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 8306535;
        result[1] += 4886197;
        result[2] += 57657126;
        result[3] += 37623718;
        result[4] += 5374816;
        result[5] += 29317182;
      } else {
        result[0] += 837225;
        result[1] += 0;
        result[2] += 126086174;
        result[3] += 14400280;
        result[4] += 0;
        result[5] += 1841896;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42360000))) ) ) {
      if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 22025473;
        result[2] += 0;
        result[3] += 0;
        result[4] += 99114629;
        result[5] += 22025473;
      } else {
        result[0] += 0;
        result[1] += 142849537;
        result[2] += 0;
        result[3] += 0;
        result[4] += 316038;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 9585600;
        result[1] += 309212;
        result[2] += 0;
        result[3] += 8245677;
        result[4] += 35662555;
        result[5] += 89362530;
      } else {
        result[0] += 77575594;
        result[1] += 6838417;
        result[2] += 9853203;
        result[3] += 20368189;
        result[4] += 12720926;
        result[5] += 15809244;
      }
    }
  } else {
    if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 29964888;
        result[3] += 19976592;
        result[4] += 0;
        result[5] += 93224096;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 53687091;
        result[3] += 69026260;
        result[4] += 0;
        result[5] += 20452225;
      }
    } else {
      if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 91583861;
        result[3] += 49476338;
        result[4] += 0;
        result[5] += 2105376;
      } else {
        result[0] += 1451615;
        result[1] += 362903;
        result[2] += 135000239;
        result[3] += 4899202;
        result[4] += 362903;
        result[5] += 1088711;
      }
    }
  }
  if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 554905;
        result[1] += 4994148;
        result[2] += 0;
        result[3] += 1109810;
        result[4] += 126518416;
        result[5] += 9988296;
      } else {
        result[0] += 5654654;
        result[1] += 514059;
        result[2] += 128514;
        result[3] += 19148717;
        result[4] += 5526139;
        result[5] += 112193490;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 243893;
        result[1] += 120971253;
        result[2] += 0;
        result[3] += 0;
        result[4] += 21218748;
        result[5] += 731680;
      } else {
        result[0] += 99189500;
        result[1] += 3450838;
        result[2] += 6547745;
        result[3] += 11856728;
        result[4] += 12033694;
        result[5] += 10087067;
      }
    }
  } else {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ac0000))) ) ) {
        result[0] += 0;
        result[1] += 2807168;
        result[2] += 0;
        result[3] += 16843009;
        result[4] += 11228672;
        result[5] += 112286726;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 22369621;
        result[3] += 83886079;
        result[4] += 0;
        result[5] += 36909875;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 3767515;
        result[1] += 0;
        result[2] += 43326424;
        result[3] += 7535030;
        result[4] += 28256363;
        result[5] += 60280242;
      } else {
        result[0] += 1728357;
        result[1] += 576119;
        result[2] += 123577529;
        result[3] += 14258945;
        result[4] += 864178;
        result[5] += 2160446;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 2584216;
        result[1] += 1033686;
        result[2] += 0;
        result[3] += 0;
        result[4] += 121975003;
        result[5] += 17572670;
      } else {
        result[0] += 2797628;
        result[1] += 3405808;
        result[2] += 2797628;
        result[3] += 22381024;
        result[4] += 4378896;
        result[5] += 107404591;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42520000))) ) ) {
        result[0] += 0;
        result[1] += 140903366;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2262210;
        result[5] += 0;
      } else {
        result[0] += 87667951;
        result[1] += 6174873;
        result[2] += 8156931;
        result[3] += 12349746;
        result[4] += 15627765;
        result[5] += 13188309;
      }
    }
  } else {
    if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 39898603;
        result[3] += 82144183;
        result[4] += 0;
        result[5] += 21122789;
      } else {
        result[0] += 3604888;
        result[1] += 2574920;
        result[2] += 98361960;
        result[3] += 21629331;
        result[4] += 2059936;
        result[5] += 14934538;
      }
    } else {
      if ( UNLIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 3003473;
        result[1] += 0;
        result[2] += 120138945;
        result[3] += 18020841;
        result[4] += 0;
        result[5] += 2002315;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 138636612;
        result[3] += 3522527;
        result[4] += 0;
        result[5] += 1006436;
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( UNLIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b30000))) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 483667;
        result[1] += 5804009;
        result[2] += 0;
        result[3] += 0;
        result[4] += 133008559;
        result[5] += 3869339;
      } else {
        result[0] += 12531146;
        result[1] += 332685;
        result[2] += 1330741;
        result[3] += 15081733;
        result[4] += 10867719;
        result[5] += 103021549;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 0;
        result[1] += 139101924;
        result[2] += 0;
        result[3] += 0;
        result[4] += 4063651;
        result[5] += 0;
      } else {
        result[0] += 86504880;
        result[1] += 3979224;
        result[2] += 6401361;
        result[3] += 17300976;
        result[4] += 9688546;
        result[5] += 19290588;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 12449180;
        result[3] += 9336885;
        result[4] += 46684427;
        result[5] += 74695083;
      } else {
        result[0] += 894784;
        result[1] += 12526987;
        result[2] += 36686178;
        result[3] += 68003648;
        result[4] += 1789569;
        result[5] += 23264406;
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
        result[0] += 65075262;
        result[1] += 0;
        result[2] += 74836551;
        result[3] += 3253763;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 490293;
        result[1] += 0;
        result[2] += 131398542;
        result[3] += 10786447;
        result[4] += 0;
        result[5] += 490293;
      }
    }
  }
  if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 10475529;
        result[2] += 436480;
        result[3] += 3491843;
        result[4] += 119159153;
        result[5] += 9602569;
      } else {
        result[0] += 11879954;
        result[1] += 121224;
        result[2] += 1575912;
        result[3] += 12243626;
        result[4] += 15274227;
        result[5] += 102070631;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 980586;
        result[1] += 137935783;
        result[2] += 326862;
        result[3] += 0;
        result[4] += 3922344;
        result[5] += 0;
      } else {
        result[0] += 97511870;
        result[1] += 3704154;
        result[2] += 3981966;
        result[3] += 16113072;
        result[4] += 9538198;
        result[5] += 12316314;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 0;
        result[1] += 15184227;
        result[2] += 5422938;
        result[3] += 24945517;
        result[4] += 17353403;
        result[5] += 80259489;
      } else {
        result[0] += 3235380;
        result[1] += 0;
        result[2] += 46104168;
        result[3] += 71178365;
        result[4] += 808845;
        result[5] += 21838816;
      }
    } else {
      if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 10307921;
        result[1] += 0;
        result[2] += 105369864;
        result[3] += 23670041;
        result[4] += 1145324;
        result[5] += 2672424;
      } else {
        result[0] += 220594;
        result[1] += 0;
        result[2] += 137650723;
        result[3] += 5294258;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
        result[0] += 1188096;
        result[1] += 7128576;
        result[2] += 0;
        result[3] += 594048;
        result[4] += 130096519;
        result[5] += 4158336;
      } else {
        result[0] += 4310849;
        result[1] += 1474764;
        result[2] += 2155424;
        result[3] += 21554246;
        result[4] += 10890566;
        result[5] += 102779724;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
        result[0] += 461824;
        result[1] += 118688881;
        result[2] += 1385473;
        result[3] += 1154561;
        result[4] += 19396626;
        result[5] += 2078209;
      } else {
        result[0] += 103412626;
        result[1] += 2564706;
        result[2] += 7052942;
        result[3] += 11266388;
        result[4] += 9526052;
        result[5] += 9342859;
      }
    }
  } else {
    if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b70000))) ) ) {
      if ( LIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 3158064;
        result[1] += 12632256;
        result[2] += 13684944;
        result[3] += 26317201;
        result[4] += 7368816;
        result[5] += 80004292;
      } else {
        result[0] += 5023353;
        result[1] += 0;
        result[2] += 100467071;
        result[3] += 35163474;
        result[4] += 0;
        result[5] += 2511676;
      }
    } else {
      if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 2807168;
        result[1] += 0;
        result[2] += 103464198;
        result[3] += 28071681;
        result[4] += 0;
        result[5] += 8822528;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 138069852;
        result[3] += 4853070;
        result[4] += 0;
        result[5] += 242653;
      }
    }
  }
  if ( UNLIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
      if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 1261370;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 137489408;
        result[5] += 4414797;
      } else {
        result[0] += 0;
        result[1] += 35791394;
        result[2] += 0;
        result[3] += 0;
        result[4] += 35791394;
        result[5] += 71582788;
      }
    } else {
      if ( LIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 5540927;
        result[1] += 1797057;
        result[2] += 748773;
        result[3] += 10482835;
        result[4] += 7787248;
        result[5] += 116808733;
      } else {
        result[0] += 8112716;
        result[1] += 5726623;
        result[2] += 6681060;
        result[3] += 70151132;
        result[4] += 3817748;
        result[5] += 48676296;
      }
    }
  } else {
    if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 245146;
        result[1] += 113747992;
        result[2] += 0;
        result[3] += 0;
        result[4] += 28436998;
        result[5] += 735439;
      } else {
        result[0] += 107623773;
        result[1] += 2495913;
        result[2] += 5191499;
        result[3] += 8386268;
        result[4] += 11381363;
        result[5] += 8086758;
      }
    } else {
      if ( UNLIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 889227;
        result[1] += 0;
        result[2] += 41793677;
        result[3] += 54687471;
        result[4] += 8003044;
        result[5] += 37792155;
      } else {
        result[0] += 5589046;
        result[1] += 286617;
        result[2] += 123818876;
        result[3] += 9315077;
        result[4] += 1003162;
        result[5] += 3152795;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 454493;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1817975;
        result[4] += 120895375;
        result[5] += 19997731;
      } else {
        result[0] += 4477922;
        result[1] += 767643;
        result[2] += 1279406;
        result[3] += 22005790;
        result[4] += 8188200;
        result[5] += 106446612;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0;
        result[1] += 128906056;
        result[2] += 0;
        result[3] += 0;
        result[4] += 14259519;
        result[5] += 0;
      } else {
        result[0] += 97476315;
        result[1] += 3623326;
        result[2] += 6804783;
        result[3] += 10693231;
        result[4] += 15553791;
        result[5] += 9014128;
      }
    }
  } else {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 2844349;
        result[2] += 4740582;
        result[3] += 36028423;
        result[4] += 4740582;
        result[5] += 94811640;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 60220440;
        result[3] += 67037849;
        result[4] += 0;
        result[5] += 15907286;
      }
    } else {
      if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 24097176;
        result[1] += 15592290;
        result[2] += 53864276;
        result[3] += 25514657;
        result[4] += 1417480;
        result[5] += 22679695;
      } else {
        result[0] += 1444495;
        result[1] += 0;
        result[2] += 130004615;
        result[3] += 10271969;
        result[4] += 0;
        result[5] += 1444495;
      }
    }
  }
  if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        result[0] += 19497257;
        result[1] += 557064;
        result[2] += 0;
        result[3] += 3899451;
        result[4] += 101385739;
        result[5] += 17826064;
      } else {
        result[0] += 125804;
        result[1] += 629022;
        result[2] += 377413;
        result[3] += 20631945;
        result[4] += 8051491;
        result[5] += 113349898;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
        result[0] += 0;
        result[1] += 134236330;
        result[2] += 0;
        result[3] += 0;
        result[4] += 8631604;
        result[5] += 297641;
      } else {
        result[0] += 94277688;
        result[1] += 6228299;
        result[2] += 7166810;
        result[3] += 10152981;
        result[4] += 16125324;
        result[5] += 9214470;
      }
    }
  } else {
    if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1934669;
        result[3] += 13542689;
        result[4] += 54170758;
        result[5] += 73517458;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 41902119;
        result[3] += 61456442;
        result[4] += 698368;
        result[5] += 39108645;
      }
    } else {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 53024287;
        result[1] += 31814572;
        result[2] += 15907286;
        result[3] += 5302428;
        result[4] += 37117001;
        result[5] += 0;
      } else {
        result[0] += 1185636;
        result[1] += 0;
        result[2] += 128345123;
        result[3] += 11708157;
        result[4] += 148204;
        result[5] += 1778454;
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 500578;
        result[1] += 5506368;
        result[2] += 0;
        result[3] += 500578;
        result[4] += 131652260;
        result[5] += 5005789;
      } else {
        result[0] += 11311848;
        result[1] += 824822;
        result[2] += 589158;
        result[3] += 14611137;
        result[4] += 13432819;
        result[5] += 102395790;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 562536;
        result[1] += 133039916;
        result[2] += 562536;
        result[3] += 0;
        result[4] += 8156781;
        result[5] += 843804;
      } else {
        result[0] += 88246055;
        result[1] += 3503767;
        result[2] += 8474228;
        result[3] += 20044810;
        result[4] += 6437154;
        result[5] += 16459559;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
      if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 3253763;
        result[1] += 1626881;
        result[2] += 9761289;
        result[3] += 66702143;
        result[4] += 9761289;
        result[5] += 52060209;
      } else {
        result[0] += 10226112;
        result[1] += 0;
        result[2] += 105669830;
        result[3] += 13634816;
        result[4] += 3408704;
        result[5] += 10226112;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 7953643;
        result[1] += 47721858;
        result[2] += 15907286;
        result[3] += 7953643;
        result[4] += 0;
        result[5] += 63629145;
      } else {
        result[0] += 1885825;
        result[1] += 0;
        result[2] += 129021886;
        result[3] += 11943560;
        result[4] += 0;
        result[5] += 314304;
      }
    }
  }
  if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42870000))) ) ) {
        result[0] += 253166;
        result[1] += 379749;
        result[2] += 379749;
        result[3] += 7594990;
        result[4] += 27848299;
        result[5] += 106709620;
      } else {
        result[0] += 19485673;
        result[1] += 3247612;
        result[2] += 1894440;
        result[3] += 44925303;
        result[4] += 26792801;
        result[5] += 46819744;
      }
    } else {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x425a0000))) ) ) {
        result[0] += 316038;
        result[1] += 138108955;
        result[2] += 0;
        result[3] += 632077;
        result[4] += 4108504;
        result[5] += 0;
      } else {
        result[0] += 90498902;
        result[1] += 6495556;
        result[2] += 11147779;
        result[3] += 9655556;
        result[4] += 15536668;
        result[5] += 9831112;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
      if ( LIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 4149726;
        result[1] += 0;
        result[2] += 10374317;
        result[3] += 18673770;
        result[4] += 18673770;
        result[5] += 91293990;
      } else {
        result[0] += 3670912;
        result[1] += 0;
        result[2] += 29367297;
        result[3] += 99114629;
        result[4] += 0;
        result[5] += 11012736;
      }
    } else {
      if ( UNLIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 38774010;
        result[3] += 47721858;
        result[4] += 0;
        result[5] += 56669707;
      } else {
        result[0] += 2628309;
        result[1] += 1236851;
        result[2] += 125385834;
        result[3] += 12832335;
        result[4] += 0;
        result[5] += 1082245;
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 4008636;
        result[2] += 0;
        result[3] += 2863311;
        result[4] += 123122395;
        result[5] += 13171233;
      } else {
        result[0] += 4868072;
        result[1] += 663828;
        result[2] += 553190;
        result[3] += 23455256;
        result[4] += 7412746;
        result[5] += 106212483;
      }
    } else {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 326117;
        result[1] += 139578284;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3261174;
        result[5] += 0;
      } else {
        result[0] += 87820924;
        result[1] += 6193519;
        result[2] += 9369682;
        result[3] += 13101675;
        result[4] += 16992475;
        result[5] += 9687299;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
      if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 1223637;
        result[1] += 2447274;
        result[2] += 34261847;
        result[3] += 53840045;
        result[4] += 2447274;
        result[5] += 48945496;
      } else {
        result[0] += 2327895;
        result[1] += 0;
        result[2] += 101263456;
        result[3] += 34918433;
        result[4] += 0;
        result[5] += 4655791;
      }
    } else {
      if ( UNLIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42910000))) ) ) {
        result[0] += 102261126;
        result[1] += 0;
        result[2] += 40904450;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 728577;
        result[1] += 728577;
        result[2] += 133694062;
        result[3] += 7467924;
        result[4] += 0;
        result[5] += 546433;
      }
    }
  }
  if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
      if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 35711680;
        result[1] += 2231980;
        result[2] += 0;
        result[3] += 0;
        result[4] += 92148889;
        result[5] += 13073025;
      } else {
        result[0] += 266602;
        result[1] += 2666025;
        result[2] += 1199711;
        result[3] += 13196826;
        result[4] += 9064487;
        result[5] += 116771922;
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 82247492;
        result[1] += 4362833;
        result[2] += 9291219;
        result[3] += 20117510;
        result[4] += 13088500;
        result[5] += 14058019;
      } else {
        result[0] += 1979247;
        result[1] += 141186328;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
      if ( LIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 5843492;
        result[2] += 8765239;
        result[3] += 52591436;
        result[4] += 17530478;
        result[5] += 58434929;
      } else {
        result[0] += 9336885;
        result[1] += 15561475;
        result[2] += 96481149;
        result[3] += 18673770;
        result[4] += 3112295;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 85320899;
        result[3] += 40491274;
        result[4] += 0;
        result[5] += 17353403;
      } else {
        result[0] += 1173488;
        result[1] += 0;
        result[2] += 131933616;
        result[3] += 9387906;
        result[4] += 0;
        result[5] += 670564;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 29939569;
        result[1] += 4899202;
        result[2] += 0;
        result[3] += 0;
        result[4] += 103971958;
        result[5] += 4354846;
      } else {
        result[0] += 323416;
        result[1] += 754637;
        result[2] += 107805;
        result[3] += 21776691;
        result[4] += 10025902;
        result[5] += 110177122;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        result[0] += 0;
        result[1] += 122678919;
        result[2] += 0;
        result[3] += 241019;
        result[4] += 19522578;
        result[5] += 723058;
      } else {
        result[0] += 93207674;
        result[1] += 4060182;
        result[2] += 11297899;
        result[3] += 12621872;
        result[4] += 11121370;
        result[5] += 10856575;
      }
    }
  } else {
    if ( UNLIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 18179755;
        result[3] += 36359511;
        result[4] += 2272469;
        result[5] += 86353839;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 121955861;
        result[3] += 5302428;
        result[4] += 0;
        result[5] += 15907286;
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 1669569;
        result[1] += 2921746;
        result[2] += 106852441;
        result[3] += 28382679;
        result[4] += 834784;
        result[5] += 2504354;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 136813520;
        result[3] += 3420338;
        result[4] += 244309;
        result[5] += 2687408;
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42910000))) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 1080494;
        result[1] += 13506186;
        result[2] += 0;
        result[3] += 0;
        result[4] += 119934935;
        result[5] += 8643959;
      } else {
        result[0] += 5919926;
        result[1] += 1691407;
        result[2] += 241629;
        result[3] += 19934447;
        result[4] += 9906816;
        result[5] += 105471348;
      }
    } else {
      if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 700076;
        result[1] += 137564967;
        result[2] += 350038;
        result[3] += 0;
        result[4] += 4550495;
        result[5] += 0;
      } else {
        result[0] += 85539180;
        result[1] += 6678058;
        result[2] += 9679433;
        result[3] += 13356117;
        result[4] += 13956392;
        result[5] += 13956392;
      }
    }
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 3767515;
        result[1] += 26372606;
        result[2] += 0;
        result[3] += 3767515;
        result[4] += 7535030;
        result[5] += 101722909;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 49910934;
        result[3] += 70926065;
        result[4] += 0;
        result[5] += 22328576;
      }
    } else {
      if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 2476913;
        result[1] += 0;
        result[2] += 109479558;
        result[3] += 24769130;
        result[4] += 1486147;
        result[5] += 4953826;
      } else {
        result[0] += 459600;
        result[1] += 0;
        result[2] += 139258971;
        result[3] += 2757603;
        result[4] += 0;
        result[5] += 689400;
      }
    }
  }
  if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2489836;
        result[3] += 0;
        result[4] += 138185904;
        result[5] += 2489836;
      } else {
        result[0] += 62817548;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 21913098;
        result[5] += 58434929;
      }
    } else {
      if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 318499;
        result[2] += 159249;
        result[3] += 8440239;
        result[4] += 6369992;
        result[5] += 127877595;
      } else {
        result[0] += 0;
        result[1] += 2130440;
        result[2] += 1278264;
        result[3] += 67321907;
        result[4] += 10226112;
        result[5] += 62208851;
      }
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        result[0] += 0;
        result[1] += 119995679;
        result[2] += 243893;
        result[3] += 243893;
        result[4] += 22194322;
        result[5] += 487787;
      } else {
        result[0] += 112797120;
        result[1] += 3430323;
        result[2] += 1916945;
        result[3] += 7768674;
        result[4] += 11198998;
        result[5] += 6053512;
      }
    } else {
      if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 1934669;
        result[1] += 967334;
        result[2] += 50785086;
        result[3] += 49334083;
        result[4] += 1451002;
        result[5] += 38693399;
      } else {
        result[0] += 4171317;
        result[1] += 148975;
        result[2] += 123500793;
        result[3] += 11769074;
        result[4] += 148975;
        result[5] += 3426439;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x423c0000))) ) ) {
      if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 0;
        result[1] += 13015052;
        result[2] += 0;
        result[3] += 0;
        result[4] += 130150524;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 140813090;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2352485;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
        result[0] += 4317996;
        result[1] += 1439332;
        result[2] += 1151465;
        result[3] += 19574917;
        result[4] += 27731133;
        result[5] += 88950730;
      } else {
        result[0] += 89045842;
        result[1] += 7394266;
        result[2] += 6057005;
        result[3] += 11642035;
        result[4] += 15575156;
        result[5] += 13451271;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 74991492;
        result[4] += 6817408;
        result[5] += 61356675;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 83924648;
        result[3] += 47721858;
        result[4] += 0;
        result[5] += 11519069;
      }
    } else {
      if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 761519;
        result[1] += 0;
        result[2] += 111943296;
        result[3] += 25891646;
        result[4] += 0;
        result[5] += 4569114;
      } else {
        result[0] += 1507006;
        result[1] += 0;
        result[2] += 134500291;
        result[3] += 6593151;
        result[4] += 0;
        result[5] += 565127;
      }
    }
  }
  if ( UNLIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
      if ( LIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
        result[0] += 0;
        result[1] += 2158275;
        result[2] += 0;
        result[3] += 0;
        result[4] += 141007301;
        result[5] += 0;
      } else {
        result[0] += 3817748;
        result[1] += 0;
        result[2] += 3817748;
        result[3] += 7635497;
        result[4] += 80172722;
        result[5] += 47721858;
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 5200767;
        result[1] += 4189507;
        result[2] += 0;
        result[3] += 5489699;
        result[4] += 7512219;
        result[5] += 120773382;
      } else {
        result[0] += 2016416;
        result[1] += 0;
        result[2] += 6049249;
        result[3] += 71582788;
        result[4] += 2016416;
        result[5] += 61500705;
      }
    }
  } else {
    if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
      if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 98770257;
        result[1] += 6808525;
        result[2] += 2518221;
        result[3] += 6248920;
        result[4] += 21171717;
        result[5] += 7647933;
      } else {
        result[0] += 3592748;
        result[1] += 435484;
        result[2] += 105605026;
        result[3] += 20141164;
        result[4] += 1633067;
        result[5] += 11758085;
      }
    } else {
      if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 0;
        result[1] += 142147811;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1017764;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 143165576;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( UNLIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 507679;
        result[1] += 10661266;
        result[2] += 0;
        result[3] += 0;
        result[4] += 121843043;
        result[5] += 10153586;
      } else {
        result[0] += 4569114;
        result[1] += 1405881;
        result[2] += 1640194;
        result[3] += 21439689;
        result[4] += 8669601;
        result[5] += 105441095;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0;
        result[1] += 127506841;
        result[2] += 0;
        result[3] += 0;
        result[4] += 15658734;
        result[5] += 0;
      } else {
        result[0] += 99051135;
        result[1] += 2659706;
        result[2] += 5227698;
        result[3] += 10363683;
        result[4] += 15683096;
        result[5] += 10180255;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 4880644;
        result[1] += 6507526;
        result[2] += 6507526;
        result[3] += 3253763;
        result[4] += 16268815;
        result[5] += 105747300;
      } else {
        result[0] += 2074863;
        result[1] += 2766484;
        result[2] += 44263753;
        result[3] += 67778871;
        result[4] += 2074863;
        result[5] += 24206739;
      }
    } else {
      if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 53270912;
        result[1] += 0;
        result[2] += 49941480;
        result[3] += 29964888;
        result[4] += 0;
        result[5] += 9988296;
      } else {
        result[0] += 628608;
        result[1] += 0;
        result[2] += 129021886;
        result[3] += 11786408;
        result[4] += 0;
        result[5] += 1728673;
      }
    }
  }
  if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
      if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42760000))) ) ) {
        result[0] += 30120549;
        result[1] += 2231151;
        result[2] += 0;
        result[3] += 371858;
        result[4] += 91477225;
        result[5] += 18964790;
      } else {
        result[0] += 286617;
        result[1] += 1146471;
        result[2] += 0;
        result[3] += 9458386;
        result[4] += 11894637;
        result[5] += 120379463;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0;
        result[1] += 137390319;
        result[2] += 0;
        result[3] += 0;
        result[4] += 5775256;
        result[5] += 0;
      } else {
        result[0] += 85999637;
        result[1] += 4178796;
        result[2] += 8357593;
        result[3] += 19807496;
        result[4] += 11533479;
        result[5] += 13288573;
      }
    }
  } else {
    if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6927366;
        result[3] += 2309122;
        result[4] += 34636833;
        result[5] += 99292254;
      } else {
        result[0] += 9967223;
        result[1] += 4077500;
        result[2] += 48476951;
        result[3] += 55725841;
        result[4] += 3624444;
        result[5] += 21293614;
      }
    } else {
      if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 1724886;
        result[1] += 0;
        result[2] += 84519436;
        result[3] += 51746593;
        result[4] += 0;
        result[5] += 5174659;
      } else {
        result[0] += 179630;
        result[1] += 0;
        result[2] += 134543308;
        result[3] += 8263006;
        result[4] += 0;
        result[5] += 179630;
      }
    }
  }
  if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 591593;
        result[1] += 12423459;
        result[2] += 0;
        result[3] += 4141153;
        result[4] += 120093438;
        result[5] += 5915932;
      } else {
        result[0] += 4859096;
        result[1] += 711087;
        result[2] += 2251776;
        result[3] += 20147473;
        result[4] += 8770076;
        result[5] += 106426065;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42660000))) ) ) {
        result[0] += 0;
        result[1] += 129570395;
        result[2] += 554905;
        result[3] += 0;
        result[4] += 13040275;
        result[5] += 0;
      } else {
        result[0] += 89145268;
        result[1] += 3998600;
        result[2] += 8781240;
        result[3] += 12231013;
        result[4] += 14583131;
        result[5] += 14426323;
      }
    }
  } else {
    if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 7040929;
        result[1] += 18775813;
        result[2] += 22296278;
        result[3] += 38725114;
        result[4] += 8214418;
        result[5] += 48113021;
      } else {
        result[0] += 2309122;
        result[1] += 0;
        result[2] += 109106024;
        result[3] += 27709466;
        result[4] += 0;
        result[5] += 4040963;
      }
    } else {
      if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 128523642;
        result[3] += 14641933;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 880116;
        result[1] += 0;
        result[2] += 138764995;
        result[3] += 2640348;
        result[4] += 0;
        result[5] += 880116;
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
    

    FILE* file = fopen("./codegen_small/dataset_146/split_3/test_data.csv", "r");
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
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        
    }
    

    return 0;
}
