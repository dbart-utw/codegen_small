
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
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        result[0] += 18743125;
        result[1] += 797579;
        result[2] += 0;
        result[3] += 2791529;
        result[4] += 103286585;
        result[5] += 17546755;
      } else {
        result[0] += 0;
        result[1] += 124275;
        result[2] += 0;
        result[3] += 22618172;
        result[4] += 7207989;
        result[5] += 113215139;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        result[0] += 252496;
        result[1] += 117915915;
        result[2] += 252496;
        result[3] += 0;
        result[4] += 24239674;
        result[5] += 504993;
      } else {
        result[0] += 98559365;
        result[1] += 3424128;
        result[2] += 8236416;
        result[3] += 11568000;
        result[4] += 10642560;
        result[5] += 10735104;
      }
    }
  } else {
    if ( UNLIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
      if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 1337996;
        result[1] += 3344990;
        result[2] += 25421924;
        result[3] += 60209821;
        result[4] += 8696974;
        result[5] += 44153869;
      } else {
        result[0] += 26959751;
        result[1] += 6507526;
        result[2] += 92964660;
        result[3] += 11155759;
        result[4] += 1859293;
        result[5] += 3718586;
      }
    } else {
      if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 97411629;
        result[3] += 39850212;
        result[4] += 0;
        result[5] += 5903735;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 136551949;
        result[3] += 6224590;
        result[4] += 0;
        result[5] += 389036;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 513138;
        result[1] += 3591967;
        result[2] += 0;
        result[3] += 0;
        result[4] += 131363396;
        result[5] += 7697074;
      } else {
        result[0] += 4956164;
        result[1] += 1802241;
        result[2] += 901120;
        result[3] += 23879702;
        result[4] += 7434247;
        result[5] += 104192099;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 0;
        result[1] += 130940201;
        result[2] += 0;
        result[3] += 0;
        result[4] += 12225375;
        result[5] += 0;
      } else {
        result[0] += 85899345;
        result[1] += 3064953;
        result[2] += 9598142;
        result[3] += 14195572;
        result[4] += 18228405;
        result[5] += 12179156;
      }
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 48551804;
        result[3] += 54776394;
        result[4] += 0;
        result[5] += 39837377;
      } else {
        result[0] += 3329432;
        result[1] += 0;
        result[2] += 119859552;
        result[3] += 6658864;
        result[4] += 0;
        result[5] += 13317728;
      }
    } else {
      if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 2136799;
        result[1] += 4985865;
        result[2] += 108976782;
        result[3] += 20655729;
        result[4] += 3561332;
        result[5] += 2849066;
      } else {
        result[0] += 205402;
        result[1] += 0;
        result[2] += 138030512;
        result[3] += 4724258;
        result[4] += 0;
        result[5] += 205402;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428f0000))) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 2909869;
        result[2] += 0;
        result[3] += 581973;
        result[4] += 130944124;
        result[5] += 8729608;
      } else {
        result[0] += 2837515;
        result[1] += 2321603;
        result[2] += 902845;
        result[3] += 16122249;
        result[4] += 7351745;
        result[5] += 113629615;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 135329144;
        result[2] += 0;
        result[3] += 0;
        result[4] += 7836431;
        result[5] += 0;
      } else {
        result[0] += 82197439;
        result[1] += 4004103;
        result[2] += 6874969;
        result[3] += 17754042;
        result[4] += 18585082;
        result[5] += 13749939;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 49286509;
        result[3] += 84491159;
        result[4] += 0;
        result[5] += 9387906;
      } else {
        result[0] += 0;
        result[1] += 5113056;
        result[2] += 54539267;
        result[3] += 10226112;
        result[4] += 1704352;
        result[5] += 71582788;
      }
    } else {
      if ( UNLIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 1590728;
        result[1] += 0;
        result[2] += 119702329;
        result[3] += 19884107;
        result[4] += 0;
        result[5] += 1988410;
      } else {
        result[0] += 240614;
        result[1] += 0;
        result[2] += 138353288;
        result[3] += 3849830;
        result[4] += 0;
        result[5] += 721843;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 1301505;
        result[1] += 5206020;
        result[2] += 0;
        result[3] += 0;
        result[4] += 134705792;
        result[5] += 1952257;
      } else {
        result[0] += 4418690;
        result[1] += 1215139;
        result[2] += 1104672;
        result[3] += 23087658;
        result[4] += 9500184;
        result[5] += 103839229;
      }
    } else {
      if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42460000))) ) ) {
        result[0] += 11793960;
        result[1] += 129733565;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1638050;
        result[5] += 0;
      } else {
        result[0] += 84568691;
        result[1] += 9058068;
        result[2] += 5611192;
        result[3] += 12264464;
        result[4] += 17074058;
        result[5] += 14589101;
      }
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 1325607;
        result[1] += 0;
        result[2] += 29163358;
        result[3] += 90141288;
        result[4] += 1325607;
        result[5] += 21209715;
      } else {
        result[0] += 9089877;
        result[1] += 0;
        result[2] += 115895942;
        result[3] += 13634816;
        result[4] += 0;
        result[5] += 4544938;
      }
    } else {
      if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 95443717;
        result[3] += 47721858;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 1179010;
        result[1] += 0;
        result[2] += 135417792;
        result[3] += 5221332;
        result[4] += 0;
        result[5] += 1347440;
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 475633;
        result[1] += 6183230;
        result[2] += 0;
        result[3] += 0;
        result[4] += 133652913;
        result[5] += 2853798;
      } else {
        result[0] += 8594845;
        result[1] += 0;
        result[2] += 1718969;
        result[3] += 11664433;
        result[4] += 12646701;
        result[5] += 108540625;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
        result[0] += 0;
        result[1] += 127905679;
        result[2] += 554905;
        result[3] += 554905;
        result[4] += 12485370;
        result[5] += 1664716;
      } else {
        result[0] += 86610326;
        result[1] += 3716487;
        result[2] += 8806460;
        result[3] += 20279096;
        result[4] += 6301870;
        result[5] += 17451334;
      }
    }
  } else {
    if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 11184810;
        result[1] += 6710886;
        result[2] += 39146837;
        result[3] += 41383799;
        result[4] += 6710886;
        result[5] += 38028356;
      } else {
        result[0] += 10696278;
        result[1] += 0;
        result[2] += 104494415;
        result[3] += 23038138;
        result[4] += 0;
        result[5] += 4936744;
      }
    } else {
      if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 87022213;
        result[3] += 53336195;
        result[4] += 0;
        result[5] += 2807168;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 136386148;
        result[3] += 5782453;
        result[4] += 0;
        result[5] += 996974;
      }
    }
  }
  if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
      if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b60000))) ) ) {
        result[0] += 1835456;
        result[1] += 4129776;
        result[2] += 0;
        result[3] += 458864;
        result[4] += 134906024;
        result[5] += 1835456;
      } else {
        result[0] += 1161586;
        result[1] += 131840104;
        result[2] += 0;
        result[3] += 0;
        result[4] += 9583091;
        result[5] += 580793;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 11985342;
        result[1] += 0;
        result[2] += 921949;
        result[3] += 10931686;
        result[4] += 11721928;
        result[5] += 107604669;
      } else {
        result[0] += 89042004;
        result[1] += 3579139;
        result[2] += 6547206;
        result[3] += 17546512;
        result[4] += 7594759;
        result[5] += 18855953;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
      if ( LIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 8947848;
        result[3] += 56940854;
        result[4] += 9761289;
        result[5] += 67515584;
      } else {
        result[0] += 3579139;
        result[1] += 0;
        result[2] += 96636764;
        result[3] += 7158278;
        result[4] += 3579139;
        result[5] += 32212254;
      }
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 1278264;
        result[2] += 82448032;
        result[3] += 35791394;
        result[4] += 1278264;
        result[5] += 22369621;
      } else {
        result[0] += 1676411;
        result[1] += 0;
        result[2] += 132101257;
        result[3] += 7376212;
        result[4] += 670564;
        result[5] += 1341129;
      }
    }
  }
  if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 1118481;
        result[1] += 10625570;
        result[2] += 0;
        result[3] += 0;
        result[4] += 126388360;
        result[5] += 5033164;
      } else {
        result[0] += 5109001;
        result[1] += 113533;
        result[2] += 567666;
        result[3] += 25090874;
        result[4] += 9309736;
        result[5] += 102974764;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 139955585;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3209990;
        result[5] += 0;
      } else {
        result[0] += 89385547;
        result[1] += 4543627;
        result[2] += 9087255;
        result[3] += 10243815;
        result[4] += 15944002;
        result[5] += 13961328;
      }
    }
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 17248864;
        result[3] += 32772842;
        result[4] += 10349318;
        result[5] += 82794550;
      } else {
        result[0] += 1127288;
        result[1] += 14654744;
        result[2] += 71019144;
        result[3] += 45091520;
        result[4] += 1127288;
        result[5] += 10145592;
      }
    } else {
      if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428d0000))) ) ) {
        result[0] += 55063683;
        result[1] += 66076419;
        result[2] += 11012736;
        result[3] += 0;
        result[4] += 11012736;
        result[5] += 0;
      } else {
        result[0] += 947071;
        result[1] += 0;
        result[2] += 132432104;
        result[3] += 8997175;
        result[4] += 0;
        result[5] += 789225;
      }
    }
  }
  if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c60000))) ) ) {
        result[0] += 639132;
        result[1] += 1278264;
        result[2] += 0;
        result[3] += 0;
        result[4] += 138052520;
        result[5] += 3195660;
      } else {
        result[0] += 0;
        result[1] += 143165576;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42830000))) ) ) {
        result[0] += 943119;
        result[1] += 0;
        result[2] += 0;
        result[3] += 4149726;
        result[4] += 4904222;
        result[5] += 133168507;
      } else {
        result[0] += 11825627;
        result[1] += 1006436;
        result[2] += 1761263;
        result[3] += 50321819;
        result[4] += 8303100;
        result[5] += 69947329;
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 779485;
        result[1] += 117442541;
        result[2] += 259828;
        result[3] += 0;
        result[4] += 24164062;
        result[5] += 519657;
      } else {
        result[0] += 105103737;
        result[1] += 5102123;
        result[2] += 3877613;
        result[3] += 10714458;
        result[4] += 10816501;
        result[5] += 7551142;
      }
    } else {
      if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 5563429;
        result[1] += 2596266;
        result[2] += 53038024;
        result[3] += 43765642;
        result[4] += 2225371;
        result[5] += 35976841;
      } else {
        result[0] += 4926127;
        result[1] += 0;
        result[2] += 127463545;
        result[3] += 9852254;
        result[4] += 0;
        result[5] += 923648;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 18131788;
        result[1] += 8688148;
        result[2] += 755491;
        result[3] += 0;
        result[4] += 101235816;
        result[5] += 14354332;
      } else {
        result[0] += 118514;
        result[1] += 592572;
        result[2] += 1659203;
        result[3] += 25006570;
        result[4] += 8888591;
        result[5] += 106900124;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        result[0] += 1025051;
        result[1] += 133256741;
        result[2] += 0;
        result[3] += 683367;
        result[4] += 7858730;
        result[5] += 341683;
      } else {
        result[0] += 87768173;
        result[1] += 5506368;
        result[2] += 6507526;
        result[3] += 11680175;
        result[4] += 15935096;
        result[5] += 15768236;
      }
    }
  } else {
    if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
      if ( LIKELY( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 59427220;
        result[3] += 73833819;
        result[4] += 0;
        result[5] += 9904536;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 128523642;
        result[3] += 8134407;
        result[4] += 0;
        result[5] += 6507526;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 21786065;
        result[1] += 0;
        result[2] += 87144263;
        result[3] += 12449180;
        result[4] += 0;
        result[5] += 21786065;
      } else {
        result[0] += 2118356;
        result[1] += 0;
        result[2] += 133809503;
        result[3] += 5472420;
        result[4] += 176529;
        result[5] += 1588767;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423c0000))) ) ) {
        result[0] += 0;
        result[1] += 138438411;
        result[2] += 0;
        result[3] += 1688273;
        result[4] += 3038891;
        result[5] += 0;
      } else {
        result[0] += 2794989;
        result[1] += 11801067;
        result[2] += 931663;
        result[3] += 2173880;
        result[4] += 115836789;
        result[5] += 9627186;
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
        result[0] += 7341824;
        result[1] += 2915136;
        result[2] += 2483264;
        result[3] += 23968897;
        result[4] += 8853376;
        result[5] += 97603077;
      } else {
        result[0] += 98265318;
        result[1] += 1748165;
        result[2] += 10396985;
        result[3] += 14629387;
        result[4] += 7636724;
        result[5] += 10488994;
      }
    }
  } else {
    if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
      if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42740000))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 5023353;
        result[1] += 0;
        result[2] += 37675151;
        result[3] += 12558383;
        result[4] += 5023353;
        result[5] += 82885333;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 1278264;
        result[1] += 3834792;
        result[2] += 69026260;
        result[3] += 38347922;
        result[4] += 0;
        result[5] += 30678337;
      } else {
        result[0] += 980586;
        result[1] += 0;
        result[2] += 132215697;
        result[3] += 8498413;
        result[4] += 0;
        result[5] += 1470879;
      }
    }
  }
  if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 2009341;
        result[2] += 0;
        result[3] += 2009341;
        result[4] += 130607192;
        result[5] += 8539701;
      } else {
        result[0] += 5382164;
        result[1] += 1076432;
        result[2] += 215286;
        result[3] += 20021652;
        result[4] += 7319743;
        result[5] += 109150296;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 140106482;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3059093;
        result[5] += 0;
      } else {
        result[0] += 91037180;
        result[1] += 5437854;
        result[2] += 7219220;
        result[3] += 10781952;
        result[4] += 18563709;
        result[5] += 10125659;
      }
    }
  } else {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 13015052;
        result[4] += 13015052;
        result[5] += 117135471;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 31317469;
        result[3] += 85004561;
        result[4] += 0;
        result[5] += 26843545;
      }
    } else {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 10439156;
        result[1] += 16404388;
        result[2] += 65617555;
        result[3] += 22369621;
        result[4] += 10439156;
        result[5] += 17895697;
      } else {
        result[0] += 2921746;
        result[1] += 0;
        result[2] += 129579455;
        result[3] += 10080025;
        result[4] += 0;
        result[5] += 584349;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 24505819;
        result[1] += 6878826;
        result[2] += 0;
        result[3] += 0;
        result[4] += 101462690;
        result[5] += 10318239;
      } else {
        result[0] += 353495;
        result[1] += 1413981;
        result[2] += 2827962;
        result[3] += 23095023;
        result[4] += 9073044;
        result[5] += 106402070;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 318145;
        result[1] += 134575641;
        result[2] += 0;
        result[3] += 636291;
        result[4] += 7317351;
        result[5] += 318145;
      } else {
        result[0] += 94352932;
        result[1] += 4635837;
        result[2] += 6635610;
        result[3] += 11998638;
        result[4] += 16907172;
        result[5] += 8635383;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 0;
        result[1] += 3976821;
        result[2] += 5965232;
        result[3] += 7953643;
        result[4] += 17895697;
        result[5] += 107374182;
      } else {
        result[0] += 2045222;
        result[1] += 6135667;
        result[2] += 49767081;
        result[3] += 53175785;
        result[4] += 6135667;
        result[5] += 25906151;
      }
    } else {
      if ( UNLIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 98170681;
        result[1] += 0;
        result[2] += 28633115;
        result[3] += 12271335;
        result[4] += 4090445;
        result[5] += 0;
      } else {
        result[0] += 917728;
        result[1] += 0;
        result[2] += 130623293;
        result[3] += 11012736;
        result[4] += 0;
        result[5] += 611818;
      }
    }
  }
  if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 27269633;
        result[1] += 757489;
        result[2] += 0;
        result[3] += 0;
        result[4] += 95443717;
        result[5] += 19694735;
      } else {
        result[0] += 0;
        result[1] += 600023;
        result[2] += 360014;
        result[3] += 26641037;
        result[4] += 8040313;
        result[5] += 107524188;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x425a0000))) ) ) {
        result[0] += 309212;
        result[1] += 137290531;
        result[2] += 0;
        result[3] += 0;
        result[4] += 5565832;
        result[5] += 0;
      } else {
        result[0] += 92742480;
        result[1] += 5312433;
        result[2] += 9364289;
        result[3] += 12515732;
        result[4] += 14406598;
        result[5] += 8824041;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( UNLIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 16519104;
        result[3] += 5506368;
        result[4] += 19272289;
        result[5] += 101867814;
      } else {
        result[0] += 8897295;
        result[1] += 12941521;
        result[2] += 45295323;
        result[3] += 53383774;
        result[4] += 7279605;
        result[5] += 15368056;
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 3142658;
        result[1] += 0;
        result[2] += 119071857;
        result[3] += 18506769;
        result[4] += 0;
        result[5] += 2444290;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 139096927;
        result[3] += 4068648;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
    if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
      if ( LIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 570380;
        result[1] += 5703807;
        result[2] += 0;
        result[3] += 0;
        result[4] += 130046818;
        result[5] += 6844569;
      } else {
        result[0] += 69507924;
        result[1] += 4149726;
        result[2] += 0;
        result[3] += 0;
        result[4] += 48759290;
        result[5] += 20748634;
      }
    } else {
      if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 306564;
        result[1] += 459846;
        result[2] += 153282;
        result[3] += 6284570;
        result[4] += 7664110;
        result[5] += 128297202;
      } else {
        result[0] += 371858;
        result[1] += 1115575;
        result[2] += 1859293;
        result[3] += 71025000;
        result[4] += 4462303;
        result[5] += 64331544;
      }
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 254290;
        result[1] += 124093785;
        result[2] += 0;
        result[3] += 0;
        result[4] += 18817500;
        result[5] += 0;
      } else {
        result[0] += 111287527;
        result[1] += 3884780;
        result[2] += 1256840;
        result[3] += 7084010;
        result[4] += 13939505;
        result[5] += 5712912;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 1451002;
        result[1] += 0;
        result[2] += 50785086;
        result[3] += 56589096;
        result[4] += 1934669;
        result[5] += 32405721;
      } else {
        result[0] += 4838598;
        result[1] += 142311;
        result[2] += 125661236;
        result[3] += 8965637;
        result[4] += 0;
        result[5] += 3557792;
      }
    }
  }
  if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 14046433;
        result[2] += 0;
        result[3] += 0;
        result[4] += 126958152;
        result[5] += 2160989;
      } else {
        result[0] += 6502152;
        result[1] += 1182209;
        result[2] += 0;
        result[3] += 23171307;
        result[4] += 8157245;
        result[5] += 104152661;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 136055773;
        result[2] += 0;
        result[3] += 646345;
        result[4] += 4201247;
        result[5] += 2262210;
      } else {
        result[0] += 87178597;
        result[1] += 3948306;
        result[2] += 10739392;
        result[3] += 12950443;
        result[4] += 14924596;
        result[5] += 13424240;
      }
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 13506186;
        result[1] += 43219796;
        result[2] += 0;
        result[3] += 5402474;
        result[4] += 29713610;
        result[5] += 51323508;
      } else {
        result[0] += 1767476;
        result[1] += 0;
        result[2] += 60977930;
        result[3] += 59210454;
        result[4] += 0;
        result[5] += 21209715;
      }
    } else {
      if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 3817748;
        result[1] += 0;
        result[2] += 99261466;
        result[3] += 38177487;
        result[4] += 0;
        result[5] += 1908874;
      } else {
        result[0] += 1068399;
        result[1] += 0;
        result[2] += 135686777;
        result[3] += 4807799;
        result[4] += 0;
        result[5] += 1602599;
      }
    }
  }
  if ( UNLIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 0;
        result[1] += 1163947;
        result[2] += 0;
        result[3] += 0;
        result[4] += 139091759;
        result[5] += 2909869;
      } else {
        result[0] += 0;
        result[1] += 126322567;
        result[2] += 0;
        result[3] += 0;
        result[4] += 16843009;
        result[5] += 0;
      }
    } else {
      if ( LIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 1343376;
        result[1] += 0;
        result[2] += 0;
        result[3] += 3262486;
        result[4] += 5757328;
        result[5] += 132802384;
      } else {
        result[0] += 9965685;
        result[1] += 4375178;
        result[2] += 5104375;
        result[3] += 45210182;
        result[4] += 5833571;
        result[5] += 72676582;
      }
    }
  } else {
    if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 93080064;
        result[1] += 7360236;
        result[2] += 3500600;
        result[3] += 10053005;
        result[4] += 18849386;
        result[5] += 10322282;
      } else {
        result[0] += 705249;
        result[1] += 142460327;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 1967911;
        result[2] += 57561417;
        result[3] += 52641638;
        result[4] += 2459889;
        result[5] += 28534719;
      } else {
        result[0] += 2906138;
        result[1] += 1070682;
        result[2] += 129552610;
        result[3] += 6271141;
        result[4] += 764773;
        result[5] += 2600229;
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 1004670;
        result[1] += 1004670;
        result[2] += 0;
        result[3] += 0;
        result[4] += 134123540;
        result[5] += 7032694;
      } else {
        result[0] += 5203918;
        result[1] += 2775423;
        result[2] += 231285;
        result[3] += 23822381;
        result[4] += 6360344;
        result[5] += 104772223;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42660000))) ) ) {
        result[0] += 0;
        result[1] += 131624996;
        result[2] += 0;
        result[3] += 0;
        result[4] += 11540580;
        result[5] += 0;
      } else {
        result[0] += 98051138;
        result[1] += 5366435;
        result[2] += 6094087;
        result[3] += 8549913;
        result[4] += 14462088;
        result[5] += 10641913;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5614336;
        result[3] += 8421504;
        result[4] += 22457345;
        result[5] += 106672390;
      } else {
        result[0] += 1228889;
        result[1] += 0;
        result[2] += 49770007;
        result[3] += 74962233;
        result[4] += 0;
        result[5] += 17204446;
      }
    } else {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 13256071;
        result[1] += 6628035;
        result[2] += 60977930;
        result[3] += 11930464;
        result[4] += 7953643;
        result[5] += 42419430;
      } else {
        result[0] += 652234;
        result[1] += 0;
        result[2] += 131914523;
        result[3] += 9131289;
        result[4] += 0;
        result[5] += 1467528;
      }
    }
  }
  if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
      } else {
        result[0] += 5614336;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 123515399;
        result[5] += 14035840;
      }
    } else {
      if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
        result[0] += 0;
        result[1] += 1213267;
        result[2] += 346647;
        result[3] += 6932957;
        result[4] += 4679746;
        result[5] += 129992956;
      } else {
        result[0] += 13710147;
        result[1] += 263656;
        result[2] += 0;
        result[3] += 45876262;
        result[4] += 15819400;
        result[5] += 67496109;
      }
    }
  } else {
    if ( LIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42460000))) ) ) {
        result[0] += 7052491;
        result[1] += 132939463;
        result[2] += 352624;
        result[3] += 705249;
        result[4] += 2115747;
        result[5] += 0;
      } else {
        result[0] += 96909264;
        result[1] += 10350422;
        result[2] += 5037816;
        result[3] += 7785715;
        result[4] += 17403365;
        result[5] += 5678992;
      }
    } else {
      if ( UNLIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 509486;
        result[1] += 2037944;
        result[2] += 48910659;
        result[3] += 51967575;
        result[4] += 1528458;
        result[5] += 38211452;
      } else {
        result[0] += 5259143;
        result[1] += 730436;
        result[2] += 125196835;
        result[3] += 7742628;
        result[4] += 876523;
        result[5] += 3360008;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 16638161;
        result[1] += 1934669;
        result[2] += 0;
        result[3] += 1547735;
        result[4] += 107954583;
        result[5] += 15090425;
      } else {
        result[0] += 0;
        result[1] += 344424;
        result[2] += 459232;
        result[3] += 21354288;
        result[4] += 10677144;
        result[5] += 110330488;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 0;
        result[1] += 136099464;
        result[2] += 0;
        result[3] += 0;
        result[4] += 7066112;
        result[5] += 0;
      } else {
        result[0] += 91232965;
        result[1] += 6579300;
        result[2] += 6316128;
        result[3] += 13421772;
        result[4] += 14386736;
        result[5] += 11228672;
      }
    }
  } else {
    if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
      if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 3869339;
        result[1] += 0;
        result[2] += 43530073;
        result[3] += 85125477;
        result[4] += 0;
        result[5] += 10640684;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 119017166;
        result[3] += 17248864;
        result[4] += 0;
        result[5] += 6899545;
      }
    } else {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 3561332;
        result[1] += 0;
        result[2] += 112538114;
        result[3] += 27066128;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 632543;
        result[1] += 0;
        result[2] += 138948622;
        result[3] += 2741019;
        result[4] += 0;
        result[5] += 843390;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 2156108;
        result[1] += 13367870;
        result[2] += 0;
        result[3] += 0;
        result[4] += 124191825;
        result[5] += 3449772;
      } else {
        result[0] += 0;
        result[1] += 140532646;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2632930;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
        result[0] += 5762082;
        result[1] += 1108092;
        result[2] += 664855;
        result[3] += 23823992;
        result[4] += 6205319;
        result[5] += 105601234;
      } else {
        result[0] += 91972506;
        result[1] += 2625285;
        result[2] += 9538537;
        result[3] += 13563975;
        result[4] += 13301447;
        result[5] += 12163823;
      }
    }
  } else {
    if ( UNLIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429f0000))) ) ) {
      if ( UNLIKELY( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 34001824;
        result[3] += 85899345;
        result[4] += 0;
        result[5] += 23264406;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 82038701;
        result[3] += 17694621;
        result[4] += 0;
        result[5] += 43432253;
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 737966;
        result[1] += 368983;
        result[2] += 116967751;
        result[3] += 19925106;
        result[4] += 1106950;
        result[5] += 4058817;
      } else {
        result[0] += 249417;
        result[1] += 748252;
        result[2] += 139424315;
        result[3] += 2743591;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 17332394;
        result[1] += 10052788;
        result[2] += 0;
        result[3] += 2426535;
        result[4] += 95674816;
        result[5] += 17679042;
      } else {
        result[0] += 1678658;
        result[1] += 0;
        result[2] += 359712;
        result[3] += 28417287;
        result[4] += 8633100;
        result[5] += 104076817;
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
        result[0] += 1546064;
        result[1] += 134816827;
        result[2] += 0;
        result[3] += 1546064;
        result[4] += 5256619;
        result[5] += 0;
      } else {
        result[0] += 88693223;
        result[1] += 5372842;
        result[2] += 9505797;
        result[3] += 10580365;
        result[4] += 15539912;
        result[5] += 13473434;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42320000))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 9942053;
        result[1] += 0;
        result[2] += 9942053;
        result[3] += 29826161;
        result[4] += 15907286;
        result[5] += 77548020;
      }
    } else {
      if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 1136234;
        result[1] += 0;
        result[2] += 99988656;
        result[3] += 34655159;
        result[4] += 0;
        result[5] += 7385525;
      } else {
        result[0] += 1037431;
        result[1] += 0;
        result[2] += 135488581;
        result[3] += 5602131;
        result[4] += 0;
        result[5] += 1037431;
      }
    }
  }
  if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 1127288;
        result[1] += 6763728;
        result[2] += 0;
        result[3] += 1127288;
        result[4] += 125128968;
        result[5] += 9018304;
      } else {
        result[0] += 4466577;
        result[1] += 587707;
        result[2] += 1292956;
        result[3] += 19511893;
        result[4] += 9638404;
        result[5] += 107668036;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42620000))) ) ) {
        result[0] += 0;
        result[1] += 133346698;
        result[2] += 0;
        result[3] += 633476;
        result[4] += 8235188;
        result[5] += 950214;
      } else {
        result[0] += 99681566;
        result[1] += 6172518;
        result[2] += 5988264;
        result[3] += 7278044;
        result[4] += 15016723;
        result[5] += 9028459;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 4405094;
        result[4] += 22025473;
        result[5] += 116735008;
      } else {
        result[0] += 923648;
        result[1] += 4156419;
        result[2] += 40640550;
        result[3] += 68350017;
        result[4] += 6465542;
        result[5] += 22629397;
      }
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 113186460;
        result[3] += 23860929;
        result[4] += 0;
        result[5] += 6118187;
      } else {
        result[0] += 1549830;
        result[1] += 0;
        result[2] += 136966255;
        result[3] += 4649490;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 17554362;
        result[1] += 1950484;
        result[2] += 780193;
        result[3] += 1560387;
        result[4] += 102205397;
        result[5] += 19114749;
      } else {
        result[0] += 248335;
        result[1] += 2980029;
        result[2] += 496671;
        result[3] += 26696096;
        result[4] += 7450073;
        result[5] += 105294370;
      }
    } else {
      if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 85494086;
        result[1] += 8650723;
        result[2] += 9352133;
        result[3] += 10910822;
        result[4] += 16444168;
        result[5] += 12313642;
      } else {
        result[0] += 724888;
        result[1] += 142078243;
        result[2] += 0;
        result[3] += 0;
        result[4] += 362444;
        result[5] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6507526;
        result[3] += 56398560;
        result[4] += 6507526;
        result[5] += 73751963;
      } else {
        result[0] += 1812222;
        result[1] += 7248889;
        result[2] += 81550011;
        result[3] += 32620004;
        result[4] += 0;
        result[5] += 19934447;
      }
    } else {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
        result[0] += 76354974;
        result[1] += 57266230;
        result[2] += 9544371;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 2662817;
        result[1] += 0;
        result[2] += 130947945;
        result[3] += 8145087;
        result[4] += 156636;
        result[5] += 1253090;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( UNLIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
      if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 37074750;
        result[1] += 4277855;
        result[2] += 0;
        result[3] += 0;
        result[4] += 92116496;
        result[5] += 9696473;
      } else {
        result[0] += 1139248;
        result[1] += 2531663;
        result[2] += 506332;
        result[3] += 15189981;
        result[4] += 8987405;
        result[5] += 114810944;
      }
    } else {
      if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cd0000))) ) ) {
        result[0] += 87588013;
        result[1] += 7422712;
        result[2] += 4175276;
        result[3] += 17072239;
        result[4] += 13360883;
        result[5] += 13546451;
      } else {
        result[0] += 2227020;
        result[1] += 140938556;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 1001157;
        result[1] += 0;
        result[2] += 30034736;
        result[3] += 80092630;
        result[4] += 0;
        result[5] += 32037052;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 110837865;
        result[3] += 18472977;
        result[4] += 0;
        result[5] += 13854733;
      }
    } else {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 10105805;
        result[1] += 0;
        result[2] += 102742354;
        result[3] += 24141646;
        result[4] += 561433;
        result[5] += 5614336;
      } else {
        result[0] += 967334;
        result[1] += 0;
        result[2] += 136781165;
        result[3] += 4256273;
        result[4] += 0;
        result[5] += 1160801;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 586744;
        result[1] += 3520464;
        result[2] += 0;
        result[3] += 1173488;
        result[4] += 122629530;
        result[5] += 15255348;
      } else {
        result[0] += 5645330;
        result[1] += 1129066;
        result[2] += 112906;
        result[3] += 20210282;
        result[4] += 9371248;
        result[5] += 106696742;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42520000))) ) ) {
        result[0] += 596523;
        result[1] += 135112512;
        result[2] += 0;
        result[3] += 0;
        result[4] += 7456540;
        result[5] += 0;
      } else {
        result[0] += 88975631;
        result[1] += 5127141;
        result[2] += 8597822;
        result[3] += 13724964;
        result[4] += 14987030;
        result[5] += 11752986;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
        result[0] += 0;
        result[1] += 27531841;
        result[2] += 0;
        result[3] += 0;
        result[4] += 11012736;
        result[5] += 104620998;
      } else {
        result[0] += 0;
        result[1] += 7017920;
        result[2] += 64564867;
        result[3] += 51932611;
        result[4] += 2807168;
        result[5] += 16843009;
      }
    } else {
      if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 1301505;
        result[1] += 0;
        result[2] += 110627945;
        result[3] += 27982362;
        result[4] += 0;
        result[5] += 3253763;
      } else {
        result[0] += 640084;
        result[1] += 0;
        result[2] += 136978092;
        result[3] += 4693953;
        result[4] += 0;
        result[5] += 853446;
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 2339306;
        result[2] += 0;
        result[3] += 2807168;
        result[4] += 129129735;
        result[5] += 8889365;
      } else {
        result[0] += 7959618;
        result[1] += 860499;
        result[2] += 215124;
        result[3] += 23986418;
        result[4] += 10325991;
        result[5] += 99817922;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 1611188;
        result[1] += 110021134;
        result[2] += 0;
        result[3] += 460339;
        result[4] += 29461726;
        result[5] += 1611188;
      } else {
        result[0] += 97264431;
        result[1] += 5557967;
        result[2] += 11020107;
        result[3] += 13032475;
        result[4] += 8528605;
        result[5] += 7761989;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7341824;
        result[3] += 0;
        result[4] += 22025473;
        result[5] += 113798278;
      } else {
        result[0] += 1590728;
        result[1] += 0;
        result[2] += 72378152;
        result[3] += 56470866;
        result[4] += 0;
        result[5] += 12725829;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 13421772;
        result[1] += 13421772;
        result[2] += 53687091;
        result[3] += 44739242;
        result[4] += 8947848;
        result[5] += 8947848;
      } else {
        result[0] += 870836;
        result[1] += 0;
        result[2] += 134457208;
        result[3] += 6444192;
        result[4] += 174167;
        result[5] += 1219171;
      }
    }
  }
  if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 3711700;
        result[2] += 0;
        result[3] += 4241943;
        result[4] += 127258290;
        result[5] += 7953643;
      } else {
        result[0] += 6016296;
        result[1] += 1559780;
        result[2] += 334238;
        result[3] += 23953773;
        result[4] += 8801619;
        result[5] += 102499868;
      }
    } else {
      if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 88169580;
        result[1] += 6423532;
        result[2] += 7567449;
        result[3] += 10823211;
        result[4] += 17070757;
        result[5] += 13111045;
      } else {
        result[0] += 1081855;
        result[1] += 140641246;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1442474;
        result[5] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( UNLIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 11184810;
        result[3] += 13421772;
        result[4] += 15658734;
        result[5] += 102900258;
      } else {
        result[0] += 0;
        result[1] += 3869339;
        result[2] += 53396890;
        result[3] += 65778778;
        result[4] += 773867;
        result[5] += 19346699;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 0;
        result[1] += 68931573;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42419430;
        result[5] += 31814572;
      } else {
        result[0] += 2064179;
        result[1] += 0;
        result[2] += 131222825;
        result[3] += 8699041;
        result[4] += 147441;
        result[5] += 1032089;
      }
    }
  }
  if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
        result[0] += 568117;
        result[1] += 6249291;
        result[2] += 0;
        result[3] += 568117;
        result[4] += 127826407;
        result[5] += 7953643;
      } else {
        result[0] += 5665608;
        result[1] += 1634310;
        result[2] += 1961172;
        result[3] += 24623607;
        result[4] += 10132723;
        result[5] += 99148154;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42480000))) ) ) {
        result[0] += 943948;
        result[1] += 138131182;
        result[2] += 0;
        result[3] += 629299;
        result[4] += 3461145;
        result[5] += 0;
      } else {
        result[0] += 88742469;
        result[1] += 4794616;
        result[2] += 8832188;
        result[3] += 12785644;
        result[4] += 14972663;
        result[5] += 13037993;
      }
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 17459216;
        result[1] += 13967373;
        result[2] += 13967373;
        result[3] += 10475529;
        result[4] += 10475529;
        result[5] += 76820553;
      } else {
        result[0] += 1223637;
        result[1] += 1223637;
        result[2] += 62405507;
        result[3] += 62405507;
        result[4] += 0;
        result[5] += 15907286;
      }
    } else {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 26691887;
        result[1] += 9706140;
        result[2] += 67942985;
        result[3] += 19412281;
        result[4] += 0;
        result[5] += 19412281;
      } else {
        result[0] += 323172;
        result[1] += 0;
        result[2] += 133631977;
        result[3] += 8079321;
        result[4] += 0;
        result[5] += 1131105;
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 16191344;
        result[1] += 2556528;
        result[2] += 0;
        result[3] += 852176;
        result[4] += 107800270;
        result[5] += 15765256;
      } else {
        result[0] += 241833;
        result[1] += 725501;
        result[2] += 604584;
        result[3] += 23578790;
        result[4] += 8706014;
        result[5] += 109308852;
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cd0000))) ) ) {
        result[0] += 82757476;
        result[1] += 7044912;
        result[2] += 11012736;
        result[3] += 11336640;
        result[4] += 18867409;
        result[5] += 12146400;
      } else {
        result[0] += 5263440;
        result[1] += 137902136;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 9336885;
        result[2] += 18673770;
        result[3] += 99593444;
        result[4] += 0;
        result[5] += 15561475;
      } else {
        result[0] += 7953643;
        result[1] += 3408704;
        result[2] += 65901614;
        result[3] += 13634816;
        result[4] += 7953643;
        result[5] += 44313154;
      }
    } else {
      if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 3670912;
        result[1] += 0;
        result[2] += 91772805;
        result[3] += 40380034;
        result[4] += 0;
        result[5] += 7341824;
      } else {
        result[0] += 650752;
        result[1] += 0;
        result[2] += 134705792;
        result[3] += 7483655;
        result[4] += 0;
        result[5] += 325376;
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 18267417;
        result[1] += 0;
        result[2] += 849647;
        result[3] += 0;
        result[4] += 110029330;
        result[5] += 14019181;
      } else {
        result[0] += 0;
        result[1] += 468627;
        result[2] += 234313;
        result[3] += 22962727;
        result[4] += 9255385;
        result[5] += 110244523;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 123495871;
        result[2] += 0;
        result[3] += 0;
        result[4] += 19669705;
        result[5] += 0;
      } else {
        result[0] += 95293459;
        result[1] += 3606185;
        result[2] += 9195773;
        result[3] += 12080722;
        result[4] += 10908712;
        result[5] += 12080722;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
      if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 29826161;
        result[3] += 2982616;
        result[4] += 11930464;
        result[5] += 98426333;
      } else {
        result[0] += 7017920;
        result[1] += 1403584;
        result[2] += 35089602;
        result[3] += 72986372;
        result[4] += 1403584;
        result[5] += 25264513;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 31814572;
        result[1] += 79536431;
        result[2] += 7953643;
        result[3] += 23860929;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 2753184;
        result[1] += 0;
        result[2] += 129093746;
        result[3] += 9636144;
        result[4] += 0;
        result[5] += 1682501;
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
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
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
