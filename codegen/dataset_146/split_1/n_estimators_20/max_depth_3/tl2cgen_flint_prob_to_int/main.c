
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
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 715827;
        result[2] += 0;
        result[3] += 10021590;
        result[4] += 188978560;
        result[5] += 15032385;
      } else {
        result[0] += 7903816;
        result[1] += 504498;
        result[2] += 0;
        result[3] += 33296927;
        result[4] += 11435308;
        result[5] += 161607814;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42520000))) ) ) {
        result[0] += 453055;
        result[1] += 207499474;
        result[2] += 0;
        result[3] += 0;
        result[4] += 6795834;
        result[5] += 0;
      } else {
        result[0] += 137320248;
        result[1] += 6070148;
        result[2] += 14703248;
        result[3] += 19019798;
        result[4] += 23875917;
        result[5] += 13759003;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3303820;
        result[3] += 33038209;
        result[4] += 0;
        result[5] += 178406333;
      } else {
        result[0] += 0;
        result[1] += 2701237;
        result[2] += 91842067;
        result[3] += 90491449;
        result[4] += 1350618;
        result[5] += 28362991;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x425a0000))) ) ) {
        result[0] += 0;
        result[1] += 214748364;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 3624444;
        result[1] += 0;
        result[2] += 188244610;
        result[3] += 15630418;
        result[4] += 226527;
        result[5] += 7022362;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 2695586;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 203067491;
        result[5] += 8985287;
      } else {
        result[0] += 102566383;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 67309188;
        result[5] += 44872792;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 1116155;
        result[2] += 0;
        result[3] += 14510024;
        result[4] += 14510024;
        result[5] += 184612159;
      } else {
        result[0] += 1329711;
        result[1] += 0;
        result[2] += 3324278;
        result[3] += 113690310;
        result[4] += 7313411;
        result[5] += 89090652;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 15339168;
        result[2] += 0;
        result[3] += 0;
        result[4] += 199409195;
        result[5] += 0;
      } else {
        result[0] += 504104;
        result[1] += 211723739;
        result[2] += 0;
        result[3] += 504104;
        result[4] += 2016416;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
        result[0] += 160648930;
        result[1] += 9071551;
        result[2] += 6432554;
        result[3] += 7587115;
        result[4] += 24905532;
        result[5] += 6102680;
      } else {
        result[0] += 13854733;
        result[1] += 4668442;
        result[2] += 147733622;
        result[3] += 33432073;
        result[4] += 3463683;
        result[5] += 11595809;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 1556147;
        result[1] += 2334221;
        result[2] += 1556147;
        result[3] += 3890368;
        result[4] += 197630741;
        result[5] += 7780737;
      } else {
        result[0] += 9024444;
        result[1] += 3175267;
        result[2] += 668477;
        result[3] += 35763540;
        result[4] += 10361399;
        result[5] += 155755234;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 782325;
        result[1] += 172502784;
        result[2] += 0;
        result[3] += 5085116;
        result[4] += 34813487;
        result[5] += 1564651;
      } else {
        result[0] += 143165576;
        result[1] += 2889580;
        result[2] += 13922523;
        result[3] += 17994205;
        result[4] += 17862860;
        result[5] += 18913617;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 8259552;
        result[3] += 24778657;
        result[4] += 0;
        result[5] += 181710154;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 98170681;
        result[3] += 77718455;
        result[4] += 4090445;
        result[5] += 34768782;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42be0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 71582788;
        result[3] += 114532461;
        result[4] += 0;
        result[5] += 28633115;
      } else {
        result[0] += 2296773;
        result[1] += 0;
        result[2] += 198441269;
        result[3] += 12402579;
        result[4] += 0;
        result[5] += 1607741;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 12575354;
        result[2] += 0;
        result[3] += 0;
        result[4] += 192499660;
        result[5] += 9673349;
      } else {
        result[0] += 6594634;
        result[1] += 338186;
        result[2] += 1860025;
        result[3] += 33649546;
        result[4] += 14034735;
        result[5] += 158271235;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 1473402;
        result[1] += 176439908;
        result[2] += 0;
        result[3] += 0;
        result[4] += 36466703;
        result[5] += 368350;
      } else {
        result[0] += 141885025;
        result[1] += 5378313;
        result[2] += 11653012;
        result[3] += 18567986;
        result[4] += 14342168;
        result[5] += 22921858;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 21838816;
        result[3] += 156511520;
        result[4] += 0;
        result[5] += 36398027;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 171798691;
        result[3] += 35140641;
        result[4] += 0;
        result[5] += 7809031;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 6194664;
        result[1] += 0;
        result[2] += 167255937;
        result[3] += 31489543;
        result[4] += 516222;
        result[5] += 9291996;
      } else {
        result[0] += 789516;
        result[1] += 0;
        result[2] += 208432236;
        result[3] += 3947580;
        result[4] += 0;
        result[5] += 1579032;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 2342709;
        result[1] += 780903;
        result[2] += 0;
        result[3] += 0;
        result[4] += 209282042;
        result[5] += 2342709;
      } else {
        result[0] += 9649890;
        result[1] += 612691;
        result[2] += 765864;
        result[3] += 36148797;
        result[4] += 13479212;
        result[5] += 154091907;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 2539254;
        result[1] += 179924305;
        result[2] += 0;
        result[3] += 1088251;
        result[4] += 31196552;
        result[5] += 0;
      } else {
        result[0] += 154341156;
        result[1] += 3544677;
        result[2] += 14474098;
        result[3] += 17723386;
        result[4] += 11372506;
        result[5] += 13292539;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 9138228;
        result[1] += 0;
        result[2] += 45691141;
        result[3] += 116512410;
        result[4] += 0;
        result[5] += 43406584;
      } else {
        result[0] += 3303820;
        result[1] += 0;
        result[2] += 161887228;
        result[3] += 29734388;
        result[4] += 0;
        result[5] += 19822925;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 103397360;
        result[3] += 79536431;
        result[4] += 0;
        result[5] += 31814572;
      } else {
        result[0] += 3044415;
        result[1] += 0;
        result[2] += 200463031;
        result[3] += 8664874;
        result[4] += 0;
        result[5] += 2576043;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42240000))) ) ) {
        result[0] += 0;
        result[1] += 214748364;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 2788939;
        result[1] += 1859293;
        result[2] += 0;
        result[3] += 0;
        result[4] += 206381545;
        result[5] += 3718586;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 9606637;
        result[1] += 2601797;
        result[2] += 400276;
        result[3] += 9806775;
        result[4] += 18412720;
        result[5] += 173920157;
      } else {
        result[0] += 2744388;
        result[1] += 0;
        result[2] += 17838522;
        result[3] += 107031133;
        result[4] += 5488776;
        result[5] += 81645544;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b80000))) ) ) {
        result[0] += 0;
        result[1] += 98170681;
        result[2] += 0;
        result[3] += 12271335;
        result[4] += 98170681;
        result[5] += 6135667;
      } else {
        result[0] += 512525;
        result[1] += 211673209;
        result[2] += 0;
        result[3] += 2050103;
        result[4] += 512525;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 88457142;
        result[1] += 11367986;
        result[2] += 17584853;
        result[3] += 35169707;
        result[4] += 33748709;
        result[5] += 28419965;
      } else {
        result[0] += 76485718;
        result[1] += 560334;
        result[2] += 122153016;
        result[3] += 11346782;
        result[4] += 420251;
        result[5] += 3782260;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 28236809;
        result[1] += 2972295;
        result[2] += 0;
        result[3] += 0;
        result[4] += 175365446;
        result[5] += 8173813;
      } else {
        result[0] += 361529;
        result[1] += 2169175;
        result[2] += 903823;
        result[3] += 33983747;
        result[4] += 15726521;
        result[5] += 161603567;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
        result[0] += 0;
        result[1] += 212308042;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2440322;
        result[5] += 0;
      } else {
        result[0] += 132460402;
        result[1] += 9157437;
        result[2] += 10447217;
        result[3] += 19088743;
        result[4] += 22184215;
        result[5] += 21410347;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 0;
        result[1] += 2248673;
        result[2] += 44973479;
        result[3] += 110185024;
        result[4] += 4497347;
        result[5] += 52843838;
      } else {
        result[0] += 0;
        result[1] += 13591668;
        result[2] += 148149188;
        result[3] += 23105836;
        result[4] += 0;
        result[5] += 29901671;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 54935628;
        result[1] += 0;
        result[2] += 117362478;
        result[3] += 22473666;
        result[4] += 0;
        result[5] += 19976592;
      } else {
        result[0] += 2123593;
        result[1] += 265449;
        result[2] += 198821415;
        result[3] += 10352516;
        result[4] += 0;
        result[5] += 3185389;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 761519;
        result[1] += 11422785;
        result[2] += 0;
        result[3] += 4569114;
        result[4] += 189618236;
        result[5] += 8376709;
      } else {
        result[0] += 10728903;
        result[1] += 2554500;
        result[2] += 1873300;
        result[3] += 33038209;
        result[4] += 15156704;
        result[5] += 151396745;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 1403584;
        result[1] += 206794721;
        result[2] += 0;
        result[3] += 1403584;
        result[4] += 4678613;
        result[5] += 467861;
      } else {
        result[0] += 138176223;
        result[1] += 6185148;
        result[2] += 13112515;
        result[3] += 17813228;
        result[4] += 20534693;
        result[5] += 18926555;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 8259552;
        result[4] += 16519104;
        result[5] += 189969707;
      } else {
        result[0] += 21079594;
        result[1] += 11857271;
        result[2] += 93540698;
        result[3] += 61921307;
        result[4] += 2634949;
        result[5] += 23714543;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 5419517;
        result[1] += 0;
        result[2] += 172069667;
        result[3] += 31839662;
        result[4] += 0;
        result[5] += 5419517;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 209213613;
        result[3] += 5534751;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 1556147;
        result[1] += 3112295;
        result[2] += 0;
        result[3] += 778073;
        result[4] += 193740372;
        result[5] += 15561475;
      } else {
        result[0] += 9976498;
        result[1] += 5410982;
        result[2] += 169093;
        result[3] += 35509572;
        result[4] += 9976498;
        result[5] += 153705719;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cd0000))) ) ) {
        result[0] += 129120852;
        result[1] += 7660758;
        result[2] += 13097426;
        result[3] += 16186441;
        result[4] += 28666064;
        result[5] += 20016821;
      } else {
        result[0] += 4129776;
        result[1] += 209069922;
        result[2] += 1548666;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 24311135;
        result[3] += 74959334;
        result[4] += 8103711;
        result[5] += 107374182;
      } else {
        result[0] += 3520464;
        result[1] += 17602324;
        result[2] += 107374182;
        result[3] += 70409299;
        result[4] += 5280697;
        result[5] += 10561394;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 50107951;
        result[3] += 42949672;
        result[4] += 0;
        result[5] += 121690740;
      } else {
        result[0] += 5937742;
        result[1] += 494811;
        result[2] += 192234423;
        result[3] += 12865109;
        result[4] += 0;
        result[5] += 3216277;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 46759724;
        result[1] += 4618244;
        result[2] += 577280;
        result[3] += 8659208;
        result[4] += 144897418;
        result[5] += 9236488;
      } else {
        result[0] += 1341245;
        result[1] += 2384437;
        result[2] += 4470819;
        result[3] += 44410140;
        result[4] += 15945922;
        result[5] += 146195798;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 136570617;
        result[1] += 16624793;
        result[2] += 11678573;
        result[3] += 13739498;
        result[4] += 24318912;
        result[5] += 11815968;
      } else {
        result[0] += 2100228;
        result[1] += 211072964;
        result[2] += 525057;
        result[3] += 0;
        result[4] += 1050114;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 166256798;
        result[4] += 0;
        result[5] += 48491566;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 108768652;
        result[3] += 41834097;
        result[4] += 0;
        result[5] += 64145615;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 1173488;
        result[1] += 8214418;
        result[2] += 157247436;
        result[3] += 43419068;
        result[4] += 0;
        result[5] += 4693953;
      } else {
        result[0] += 1431655;
        result[1] += 0;
        result[2] += 204154112;
        result[3] += 7158278;
        result[4] += 286331;
        result[5] += 1717986;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 913822;
        result[1] += 1827645;
        result[2] += 1827645;
        result[3] += 2741468;
        result[4] += 200127199;
        result[5] += 7310582;
      } else {
        result[0] += 7525818;
        result[1] += 4025437;
        result[2] += 350038;
        result[3] += 32028484;
        result[4] += 8925971;
        result[5] += 161892614;
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 120282879;
        result[1] += 11421519;
        result[2] += 9398958;
        result[3] += 20463556;
        result[4] += 32479946;
        result[5] += 20701504;
      } else {
        result[0] += 991909;
        result[1] += 208796908;
        result[2] += 0;
        result[3] += 2479773;
        result[4] += 2479773;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 10349318;
        result[3] += 28460626;
        result[4] += 0;
        result[5] += 175938419;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 46432078;
        result[3] += 92864157;
        result[4] += 0;
        result[5] += 75452128;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42910000))) ) ) {
        result[0] += 87652393;
        result[1] += 83269774;
        result[2] += 30678337;
        result[3] += 13147859;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 1121987;
        result[1] += 448794;
        result[2] += 189391452;
        result[3] += 17727398;
        result[4] += 224397;
        result[5] += 5834333;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42be0000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
        result[0] += 4802679;
        result[1] += 18524619;
        result[2] += 0;
        result[3] += 0;
        result[4] += 189362775;
        result[5] += 2058291;
      } else {
        result[0] += 140954525;
        result[1] += 4145721;
        result[2] += 0;
        result[3] += 0;
        result[4] += 46432078;
        result[5] += 23216039;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 235211;
        result[1] += 0;
        result[2] += 235211;
        result[3] += 11290165;
        result[4] += 14347919;
        result[5] += 188639856;
      } else {
        result[0] += 11671106;
        result[1] += 6535819;
        result[2] += 7469508;
        result[3] += 86366190;
        result[4] += 15872705;
        result[5] += 86833034;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 5965232;
        result[1] += 178104794;
        result[2] += 0;
        result[3] += 2130440;
        result[4] += 23860929;
        result[5] += 4686968;
      } else {
        result[0] += 173798139;
        result[1] += 5959891;
        result[2] += 4806364;
        result[3] += 11343020;
        result[4] += 7305674;
        result[5] += 11535274;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 3035312;
        result[1] += 9864765;
        result[2] += 81194611;
        result[3] += 90300549;
        result[4] += 1517656;
        result[5] += 28835469;
      } else {
        result[0] += 4176273;
        result[1] += 879215;
        result[2] += 193207587;
        result[3] += 11429800;
        result[4] += 659411;
        result[5] += 4396077;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 213064063;
        result[5] += 1684300;
      } else {
        result[0] += 0;
        result[1] += 4129776;
        result[2] += 0;
        result[3] += 33038209;
        result[4] += 94984853;
        result[5] += 82595524;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 8841423;
        result[1] += 785904;
        result[2] += 785904;
        result[3] += 14932182;
        result[4] += 14539230;
        result[5] += 174863718;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 142784816;
        result[4] += 2284557;
        result[5] += 69678990;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42660000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0;
        result[1] += 24970740;
        result[2] += 0;
        result[3] += 0;
        result[4] += 189777624;
        result[5] += 0;
      } else {
        result[0] += 976128;
        result[1] += 211819977;
        result[2] += 488064;
        result[3] += 976128;
        result[4] += 488064;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 157667052;
        result[1] += 8175328;
        result[2] += 5255568;
        result[3] += 12262992;
        result[4] += 21606225;
        result[5] += 9781196;
      } else {
        result[0] += 10536718;
        result[1] += 3177740;
        result[2] += 160225026;
        result[3] += 28265166;
        result[4] += 1839744;
        result[5] += 10703968;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 9761289;
        result[2] += 0;
        result[3] += 976128;
        result[4] += 192297399;
        result[5] += 11713547;
      } else {
        result[0] += 3037206;
        result[1] += 3037206;
        result[2] += 178659;
        result[3] += 31801338;
        result[4] += 12863462;
        result[5] += 163830491;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 118071979;
        result[1] += 9056335;
        result[2] += 10075173;
        result[3] += 22301227;
        result[4] += 31017950;
        result[5] += 24225698;
      } else {
        result[0] += 2538396;
        result[1] += 212209968;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 62426850;
        result[3] += 112368330;
        result[4] += 0;
        result[5] += 39953184;
      } else {
        result[0] += 13421772;
        result[1] += 0;
        result[2] += 167772159;
        result[3] += 6710886;
        result[4] += 0;
        result[5] += 26843545;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 7238708;
        result[1] += 0;
        result[2] += 127883857;
        result[3] += 57909671;
        result[4] += 0;
        result[5] += 21716126;
      } else {
        result[0] += 1778980;
        result[1] += 0;
        result[2] += 201787220;
        result[3] += 9911462;
        result[4] += 0;
        result[5] += 1270700;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 1436443;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 197511037;
        result[5] += 15800883;
      } else {
        result[0] += 0;
        result[1] += 196852667;
        result[2] += 0;
        result[3] += 0;
        result[4] += 17895697;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 6842472;
        result[1] += 1052688;
        result[2] += 263172;
        result[3] += 8158332;
        result[4] += 6052956;
        result[5] += 192378743;
      } else {
        result[0] += 10561394;
        result[1] += 2011694;
        result[2] += 1508770;
        result[3] += 93543784;
        result[4] += 7543853;
        result[5] += 99578867;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        result[0] += 734182;
        result[1] += 175836695;
        result[2] += 0;
        result[3] += 367091;
        result[4] += 37076213;
        result[5] += 734182;
      } else {
        result[0] += 160494441;
        result[1] += 8259552;
        result[2] += 2267328;
        result[3] += 12956160;
        result[4] += 18948385;
        result[5] += 11822496;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 3767515;
        result[1] += 2260509;
        result[2] += 67815273;
        result[3] += 95694885;
        result[4] += 1507006;
        result[5] += 43703175;
      } else {
        result[0] += 5588247;
        result[1] += 199580;
        result[2] += 187405868;
        result[3] += 15766840;
        result[4] += 0;
        result[5] += 5787827;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 17685159;
        result[2] += 0;
        result[3] += 2526451;
        result[4] += 185273099;
        result[5] += 9263654;
      } else {
        result[0] += 6842472;
        result[1] += 701792;
        result[2] += 1228136;
        result[3] += 37019530;
        result[4] += 15439424;
        result[5] += 153517009;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
        result[0] += 2474059;
        result[1] += 208315810;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3958495;
        result[5] += 0;
      } else {
        result[0] += 130466664;
        result[1] += 8791554;
        result[2] += 10549865;
        result[3] += 17465887;
        result[4] += 26843545;
        result[5] += 20630847;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 34045472;
        result[3] += 117849712;
        result[4] += 2618882;
        result[5] += 60234297;
      } else {
        result[0] += 14510024;
        result[1] += 0;
        result[2] += 124786211;
        result[3] += 55138093;
        result[4] += 0;
        result[5] += 20314034;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 176730711;
        result[3] += 33907636;
        result[4] += 0;
        result[5] += 4110016;
      } else {
        result[0] += 2999278;
        result[1] += 0;
        result[2] += 202151393;
        result[3] += 8997836;
        result[4] += 0;
        result[5] += 599855;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        result[0] += 21849397;
        result[1] += 5618416;
        result[2] += 4994148;
        result[3] += 3745611;
        result[4] += 152945783;
        result[5] += 25595008;
      } else {
        result[0] += 672665;
        result[1] += 672665;
        result[2] += 1177164;
        result[3] += 32287929;
        result[4] += 18330126;
        result[5] += 161607814;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 453055;
        result[1] += 205234196;
        result[2] += 0;
        result[3] += 0;
        result[4] += 9061112;
        result[5] += 0;
      } else {
        result[0] += 134841996;
        result[1] += 5250258;
        result[2] += 15622719;
        result[3] += 20232702;
        result[4] += 21385197;
        result[5] += 17415490;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 12271335;
        result[3] += 6135667;
        result[4] += 6135667;
        result[5] += 190205694;
      } else {
        result[0] += 3181457;
        result[1] += 28633115;
        result[2] += 74764245;
        result[3] += 66810602;
        result[4] += 0;
        result[5] += 41358944;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 4569114;
        result[1] += 0;
        result[2] += 166772666;
        result[3] += 38837470;
        result[4] += 0;
        result[5] += 4569114;
      } else {
        result[0] += 2776918;
        result[1] += 0;
        result[2] += 204874876;
        result[3] += 5862383;
        result[4] += 0;
        result[5] += 1234186;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 852176;
        result[1] += 3408704;
        result[2] += 0;
        result[3] += 1704352;
        result[4] += 200261371;
        result[5] += 8521760;
      } else {
        result[0] += 6090917;
        result[1] += 2436367;
        result[2] += 2088314;
        result[3] += 34457193;
        result[4] += 14444176;
        result[5] += 155231394;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        result[0] += 420251;
        result[1] += 202561079;
        result[2] += 0;
        result[3] += 1260753;
        result[4] += 10086028;
        result[5] += 420251;
      } else {
        result[0] += 129516497;
        result[1] += 6674784;
        result[2] += 14889904;
        result[3] += 21949773;
        result[4] += 21179605;
        result[5] += 20537799;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 9336885;
        result[3] += 18673770;
        result[4] += 34235246;
        result[5] += 152502461;
      } else {
        result[0] += 9474192;
        result[1] += 11053224;
        result[2] += 91583861;
        result[3] += 82109668;
        result[4] += 1579032;
        result[5] += 18948385;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 50957239;
        result[1] += 0;
        result[2] += 129212999;
        result[3] += 29118422;
        result[4] += 0;
        result[5] += 5459704;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 201342704;
        result[3] += 12632256;
        result[4] += 0;
        result[5] += 773403;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 2431113;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 206644652;
        result[5] += 5672598;
      } else {
        result[0] += 8015491;
        result[1] += 1502904;
        result[2] += 166989;
        result[3] += 36737667;
        result[4] += 11188289;
        result[5] += 157137022;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x425a0000))) ) ) {
        result[0] += 2618882;
        result[1] += 197725628;
        result[2] += 0;
        result[3] += 436480;
        result[4] += 13967373;
        result[5] += 0;
      } else {
        result[0] += 135774778;
        result[1] += 7972097;
        result[2] += 16193322;
        result[3] += 18310910;
        result[4] += 21549574;
        result[5] += 14947682;
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 49941480;
        result[3] += 4994148;
        result[4] += 24970740;
        result[5] += 134841996;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 51130563;
        result[3] += 143165576;
        result[4] += 0;
        result[5] += 20452225;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 9761289;
        result[2] += 91105366;
        result[3] += 71582788;
        result[4] += 9761289;
        result[5] += 32537631;
      } else {
        result[0] += 2601577;
        result[1] += 0;
        result[2] += 196300817;
        result[3] += 14426927;
        result[4] += 0;
        result[5] += 1419042;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 34177458;
        result[1] += 7405116;
        result[2] += 0;
        result[3] += 0;
        result[4] += 148102320;
        result[5] += 25063469;
      } else {
        result[0] += 1498244;
        result[1] += 499414;
        result[2] += 1165301;
        result[3] += 39953184;
        result[4] += 12318898;
        result[5] += 159313321;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0;
        result[1] += 195346048;
        result[2] += 0;
        result[3] += 0;
        result[4] += 19402316;
        result[5] += 0;
      } else {
        result[0] += 141866695;
        result[1] += 6350086;
        result[2] += 14864974;
        result[3] += 16163855;
        result[4] += 22658261;
        result[5] += 12844492;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 14423397;
        result[1] += 16025997;
        result[2] += 35257194;
        result[3] += 59296190;
        result[4] += 9615598;
        result[5] += 80129986;
      } else {
        result[0] += 12321627;
        result[1] += 0;
        result[2] += 157540808;
        result[3] += 39605231;
        result[4] += 0;
        result[5] += 5280697;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 154350387;
        result[3] += 36909875;
        result[4] += 0;
        result[5] += 23488102;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 207223489;
        result[3] += 7524875;
        result[4] += 0;
        result[5] += 0;
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
