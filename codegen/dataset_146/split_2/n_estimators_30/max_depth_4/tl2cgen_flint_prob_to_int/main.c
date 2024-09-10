
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
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 630685;
          result[1] += 5045482;
          result[2] += 0;
          result[3] += 0;
          result[4] += 133074610;
          result[5] += 4414797;
        } else {
          result[0] += 63913203;
          result[1] += 0;
          result[2] += 0;
          result[3] += 15339168;
          result[4] += 12782640;
          result[5] += 51130563;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 154439;
          result[2] += 0;
          result[3] += 6795345;
          result[4] += 9575259;
          result[5] += 126640531;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1136234;
          result[3] += 67605966;
          result[4] += 13066699;
          result[5] += 61356675;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
          result[0] += 619764;
          result[1] += 142235929;
          result[2] += 0;
          result[3] += 0;
          result[4] += 309882;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 99420539;
          result[2] += 0;
          result[3] += 0;
          result[4] += 43745037;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 111130069;
          result[1] += 3645419;
          result[2] += 1436074;
          result[3] += 5523363;
          result[4] += 18227098;
          result[5] += 3203550;
        } else {
          result[0] += 25228753;
          result[1] += 5775256;
          result[2] += 32523814;
          result[3] += 41034719;
          result[4] += 7599022;
          result[5] += 31004010;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5726623;
          result[3] += 0;
          result[4] += 5726623;
          result[5] += 131712330;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 22823497;
          result[3] += 91293990;
          result[4] += 4149726;
          result[5] += 24898361;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 6362914;
          result[1] += 0;
          result[2] += 82717888;
          result[3] += 41358944;
          result[4] += 0;
          result[5] += 12725829;
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
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 11930464;
          result[2] += 43745037;
          result[3] += 51698680;
          result[4] += 0;
          result[5] += 35791394;
        } else {
          result[0] += 14316557;
          result[1] += 3579139;
          result[2] += 103795042;
          result[3] += 15509604;
          result[4] += 0;
          result[5] += 5965232;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 125859847;
          result[3] += 15732480;
          result[4] += 0;
          result[5] += 1573248;
        } else {
          result[0] += 236246;
          result[1] += 0;
          result[2] += 138913133;
          result[3] += 4016196;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423c0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c30000))) ) ) {
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
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 121797580;
          result[2] += 0;
          result[3] += 4273599;
          result[4] += 17094397;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
          result[0] += 4473924;
          result[1] += 15211342;
          result[2] += 0;
          result[3] += 0;
          result[4] += 118111600;
          result[5] += 5368709;
        } else {
          result[0] += 117577158;
          result[1] += 1295616;
          result[2] += 323904;
          result[3] += 1943424;
          result[4] += 13280064;
          result[5] += 8745408;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 820903;
          result[1] += 164180;
          result[2] += 492542;
          result[3] += 5417963;
          result[4] += 18059877;
          result[5] += 118210109;
        } else {
          result[0] += 17096974;
          result[1] += 7080565;
          result[2] += 4662811;
          result[3] += 49563957;
          result[4] += 13815737;
          result[5] += 50945530;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 17895697;
          result[1] += 0;
          result[2] += 0;
          result[3] += 125269879;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 42949672;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 143165576;
        } else {
          result[0] += 139243231;
          result[1] += 0;
          result[2] += 1525356;
          result[3] += 435816;
          result[4] += 1961172;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 4347761;
          result[1] += 0;
          result[2] += 89750220;
          result[3] += 39750962;
          result[4] += 0;
          result[5] += 9316631;
        } else {
          result[0] += 87746643;
          result[1] += 0;
          result[2] += 39255077;
          result[3] += 0;
          result[4] += 16163855;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 399903;
          result[1] += 0;
          result[2] += 137167018;
          result[3] += 4998798;
          result[4] += 0;
          result[5] += 599855;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 10490581;
          result[2] += 0;
          result[3] += 0;
          result[4] += 128972437;
          result[5] += 3702558;
        } else {
          result[0] += 65823253;
          result[1] += 0;
          result[2] += 0;
          result[3] += 8227906;
          result[4] += 27974882;
          result[5] += 41139533;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 996512;
          result[2] += 166085;
          result[3] += 6311243;
          result[4] += 10297292;
          result[5] += 125394443;
        } else {
          result[0] += 432524;
          result[1] += 0;
          result[2] += 9515536;
          result[3] += 66608757;
          result[4] += 865048;
          result[5] += 65743708;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 64424509;
          result[2] += 0;
          result[3] += 0;
          result[4] += 78741067;
          result[5] += 0;
        } else {
          result[0] += 336069;
          result[1] += 142829507;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 109498067;
          result[1] += 6922291;
          result[2] += 629299;
          result[3] += 2307430;
          result[4] += 20976641;
          result[5] += 2831846;
        } else {
          result[0] += 17302000;
          result[1] += 1696274;
          result[2] += 31211452;
          result[3] += 45120904;
          result[4] += 10177647;
          result[5] += 37657296;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31122951;
          result[3] += 12449180;
          result[4] += 12449180;
          result[5] += 87144263;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16843009;
          result[3] += 89829381;
          result[4] += 0;
          result[5] += 36493186;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 88861392;
          result[3] += 24683720;
          result[4] += 4936744;
          result[5] += 24683720;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13015052;
          result[3] += 13015052;
          result[4] += 0;
          result[5] += 117135471;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 80530636;
          result[3] += 62634939;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1084587;
          result[1] += 0;
          result[2] += 131854876;
          result[3] += 7901996;
          result[4] += 464823;
          result[5] += 1859293;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1183186;
          result[1] += 12423459;
          result[2] += 0;
          result[3] += 0;
          result[4] += 127784150;
          result[5] += 1774779;
        } else {
          result[0] += 101149592;
          result[1] += 1556147;
          result[2] += 7780737;
          result[3] += 0;
          result[4] += 24898361;
          result[5] += 7780737;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 518246;
          result[1] += 388684;
          result[2] += 388684;
          result[3] += 12308352;
          result[4] += 12697037;
          result[5] += 116864570;
        } else {
          result[0] += 1088711;
          result[1] += 1088711;
          result[2] += 7076625;
          result[3] += 85463861;
          result[4] += 3266134;
          result[5] += 45181531;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a60000))) ) ) {
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
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 111594607;
          result[1] += 6248421;
          result[2] += 219242;
          result[3] += 3288642;
          result[4] += 16881698;
          result[5] += 4932963;
        } else {
          result[0] += 32450864;
          result[1] += 4581298;
          result[2] += 29778439;
          result[3] += 37413937;
          result[4] += 4199523;
          result[5] += 34741513;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 102261126;
          result[4] += 0;
          result[5] += 40904450;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 88101893;
          result[3] += 44050946;
          result[4] += 0;
          result[5] += 11012736;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 72719022;
          result[3] += 52266797;
          result[4] += 0;
          result[5] += 18179755;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 121140103;
          result[3] += 22025473;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 103910499;
          result[3] += 39255077;
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
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 116952161;
          result[3] += 24196998;
          result[4] += 0;
          result[5] += 2016416;
        } else {
          result[0] += 1669569;
          result[1] += 0;
          result[2] += 136904691;
          result[3] += 4591315;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 4149726;
          result[2] += 0;
          result[3] += 518715;
          result[4] += 133309975;
          result[5] += 5187158;
        } else {
          result[0] += 3181457;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 63629145;
          result[5] += 76354974;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 433178;
          result[2] += 0;
          result[3] += 5414734;
          result[4] += 2165893;
          result[5] += 135151769;
        } else {
          result[0] += 14289596;
          result[1] += 4583455;
          result[2] += 2965765;
          result[3] += 36128412;
          result[4] += 9436525;
          result[5] += 75761821;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 3217203;
          result[1] += 11260213;
          result[2] += 0;
          result[3] += 1608601;
          result[4] += 119036546;
          result[5] += 8043009;
        } else {
          result[0] += 298261;
          result[1] += 136603820;
          result[2] += 596523;
          result[3] += 1789569;
          result[4] += 3877401;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 114226602;
          result[1] += 4470248;
          result[2] += 2470400;
          result[3] += 5293714;
          result[4] += 10352153;
          result[5] += 6352457;
        } else {
          result[0] += 30750352;
          result[1] += 504104;
          result[2] += 37807810;
          result[3] += 43857060;
          result[4] += 7057457;
          result[5] += 23188790;
        }
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c50000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 2272469;
          result[2] += 2272469;
          result[3] += 22724694;
          result[4] += 34087042;
          result[5] += 81808900;
        } else {
          result[0] += 1438850;
          result[1] += 0;
          result[2] += 37410100;
          result[3] += 80575600;
          result[4] += 2877700;
          result[5] += 20863325;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 17895697;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 0;
          result[4] += 0;
          result[5] += 98426333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 134217727;
          result[3] += 8947848;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 38177487;
          result[4] += 0;
          result[5] += 104988089;
        } else {
          result[0] += 47721858;
          result[1] += 0;
          result[2] += 63629145;
          result[3] += 0;
          result[4] += 31814572;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 3253763;
          result[1] += 0;
          result[2] += 78090314;
          result[3] += 42298920;
          result[4] += 0;
          result[5] += 19522578;
        } else {
          result[0] += 1389957;
          result[1] += 0;
          result[2] += 134478344;
          result[3] += 7123529;
          result[4] += 0;
          result[5] += 173744;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 778073;
          result[2] += 0;
          result[3] += 778073;
          result[4] += 136940986;
          result[5] += 4668442;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1507006;
          result[4] += 61787248;
          result[5] += 79871321;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42870000))) ) ) {
          result[0] += 340060;
          result[1] += 340060;
          result[2] += 680121;
          result[3] += 9691731;
          result[4] += 7481336;
          result[5] += 124632265;
        } else {
          result[0] += 13596730;
          result[1] += 799807;
          result[2] += 0;
          result[3] += 52787307;
          result[4] += 13196826;
          result[5] += 62784903;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 142761153;
          result[2] += 0;
          result[3] += 0;
          result[4] += 404422;
          result[5] += 0;
        } else {
          result[0] += 17895697;
          result[1] += 89478485;
          result[2] += 0;
          result[3] += 7158278;
          result[4] += 28633115;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 114866699;
          result[1] += 5793470;
          result[2] += 334238;
          result[3] += 4010864;
          result[4] += 17157586;
          result[5] += 1002716;
        } else {
          result[0] += 26106663;
          result[1] += 13053331;
          result[2] += 27369889;
          result[3] += 34949243;
          result[4] += 10947955;
          result[5] += 30738491;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428c0000))) ) ) {
          result[0] += 0;
          result[1] += 27269633;
          result[2] += 6817408;
          result[3] += 0;
          result[4] += 102261126;
          result[5] += 6817408;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12341860;
          result[3] += 4936744;
          result[4] += 22215348;
          result[5] += 103671624;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 1843333;
          result[1] += 1843333;
          result[2] += 25806670;
          result[3] += 80492233;
          result[4] += 3686667;
          result[5] += 29493337;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 100602837;
          result[3] += 38693399;
          result[4] += 0;
          result[5] += 3869339;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 113025455;
          result[3] += 30140121;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 97612893;
          result[1] += 26030104;
          result[2] += 19522578;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 118158488;
          result[3] += 22506378;
          result[4] += 0;
          result[5] += 2500708;
        } else {
          result[0] += 2769572;
          result[1] += 0;
          result[2] += 135922080;
          result[3] += 4260880;
          result[4] += 0;
          result[5] += 213044;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x420a0000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1114129;
          result[1] += 0;
          result[2] += 0;
          result[3] += 557064;
          result[4] += 137594931;
          result[5] += 3899451;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 3415209;
          result[1] += 819650;
          result[2] += 0;
          result[3] += 7923285;
          result[4] += 9562586;
          result[5] += 121444844;
        } else {
          result[0] += 8339742;
          result[1] += 694978;
          result[2] += 1389957;
          result[3] += 77837594;
          result[4] += 4864849;
          result[5] += 50038453;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 2921746;
          result[1] += 24834844;
          result[2] += 0;
          result[3] += 1460873;
          result[4] += 112487238;
          result[5] += 1460873;
        } else {
          result[0] += 597768;
          result[1] += 138981196;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3586611;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 71945538;
          result[1] += 6892261;
          result[2] += 11366185;
          result[3] += 19951283;
          result[4] += 15840110;
          result[5] += 17170195;
        } else {
          result[0] += 137189024;
          result[1] += 0;
          result[2] += 3259937;
          result[3] += 2716614;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 15070060;
          result[2] += 7535030;
          result[3] += 22605091;
          result[4] += 0;
          result[5] += 97955394;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 58882616;
          result[3] += 75046471;
          result[4] += 0;
          result[5] += 9236488;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e50000))) ) ) {
          result[0] += 6899545;
          result[1] += 5174659;
          result[2] += 113842506;
          result[3] += 6899545;
          result[4] += 1724886;
          result[5] += 8624432;
        } else {
          result[0] += 104120419;
          result[1] += 0;
          result[2] += 39045157;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 108805838;
          result[3] += 29587552;
          result[4] += 0;
          result[5] += 4772185;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 135299336;
          result[3] += 7866240;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 137116326;
          result[3] += 6049249;
          result[4] += 0;
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
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 586744;
          result[1] += 4693953;
          result[2] += 0;
          result[3] += 1173488;
          result[4] += 130257204;
          result[5] += 6454185;
        } else {
          result[0] += 0;
          result[1] += 71582788;
          result[2] += 0;
          result[3] += 11930464;
          result[4] += 0;
          result[5] += 59652323;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 2091182;
          result[1] += 0;
          result[2] += 0;
          result[3] += 6434407;
          result[4] += 10134192;
          result[5] += 124505793;
        } else {
          result[0] += 12048588;
          result[1] += 3898072;
          result[2] += 7441775;
          result[3] += 53864276;
          result[4] += 14883550;
          result[5] += 51029314;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 1590728;
          result[1] += 14316557;
          result[2] += 0;
          result[3] += 0;
          result[4] += 127258290;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 139727101;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3438474;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 114148578;
          result[1] += 2258132;
          result[2] += 451626;
          result[3] += 6661489;
          result[4] += 9258341;
          result[5] += 10387407;
        } else {
          result[0] += 32570168;
          result[1] += 5368709;
          result[2] += 36865135;
          result[3] += 38296791;
          result[4] += 8947848;
          result[5] += 21116922;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32651798;
          result[3] += 77861980;
          result[4] += 0;
          result[5] += 32651798;
        } else {
          result[0] += 0;
          result[1] += 81808900;
          result[2] += 0;
          result[3] += 0;
          result[4] += 61356675;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30678337;
          result[3] += 102261126;
          result[4] += 0;
          result[5] += 10226112;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 122111815;
          result[3] += 21053761;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17895697;
          result[3] += 0;
          result[4] += 8947848;
          result[5] += 116322030;
        } else {
          result[0] += 0;
          result[1] += 4618244;
          result[2] += 96983132;
          result[3] += 0;
          result[4] += 0;
          result[5] += 41564199;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 21053761;
          result[1] += 0;
          result[2] += 92636549;
          result[3] += 16843009;
          result[4] += 0;
          result[5] += 12632256;
        } else {
          result[0] += 168232;
          result[1] += 0;
          result[2] += 134249271;
          result[3] += 8748072;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 4555268;
          result[2] += 0;
          result[3] += 0;
          result[4] += 134705792;
          result[5] += 3904515;
        } else {
          result[0] += 46286614;
          result[1] += 0;
          result[2] += 5382164;
          result[3] += 13993627;
          result[4] += 33369420;
          result[5] += 44133749;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 152954;
          result[1] += 1376592;
          result[2] += 611818;
          result[3] += 6577051;
          result[4] += 9789099;
          result[5] += 124658060;
        } else {
          result[0] += 964077;
          result[1] += 1928155;
          result[2] += 6748545;
          result[3] += 68931573;
          result[4] += 4338350;
          result[5] += 60254872;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 8947848;
          result[2] += 0;
          result[3] += 0;
          result[4] += 134217727;
          result[5] += 0;
        } else {
          result[0] += 347489;
          result[1] += 141080640;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1737446;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 108623028;
          result[1] += 5314238;
          result[2] += 318854;
          result[3] += 3401112;
          result[4] += 19662681;
          result[5] += 5845661;
        } else {
          result[0] += 25927624;
          result[1] += 375762;
          result[2] += 31564064;
          result[3] += 48097621;
          result[4] += 3757626;
          result[5] += 33442877;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4338350;
          result[3] += 30368455;
          result[4] += 4338350;
          result[5] += 104120419;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31122951;
          result[3] += 87144263;
          result[4] += 0;
          result[5] += 24898361;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 47721858;
          result[3] += 23860929;
          result[4] += 0;
          result[5] += 71582788;
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
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 143165576;
        } else {
          result[0] += 0;
          result[1] += 8065666;
          result[2] += 80656662;
          result[3] += 36295498;
          result[4] += 12098499;
          result[5] += 6049249;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 659749;
          result[1] += 0;
          result[2] += 118754856;
          result[3] += 19132726;
          result[4] += 0;
          result[5] += 4618244;
        } else {
          result[0] += 611818;
          result[1] += 0;
          result[2] += 138271026;
          result[3] += 4282730;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 589158;
          result[1] += 12372333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 128436607;
          result[5] += 1767476;
        } else {
          result[0] += 64003434;
          result[1] += 842150;
          result[2] += 0;
          result[3] += 5052902;
          result[4] += 35370318;
          result[5] += 37896770;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 556342;
          result[3] += 5934324;
          result[4] += 9272381;
          result[5] += 127402527;
        } else {
          result[0] += 3753404;
          result[1] += 4289605;
          result[2] += 1608601;
          result[3] += 43432253;
          result[4] += 23056628;
          result[5] += 67025082;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 8323580;
          result[1] += 56600344;
          result[2] += 0;
          result[3] += 13317728;
          result[4] += 61594492;
          result[5] += 3329432;
        } else {
          result[0] += 1435243;
          result[1] += 141730332;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 33859210;
          result[1] += 5152488;
          result[2] += 0;
          result[3] += 46372397;
          result[4] += 6256593;
          result[5] += 51524886;
        } else {
          result[0] += 113167859;
          result[1] += 4587886;
          result[2] += 6117181;
          result[3] += 3764419;
          result[4] += 8352305;
          result[5] += 7175924;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 15070060;
          result[2] += 22605091;
          result[3] += 0;
          result[4] += 105490424;
          result[5] += 0;
        } else {
          result[0] += 1556147;
          result[1] += 1556147;
          result[2] += 20229918;
          result[3] += 24898361;
          result[4] += 10893032;
          result[5] += 84031968;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5113056;
          result[3] += 117600294;
          result[4] += 0;
          result[5] += 20452225;
        } else {
          result[0] += 3463683;
          result[1] += 0;
          result[2] += 58882616;
          result[3] += 51955249;
          result[4] += 0;
          result[5] += 28864027;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 1671193;
          result[1] += 0;
          result[2] += 107513448;
          result[3] += 30638547;
          result[4] += 0;
          result[5] += 3342387;
        } else {
          result[0] += 107374182;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
          result[0] += 28633115;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 28633115;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 136886384;
          result[3] += 6279191;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 639132;
          result[1] += 1278264;
          result[2] += 0;
          result[3] += 0;
          result[4] += 139969916;
          result[5] += 1278264;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 17278604;
          result[1] += 7405116;
          result[2] += 0;
          result[3] += 16044418;
          result[4] += 58006742;
          result[5] += 44430696;
        } else {
          result[0] += 136658050;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 6507526;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 105490424;
          result[5] += 37675151;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 491977;
          result[3] += 7543661;
          result[4] += 3607838;
          result[5] += 131522098;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
          result[0] += 45210182;
          result[1] += 0;
          result[2] += 0;
          result[3] += 7535030;
          result[4] += 75350303;
          result[5] += 15070060;
        } else {
          result[0] += 694978;
          result[1] += 2432424;
          result[2] += 3474892;
          result[3] += 68455384;
          result[4] += 4169871;
          result[5] += 63938024;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 8676701;
          result[1] += 47721858;
          result[2] += 0;
          result[3] += 0;
          result[4] += 78090314;
          result[5] += 8676701;
        } else {
          result[0] += 700076;
          result[1] += 141065347;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1400152;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
          result[0] += 7230584;
          result[1] += 56398560;
          result[2] += 0;
          result[3] += 0;
          result[4] += 79536431;
          result[5] += 0;
        } else {
          result[0] += 109953742;
          result[1] += 3009486;
          result[2] += 6878826;
          result[3] += 6771344;
          result[4] += 10425721;
          result[5] += 6126454;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 3163880;
          result[1] += 3954850;
          result[2] += 53785962;
          result[3] += 47458202;
          result[4] += 2372910;
          result[5] += 32429771;
        } else {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 96733497;
          result[1] += 0;
          result[2] += 46432078;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 761519;
          result[1] += 0;
          result[2] += 128087499;
          result[3] += 12641215;
          result[4] += 0;
          result[5] += 1675341;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42240000))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
        } else {
          result[0] += 10226112;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 86921957;
          result[5] += 46017506;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
          result[0] += 79797206;
          result[1] += 21122789;
          result[2] += 0;
          result[3] += 4693953;
          result[4] += 11734883;
          result[5] += 25816743;
        } else {
          result[0] += 828504;
          result[1] += 662803;
          result[2] += 497102;
          result[3] += 4473924;
          result[4] += 7953643;
          result[5] += 128749598;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 3235380;
          result[1] += 2426535;
          result[2] += 1617690;
          result[3] += 41251098;
          result[4] += 4044225;
          result[5] += 90590647;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13089424;
          result[3] += 90807879;
          result[4] += 0;
          result[5] += 39268272;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 345810;
          result[1] += 140744902;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2074863;
          result[5] += 0;
        } else {
          result[0] += 1859293;
          result[1] += 44623036;
          result[2] += 0;
          result[3] += 10226112;
          result[4] += 82738547;
          result[5] += 3718586;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 125225028;
          result[1] += 2990091;
          result[2] += 478414;
          result[3] += 2511676;
          result[4] += 10644725;
          result[5] += 1315640;
        } else {
          result[0] += 32965757;
          result[1] += 2825636;
          result[2] += 16953818;
          result[3] += 33436697;
          result[4] += 14128181;
          result[5] += 42855485;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11930464;
          result[3] += 23860929;
          result[4] += 2982616;
          result[5] += 104391566;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31814572;
          result[3] += 76644197;
          result[4] += 0;
          result[5] += 34706806;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 6646973;
          result[1] += 5113056;
          result[2] += 85899345;
          result[3] += 36814005;
          result[4] += 3067833;
          result[5] += 5624361;
        } else {
          result[0] += 915380;
          result[1] += 366152;
          result[2] += 134377919;
          result[3] += 5492285;
          result[4] += 549228;
          result[5] += 1464609;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428f0000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 2113145;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 135769568;
          result[5] += 5282862;
        } else {
          result[0] += 23860929;
          result[1] += 0;
          result[2] += 59652323;
          result[3] += 0;
          result[4] += 0;
          result[5] += 59652323;
        }
      } else {
        result[0] += 0;
        result[1] += 143165576;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 123418600;
          result[5] += 19746976;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4699880;
          result[4] += 3796056;
          result[5] += 134669639;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 13576046;
          result[1] += 13576046;
          result[2] += 0;
          result[3] += 9873488;
          result[4] += 8639302;
          result[5] += 97500694;
        } else {
          result[0] += 1363481;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 75673233;
          result[4] += 681740;
          result[5] += 51130563;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 2863311;
          result[1] += 10021590;
          result[2] += 0;
          result[3] += 0;
          result[4] += 127417363;
          result[5] += 2863311;
        } else {
          result[0] += 0;
          result[1] += 138606163;
          result[2] += 0;
          result[3] += 607921;
          result[4] += 3951491;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 120397075;
          result[1] += 2759818;
          result[2] += 574962;
          result[3] += 4829682;
          result[4] += 8624432;
          result[5] += 5979606;
        } else {
          result[0] += 36295498;
          result[1] += 2016416;
          result[2] += 82673079;
          result[3] += 2016416;
          result[4] += 4032833;
          result[5] += 16131332;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 507679;
          result[1] += 3553755;
          result[2] += 8630548;
          result[3] += 74121184;
          result[4] += 7615190;
          result[5] += 48737217;
        } else {
          result[0] += 28758150;
          result[1] += 625177;
          result[2] += 53765238;
          result[3] += 12503543;
          result[4] += 25007087;
          result[5] += 22506378;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 94741925;
          result[3] += 39475802;
          result[4] += 0;
          result[5] += 8947848;
        } else {
          result[0] += 596523;
          result[1] += 0;
          result[2] += 136007297;
          result[3] += 6362914;
          result[4] += 0;
          result[5] += 198841;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
          result[0] += 1234186;
          result[1] += 1234186;
          result[2] += 0;
          result[3] += 3085465;
          result[4] += 127738251;
          result[5] += 9873488;
        } else {
          result[0] += 98250885;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 14035840;
          result[5] += 30878849;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 303960;
          result[1] += 151980;
          result[2] += 0;
          result[3] += 10486650;
          result[4] += 7447041;
          result[5] += 124775943;
        } else {
          result[0] += 948116;
          result[1] += 0;
          result[2] += 0;
          result[3] += 91019174;
          result[4] += 0;
          result[5] += 51198285;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 11012736;
          result[2] += 0;
          result[3] += 11012736;
          result[4] += 121140103;
          result[5] += 0;
        } else {
          result[0] += 309882;
          result[1] += 140066754;
          result[2] += 0;
          result[3] += 619764;
          result[4] += 2169175;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 110040589;
          result[1] += 4614936;
          result[2] += 2051082;
          result[3] += 3589394;
          result[4] += 17126541;
          result[5] += 5743031;
        } else {
          result[0] += 18008248;
          result[1] += 450206;
          result[2] += 36016497;
          result[3] += 47721858;
          result[4] += 11255155;
          result[5] += 29713610;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 114532461;
          result[2] += 28633115;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 2030717;
          result[2] += 11168945;
          result[3] += 64982956;
          result[4] += 2030717;
          result[5] += 62952239;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 56021312;
          result[3] += 62245902;
          result[4] += 0;
          result[5] += 24898361;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 120950228;
          result[3] += 12341860;
          result[4] += 0;
          result[5] += 9873488;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 102261126;
          result[1] += 0;
          result[2] += 13634816;
          result[3] += 20452225;
          result[4] += 6817408;
          result[5] += 0;
        } else {
          result[0] += 6899545;
          result[1] += 0;
          result[2] += 98318528;
          result[3] += 37947502;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 66076419;
          result[3] += 0;
          result[4] += 0;
          result[5] += 77089156;
        } else {
          result[0] += 653724;
          result[1] += 0;
          result[2] += 134667163;
          result[3] += 7190965;
          result[4] += 0;
          result[5] += 653724;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 5417075;
          result[2] += 0;
          result[3] += 0;
          result[4] += 137748500;
          result[5] += 0;
        } else {
          result[0] += 26030104;
          result[1] += 10412041;
          result[2] += 5206020;
          result[3] += 0;
          result[4] += 61170746;
          result[5] += 40346662;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3723960;
          result[4] += 2896413;
          result[5] += 136545203;
        } else {
          result[0] += 0;
          result[1] += 1674451;
          result[2] += 2511676;
          result[3] += 48977697;
          result[4] += 13395609;
          result[5] += 76606141;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 0;
          result[1] += 57266230;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
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
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
          result[0] += 13208728;
          result[1] += 12356552;
          result[2] += 426088;
          result[3] += 32808777;
          result[4] += 27695721;
          result[5] += 56669707;
        } else {
          result[0] += 103053336;
          result[1] += 3327282;
          result[2] += 4343952;
          result[3] += 10443970;
          result[4] += 14510649;
          result[5] += 7486385;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20636479;
          result[3] += 90284597;
          result[4] += 0;
          result[5] += 32244499;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 83767092;
          result[3] += 39598989;
          result[4] += 0;
          result[5] += 19799494;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 17895697;
          result[3] += 71582788;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 3561332;
          result[1] += 0;
          result[2] += 116099447;
          result[3] += 18518930;
          result[4] += 712266;
          result[5] += 4273599;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 97352592;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 2863311;
        } else {
          result[0] += 3368601;
          result[1] += 0;
          result[2] += 129691169;
          result[3] += 10105805;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 109479558;
          result[3] += 0;
          result[4] += 0;
          result[5] += 33686018;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 141070470;
          result[3] += 1862316;
          result[4] += 0;
          result[5] += 232789;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 601536;
          result[2] += 0;
          result[3] += 0;
          result[4] += 138353288;
          result[5] += 4210752;
        } else {
          result[0] += 0;
          result[1] += 51130563;
          result[2] += 0;
          result[3] += 0;
          result[4] += 92035013;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          result[0] += 114532461;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 26247022;
          result[5] += 2386092;
        } else {
          result[0] += 369618;
          result[1] += 369618;
          result[2] += 369618;
          result[3] += 19836194;
          result[4] += 6160308;
          result[5] += 116060217;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 141007301;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2158275;
          result[5] += 0;
        } else {
          result[0] += 1313445;
          result[1] += 53851271;
          result[2] += 1313445;
          result[3] += 0;
          result[4] += 86687413;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 119343194;
          result[1] += 3816206;
          result[2] += 693855;
          result[3] += 3700564;
          result[4] += 11795548;
          result[5] += 3816206;
        } else {
          result[0] += 26414313;
          result[1] += 3169717;
          result[2] += 34866893;
          result[3] += 29584030;
          result[4] += 16376874;
          result[5] += 32753748;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 21281369;
          result[4] += 13542689;
          result[5] += 108341517;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 22400056;
          result[3] += 89600224;
          result[4] += 1947830;
          result[5] += 29217464;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 111351003;
          result[2] += 31814572;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 116322030;
          result[3] += 26843545;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 8947848;
          result[1] += 13421772;
          result[2] += 71582788;
          result[3] += 22369621;
          result[4] += 4473924;
          result[5] += 22369621;
        } else {
          result[0] += 104620998;
          result[1] += 0;
          result[2] += 30285025;
          result[3] += 0;
          result[4] += 8259552;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1247630;
          result[1] += 0;
          result[2] += 115405802;
          result[3] += 24016883;
          result[4] += 0;
          result[5] += 2495260;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 141775619;
          result[3] += 1389957;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42cc0000))) ) ) {
          result[0] += 1472139;
          result[1] += 4048383;
          result[2] += 0;
          result[3] += 0;
          result[4] += 129548285;
          result[5] += 8096767;
        } else {
          result[0] += 0;
          result[1] += 106048575;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37117001;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 115043766;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28121809;
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
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 3378064;
          result[1] += 160860;
          result[2] += 0;
          result[3] += 7560429;
          result[4] += 9008171;
          result[5] += 123058051;
        } else {
          result[0] += 10157017;
          result[1] += 3385672;
          result[2] += 5804009;
          result[3] += 59974768;
          result[4] += 10640684;
          result[5] += 53203423;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 122379709;
          result[1] += 3152912;
          result[2] += 817421;
          result[3] += 4203883;
          result[4] += 7590344;
          result[5] += 5021304;
        } else {
          result[0] += 26935791;
          result[1] += 1106950;
          result[2] += 26197824;
          result[3] += 37636311;
          result[4] += 9962553;
          result[5] += 41326145;
        }
      }
    }
  } else {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5436667;
          result[3] += 27183337;
          result[4] += 5436667;
          result[5] += 105108904;
        } else {
          result[0] += 0;
          result[1] += 33038209;
          result[2] += 66076419;
          result[3] += 0;
          result[4] += 44050946;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 51130563;
          result[3] += 73287140;
          result[4] += 0;
          result[5] += 18747873;
        } else {
          result[0] += 1539414;
          result[1] += 0;
          result[2] += 120074354;
          result[3] += 15394148;
          result[4] += 0;
          result[5] += 6157659;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30140121;
          result[3] += 113025455;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 4116582;
          result[1] += 1372194;
          result[2] += 109775521;
          result[3] += 24242094;
          result[4] += 0;
          result[5] += 3659184;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 110442016;
          result[3] += 32723560;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 141595204;
          result[3] += 1570371;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 3961102;
          result[2] += 0;
          result[3] += 0;
          result[4] += 136375114;
          result[5] += 2829359;
        } else {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42870000))) ) ) {
          result[0] += 158019;
          result[1] += 0;
          result[2] += 158019;
          result[3] += 7900970;
          result[4] += 5530679;
          result[5] += 129417888;
        } else {
          result[0] += 14856805;
          result[1] += 1890866;
          result[2] += 7293340;
          result[3] += 47001528;
          result[4] += 17558042;
          result[5] += 54564993;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 13015052;
          result[2] += 13015052;
          result[3] += 0;
          result[4] += 117135471;
          result[5] += 0;
        } else {
          result[0] += 1943424;
          result[1] += 138630920;
          result[2] += 0;
          result[3] += 1295616;
          result[4] += 1295616;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          result[0] += 111817061;
          result[1] += 6181397;
          result[2] += 1766113;
          result[3] += 3973755;
          result[4] += 13135469;
          result[5] += 6291779;
        } else {
          result[0] += 29605227;
          result[1] += 883738;
          result[2] += 38442608;
          result[3] += 35349525;
          result[4] += 5744297;
          result[5] += 33140179;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 1626881;
          result[2] += 4880644;
          result[3] += 35791394;
          result[4] += 6507526;
          result[5] += 94359129;
        } else {
          result[0] += 0;
          result[1] += 27531841;
          result[2] += 66076419;
          result[3] += 5506368;
          result[4] += 11012736;
          result[5] += 33038209;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 46432078;
          result[3] += 61909438;
          result[4] += 0;
          result[5] += 34824059;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 119695809;
          result[3] += 21122789;
          result[4] += 0;
          result[5] += 2346976;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 8947848;
          result[2] += 49213166;
          result[3] += 62634939;
          result[4] += 0;
          result[5] += 22369621;
        } else {
          result[0] += 10397499;
          result[1] += 0;
          result[2] += 119971153;
          result[3] += 12796923;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 113690310;
          result[3] += 29475265;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 726728;
          result[1] += 0;
          result[2] += 138320717;
          result[3] += 4118129;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bc0000))) ) ) {
          result[0] += 0;
          result[1] += 4599697;
          result[2] += 0;
          result[3] += 4599697;
          result[4] += 125916711;
          result[5] += 8049470;
        } else {
          result[0] += 0;
          result[1] += 137200344;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5965232;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 5633194;
          result[1] += 686974;
          result[2] += 274789;
          result[3] += 10854203;
          result[4] += 9480254;
          result[5] += 116236159;
        } else {
          result[0] += 4338350;
          result[1] += 0;
          result[2] += 2892233;
          result[3] += 84597840;
          result[4] += 5061409;
          result[5] += 46275741;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 22906492;
          result[2] += 0;
          result[3] += 0;
          result[4] += 120259084;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 142154995;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1010580;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 112282224;
          result[1] += 2755392;
          result[2] += 344424;
          result[3] += 4821936;
          result[4] += 18598896;
          result[5] += 4362704;
        } else {
          result[0] += 27119470;
          result[1] += 6622196;
          result[2] += 23966043;
          result[3] += 35949065;
          result[4] += 13244392;
          result[5] += 36264408;
        }
      }
    }
  } else {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20452225;
          result[3] += 0;
          result[4] += 0;
          result[5] += 122713351;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37779804;
          result[3] += 89478485;
          result[4] += 0;
          result[5] += 15907286;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41756626;
          result[3] += 77548020;
          result[4] += 0;
          result[5] += 23860929;
        } else {
          result[0] += 1704352;
          result[1] += 0;
          result[2] += 117600294;
          result[3] += 23008753;
          result[4] += 0;
          result[5] += 852176;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42db0000))) ) ) {
          result[0] += 10604857;
          result[1] += 0;
          result[2] += 90141288;
          result[3] += 26512143;
          result[4] += 0;
          result[5] += 15907286;
        } else {
          result[0] += 107374182;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 47721858;
          result[3] += 95443717;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 338452;
          result[1] += 0;
          result[2] += 135550386;
          result[3] += 7107510;
          result[4] += 0;
          result[5] += 169226;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 435153;
          result[1] += 3481229;
          result[2] += 0;
          result[3] += 3916383;
          result[4] += 129675810;
          result[5] += 5656998;
        } else {
          result[0] += 0;
          result[1] += 137863147;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5302428;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 3112295;
          result[1] += 87144263;
          result[2] += 0;
          result[3] += 0;
          result[4] += 43572131;
          result[5] += 9336885;
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
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 4594340;
          result[1] += 0;
          result[2] += 444613;
          result[3] += 7558431;
          result[4] += 9781499;
          result[5] += 120786692;
        } else {
          result[0] += 7809031;
          result[1] += 520602;
          result[2] += 2082408;
          result[3] += 63513455;
          result[4] += 6247225;
          result[5] += 62992853;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 116640837;
          result[1] += 5327618;
          result[2] += 566767;
          result[3] += 3854021;
          result[4] += 12128833;
          result[5] += 4647496;
        } else {
          result[0] += 29652417;
          result[1] += 1389957;
          result[2] += 19459398;
          result[3] += 43551987;
          result[4] += 8339742;
          result[5] += 40772073;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13015052;
          result[3] += 45552683;
          result[4] += 0;
          result[5] += 84597840;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 22805136;
          result[3] += 106423968;
          result[4] += 0;
          result[5] += 13936472;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20452225;
          result[3] += 61356675;
          result[4] += 0;
          result[5] += 61356675;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 123418600;
          result[3] += 9873488;
          result[4] += 0;
          result[5] += 9873488;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ef0000))) ) ) {
          result[0] += 2265278;
          result[1] += 0;
          result[2] += 104655848;
          result[3] += 27636392;
          result[4] += 0;
          result[5] += 8608056;
        } else {
          result[0] += 95443717;
          result[1] += 0;
          result[2] += 39768215;
          result[3] += 0;
          result[4] += 0;
          result[5] += 7953643;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1674451;
          result[1] += 0;
          result[2] += 123072162;
          result[3] += 16744511;
          result[4] += 0;
          result[5] += 1674451;
        } else {
          result[0] += 265121;
          result[1] += 0;
          result[2] += 141309726;
          result[3] += 1325607;
          result[4] += 0;
          result[5] += 265121;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 16976155;
          result[1] += 565871;
          result[2] += 0;
          result[3] += 0;
          result[4] += 118833087;
          result[5] += 6790462;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 2143655;
          result[2] += 306236;
          result[3] += 9033977;
          result[4] += 8574622;
          result[5] += 123107083;
        } else {
          result[0] += 538216;
          result[1] += 5920380;
          result[2] += 10226112;
          result[3] += 60280242;
          result[4] += 9687896;
          result[5] += 56512727;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 141697211;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1468364;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 38824563;
          result[2] += 0;
          result[3] += 0;
          result[4] += 104341013;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 119199532;
          result[1] += 1892056;
          result[2] += 126137;
          result[3] += 1892056;
          result[4] += 14127352;
          result[5] += 5928442;
        } else {
          result[0] += 51130563;
          result[1] += 3515226;
          result[2] += 15978300;
          result[3] += 31317469;
          result[4] += 8308716;
          result[5] += 32915299;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 17895697;
          result[4] += 14316557;
          result[5] += 96636764;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19272289;
          result[3] += 91772805;
          result[4] += 917728;
          result[5] += 31202753;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 5113056;
          result[1] += 5113056;
          result[2] += 33234865;
          result[3] += 10226112;
          result[4] += 33234865;
          result[5] += 56243619;
        } else {
          result[0] += 4273599;
          result[1] += 0;
          result[2] += 130344778;
          result[3] += 6410398;
          result[4] += 0;
          result[5] += 2136799;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 91105366;
          result[4] += 0;
          result[5] += 52060209;
        } else {
          result[0] += 3589109;
          result[1] += 0;
          result[2] += 114452703;
          result[3] += 23927394;
          result[4] += 398789;
          result[5] += 797579;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 130150524;
          result[3] += 13015052;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 142187224;
          result[3] += 978352;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 574962;
          result[2] += 0;
          result[3] += 1149924;
          result[4] += 130516409;
          result[5] += 10924280;
        } else {
          result[0] += 0;
          result[1] += 88101893;
          result[2] += 0;
          result[3] += 11012736;
          result[4] += 16519104;
          result[5] += 27531841;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 5341999;
          result[1] += 305257;
          result[2] += 0;
          result[3] += 6257770;
          result[4] += 9157712;
          result[5] += 122102837;
        } else {
          result[0] += 3027670;
          result[1] += 0;
          result[2] += 9083012;
          result[3] += 57093220;
          result[4] += 6920390;
          result[5] += 67041282;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 0;
          result[1] += 142808555;
          result[2] += 0;
          result[3] += 0;
          result[4] += 357021;
          result[5] += 0;
        } else {
          result[0] += 26030104;
          result[1] += 45552683;
          result[2] += 0;
          result[3] += 0;
          result[4] += 71582788;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42890000))) ) ) {
          result[0] += 20276669;
          result[1] += 38095561;
          result[2] += 1228889;
          result[3] += 614444;
          result[4] += 78648900;
          result[5] += 4301111;
        } else {
          result[0] += 109330135;
          result[1] += 2235374;
          result[2] += 4470749;
          result[3] += 9246321;
          result[4] += 10465617;
          result[5] += 7417379;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 15907286;
          result[4] += 23860929;
          result[5] += 103397360;
        } else {
          result[0] += 917728;
          result[1] += 0;
          result[2] += 16519104;
          result[3] += 95443717;
          result[4] += 3670912;
          result[5] += 26614113;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 5965232;
          result[1] += 2982616;
          result[2] += 2982616;
          result[3] += 2982616;
          result[4] += 32808777;
          result[5] += 95443717;
        } else {
          result[0] += 2016416;
          result[1] += 0;
          result[2] += 98804411;
          result[3] += 28229831;
          result[4] += 4032833;
          result[5] += 10082082;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 143165576;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 97307852;
          result[3] += 43620761;
          result[4] += 0;
          result[5] += 2236962;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1105525;
          result[1] += 0;
          result[2] += 121607825;
          result[3] += 19346699;
          result[4] += 0;
          result[5] += 1105525;
        } else {
          result[0] += 2686033;
          result[1] += 0;
          result[2] += 137524906;
          result[3] += 2954636;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42850000))) ) ) {
          result[0] += 518715;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 137459702;
          result[5] += 5187158;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20452225;
          result[3] += 10226112;
          result[4] += 40904450;
          result[5] += 71582788;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 95443717;
          result[2] += 0;
          result[3] += 23860929;
          result[4] += 23860929;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42660000))) ) ) {
          result[0] += 22605091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 15070060;
          result[4] += 75350303;
          result[5] += 30140121;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2519042;
          result[4] += 2728962;
          result[5] += 137917571;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
          result[0] += 99114629;
          result[1] += 3003473;
          result[2] += 0;
          result[3] += 4004631;
          result[4] += 28032420;
          result[5] += 9010420;
        } else {
          result[0] += 1160174;
          result[1] += 464069;
          result[2] += 3712559;
          result[3] += 51743798;
          result[4] += 16010412;
          result[5] += 70074560;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 19694735;
          result[1] += 49994328;
          result[2] += 9847367;
          result[3] += 3029959;
          result[4] += 56811736;
          result[5] += 3787449;
        } else {
          result[0] += 117265082;
          result[1] += 4039526;
          result[2] += 4039526;
          result[3] += 6059289;
          result[4] += 8316672;
          result[5] += 3445478;
        }
      } else {
        result[0] += 0;
        result[1] += 143165576;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 1376592;
          result[1] += 7571256;
          result[2] += 30285025;
          result[3] += 50933907;
          result[4] += 11701032;
          result[5] += 41297762;
        } else {
          result[0] += 26882619;
          result[1] += 3751063;
          result[2] += 89400338;
          result[3] += 20630847;
          result[4] += 0;
          result[5] += 2500708;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 97034446;
          result[3] += 38177487;
          result[4] += 0;
          result[5] += 7953643;
        } else {
          result[0] += 401024;
          result[1] += 0;
          result[2] += 137150216;
          result[3] += 4611776;
          result[4] += 200512;
          result[5] += 802048;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42300000))) ) ) {
          result[0] += 0;
          result[1] += 111351003;
          result[2] += 0;
          result[3] += 0;
          result[4] += 31814572;
          result[5] += 0;
        } else {
          result[0] += 3033168;
          result[1] += 1213267;
          result[2] += 0;
          result[3] += 0;
          result[4] += 133459435;
          result[5] += 5459704;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 72796055;
          result[1] += 12132675;
          result[2] += 0;
          result[3] += 0;
          result[4] += 47317436;
          result[5] += 10919408;
        } else {
          result[0] += 1099582;
          result[1] += 329874;
          result[2] += 329874;
          result[3] += 26170051;
          result[4] += 5937742;
          result[5] += 109298450;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 9544371;
          result[4] += 90671531;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 142514823;
          result[2] += 0;
          result[3] += 0;
          result[4] += 650752;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 113640689;
          result[1] += 6628035;
          result[2] += 361529;
          result[3] += 2169175;
          result[4] += 19040539;
          result[5] += 1325607;
        } else {
          result[0] += 38824563;
          result[1] += 1213267;
          result[2] += 24669774;
          result[3] += 33162647;
          result[4] += 10919408;
          result[5] += 34375915;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 25150709;
          result[3] += 90929487;
          result[4] += 967334;
          result[5] += 26118044;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 118267215;
          result[3] += 12449180;
          result[4] += 0;
          result[5] += 12449180;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42e70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 120006439;
          result[3] += 23159137;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ef0000))) ) ) {
          result[0] += 2272469;
          result[1] += 0;
          result[2] += 110214769;
          result[3] += 15907286;
          result[4] += 0;
          result[5] += 14771051;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 57266230;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 57266230;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 136445940;
          result[3] += 6346322;
          result[4] += 0;
          result[5] += 373313;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 542293;
          result[1] += 2711469;
          result[2] += 0;
          result[3] += 0;
          result[4] += 135573462;
          result[5] += 4338350;
        } else {
          result[0] += 87934186;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1453457;
          result[4] += 26888966;
          result[5] += 26888966;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 50631728;
          result[2] += 0;
          result[3] += 5237764;
          result[4] += 71582788;
          result[5] += 15713294;
        } else {
          result[0] += 286045;
          result[1] += 715112;
          result[2] += 572090;
          result[3] += 14445277;
          result[4] += 4433699;
          result[5] += 122713351;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424a0000))) ) ) {
          result[0] += 0;
          result[1] += 142766786;
          result[2] += 0;
          result[3] += 0;
          result[4] += 398789;
          result[5] += 0;
        } else {
          result[0] += 30678337;
          result[1] += 76695844;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35791394;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 106139996;
          result[1] += 9761289;
          result[2] += 112198;
          result[3] += 4824545;
          result[4] += 15932219;
          result[5] += 6395327;
        } else {
          result[0] += 24927653;
          result[1] += 673720;
          result[2] += 26275094;
          result[3] += 53223908;
          result[4] += 3705461;
          result[5] += 34359738;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 2468372;
          result[2] += 14810232;
          result[3] += 29620464;
          result[4] += 0;
          result[5] += 96266508;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4544938;
          result[3] += 99988656;
          result[4] += 0;
          result[5] += 38631980;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 9279250;
          result[1] += 0;
          result[2] += 72908395;
          result[3] += 47721858;
          result[4] += 2651214;
          result[5] += 10604857;
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
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 114532461;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1148386;
          result[1] += 0;
          result[2] += 116752676;
          result[3] += 24881717;
          result[4] += 0;
          result[5] += 382795;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 132246168;
          result[3] += 9706140;
          result[4] += 0;
          result[5] += 1213267;
        } else {
          result[0] += 325376;
          result[1] += 0;
          result[2] += 142189447;
          result[3] += 650752;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 563644;
          result[1] += 563644;
          result[2] += 2254576;
          result[3] += 0;
          result[4] += 133019984;
          result[5] += 6763728;
        } else {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 6362914;
          result[4] += 2783775;
          result[5] += 134018886;
        } else {
          result[0] += 13610811;
          result[1] += 4788989;
          result[2] += 2520520;
          result[3] += 44361164;
          result[4] += 13862863;
          result[5] += 64021226;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 100236011;
          result[1] += 10757525;
          result[2] += 0;
          result[3] += 3317741;
          result[4] += 21716126;
          result[5] += 7138171;
        } else {
          result[0] += 26488785;
          result[1] += 2207398;
          result[2] += 29957554;
          result[3] += 49193458;
          result[4] += 5676168;
          result[5] += 29642211;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 65075262;
          result[2] += 0;
          result[3] += 0;
          result[4] += 78090314;
          result[5] += 0;
        } else {
          result[0] += 839680;
          result[1] += 142325895;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 4936744;
          result[2] += 4936744;
          result[3] += 19746976;
          result[4] += 0;
          result[5] += 113545112;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26030104;
          result[3] += 104120419;
          result[4] += 0;
          result[5] += 13015052;
        } else {
          result[0] += 0;
          result[1] += 5903735;
          result[2] += 84128225;
          result[3] += 13283404;
          result[4] += 2951867;
          result[5] += 36898344;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 1645581;
          result[1] += 0;
          result[2] += 74051160;
          result[3] += 65823253;
          result[4] += 0;
          result[5] += 1645581;
        } else {
          result[0] += 1767476;
          result[1] += 0;
          result[2] += 120188385;
          result[3] += 17674762;
          result[4] += 0;
          result[5] += 3534952;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 97955394;
          result[3] += 45210182;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 696104;
          result[1] += 0;
          result[2] += 138292842;
          result[3] += 3248489;
          result[4] += 0;
          result[5] += 928139;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
          result[0] += 9405037;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1567506;
          result[4] += 113905458;
          result[5] += 18287573;
        } else {
          result[0] += 94591541;
          result[1] += 15339168;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28121809;
          result[5] += 5113056;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 533536;
          result[2] += 0;
          result[3] += 5691053;
          result[4] += 4979672;
          result[5] += 131961313;
        } else {
          result[0] += 2080895;
          result[1] += 7907401;
          result[2] += 1248537;
          result[3] += 67837177;
          result[4] += 6242685;
          result[5] += 57848881;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 103167874;
          result[1] += 10175737;
          result[2] += 1511248;
          result[3] += 5238993;
          result[4] += 19343976;
          result[5] += 3727745;
        } else {
          result[0] += 22106449;
          result[1] += 701792;
          result[2] += 31931537;
          result[3] += 43160210;
          result[4] += 14737632;
          result[5] += 30527953;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c00000))) ) ) {
          result[0] += 0;
          result[1] += 141266828;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1898747;
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
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 11012736;
          result[2] += 11012736;
          result[3] += 0;
          result[4] += 110127366;
          result[5] += 11012736;
        } else {
          result[0] += 0;
          result[1] += 1789569;
          result[2] += 5368709;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 82320206;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 74807238;
          result[3] += 60619658;
          result[4] += 0;
          result[5] += 7738679;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 137587696;
          result[3] += 5577879;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 11930464;
          result[1] += 35791394;
          result[2] += 83513252;
          result[3] += 11930464;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 121140103;
          result[1] += 0;
          result[2] += 11012736;
          result[3] += 11012736;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1475933;
          result[1] += 0;
          result[2] += 114384867;
          result[3] += 23614940;
          result[4] += 0;
          result[5] += 3689834;
        } else {
          result[0] += 1570782;
          result[1] += 0;
          result[2] += 139575217;
          result[3] += 2019577;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 1908874;
          result[1] += 1431655;
          result[2] += 0;
          result[3] += 0;
          result[4] += 130280674;
          result[5] += 9544371;
        } else {
          result[0] += 0;
          result[1] += 126322567;
          result[2] += 0;
          result[3] += 0;
          result[4] += 16843009;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 4804213;
          result[1] += 2562247;
          result[2] += 160140;
          result[3] += 5925197;
          result[4] += 6565759;
          result[5] += 123148018;
        } else {
          result[0] += 3121990;
          result[1] += 0;
          result[2] += 6689980;
          result[3] += 77603770;
          result[4] += 891997;
          result[5] += 54857837;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
          result[0] += 8421504;
          result[1] += 53591392;
          result[2] += 0;
          result[3] += 0;
          result[4] += 81152679;
          result[5] += 0;
        } else {
          result[0] += 106037364;
          result[1] += 1916945;
          result[2] += 8071350;
          result[3] += 8979377;
          result[4] += 8273134;
          result[5] += 9887404;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42940000))) ) ) {
          result[0] += 1020182;
          result[1] += 141805333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 340060;
          result[5] += 0;
        } else {
          result[0] += 33038209;
          result[1] += 22025473;
          result[2] += 0;
          result[3] += 88101893;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3976821;
          result[4] += 31814572;
          result[5] += 107374182;
        } else {
          result[0] += 0;
          result[1] += 5506368;
          result[2] += 0;
          result[3] += 0;
          result[4] += 115633734;
          result[5] += 22025473;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 16519104;
          result[4] += 0;
          result[5] += 126646471;
        } else {
          result[0] += 617093;
          result[1] += 617093;
          result[2] += 34557208;
          result[3] += 75285346;
          result[4] += 617093;
          result[5] += 31471743;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 3787449;
          result[1] += 0;
          result[2] += 99231166;
          result[3] += 36359511;
          result[4] += 757489;
          result[5] += 3029959;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 134130855;
          result[3] += 8339742;
          result[4] += 0;
          result[5] += 694978;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bc0000))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 2394963;
          result[1] += 0;
          result[2] += 137311222;
          result[3] += 3193284;
          result[4] += 0;
          result[5] += 266107;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 596523;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 138989913;
          result[5] += 3579139;
        } else {
          result[0] += 0;
          result[1] += 134217727;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8947848;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 214641;
          result[3] += 3004974;
          result[4] += 3863538;
          result[5] += 136082422;
        } else {
          result[0] += 9368217;
          result[1] += 4083581;
          result[2] += 1921685;
          result[3] += 37472869;
          result[4] += 10569270;
          result[5] += 79749952;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0;
          result[1] += 142804957;
          result[2] += 0;
          result[3] += 0;
          result[4] += 360618;
          result[5] += 0;
        } else {
          result[0] += 6817408;
          result[1] += 98852421;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37495746;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
          result[0] += 4364804;
          result[1] += 26188824;
          result[2] += 0;
          result[3] += 3491843;
          result[4] += 105628260;
          result[5] += 3491843;
        } else {
          result[0] += 104725770;
          result[1] += 4338350;
          result[2] += 1816053;
          result[3] += 9181161;
          result[4] += 9988296;
          result[5] += 13115944;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 143165576;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15675063;
          result[3] += 100320403;
          result[4] += 0;
          result[5] += 27170109;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 2105376;
          result[1] += 0;
          result[2] += 65266659;
          result[3] += 50529027;
          result[4] += 4210752;
          result[5] += 21053761;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 120560485;
          result[3] += 20093414;
          result[4] += 0;
          result[5] += 2511676;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 3566402;
          result[1] += 509486;
          result[2] += 109030011;
          result[3] += 21398413;
          result[4] += 509486;
          result[5] += 8151776;
        } else {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 3807595;
          result[1] += 0;
          result[2] += 120320005;
          result[3] += 16753418;
          result[4] += 0;
          result[5] += 2284557;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 139966345;
          result[3] += 3199230;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 1183186;
          result[1] += 591593;
          result[2] += 0;
          result[3] += 1774779;
          result[4] += 131925303;
          result[5] += 7690712;
        } else {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5598653;
          result[4] += 4598894;
          result[5] += 132968028;
        } else {
          result[0] += 11189293;
          result[1] += 1147619;
          result[2] += 1147619;
          result[3] += 38445265;
          result[4] += 13484533;
          result[5] += 77751244;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 362444;
          result[1] += 139903576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2899555;
          result[5] += 0;
        } else {
          result[0] += 3388534;
          result[1] += 54216549;
          result[2] += 3388534;
          result[3] += 2541400;
          result[4] += 73700622;
          result[5] += 5929935;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
          result[0] += 38516627;
          result[1] += 3633644;
          result[2] += 9447474;
          result[3] += 33429525;
          result[4] += 31249339;
          result[5] += 26888966;
        } else {
          result[0] += 117635665;
          result[1] += 4071580;
          result[2] += 5061965;
          result[3] += 4951922;
          result[4] += 7482904;
          result[5] += 3961537;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 22025473;
          result[4] += 19272289;
          result[5] += 101867814;
        } else {
          result[0] += 0;
          result[1] += 4544938;
          result[2] += 26133398;
          result[3] += 94307482;
          result[4] += 0;
          result[5] += 18179755;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10226112;
          result[3] += 20452225;
          result[4] += 25565281;
          result[5] += 86921957;
        } else {
          result[0] += 1859293;
          result[1] += 1859293;
          result[2] += 111557592;
          result[3] += 18592932;
          result[4] += 0;
          result[5] += 9296466;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 10226112;
          result[1] += 20452225;
          result[2] += 51130563;
          result[3] += 30678337;
          result[4] += 20452225;
          result[5] += 10226112;
        } else {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 6817408;
          result[1] += 1704352;
          result[2] += 78400196;
          result[3] += 25565281;
          result[4] += 3408704;
          result[5] += 27269633;
        } else {
          result[0] += 2734623;
          result[1] += 0;
          result[2] += 130457620;
          result[3] += 9329891;
          result[4] += 0;
          result[5] += 643440;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_2/test_data.csv", "r");
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
