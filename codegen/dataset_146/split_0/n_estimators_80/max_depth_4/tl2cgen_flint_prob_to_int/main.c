
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
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 0;
          result[1] += 11930464;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41756626;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
          result[0] += 884952;
          result[1] += 1769904;
          result[2] += 0;
          result[3] += 1179936;
          result[4] += 44690078;
          result[5] += 5162220;
        } else {
          result[0] += 7083253;
          result[1] += 330993;
          result[2] += 628887;
          result[3] += 8539623;
          result[4] += 4402209;
          result[5] += 32702124;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42940000))) ) ) {
          result[0] += 1320174;
          result[1] += 30364010;
          result[2] += 0;
          result[3] += 0;
          result[4] += 22002906;
          result[5] += 0;
        } else {
          result[0] += 40677591;
          result[1] += 549697;
          result[2] += 3847880;
          result[3] += 3847880;
          result[4] += 1969748;
          result[5] += 2794293;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9073874;
          result[3] += 31002404;
          result[4] += 1512312;
          result[5] += 12098499;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28908433;
          result[3] += 0;
          result[4] += 0;
          result[5] += 24778657;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40982512;
          result[3] += 11065278;
          result[4] += 0;
          result[5] += 1639300;
        } else {
          result[0] += 21225129;
          result[1] += 0;
          result[2] += 32461962;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28185722;
          result[3] += 24159191;
          result[4] += 0;
          result[5] += 1342177;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52494044;
          result[3] += 1193046;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 17895697;
          result[1] += 0;
          result[2] += 17895697;
          result[3] += 5965232;
          result[4] += 0;
          result[5] += 11930464;
        } else {
          result[0] += 151018;
          result[1] += 0;
          result[2] += 50666720;
          result[3] += 2567315;
          result[4] += 0;
          result[5] += 302037;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 668304;
          result[1] += 1336608;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51459411;
          result[5] += 222768;
        } else {
          result[0] += 0;
          result[1] += 11744051;
          result[2] += 0;
          result[3] += 10066329;
          result[4] += 18454937;
          result[5] += 13421772;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 900790;
          result[1] += 60052;
          result[2] += 0;
          result[3] += 2221948;
          result[4] += 3423002;
          result[5] += 47081296;
        } else {
          result[0] += 3493338;
          result[1] += 551579;
          result[2] += 919299;
          result[3] += 24453366;
          result[4] += 2941758;
          result[5] += 21327748;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 11930464;
          result[2] += 0;
          result[3] += 5965232;
          result[4] += 35791394;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53428980;
          result[2] += 0;
          result[3] += 0;
          result[4] += 258111;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 41442666;
          result[1] += 2907538;
          result[2] += 81902;
          result[3] += 1310440;
          result[4] += 5856029;
          result[5] += 2088513;
        } else {
          result[0] += 6399785;
          result[1] += 829601;
          result[2] += 8058989;
          result[3] += 13155115;
          result[4] += 8888591;
          result[5] += 16355007;
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 339791;
          result[1] += 4077500;
          result[2] += 5776459;
          result[3] += 25824170;
          result[4] += 2038750;
          result[5] += 15630418;
        } else {
          result[0] += 6100805;
          result[1] += 0;
          result[2] += 29283867;
          result[3] += 14641933;
          result[4] += 0;
          result[5] += 3660483;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 46230550;
          result[3] += 3728270;
          result[4] += 0;
          result[5] += 3728270;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 25264513;
          result[4] += 0;
          result[5] += 1579032;
        } else {
          result[0] += 7405116;
          result[1] += 1851279;
          result[2] += 14810232;
          result[3] += 11107674;
          result[4] += 0;
          result[5] += 18512790;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 4904109;
          result[1] += 0;
          result[2] += 42072095;
          result[3] += 6452775;
          result[4] += 0;
          result[5] += 258111;
        } else {
          result[0] += 172905;
          result[1] += 0;
          result[2] += 51439322;
          result[3] += 2074863;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 2450448;
          result[2] += 0;
          result[3] += 445536;
          result[4] += 46112978;
          result[5] += 4678128;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1114384;
          result[1] += 131104;
          result[2] += 262208;
          result[3] += 1245488;
          result[4] += 4523088;
          result[5] += 46410818;
        } else {
          result[0] += 5892485;
          result[1] += 327360;
          result[2] += 2455202;
          result[3] += 20623699;
          result[4] += 4746724;
          result[5] += 19641618;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 1660425;
          result[1] += 7748652;
          result[2] += 1106950;
          result[3] += 553475;
          result[4] += 42064112;
          result[5] += 553475;
        } else {
          result[0] += 113263;
          result[1] += 51535076;
          result[2] += 113263;
          result[3] += 226527;
          result[4] += 1585694;
          result[5] += 113263;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
          result[0] += 8259552;
          result[1] += 635350;
          result[2] += 317675;
          result[3] += 13977704;
          result[4] += 4129776;
          result[5] += 26367032;
        } else {
          result[0] += 42336333;
          result[1] += 1513434;
          result[2] += 1553261;
          result[3] += 2309978;
          result[4] += 4022549;
          result[5] += 1951533;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 13421772;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40265318;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 1830241;
          result[2] += 1220161;
          result[3] += 12811692;
          result[4] += 610080;
          result[5] += 37214915;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 1789569;
          result[2] += 10737418;
          result[3] += 1789569;
          result[4] += 5368709;
          result[5] += 34001824;
        } else {
          result[0] += 258111;
          result[1] += 516222;
          result[2] += 18583993;
          result[3] += 29940877;
          result[4] += 258111;
          result[5] += 4129776;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d50000))) ) ) {
          result[0] += 10737418;
          result[1] += 17895697;
          result[2] += 14316557;
          result[3] += 0;
          result[4] += 10737418;
          result[5] += 0;
        } else {
          result[0] += 49941480;
          result[1] += 0;
          result[2] += 3745611;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36448116;
          result[3] += 13791179;
          result[4] += 0;
          result[5] += 3447794;
        } else {
          result[0] += 1279787;
          result[1] += 0;
          result[2] += 49079855;
          result[3] += 2815532;
          result[4] += 0;
          result[5] += 511915;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53459603;
          result[5] += 227487;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4400581;
          result[4] += 28163719;
          result[5] += 21122789;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1577375;
          result[1] += 281674;
          result[2] += 56334;
          result[3] += 2985745;
          result[4] += 3267420;
          result[5] += 45518541;
        } else {
          result[0] += 2041334;
          result[1] += 204133;
          result[2] += 1837200;
          result[3] += 26945612;
          result[4] += 1428933;
          result[5] += 21229876;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 38384271;
          result[1] += 3089643;
          result[2] += 836021;
          result[3] += 1926483;
          result[4] += 8178466;
          result[5] += 1272205;
        } else {
          result[0] += 8259552;
          result[1] += 884952;
          result[2] += 15339168;
          result[3] += 15191676;
          result[4] += 3982284;
          result[5] += 10029456;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0;
          result[1] += 32212254;
          result[2] += 0;
          result[3] += 0;
          result[4] += 21474836;
          result[5] += 0;
        } else {
          result[0] += 131909;
          result[1] += 53555181;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42940000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7669584;
          result[3] += 0;
          result[4] += 46017506;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3355443;
          result[4] += 0;
          result[5] += 50331647;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 37347541;
          result[4] += 0;
          result[5] += 16339549;
        } else {
          result[0] += 0;
          result[1] += 1917396;
          result[2] += 24287017;
          result[3] += 17256565;
          result[4] += 0;
          result[5] += 10226112;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42e50000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
          result[0] += 48318382;
          result[1] += 0;
          result[2] += 5368709;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 657636;
          result[1] += 59785;
          result[2] += 47768358;
          result[3] += 4304532;
          result[4] += 0;
          result[5] += 896777;
        }
      } else {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 409825;
          result[4] += 52662528;
          result[5] += 614737;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 2012526;
          result[1] += 59191;
          result[2] += 59191;
          result[3] += 2722829;
          result[4] += 2486061;
          result[5] += 46347290;
        } else {
          result[0] += 3192205;
          result[1] += 290200;
          result[2] += 0;
          result[3] += 22780738;
          result[4] += 1596102;
          result[5] += 25827843;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 7388131;
          result[2] += 492542;
          result[3] += 1970168;
          result[4] += 41866080;
          result[5] += 1970168;
        } else {
          result[0] += 0;
          result[1] += 52853810;
          result[2] += 0;
          result[3] += 0;
          result[4] += 833280;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 41720197;
          result[1] += 1885195;
          result[2] += 1065545;
          result[3] += 1967160;
          result[4] += 4753971;
          result[5] += 2295020;
        } else {
          result[0] += 6494406;
          result[1] += 721600;
          result[2] += 14864974;
          result[3] += 16452495;
          result[4] += 5484165;
          result[5] += 9669449;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5804009;
          result[3] += 23216039;
          result[4] += 725501;
          result[5] += 23941540;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 49213166;
          result[3] += 4473924;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 26843545;
          result[4] += 0;
          result[5] += 26843545;
        } else {
          result[0] += 2863311;
          result[1] += 1431655;
          result[2] += 45097156;
          result[3] += 715827;
          result[4] += 0;
          result[5] += 3579139;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6710886;
          result[3] += 0;
          result[4] += 6710886;
          result[5] += 40265318;
        } else {
          result[0] += 610080;
          result[1] += 0;
          result[2] += 42553120;
          result[3] += 10066329;
          result[4] += 0;
          result[5] += 457560;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 432089;
          result[1] += 0;
          result[2] += 51094555;
          result[3] += 2160446;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1325607;
          result[1] += 5136727;
          result[2] += 0;
          result[3] += 0;
          result[4] += 44904943;
          result[5] += 2319812;
        } else {
          result[0] += 38722585;
          result[1] += 2468372;
          result[2] += 0;
          result[3] += 771366;
          result[4] += 7096569;
          result[5] += 4628197;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 121601;
          result[1] += 364804;
          result[2] += 729609;
          result[3] += 2736035;
          result[4] += 5289668;
          result[5] += 44445372;
        } else {
          result[0] += 2756904;
          result[1] += 1451002;
          result[2] += 1305902;
          result[3] += 21910137;
          result[4] += 5804009;
          result[5] += 20459134;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42940000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42660000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 19173961;
          result[2] += 0;
          result[3] += 0;
          result[4] += 34513130;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
          result[0] += 51106586;
          result[1] += 0;
          result[2] += 566452;
          result[3] += 503513;
          result[4] += 1132904;
          result[5] += 377634;
        } else {
          result[0] += 12815628;
          result[1] += 1039104;
          result[2] += 18011153;
          result[3] += 4849156;
          result[4] += 9698313;
          result[5] += 7273734;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8801162;
          result[3] += 29923952;
          result[4] += 880116;
          result[5] += 14081859;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31750430;
          result[3] += 20782099;
          result[4] += 0;
          result[5] += 1154561;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 531555;
          result[1] += 0;
          result[2] += 47839982;
          result[3] += 4252442;
          result[4] += 0;
          result[5] += 1063110;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42900000))) ) ) {
          result[0] += 16106127;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 26843545;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 47702861;
          result[3] += 5300317;
          result[4] += 0;
          result[5] += 683911;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 15907286;
          result[1] += 0;
          result[2] += 37779804;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 709521;
          result[1] += 0;
          result[2] += 51558528;
          result[3] += 1419042;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42d00000))) ) ) {
          result[0] += 183859;
          result[1] += 183859;
          result[2] += 0;
          result[3] += 0;
          result[4] += 48906733;
          result[5] += 4412637;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 3675672;
          result[1] += 723996;
          result[2] += 0;
          result[3] += 2227680;
          result[4] += 2394756;
          result[5] += 44664986;
        } else {
          result[0] += 1460873;
          result[1] += 0;
          result[2] += 2191309;
          result[3] += 33600084;
          result[4] += 547827;
          result[5] += 15886996;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 24926149;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28760941;
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
          result[0] += 39153615;
          result[1] += 1626881;
          result[2] += 361529;
          result[3] += 2096869;
          result[4] += 8351325;
          result[5] += 2096869;
        } else {
          result[0] += 8004257;
          result[1] += 390451;
          result[2] += 19132127;
          result[3] += 16008514;
          result[4] += 2147483;
          result[5] += 8004257;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 38544578;
          result[4] += 0;
          result[5] += 15142512;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7456540;
          result[3] += 10439156;
          result[4] += 1491308;
          result[5] += 34300086;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 26843545;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 46017506;
          result[3] += 0;
          result[4] += 0;
          result[5] += 7669584;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 492542;
          result[2] += 43343706;
          result[3] += 7716493;
          result[4] += 328361;
          result[5] += 1805987;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 45517316;
          result[3] += 8169774;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52681714;
          result[3] += 904838;
          result[4] += 0;
          result[5] += 100537;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 182609;
          result[1] += 547827;
          result[2] += 0;
          result[3] += 365218;
          result[4] += 48391425;
          result[5] += 4200010;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 444745;
          result[2] += 635350;
          result[3] += 2541400;
          result[4] += 3113215;
          result[5] += 46952379;
        } else {
          result[0] += 8533047;
          result[1] += 888859;
          result[2] += 2488805;
          result[3] += 19910444;
          result[4] += 4799839;
          result[5] += 17066095;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 52794431;
          result[2] += 0;
          result[3] += 0;
          result[4] += 892659;
          result[5] += 0;
        } else {
          result[0] += 1333840;
          result[1] += 13004947;
          result[2] += 1000380;
          result[3] += 2667681;
          result[4] += 34012939;
          result[5] += 1667300;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
          result[0] += 13953913;
          result[1] += 0;
          result[2] += 0;
          result[3] += 10406308;
          result[4] += 3784112;
          result[5] += 25542757;
        } else {
          result[0] += 45535418;
          result[1] += 1051828;
          result[2] += 876523;
          result[3] += 1972178;
          result[4] += 3549921;
          result[5] += 701219;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5752188;
          result[3] += 10226112;
          result[4] += 3834792;
          result[5] += 33873998;
        } else {
          result[0] += 7158278;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 10737418;
          result[4] += 0;
          result[5] += 3579139;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 454975;
          result[1] += 0;
          result[2] += 4549753;
          result[3] += 40037830;
          result[4] += 0;
          result[5] += 8644531;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 994205;
          result[1] += 3976821;
          result[2] += 18392799;
          result[3] += 11930464;
          result[4] += 994205;
          result[5] += 17398594;
        } else {
          result[0] += 41224016;
          result[1] += 0;
          result[2] += 10545678;
          result[3] += 958698;
          result[4] += 958698;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31610156;
          result[3] += 20069940;
          result[4] += 0;
          result[5] += 2006994;
        } else {
          result[0] += 759722;
          result[1] += 0;
          result[2] += 49318684;
          result[3] += 3482063;
          result[4] += 0;
          result[5] += 126620;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d70000))) ) ) {
          result[0] += 427785;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50050913;
          result[5] += 3208391;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 156294;
          result[3] += 1719237;
          result[4] += 2031825;
          result[5] += 49779733;
        } else {
          result[0] += 4540134;
          result[1] += 2724080;
          result[2] += 1475543;
          result[3] += 14641933;
          result[4] += 3291597;
          result[5] += 27013800;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
          result[0] += 2971610;
          result[1] += 19612627;
          result[2] += 0;
          result[3] += 0;
          result[4] += 30310424;
          result[5] += 792429;
        } else {
          result[0] += 41933561;
          result[1] += 720377;
          result[2] += 1023694;
          result[3] += 3677717;
          result[4] += 3412315;
          result[5] += 2919425;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 3579139;
          result[1] += 35791394;
          result[2] += 0;
          result[3] += 0;
          result[4] += 14316557;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2236962;
          result[4] += 6710886;
          result[5] += 44739242;
        } else {
          result[0] += 631612;
          result[1] += 947419;
          result[2] += 4105483;
          result[3] += 38528383;
          result[4] += 0;
          result[5] += 9474192;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 1167110;
          result[2] += 15172438;
          result[3] += 9336885;
          result[4] += 10503996;
          result[5] += 17506660;
        } else {
          result[0] += 8718416;
          result[1] += 0;
          result[2] += 37626850;
          result[3] += 4588640;
          result[4] += 917728;
          result[5] += 1835456;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 32212254;
        } else {
          result[0] += 8259552;
          result[1] += 0;
          result[2] += 33038209;
          result[3] += 2064888;
          result[4] += 0;
          result[5] += 10324440;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41916124;
          result[3] += 9761289;
          result[4] += 0;
          result[5] += 2009677;
        } else {
          result[0] += 619764;
          result[1] += 0;
          result[2] += 50433328;
          result[3] += 2556528;
          result[4] += 0;
          result[5] += 77470;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 1303084;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49517220;
          result[5] += 2866786;
        } else {
          result[0] += 24523733;
          result[1] += 15907286;
          result[2] += 0;
          result[3] += 0;
          result[4] += 13256071;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 947419;
          result[4] += 2368548;
          result[5] += 50371123;
        } else {
          result[0] += 106100;
          result[1] += 1909817;
          result[2] += 1803716;
          result[3] += 16339549;
          result[4] += 4986745;
          result[5] += 28541161;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53447950;
          result[2] += 0;
          result[3] += 0;
          result[4] += 239140;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 24460982;
          result[1] += 2912021;
          result[2] += 1005971;
          result[3] += 5665205;
          result[4] += 11912816;
          result[5] += 7730093;
        } else {
          result[0] += 50034330;
          result[1] += 0;
          result[2] += 2378542;
          result[3] += 594635;
          result[4] += 509687;
          result[5] += 169895;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42860000))) ) ) {
          result[0] += 0;
          result[1] += 2556528;
          result[2] += 7669584;
          result[3] += 0;
          result[4] += 43460978;
          result[5] += 0;
        } else {
          result[0] += 3355443;
          result[1] += 0;
          result[2] += 1118481;
          result[3] += 2236962;
          result[4] += 6710886;
          result[5] += 40265318;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 711087;
          result[1] += 711087;
          result[2] += 7821960;
          result[3] += 31643384;
          result[4] += 711087;
          result[5] += 12088484;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28831956;
          result[3] += 11930464;
          result[4] += 2982616;
          result[5] += 9942053;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e10000))) ) ) {
          result[0] += 2825636;
          result[1] += 0;
          result[2] += 36733272;
          result[3] += 14128181;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 617093;
          result[1] += 0;
          result[2] += 35174301;
          result[3] += 11724767;
          result[4] += 0;
          result[5] += 6170930;
        } else {
          result[0] += 436480;
          result[1] += 0;
          result[2] += 49259932;
          result[3] += 3865969;
          result[4] += 0;
          result[5] += 124708;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 490293;
          result[1] += 490293;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52706505;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39370533;
          result[5] += 14316557;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42740000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          result[0] += 5368709;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 5368709;
        } else {
          result[0] += 132397;
          result[1] += 0;
          result[2] += 132397;
          result[3] += 2912739;
          result[4] += 1588767;
          result[5] += 48920789;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 43993588;
          result[1] += 4473924;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5219578;
          result[5] += 0;
        } else {
          result[0] += 430645;
          result[1] += 287096;
          result[2] += 2153225;
          result[3] += 19666126;
          result[4] += 5167741;
          result[5] += 25982255;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b00000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 40508613;
          result[1] += 2230203;
          result[2] += 40549;
          result[3] += 1297573;
          result[4] += 7055554;
          result[5] += 2554597;
        } else {
          result[0] += 10851646;
          result[1] += 1713417;
          result[2] += 9138228;
          result[3] += 20846583;
          result[4] += 3712405;
          result[5] += 7424810;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 2019577;
          result[1] += 673192;
          result[2] += 16661511;
          result[3] += 18007895;
          result[4] += 2019577;
          result[5] += 14305337;
        } else {
          result[0] += 1672820;
          result[1] += 261378;
          result[2] += 46368500;
          result[3] += 3972949;
          result[4] += 52275;
          result[5] += 1359166;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42460000))) ) ) {
          result[0] += 0;
          result[1] += 45733448;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7953643;
          result[5] += 0;
        } else {
          result[0] += 555383;
          result[1] += 555383;
          result[2] += 0;
          result[3] += 0;
          result[4] += 45911719;
          result[5] += 6664604;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 2304890;
          result[1] += 562168;
          result[2] += 0;
          result[3] += 2979493;
          result[4] += 2529758;
          result[5] += 45310780;
        } else {
          result[0] += 207286;
          result[1] += 0;
          result[2] += 3938435;
          result[3] += 29849193;
          result[4] += 621858;
          result[5] += 19070318;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 6710886;
          result[2] += 0;
          result[3] += 0;
          result[4] += 46976204;
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
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 39695433;
          result[1] += 2004422;
          result[2] += 117907;
          result[3] += 1375584;
          result[4] += 7113736;
          result[5] += 3380007;
        } else {
          result[0] += 7614274;
          result[1] += 903388;
          result[2] += 14325161;
          result[3] += 18325882;
          result[4] += 4129776;
          result[5] += 8388607;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 4129776;
          result[2] += 2753184;
          result[3] += 8259552;
          result[4] += 4129776;
          result[5] += 34414802;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4772185;
          result[3] += 36984440;
          result[4] += 0;
          result[5] += 11930464;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 46017506;
          result[3] += 0;
          result[4] += 0;
          result[5] += 7669584;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 1742059;
          result[1] += 475107;
          result[2] += 38325298;
          result[3] += 11085830;
          result[4] += 0;
          result[5] += 2058797;
        } else {
          result[0] += 44350205;
          result[1] += 0;
          result[2] += 7002664;
          result[3] += 2334221;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42123717;
          result[3] += 11563373;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 51832446;
          result[3] += 1659419;
          result[4] += 0;
          result[5] += 195225;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 225576;
          result[1] += 225576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50529027;
          result[5] += 2706912;
        } else {
          result[0] += 0;
          result[1] += 49557314;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4129776;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1541576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2613978;
          result[4] += 1876702;
          result[5] += 47654833;
        } else {
          result[0] += 3719286;
          result[1] += 2102205;
          result[2] += 808540;
          result[3] += 22962551;
          result[4] += 2749037;
          result[5] += 21345469;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 287096;
          result[1] += 13206450;
          result[2] += 0;
          result[3] += 861290;
          result[4] += 37896770;
          result[5] += 1435483;
        } else {
          result[0] += 0;
          result[1] += 53417306;
          result[2] += 134892;
          result[3] += 0;
          result[4] += 134892;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 43243401;
          result[1] += 2447739;
          result[2] += 407956;
          result[3] += 2243761;
          result[4] += 3875587;
          result[5] += 1468643;
        } else {
          result[0] += 11053224;
          result[1] += 1804608;
          result[2] += 2706912;
          result[3] += 13308984;
          result[4] += 6316128;
          result[5] += 18497233;
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5368709;
          result[3] += 0;
          result[4] += 0;
          result[5] += 48318382;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6795834;
          result[3] += 36017921;
          result[4] += 0;
          result[5] += 10873334;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1636801;
          result[1] += 0;
          result[2] += 38955877;
          result[3] += 11457610;
          result[4] += 0;
          result[5] += 1636801;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42da0000))) ) ) {
          result[0] += 1220161;
          result[1] += 0;
          result[2] += 36198114;
          result[3] += 8947848;
          result[4] += 1220161;
          result[5] += 6100805;
        } else {
          result[0] += 47721858;
          result[1] += 0;
          result[2] += 5965232;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 132560;
          result[1] += 0;
          result[2] += 50439353;
          result[3] += 2850055;
          result[4] += 0;
          result[5] += 265121;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 424403;
          result[1] += 1697615;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51352869;
          result[5] += 212201;
        } else {
          result[0] += 21872518;
          result[1] += 0;
          result[2] += 497102;
          result[3] += 1988410;
          result[4] += 15410183;
          result[5] += 13918875;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 379222;
          result[2] += 379222;
          result[3] += 3521353;
          result[4] += 4063099;
          result[5] += 45344193;
        } else {
          result[0] += 409825;
          result[1] += 1229475;
          result[2] += 0;
          result[3] += 34425310;
          result[4] += 409825;
          result[5] += 17212655;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 16170810;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37516280;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53219229;
          result[2] += 0;
          result[3] += 0;
          result[4] += 467861;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 43280969;
          result[1] += 1486588;
          result[2] += 382265;
          result[3] += 1316692;
          result[4] += 5691511;
          result[5] += 1529062;
        } else {
          result[0] += 9447728;
          result[1] += 1199711;
          result[2] += 5998557;
          result[3] += 14396538;
          result[4] += 3449170;
          result[5] += 19195384;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 12201611;
          result[4] += 0;
          result[5] += 41485479;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7227108;
          result[3] += 35619320;
          result[4] += 1032444;
          result[5] += 9808218;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7669584;
          result[3] += 15339168;
          result[4] += 0;
          result[5] += 30678337;
        } else {
          result[0] += 1359166;
          result[1] += 0;
          result[2] += 40095422;
          result[3] += 11552918;
          result[4] += 0;
          result[5] += 679583;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42be0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1797558;
          result[1] += 0;
          result[2] += 43740598;
          result[3] += 7310072;
          result[4] += 0;
          result[5] += 838860;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52841625;
          result[3] += 739782;
          result[4] += 0;
          result[5] += 105683;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 701792;
          result[1] += 175448;
          result[2] += 0;
          result[3] += 701792;
          result[4] += 50178130;
          result[5] += 1929928;
        } else {
          result[0] += 0;
          result[1] += 38774010;
          result[2] += 0;
          result[3] += 0;
          result[4] += 14913080;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
          result[0] += 31293545;
          result[1] += 1722580;
          result[2] += 0;
          result[3] += 574193;
          result[4] += 12345160;
          result[5] += 7751612;
        } else {
          result[0] += 504577;
          result[1] += 353204;
          result[2] += 1564191;
          result[3] += 6256766;
          result[4] += 3481587;
          result[5] += 41526763;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x425c0000))) ) ) {
          result[0] += 0;
          result[1] += 53558345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 128746;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 26054029;
          result[2] += 0;
          result[3] += 0;
          result[4] += 27633061;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 45791930;
          result[1] += 1244085;
          result[2] += 0;
          result[3] += 1770429;
          result[4] += 3062365;
          result[5] += 1818279;
        } else {
          result[0] += 10373437;
          result[1] += 909950;
          result[2] += 8007566;
          result[3] += 18017023;
          result[4] += 3275822;
          result[5] += 13103290;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 451152;
          result[2] += 3158064;
          result[3] += 13083408;
          result[4] += 4060368;
          result[5] += 32934097;
        } else {
          result[0] += 0;
          result[1] += 41756626;
          result[2] += 0;
          result[3] += 2982616;
          result[4] += 8947848;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 46475392;
          result[4] += 0;
          result[5] += 7211698;
        } else {
          result[0] += 1142278;
          result[1] += 0;
          result[2] += 26272406;
          result[3] += 18276456;
          result[4] += 571139;
          result[5] += 7424810;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 5368709;
          result[1] += 0;
          result[2] += 37580963;
          result[3] += 5368709;
          result[4] += 5368709;
          result[5] += 0;
        } else {
          result[0] += 49557314;
          result[1] += 0;
          result[2] += 4129776;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 478399;
          result[1] += 0;
          result[2] += 49115715;
          result[3] += 3614576;
          result[4] += 0;
          result[5] += 478399;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 485856;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51743667;
          result[5] += 1457568;
        } else {
          result[0] += 13421772;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 25352237;
          result[5] += 14913080;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
          result[0] += 49609590;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3397917;
          result[5] += 679583;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 13918875;
          result[5] += 39768215;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1012963;
          result[4] += 37479667;
          result[5] += 15194459;
        } else {
          result[0] += 0;
          result[1] += 446462;
          result[2] += 111615;
          result[3] += 3069428;
          result[4] += 2064888;
          result[5] += 47994696;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 875333;
          result[2] += 0;
          result[3] += 38222874;
          result[4] += 1458888;
          result[5] += 13129995;
        } else {
          result[0] += 0;
          result[1] += 1664716;
          result[2] += 1248537;
          result[3] += 17063339;
          result[4] += 2497074;
          result[5] += 31213425;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 16230981;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37456110;
          result[5] += 0;
        } else {
          result[0] += 247977;
          result[1] += 53315125;
          result[2] += 0;
          result[3] += 0;
          result[4] += 123988;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 2868775;
          result[1] += 11065278;
          result[2] += 819650;
          result[3] += 1639300;
          result[4] += 35654785;
          result[5] += 1639300;
        } else {
          result[0] += 41904023;
          result[1] += 1209520;
          result[2] += 1404604;
          result[3] += 2614124;
          result[4] += 3901678;
          result[5] += 2653141;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2825636;
          result[4] += 48035818;
          result[5] += 2825636;
        } else {
          result[0] += 856708;
          result[1] += 285569;
          result[2] += 11422785;
          result[3] += 25986836;
          result[4] += 4283544;
          result[5] += 10851646;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36761111;
          result[3] += 11901079;
          result[4] += 528936;
          result[5] += 4495963;
        } else {
          result[0] += 1953573;
          result[1] += 0;
          result[2] += 48477562;
          result[3] += 2749473;
          result[4] += 72354;
          result[5] += 434127;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 786624;
          result[3] += 393312;
          result[4] += 51720531;
          result[5] += 786624;
        } else {
          result[0] += 0;
          result[1] += 46366124;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7320966;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1725876;
          result[1] += 61638;
          result[2] += 0;
          result[3] += 2465538;
          result[4] += 3020284;
          result[5] += 46413753;
        } else {
          result[0] += 5071419;
          result[1] += 524629;
          result[2] += 1399012;
          result[3] += 24307836;
          result[4] += 6120678;
          result[5] += 16263516;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 8115490;
          result[2] += 0;
          result[3] += 0;
          result[4] += 44947332;
          result[5] += 624268;
        } else {
          result[0] += 0;
          result[1] += 50677725;
          result[2] += 0;
          result[3] += 361123;
          result[4] += 2166743;
          result[5] += 481498;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 44804239;
          result[1] += 1429922;
          result[2] += 129992;
          result[3] += 1169936;
          result[4] += 4333098;
          result[5] += 1819901;
        } else {
          result[0] += 12358662;
          result[1] += 2657776;
          result[2] += 5315553;
          result[3] += 14086216;
          result[4] += 2259110;
          result[5] += 17009771;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7549747;
          result[3] += 28101836;
          result[4] += 0;
          result[5] += 18035507;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42f20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41523609;
          result[3] += 9646899;
          result[4] += 0;
          result[5] += 2516582;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 1342177;
          result[1] += 0;
          result[2] += 39370533;
          result[3] += 10290025;
          result[4] += 894784;
          result[5] += 1789569;
        } else {
          result[0] += 48318382;
          result[1] += 0;
          result[2] += 5368709;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 70271;
          result[1] += 0;
          result[2] += 50665435;
          result[3] += 2881113;
          result[4] += 0;
          result[5] += 70271;
        } else {
          result[0] += 23008753;
          result[1] += 0;
          result[2] += 30678337;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53165857;
          result[5] += 521233;
        } else {
          result[0] += 13421772;
          result[1] += 6291455;
          result[2] += 1258291;
          result[3] += 0;
          result[4] += 14680063;
          result[5] += 18035507;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1713417;
          result[4] += 2498734;
          result[5] += 49474939;
        } else {
          result[0] += 0;
          result[1] += 3923973;
          result[2] += 3032161;
          result[3] += 21760216;
          result[4] += 1605261;
          result[5] += 23365478;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
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
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 19104865;
          result[1] += 1692836;
          result[2] += 322444;
          result[3] += 8464181;
          result[4] += 12736577;
          result[5] += 11366185;
        } else {
          result[0] += 44061915;
          result[1] += 1390303;
          result[2] += 2245874;
          result[3] += 1122937;
          result[4] += 3903543;
          result[5] += 962517;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42860000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 958698;
          result[2] += 2876094;
          result[3] += 4793490;
          result[4] += 15339168;
          result[5] += 29719639;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 1988410;
          result[2] += 5567550;
          result[3] += 31416890;
          result[4] += 1193046;
          result[5] += 13521193;
        } else {
          result[0] += 0;
          result[1] += 1451002;
          result[2] += 26118044;
          result[3] += 23941540;
          result[4] += 0;
          result[5] += 2176503;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 32212254;
          result[4] += 0;
          result[5] += 21474836;
        } else {
          result[0] += 889841;
          result[1] += 296613;
          result[2] += 39153016;
          result[3] += 6525502;
          result[4] += 1186455;
          result[5] += 5635661;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 4021504;
          result[1] += 0;
          result[2] += 41622576;
          result[3] += 7640859;
          result[4] += 0;
          result[5] += 402150;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52200943;
          result[3] += 1300379;
          result[4] += 0;
          result[5] += 185768;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 1188644;
          result[1] += 1188644;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50121158;
          result[5] += 1188644;
        } else {
          result[0] += 34147266;
          result[1] += 569121;
          result[2] += 569121;
          result[3] += 2276484;
          result[4] += 10433886;
          result[5] += 5691211;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 165700;
          result[1] += 55233;
          result[2] += 0;
          result[3] += 2761681;
          result[4] += 4473924;
          result[5] += 46230550;
        } else {
          result[0] += 1361629;
          result[1] += 1167110;
          result[2] += 1361629;
          result[3] += 26259990;
          result[4] += 3112295;
          result[5] += 20424436;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42560000))) ) ) {
          result[0] += 122573;
          result[1] += 53074224;
          result[2] += 0;
          result[3] += 122573;
          result[4] += 367719;
          result[5] += 0;
        } else {
          result[0] += 2556528;
          result[1] += 20452225;
          result[2] += 0;
          result[3] += 0;
          result[4] += 29400073;
          result[5] += 1278264;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42950000))) ) ) {
          result[0] += 45293685;
          result[1] += 2661323;
          result[2] += 562972;
          result[3] += 1381841;
          result[4] += 2661323;
          result[5] += 1125944;
        } else {
          result[0] += 8947848;
          result[1] += 0;
          result[2] += 7638407;
          result[3] += 19205138;
          result[4] += 4364804;
          result[5] += 13530892;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2038750;
          result[3] += 24465003;
          result[4] += 679583;
          result[5] += 26503753;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7669584;
          result[3] += 44100110;
          result[4] += 0;
          result[5] += 1917396;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 789516;
          result[1] += 0;
          result[2] += 35528222;
          result[3] += 13421772;
          result[4] += 0;
          result[5] += 3947580;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 648394;
          result[1] += 0;
          result[2] += 41237910;
          result[3] += 8558811;
          result[4] += 389036;
          result[5] += 2852937;
        } else {
          result[0] += 47721858;
          result[1] += 0;
          result[2] += 5965232;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 20132659;
          result[1] += 0;
          result[2] += 20132659;
          result[3] += 13421772;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 335544;
          result[1] += 0;
          result[2] += 51841597;
          result[3] += 1509949;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 200324;
          result[4] += 49279941;
          result[5] += 4206824;
        } else {
          result[0] += 0;
          result[1] += 4129776;
          result[2] += 0;
          result[3] += 37167986;
          result[4] += 8259552;
          result[5] += 4129776;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 2345811;
          result[1] += 53313;
          result[2] += 0;
          result[3] += 3038891;
          result[4] += 2932264;
          result[5] += 45316809;
        } else {
          result[0] += 0;
          result[1] += 191057;
          result[2] += 2101629;
          result[3] += 26174845;
          result[4] += 3247973;
          result[5] += 21971585;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 17895697;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35791394;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 41341931;
          result[1] += 2009677;
          result[2] += 492165;
          result[3] += 1517511;
          result[4] += 7341473;
          result[5] += 984331;
        } else {
          result[0] += 12824551;
          result[1] += 251461;
          result[2] += 12070165;
          result[3] += 16847939;
          result[4] += 1508770;
          result[5] += 10184202;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42e30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2147483;
          result[3] += 6442450;
          result[4] += 2147483;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 26843545;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4601750;
          result[3] += 41415756;
          result[4] += 0;
          result[5] += 7669584;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 25264513;
          result[3] += 3158064;
          result[4] += 0;
          result[5] += 25264513;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28092082;
          result[3] += 20600860;
          result[4] += 1248537;
          result[5] += 3745611;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 46017506;
          result[3] += 7669584;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 771971;
          result[1] += 0;
          result[2] += 49406159;
          result[3] += 3228243;
          result[4] += 0;
          result[5] += 280716;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          result[0] += 1040447;
          result[1] += 624268;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50981927;
          result[5] += 1040447;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 29283867;
          result[5] += 24403223;
        }
      } else {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0;
          result[1] += 7669584;
          result[2] += 0;
          result[3] += 2556528;
          result[4] += 30678337;
          result[5] += 12782640;
        } else {
          result[0] += 165957;
          result[1] += 0;
          result[2] += 0;
          result[3] += 829785;
          result[4] += 1078720;
          result[5] += 51612628;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 5051520;
          result[1] += 822340;
          result[2] += 2584498;
          result[3] += 9868086;
          result[4] += 6931156;
          result[5] += 28429488;
        } else {
          result[0] += 0;
          result[1] += 1662874;
          result[2] += 2613088;
          result[3] += 35633025;
          result[4] += 1187767;
          result[5] += 12590335;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 53277266;
          result[2] += 0;
          result[3] += 0;
          result[4] += 409825;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 10516028;
          result[2] += 0;
          result[3] += 3320851;
          result[4] += 35975885;
          result[5] += 3874326;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
          result[0] += 11130250;
          result[1] += 2618882;
          result[2] += 3710083;
          result[3] += 13530892;
          result[4] += 4801284;
          result[5] += 17895697;
        } else {
          result[0] += 44266698;
          result[1] += 1417631;
          result[2] += 914601;
          result[3] += 2012122;
          result[4] += 4207165;
          result[5] += 868871;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
          result[0] += 5835553;
          result[1] += 9336885;
          result[2] += 1167110;
          result[3] += 5835553;
          result[4] += 7002664;
          result[5] += 24509324;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17412029;
          result[3] += 26988645;
          result[4] += 580400;
          result[5] += 8706014;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 20132659;
          result[1] += 20132659;
          result[2] += 11184810;
          result[3] += 2236962;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1206451;
          result[1] += 164516;
          result[2] += 48422575;
          result[3] += 3016128;
          result[4] += 0;
          result[5] += 877419;
        }
      }
    }
  }
  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 1783624;
          result[1] += 178362;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49941480;
          result[5] += 1783624;
        } else {
          result[0] += 0;
          result[1] += 40265318;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8947848;
          result[5] += 4473924;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
          result[0] += 49910109;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3237412;
          result[5] += 539568;
        } else {
          result[0] += 9409077;
          result[1] += 6088226;
          result[2] += 1106950;
          result[3] += 6088226;
          result[4] += 17711205;
          result[5] += 13283404;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
          result[0] += 172627;
          result[1] += 115084;
          result[2] += 0;
          result[3] += 1956442;
          result[4] += 3740258;
          result[5] += 47702678;
        } else {
          result[0] += 4294967;
          result[1] += 5522100;
          result[2] += 2147483;
          result[3] += 7669584;
          result[4] += 17179869;
          result[5] += 16873085;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3796056;
          result[3] += 14099640;
          result[4] += 1084587;
          result[5] += 34706806;
        } else {
          result[0] += 2513776;
          result[1] += 179555;
          result[2] += 2513776;
          result[3] += 33397320;
          result[4] += 0;
          result[5] += 15082661;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 26843545;
          result[2] += 0;
          result[3] += 0;
          result[4] += 26843545;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53320209;
          result[2] += 0;
          result[3] += 0;
          result[4] += 366882;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 48294679;
          result[1] += 948116;
          result[2] += 1007373;
          result[3] += 592572;
          result[4] += 2785091;
          result[5] += 59257;
        } else {
          result[0] += 15261305;
          result[1] += 0;
          result[2] += 13898688;
          result[3] += 13081118;
          result[4] += 5995512;
          result[5] += 5450466;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 2097151;
          result[1] += 419430;
          result[2] += 20971519;
          result[3] += 11744051;
          result[4] += 1258291;
          result[5] += 17196646;
        } else {
          result[0] += 26295718;
          result[1] += 18626133;
          result[2] += 3286964;
          result[3] += 0;
          result[4] += 5478274;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 1626881;
          result[1] += 0;
          result[2] += 9761289;
          result[3] += 32537631;
          result[4] += 0;
          result[5] += 9761289;
        } else {
          result[0] += 684638;
          result[1] += 0;
          result[2] += 47696501;
          result[3] += 4849524;
          result[4] += 0;
          result[5] += 456425;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
          result[0] += 880116;
          result[1] += 2992395;
          result[2] += 0;
          result[3] += 880116;
          result[4] += 45061951;
          result[5] += 3872511;
        } else {
          result[0] += 39045157;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4392580;
          result[5] += 10249353;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 64527;
          result[2] += 0;
          result[3] += 2839221;
          result[4] += 1548666;
          result[5] += 49234676;
        } else {
          result[0] += 2753184;
          result[1] += 1376592;
          result[2] += 0;
          result[3] += 10783304;
          result[4] += 12848192;
          result[5] += 25925817;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 52855653;
          result[2] += 0;
          result[3] += 712660;
          result[4] += 118776;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 24245783;
          result[2] += 0;
          result[3] += 865920;
          result[4] += 28575387;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 43085589;
          result[1] += 2174666;
          result[2] += 1449777;
          result[3] += 1359166;
          result[4] += 3624444;
          result[5] += 1993444;
        } else {
          result[0] += 9439488;
          result[1] += 2458200;
          result[2] += 9636144;
          result[3] += 19862257;
          result[4] += 2458200;
          result[5] += 9832800;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1626881;
          result[3] += 1626881;
          result[4] += 8134407;
          result[5] += 42298920;
        } else {
          result[0] += 0;
          result[1] += 7158278;
          result[2] += 4473924;
          result[3] += 25948760;
          result[4] += 2684354;
          result[5] += 13421772;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 47370962;
          result[3] += 6316128;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 38347922;
          result[1] += 0;
          result[2] += 15339168;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 5965232;
          result[2] += 41756626;
          result[3] += 5965232;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1731841;
          result[1] += 0;
          result[2] += 41297762;
          result[3] += 9858175;
          result[4] += 0;
          result[5] += 799311;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 51773714;
          result[3] += 1913376;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42440000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 231409;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52761451;
          result[5] += 694229;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 934704;
          result[1] += 233676;
          result[2] += 0;
          result[3] += 2044666;
          result[4] += 2687275;
          result[5] += 47786768;
        } else {
          result[0] += 1672495;
          result[1] += 836247;
          result[2] += 836247;
          result[3] += 26090922;
          result[4] += 2675992;
          result[5] += 21575186;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 3355443;
          result[1] += 19874548;
          result[2] += 0;
          result[3] += 516222;
          result[4] += 29940877;
          result[5] += 0;
        } else {
          result[0] += 38650604;
          result[1] += 717650;
          result[2] += 3212340;
          result[3] += 4647641;
          result[4] += 2733906;
          result[5] += 3724947;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 0;
          result[1] += 53557724;
          result[2] += 0;
          result[3] += 0;
          result[4] += 129366;
          result[5] += 0;
        } else {
          result[0] += 37580963;
          result[1] += 0;
          result[2] += 0;
          result[3] += 16106127;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
          result[0] += 7669584;
          result[1] += 15339168;
          result[2] += 4601750;
          result[3] += 1533916;
          result[4] += 24542670;
          result[5] += 0;
        } else {
          result[0] += 1512312;
          result[1] += 3024624;
          result[2] += 756156;
          result[3] += 10586186;
          result[4] += 3780781;
          result[5] += 34027029;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 43247934;
          result[4] += 0;
          result[5] += 10439156;
        } else {
          result[0] += 1789569;
          result[1] += 0;
          result[2] += 28036592;
          result[3] += 17299173;
          result[4] += 1789569;
          result[5] += 4772185;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42930000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 136608;
          result[1] += 0;
          result[2] += 44261113;
          result[3] += 7786677;
          result[4] += 0;
          result[5] += 1502692;
        } else {
          result[0] += 517216;
          result[1] += 0;
          result[2] += 51618224;
          result[3] += 1551650;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42320000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 220934;
          result[1] += 662803;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51256811;
          result[5] += 1546541;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1379808;
          result[1] += 125437;
          result[2] += 0;
          result[3] += 1818838;
          result[4] += 2069712;
          result[5] += 48293294;
        } else {
          result[0] += 1612224;
          result[1] += 3224449;
          result[2] += 644889;
          result[3] += 25956821;
          result[4] += 1773447;
          result[5] += 20475256;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
          result[0] += 4688828;
          result[1] += 13597603;
          result[2] += 0;
          result[3] += 0;
          result[4] += 34462892;
          result[5] += 937765;
        } else {
          result[0] += 35179850;
          result[1] += 804662;
          result[2] += 3765821;
          result[3] += 5697011;
          result[4] += 3443956;
          result[5] += 4795789;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42db0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5553837;
          result[3] += 3702558;
          result[4] += 9256395;
          result[5] += 35174301;
        } else {
          result[0] += 1309441;
          result[1] += 3928323;
          result[2] += 6547206;
          result[3] += 30117148;
          result[4] += 1309441;
          result[5] += 10475529;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27244195;
          result[3] += 16827297;
          result[4] += 0;
          result[5] += 9615598;
        } else {
          result[0] += 2334221;
          result[1] += 0;
          result[2] += 43649939;
          result[3] += 7236086;
          result[4] += 0;
          result[5] += 466844;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42f50000))) ) ) {
          result[0] += 268435;
          result[1] += 0;
          result[2] += 48049946;
          result[3] += 5368709;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 20648881;
          result[1] += 0;
          result[2] += 33038209;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 49317211;
          result[3] += 4369879;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 267099;
          result[1] += 0;
          result[2] += 53419991;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a00000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51504689;
          result[5] += 2182402;
        } else {
          result[0] += 0;
          result[1] += 2825636;
          result[2] += 0;
          result[3] += 28256363;
          result[4] += 14128181;
          result[5] += 8476909;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x425e0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 1167110;
          result[1] += 1167110;
          result[2] += 0;
          result[3] += 0;
          result[4] += 16339549;
          result[5] += 35013320;
        } else {
          result[0] += 37223049;
          result[1] += 0;
          result[2] += 715827;
          result[3] += 1789569;
          result[4] += 12526987;
          result[5] += 1431655;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 389036;
          result[3] += 933688;
          result[4] += 778073;
          result[5] += 51586291;
        } else {
          result[0] += 174876;
          result[1] += 612067;
          result[2] += 612067;
          result[3] += 22296756;
          result[4] += 2710586;
          result[5] += 27280736;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
          result[0] += 2776918;
          result[1] += 16661511;
          result[2] += 1388459;
          result[3] += 0;
          result[4] += 31471743;
          result[5] += 1388459;
        } else {
          result[0] += 41981480;
          result[1] += 1984001;
          result[2] += 1190401;
          result[3] += 2618882;
          result[4] += 3888643;
          result[5] += 2023681;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53550482;
          result[2] += 0;
          result[3] += 0;
          result[4] += 136608;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 1342177;
          result[2] += 7381975;
          result[3] += 33554431;
          result[4] += 671088;
          result[5] += 10737418;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30938323;
          result[3] += 19108964;
          result[4] += 909950;
          result[5] += 2729852;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 4194303;
          result[1] += 3355443;
          result[2] += 25165823;
          result[3] += 9227468;
          result[4] += 2516582;
          result[5] += 9227468;
        } else {
          result[0] += 880116;
          result[1] += 0;
          result[2] += 48241371;
          result[3] += 4015530;
          result[4] += 165021;
          result[5] += 385050;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 294984;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53392107;
          result[5] += 0;
        } else {
          result[0] += 2091704;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41834097;
          result[5] += 9761289;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 83235;
          result[3] += 1581480;
          result[4] += 1331772;
          result[5] += 50690602;
        } else {
          result[0] += 4880644;
          result[1] += 1952257;
          result[2] += 488064;
          result[3] += 17472707;
          result[4] += 4099741;
          result[5] += 24793674;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 22605091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 31082000;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 4745820;
          result[1] += 6228889;
          result[2] += 2076296;
          result[3] += 1483068;
          result[4] += 35297037;
          result[5] += 3855978;
        } else {
          result[0] += 38486529;
          result[1] += 1042118;
          result[2] += 1940497;
          result[3] += 3880994;
          result[4] += 3449772;
          result[5] += 4887178;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1988410;
          result[3] += 39768215;
          result[4] += 0;
          result[5] += 11930464;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8259552;
          result[3] += 17895697;
          result[4] += 0;
          result[5] += 27531841;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16230981;
          result[3] += 18728055;
          result[4] += 0;
          result[5] += 18728055;
        } else {
          result[0] += 1309441;
          result[1] += 0;
          result[2] += 39937958;
          result[3] += 9820809;
          result[4] += 0;
          result[5] += 2618882;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21913098;
          result[3] += 26295718;
          result[4] += 0;
          result[5] += 5478274;
        } else {
          result[0] += 7002664;
          result[1] += 0;
          result[2] += 39214918;
          result[3] += 4201598;
          result[4] += 933688;
          result[5] += 2334221;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 20132659;
          result[1] += 0;
          result[2] += 30198988;
          result[3] += 3355443;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 66117;
          result[1] += 0;
          result[2] += 50116767;
          result[3] += 3371972;
          result[4] += 0;
          result[5] += 132234;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 22369621;
          result[5] += 31317469;
        } else {
          result[0] += 213044;
          result[1] += 426088;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50917519;
          result[5] += 2130440;
        }
      } else {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x424a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37580963;
          result[5] += 16106127;
        } else {
          result[0] += 72550;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1451002;
          result[4] += 1378452;
          result[5] += 50785086;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 36507222;
          result[1] += 4294967;
          result[2] += 0;
          result[3] += 3579139;
          result[4] += 7158278;
          result[5] += 2147483;
        } else {
          result[0] += 112551;
          result[1] += 1012963;
          result[2] += 225103;
          result[3] += 20371831;
          result[4] += 2363582;
          result[5] += 29601058;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 20364069;
          result[2] += 0;
          result[3] += 0;
          result[4] += 33323022;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53440820;
          result[2] += 0;
          result[3] += 0;
          result[4] += 246271;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 9244134;
          result[1] += 6755329;
          result[2] += 0;
          result[3] += 2488805;
          result[4] += 34132190;
          result[5] += 1066630;
        } else {
          result[0] += 42365595;
          result[1] += 880116;
          result[2] += 1400184;
          result[3] += 3000396;
          result[4] += 3120412;
          result[5] += 2920385;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 4994148;
          result[2] += 7491222;
          result[3] += 22785800;
          result[4] += 6554819;
          result[5] += 11861101;
        } else {
          result[0] += 3880994;
          result[1] += 0;
          result[2] += 30724540;
          result[3] += 13906897;
          result[4] += 0;
          result[5] += 5174659;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 39283237;
          result[1] += 0;
          result[2] += 11784971;
          result[3] += 2618882;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 586103;
          result[1] += 0;
          result[2] += 47357172;
          result[3] += 4981880;
          result[4] += 0;
          result[5] += 761934;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 219130;
          result[4] += 52810567;
          result[5] += 657392;
        } else {
          result[0] += 0;
          result[1] += 8947848;
          result[2] += 0;
          result[3] += 17895697;
          result[4] += 8947848;
          result[5] += 17895697;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          result[0] += 32514717;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 21172373;
          result[5] += 0;
        } else {
          result[0] += 45305;
          result[1] += 90611;
          result[2] += 453055;
          result[3] += 7747251;
          result[4] += 2129361;
          result[5] += 43221506;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 4285944;
          result[1] += 19850689;
          result[2] += 0;
          result[3] += 1353456;
          result[4] += 27069121;
          result[5] += 1127880;
        } else {
          result[0] += 43652120;
          result[1] += 463152;
          result[2] += 1582437;
          result[3] += 3319259;
          result[4] += 2624530;
          result[5] += 2045590;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 53047959;
          result[2] += 0;
          result[3] += 0;
          result[4] += 639132;
          result[5] += 0;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42840000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7895160;
          result[3] += 4737096;
          result[4] += 0;
          result[5] += 41054834;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5162220;
          result[3] += 36135542;
          result[4] += 0;
          result[5] += 12389328;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20259279;
          result[3] += 9116675;
          result[4] += 1012963;
          result[5] += 23298171;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 5651272;
          result[2] += 11302545;
          result[3] += 21192272;
          result[4] += 7064090;
          result[5] += 8476909;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37359573;
          result[3] += 15220567;
          result[4] += 0;
          result[5] += 1106950;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 547129;
          result[1] += 136782;
          result[2] += 49173272;
          result[3] += 3214386;
          result[4] += 273564;
          result[5] += 341955;
        } else {
          result[0] += 22817013;
          result[1] += 0;
          result[2] += 29527900;
          result[3] += 0;
          result[4] += 1342177;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 603225;
          result[2] += 0;
          result[3] += 402150;
          result[4] += 51274188;
          result[5] += 1407526;
        } else {
          result[0] += 0;
          result[1] += 8947848;
          result[2] += 0;
          result[3] += 17895697;
          result[4] += 0;
          result[5] += 26843545;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
          result[0] += 37418275;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3253763;
          result[4] += 10574730;
          result[5] += 2440322;
        } else {
          result[0] += 46643;
          result[1] += 186575;
          result[2] += 46643;
          result[3] += 7696238;
          result[4] += 2891919;
          result[5] += 42819070;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 2255760;
          result[1] += 11729952;
          result[2] += 0;
          result[3] += 451152;
          result[4] += 39250226;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 52848230;
          result[2] += 0;
          result[3] += 0;
          result[4] += 838860;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 44610187;
          result[1] += 2581110;
          result[2] += 602259;
          result[3] += 1462629;
          result[4] += 3484498;
          result[5] += 946407;
        } else {
          result[0] += 6344838;
          result[1] += 1342177;
          result[2] += 15252014;
          result[3] += 15618062;
          result[4] += 3782499;
          result[5] += 11347498;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 8589934;
          result[2] += 12884901;
          result[3] += 0;
          result[4] += 19327352;
          result[5] += 12884901;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 6710886;
          result[4] += 0;
          result[5] += 46976204;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19327352;
          result[3] += 28454158;
          result[4] += 0;
          result[5] += 5905580;
        } else {
          result[0] += 1095654;
          result[1] += 0;
          result[2] += 39443577;
          result[3] += 9860894;
          result[4] += 0;
          result[5] += 3286964;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32595733;
          result[3] += 17256565;
          result[4] += 0;
          result[5] += 3834792;
        } else {
          result[0] += 26843545;
          result[1] += 26843545;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1649091;
          result[1] += 0;
          result[2] += 43792541;
          result[3] += 7512528;
          result[4] += 0;
          result[5] += 732929;
        } else {
          result[0] += 198841;
          result[1] += 0;
          result[2] += 51897521;
          result[3] += 1590728;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 234441;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52280442;
          result[5] += 1172207;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4668442;
          result[4] += 32679098;
          result[5] += 16339549;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          result[0] += 44323063;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7491222;
          result[5] += 1872805;
        } else {
          result[0] += 129678;
          result[1] += 432263;
          result[2] += 605168;
          result[3] += 9336885;
          result[4] += 3025842;
          result[5] += 40157252;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 10029456;
          result[2] += 1179936;
          result[3] += 589968;
          result[4] += 41887730;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 51988132;
          result[2] += 0;
          result[3] += 226527;
          result[4] += 1472430;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 44606353;
          result[1] += 2303406;
          result[2] += 885925;
          result[3] += 1063110;
          result[4] += 3543702;
          result[5] += 1284592;
        } else {
          result[0] += 9997851;
          result[1] += 1369568;
          result[2] += 14380470;
          result[3] += 13284815;
          result[4] += 4793490;
          result[5] += 9860894;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42400000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428e0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13015052;
          result[3] += 0;
          result[4] += 6507526;
          result[5] += 34164512;
        } else {
          result[0] += 1760232;
          result[1] += 0;
          result[2] += 17602324;
          result[3] += 22883022;
          result[4] += 0;
          result[5] += 11441511;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8659208;
          result[3] += 41564199;
          result[4] += 0;
          result[5] += 3463683;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37167986;
          result[3] += 16519104;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42880000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 491977;
          result[1] += 0;
          result[2] += 49382284;
          result[3] += 3505342;
          result[4] += 0;
          result[5] += 307486;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 1731841;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51089328;
          result[5] += 865920;
        } else {
          result[0] += 0;
          result[1] += 4210752;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28422577;
          result[5] += 21053761;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 2177975;
          result[1] += 381145;
          result[2] += 0;
          result[3] += 2286874;
          result[4] += 3103614;
          result[5] += 45737481;
        } else {
          result[0] += 894784;
          result[1] += 0;
          result[2] += 0;
          result[3] += 33554431;
          result[4] += 894784;
          result[5] += 18343089;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 40613433;
          result[1] += 2552844;
          result[2] += 0;
          result[3] += 1353781;
          result[4] += 7658533;
          result[5] += 1508498;
        } else {
          result[0] += 8555711;
          result[1] += 1069463;
          result[2] += 13796085;
          result[3] += 14009977;
          result[4] += 5026480;
          result[5] += 11229371;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42db0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 32537631;
          result[4] += 0;
          result[5] += 21149460;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9761289;
          result[3] += 2440322;
          result[4] += 2440322;
          result[5] += 39045157;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29923952;
          result[3] += 19362557;
          result[4] += 0;
          result[5] += 4400581;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 16106127;
          result[4] += 0;
          result[5] += 37580963;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39045157;
          result[3] += 0;
          result[4] += 4880644;
          result[5] += 9761289;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 32212254;
          result[1] += 16106127;
          result[2] += 0;
          result[3] += 5368709;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 64450;
          result[1] += 0;
          result[2] += 49368921;
          result[3] += 3673666;
          result[4] += 64450;
          result[5] += 515602;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 237553;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52736877;
          result[5] += 712660;
        } else {
          result[0] += 5553837;
          result[1] += 9256395;
          result[2] += 0;
          result[3] += 0;
          result[4] += 20364069;
          result[5] += 18512790;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42660000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1579032;
          result[4] += 20527417;
          result[5] += 31580641;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
          result[0] += 33038209;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2064888;
          result[4] += 18583993;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1650894;
          result[4] += 2443323;
          result[5] += 49592872;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 2796202;
          result[1] += 1398101;
          result[2] += 1118481;
          result[3] += 9507089;
          result[4] += 7270126;
          result[5] += 31597090;
        } else {
          result[0] += 2056101;
          result[1] += 913822;
          result[2] += 1142278;
          result[3] += 32212254;
          result[4] += 1142278;
          result[5] += 16220355;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 53549078;
          result[2] += 0;
          result[3] += 0;
          result[4] += 138013;
          result[5] += 0;
        } else {
          result[0] += 337654;
          result[1] += 21609898;
          result[2] += 0;
          result[3] += 1350618;
          result[4] += 30051264;
          result[5] += 337654;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 46076102;
          result[1] += 1321668;
          result[2] += 273448;
          result[3] += 1184944;
          result[4] += 4101730;
          result[5] += 729196;
        } else {
          result[0] += 19073045;
          result[1] += 2825636;
          result[2] += 1177348;
          result[3] += 12479894;
          result[4] += 7064090;
          result[5] += 11067075;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8715436;
          result[3] += 30678337;
          result[4] += 0;
          result[5] += 14293316;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32072807;
          result[3] += 16036403;
          result[4] += 0;
          result[5] += 5577879;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 1118481;
          result[1] += 0;
          result[2] += 35511773;
          result[3] += 10905190;
          result[4] += 559240;
          result[5] += 5592405;
        } else {
          result[0] += 1275372;
          result[1] += 0;
          result[2] += 49253654;
          result[3] += 2672208;
          result[4] += 60732;
          result[5] += 425124;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42de0000))) ) ) {
          result[0] += 644245;
          result[1] += 429496;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50895362;
          result[5] += 1717986;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 2849633;
          result[1] += 740904;
          result[2] += 0;
          result[3] += 1652787;
          result[4] += 2906625;
          result[5] += 45537139;
        } else {
          result[0] += 1762859;
          result[1] += 0;
          result[2] += 961559;
          result[3] += 29007055;
          result[4] += 160259;
          result[5] += 21795356;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 52212846;
          result[2] += 0;
          result[3] += 245707;
          result[4] += 982830;
          result[5] += 245707;
        } else {
          result[0] += 1460873;
          result[1] += 15704387;
          result[2] += 2191309;
          result[3] += 365218;
          result[4] += 32869647;
          result[5] += 1095654;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
          result[0] += 3890368;
          result[1] += 14394365;
          result[2] += 3112295;
          result[3] += 778073;
          result[4] += 29566803;
          result[5] += 1945184;
        } else {
          result[0] += 40255697;
          result[1] += 153941;
          result[2] += 2039724;
          result[3] += 4464302;
          result[4] += 2617005;
          result[5] += 4156419;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 825955;
          result[1] += 9085507;
          result[2] += 6607641;
          result[3] += 8259552;
          result[4] += 2477865;
          result[5] += 26430567;
        } else {
          result[0] += 1894838;
          result[1] += 0;
          result[2] += 9474192;
          result[3] += 32212254;
          result[4] += 0;
          result[5] += 10105805;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38069028;
          result[3] += 12689676;
          result[4] += 0;
          result[5] += 2928386;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 49852298;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3834792;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 813440;
          result[1] += 0;
          result[2] += 43519081;
          result[3] += 7998834;
          result[4] += 0;
          result[5] += 1355734;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 26843545;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1275927;
          result[1] += 0;
          result[2] += 51037088;
          result[3] += 1177778;
          result[4] += 0;
          result[5] += 196296;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 177771;
          result[4] += 47465077;
          result[5] += 6044242;
        } else {
          result[0] += 0;
          result[1] += 38654705;
          result[2] += 0;
          result[3] += 8589934;
          result[4] += 4294967;
          result[5] += 2147483;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1251447;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2440322;
          result[4] += 2502894;
          result[5] += 47492426;
        } else {
          result[0] += 3806174;
          result[1] += 600974;
          result[2] += 1001624;
          result[3] += 26643220;
          result[4] += 3806174;
          result[5] += 17828922;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 11930464;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41756626;
          result[5] += 0;
        } else {
          result[0] += 348617;
          result[1] += 51827797;
          result[2] += 0;
          result[3] += 929646;
          result[4] += 581029;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 19774426;
          result[1] += 382114;
          result[2] += 955286;
          result[3] += 11558964;
          result[4] += 6113832;
          result[5] += 14902466;
        } else {
          result[0] += 42121521;
          result[1] += 2474936;
          result[2] += 2808101;
          result[3] += 666329;
          result[4] += 4807088;
          result[5] += 809113;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 1342177;
          result[1] += 1342177;
          result[2] += 13421772;
          result[3] += 2684354;
          result[4] += 0;
          result[5] += 34896609;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6160813;
          result[3] += 36524824;
          result[4] += 0;
          result[5] += 11001453;
        } else {
          result[0] += 16339549;
          result[1] += 0;
          result[2] += 32679098;
          result[3] += 0;
          result[4] += 4668442;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9761289;
          result[3] += 34164512;
          result[4] += 0;
          result[5] += 9761289;
        } else {
          result[0] += 12389328;
          result[1] += 41297762;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 3679064;
          result[1] += 0;
          result[2] += 38834571;
          result[3] += 10083362;
          result[4] += 0;
          result[5] += 1090093;
        } else {
          result[0] += 1099394;
          result[1] += 0;
          result[2] += 50846989;
          result[3] += 1740707;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
          result[0] += 679583;
          result[1] += 1585694;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51421813;
          result[5] += 0;
        } else {
          result[0] += 22106449;
          result[1] += 451152;
          result[2] += 0;
          result[3] += 3158064;
          result[4] += 11729952;
          result[5] += 16241472;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 183232;
          result[1] += 366464;
          result[2] += 0;
          result[3] += 1832323;
          result[4] += 4947274;
          result[5] += 46357795;
        } else {
          result[0] += 1063110;
          result[1] += 0;
          result[2] += 2834961;
          result[3] += 29412729;
          result[4] += 0;
          result[5] += 20376288;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 4473924;
          result[2] += 0;
          result[3] += 11184810;
          result[4] += 38028356;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53558035;
          result[2] += 0;
          result[3] += 0;
          result[4] += 129055;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 41211080;
          result[1] += 3179370;
          result[2] += 120735;
          result[3] += 563432;
          result[4] += 6318495;
          result[5] += 2293976;
        } else {
          result[0] += 9248111;
          result[1] += 1441264;
          result[2] += 9248111;
          result[3] += 13932220;
          result[4] += 3603160;
          result[5] += 16214222;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 24159191;
          result[4] += 0;
          result[5] += 29527900;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11608019;
          result[3] += 36275061;
          result[4] += 0;
          result[5] += 5804009;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 865920;
          result[1] += 0;
          result[2] += 40698278;
          result[3] += 11256970;
          result[4] += 0;
          result[5] += 865920;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17895697;
          result[3] += 0;
          result[4] += 0;
          result[5] += 35791394;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 2229221;
          result[1] += 0;
          result[2] += 45141741;
          result[3] += 5758822;
          result[4] += 0;
          result[5] += 557305;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52292621;
          result[3] += 1307315;
          result[4] += 0;
          result[5] += 87154;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 1590728;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50505633;
          result[5] += 1590728;
        } else {
          result[0] += 14380470;
          result[1] += 1917396;
          result[2] += 0;
          result[3] += 0;
          result[4] += 21570706;
          result[5] += 15818517;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1474067;
          result[4] += 1551650;
          result[5] += 50661373;
        } else {
          result[0] += 1007532;
          result[1] += 575732;
          result[2] += 2734731;
          result[3] += 18135585;
          result[4] += 7628460;
          result[5] += 23605048;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426c0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 13059022;
          result[2] += 0;
          result[3] += 1451002;
          result[4] += 39177066;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 52001846;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1685245;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 43491706;
          result[1] += 1634703;
          result[2] += 258111;
          result[3] += 1290555;
          result[4] += 4775053;
          result[5] += 2236962;
        } else {
          result[0] += 14237460;
          result[1] += 296613;
          result[2] += 6080582;
          result[3] += 14978995;
          result[4] += 4894127;
          result[5] += 13199312;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3050402;
          result[3] += 11591531;
          result[4] += 0;
          result[5] += 39045157;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 45552683;
          result[4] += 0;
          result[5] += 8134407;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27256523;
          result[3] += 14867194;
          result[4] += 825955;
          result[5] += 10737418;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 4668442;
          result[2] += 9336885;
          result[3] += 22175102;
          result[4] += 9336885;
          result[5] += 8169774;
        } else {
          result[0] += 13665805;
          result[1] += 1952257;
          result[2] += 33188383;
          result[3] += 0;
          result[4] += 0;
          result[5] += 4880644;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40216511;
          result[3] += 11713547;
          result[4] += 585677;
          result[5] += 1171354;
        } else {
          result[0] += 74773;
          result[1] += 0;
          result[2] += 50621393;
          result[3] += 2916151;
          result[4] += 0;
          result[5] += 74773;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 598740;
          result[2] += 598740;
          result[3] += 0;
          result[4] += 50693387;
          result[5] += 1796222;
        } else {
          result[0] += 31711546;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 11126858;
          result[5] += 10848686;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 59388;
          result[1] += 296941;
          result[2] += 118776;
          result[3] += 2316146;
          result[4] += 3325749;
          result[5] += 47570088;
        } else {
          result[0] += 750868;
          result[1] += 1126302;
          result[2] += 0;
          result[3] += 21399749;
          result[4] += 8259552;
          result[5] += 22150618;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 52851958;
          result[2] += 0;
          result[3] += 0;
          result[4] += 835132;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 42038005;
          result[1] += 2152548;
          result[2] += 464275;
          result[3] += 2279168;
          result[4] += 4769372;
          result[5] += 1983721;
        } else {
          result[0] += 7701017;
          result[1] += 1320174;
          result[2] += 8911177;
          result[3] += 19802615;
          result[4] += 3080406;
          result[5] += 12871700;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1917396;
          result[3] += 41224016;
          result[4] += 2876094;
          result[5] += 7669584;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24606583;
          result[3] += 20132659;
          result[4] += 0;
          result[5] += 8947848;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 4737096;
          result[1] += 0;
          result[2] += 33159673;
          result[3] += 11053224;
          result[4] += 0;
          result[5] += 4737096;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 48524870;
          result[3] += 4645998;
          result[4] += 0;
          result[5] += 516222;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24403223;
          result[3] += 4880644;
          result[4] += 0;
          result[5] += 24403223;
        } else {
          result[0] += 938585;
          result[1] += 0;
          result[2] += 44488953;
          result[3] += 8259552;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 0;
          result[4] += 0;
          result[5] += 26843545;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52375364;
          result[3] += 1311726;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 51622203;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2064888;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 1332658;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51212154;
          result[5] += 1142278;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 2582542;
          result[1] += 99328;
          result[2] += 943621;
          result[3] += 4271128;
          result[4] += 3625492;
          result[5] += 42164977;
        } else {
          result[0] += 308546;
          result[1] += 0;
          result[2] += 308546;
          result[3] += 38259766;
          result[4] += 1542732;
          result[5] += 13267499;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 52887779;
          result[2] += 0;
          result[3] += 0;
          result[4] += 799311;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 14728317;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38483667;
          result[5] += 475107;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 44910031;
          result[1] += 1158393;
          result[2] += 0;
          result[3] += 1158393;
          result[4] += 4054377;
          result[5] += 2405894;
        } else {
          result[0] += 11749150;
          result[1] += 1305461;
          result[2] += 13544159;
          result[3] += 15339168;
          result[4] += 2284557;
          result[5] += 9464593;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5368709;
          result[4] += 4026531;
          result[5] += 44291850;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5856773;
          result[3] += 34652577;
          result[4] += 1952257;
          result[5] += 11225482;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 436480;
          result[1] += 0;
          result[2] += 27061785;
          result[3] += 19641618;
          result[4] += 0;
          result[5] += 6547206;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42dd0000))) ) ) {
          result[0] += 38587596;
          result[1] += 3355443;
          result[2] += 10066329;
          result[3] += 0;
          result[4] += 1677721;
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1993685;
          result[1] += 0;
          result[2] += 43433853;
          result[3] += 8117146;
          result[4] += 0;
          result[5] += 142406;
        } else {
          result[0] += 212622;
          result[1] += 0;
          result[2] += 52730291;
          result[3] += 744177;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 223696;
          result[1] += 447392;
          result[2] += 0;
          result[3] += 223696;
          result[4] += 52344913;
          result[5] += 447392;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1144597;
          result[1] += 54504;
          result[2] += 0;
          result[3] += 3215775;
          result[4] += 2616223;
          result[5] += 46655989;
        } else {
          result[0] += 2767375;
          result[1] += 922458;
          result[2] += 922458;
          result[3] += 25090874;
          result[4] += 2582884;
          result[5] += 21401039;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 365218;
          result[1] += 17895697;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35426175;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53436216;
          result[2] += 0;
          result[3] += 0;
          result[4] += 250874;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 46433289;
          result[1] += 1343296;
          result[2] += 134329;
          result[3] += 1029860;
          result[4] += 3850783;
          result[5] += 895531;
        } else {
          result[0] += 11930464;
          result[1] += 1065220;
          result[2] += 5752188;
          result[3] += 14913080;
          result[4] += 7030452;
          result[5] += 12995684;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4724464;
          result[3] += 39084202;
          result[4] += 0;
          result[5] += 9878424;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 23622320;
          result[3] += 18611524;
          result[4] += 0;
          result[5] += 11453246;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 23008753;
          result[4] += 0;
          result[5] += 30678337;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 47295770;
          result[3] += 5113056;
          result[4] += 0;
          result[5] += 1278264;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40148607;
          result[3] += 6068975;
          result[4] += 0;
          result[5] += 7469508;
        } else {
          result[0] += 41943039;
          result[1] += 0;
          result[2] += 8388607;
          result[3] += 0;
          result[4] += 3355443;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 684784;
          result[1] += 0;
          result[2] += 45195765;
          result[3] += 6710886;
          result[4] += 0;
          result[5] += 1095654;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53143699;
          result[3] += 543391;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 224632;
          result[3] += 1123160;
          result[4] += 50317608;
          result[5] += 2021689;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 60390;
          result[3] += 2959131;
          result[4] += 3019521;
          result[5] += 47648048;
        } else {
          result[0] += 5485058;
          result[1] += 1495925;
          result[2] += 1662139;
          result[3] += 20111882;
          result[4] += 5651272;
          result[5] += 19280812;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 10066329;
          result[2] += 0;
          result[3] += 0;
          result[4] += 43620761;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 51056543;
          result[2] += 0;
          result[3] += 836992;
          result[4] += 1793555;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 40823290;
          result[1] += 1866671;
          result[2] += 162319;
          result[3] += 1501453;
          result[4] += 6939147;
          result[5] += 2394208;
        } else {
          result[0] += 12122891;
          result[1] += 157440;
          result[2] += 7242246;
          result[3] += 14956814;
          result[4] += 3621123;
          result[5] += 15586574;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5678442;
          result[3] += 37684208;
          result[4] += 0;
          result[5] += 10324440;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29826161;
          result[3] += 0;
          result[4] += 23860929;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5368709;
          result[4] += 0;
          result[5] += 48318382;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36909875;
          result[3] += 12303291;
          result[4] += 0;
          result[5] += 4473924;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 571139;
          result[1] += 0;
          result[2] += 42073926;
          result[3] += 10280506;
          result[4] += 0;
          result[5] += 761519;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
          result[0] += 13421772;
          result[1] += 0;
          result[2] += 40265318;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 302462;
          result[1] += 0;
          result[2] += 51116160;
          result[3] += 2041621;
          result[4] += 0;
          result[5] += 226846;
        }
      }
    }
  }
  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cc0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53250610;
          result[5] += 436480;
        } else {
          result[0] += 0;
          result[1] += 10737418;
          result[2] += 0;
          result[3] += 0;
          result[4] += 21474836;
          result[5] += 21474836;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
          result[0] += 27192163;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 26494928;
          result[5] += 0;
        } else {
          result[0] += 63989;
          result[1] += 319946;
          result[2] += 0;
          result[3] += 1215798;
          result[4] += 3711384;
          result[5] += 48375972;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3044113;
          result[3] += 11622978;
          result[4] += 3597588;
          result[5] += 35422410;
        } else {
          result[0] += 2173566;
          result[1] += 0;
          result[2] += 6085986;
          result[3] += 33472923;
          result[4] += 217356;
          result[5] += 11737258;
        }
      }
    }
  } else {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x425e0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 5195524;
          result[2] += 0;
          result[3] += 0;
          result[4] += 48491566;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 33038209;
          result[2] += 0;
          result[3] += 4129776;
          result[4] += 10324440;
          result[5] += 6194664;
        }
      } else {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
          result[0] += 7072550;
          result[1] += 2571836;
          result[2] += 0;
          result[3] += 12537703;
          result[4] += 6429591;
          result[5] += 25075407;
        } else {
          result[0] += 43499868;
          result[1] += 2192187;
          result[2] += 515808;
          result[3] += 1461458;
          result[4] += 4857198;
          result[5] += 1160569;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 389036;
          result[2] += 12254662;
          result[3] += 23342213;
          result[4] += 583555;
          result[5] += 17117623;
        } else {
          result[0] += 2254038;
          result[1] += 51228;
          result[2] += 45900413;
          result[3] += 3944566;
          result[4] += 614737;
          result[5] += 922106;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 38587596;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10066329;
          result[5] += 5033164;
        } else {
          result[0] += 0;
          result[1] += 162196;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50443158;
          result[5] += 3081736;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 3176442;
          result[1] += 208291;
          result[2] += 260364;
          result[3] += 3280588;
          result[4] += 3124370;
          result[5] += 43637034;
        } else {
          result[0] += 1883757;
          result[1] += 0;
          result[2] += 2448884;
          result[3] += 33342509;
          result[4] += 0;
          result[5] += 16011939;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 14128181;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28256363;
          result[5] += 11302545;
        } else {
          result[0] += 0;
          result[1] += 52747273;
          result[2] += 0;
          result[3] += 234954;
          result[4] += 587386;
          result[5] += 117477;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
          result[0] += 2354696;
          result[1] += 16011939;
          result[2] += 0;
          result[3] += 0;
          result[4] += 32965757;
          result[5] += 2354696;
        } else {
          result[0] += 37246519;
          result[1] += 844911;
          result[2] += 2886781;
          result[3] += 4365376;
          result[4] += 3379646;
          result[5] += 4963855;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5368709;
          result[3] += 40265318;
          result[4] += 0;
          result[5] += 8053063;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 49852298;
          result[3] += 3834792;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42fb0000))) ) ) {
          result[0] += 516222;
          result[1] += 0;
          result[2] += 35619320;
          result[3] += 13421772;
          result[4] += 0;
          result[5] += 4129776;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 13421772;
          result[4] += 0;
          result[5] += 4473924;
        } else {
          result[0] += 667749;
          result[1] += 0;
          result[2] += 51082866;
          result[3] += 1802924;
          result[4] += 0;
          result[5] += 133549;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 772476;
          result[4] += 51176543;
          result[5] += 1738071;
        } else {
          result[0] += 0;
          result[1] += 14454216;
          result[2] += 0;
          result[3] += 4129776;
          result[4] += 10324440;
          result[5] += 24778657;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1147160;
          result[4] += 3365002;
          result[5] += 49174928;
        } else {
          result[0] += 4363979;
          result[1] += 304463;
          result[2] += 913390;
          result[3] += 16035085;
          result[4] += 5277370;
          result[5] += 26792801;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 2556528;
          result[1] += 8308716;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38987054;
          result[5] += 3834792;
        } else {
          result[0] += 124564;
          result[1] += 52566015;
          result[2] += 0;
          result[3] += 0;
          result[4] += 996512;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42970000))) ) ) {
          result[0] += 14117716;
          result[1] += 2584934;
          result[2] += 5567550;
          result[3] += 13918875;
          result[4] += 5169868;
          result[5] += 12328146;
        } else {
          result[0] += 43134345;
          result[1] += 1890700;
          result[2] += 2154518;
          result[3] += 1670851;
          result[4] += 4045218;
          result[5] += 791455;
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1851279;
          result[4] += 3702558;
          result[5] += 48133254;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4044917;
          result[3] += 36771980;
          result[4] += 0;
          result[5] += 12870193;
        } else {
          result[0] += 0;
          result[1] += 2064888;
          result[2] += 51622203;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1193046;
          result[3] += 3579139;
          result[4] += 15509604;
          result[5] += 33405301;
        } else {
          result[0] += 1667300;
          result[1] += 0;
          result[2] += 31011798;
          result[3] += 19674151;
          result[4] += 0;
          result[5] += 1333840;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 16617432;
          result[1] += 7669584;
          result[2] += 10226112;
          result[3] += 2556528;
          result[4] += 10226112;
          result[5] += 6391320;
        } else {
          result[0] += 193583;
          result[1] += 0;
          result[2] += 49105620;
          result[3] += 4129776;
          result[4] += 0;
          result[5] += 258111;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 218240;
          result[1] += 436480;
          result[2] += 0;
          result[3] += 218240;
          result[4] += 51722929;
          result[5] += 1091201;
        } else {
          result[0] += 0;
          result[1] += 34164512;
          result[2] += 0;
          result[3] += 9761289;
          result[4] += 9761289;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1214029;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2023382;
          result[4] += 2900182;
          result[5] += 47549496;
        } else {
          result[0] += 4658315;
          result[1] += 465831;
          result[2] += 465831;
          result[3] += 20030758;
          result[4] += 3377279;
          result[5] += 24689074;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
          result[0] += 38846153;
          result[1] += 3265006;
          result[2] += 519432;
          result[3] += 1892219;
          result[4] += 7272059;
          result[5] += 1892219;
        } else {
          result[0] += 7803356;
          result[1] += 468201;
          result[2] += 16387048;
          result[3] += 14514242;
          result[4] += 4994148;
          result[5] += 9520094;
        }
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
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11930464;
          result[3] += 0;
          result[4] += 41756626;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 2684354;
          result[2] += 5368709;
          result[3] += 4026531;
          result[4] += 2684354;
          result[5] += 38923141;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 2796202;
          result[2] += 13981013;
          result[3] += 30758229;
          result[4] += 1118481;
          result[5] += 5033164;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37944259;
          result[3] += 11302545;
          result[4] += 0;
          result[5] += 4440285;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 15339168;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38347922;
          result[5] += 0;
        } else {
          result[0] += 17895697;
          result[1] += 0;
          result[2] += 5965232;
          result[3] += 0;
          result[4] += 0;
          result[5] += 29826161;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 390451;
          result[1] += 0;
          result[2] += 50238102;
          result[3] += 2798236;
          result[4] += 0;
          result[5] += 260301;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52577853;
          result[5] += 1109237;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 2102034;
          result[1] += 511305;
          result[2] += 0;
          result[3] += 3635951;
          result[4] += 2386092;
          result[5] += 45051707;
        } else {
          result[0] += 1830241;
          result[1] += 0;
          result[2] += 1525201;
          result[3] += 34774593;
          result[4] += 1830241;
          result[5] += 13726813;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 33802983;
          result[2] += 0;
          result[3] += 0;
          result[4] += 19884107;
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
          result[0] += 3139595;
          result[1] += 9104828;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39558909;
          result[5] += 1883757;
        } else {
          result[0] += 37775796;
          result[1] += 685520;
          result[2] += 2417362;
          result[3] += 4185283;
          result[4] += 4510004;
          result[5] += 4113123;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 3085465;
          result[2] += 1851279;
          result[3] += 8639302;
          result[4] += 8022209;
          result[5] += 32088836;
        } else {
          result[0] += 865920;
          result[1] += 288640;
          result[2] += 8081927;
          result[3] += 33770912;
          result[4] += 288640;
          result[5] += 10391049;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 50529027;
          result[3] += 3158064;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 25676434;
          result[3] += 2334221;
          result[4] += 4668442;
          result[5] += 21007992;
        } else {
          result[0] += 46195869;
          result[1] += 0;
          result[2] += 6242685;
          result[3] += 0;
          result[4] += 1248537;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29390743;
          result[3] += 17634446;
          result[4] += 0;
          result[5] += 6661901;
        } else {
          result[0] += 1188644;
          result[1] += 66035;
          result[2] += 49328729;
          result[3] += 2971610;
          result[4] += 0;
          result[5] += 132071;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 252052;
          result[1] += 1260260;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50914518;
          result[5] += 1260260;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 1621966;
          result[1] += 594721;
          result[2] += 108131;
          result[3] += 3946785;
          result[4] += 3243933;
          result[5] += 44171554;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 32266484;
          result[4] += 813440;
          result[5] += 20607166;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 7158278;
          result[2] += 0;
          result[3] += 0;
          result[4] += 46528812;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53243396;
          result[2] += 0;
          result[3] += 0;
          result[4] += 443694;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 21374382;
          result[1] += 2567158;
          result[2] += 2009080;
          result[3] += 6975973;
          result[4] += 11217365;
          result[5] += 9543131;
        } else {
          result[0] += 47163090;
          result[1] += 1563041;
          result[2] += 1631000;
          result[3] += 203875;
          result[4] += 2990167;
          result[5] += 135916;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42960000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5534751;
          result[3] += 29887659;
          result[4] += 0;
          result[5] += 18264680;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15586574;
          result[3] += 31173149;
          result[4] += 0;
          result[5] += 6927366;
        } else {
          result[0] += 1988410;
          result[1] += 0;
          result[2] += 39105412;
          result[3] += 7290839;
          result[4] += 1325607;
          result[5] += 3976821;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4880644;
          result[3] += 0;
          result[4] += 0;
          result[5] += 48806446;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33802983;
          result[3] += 16901491;
          result[4] += 0;
          result[5] += 2982616;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38200430;
          result[3] += 14454216;
          result[4] += 0;
          result[5] += 1032444;
        } else {
          result[0] += 788461;
          result[1] += 0;
          result[2] += 50604921;
          result[3] += 1935315;
          result[4] += 0;
          result[5] += 358391;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 2147483;
          result[2] += 0;
          result[3] += 1503238;
          result[4] += 49177375;
          result[5] += 858993;
        } else {
          result[0] += 25216664;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 13828493;
          result[5] += 14641933;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 241290;
          result[2] += 0;
          result[3] += 3076451;
          result[4] += 2774838;
          result[5] += 47594511;
        } else {
          result[0] += 276737;
          result[1] += 0;
          result[2] += 276737;
          result[3] += 30441134;
          result[4] += 1106950;
          result[5] += 21585531;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 14913080;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38774010;
          result[5] += 0;
        } else {
          result[0] += 366882;
          result[1] += 52586444;
          result[2] += 122294;
          result[3] += 489176;
          result[4] += 122294;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 41596927;
          result[1] += 2663217;
          result[2] += 0;
          result[3] += 1014559;
          result[4] += 7440100;
          result[5] += 972285;
        } else {
          result[0] += 11097331;
          result[1] += 899783;
          result[2] += 10947367;
          result[3] += 13496754;
          result[4] += 3899062;
          result[5] += 13346790;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 7405116;
          result[4] += 0;
          result[5] += 46281975;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8103711;
          result[3] += 34440775;
          result[4] += 506481;
          result[5] += 10636121;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 2497074;
          result[1] += 0;
          result[2] += 13733907;
          result[3] += 7491222;
          result[4] += 1248537;
          result[5] += 28716351;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41184617;
          result[3] += 7354396;
          result[4] += 0;
          result[5] += 5148077;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34098557;
          result[3] += 18137530;
          result[4] += 0;
          result[5] += 1451002;
        } else {
          result[0] += 3355443;
          result[1] += 16777215;
          result[2] += 0;
          result[3] += 10066329;
          result[4] += 23488102;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
          result[0] += 17412029;
          result[1] += 0;
          result[2] += 31922054;
          result[3] += 0;
          result[4] += 2902004;
          result[5] += 1451002;
        } else {
          result[0] += 305387;
          result[1] += 0;
          result[2] += 50022443;
          result[3] += 2931718;
          result[4] += 0;
          result[5] += 427542;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 242928;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53444163;
          result[5] += 0;
        } else {
          result[0] += 958698;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38347922;
          result[5] += 14380470;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 158369;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1900428;
          result[4] += 950214;
          result[5] += 50678080;
        } else {
          result[0] += 4934475;
          result[1] += 3158064;
          result[2] += 789516;
          result[3] += 16974595;
          result[4] += 4342338;
          result[5] += 23488102;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428c0000))) ) ) {
          result[0] += 0;
          result[1] += 52536653;
          result[2] += 127826;
          result[3] += 0;
          result[4] += 1022611;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 40226187;
          result[1] += 2621745;
          result[2] += 313044;
          result[3] += 1760873;
          result[4] += 7630453;
          result[5] += 1134785;
        } else {
          result[0] += 6027532;
          result[1] += 0;
          result[2] += 12055064;
          result[3] += 13737166;
          result[4] += 7148933;
          result[5] += 14718393;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1220161;
          result[3] += 6100805;
          result[4] += 1220161;
          result[5] += 45145963;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37580963;
          result[3] += 0;
          result[4] += 5368709;
          result[5] += 10737418;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 1579032;
          result[2] += 6316128;
          result[3] += 39475802;
          result[4] += 0;
          result[5] += 6316128;
        } else {
          result[0] += 0;
          result[1] += 2711469;
          result[2] += 26030104;
          result[3] += 15184227;
          result[4] += 0;
          result[5] += 9761289;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 7669584;
          result[1] += 0;
          result[2] += 38347922;
          result[3] += 7669584;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 46017506;
          result[1] += 3834792;
          result[2] += 3834792;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6710886;
          result[3] += 26843545;
          result[4] += 0;
          result[5] += 20132659;
        } else {
          result[0] += 658370;
          result[1] += 0;
          result[2] += 49497463;
          result[3] += 2992591;
          result[4] += 179555;
          result[5] += 359110;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 195938;
          result[1] += 587814;
          result[2] += 195938;
          result[3] += 587814;
          result[4] += 48004880;
          result[5] += 4114704;
        } else {
          result[0] += 0;
          result[1] += 38347922;
          result[2] += 9586980;
          result[3] += 0;
          result[4] += 5752188;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 2014524;
          result[1] += 251815;
          result[2] += 0;
          result[3] += 2921061;
          result[4] += 4079413;
          result[5] += 44420276;
        } else {
          result[0] += 589968;
          result[1] += 0;
          result[2] += 4719744;
          result[3] += 37167986;
          result[4] += 0;
          result[5] += 11209392;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 7105644;
          result[2] += 0;
          result[3] += 1184274;
          result[4] += 44607656;
          result[5] += 789516;
        } else {
          result[0] += 0;
          result[1] += 52827114;
          result[2] += 0;
          result[3] += 0;
          result[4] += 859976;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 19242685;
          result[1] += 481067;
          result[2] += 7119793;
          result[3] += 10583476;
          result[4] += 4040963;
          result[5] += 12219104;
        } else {
          result[0] += 44722068;
          result[1] += 1081985;
          result[2] += 2370063;
          result[3] += 1339601;
          result[4] += 3709664;
          result[5] += 463708;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a60000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1220161;
          result[3] += 6100805;
          result[4] += 9761289;
          result[5] += 36604834;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37167986;
          result[3] += 4129776;
          result[4] += 8259552;
          result[5] += 4129776;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42e90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 31814572;
          result[4] += 0;
          result[5] += 21872518;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 6316128;
          result[1] += 6316128;
          result[2] += 15790320;
          result[3] += 18948385;
          result[4] += 0;
          result[5] += 6316128;
        } else {
          result[0] += 891072;
          result[1] += 334152;
          result[2] += 48284966;
          result[3] += 3954132;
          result[4] += 0;
          result[5] += 222768;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 887389;
          result[1] += 1331084;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49915683;
          result[5] += 1552932;
        } else {
          result[0] += 30298655;
          result[1] += 2126221;
          result[2] += 0;
          result[3] += 0;
          result[4] += 6378664;
          result[5] += 14883550;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1258869;
          result[4] += 2369637;
          result[5] += 50058584;
        } else {
          result[0] += 540111;
          result[1] += 2160446;
          result[2] += 756156;
          result[3] += 20740284;
          result[4] += 1404290;
          result[5] += 28085802;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53102264;
          result[2] += 0;
          result[3] += 0;
          result[4] += 584826;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 41983388;
          result[1] += 1915908;
          result[2] += 291551;
          result[3] += 1915908;
          result[4] += 6414128;
          result[5] += 1166205;
        } else {
          result[0] += 8995443;
          result[1] += 142784;
          result[2] += 15277975;
          result[3] += 10137722;
          result[4] += 6996456;
          result[5] += 12136709;
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5113056;
          result[3] += 0;
          result[4] += 2556528;
          result[5] += 46017506;
        } else {
          result[0] += 3609216;
          result[1] += 1353456;
          result[2] += 9474192;
          result[3] += 28873729;
          result[4] += 1353456;
          result[5] += 9023040;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 44739242;
          result[4] += 0;
          result[5] += 8947848;
        } else {
          result[0] += 2375535;
          result[1] += 0;
          result[2] += 43709844;
          result[3] += 4751070;
          result[4] += 950214;
          result[5] += 1900428;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 3579139;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 3579139;
          result[4] += 0;
          result[5] += 3579139;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 336385;
          result[1] += 0;
          result[2] += 50121407;
          result[3] += 3229298;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 12052204;
          result[1] += 0;
          result[2] += 41634887;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42780000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 8259552;
          result[2] += 0;
          result[3] += 5506368;
          result[4] += 22025473;
          result[5] += 17895697;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1478168;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1951182;
          result[4] += 3547605;
          result[5] += 46710134;
        } else {
          result[0] += 2548437;
          result[1] += 169895;
          result[2] += 1698958;
          result[3] += 24295107;
          result[4] += 2378542;
          result[5] += 22596149;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42420000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 53057330;
          result[2] += 0;
          result[3] += 0;
          result[4] += 629760;
          result[5] += 0;
        } else {
          result[0] += 29283867;
          result[1] += 9761289;
          result[2] += 0;
          result[3] += 14641933;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
          result[0] += 1655549;
          result[1] += 28617348;
          result[2] += 0;
          result[3] += 0;
          result[4] += 22231658;
          result[5] += 1182535;
        } else {
          result[0] += 39359025;
          result[1] += 1070289;
          result[2] += 2002476;
          result[3] += 4315682;
          result[4] += 3590647;
          result[5] += 3348969;
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3408704;
          result[3] += 23008753;
          result[4] += 0;
          result[5] += 27269633;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27065393;
          result[3] += 20409968;
          result[4] += 887389;
          result[5] += 5324339;
        } else {
          result[0] += 589968;
          result[1] += 0;
          result[2] += 45427538;
          result[3] += 5309712;
          result[4] += 0;
          result[5] += 2359872;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e80000))) ) ) {
          result[0] += 958698;
          result[1] += 0;
          result[2] += 39306620;
          result[3] += 6710886;
          result[4] += 0;
          result[5] += 6710886;
        } else {
          result[0] += 48318382;
          result[1] += 0;
          result[2] += 5368709;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 1167110;
          result[1] += 0;
          result[2] += 42015984;
          result[3] += 10114959;
          result[4] += 0;
          result[5] += 389036;
        } else {
          result[0] += 297847;
          result[1] += 0;
          result[2] += 50708611;
          result[3] += 2531707;
          result[4] += 0;
          result[5] += 148923;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 264468;
          result[4] += 53422622;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3745611;
          result[4] += 37456110;
          result[5] += 12485370;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 0;
          result[1] += 26843545;
          result[2] += 0;
          result[3] += 26843545;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 1220161;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 46366124;
          result[5] += 6100805;
        } else {
          result[0] += 1620109;
          result[1] += 111731;
          result[2] += 391061;
          result[3] += 2849158;
          result[4] += 2513963;
          result[5] += 46201065;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 7238708;
          result[1] += 0;
          result[2] += 1809677;
          result[3] += 10858063;
          result[4] += 603225;
          result[5] += 33177415;
        } else {
          result[0] += 0;
          result[1] += 291777;
          result[2] += 2042443;
          result[3] += 36180431;
          result[4] += 2042443;
          result[5] += 13129995;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 11930464;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41756626;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53569356;
          result[2] += 0;
          result[3] += 0;
          result[4] += 117734;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42870000))) ) ) {
          result[0] += 2418337;
          result[1] += 16444694;
          result[2] += 0;
          result[3] += 2902004;
          result[4] += 30954719;
          result[5] += 967334;
        } else {
          result[0] += 40179708;
          result[1] += 608783;
          result[2] += 1940497;
          result[3] += 3728798;
          result[4] += 3919043;
          result[5] += 3310260;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 325376;
          result[1] += 2277634;
          result[2] += 7483655;
          result[3] += 33839136;
          result[4] += 3904515;
          result[5] += 5856773;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30527953;
          result[3] += 3158064;
          result[4] += 4210752;
          result[5] += 15790320;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
          result[0] += 29964888;
          result[1] += 8739759;
          result[2] += 6242685;
          result[3] += 2497074;
          result[4] += 4994148;
          result[5] += 1248537;
        } else {
          result[0] += 631612;
          result[1] += 52634;
          result[2] += 47581500;
          result[3] += 3894945;
          result[4] += 210537;
          result[5] += 1315860;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 5044424;
          result[2] += 0;
          result[3] += 540474;
          result[4] += 46841086;
          result[5] += 1261106;
        } else {
          result[0] += 37617485;
          result[1] += 0;
          result[2] += 0;
          result[3] += 730436;
          result[4] += 6573929;
          result[5] += 8765239;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 319186;
          result[1] += 191511;
          result[2] += 0;
          result[3] += 1468255;
          result[4] += 4404767;
          result[5] += 47303370;
        } else {
          result[0] += 1079137;
          result[1] += 0;
          result[2] += 1888490;
          result[3] += 20503612;
          result[4] += 809353;
          result[5] += 29406497;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 21474836;
          result[2] += 0;
          result[3] += 0;
          result[4] += 32212254;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53446880;
          result[2] += 0;
          result[3] += 0;
          result[4] += 240210;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 43258010;
          result[1] += 1042908;
          result[2] += 362750;
          result[3] += 1541690;
          result[4] += 5531946;
          result[5] += 1949784;
        } else {
          result[0] += 13336283;
          result[1] += 1025867;
          result[2] += 5300317;
          result[3] += 19320513;
          result[4] += 4787383;
          result[5] += 9916723;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 2982616;
          result[2] += 5965232;
          result[3] += 0;
          result[4] += 35791394;
          result[5] += 8947848;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1193046;
          result[3] += 3579139;
          result[4] += 2386092;
          result[5] += 46528812;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6795834;
          result[3] += 37150560;
          result[4] += 453055;
          result[5] += 9287640;
        } else {
          result[0] += 403662;
          result[1] += 0;
          result[2] += 31082000;
          result[3] += 16146493;
          result[4] += 0;
          result[5] += 6054935;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3355443;
          result[3] += 16777215;
          result[4] += 0;
          result[5] += 33554431;
        } else {
          result[0] += 6927366;
          result[1] += 1731841;
          result[2] += 20782099;
          result[3] += 1731841;
          result[4] += 13854733;
          result[5] += 8659208;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42970000))) ) ) {
          result[0] += 21091357;
          result[1] += 5752188;
          result[2] += 21091357;
          result[3] += 0;
          result[4] += 0;
          result[5] += 5752188;
        } else {
          result[0] += 696412;
          result[1] += 0;
          result[2] += 48812202;
          result[3] += 3861925;
          result[4] += 0;
          result[5] += 316551;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53407470;
          result[5] += 279620;
        } else {
          result[0] += 0;
          result[1] += 4473924;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8947848;
          result[5] += 40265318;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 7158278;
          result[2] += 0;
          result[3] += 0;
          result[4] += 46528812;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 23488102;
          result[2] += 0;
          result[3] += 16777215;
          result[4] += 0;
          result[5] += 13421772;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          result[0] += 31471743;
          result[1] += 0;
          result[2] += 0;
          result[3] += 925639;
          result[4] += 19438429;
          result[5] += 1851279;
        } else {
          result[0] += 63837;
          result[1] += 255348;
          result[2] += 63837;
          result[3] += 1404418;
          result[4] += 2681162;
          result[5] += 49218486;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 8825275;
          result[4] += 735439;
          result[5] += 44126376;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4244038;
          result[3] += 32679098;
          result[4] += 636605;
          result[5] += 16127347;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 426088;
          result[1] += 6391320;
          result[2] += 0;
          result[3] += 0;
          result[4] += 45591418;
          result[5] += 1278264;
        } else {
          result[0] += 0;
          result[1] += 53334659;
          result[2] += 0;
          result[3] += 0;
          result[4] += 352431;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
          result[0] += 11729952;
          result[1] += 3158064;
          result[2] += 451152;
          result[3] += 17143777;
          result[4] += 9474192;
          result[5] += 11729952;
        } else {
          result[0] += 44789632;
          result[1] += 734256;
          result[2] += 1338937;
          result[3] += 1598087;
          result[4] += 4060005;
          result[5] += 1166171;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 1698958;
          result[1] += 2208646;
          result[2] += 5096875;
          result[3] += 21067086;
          result[4] += 7135626;
          result[5] += 16479898;
        } else {
          result[0] += 985084;
          result[1] += 0;
          result[2] += 43343706;
          result[3] += 4432879;
          result[4] += 0;
          result[5] += 4925421;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
          result[0] += 43620761;
          result[1] += 0;
          result[2] += 0;
          result[3] += 6710886;
          result[4] += 0;
          result[5] += 3355443;
        } else {
          result[0] += 1559376;
          result[1] += 0;
          result[2] += 47059742;
          result[3] += 4399668;
          result[4] += 0;
          result[5] += 668304;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42420000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 205697;
          result[1] += 0;
          result[2] += 0;
          result[3] += 411395;
          result[4] += 51835812;
          result[5] += 1234186;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 43925801;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 9761289;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
          result[0] += 11356884;
          result[1] += 2064888;
          result[2] += 0;
          result[3] += 2064888;
          result[4] += 23746213;
          result[5] += 14454216;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 67701;
          result[3] += 1760232;
          result[4] += 2775751;
          result[5] += 49083406;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 4793490;
          result[1] += 6231537;
          result[2] += 0;
          result[3] += 4793490;
          result[4] += 11025027;
          result[5] += 26843545;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4372704;
          result[3] += 34252850;
          result[4] += 0;
          result[5] += 15061536;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 53196798;
          result[2] += 0;
          result[3] += 0;
          result[4] += 490293;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 23546969;
          result[2] += 0;
          result[3] += 0;
          result[4] += 30140121;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 43035572;
          result[1] += 1417339;
          result[2] += 257698;
          result[3] += 1503238;
          result[4] += 6098853;
          result[5] += 1374389;
        } else {
          result[0] += 13290615;
          result[1] += 349753;
          result[2] += 5421172;
          result[3] += 16963022;
          result[4] += 4197036;
          result[5] += 13465491;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 872960;
          result[1] += 0;
          result[2] += 5237764;
          result[3] += 24442903;
          result[4] += 3491843;
          result[5] += 19641618;
        } else {
          result[0] += 15288376;
          result[1] += 1777718;
          result[2] += 26665773;
          result[3] += 7821960;
          result[4] += 711087;
          result[5] += 1422174;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 1412818;
          result[1] += 0;
          result[2] += 4238454;
          result[3] += 21192272;
          result[4] += 7064090;
          result[5] += 19779454;
        } else {
          result[0] += 787035;
          result[1] += 0;
          result[2] += 47896755;
          result[3] += 4216263;
          result[4] += 0;
          result[5] += 787035;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 649440;
          result[4] += 47625645;
          result[5] += 5412005;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 218833;
          result[1] += 0;
          result[2] += 364722;
          result[3] += 1385943;
          result[4] += 3355443;
          result[5] += 48362148;
        } else {
          result[0] += 4340658;
          result[1] += 571139;
          result[2] += 799594;
          result[3] += 16563038;
          result[4] += 5825620;
          result[5] += 25587039;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 18694612;
          result[2] += 0;
          result[3] += 0;
          result[4] += 34992479;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 52726248;
          result[2] += 0;
          result[3] += 0;
          result[4] += 960842;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 44663354;
          result[1] += 1490158;
          result[2] += 703685;
          result[3] += 1614338;
          result[4] += 4677441;
          result[5] += 538112;
        } else {
          result[0] += 11954615;
          result[1] += 434713;
          result[2] += 7390125;
          result[3] += 18692671;
          result[4] += 2608279;
          result[5] += 12606685;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42660000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1731841;
          result[3] += 1731841;
          result[4] += 1731841;
          result[5] += 48491566;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42660000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 223696;
          result[1] += 0;
          result[2] += 14987646;
          result[3] += 24159191;
          result[4] += 1789569;
          result[5] += 12526987;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 43925801;
          result[1] += 0;
          result[2] += 2440322;
          result[3] += 7320966;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 2825636;
          result[1] += 0;
          result[2] += 43797363;
          result[3] += 7064090;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 899066;
          result[1] += 0;
          result[2] += 43155173;
          result[3] += 8220033;
          result[4] += 0;
          result[5] += 1412818;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 51972533;
          result[3] += 1393078;
          result[4] += 0;
          result[5] += 321479;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c00000))) ) ) {
          result[0] += 240749;
          result[1] += 240749;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51761096;
          result[5] += 1444495;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 941878;
          result[1] += 0;
          result[2] += 62791;
          result[3] += 2072133;
          result[4] += 2637260;
          result[5] += 47973026;
        } else {
          result[0] += 1571329;
          result[1] += 2356994;
          result[2] += 1964161;
          result[3] += 21867668;
          result[4] += 3011714;
          result[5] += 22915221;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 11184810;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42502280;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53193416;
          result[2] += 0;
          result[3] += 0;
          result[4] += 493674;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42890000))) ) ) {
          result[0] += 5592405;
          result[1] += 8668228;
          result[2] += 838860;
          result[3] += 0;
          result[4] += 36630254;
          result[5] += 1957341;
        } else {
          result[0] += 35259726;
          result[1] += 1323512;
          result[2] += 3766919;
          result[3] += 4886814;
          result[4] += 4513516;
          result[5] += 3936600;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 45210182;
          result[5] += 8476909;
        } else {
          result[0] += 0;
          result[1] += 1988410;
          result[2] += 0;
          result[3] += 5965232;
          result[4] += 0;
          result[5] += 45733448;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 2440322;
          result[1] += 488064;
          result[2] += 18546449;
          result[3] += 20986772;
          result[4] += 488064;
          result[5] += 10737418;
        } else {
          result[0] += 2403899;
          result[1] += 0;
          result[2] += 43270192;
          result[3] += 5609099;
          result[4] += 0;
          result[5] += 2403899;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9474192;
          result[3] += 34738706;
          result[4] += 0;
          result[5] += 9474192;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41173558;
          result[3] += 11706207;
          result[4] += 0;
          result[5] += 807324;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30678337;
          result[3] += 0;
          result[4] += 0;
          result[5] += 23008753;
        } else {
          result[0] += 300347;
          result[1] += 0;
          result[2] += 50458357;
          result[3] += 2928386;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 930990;
          result[1] += 1551650;
          result[2] += 1241320;
          result[3] += 0;
          result[4] += 48566646;
          result[5] += 1396485;
        } else {
          result[0] += 0;
          result[1] += 48227386;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5459704;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42890000))) ) ) {
          result[0] += 59126;
          result[1] += 59126;
          result[2] += 413887;
          result[3] += 3429351;
          result[4] += 3488478;
          result[5] += 46237120;
        } else {
          result[0] += 21805681;
          result[1] += 1052688;
          result[2] += 651664;
          result[3] += 11830208;
          result[4] += 6266000;
          result[5] += 12080848;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 53552198;
          result[2] += 0;
          result[3] += 0;
          result[4] += 134892;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 29826161;
          result[2] += 0;
          result[3] += 0;
          result[4] += 23860929;
          result[5] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 7669584;
          result[1] += 0;
          result[2] += 28121809;
          result[3] += 10226112;
          result[4] += 0;
          result[5] += 7669584;
        } else {
          result[0] += 51982739;
          result[1] += 0;
          result[2] += 387352;
          result[3] += 387352;
          result[4] += 929646;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 34164512;
          result[4] += 0;
          result[5] += 19522578;
        } else {
          result[0] += 18790481;
          result[1] += 0;
          result[2] += 33554431;
          result[3] += 0;
          result[4] += 1342177;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 1195461;
          result[1] += 0;
          result[2] += 32386140;
          result[3] += 14780251;
          result[4] += 434713;
          result[5] += 4890524;
        } else {
          result[0] += 32808777;
          result[1] += 0;
          result[2] += 12924670;
          result[3] += 1988410;
          result[4] += 3976821;
          result[5] += 1988410;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 0;
          result[4] += 0;
          result[5] += 26843545;
        } else {
          result[0] += 76695;
          result[1] += 0;
          result[2] += 51309520;
          result[3] += 2300875;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 825955;
          result[1] += 3469012;
          result[2] += 0;
          result[3] += 0;
          result[4] += 47905404;
          result[5] += 1486719;
        } else {
          result[0] += 40943185;
          result[1] += 813440;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7049820;
          result[5] += 4880644;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 132724;
          result[1] += 66362;
          result[2] += 66362;
          result[3] += 1858144;
          result[4] += 3782650;
          result[5] += 47780847;
        } else {
          result[0] += 1881815;
          result[1] += 664170;
          result[2] += 885560;
          result[3] += 17932595;
          result[4] += 5202666;
          result[5] += 27120283;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 671088;
          result[1] += 20132659;
          result[2] += 671088;
          result[3] += 671088;
          result[4] += 30870077;
          result[5] += 671088;
        } else {
          result[0] += 0;
          result[1] += 53565901;
          result[2] += 0;
          result[3] += 0;
          result[4] += 121189;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 16221998;
          result[1] += 1673698;
          result[2] += 7982253;
          result[3] += 16479490;
          result[4] += 3089904;
          result[5] += 8239745;
        } else {
          result[0] += 45961112;
          result[1] += 338364;
          result[2] += 2706912;
          result[3] += 902304;
          result[4] += 3383640;
          result[5] += 394758;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x426c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 3834792;
          result[1] += 3834792;
          result[2] += 7669584;
          result[3] += 0;
          result[4] += 7669584;
          result[5] += 30678337;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5078508;
          result[3] += 33373056;
          result[4] += 0;
          result[5] += 15235525;
        } else {
          result[0] += 15790320;
          result[1] += 0;
          result[2] += 28422577;
          result[3] += 0;
          result[4] += 0;
          result[5] += 9474192;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 1052688;
          result[2] += 26317201;
          result[3] += 23159137;
          result[4] += 0;
          result[5] += 3158064;
        } else {
          result[0] += 3867290;
          result[1] += 0;
          result[2] += 42540195;
          result[3] += 7279605;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 244032;
          result[1] += 0;
          result[2] += 50921392;
          result[3] += 2440322;
          result[4] += 0;
          result[5] += 81344;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 1376592;
          result[1] += 1204518;
          result[2] += 0;
          result[3] += 172074;
          result[4] += 44911316;
          result[5] += 6022590;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 406207;
          result[3] += 2166439;
          result[4] += 2843452;
          result[5] += 48270991;
        } else {
          result[0] += 7588851;
          result[1] += 1130254;
          result[2] += 1695381;
          result[3] += 17922607;
          result[4] += 4682483;
          result[5] += 20667511;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 807324;
          result[1] += 12513532;
          result[2] += 807324;
          result[3] += 2018311;
          result[4] += 37136935;
          result[5] += 403662;
        } else {
          result[0] += 0;
          result[1] += 52464150;
          result[2] += 0;
          result[3] += 366882;
          result[4] += 611470;
          result[5] += 244588;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
          result[0] += 46216372;
          result[1] += 1206451;
          result[2] += 696029;
          result[3] += 1577667;
          result[4] += 3062530;
          result[5] += 928039;
        } else {
          result[0] += 6613627;
          result[1] += 972592;
          result[2] += 14199846;
          result[3] += 13810809;
          result[4] += 4279405;
          result[5] += 13810809;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35791394;
          result[5] += 17895697;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4026531;
          result[3] += 8053063;
          result[4] += 1342177;
          result[5] += 40265318;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42eb0000))) ) ) {
          result[0] += 405185;
          result[1] += 1215556;
          result[2] += 31401883;
          result[3] += 16207423;
          result[4] += 202592;
          result[5] += 4254448;
        } else {
          result[0] += 35791394;
          result[1] += 0;
          result[2] += 15509604;
          result[3] += 1193046;
          result[4] += 0;
          result[5] += 1193046;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 11930464;
          result[1] += 0;
          result[2] += 11930464;
          result[3] += 29826161;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 470939;
          result[1] += 0;
          result[2] += 48506757;
          result[3] += 4473924;
          result[4] += 0;
          result[5] += 235469;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 49557314;
          result[3] += 4129776;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 181990;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49683308;
          result[5] += 3821792;
        } else {
          result[0] += 0;
          result[1] += 47721858;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3976821;
          result[5] += 1988410;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 77358;
          result[2] += 154717;
          result[3] += 1237742;
          result[4] += 1160383;
          result[5] += 51056887;
        } else {
          result[0] += 5673120;
          result[1] += 276737;
          result[2] += 1383687;
          result[3] += 15497304;
          result[4] += 3597588;
          result[5] += 27258651;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 23008753;
          result[2] += 0;
          result[3] += 0;
          result[4] += 30678337;
          result[5] += 0;
        } else {
          result[0] += 389978;
          result[1] += 52777140;
          result[2] += 0;
          result[3] += 129992;
          result[4] += 389978;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
          result[0] += 6282531;
          result[1] += 3284050;
          result[2] += 571139;
          result[3] += 15277975;
          result[4] += 8138734;
          result[5] += 20132659;
        } else {
          result[0] += 38648893;
          result[1] += 2288421;
          result[2] += 2215773;
          result[3] += 3160200;
          result[4] += 5848187;
          result[5] += 1525614;
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 1431655;
          result[2] += 4294967;
          result[3] += 25053975;
          result[4] += 1789569;
          result[5] += 21116922;
        } else {
          result[0] += 3038891;
          result[1] += 0;
          result[2] += 28362991;
          result[3] += 20259279;
          result[4] += 0;
          result[5] += 2025927;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 26843545;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 26843545;
        } else {
          result[0] += 3355443;
          result[1] += 0;
          result[2] += 50331647;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42900000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7669584;
          result[3] += 15339168;
          result[4] += 0;
          result[5] += 30678337;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 35791394;
          result[1] += 0;
          result[2] += 17895697;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 940778;
          result[1] += 0;
          result[2] += 48418731;
          result[3] += 3888550;
          result[4] += 0;
          result[5] += 439029;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 2274876;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50957239;
          result[5] += 454975;
        } else {
          result[0] += 24558988;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10280506;
          result[5] += 18847595;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 158837;
          result[1] += 847133;
          result[2] += 0;
          result[3] += 3653263;
          result[4] += 2276671;
          result[5] += 46751184;
        } else {
          result[0] += 244032;
          result[1] += 0;
          result[2] += 1220161;
          result[3] += 37580963;
          result[4] += 244032;
          result[5] += 14397901;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 2191309;
          result[1] += 9130457;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42000105;
          result[5] += 365218;
        } else {
          result[0] += 0;
          result[1] += 51716922;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1970168;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 46321907;
          result[1] += 324253;
          result[2] += 185287;
          result[3] += 1621266;
          result[4] += 3659430;
          result[5] += 1574944;
        } else {
          result[0] += 12632256;
          result[1] += 1917396;
          result[2] += 13760136;
          result[3] += 13421772;
          result[4] += 1579032;
          result[5] += 10376496;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b00000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6710886;
          result[3] += 13421772;
          result[4] += 0;
          result[5] += 33554431;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17895697;
          result[3] += 31317469;
          result[4] += 0;
          result[5] += 4473924;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 51246768;
          result[3] += 0;
          result[4] += 0;
          result[5] += 2440322;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42960000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29582682;
          result[3] += 16434823;
          result[4] += 0;
          result[5] += 7669584;
        } else {
          result[0] += 301612;
          result[1] += 0;
          result[2] += 49947091;
          result[3] += 3076451;
          result[4] += 0;
          result[5] += 361935;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 252052;
          result[1] += 252052;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52930934;
          result[5] += 252052;
        } else {
          result[0] += 3501332;
          result[1] += 583555;
          result[2] += 583555;
          result[3] += 5251998;
          result[4] += 18673770;
          result[5] += 25092879;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1077544;
          result[1] += 0;
          result[2] += 126769;
          result[3] += 2091704;
          result[4] += 2472014;
          result[5] += 47919056;
        } else {
          result[0] += 3091926;
          result[1] += 1405421;
          result[2] += 421626;
          result[3] += 22205655;
          result[4] += 1827047;
          result[5] += 24735413;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 624268;
          result[1] += 13109638;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39328915;
          result[5] += 624268;
        } else {
          result[0] += 116457;
          result[1] += 51125017;
          result[2] += 0;
          result[3] += 116457;
          result[4] += 2329157;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 45197039;
          result[1] += 1747951;
          result[2] += 416179;
          result[3] += 1456626;
          result[4] += 3953700;
          result[5] += 915593;
        } else {
          result[0] += 8113483;
          result[1] += 1553645;
          result[2] += 7250346;
          result[3] += 15881711;
          result[4] += 7250346;
          result[5] += 13637556;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3355443;
          result[3] += 3355443;
          result[4] += 3355443;
          result[5] += 43620761;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9525129;
          result[3] += 33770912;
          result[4] += 432960;
          result[5] += 9958089;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 48806446;
          result[3] += 4880644;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 566319;
          result[1] += 0;
          result[2] += 43719867;
          result[3] += 8155001;
          result[4] += 0;
          result[5] += 1245902;
        } else {
          result[0] += 39045157;
          result[1] += 0;
          result[2] += 14641933;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 49596646;
          result[3] += 4090445;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53545061;
          result[3] += 142029;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52413879;
          result[5] += 1273211;
        } else {
          result[0] += 0;
          result[1] += 13421772;
          result[2] += 40265318;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 74051;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1258869;
          result[4] += 2295585;
          result[5] += 50058584;
        } else {
          result[0] += 3694595;
          result[1] += 3694595;
          result[2] += 1962753;
          result[3] += 15355662;
          result[4] += 5772805;
          result[5] += 23206678;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 10737418;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53453669;
          result[2] += 0;
          result[3] += 0;
          result[4] += 233422;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 6331024;
          result[1] += 7343988;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38999113;
          result[5] += 1012963;
        } else {
          result[0] += 40883878;
          result[1] += 549831;
          result[2] += 1099662;
          result[3] += 4359376;
          result[4] += 2631335;
          result[5] += 4163007;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 4668442;
          result[2] += 3112295;
          result[3] += 12449180;
          result[4] += 3890368;
          result[5] += 29566803;
        } else {
          result[0] += 353204;
          result[1] += 0;
          result[2] += 6710886;
          result[3] += 36026863;
          result[4] += 0;
          result[5] += 10596136;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 1626881;
          result[1] += 1626881;
          result[2] += 9761289;
          result[3] += 813440;
          result[4] += 18709137;
          result[5] += 21149460;
        } else {
          result[0] += 6427327;
          result[1] += 378078;
          result[2] += 34027029;
          result[3] += 8695796;
          result[4] += 378078;
          result[5] += 3780781;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7255012;
          result[3] += 43530073;
          result[4] += 0;
          result[5] += 2902004;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30678337;
          result[3] += 0;
          result[4] += 0;
          result[5] += 23008753;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 475107;
          result[1] += 0;
          result[2] += 43868213;
          result[3] += 9185402;
          result[4] += 0;
          result[5] += 158369;
        } else {
          result[0] += 421902;
          result[1] += 0;
          result[2] += 51683054;
          result[3] += 1476658;
          result[4] += 0;
          result[5] += 105475;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 436480;
          result[1] += 1091201;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51941169;
          result[5] += 218240;
        } else {
          result[0] += 25478619;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1213267;
          result[4] += 14862528;
          result[5] += 12132675;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 294579;
          result[2] += 73644;
          result[3] += 1251962;
          result[4] += 2798504;
          result[5] += 49268400;
        } else {
          result[0] += 1248537;
          result[1] += 2965275;
          result[2] += 1872805;
          result[3] += 15450645;
          result[4] += 4994148;
          result[5] += 27155679;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 1167110;
          result[1] += 22175102;
          result[2] += 5835553;
          result[3] += 2334221;
          result[4] += 17506660;
          result[5] += 4668442;
        } else {
          result[0] += 0;
          result[1] += 53179411;
          result[2] += 0;
          result[3] += 0;
          result[4] += 507679;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 43715359;
          result[1] += 979366;
          result[2] += 0;
          result[3] += 2225832;
          result[4] += 5564582;
          result[5] += 1201949;
        } else {
          result[0] += 10382880;
          result[1] += 2279168;
          result[2] += 5571301;
          result[3] += 17853490;
          result[4] += 5697922;
          result[5] += 11902326;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 2064888;
          result[2] += 20648881;
          result[3] += 2064888;
          result[4] += 28908433;
          result[5] += 0;
        } else {
          result[0] += 976128;
          result[1] += 0;
          result[2] += 1952257;
          result[3] += 7809031;
          result[4] += 1952257;
          result[5] += 40997415;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8947848;
          result[3] += 36686178;
          result[4] += 0;
          result[5] += 8053063;
        } else {
          result[0] += 378078;
          result[1] += 0;
          result[2] += 38563966;
          result[3] += 11720421;
          result[4] += 0;
          result[5] += 3024624;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 1760232;
          result[1] += 1760232;
          result[2] += 29923952;
          result[3] += 5280697;
          result[4] += 4400581;
          result[5] += 10561394;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 367719;
          result[1] += 0;
          result[2] += 44126376;
          result[3] += 6986676;
          result[4] += 0;
          result[5] += 2206318;
        } else {
          result[0] += 400649;
          result[1] += 0;
          result[2] += 51122931;
          result[3] += 1842989;
          result[4] += 80129;
          result[5] += 240389;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 403662;
          result[1] += 2421974;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50861454;
          result[5] += 0;
        } else {
          result[0] += 25514657;
          result[1] += 5847108;
          result[2] += 1063110;
          result[3] += 3189332;
          result[4] += 6910219;
          result[5] += 11162662;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 123702;
          result[1] += 309257;
          result[2] += 61851;
          result[3] += 3030722;
          result[4] += 3401831;
          result[5] += 46759724;
        } else {
          result[0] += 951898;
          result[1] += 380759;
          result[2] += 4188354;
          result[3] += 27033925;
          result[4] += 4759493;
          result[5] += 16372659;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 3819634;
          result[1] += 16976155;
          result[2] += 0;
          result[3] += 0;
          result[4] += 30769281;
          result[5] += 2122019;
        } else {
          result[0] += 36421218;
          result[1] += 228039;
          result[2] += 3550905;
          result[3] += 5147184;
          result[4] += 3192557;
          result[5] += 5147184;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 44739242;
          result[1] += 8947848;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42660000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 994205;
          result[1] += 0;
          result[2] += 4971026;
          result[3] += 12924670;
          result[4] += 994205;
          result[5] += 33802983;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 23342213;
          result[3] += 22564139;
          result[4] += 0;
          result[5] += 7780737;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 50026607;
          result[3] += 0;
          result[4] += 0;
          result[5] += 3660483;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 53687091;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1121819;
          result[1] += 0;
          result[2] += 44552272;
          result[3] += 8012998;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52117293;
          result[3] += 1465144;
          result[4] += 0;
          result[5] += 104653;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42880000))) ) ) {
          result[0] += 997901;
          result[1] += 798321;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51292128;
          result[5] += 598740;
        } else {
          result[0] += 3579139;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 0;
          result[4] += 14316557;
          result[5] += 21474836;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 1333203;
          result[1] += 922987;
          result[2] += 0;
          result[3] += 2768961;
          result[4] += 3845780;
          result[5] += 44816158;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3453555;
          result[3] += 34535555;
          result[4] += 941878;
          result[5] += 14756101;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53221259;
          result[2] += 0;
          result[3] += 0;
          result[4] += 465831;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 5275610;
          result[1] += 7447920;
          result[2] += 0;
          result[3] += 930990;
          result[4] += 38480920;
          result[5] += 1551650;
        } else {
          result[0] += 40177466;
          result[1] += 1093264;
          result[2] += 741857;
          result[3] += 3318838;
          result[4] += 3318838;
          result[5] += 5036825;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3632961;
          result[3] += 33907636;
          result[4] += 0;
          result[5] += 16146493;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 25053975;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 50331647;
          result[3] += 3355443;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1842204;
          result[1] += 0;
          result[2] += 27106717;
          result[3] += 15263976;
          result[4] += 526344;
          result[5] += 8947848;
        } else {
          result[0] += 375434;
          result[1] += 0;
          result[2] += 46553841;
          result[3] += 6757815;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 4971026;
          result[1] += 0;
          result[2] += 41259523;
          result[3] += 3479718;
          result[4] += 497102;
          result[5] += 3479718;
        } else {
          result[0] += 628838;
          result[1] += 0;
          result[2] += 50385688;
          result[3] += 2593959;
          result[4] += 0;
          result[5] += 78604;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50810997;
          result[5] += 2876094;
        } else {
          result[0] += 0;
          result[1] += 13421772;
          result[2] += 0;
          result[3] += 20132659;
          result[4] += 10066329;
          result[5] += 10066329;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1954348;
          result[1] += 229923;
          result[2] += 114961;
          result[3] += 2126790;
          result[4] += 4196100;
          result[5] += 45064967;
        } else {
          result[0] += 1446658;
          result[1] += 2089617;
          result[2] += 3536275;
          result[3] += 26361326;
          result[4] += 1928877;
          result[5] += 18324336;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 20878313;
          result[2] += 0;
          result[3] += 8947848;
          result[4] += 23860929;
          result[5] += 0;
        } else {
          result[0] += 256876;
          result[1] += 52788025;
          result[2] += 256876;
          result[3] += 385314;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 41297762;
          result[1] += 2144306;
          result[2] += 158837;
          result[3] += 833897;
          result[4] += 7385945;
          result[5] += 1866341;
        } else {
          result[0] += 8296018;
          result[1] += 0;
          result[2] += 13984716;
          result[3] += 15643920;
          result[4] += 5096125;
          result[5] += 10666309;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2825636;
          result[4] += 0;
          result[5] += 50861454;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 6507526;
          result[2] += 9761289;
          result[3] += 10574730;
          result[4] += 3253763;
          result[5] += 23589782;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31610156;
          result[3] += 18062946;
          result[4] += 0;
          result[5] += 4013988;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 25977624;
          result[1] += 0;
          result[2] += 22513941;
          result[3] += 5195524;
          result[4] += 0;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 657392;
          result[1] += 0;
          result[2] += 44921851;
          result[3] += 7012191;
          result[4] += 0;
          result[5] += 1095654;
        } else {
          result[0] += 89627;
          result[1] += 0;
          result[2] += 51715278;
          result[3] += 1613301;
          result[4] += 0;
          result[5] += 268883;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 178956;
          result[1] += 0;
          result[2] += 178956;
          result[3] += 357913;
          result[4] += 51718564;
          result[5] += 1252698;
        } else {
          result[0] += 0;
          result[1] += 50529027;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3158064;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
          result[0] += 40165897;
          result[1] += 397682;
          result[2] += 0;
          result[3] += 2386092;
          result[4] += 5965232;
          result[5] += 4772185;
        } else {
          result[0] += 445032;
          result[1] += 202287;
          result[2] += 242744;
          result[3] += 9143393;
          result[4] += 2063332;
          result[5] += 41590301;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 11248723;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41927061;
          result[5] += 511305;
        } else {
          result[0] += 0;
          result[1] += 53200133;
          result[2] += 0;
          result[3] += 0;
          result[4] += 486957;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 45762084;
          result[1] += 821494;
          result[2] += 821494;
          result[3] += 1498019;
          result[4] += 3430948;
          result[5] += 1353050;
        } else {
          result[0] += 15934524;
          result[1] += 1961172;
          result[2] += 12012180;
          result[3] += 8825275;
          result[4] += 7844689;
          result[5] += 7109249;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1309441;
          result[1] += 0;
          result[2] += 3928323;
          result[3] += 9166088;
          result[4] += 7856647;
          result[5] += 31426589;
        } else {
          result[0] += 1917396;
          result[1] += 3834792;
          result[2] += 7669584;
          result[3] += 29400073;
          result[4] += 0;
          result[5] += 10865244;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4473924;
          result[3] += 44739242;
          result[4] += 0;
          result[5] += 4473924;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34477948;
          result[3] += 16253889;
          result[4] += 0;
          result[5] += 2955252;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42f00000))) ) ) {
          result[0] += 1579032;
          result[1] += 0;
          result[2] += 44370801;
          result[3] += 7263547;
          result[4] += 0;
          result[5] += 473709;
        } else {
          result[0] += 47721858;
          result[1] += 0;
          result[2] += 5965232;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 2556528;
          result[1] += 0;
          result[2] += 37495746;
          result[3] += 10226112;
          result[4] += 0;
          result[5] += 3408704;
        } else {
          result[0] += 523265;
          result[1] += 0;
          result[2] += 51803333;
          result[3] += 1360491;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42940000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 244032;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53199026;
          result[5] += 244032;
        } else {
          result[0] += 0;
          result[1] += 32212254;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10737418;
          result[5] += 10737418;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 3834792;
          result[2] += 0;
          result[3] += 7669584;
          result[4] += 17256565;
          result[5] += 24926149;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 44739242;
          result[3] += 0;
          result[4] += 8947848;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x426a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2825636;
          result[4] += 41442666;
          result[5] += 9418787;
        } else {
          result[0] += 1563117;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2284557;
          result[4] += 1382758;
          result[5] += 48456657;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 7433597;
          result[1] += 1238932;
          result[2] += 0;
          result[3] += 4129776;
          result[4] += 7020619;
          result[5] += 33864165;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1579032;
          result[3] += 32257369;
          result[4] += 676728;
          result[5] += 19173961;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 5965232;
          result[2] += 0;
          result[3] += 0;
          result[4] += 47721858;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 52926342;
          result[2] += 0;
          result[3] += 108678;
          result[4] += 652069;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42870000))) ) ) {
          result[0] += 8308716;
          result[1] += 8947848;
          result[2] += 0;
          result[3] += 3195660;
          result[4] += 31956601;
          result[5] += 1278264;
        } else {
          result[0] += 43190963;
          result[1] += 1005376;
          result[2] += 321720;
          result[3] += 3257419;
          result[4] += 3739999;
          result[5] += 2171612;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9379070;
          result[3] += 33635286;
          result[4] += 0;
          result[5] += 10672734;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 22156577;
          result[3] += 6817408;
          result[4] += 0;
          result[5] += 24713105;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
          result[0] += 17692336;
          result[1] += 0;
          result[2] += 25623384;
          result[3] += 4270564;
          result[4] += 1830241;
          result[5] += 4270564;
        } else {
          result[0] += 661442;
          result[1] += 0;
          result[2] += 47734107;
          result[3] += 3968655;
          result[4] += 330721;
          result[5] += 992163;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0;
          result[1] += 43620761;
          result[2] += 0;
          result[3] += 6710886;
          result[4] += 3355443;
          result[5] += 0;
        } else {
          result[0] += 374126;
          result[1] += 0;
          result[2] += 0;
          result[3] += 374126;
          result[4] += 51629397;
          result[5] += 1309441;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
          result[0] += 46366124;
          result[1] += 4392580;
          result[2] += 0;
          result[3] += 1952257;
          result[4] += 0;
          result[5] += 976128;
        } else {
          result[0] += 1185668;
          result[1] += 237133;
          result[2] += 474267;
          result[3] += 4884956;
          result[4] += 3888994;
          result[5] += 43016070;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 10182034;
          result[2] += 0;
          result[3] += 9256395;
          result[4] += 30546103;
          result[5] += 3702558;
        } else {
          result[0] += 0;
          result[1] += 53398450;
          result[2] += 0;
          result[3] += 0;
          result[4] += 288640;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 43897355;
          result[1] += 1698675;
          result[2] += 223509;
          result[3] += 1117549;
          result[4] += 5006622;
          result[5] += 1743377;
        } else {
          result[0] += 6304889;
          result[1] += 477643;
          result[2] += 10221563;
          result[3] += 18819140;
          result[4] += 4967488;
          result[5] += 12896365;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42640000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1579032;
          result[1] += 526344;
          result[2] += 4210752;
          result[3] += 21053761;
          result[4] += 2631720;
          result[5] += 23685481;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28152986;
          result[3] += 23569942;
          result[4] += 0;
          result[5] += 1964161;
        } else {
          result[0] += 13684944;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 2105376;
          result[4] += 0;
          result[5] += 2105376;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 23860929;
          result[1] += 0;
          result[2] += 0;
          result[3] += 11930464;
          result[4] += 0;
          result[5] += 17895697;
        } else {
          result[0] += 930990;
          result[1] += 0;
          result[2] += 45308181;
          result[3] += 6827260;
          result[4] += 0;
          result[5] += 620660;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 47276692;
          result[3] += 6410398;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52466930;
          result[3] += 1118481;
          result[4] += 0;
          result[5] += 101680;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 533315;
          result[1] += 355543;
          result[2] += 0;
          result[3] += 711087;
          result[4] += 47642849;
          result[5] += 4444295;
        } else {
          result[0] += 0;
          result[1] += 50704475;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2982616;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42870000))) ) ) {
          result[0] += 64142;
          result[1] += 0;
          result[2] += 448995;
          result[3] += 2244979;
          result[4] += 3720252;
          result[5] += 47208720;
        } else {
          result[0] += 8988893;
          result[1] += 985084;
          result[2] += 1231355;
          result[3] += 20071091;
          result[4] += 4309743;
          result[5] += 18100922;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 31317469;
          result[2] += 0;
          result[3] += 0;
          result[4] += 22369621;
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
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 16930733;
          result[1] += 2807168;
          result[2] += 5965232;
          result[3] += 9737364;
          result[4] += 5789784;
          result[5] += 12456808;
        } else {
          result[0] += 42988753;
          result[1] += 1123569;
          result[2] += 2442542;
          result[3] += 1612078;
          result[4] += 5324743;
          result[5] += 195403;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13421772;
          result[3] += 0;
          result[4] += 40265318;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2556528;
          result[3] += 0;
          result[4] += 2556528;
          result[5] += 48574034;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5856773;
          result[3] += 37092899;
          result[4] += 976128;
          result[5] += 9761289;
        } else {
          result[0] += 0;
          result[1] += 830212;
          result[2] += 33208510;
          result[3] += 16327517;
          result[4] += 0;
          result[5] += 3320851;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 306783;
          result[1] += 0;
          result[2] += 43256456;
          result[3] += 10123851;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 375434;
          result[1] += 0;
          result[2] += 51997637;
          result[3] += 1314019;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
          result[0] += 44739242;
          result[1] += 0;
          result[2] += 8947848;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 165191;
          result[1] += 0;
          result[2] += 53191518;
          result[3] += 330382;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 458864;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51392771;
          result[5] += 1835456;
        } else {
          result[0] += 0;
          result[1] += 49213166;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4473924;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 3325274;
          result[1] += 643601;
          result[2] += 0;
          result[3] += 1823537;
          result[4] += 2735306;
          result[5] += 45159371;
        } else {
          result[0] += 737460;
          result[1] += 737460;
          result[2] += 5457204;
          result[3] += 26991037;
          result[4] += 2212380;
          result[5] += 17551549;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53571635;
          result[2] += 0;
          result[3] += 0;
          result[4] += 115456;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 41756626;
          result[1] += 1281420;
          result[2] += 132560;
          result[3] += 1193046;
          result[4] += 7600147;
          result[5] += 1723289;
        } else {
          result[0] += 9719214;
          result[1] += 1041344;
          result[2] += 11107674;
          result[3] += 15157346;
          result[4] += 4628197;
          result[5] += 12033313;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2440322;
          result[3] += 13421772;
          result[4] += 2440322;
          result[5] += 35384673;
        } else {
          result[0] += 0;
          result[1] += 21474836;
          result[2] += 16106127;
          result[3] += 0;
          result[4] += 16106127;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 10737418;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35897285;
          result[3] += 16519104;
          result[4] += 0;
          result[5] += 1270700;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42fc0000))) ) ) {
          result[0] += 1012963;
          result[1] += 0;
          result[2] += 35453739;
          result[3] += 11142603;
          result[4] += 1012963;
          result[5] += 5064819;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 357913;
          result[1] += 0;
          result[2] += 50609031;
          result[3] += 2720145;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 174876;
          result[2] += 0;
          result[3] += 349753;
          result[4] += 51413696;
          result[5] += 1748765;
        } else {
          result[0] += 0;
          result[1] += 41756626;
          result[2] += 0;
          result[3] += 0;
          result[4] += 11930464;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 26843545;
          result[2] += 0;
          result[3] += 0;
          result[4] += 26843545;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 11504376;
          result[2] += 0;
          result[3] += 26843545;
          result[4] += 0;
          result[5] += 15339168;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 52806974;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 880116;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 269513;
          result[1] += 161708;
          result[2] += 53902;
          result[3] += 2317816;
          result[4] += 4581729;
          result[5] += 46302421;
        } else {
          result[0] += 3503390;
          result[1] += 1514979;
          result[2] += 1893724;
          result[3] += 23292812;
          result[4] += 4639625;
          result[5] += 18842559;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42900000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
          result[0] += 0;
          result[1] += 53575475;
          result[2] += 0;
          result[3] += 0;
          result[4] += 111615;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 26004684;
          result[2] += 0;
          result[3] += 0;
          result[4] += 27682406;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
          result[0] += 48953519;
          result[1] += 539267;
          result[2] += 299593;
          result[3] += 838860;
          result[4] += 2876094;
          result[5] += 179755;
        } else {
          result[0] += 14343879;
          result[1] += 2458950;
          result[2] += 6967027;
          result[3] += 11065278;
          result[4] += 7376852;
          result[5] += 11475103;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 16106127;
          result[2] += 24159191;
          result[3] += 13421772;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 49018648;
          result[1] += 1167110;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3501332;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 2812763;
          result[1] += 0;
          result[2] += 35709864;
          result[3] += 11251053;
          result[4] += 244588;
          result[5] += 3668821;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 51060199;
          result[3] += 2462710;
          result[4] += 0;
          result[5] += 164180;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 610080;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51043408;
          result[5] += 2033601;
        } else {
          result[0] += 0;
          result[1] += 16777215;
          result[2] += 0;
          result[3] += 13421772;
          result[4] += 6710886;
          result[5] += 16777215;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1108219;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2216439;
          result[4] += 3201523;
          result[5] += 47160908;
        } else {
          result[0] += 4311657;
          result[1] += 834514;
          result[2] += 556342;
          result[3] += 20723773;
          result[4] += 3059886;
          result[5] += 24200916;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 4344620;
          result[1] += 13654520;
          result[2] += 0;
          result[3] += 930990;
          result[4] += 34446630;
          result[5] += 310330;
        } else {
          result[0] += 0;
          result[1] += 53087904;
          result[2] += 0;
          result[3] += 0;
          result[4] += 599186;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 45643380;
          result[1] += 420891;
          result[2] += 701486;
          result[3] += 1543270;
          result[4] += 3741260;
          result[5] += 1636801;
        } else {
          result[0] += 16312007;
          result[1] += 1425321;
          result[2] += 10452354;
          result[3] += 12827889;
          result[4] += 2850642;
          result[5] += 9818878;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0;
          result[1] += 17895697;
          result[2] += 35791394;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2236962;
          result[3] += 4473924;
          result[4] += 6710886;
          result[5] += 40265318;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1789569;
          result[3] += 42054888;
          result[4] += 0;
          result[5] += 9842633;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24066627;
          result[3] += 18512790;
          result[4] += 0;
          result[5] += 11107674;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 360316;
          result[1] += 0;
          result[2] += 32068128;
          result[3] += 18736434;
          result[4] += 0;
          result[5] += 2522212;
        } else {
          result[0] += 801299;
          result[1] += 801299;
          result[2] += 44872792;
          result[3] += 4807799;
          result[4] += 0;
          result[5] += 2403899;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 30678337;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 1533916;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 786362;
          result[1] += 0;
          result[2] += 50398667;
          result[3] += 2359086;
          result[4] += 0;
          result[5] += 142974;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 196656;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51523875;
          result[5] += 1966560;
        } else {
          result[0] += 0;
          result[1] += 13421772;
          result[2] += 0;
          result[3] += 26843545;
          result[4] += 0;
          result[5] += 13421772;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1107551;
          result[1] += 58292;
          result[2] += 0;
          result[3] += 2389979;
          result[4] += 2972900;
          result[5] += 47158367;
        } else {
          result[0] += 2748485;
          result[1] += 0;
          result[2] += 183232;
          result[3] += 24736373;
          result[4] += 1649091;
          result[5] += 24369908;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 40007391;
          result[1] += 3515453;
          result[2] += 458537;
          result[3] += 2216264;
          result[4] += 6763427;
          result[5] += 726017;
        } else {
          result[0] += 9850842;
          result[1] += 1600761;
          result[2] += 14776263;
          result[3] += 13421772;
          result[4] += 3570930;
          result[5] += 10466520;
        }
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
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5965232;
          result[3] += 5965232;
          result[4] += 29826161;
          result[5] += 11930464;
        } else {
          result[0] += 0;
          result[1] += 3579139;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3579139;
          result[5] += 46528812;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11453246;
          result[3] += 32212254;
          result[4] += 1431655;
          result[5] += 8589934;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35633025;
          result[3] += 17578959;
          result[4] += 0;
          result[5] += 475107;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 37167986;
          result[1] += 12389328;
          result[2] += 4129776;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 10737418;
          result[1] += 0;
          result[2] += 37580963;
          result[3] += 0;
          result[4] += 0;
          result[5] += 5368709;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 47273146;
          result[3] += 5820060;
          result[4] += 0;
          result[5] += 593883;
        } else {
          result[0] += 271146;
          result[1] += 135573;
          result[2] += 52331356;
          result[3] += 949014;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 221847;
          result[1] += 665542;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51024921;
          result[5] += 1774779;
        } else {
          result[0] += 24688224;
          result[1] += 0;
          result[2] += 1959382;
          result[3] += 0;
          result[4] += 13715680;
          result[5] += 13323803;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1876702;
          result[4] += 3083153;
          result[5] += 48727235;
        } else {
          result[0] += 135231;
          result[1] += 1487551;
          result[2] += 1893247;
          result[3] += 24071290;
          result[4] += 3380799;
          result[5] += 22718970;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 14380470;
          result[2] += 0;
          result[3] += 1917396;
          result[4] += 37389224;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 52794431;
          result[2] += 0;
          result[3] += 0;
          result[4] += 892659;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1425321;
          result[1] += 19954494;
          result[2] += 475107;
          result[3] += 3325749;
          result[4] += 28506420;
          result[5] += 0;
        } else {
          result[0] += 42093791;
          result[1] += 1206014;
          result[2] += 1361629;
          result[3] += 2684354;
          result[4] += 3579139;
          result[5] += 2762161;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2497074;
          result[3] += 4994148;
          result[4] += 4994148;
          result[5] += 41201721;
        } else {
          result[0] += 0;
          result[1] += 1533916;
          result[2] += 4601750;
          result[3] += 29911379;
          result[4] += 0;
          result[5] += 17640044;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17000912;
          result[3] += 35791394;
          result[4] += 0;
          result[5] += 894784;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 47444406;
          result[3] += 4994148;
          result[4] += 0;
          result[5] += 1248537;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 4880644;
          result[1] += 2928386;
          result[2] += 10737418;
          result[3] += 14641933;
          result[4] += 2928386;
          result[5] += 17570320;
        } else {
          result[0] += 2147483;
          result[1] += 0;
          result[2] += 46170898;
          result[3] += 5368709;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
          result[0] += 22215348;
          result[1] += 0;
          result[2] += 22215348;
          result[3] += 0;
          result[4] += 5553837;
          result[5] += 3702558;
        } else {
          result[0] += 231160;
          result[1] += 0;
          result[2] += 49641777;
          result[3] += 3351831;
          result[4] += 57790;
          result[5] += 404531;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 778073;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52909017;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1731841;
          result[4] += 33770912;
          result[5] += 18184337;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1953802;
          result[4] += 1189271;
          result[5] += 50544017;
        } else {
          result[0] += 4974503;
          result[1] += 2064888;
          result[2] += 1595595;
          result[3] += 13984924;
          result[4] += 4599069;
          result[5] += 26468111;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 52236088;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1451002;
          result[5] += 0;
        } else {
          result[0] += 2147483;
          result[1] += 10307921;
          result[2] += 0;
          result[3] += 429496;
          result[4] += 37795712;
          result[5] += 3006477;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 46017506;
          result[1] += 788871;
          result[2] += 262957;
          result[3] += 1709221;
          result[4] += 4207314;
          result[5] += 701219;
        } else {
          result[0] += 18592027;
          result[1] += 1880092;
          result[2] += 6475874;
          result[3] += 12951749;
          result[4] += 4804681;
          result[5] += 8982665;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3834792;
          result[4] += 0;
          result[5] += 49852298;
        } else {
          result[0] += 0;
          result[1] += 2497074;
          result[2] += 4994148;
          result[3] += 32461962;
          result[4] += 416179;
          result[5] += 13317728;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 531555;
          result[1] += 0;
          result[2] += 18604437;
          result[3] += 21262214;
          result[4] += 4252442;
          result[5] += 9036441;
        } else {
          result[0] += 2006994;
          result[1] += 0;
          result[2] += 44153869;
          result[3] += 5519233;
          result[4] += 501748;
          result[5] += 1505245;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 615324;
          result[1] += 0;
          result[2] += 42765075;
          result[3] += 8922209;
          result[4] += 0;
          result[5] += 1384480;
        } else {
          result[0] += 34738706;
          result[1] += 9474192;
          result[2] += 9474192;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x43028000))) ) ) {
          result[0] += 285064;
          result[1] += 0;
          result[2] += 52166748;
          result[3] += 1235278;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 26843545;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 354370;
          result[1] += 708740;
          result[2] += 0;
          result[3] += 354370;
          result[4] += 48371537;
          result[5] += 3898072;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
          result[0] += 42502280;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8947848;
          result[5] += 2236962;
        } else {
          result[0] += 319249;
          result[1] += 319249;
          result[2] += 159624;
          result[3] += 4522698;
          result[4] += 3724575;
          result[5] += 44641694;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 14005328;
          result[2] += 2334221;
          result[3] += 0;
          result[4] += 37347541;
          result[5] += 0;
        } else {
          result[0] += 126919;
          result[1] += 52925572;
          result[2] += 0;
          result[3] += 507679;
          result[4] += 126919;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 14225471;
          result[1] += 723329;
          result[2] += 2893316;
          result[3] += 16716938;
          result[4] += 5143673;
          result[5] += 13984362;
        } else {
          result[0] += 43070213;
          result[1] += 2410819;
          result[2] += 1483581;
          result[3] += 370895;
          result[4] += 5563429;
          result[5] += 788152;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8053063;
          result[3] += 33285996;
          result[4] += 0;
          result[5] += 12348030;
        } else {
          result[0] += 8541128;
          result[1] += 0;
          result[2] += 29283867;
          result[3] += 9761289;
          result[4] += 0;
          result[5] += 6100805;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42f00000))) ) ) {
          result[0] += 740511;
          result[1] += 0;
          result[2] += 41468649;
          result[3] += 8886139;
          result[4] += 0;
          result[5] += 2591790;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24926149;
          result[3] += 9586980;
          result[4] += 0;
          result[5] += 19173961;
        } else {
          result[0] += 1571329;
          result[1] += 0;
          result[2] += 44782890;
          result[3] += 5761541;
          result[4] += 0;
          result[5] += 1571329;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17895697;
          result[3] += 0;
          result[4] += 0;
          result[5] += 35791394;
        } else {
          result[0] += 264034;
          result[1] += 0;
          result[2] += 52278905;
          result[3] += 1056139;
          result[4] += 0;
          result[5] += 88011;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_0/test_data.csv", "r");
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
