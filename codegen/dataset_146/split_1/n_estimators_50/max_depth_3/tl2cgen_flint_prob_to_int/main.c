
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
  if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
      if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 308990;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 83736412;
        result[5] += 1853942;
      } else {
        result[0] += 53340722;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 13161996;
        result[5] += 19396626;
      }
    } else {
      if ( LIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 298953;
        result[3] += 5480816;
        result[4] += 4484304;
        result[5] += 75635270;
      } else {
        result[0] += 0;
        result[1] += 709911;
        result[2] += 177477;
        result[3] += 33898295;
        result[4] += 6566685;
        result[5] += 44546974;
      }
    }
  } else {
    if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42890000))) ) ) {
        result[0] += 1814774;
        result[1] += 67600365;
        result[2] += 0;
        result[3] += 453693;
        result[4] += 15425586;
        result[5] += 604924;
      } else {
        result[0] += 67730899;
        result[1] += 2404647;
        result[2] += 2939013;
        result[3] += 3673766;
        result[4] += 6212005;
        result[5] += 2939013;
      }
    } else {
      if ( UNLIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 598601;
        result[1] += 299300;
        result[2] += 35317501;
        result[3] += 28433581;
        result[4] += 299300;
        result[5] += 20951059;
      } else {
        result[0] += 2108521;
        result[1] += 550049;
        result[2] += 75173387;
        result[3] += 5958866;
        result[4] += 825073;
        result[5] += 1283448;
      }
    }
  }
  if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6997418;
        result[1] += 723870;
        result[2] += 241290;
        result[3] += 2654193;
        result[4] += 65389670;
        result[5] += 9892902;
      } else {
        result[0] += 0;
        result[1] += 382114;
        result[2] += 229268;
        result[3] += 14673197;
        result[4] += 3897568;
        result[5] += 66717196;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 82342437;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3556908;
        result[5] += 0;
      } else {
        result[0] += 58214110;
        result[1] += 3111906;
        result[2] += 4345938;
        result[3] += 7404190;
        result[4] += 8316301;
        result[5] += 4506898;
      }
    }
  } else {
    if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7279605;
        result[3] += 37853949;
        result[4] += 4367763;
        result[5] += 36398027;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 85899345;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 1700977;
        result[1] += 850488;
        result[2] += 36571008;
        result[3] += 23813680;
        result[4] += 13607817;
        result[5] += 9355374;
      } else {
        result[0] += 796183;
        result[1] += 0;
        result[2] += 79441413;
        result[3] += 5042495;
        result[4] += 88464;
        result[5] += 530788;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 15280172;
        result[1] += 7020619;
        result[2] += 0;
        result[3] += 0;
        result[4] += 55339001;
        result[5] += 8259552;
      } else {
        result[0] += 504019;
        result[1] += 288011;
        result[2] += 1512058;
        result[3] += 15264594;
        result[4] += 6120238;
        result[5] += 62210423;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 74329229;
        result[2] += 350609;
        result[3] += 1577743;
        result[4] += 8414629;
        result[5] += 1227133;
      } else {
        result[0] += 61457882;
        result[1] += 2184381;
        result[2] += 3719353;
        result[3] += 6435071;
        result[4] += 6730258;
        result[5] += 5372398;
      }
    }
  } else {
    if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
      if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 16886196;
        result[4] += 2202547;
        result[5] += 66810602;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 23735345;
        result[3] += 42949672;
        result[4] += 0;
        result[5] += 19214327;
      }
    } else {
      if ( UNLIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
        result[0] += 33796463;
        result[1] += 22530975;
        result[2] += 15490045;
        result[3] += 5632743;
        result[4] += 4224557;
        result[5] += 4224557;
      } else {
        result[0] += 843804;
        result[1] += 253141;
        result[2] += 74423598;
        result[3] += 8353669;
        result[4] += 168760;
        result[5] += 1856370;
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 776198;
        result[1] += 2587329;
        result[2] += 0;
        result[3] += 0;
        result[4] += 79948487;
        result[5] += 2587329;
      } else {
        result[0] += 0;
        result[1] += 85123731;
        result[2] += 0;
        result[3] += 0;
        result[4] += 775614;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
        result[0] += 2827067;
        result[1] += 434933;
        result[2] += 0;
        result[3] += 13048001;
        result[4] += 5799111;
        result[5] += 63790231;
      } else {
        result[0] += 60399736;
        result[1] += 2307911;
        result[2] += 2476783;
        result[3] += 5347600;
        result[4] += 6585991;
        result[5] += 8781322;
      }
    }
  } else {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 2831846;
        result[2] += 1887897;
        result[3] += 17935028;
        result[4] += 13215283;
        result[5] += 50029289;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 17602324;
        result[3] += 54215160;
        result[4] += 0;
        result[5] += 14081859;
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
        result[0] += 33405301;
        result[1] += 4772185;
        result[2] += 33405301;
        result[3] += 7158278;
        result[4] += 1590728;
        result[5] += 5567550;
      } else {
        result[0] += 337190;
        result[1] += 84297;
        result[2] += 77132386;
        result[3] += 7333899;
        result[4] += 168595;
        result[5] += 842976;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 873552;
        result[1] += 2329473;
        result[2] += 291184;
        result[3] += 873552;
        result[4] += 77455003;
        result[5] += 4076579;
      } else {
        result[0] += 3737333;
        result[1] += 177968;
        result[2] += 118645;
        result[3] += 14059492;
        result[4] += 7059407;
        result[5] += 60746498;
      }
    } else {
      if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 54475407;
        result[1] += 5273567;
        result[2] += 5599767;
        result[3] += 7502601;
        result[4] += 8481201;
        result[5] += 4566800;
      } else {
        result[0] += 609215;
        result[1] += 84274771;
        result[2] += 406143;
        result[3] += 609215;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3579139;
        result[3] += 7158278;
        result[4] += 0;
        result[5] += 75161927;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 30923764;
        result[3] += 42377010;
        result[4] += 0;
        result[5] += 12598570;
      }
    } else {
      if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 39429207;
        result[3] += 39429207;
        result[4] += 0;
        result[5] += 7040929;
      } else {
        result[0] += 653581;
        result[1] += 280106;
        result[2] += 78896681;
        result[3] += 4855180;
        result[4] += 280106;
        result[5] += 933688;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
    if ( UNLIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 9260524;
        result[1] += 3193284;
        result[2] += 0;
        result[3] += 0;
        result[4] += 69613596;
        result[5] += 3831941;
      } else {
        result[0] += 71049;
        result[1] += 1776247;
        result[2] += 568399;
        result[3] += 11865335;
        result[4] += 4831394;
        result[5] += 66786919;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 83868628;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2030717;
        result[5] += 0;
      } else {
        result[0] += 46846316;
        result[1] += 2814242;
        result[2] += 6840774;
        result[3] += 9438536;
        result[4] += 11819819;
        result[5] += 8139655;
      }
    }
  } else {
    if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
      if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 74446099;
        result[4] += 0;
        result[5] += 11453246;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 33839136;
        result[3] += 2603010;
        result[4] += 7809031;
        result[5] += 41648167;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 3303820;
        result[1] += 9911462;
        result[2] += 26430567;
        result[3] += 19822925;
        result[4] += 0;
        result[5] += 26430567;
      } else {
        result[0] += 495382;
        result[1] += 0;
        result[2] += 79063065;
        result[3] += 5647361;
        result[4] += 0;
        result[5] += 693535;
      }
    }
  }
  if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 1122867;
        result[1] += 8982938;
        result[2] += 0;
        result[3] += 0;
        result[4] += 71302071;
        result[5] += 4491469;
      } else {
        result[0] += 3778145;
        result[1] += 0;
        result[2] += 427714;
        result[3] += 13401723;
        result[4] += 4134574;
        result[5] += 64157187;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
        result[0] += 0;
        result[1] += 79413068;
        result[2] += 0;
        result[3] += 175304;
        result[4] += 6310972;
        result[5] += 0;
      } else {
        result[0] += 53222937;
        result[1] += 2475485;
        result[2] += 7178907;
        result[3] += 7674004;
        result[4] += 7228417;
        result[5] += 8119592;
      }
    }
  } else {
    if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d50000))) ) ) {
        result[0] += 788067;
        result[1] += 9456808;
        result[2] += 15761347;
        result[3] += 37827234;
        result[4] += 1576134;
        result[5] += 20489752;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 79906368;
        result[3] += 5992977;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 0;
        result[1] += 3579139;
        result[2] += 26843545;
        result[3] += 7158278;
        result[4] += 10737418;
        result[5] += 37580963;
      } else {
        result[0] += 1061677;
        result[1] += 193032;
        result[2] += 79432765;
        result[3] += 4439741;
        result[4] += 193032;
        result[5] += 579096;
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428d0000))) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 297229;
        result[1] += 3863984;
        result[2] += 0;
        result[3] += 0;
        result[4] += 73118474;
        result[5] += 8619657;
      } else {
        result[0] += 864494;
        result[1] += 943085;
        result[2] += 1807580;
        result[3] += 11945746;
        result[4] += 3379388;
        result[5] += 66959050;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 188789;
        result[1] += 82501130;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3209426;
        result[5] += 0;
      } else {
        result[0] += 47602554;
        result[1] += 1923787;
        result[2] += 5368709;
        result[3] += 10066329;
        result[4] += 11676942;
        result[5] += 9261023;
      }
    }
  } else {
    if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        result[0] += 1507006;
        result[1] += 16577066;
        result[2] += 0;
        result[3] += 6028024;
        result[4] += 9042036;
        result[5] += 52745212;
      } else {
        result[0] += 3303820;
        result[1] += 0;
        result[2] += 55063683;
        result[3] += 23126746;
        result[4] += 0;
        result[5] += 4405094;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 45634027;
        result[3] += 29527900;
        result[4] += 0;
        result[5] += 10737418;
      } else {
        result[0] += 98734;
        result[1] += 0;
        result[2] += 80863867;
        result[3] += 4640539;
        result[4] += 0;
        result[5] += 296204;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        result[0] += 16683862;
        result[1] += 901830;
        result[2] += 225457;
        result[3] += 450915;
        result[4] += 56815315;
        result[5] += 10821964;
      } else {
        result[0] += 356428;
        result[1] += 1140572;
        result[2] += 0;
        result[3] += 14257152;
        result[4] += 6487004;
        result[5] += 63658187;
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 1252698;
        result[1] += 80172722;
        result[2] += 357913;
        result[3] += 1610612;
        result[4] += 2505397;
        result[5] += 0;
      } else {
        result[0] += 59052237;
        result[1] += 3534014;
        result[2] += 2508010;
        result[3] += 3933015;
        result[4] += 11172044;
        result[5] += 5700022;
      }
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c50000))) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 0;
        result[1] += 4357213;
        result[2] += 3734754;
        result[3] += 43572131;
        result[4] += 4357213;
        result[5] += 29878033;
      } else {
        result[0] += 0;
        result[1] += 488064;
        result[2] += 45389995;
        result[3] += 31236125;
        result[4] += 976128;
        result[5] += 7809031;
      }
    } else {
      if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 11279712;
        result[1] += 3470680;
        result[2] += 36442146;
        result[3] += 11279712;
        result[4] += 5206020;
        result[5] += 18221073;
      } else {
        result[0] += 818089;
        result[1] += 0;
        result[2] += 80274983;
        result[3] += 4192706;
        result[4] += 0;
        result[5] += 613566;
      }
    }
  }
  if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
    if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 1197203;
        result[1] += 3890911;
        result[2] += 598601;
        result[3] += 897902;
        result[4] += 74525913;
        result[5] += 4788813;
      } else {
        result[0] += 68003648;
        result[1] += 357913;
        result[2] += 1789569;
        result[3] += 2147483;
        result[4] += 6800364;
        result[5] += 6800364;
      }
    } else {
      if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 250923;
        result[1] += 920051;
        result[2] += 0;
        result[3] += 4182051;
        result[4] += 9451437;
        result[5] += 71094882;
      } else {
        result[0] += 1941228;
        result[1] += 0;
        result[2] += 8897295;
        result[3] += 49824856;
        result[4] += 323538;
        result[5] += 24912428;
      }
    }
  } else {
    if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
        result[0] += 187144;
        result[1] += 77103552;
        result[2] += 0;
        result[3] += 0;
        result[4] += 8421504;
        result[5] += 187144;
      } else {
        result[0] += 70878282;
        result[1] += 3094791;
        result[2] += 3170274;
        result[3] += 2264481;
        result[4] += 4151550;
        result[5] += 2339964;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 1898328;
        result[1] += 1898328;
        result[2] += 27525757;
        result[3] += 21830772;
        result[4] += 9491640;
        result[5] += 23254519;
      } else {
        result[0] += 802797;
        result[1] += 0;
        result[2] += 79476964;
        result[3] += 5351984;
        result[4] += 0;
        result[5] += 267599;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 0;
        result[1] += 5774745;
        result[2] += 240614;
        result[3] += 2646758;
        result[4] += 66890807;
        result[5] += 10346419;
      } else {
        result[0] += 3627506;
        result[1] += 0;
        result[2] += 290200;
        result[3] += 14002173;
        result[4] += 4933408;
        result[5] += 63046057;
      }
    } else {
      if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42660000))) ) ) {
        result[0] += 178214;
        result[1] += 78236126;
        result[2] += 178214;
        result[3] += 0;
        result[4] += 7306790;
        result[5] += 0;
      } else {
        result[0] += 53834354;
        result[1] += 3739208;
        result[2] += 4507538;
        result[3] += 6761308;
        result[4] += 7324750;
        result[5] += 9732185;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 17000912;
        result[3] += 53687091;
        result[4] += 0;
        result[5] += 15211342;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 69793218;
        result[3] += 8053063;
        result[4] += 0;
        result[5] += 8053063;
      }
    } else {
      if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 9975407;
        result[1] += 0;
        result[2] += 61515015;
        result[3] += 11083786;
        result[4] += 0;
        result[5] += 3325135;
      } else {
        result[0] += 407588;
        result[1] += 0;
        result[2] += 80294999;
        result[3] += 4687271;
        result[4] += 0;
        result[5] += 509486;
      }
    }
  }
  if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c30000))) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 535754;
        result[1] += 12143774;
        result[2] += 357169;
        result[3] += 3214528;
        result[4] += 62683306;
        result[5] += 6964811;
      } else {
        result[0] += 20114054;
        result[1] += 637866;
        result[2] += 1743501;
        result[3] += 13735390;
        result[4] += 6038468;
        result[5] += 43630063;
      }
    } else {
      if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 7158278;
        result[1] += 60129542;
        result[2] += 4294967;
        result[3] += 2863311;
        result[4] += 11453246;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 85899345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 84695149;
        result[1] += 0;
        result[2] += 0;
        result[3] += 535198;
        result[4] += 401398;
        result[5] += 267599;
      } else {
        result[0] += 46432078;
        result[1] += 0;
        result[2] += 30180851;
        result[3] += 4643207;
        result[4] += 2321603;
        result[5] += 2321603;
      }
    } else {
      if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 6607641;
        result[1] += 5663693;
        result[2] += 27374516;
        result[3] += 19350951;
        result[4] += 4719744;
        result[5] += 22182798;
      } else {
        result[0] += 675043;
        result[1] += 0;
        result[2] += 77714437;
        result[3] += 6666059;
        result[4] += 0;
        result[5] += 843804;
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428f0000))) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 2138572;
        result[2] += 0;
        result[3] += 1425715;
        result[4] += 75562910;
        result[5] += 6772147;
      } else {
        result[0] += 1334070;
        result[1] += 889380;
        result[2] += 296460;
        result[3] += 10672567;
        result[4] += 5336283;
        result[5] += 67370582;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 82304439;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3594906;
        result[5] += 0;
      } else {
        result[0] += 49784674;
        result[1] += 2909493;
        result[2] += 4572061;
        result[3] += 8405204;
        result[4] += 11083786;
        result[5] += 9144123;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cd0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 16251227;
        result[3] += 42369271;
        result[4] += 2321603;
        result[5] += 24957242;
      } else {
        result[0] += 3368601;
        result[1] += 3368601;
        result[2] += 58950531;
        result[3] += 18527309;
        result[4] += 1684300;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42910000))) ) ) {
        result[0] += 54252218;
        result[1] += 13563054;
        result[2] += 18084072;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 1056927;
        result[1] += 0;
        result[2] += 79653867;
        result[3] += 4227708;
        result[4] += 0;
        result[5] += 960842;
      }
    }
  }
  if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
        result[0] += 1234692;
        result[1] += 12346928;
        result[2] += 176384;
        result[3] += 1940231;
        result[4] += 63322105;
        result[5] += 6879003;
      } else {
        result[0] += 18556349;
        result[1] += 958309;
        result[2] += 1350344;
        result[3] += 12501578;
        result[4] += 7666473;
        result[5] += 44866291;
      }
    } else {
      if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 0;
        result[1] += 85300048;
        result[2] += 0;
        result[3] += 0;
        result[4] += 599297;
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
    if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 85899345;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 81960174;
        result[1] += 0;
        result[2] += 1906050;
        result[3] += 254140;
        result[4] += 1651910;
        result[5] += 127070;
      }
    } else {
      if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 1437645;
        result[1] += 0;
        result[2] += 39894675;
        result[3] += 26955861;
        result[4] += 359411;
        result[5] += 17251751;
      } else {
        result[0] += 1882256;
        result[1] += 0;
        result[2] += 76145834;
        result[3] += 6930126;
        result[4] += 0;
        result[5] += 941128;
      }
    }
  }
  if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 762420;
        result[1] += 7370062;
        result[2] += 0;
        result[3] += 0;
        result[4] += 76750303;
        result[5] += 1016560;
      } else {
        result[0] += 0;
        result[1] += 83262085;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2637260;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 66348405;
        result[1] += 6447650;
        result[2] += 0;
        result[3] += 0;
        result[4] += 9983459;
        result[5] += 3119830;
      } else {
        result[0] += 5453132;
        result[1] += 1700977;
        result[2] += 1150661;
        result[3] += 16309369;
        result[4] += 6803908;
        result[5] += 54481297;
      }
    }
  } else {
    if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
      if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42950000))) ) ) {
        result[0] += 83292385;
        result[1] += 0;
        result[2] += 1303480;
        result[3] += 912436;
        result[4] += 260696;
        result[5] += 130348;
      } else {
        result[0] += 28633115;
        result[1] += 0;
        result[2] += 29386618;
        result[3] += 15070060;
        result[4] += 3014012;
        result[5] += 9795539;
      }
    } else {
      if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 429496;
        result[1] += 0;
        result[2] += 44238163;
        result[3] += 31353261;
        result[4] += 858993;
        result[5] += 9019431;
      } else {
        result[0] += 739714;
        result[1] += 0;
        result[2] += 79149451;
        result[3] += 4438286;
        result[4] += 0;
        result[5] += 1571893;
      }
    }
  }
  if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 338186;
        result[1] += 1014559;
        result[2] += 0;
        result[3] += 1690932;
        result[4] += 76768313;
        result[5] += 6087355;
      } else {
        result[0] += 2199023;
        result[1] += 1236950;
        result[2] += 824633;
        result[3] += 12232066;
        result[4] += 5703716;
        result[5] += 63702954;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 442780;
        result[1] += 68483327;
        result[2] += 0;
        result[3] += 295186;
        result[4] += 16678051;
        result[5] += 0;
      } else {
        result[0] += 62921692;
        result[1] += 1629222;
        result[2] += 3707885;
        result[3] += 5730368;
        result[4] += 5561828;
        result[5] += 6348349;
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 0;
        result[1] += 1847297;
        result[2] += 7851015;
        result[3] += 41564199;
        result[4] += 3694595;
        result[5] += 30942237;
      } else {
        result[0] += 3158064;
        result[1] += 0;
        result[2] += 51160639;
        result[3] += 13895482;
        result[4] += 5052902;
        result[5] += 12632256;
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 1209849;
        result[1] += 0;
        result[2] += 59282647;
        result[3] += 13913274;
        result[4] += 1209849;
        result[5] += 10283724;
      } else {
        result[0] += 229984;
        result[1] += 0;
        result[2] += 81644625;
        result[3] += 3104795;
        result[4] += 0;
        result[5] += 919939;
      }
    }
  }
  if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 613566;
        result[1] += 4601750;
        result[2] += 0;
        result[3] += 0;
        result[4] += 78229761;
        result[5] += 2454267;
      } else {
        result[0] += 3472666;
        result[1] += 1113874;
        result[2] += 589698;
        result[3] += 16183934;
        result[4] += 5241760;
        result[5] += 59297412;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 187553;
        result[1] += 78397219;
        result[2] += 0;
        result[3] += 187553;
        result[4] += 7127019;
        result[5] += 0;
      } else {
        result[0] += 53119246;
        result[1] += 2219754;
        result[2] += 6039797;
        result[3] += 6865753;
        result[4] += 9911462;
        result[5] += 7743330;
      }
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 1753047;
        result[1] += 1168698;
        result[2] += 22205273;
        result[3] += 33892258;
        result[4] += 2921746;
        result[5] += 23958320;
      } else {
        result[0] += 2526451;
        result[1] += 0;
        result[2] += 70740637;
        result[3] += 10105805;
        result[4] += 0;
        result[5] += 2526451;
      }
    } else {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 18407002;
        result[1] += 4601750;
        result[2] += 41415756;
        result[3] += 4601750;
        result[4] += 0;
        result[5] += 16873085;
      } else {
        result[0] += 686410;
        result[1] += 0;
        result[2] += 79133301;
        result[3] += 5589341;
        result[4] += 0;
        result[5] += 490293;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b30000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
        result[0] += 2153465;
        result[1] += 4067657;
        result[2] += 239273;
        result[3] += 1914191;
        result[4] += 69150169;
        result[5] += 8374588;
      } else {
        result[0] += 6667661;
        result[1] += 354662;
        result[2] += 1205853;
        result[3] += 8015380;
        result[4] += 6100201;
        result[5] += 63555585;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 84978173;
        result[2] += 0;
        result[3] += 0;
        result[4] += 921172;
        result[5] += 0;
      } else {
        result[0] += 49049915;
        result[1] += 2727750;
        result[2] += 5802669;
        result[3] += 12498057;
        result[4] += 6744983;
        result[5] += 9075970;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x425a0000))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 29205777;
        result[3] += 24051816;
        result[4] += 572662;
        result[5] += 32069089;
      }
    } else {
      if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 3781732;
        result[1] += 0;
        result[2] += 67530932;
        result[3] += 12155567;
        result[4] += 0;
        result[5] += 2431113;
      } else {
        result[0] += 643923;
        result[1] += 0;
        result[2] += 83194868;
        result[3] += 1931769;
        result[4] += 0;
        result[5] += 128784;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 673720;
        result[2] += 0;
        result[3] += 2358021;
        result[4] += 76467260;
        result[5] += 6400343;
      } else {
        result[0] += 3796656;
        result[1] += 203392;
        result[2] += 67797;
        result[3] += 12745917;
        result[4] += 4610225;
        result[5] += 64475357;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        result[0] += 182764;
        result[1] += 81512996;
        result[2] += 0;
        result[3] += 182764;
        result[4] += 3838055;
        result[5] += 182764;
      } else {
        result[0] += 51520293;
        result[1] += 2993681;
        result[2] += 7580774;
        result[3] += 8739618;
        result[4] += 8932759;
        result[5] += 6132218;
      }
    }
  } else {
    if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 15339168;
        result[3] += 3067833;
        result[4] += 3067833;
        result[5] += 64424509;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 23787511;
        result[3] += 40967380;
        result[4] += 0;
        result[5] += 21144454;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        result[0] += 10737418;
        result[1] += 57266230;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 17895697;
      } else {
        result[0] += 824194;
        result[1] += 0;
        result[2] += 78939484;
        result[3] += 4670433;
        result[4] += 0;
        result[5] += 1465234;
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 6419524;
        result[2] += 0;
        result[3] += 611383;
        result[4] += 75200139;
        result[5] += 3668299;
      } else {
        result[0] += 2896277;
        result[1] += 1059613;
        result[2] += 1483459;
        result[3] += 11443827;
        result[4] += 5863195;
        result[5] += 63152973;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 0;
        result[1] += 77863024;
        result[2] += 0;
        result[3] += 0;
        result[4] += 8036321;
        result[5] += 0;
      } else {
        result[0] += 55928551;
        result[1] += 1473140;
        result[2] += 5130593;
        result[3] += 7314905;
        result[4] += 8026077;
        result[5] += 8026077;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 3506095;
        result[1] += 10518287;
        result[2] += 1753047;
        result[3] += 3506095;
        result[4] += 15777430;
        result[5] += 50838388;
      } else {
        result[0] += 2240852;
        result[1] += 2987803;
        result[2] += 34359738;
        result[3] += 37347541;
        result[4] += 0;
        result[5] += 8963410;
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 2334221;
        result[1] += 0;
        result[2] += 63490820;
        result[3] += 17740082;
        result[4] += 0;
        result[5] += 2334221;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 82926315;
        result[3] += 2548311;
        result[4] += 0;
        result[5] += 424718;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 1082764;
        result[1] += 0;
        result[2] += 0;
        result[3] += 360921;
        result[4] += 81929208;
        result[5] += 2526451;
      } else {
        result[0] += 3189160;
        result[1] += 1178602;
        result[2] += 346647;
        result[3] += 12895301;
        result[4] += 4021115;
        result[5] += 64268517;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 81631055;
        result[2] += 0;
        result[3] += 0;
        result[4] += 4268290;
        result[5] += 0;
      } else {
        result[0] += 53033095;
        result[1] += 2140349;
        result[2] += 5469781;
        result[3] += 7467440;
        result[4] += 10844435;
        result[5] += 6944243;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 1263225;
        result[2] += 22738062;
        result[3] += 46739349;
        result[4] += 0;
        result[5] += 15158708;
      } else {
        result[0] += 0;
        result[1] += 1101273;
        result[2] += 44050946;
        result[3] += 7708915;
        result[4] += 4405094;
        result[5] += 28633115;
      }
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 64424509;
        result[3] += 16980103;
        result[4] += 0;
        result[5] += 4494733;
      } else {
        result[0] += 810371;
        result[1] += 0;
        result[2] += 81847489;
        result[3] += 2431113;
        result[4] += 0;
        result[5] += 810371;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 11549491;
        result[1] += 240614;
        result[2] += 481228;
        result[3] += 0;
        result[4] += 64484663;
        result[5] += 9143347;
      } else {
        result[0] += 0;
        result[1] += 564662;
        result[2] += 211748;
        result[3] += 14963567;
        result[4] += 4376137;
        result[5] += 65783229;
      }
    } else {
      if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 53377182;
        result[1] += 5590506;
        result[2] += 5347440;
        result[3] += 7826708;
        result[4] += 8993423;
        result[5] += 4764083;
      } else {
        result[0] += 0;
        result[1] += 85450785;
        result[2] += 0;
        result[3] += 0;
        result[4] += 448560;
        result[5] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6135667;
        result[3] += 18407002;
        result[4] += 0;
        result[5] += 61356675;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 25141271;
        result[3] += 56567861;
        result[4] += 0;
        result[5] += 4190211;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 1209849;
        result[1] += 8468949;
        result[2] += 36295498;
        result[3] += 15728049;
        result[4] += 6049249;
        result[5] += 18147749;
      } else {
        result[0] += 446462;
        result[1] += 0;
        result[2] += 79916751;
        result[3] += 4821792;
        result[4] += 0;
        result[5] += 714339;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 12793519;
        result[1] += 3655291;
        result[2] += 0;
        result[3] += 0;
        result[4] += 63282230;
        result[5] += 6168304;
      } else {
        result[0] += 570286;
        result[1] += 499000;
        result[2] += 499000;
        result[3] += 15825439;
        result[4] += 5845432;
        result[5] += 62660186;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        result[0] += 185527;
        result[1] += 81446680;
        result[2] += 0;
        result[3] += 1113166;
        result[4] += 2782916;
        result[5] += 371055;
      } else {
        result[0] += 53680688;
        result[1] += 3226987;
        result[2] += 3995318;
        result[3] += 7529638;
        result[4] += 8349191;
        result[5] += 9117521;
      }
    }
  } else {
    if ( UNLIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429f0000))) ) ) {
      if ( UNLIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 21474836;
        result[3] += 58108381;
        result[4] += 0;
        result[5] += 6316128;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 60011871;
        result[3] += 7060220;
        result[4] += 0;
        result[5] += 18827253;
      }
    } else {
      if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 1291719;
        result[1] += 0;
        result[2] += 57481517;
        result[3] += 21313371;
        result[4] += 645859;
        result[5] += 5166877;
      } else {
        result[0] += 723580;
        result[1] += 0;
        result[2] += 81661231;
        result[3] += 3411165;
        result[4] += 0;
        result[5] += 103368;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 343597;
        result[1] += 2405181;
        result[2] += 0;
        result[3] += 2061584;
        result[4] += 74560632;
        result[5] += 6528350;
      } else {
        result[0] += 2996488;
        result[1] += 399531;
        result[2] += 66588;
        result[3] += 13251139;
        result[4] += 6658864;
        result[5] += 62526733;
      }
    } else {
      if ( LIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cd0000))) ) ) {
        result[0] += 52780320;
        result[1] += 4502586;
        result[2] += 5152960;
        result[3] += 8054627;
        result[4] += 9755604;
        result[5] += 5653247;
      } else {
        result[0] += 1372820;
        result[1] += 83938173;
        result[2] += 0;
        result[3] += 392234;
        result[4] += 196117;
        result[5] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a50000))) ) ) {
      if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 27269633;
        result[3] += 28633115;
        result[4] += 681740;
        result[5] += 29314856;
      } else {
        result[0] += 4668442;
        result[1] += 5602131;
        result[2] += 67225575;
        result[3] += 8403196;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 1097755;
        result[1] += 0;
        result[2] += 74098477;
        result[3] += 9330919;
        result[4] += 0;
        result[5] += 1372194;
      } else {
        result[0] += 143165;
        result[1] += 0;
        result[2] += 83179199;
        result[3] += 2004318;
        result[4] += 0;
        result[5] += 572662;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 856139;
        result[1] += 5992977;
        result[2] += 0;
        result[3] += 0;
        result[4] += 77908709;
        result[5] += 1141519;
      } else {
        result[0] += 3087007;
        result[1] += 1476395;
        result[2] += 1140850;
        result[3] += 13220446;
        result[4] += 5435817;
        result[5] += 61538828;
      }
    } else {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42870000))) ) ) {
        result[0] += 768330;
        result[1] += 65769087;
        result[2] += 0;
        result[3] += 1843993;
        result[4] += 16749604;
        result[5] += 768330;
      } else {
        result[0] += 61919111;
        result[1] += 1372003;
        result[2] += 2863311;
        result[3] += 5249404;
        result[4] += 7217931;
        result[5] += 7277583;
      }
    }
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 913822;
        result[2] += 12336608;
        result[3] += 53915546;
        result[4] += 2284557;
        result[5] += 16448810;
      } else {
        result[0] += 0;
        result[1] += 1507006;
        result[2] += 51238206;
        result[3] += 9795539;
        result[4] += 3014012;
        result[5] += 20344581;
      }
    } else {
      if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 5368709;
        result[2] += 48989470;
        result[3] += 24159191;
        result[4] += 0;
        result[5] += 7381975;
      } else {
        result[0] += 2210644;
        result[1] += 210537;
        result[2] += 78214723;
        result[3] += 3684408;
        result[4] += 315806;
        result[5] += 1263225;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( UNLIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        result[0] += 21911119;
        result[1] += 2326844;
        result[2] += 387807;
        result[3] += 775614;
        result[4] += 53905232;
        result[5] += 6592726;
      } else {
        result[0] += 502335;
        result[1] += 143524;
        result[2] += 0;
        result[3] += 9831420;
        result[4] += 8467938;
        result[5] += 66954126;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 309547;
        result[1] += 75993835;
        result[2] += 0;
        result[3] += 0;
        result[4] += 9595962;
        result[5] += 0;
      } else {
        result[0] += 60631097;
        result[1] += 1333249;
        result[2] += 2920450;
        result[3] += 11046922;
        result[4] += 3364867;
        result[5] += 6602758;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( LIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 1122867;
        result[2] += 14035840;
        result[3] += 55581929;
        result[4] += 0;
        result[5] += 15158708;
      } else {
        result[0] += 0;
        result[1] += 8396176;
        result[2] += 32292987;
        result[3] += 10979615;
        result[4] += 5166877;
        result[5] += 29063688;
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 4174137;
        result[1] += 0;
        result[2] += 63271129;
        result[3] += 14060250;
        result[4] += 0;
        result[5] += 4393828;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 82183234;
        result[3] += 3430256;
        result[4] += 0;
        result[5] += 285854;
      }
    }
  }
  if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        result[0] += 34359738;
        result[1] += 6727057;
        result[2] += 0;
        result[3] += 931438;
        result[4] += 38913438;
        result[5] += 4967673;
      } else {
        result[0] += 4709618;
        result[1] += 1638128;
        result[2] += 819064;
        result[3] += 14947919;
        result[4] += 9419236;
        result[5] += 54365378;
      }
    } else {
      if ( LIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a00000))) ) ) {
        result[0] += 402338;
        result[1] += 85295837;
        result[2] += 0;
        result[3] += 0;
        result[4] += 201169;
        result[5] += 0;
      } else {
        result[0] += 10737418;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 10737418;
        result[4] += 21474836;
        result[5] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 18572831;
        result[1] += 0;
        result[2] += 17412029;
        result[3] += 22055237;
        result[4] += 2321603;
        result[5] += 25537643;
      } else {
        result[0] += 82427366;
        result[1] += 0;
        result[2] += 1800285;
        result[3] += 642959;
        result[4] += 1028734;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 1034931;
        result[1] += 0;
        result[2] += 41397275;
        result[3] += 31047956;
        result[4] += 0;
        result[5] += 12419182;
      } else {
        result[0] += 1850139;
        result[1] += 0;
        result[2] += 77441564;
        result[3] += 5638521;
        result[4] += 0;
        result[5] += 969120;
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 17870313;
        result[1] += 1015358;
        result[2] += 203071;
        result[3] += 1421502;
        result[4] += 57875445;
        result[5] += 7513654;
      } else {
        result[0] += 83235;
        result[1] += 416179;
        result[2] += 83235;
        result[3] += 7990636;
        result[4] += 7324750;
        result[5] += 70001308;
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
        result[0] += 800926;
        result[1] += 84097261;
        result[2] += 0;
        result[3] += 600694;
        result[4] += 400463;
        result[5] += 0;
      } else {
        result[0] += 49532868;
        result[1] += 3995318;
        result[2] += 5584365;
        result[3] += 11985955;
        result[4] += 6129181;
        result[5] += 8671657;
      }
    }
  } else {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 0;
        result[1] += 13929623;
        result[2] += 6964811;
        result[3] += 0;
        result[4] += 6964811;
        result[5] += 58040098;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 35450523;
        result[3] += 42267932;
        result[4] += 0;
        result[5] += 8180890;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 2863311;
        result[1] += 0;
        result[2] += 34359738;
        result[3] += 0;
        result[4] += 11453246;
        result[5] += 37223049;
      } else {
        result[0] += 300697;
        result[1] += 0;
        result[2] += 80085854;
        result[3] += 5212095;
        result[4] += 0;
        result[5] += 300697;
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( UNLIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 306783;
        result[1] += 4294967;
        result[2] += 0;
        result[3] += 613566;
        result[4] += 77309411;
        result[5] += 3374617;
      } else {
        result[0] += 3173791;
        result[1] += 965936;
        result[2] += 1517900;
        result[3] += 11384250;
        result[4] += 4346713;
        result[5] += 64510753;
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
        result[0] += 1579758;
        result[1] += 83134769;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1184818;
        result[5] += 0;
      } else {
        result[0] += 56537188;
        result[1] += 4811675;
        result[2] += 3171331;
        result[3] += 6287985;
        result[4] += 10115454;
        result[5] += 4975710;
      }
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4706813;
        result[3] += 10590330;
        result[4] += 5883516;
        result[5] += 64718685;
      } else {
        result[0] += 1724886;
        result[1] += 4139727;
        result[2] += 31392933;
        result[3] += 35187683;
        result[4] += 2759818;
        result[5] += 10694296;
      }
    } else {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 22408525;
        result[1] += 0;
        result[2] += 26143279;
        result[3] += 0;
        result[4] += 14939016;
        result[5] += 22408525;
      } else {
        result[0] += 632942;
        result[1] += 0;
        result[2] += 78484876;
        result[3] += 6058164;
        result[4] += 0;
        result[5] += 723362;
      }
    }
  }
  if ( UNLIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
    if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 1738853;
        result[1] += 1391082;
        result[2] += 0;
        result[3] += 0;
        result[4] += 82421639;
        result[5] += 347770;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 57786832;
        result[5] += 28112513;
      }
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 118645;
        result[3] += 2135619;
        result[4] += 2491555;
        result[5] += 81153525;
      } else {
        result[0] += 11703217;
        result[1] += 4772185;
        result[2] += 3067833;
        result[3] += 24656293;
        result[4] += 7271902;
        result[5] += 34427912;
      }
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 165828;
        result[1] += 77442074;
        result[2] += 0;
        result[3] += 0;
        result[4] += 8291442;
        result[5] += 0;
      } else {
        result[0] += 61156252;
        result[1] += 2295750;
        result[2] += 1913125;
        result[3] += 4463960;
        result[4] += 10203337;
        result[5] += 5866918;
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 5052902;
        result[1] += 0;
        result[2] += 38979535;
        result[3] += 28512808;
        result[4] += 1082764;
        result[5] += 12271335;
      } else {
        result[0] += 1186707;
        result[1] += 91285;
        result[2] += 76314402;
        result[3] += 7485384;
        result[4] += 0;
        result[5] += 821566;
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a50000))) ) ) {
    if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 299300;
        result[1] += 4190211;
        result[2] += 0;
        result[3] += 897902;
        result[4] += 76022417;
        result[5] += 4489512;
      } else {
        result[0] += 5734118;
        result[1] += 1236770;
        result[2] += 562168;
        result[3] += 17314789;
        result[4] += 7589274;
        result[5] += 53462223;
      }
    } else {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 223696;
        result[1] += 84333472;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1342177;
        result[5] += 0;
      } else {
        result[0] += 51849636;
        result[1] += 4650431;
        result[2] += 6842013;
        result[3] += 6521294;
        result[4] += 8766330;
        result[5] += 7269639;
      }
    }
  } else {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 17179869;
        result[2] += 8589934;
        result[3] += 0;
        result[4] += 0;
        result[5] += 60129542;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 20734324;
        result[3] += 44430696;
        result[4] += 0;
        result[5] += 20734324;
      }
    } else {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 15618062;
        result[1] += 4462303;
        result[2] += 37929581;
        result[3] += 20080366;
        result[4] += 0;
        result[5] += 7809031;
      } else {
        result[0] += 1537348;
        result[1] += 0;
        result[2] += 79557783;
        result[3] += 4515961;
        result[4] += 0;
        result[5] += 288252;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 17313046;
        result[1] += 443924;
        result[2] += 887848;
        result[3] += 0;
        result[4] += 58598003;
        result[5] += 8656523;
      } else {
        result[0] += 206820;
        result[1] += 413640;
        result[2] += 68940;
        result[3] += 17028200;
        result[4] += 5032626;
        result[5] += 63149117;
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42520000))) ) ) {
        result[0] += 724888;
        result[1] += 80643900;
        result[2] += 362444;
        result[3] += 1087333;
        result[4] += 3080778;
        result[5] += 0;
      } else {
        result[0] += 51813858;
        result[1] += 4211712;
        result[2] += 7346010;
        result[3] += 8962132;
        result[4] += 8031637;
        result[5] += 5533994;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
      if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 17179869;
        result[3] += 10307921;
        result[4] += 3435973;
        result[5] += 54975581;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 58662967;
        result[3] += 23046165;
        result[4] += 0;
        result[5] += 4190211;
      }
    } else {
      if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 54919253;
        result[3] += 23939161;
        result[4] += 0;
        result[5] += 7040929;
      } else {
        result[0] += 512525;
        result[1] += 205010;
        result[2] += 81286612;
        result[3] += 3485176;
        result[4] += 0;
        result[5] += 410020;
      }
    }
  }
  if ( UNLIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
      if ( LIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 370255;
        result[1] += 740511;
        result[2] += 0;
        result[3] += 0;
        result[4] += 83307555;
        result[5] += 1481023;
      } else {
        result[0] += 33796463;
        result[1] += 9153208;
        result[2] += 0;
        result[3] += 0;
        result[4] += 19714603;
        result[5] += 23235068;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 304968;
        result[3] += 3761273;
        result[4] += 3252992;
        result[5] += 78580111;
      } else {
        result[0] += 0;
        result[1] += 2356341;
        result[2] += 2998979;
        result[3] += 36416181;
        result[4] += 4712682;
        result[5] += 39415161;
      }
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
      if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0;
        result[1] += 17179869;
        result[2] += 0;
        result[3] += 0;
        result[4] += 68719476;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 85298651;
        result[2] += 0;
        result[3] += 0;
        result[4] += 600694;
        result[5] += 0;
      }
    } else {
      if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 55668441;
        result[1] += 3050325;
        result[2] += 1743043;
        result[3] += 6373001;
        result[4] += 13290704;
        result[5] += 5773830;
      } else {
        result[0] += 1503238;
        result[1] += 71582;
        result[2] += 69435304;
        result[3] += 10379504;
        result[4] += 429496;
        result[5] += 4080218;
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        result[0] += 907387;
        result[1] += 3024624;
        result[2] += 0;
        result[3] += 604924;
        result[4] += 79547633;
        result[5] += 1814774;
      } else {
        result[0] += 2505977;
        result[1] += 1044157;
        result[2] += 626494;
        result[3] += 15244697;
        result[4] += 4663902;
        result[5] += 61814116;
      }
    } else {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42560000))) ) ) {
        result[0] += 746950;
        result[1] += 80110476;
        result[2] += 0;
        result[3] += 560213;
        result[4] += 4294967;
        result[5] += 186737;
      } else {
        result[0] += 51607897;
        result[1] += 3316953;
        result[2] += 5853447;
        result[3] += 6926579;
        result[4] += 10341091;
        result[5] += 7853375;
      }
    }
  } else {
    if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
      if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 59055800;
        result[2] += 0;
        result[3] += 5368709;
        result[4] += 21474836;
        result[5] += 0;
      } else {
        result[0] += 5003845;
        result[1] += 833974;
        result[2] += 25019226;
        result[3] += 21683330;
        result[4] += 1667948;
        result[5] += 31691020;
      }
    } else {
      if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 34001824;
        result[3] += 30422685;
        result[4] += 0;
        result[5] += 21474836;
      } else {
        result[0] += 840319;
        result[1] += 0;
        result[2] += 79270157;
        result[3] += 4668442;
        result[4] += 0;
        result[5] += 1120426;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b20000))) ) ) {
        result[0] += 685367;
        result[1] += 7082126;
        result[2] += 0;
        result[3] += 0;
        result[4] += 76532661;
        result[5] += 1599189;
      } else {
        result[0] += 0;
        result[1] += 84703531;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1195814;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 5753635;
        result[1] += 810371;
        result[2] += 486222;
        result[3] += 5186375;
        result[4] += 4619115;
        result[5] += 69043625;
      } else {
        result[0] += 46720415;
        result[1] += 2391202;
        result[2] += 4736420;
        result[3] += 13335551;
        result[4] += 6161944;
        result[5] += 12553812;
      }
    }
  } else {
    if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
      if ( UNLIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 35645306;
        result[3] += 40904450;
        result[4] += 0;
        result[5] += 9349588;
      } else {
        result[0] += 8312839;
        result[1] += 0;
        result[2] += 70382044;
        result[3] += 4987703;
        result[4] += 1108378;
        result[5] += 1108378;
      }
    } else {
      if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 54084773;
        result[3] += 25451658;
        result[4] += 0;
        result[5] += 6362914;
      } else {
        result[0] += 225457;
        result[1] += 0;
        result[2] += 82292024;
        result[3] += 2705491;
        result[4] += 0;
        result[5] += 676372;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 318145;
        result[1] += 5726623;
        result[2] += 0;
        result[3] += 1272582;
        result[4] += 73173516;
        result[5] += 5408477;
      } else {
        result[0] += 3079789;
        result[1] += 401711;
        result[2] += 535615;
        result[3] += 13992956;
        result[4] += 5490059;
        result[5] += 62399213;
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cd0000))) ) ) {
        result[0] += 49590901;
        result[1] += 2849523;
        result[2] += 6710168;
        result[3] += 9421811;
        result[4] += 10065252;
        result[5] += 7261688;
      } else {
        result[0] += 2717010;
        result[1] += 83182334;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 20211610;
        result[3] += 27790964;
        result[4] += 0;
        result[5] += 37896770;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 63294254;
        result[3] += 11302545;
        result[4] += 0;
        result[5] += 11302545;
      }
    } else {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 2962046;
        result[1] += 23696371;
        result[2] += 32582510;
        result[3] += 11848185;
        result[4] += 0;
        result[5] += 14810232;
      } else {
        result[0] += 192599;
        result[1] += 0;
        result[2] += 81180659;
        result[3] += 3851988;
        result[4] += 0;
        result[5] += 674098;
      }
    }
  }
  if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 1272582;
        result[2] += 0;
        result[3] += 954437;
        result[4] += 79218285;
        result[5] += 4454040;
      } else {
        result[0] += 0;
        result[1] += 35370318;
        result[2] += 0;
        result[3] += 25264513;
        result[4] += 0;
        result[5] += 25264513;
      }
    } else {
      if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 2689777;
        result[1] += 86767;
        result[2] += 260301;
        result[3] += 4425117;
        result[4] += 7288429;
        result[5] += 71148953;
      } else {
        result[0] += 4976536;
        result[1] += 1081855;
        result[2] += 1730969;
        result[3] += 40028662;
        result[4] += 3894680;
        result[5] += 34186641;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0;
        result[1] += 26500862;
        result[2] += 0;
        result[3] += 0;
        result[4] += 59398483;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 85336686;
        result[2] += 0;
        result[3] += 0;
        result[4] += 562659;
        result[5] += 0;
      }
    } else {
      if ( LIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
        result[0] += 65760576;
        result[1] += 2150742;
        result[2] += 2737308;
        result[3] += 4236310;
        result[4] += 7169141;
        result[5] += 3845266;
      } else {
        result[0] += 2613162;
        result[1] += 469029;
        result[2] += 65865099;
        result[3] += 10921679;
        result[4] += 871054;
        result[5] += 5159321;
      }
    }
  }
  if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 1974697;
        result[2] += 0;
        result[3] += 1645581;
        result[4] += 75696741;
        result[5] += 6582325;
      } else {
        result[0] += 3006818;
        result[1] += 341683;
        result[2] += 0;
        result[3] += 14009042;
        result[4] += 4510228;
        result[5] += 64031572;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
        result[0] += 0;
        result[1] += 78275143;
        result[2] += 0;
        result[3] += 508280;
        result[4] += 6946495;
        result[5] += 169426;
      } else {
        result[0] += 51184570;
        result[1] += 3599685;
        result[2] += 7297992;
        result[3] += 7939032;
        result[4] += 8234897;
        result[5] += 7643167;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( UNLIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5052902;
        result[3] += 0;
        result[4] += 0;
        result[5] += 80846443;
      } else {
        result[0] += 572662;
        result[1] += 1145324;
        result[2] += 28060452;
        result[3] += 26915128;
        result[4] += 9162596;
        result[5] += 20043180;
      }
    } else {
      if ( UNLIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 66698315;
        result[3] += 17179869;
        result[4] += 0;
        result[5] += 2021161;
      } else {
        result[0] += 365529;
        result[1] += 0;
        result[2] += 82365897;
        result[3] += 2680546;
        result[4] += 121843;
        result[5] += 365529;
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 23915158;
        result[1] += 2928386;
        result[2] += 0;
        result[3] += 1464193;
        result[4] += 50758704;
        result[5] += 6832902;
      } else {
        result[0] += 732475;
        result[1] += 466120;
        result[2] += 133177;
        result[3] += 10587593;
        result[4] += 6126154;
        result[5] += 67853824;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
        result[0] += 329116;
        result[1] += 77671439;
        result[2] += 0;
        result[3] += 0;
        result[4] += 7569674;
        result[5] += 329116;
      } else {
        result[0] += 54194788;
        result[1] += 788067;
        result[2] += 8062535;
        result[3] += 11881631;
        result[4] += 4425301;
        result[5] += 6547021;
      }
    }
  } else {
    if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 4521018;
        result[2] += 18988276;
        result[3] += 26221905;
        result[4] += 1808407;
        result[5] += 34359738;
      } else {
        result[0] += 1867377;
        result[1] += 6535819;
        result[2] += 64424509;
        result[3] += 4668442;
        result[4] += 933688;
        result[5] += 7469508;
      }
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 13215283;
        result[2] += 26430567;
        result[3] += 46253493;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 2075818;
        result[1] += 0;
        result[2] += 79671890;
        result[3] += 3855091;
        result[4] += 0;
        result[5] += 296545;
      }
    }
  }
  if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 1982292;
        result[1] += 330382;
        result[2] += 0;
        result[3] += 660764;
        result[4] += 76648647;
        result[5] += 6277259;
      } else {
        result[0] += 3377692;
        result[1] += 1589502;
        result[2] += 1258355;
        result[3] += 15895021;
        result[4] += 3576379;
        result[5] += 60202394;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 83615723;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2283622;
        result[5] += 0;
      } else {
        result[0] += 54755744;
        result[1] += 2493523;
        result[2] += 5445041;
        result[3] += 6666359;
        result[4] += 11246300;
        result[5] += 5292376;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 3241484;
        result[1] += 6482969;
        result[2] += 6482969;
        result[3] += 16207423;
        result[4] += 17828166;
        result[5] += 35656332;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 46810317;
        result[3] += 27989674;
        result[4] += 0;
        result[5] += 11099353;
      }
    } else {
      if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 5726623;
        result[1] += 34359738;
        result[2] += 17179869;
        result[3] += 17179869;
        result[4] += 0;
        result[5] += 11453246;
      } else {
        result[0] += 609215;
        result[1] += 203071;
        result[2] += 78893370;
        result[3] += 4873721;
        result[4] += 0;
        result[5] += 1319966;
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 3247054;
        result[2] += 0;
        result[3] += 2361494;
        result[4] += 77043743;
        result[5] += 3247054;
      } else {
        result[0] += 4137495;
        result[1] += 247014;
        result[2] += 247014;
        result[3] += 12597747;
        result[4] += 4940293;
        result[5] += 63729780;
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42520000))) ) ) {
        result[0] += 1887897;
        result[1] += 80613232;
        result[2] += 0;
        result[3] += 943948;
        result[4] += 2454267;
        result[5] += 0;
      } else {
        result[0] += 54472755;
        result[1] += 3308062;
        result[2] += 5899377;
        result[3] += 6726392;
        result[4] += 10640933;
        result[5] += 4851824;
      }
    }
  } else {
    if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
      if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 1352745;
        result[1] += 2029118;
        result[2] += 18262065;
        result[3] += 35171385;
        result[4] += 3381864;
        result[5] += 25702166;
      } else {
        result[0] += 627002;
        result[1] += 3762015;
        result[2] += 62700252;
        result[3] += 16929068;
        result[4] += 0;
        result[5] += 1881007;
      }
    } else {
      if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 4197036;
        result[1] += 279802;
        result[2] += 70790014;
        result[3] += 8673875;
        result[4] += 0;
        result[5] += 1958617;
      } else {
        result[0] += 1380525;
        result[1] += 0;
        result[2] += 82678120;
        result[3] += 1533916;
        result[4] += 153391;
        result[5] += 153391;
      }
    }
  }
  if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42be0000))) ) ) {
        result[0] += 365529;
        result[1] += 1462116;
        result[2] += 0;
        result[3] += 1096587;
        result[4] += 79685350;
        result[5] += 3289762;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 8589934;
        result[4] += 0;
        result[5] += 77309411;
      }
    } else {
      if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 3113452;
        result[1] += 239496;
        result[2] += 0;
        result[3] += 5268918;
        result[4] += 6705896;
        result[5] += 70571581;
      } else {
        result[0] += 3080056;
        result[1] += 0;
        result[2] += 1368913;
        result[3] += 55441012;
        result[4] += 0;
        result[5] += 26009363;
      }
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 157324;
        result[1] += 74257310;
        result[2] += 0;
        result[3] += 0;
        result[4] += 11484711;
        result[5] += 0;
      } else {
        result[0] += 62598469;
        result[1] += 3138978;
        result[2] += 362189;
        result[3] += 6096861;
        result[4] += 9175474;
        result[5] += 4527372;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 2376661;
        result[1] += 1358092;
        result[2] += 24785186;
        result[3] += 35649926;
        result[4] += 1018569;
        result[5] += 20710909;
      } else {
        result[0] += 2080895;
        result[1] += 0;
        result[2] += 75744578;
        result[3] += 5660034;
        result[4] += 0;
        result[5] += 2413838;
      }
    }
  }
  if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 11512283;
        result[1] += 442780;
        result[2] += 0;
        result[3] += 1992510;
        result[4] += 61103658;
        result[5] += 10848113;
      } else {
        result[0] += 0;
        result[1] += 147213;
        result[2] += 147213;
        result[3] += 12660400;
        result[4] += 4563632;
        result[5] += 68380884;
      }
    } else {
      if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 350609;
        result[1] += 74855144;
        result[2] += 1577743;
        result[3] += 0;
        result[4] += 9115848;
        result[5] += 0;
      } else {
        result[0] += 54733698;
        result[1] += 3411165;
        result[2] += 6460540;
        result[3] += 7235805;
        result[4] += 7597595;
        result[5] += 6460540;
      }
    }
  } else {
    if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
      if ( UNLIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 8180890;
        result[2] += 4090445;
        result[3] += 16361780;
        result[4] += 10907853;
        result[5] += 46358377;
      } else {
        result[0] += 10191447;
        result[1] += 18926974;
        result[2] += 32030264;
        result[3] += 20382895;
        result[4] += 2911842;
        result[5] += 1455921;
      }
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 54709702;
        result[3] += 21986142;
        result[4] += 0;
        result[5] += 9203501;
      } else {
        result[0] += 414472;
        result[1] += 0;
        result[2] += 81236534;
        result[3] += 4144721;
        result[4] += 0;
        result[5] += 103618;
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 1197203;
        result[1] += 1496504;
        result[2] += 0;
        result[3] += 0;
        result[4] += 76920320;
        result[5] += 6285317;
      } else {
        result[0] += 2980029;
        result[1] += 298002;
        result[2] += 298002;
        result[3] += 13708134;
        result[4] += 4023039;
        result[5] += 64592136;
      }
    } else {
      if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 1111451;
        result[1] += 68751232;
        result[2] += 476336;
        result[3] += 158778;
        result[4] += 15242767;
        result[5] += 158778;
      } else {
        result[0] += 61187804;
        result[1] += 2533073;
        result[2] += 3152269;
        result[3] += 6754863;
        result[4] += 6585991;
        result[5] += 5685343;
      }
    }
  } else {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( UNLIKELY( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 11027618;
        result[3] += 47592880;
        result[4] += 580400;
        result[5] += 26698445;
      } else {
        result[0] += 0;
        result[1] += 2603010;
        result[2] += 49891034;
        result[3] += 18654908;
        result[4] += 1301505;
        result[5] += 13448887;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
        result[0] += 14316557;
        result[1] += 4294967;
        result[2] += 48676296;
        result[3] += 1431655;
        result[4] += 7158278;
        result[5] += 10021590;
      } else {
        result[0] += 564508;
        result[1] += 94084;
        result[2] += 80066093;
        result[3] += 4892405;
        result[4] += 0;
        result[5] += 282254;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 330382;
        result[1] += 5616495;
        result[2] += 0;
        result[3] += 0;
        result[4] += 78630939;
        result[5] += 1321528;
      } else {
        result[0] += 4393325;
        result[1] += 1049152;
        result[2] += 852436;
        result[3] += 15540568;
        result[4] += 3999893;
        result[5] += 60063970;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        result[0] += 180460;
        result[1] += 81748747;
        result[2] += 0;
        result[3] += 180460;
        result[4] += 3789677;
        result[5] += 0;
      } else {
        result[0] += 54709400;
        result[1] += 3047877;
        result[2] += 5282987;
        result[3] += 7111714;
        result[4] += 9550015;
        result[5] += 6197350;
      }
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7469508;
        result[3] += 22408525;
        result[4] += 0;
        result[5] += 56021312;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 57735625;
        result[3] += 14081859;
        result[4] += 0;
        result[5] += 14081859;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 4880644;
        result[2] += 43925801;
        result[3] += 25379352;
        result[4] += 3904515;
        result[5] += 7809031;
      } else {
        result[0] += 768674;
        result[1] += 0;
        result[2] += 80326457;
        result[3] += 4131624;
        result[4] += 0;
        result[5] += 672589;
      }
    }
  }
  if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428d0000))) ) ) {
      if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 4060696;
        result[1] += 312361;
        result[2] += 0;
        result[3] += 0;
        result[4] += 71218366;
        result[5] += 10307921;
      } else {
        result[0] += 244495;
        result[1] += 0;
        result[2] += 407492;
        result[3] += 11328281;
        result[4] += 4645410;
        result[5] += 69273666;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 82743859;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3155486;
        result[5] += 0;
      } else {
        result[0] += 48219432;
        result[1] += 3256847;
        result[2] += 5020972;
        result[3] += 9996711;
        result[4] += 11037093;
        result[5] += 8368288;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c60000))) ) ) {
      if ( LIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 0;
        result[1] += 1620742;
        result[2] += 18638537;
        result[3] += 32414847;
        result[4] += 3241484;
        result[5] += 29983733;
      } else {
        result[0] += 2202547;
        result[1] += 0;
        result[2] += 57266230;
        result[3] += 0;
        result[4] += 17620378;
        result[5] += 8810189;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 4772185;
        result[1] += 14316557;
        result[2] += 30223843;
        result[3] += 28633115;
        result[4] += 3181457;
        result[5] += 4772185;
      } else {
        result[0] += 472493;
        result[1] += 0;
        result[2] += 79756928;
        result[3] += 4819435;
        result[4] += 0;
        result[5] += 850488;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 11770464;
        result[1] += 4006966;
        result[2] += 0;
        result[3] += 0;
        result[4] += 60354933;
        result[5] += 9766981;
      } else {
        result[0] += 0;
        result[1] += 699506;
        result[2] += 559604;
        result[3] += 14829528;
        result[4] += 4756641;
        result[5] += 65054064;
      }
    } else {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 465158;
        result[1] += 71169313;
        result[2] += 0;
        result[3] += 1860635;
        result[4] += 11784025;
        result[5] += 620211;
      } else {
        result[0] += 56174950;
        result[1] += 1870766;
        result[2] += 5664264;
        result[3] += 7483064;
        result[4] += 7067338;
        result[5] += 7638961;
      }
    }
  } else {
    if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c10000))) ) ) {
      if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 1881007;
        result[1] += 2508010;
        result[2] += 28842116;
        result[3] += 33858136;
        result[4] += 1881007;
        result[5] += 16929068;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 72233540;
        result[3] += 0;
        result[4] += 0;
        result[5] += 13665805;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 40086361;
        result[3] += 22906492;
        result[4] += 5726623;
        result[5] += 17179869;
      } else {
        result[0] += 410510;
        result[1] += 0;
        result[2] += 80767963;
        result[3] += 4310361;
        result[4] += 0;
        result[5] += 410510;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 594459;
        result[1] += 9511346;
        result[2] += 0;
        result[3] += 1188918;
        result[4] += 68362801;
        result[5] += 6241820;
      } else {
        result[0] += 3017705;
        result[1] += 421075;
        result[2] += 280716;
        result[3] += 12702435;
        result[4] += 4702006;
        result[5] += 64775405;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 182376;
        result[1] += 81522309;
        result[2] += 0;
        result[3] += 0;
        result[4] += 4194660;
        result[5] += 0;
      } else {
        result[0] += 52219037;
        result[1] += 2669188;
        result[2] += 4561886;
        result[3] += 7667851;
        result[4] += 10482632;
        result[5] += 8298750;
      }
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( LIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 20080366;
        result[3] += 51316492;
        result[4] += 0;
        result[5] += 14502486;
      } else {
        result[0] += 12884901;
        result[1] += 0;
        result[2] += 55834574;
        result[3] += 4294967;
        result[4] += 2147483;
        result[5] += 10737418;
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 2709758;
        result[1] += 0;
        result[2] += 62866398;
        result[3] += 17613430;
        result[4] += 0;
        result[5] += 2709758;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 84014407;
        result[3] += 1481023;
        result[4] += 0;
        result[5] += 403915;
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b30000))) ) ) {
      if ( UNLIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        result[0] += 17420147;
        result[1] += 1802084;
        result[2] += 0;
        result[3] += 400463;
        result[4] += 56064841;
        result[5] += 10211810;
      } else {
        result[0] += 564596;
        result[1] += 806566;
        result[2] += 403283;
        result[3] += 8468949;
        result[4] += 6452533;
        result[5] += 69203416;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
        result[0] += 0;
        result[1] += 83882929;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2016416;
        result[5] += 0;
      } else {
        result[0] += 48444917;
        result[1] += 2313787;
        result[2] += 6121895;
        result[3] += 12147382;
        result[4] += 7037769;
        result[5] += 9833595;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42910000))) ) ) {
        result[0] += 0;
        result[1] += 7809031;
        result[2] += 0;
        result[3] += 0;
        result[4] += 7809031;
        result[5] += 70281283;
      } else {
        result[0] += 557787;
        result[1] += 0;
        result[2] += 37929581;
        result[3] += 40718521;
        result[4] += 0;
        result[5] += 6693455;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42860000))) ) ) {
        result[0] += 0;
        result[1] += 70281283;
        result[2] += 0;
        result[3] += 0;
        result[4] += 15618062;
        result[5] += 0;
      } else {
        result[0] += 185527;
        result[1] += 0;
        result[2] += 78849291;
        result[3] += 5658596;
        result[4] += 0;
        result[5] += 1205930;
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 82042640;
        result[5] += 3856705;
      } else {
        result[0] += 4134906;
        result[1] += 2000761;
        result[2] += 1267148;
        result[3] += 14072020;
        result[4] += 4268290;
        result[5] += 60156218;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 173534;
        result[1] += 70801885;
        result[2] += 0;
        result[3] += 0;
        result[4] += 14576858;
        result[5] += 347068;
      } else {
        result[0] += 56032188;
        result[1] += 3051753;
        result[2] += 5453132;
        result[3] += 8054627;
        result[4] += 6603793;
        result[5] += 6703851;
      }
    }
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ac0000))) ) ) {
        result[0] += 0;
        result[1] += 8053063;
        result[2] += 0;
        result[3] += 8053063;
        result[4] += 2684354;
        result[5] += 67108863;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 33447532;
        result[3] += 38768731;
        result[4] += 2280513;
        result[5] += 11402568;
      }
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 71271558;
        result[3] += 13694098;
        result[4] += 0;
        result[5] += 933688;
      } else {
        result[0] += 1041204;
        result[1] += 130150;
        result[2] += 80953625;
        result[3] += 3123612;
        result[4] += 260301;
        result[5] += 390451;
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
    

    FILE* file = fopen("./codegen_small/dataset_146/split_1/test_data.csv", "r");
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
        
    }
    

    return 0;
}
