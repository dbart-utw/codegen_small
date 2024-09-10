
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
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41698711;
          result[5] += 1250961;
        } else {
          result[0] += 4294967;
          result[1] += 4294967;
          result[2] += 0;
          result[3] += 0;
          result[4] += 17179869;
          result[5] += 17179869;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42520000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 10021590;
          result[4] += 30064771;
          result[5] += 2863311;
        } else {
          result[0] += 848388;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1272582;
          result[4] += 1961898;
          result[5] += 38866802;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
          result[0] += 23860929;
          result[1] += 954437;
          result[2] += 954437;
          result[3] += 0;
          result[4] += 9544371;
          result[5] += 7635497;
        } else {
          result[0] += 113924;
          result[1] += 1139248;
          result[2] += 1936722;
          result[3] += 20164700;
          result[4] += 683549;
          result[5] += 18911527;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 4672349;
          result[1] += 11141756;
          result[2] += 0;
          result[3] += 179705;
          result[4] += 25518215;
          result[5] += 1437645;
        } else {
          result[0] += 31947039;
          result[1] += 424343;
          result[2] += 1576134;
          result[3] += 3515992;
          result[4] += 2303581;
          result[5] += 3182579;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 0;
          result[1] += 42638443;
          result[2] += 0;
          result[3] += 0;
          result[4] += 311229;
          result[5] += 0;
        } else {
          result[0] += 34359738;
          result[1] += 0;
          result[2] += 0;
          result[3] += 8589934;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 2454267;
          result[2] += 3681400;
          result[3] += 9203501;
          result[4] += 3681400;
          result[5] += 23929103;
        } else {
          result[0] += 0;
          result[1] += 854719;
          result[2] += 18376476;
          result[3] += 19017516;
          result[4] += 0;
          result[5] += 4700959;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 14316557;
          result[1] += 2526451;
          result[2] += 21053761;
          result[3] += 0;
          result[4] += 1684300;
          result[5] += 3368601;
        } else {
          result[0] += 323973;
          result[1] += 0;
          result[2] += 38645449;
          result[3] += 3332302;
          result[4] += 0;
          result[5] += 647947;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 193466;
          result[1] += 1547735;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41015002;
          result[5] += 193466;
        } else {
          result[0] += 17100332;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9942053;
          result[5] += 15907286;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 56661;
          result[2] += 0;
          result[3] += 1586531;
          result[4] += 1699855;
          result[5] += 39606624;
        } else {
          result[0] += 0;
          result[1] += 810371;
          result[2] += 231534;
          result[3] += 16902027;
          result[4] += 2315346;
          result[5] += 22690393;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42420000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 41878365;
          result[2] += 0;
          result[3] += 194783;
          result[4] += 876523;
          result[5] += 0;
        } else {
          result[0] += 30678337;
          result[1] += 0;
          result[2] += 6135667;
          result[3] += 6135667;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 31305279;
          result[1] += 2691668;
          result[2] += 321829;
          result[3] += 936232;
          result[4] += 6173284;
          result[5] += 1521378;
        } else {
          result[0] += 7315029;
          result[1] += 104500;
          result[2] += 7524030;
          result[3] += 12749051;
          result[4] += 4284517;
          result[5] += 10972544;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3579139;
          result[3] += 32928082;
          result[4] += 0;
          result[5] += 6442450;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26430567;
          result[3] += 9911462;
          result[4] += 0;
          result[5] += 6607641;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4294967;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 17179869;
        } else {
          result[0] += 3955890;
          result[1] += 0;
          result[2] += 37298400;
          result[3] += 1130254;
          result[4] += 0;
          result[5] += 565127;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4294967;
          result[3] += 4294967;
          result[4] += 0;
          result[5] += 34359738;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3904515;
          result[3] += 39045157;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 423149;
          result[1] += 0;
          result[2] += 32794085;
          result[3] += 9309288;
          result[4] += 0;
          result[5] += 423149;
        } else {
          result[0] += 199148;
          result[1] += 0;
          result[2] += 41223720;
          result[3] += 1261273;
          result[4] += 0;
          result[5] += 265531;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 2684354;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39258685;
          result[5] += 1006632;
        } else {
          result[0] += 3817748;
          result[1] += 4772185;
          result[2] += 0;
          result[3] += 7635497;
          result[4] += 10498808;
          result[5] += 16225432;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1849286;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2034214;
          result[4] += 2912625;
          result[5] += 36153546;
        } else {
          result[0] += 2001239;
          result[1] += 0;
          result[2] += 153941;
          result[3] += 24014870;
          result[4] += 1231531;
          result[5] += 15548089;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 8589934;
          result[2] += 0;
          result[3] += 0;
          result[4] += 34359738;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42654147;
          result[2] += 0;
          result[3] += 0;
          result[4] += 295525;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 33002454;
          result[1] += 1363481;
          result[2] += 278893;
          result[3] += 1177552;
          result[4] += 4493291;
          result[5] += 2633998;
        } else {
          result[0] += 7158278;
          result[1] += 2418337;
          result[2] += 9866816;
          result[3] += 13445956;
          result[4] += 2128136;
          result[5] += 7932146;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4994148;
          result[3] += 27967228;
          result[4] += 0;
          result[5] += 9988296;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9698313;
          result[3] += 1385473;
          result[4] += 0;
          result[5] += 31865886;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36413853;
          result[3] += 3734754;
          result[4] += 0;
          result[5] += 2801065;
        } else {
          result[0] += 10737418;
          result[1] += 21474836;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10737418;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17179869;
          result[3] += 10021590;
          result[4] += 0;
          result[5] += 15748213;
        } else {
          result[0] += 0;
          result[1] += 1301505;
          result[2] += 32863007;
          result[3] += 8134407;
          result[4] += 0;
          result[5] += 650752;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42920000))) ) ) {
          result[0] += 21474836;
          result[1] += 0;
          result[2] += 0;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 352528;
          result[1] += 0;
          result[2] += 39894429;
          result[3] += 2643960;
          result[4] += 0;
          result[5] += 58754;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b60000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 685367;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42035850;
          result[5] += 228455;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 26948814;
          result[5] += 16000858;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 41607495;
          result[2] += 0;
          result[3] += 1342177;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          result[0] += 24542670;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 18407002;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 46735;
          result[2] += 0;
          result[3] += 2523702;
          result[4] += 1729203;
          result[5] += 38650032;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 8436542;
          result[1] += 0;
          result[2] += 0;
          result[3] += 766958;
          result[4] += 26843545;
          result[5] += 6902626;
        } else {
          result[0] += 1334594;
          result[1] += 242653;
          result[2] += 2183881;
          result[3] += 18805647;
          result[4] += 727960;
          result[5] += 19654935;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
          result[0] += 0;
          result[1] += 41576016;
          result[2] += 0;
          result[3] += 91577;
          result[4] += 1098925;
          result[5] += 183154;
        } else {
          result[0] += 0;
          result[1] += 12494450;
          result[2] += 0;
          result[3] += 780903;
          result[4] += 27331610;
          result[5] += 2342709;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 36797929;
          result[1] += 1350382;
          result[2] += 300085;
          result[3] += 712701;
          result[4] += 3000850;
          result[5] += 787723;
        } else {
          result[0] += 12152962;
          result[1] += 828611;
          result[2] += 6628888;
          result[3] += 7871805;
          result[4] += 3452546;
          result[5] += 12014860;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 278893;
          result[2] += 7809031;
          result[3] += 25379352;
          result[4] += 557787;
          result[5] += 8924607;
        } else {
          result[0] += 0;
          result[1] += 3205199;
          result[2] += 19872236;
          result[3] += 3846239;
          result[4] += 5769359;
          result[5] += 10256638;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 9232172;
          result[1] += 802797;
          result[2] += 21274137;
          result[3] += 6823779;
          result[4] += 1605595;
          result[5] += 3211190;
        } else {
          result[0] += 240749;
          result[1] += 48149;
          result[2] += 38808785;
          result[3] += 3466789;
          result[4] += 0;
          result[5] += 385198;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42e10000))) ) ) {
          result[0] += 171798;
          result[1] += 343597;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41231686;
          result[5] += 1202590;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2950371;
          result[4] += 1934669;
          result[5] += 38064631;
        } else {
          result[0] += 6378664;
          result[1] += 1105635;
          result[2] += 340195;
          result[3] += 14543354;
          result[4] += 3742149;
          result[5] += 16839673;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 511305;
          result[1] += 12271335;
          result[2] += 511305;
          result[3] += 511305;
          result[4] += 26587892;
          result[5] += 2556528;
        } else {
          result[0] += 0;
          result[1] += 41935839;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1013833;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 36546790;
          result[1] += 1115108;
          result[2] += 0;
          result[3] += 1474821;
          result[4] += 2733815;
          result[5] += 1079137;
        } else {
          result[0] += 9784392;
          result[1] += 1906050;
          result[2] += 10292673;
          result[3] += 9530252;
          result[4] += 4066241;
          result[5] += 7370062;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 21474836;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8380423;
          result[3] += 32474142;
          result[4] += 0;
          result[5] += 2095105;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5602131;
          result[3] += 24275902;
          result[4] += 0;
          result[5] += 13071639;
        } else {
          result[0] += 412977;
          result[1] += 0;
          result[2] += 33038209;
          result[3] += 8672530;
          result[4] += 0;
          result[5] += 825955;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 671088;
          result[1] += 0;
          result[2] += 33554431;
          result[3] += 7381975;
          result[4] += 0;
          result[5] += 1342177;
        } else {
          result[0] += 254743;
          result[1] += 0;
          result[2] += 40758882;
          result[3] += 1834149;
          result[4] += 0;
          result[5] += 101897;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42679549;
          result[5] += 270123;
        } else {
          result[0] += 596523;
          result[1] += 596523;
          result[2] += 596523;
          result[3] += 0;
          result[4] += 31615731;
          result[5] += 9544371;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 810371;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2240437;
          result[4] += 2097431;
          result[5] += 37801432;
        } else {
          result[0] += 3218450;
          result[1] += 2885507;
          result[2] += 665886;
          result[3] += 19088743;
          result[4] += 998829;
          result[5] += 16092254;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 5368709;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37580963;
          result[5] += 0;
        } else {
          result[0] += 97171;
          result[1] += 41977960;
          result[2] += 0;
          result[3] += 194342;
          result[4] += 680198;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 32453632;
          result[1] += 1121238;
          result[2] += 31145;
          result[3] += 1494984;
          result[4] += 5543902;
          result[5] += 2304768;
        } else {
          result[0] += 6166577;
          result[1] += 432742;
          result[2] += 11684042;
          result[3] += 10710371;
          result[4] += 2921010;
          result[5] += 11034928;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 10737418;
          result[4] += 0;
          result[5] += 32212254;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 1385473;
          result[1] += 9698313;
          result[2] += 4156419;
          result[3] += 4156419;
          result[4] += 4156419;
          result[5] += 19396626;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 18028257;
          result[3] += 22270200;
          result[4] += 0;
          result[5] += 2651214;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42df0000))) ) ) {
          result[0] += 0;
          result[1] += 850488;
          result[2] += 25939901;
          result[3] += 12969950;
          result[4] += 212622;
          result[5] += 2976710;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40648797;
          result[3] += 0;
          result[4] += 2300875;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 338186;
          result[1] += 0;
          result[2] += 36185944;
          result[3] += 6425541;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 535913;
          result[1] += 0;
          result[2] += 41265372;
          result[3] += 1148386;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 204522;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41722539;
          result[5] += 1022611;
        } else {
          result[0] += 692736;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 19396626;
          result[5] += 22860309;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 1211271;
          result[1] += 1110332;
          result[2] += 0;
          result[3] += 1312210;
          result[4] += 1917846;
          result[5] += 37398011;
        } else {
          result[0] += 0;
          result[1] += 807324;
          result[2] += 484394;
          result[3] += 24058275;
          result[4] += 0;
          result[5] += 17599678;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 1227133;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41722539;
          result[5] += 0;
        } else {
          result[0] += 195670;
          result[1] += 41188638;
          result[2] += 0;
          result[3] += 587011;
          result[4] += 880517;
          result[5] += 97835;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 32369606;
          result[1] += 1288789;
          result[2] += 119887;
          result[3] += 989071;
          result[4] += 5754596;
          result[5] += 2427720;
        } else {
          result[0] += 7264215;
          result[1] += 1452843;
          result[2] += 11259533;
          result[3] += 12258363;
          result[4] += 2270067;
          result[5] += 8444650;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1342177;
          result[3] += 10737418;
          result[4] += 3355443;
          result[5] += 27514634;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24159191;
          result[3] += 12079595;
          result[4] += 0;
          result[5] += 6710886;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 1101273;
          result[1] += 1101273;
          result[2] += 26797659;
          result[3] += 12114010;
          result[4] += 367091;
          result[5] += 1468364;
        } else {
          result[0] += 23735345;
          result[1] += 2260509;
          result[2] += 16953818;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6135667;
          result[3] += 0;
          result[4] += 0;
          result[5] += 36814005;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29527900;
          result[3] += 13421772;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 1952257;
          result[1] += 1952257;
          result[2] += 23427094;
          result[3] += 3904515;
          result[4] += 0;
          result[5] += 11713547;
        } else {
          result[0] += 58915;
          result[1] += 0;
          result[2] += 40710869;
          result[3] += 2062055;
          result[4] += 0;
          result[5] += 117831;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
          result[0] += 194342;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41394933;
          result[5] += 1360396;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 7158278;
          result[4] += 11930464;
          result[5] += 23860929;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 1531038;
          result[1] += 161161;
          result[2] += 40290;
          result[3] += 2739753;
          result[4] += 3505273;
          result[5] += 34972153;
        } else {
          result[0] += 1060485;
          result[1] += 883738;
          result[2] += 176747;
          result[3] += 25628405;
          result[4] += 1237233;
          result[5] += 13963062;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 715827;
          result[1] += 15390299;
          result[2] += 0;
          result[3] += 715827;
          result[4] += 25053975;
          result[5] += 1073741;
        } else {
          result[0] += 0;
          result[1] += 42209161;
          result[2] += 0;
          result[3] += 0;
          result[4] += 740511;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 16997560;
          result[1] += 2305662;
          result[2] += 5147526;
          result[3] += 8364730;
          result[4] += 4396845;
          result[5] += 5737347;
        } else {
          result[0] += 37239892;
          result[1] += 707406;
          result[2] += 1313754;
          result[3] += 404232;
          result[4] += 3284386;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 2576980;
          result[2] += 0;
          result[3] += 1717986;
          result[4] += 1717986;
          result[5] += 36936718;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 30064771;
          result[4] += 0;
          result[5] += 12884901;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 5965232;
          result[1] += 2386092;
          result[2] += 8351325;
          result[3] += 13123511;
          result[4] += 0;
          result[5] += 13123511;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 631612;
          result[2] += 20211610;
          result[3] += 18000965;
          result[4] += 0;
          result[5] += 4105483;
        } else {
          result[0] += 4190211;
          result[1] += 1309441;
          result[2] += 31950366;
          result[3] += 4713988;
          result[4] += 0;
          result[5] += 785664;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36597960;
          result[3] += 5141862;
          result[4] += 0;
          result[5] += 1209849;
        } else {
          result[0] += 310666;
          result[1] += 0;
          result[2] += 41551672;
          result[3] += 1087333;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
          result[0] += 456911;
          result[1] += 2589164;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37009824;
          result[5] += 2893772;
        } else {
          result[0] += 27731284;
          result[1] += 676372;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8116473;
          result[5] += 6425541;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1359884;
          result[4] += 1473207;
          result[5] += 40116581;
        } else {
          result[0] += 890148;
          result[1] += 815969;
          result[2] += 1261043;
          result[3] += 15948496;
          result[4] += 5044175;
          result[5] += 18989838;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 3303820;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39645851;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42615867;
          result[2] += 0;
          result[3] += 333805;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 4112202;
          result[1] += 13478886;
          result[2] += 913822;
          result[3] += 1142278;
          result[4] += 21474836;
          result[5] += 1827645;
        } else {
          result[0] += 32652883;
          result[1] += 463819;
          result[2] += 2164490;
          result[3] += 2288175;
          result[4] += 1731592;
          result[5] += 3648712;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 42949672;
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5223608;
          result[3] += 30180851;
          result[4] += 0;
          result[5] += 7545212;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 10226112;
          result[4] += 0;
          result[5] += 4090445;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42de0000))) ) ) {
          result[0] += 894784;
          result[1] += 0;
          result[2] += 12526987;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 8053063;
        } else {
          result[0] += 4521018;
          result[1] += 0;
          result[2] += 38428654;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33654594;
          result[3] += 7692478;
          result[4] += 0;
          result[5] += 1602599;
        } else {
          result[0] += 215286;
          result[1] += 0;
          result[2] += 40312412;
          result[3] += 2099044;
          result[4] += 0;
          result[5] += 322929;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 1867377;
          result[1] += 37347541;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3734754;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 491790;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40654652;
          result[5] += 1803230;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 56512;
          result[2] += 56512;
          result[3] += 1638869;
          result[4] += 3277738;
          result[5] += 37920040;
        } else {
          result[0] += 6514838;
          result[1] += 361935;
          result[2] += 2412902;
          result[3] += 14718708;
          result[4] += 4463870;
          result[5] += 14477417;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 3303820;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39645851;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42754889;
          result[2] += 0;
          result[3] += 0;
          result[4] += 194783;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42900000))) ) ) {
          result[0] += 7343726;
          result[1] += 7566263;
          result[2] += 2670445;
          result[3] += 4450743;
          result[4] += 19583270;
          result[5] += 1335222;
        } else {
          result[0] += 34554506;
          result[1] += 235064;
          result[2] += 2014840;
          result[3] += 2283485;
          result[4] += 1981259;
          result[5] += 1880517;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42900000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1930322;
          result[3] += 12064514;
          result[4] += 0;
          result[5] += 28954835;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 4601750;
          result[1] += 0;
          result[2] += 12271335;
          result[3] += 16873085;
          result[4] += 0;
          result[5] += 9203501;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42f20000))) ) ) {
          result[0] += 2480376;
          result[1] += 261092;
          result[2] += 29633968;
          result[3] += 8093859;
          result[4] += 0;
          result[5] += 2480376;
        } else {
          result[0] += 0;
          result[1] += 39881839;
          result[2] += 3067833;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 32212254;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 65174;
          result[1] += 0;
          result[2] += 40798930;
          result[3] += 2020394;
          result[4] += 0;
          result[5] += 65174;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 197924;
          result[1] += 2968871;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38595328;
          result[5] += 1187548;
        } else {
          result[0] += 22834003;
          result[1] += 543666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4349333;
          result[5] += 15222668;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 89758;
          result[1] += 359035;
          result[2] += 0;
          result[3] += 2647889;
          result[4] += 2737648;
          result[5] += 37115339;
        } else {
          result[0] += 0;
          result[1] += 565127;
          result[2] += 565127;
          result[3] += 27691236;
          result[4] += 376751;
          result[5] += 13751430;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 2576980;
          result[1] += 11854109;
          result[2] += 0;
          result[3] += 171798;
          result[4] += 26113401;
          result[5] += 2233382;
        } else {
          result[0] += 28501770;
          result[1] += 551647;
          result[2] += 3178538;
          result[3] += 4360639;
          result[4] += 2942118;
          result[5] += 3414958;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 42949672;
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
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1047552;
          result[4] += 0;
          result[5] += 41902119;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4051855;
          result[3] += 15397052;
          result[4] += 3241484;
          result[5] += 20259279;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29527900;
          result[3] += 5368709;
          result[4] += 0;
          result[5] += 8053063;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13895482;
          result[3] += 7579354;
          result[4] += 0;
          result[5] += 21474836;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1681764;
          result[1] += 776198;
          result[2] += 33247186;
          result[3] += 6985790;
          result[4] += 0;
          result[5] += 258732;
        } else {
          result[0] += 73796;
          result[1] += 0;
          result[2] += 41916519;
          result[3] += 885560;
          result[4] += 0;
          result[5] += 73796;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42850000))) ) ) {
          result[0] += 8551926;
          result[1] += 190042;
          result[2] += 0;
          result[3] += 0;
          result[4] += 33257490;
          result[5] += 950214;
        } else {
          result[0] += 0;
          result[1] += 21474836;
          result[2] += 0;
          result[3] += 4521018;
          result[4] += 3390763;
          result[5] += 13563054;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 180271;
          result[1] += 180271;
          result[2] += 0;
          result[3] += 2073121;
          result[4] += 3695564;
          result[5] += 36820443;
        } else {
          result[0] += 298261;
          result[1] += 0;
          result[2] += 1043915;
          result[3] += 24159191;
          result[4] += 2087831;
          result[5] += 15360473;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 8259552;
          result[2] += 0;
          result[3] += 0;
          result[4] += 34690120;
          result[5] += 0;
        } else {
          result[0] += 290200;
          result[1] += 42659472;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 31637035;
          result[1] += 2524571;
          result[2] += 383479;
          result[3] += 766958;
          result[4] += 6231537;
          result[5] += 1406090;
        } else {
          result[0] += 8462989;
          result[1] += 423149;
          result[2] += 9732438;
          result[3] += 12800271;
          result[4] += 2009960;
          result[5] += 9520863;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2770946;
          result[3] += 8312839;
          result[4] += 2770946;
          result[5] += 29094939;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10430634;
          result[3] += 25769803;
          result[4] += 0;
          result[5] += 6749234;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 795364;
          result[1] += 0;
          result[2] += 23065565;
          result[3] += 13918875;
          result[4] += 397682;
          result[5] += 4772185;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40689163;
          result[3] += 2260509;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ea0000))) ) ) {
          result[0] += 20211610;
          result[1] += 5052902;
          result[2] += 17685159;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 427359;
          result[2] += 35684554;
          result[3] += 6410398;
          result[4] += 0;
          result[5] += 427359;
        } else {
          result[0] += 70757;
          result[1] += 0;
          result[2] += 41463769;
          result[3] += 1415145;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 771551;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38063183;
          result[5] += 4114938;
        } else {
          result[0] += 0;
          result[1] += 57961;
          result[2] += 173885;
          result[3] += 1043311;
          result[4] += 2260509;
          result[5] += 39414004;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
          result[0] += 16911433;
          result[1] += 1610612;
          result[2] += 0;
          result[3] += 2147483;
          result[4] += 17985175;
          result[5] += 4294967;
        } else {
          result[0] += 348476;
          result[1] += 522714;
          result[2] += 0;
          result[3] += 15855660;
          result[4] += 3049165;
          result[5] += 23173657;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 22215348;
          result[2] += 0;
          result[3] += 0;
          result[4] += 19253301;
          result[5] += 1481023;
        } else {
          result[0] += 0;
          result[1] += 42847167;
          result[2] += 0;
          result[3] += 0;
          result[4] += 102505;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 33767792;
          result[1] += 1883462;
          result[2] += 100899;
          result[3] += 908098;
          result[4] += 5852187;
          result[5] += 437232;
        } else {
          result[0] += 5861897;
          result[1] += 450915;
          result[2] += 12512896;
          result[3] += 12625625;
          result[4] += 2480033;
          result[5] += 9018304;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1717986;
          result[4] += 4294967;
          result[5] += 36936718;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 1022611;
          result[2] += 10226112;
          result[3] += 23008753;
          result[4] += 0;
          result[5] += 8692195;
        } else {
          result[0] += 0;
          result[1] += 6832902;
          result[2] += 33188383;
          result[3] += 0;
          result[4] += 0;
          result[5] += 2928386;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 1176703;
          result[1] += 0;
          result[2] += 21180660;
          result[3] += 18238902;
          result[4] += 0;
          result[5] += 2353406;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35370318;
          result[3] += 6947741;
          result[4] += 0;
          result[5] += 631612;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 11790106;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 1684300;
          result[4] += 842150;
          result[5] += 0;
        } else {
          result[0] += 810371;
          result[1] += 0;
          result[2] += 40643231;
          result[3] += 1496069;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42702835;
          result[5] += 246837;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 9427976;
          result[4] += 19903506;
          result[5] += 13618188;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 825955;
          result[4] += 1651910;
          result[5] += 40471807;
        } else {
          result[0] += 4487279;
          result[1] += 274731;
          result[2] += 183154;
          result[3] += 14927071;
          result[4] += 5128319;
          result[5] += 17949117;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 2863311;
          result[1] += 14316557;
          result[2] += 2863311;
          result[3] += 0;
          result[4] += 22190664;
          result[5] += 715827;
        } else {
          result[0] += 97391;
          result[1] += 42754889;
          result[2] += 0;
          result[3] += 0;
          result[4] += 97391;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 33905826;
          result[1] += 2407107;
          result[2] += 137548;
          result[3] += 894068;
          result[4] += 4882989;
          result[5] += 722132;
        } else {
          result[0] += 5811997;
          result[1] += 1379117;
          result[2] += 8668741;
          result[3] += 10540401;
          result[4] += 3940336;
          result[5] += 12609078;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 825955;
          result[2] += 0;
          result[3] += 4129776;
          result[4] += 9085507;
          result[5] += 28908433;
        } else {
          result[0] += 2402778;
          result[1] += 1501736;
          result[2] += 5706599;
          result[3] += 18020841;
          result[4] += 1802084;
          result[5] += 13515631;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8589934;
          result[3] += 27487790;
          result[4] += 0;
          result[5] += 6871947;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34942106;
          result[3] += 7279605;
          result[4] += 0;
          result[5] += 727960;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34325240;
          result[3] += 8106966;
          result[4] += 0;
          result[5] += 517465;
        } else {
          result[0] += 941878;
          result[1] += 0;
          result[2] += 39872868;
          result[3] += 1946549;
          result[4] += 125583;
          result[5] += 62791;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 560213;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41829246;
          result[5] += 560213;
        } else {
          result[0] += 0;
          result[1] += 37580963;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5368709;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 33038209;
          result[1] += 3303820;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5506368;
          result[5] += 1101273;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7708915;
          result[5] += 35240757;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 399531;
          result[4] += 1265184;
          result[5] += 41284956;
        } else {
          result[0] += 0;
          result[1] += 1301505;
          result[2] += 0;
          result[3] += 7548730;
          result[4] += 3123612;
          result[5] += 30975824;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42950000))) ) ) {
          result[0] += 438261;
          result[1] += 1314785;
          result[2] += 438261;
          result[3] += 8765239;
          result[4] += 4163488;
          result[5] += 27829635;
        } else {
          result[0] += 0;
          result[1] += 343597;
          result[2] += 2405181;
          result[3] += 23708219;
          result[4] += 0;
          result[5] += 16492674;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 6521154;
          result[1] += 3373010;
          result[2] += 1124336;
          result[3] += 899469;
          result[4] += 28558159;
          result[5] += 2473541;
        } else {
          result[0] += 35511461;
          result[1] += 651271;
          result[2] += 1062601;
          result[3] += 2502255;
          result[4] += 1576763;
          result[5] += 1645318;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 1517243;
          result[1] += 1517243;
          result[2] += 14822305;
          result[3] += 11904528;
          result[4] += 3851465;
          result[5] += 9336885;
        } else {
          result[0] += 1425524;
          result[1] += 0;
          result[2] += 37063636;
          result[3] += 3816726;
          result[4] += 0;
          result[5] += 643785;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 795364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39569374;
          result[5] += 2584934;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 61887;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1175855;
          result[4] += 1423404;
          result[5] += 40288526;
        } else {
          result[0] += 2435709;
          result[1] += 1055474;
          result[2] += 243570;
          result[3] += 12016165;
          result[4] += 3247612;
          result[5] += 23951140;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 998829;
          result[1] += 9988296;
          result[2] += 1997659;
          result[3] += 0;
          result[4] += 27967228;
          result[5] += 1997659;
        } else {
          result[0] += 97835;
          result[1] += 42851837;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 30767260;
          result[1] += 2163786;
          result[2] += 355690;
          result[3] += 1274558;
          result[4] += 6313513;
          result[5] += 2074863;
        } else {
          result[0] += 6690652;
          result[1] += 107913;
          result[2] += 9172668;
          result[3] += 12086340;
          result[4] += 3237412;
          result[5] += 11654685;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d60000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8084644;
          result[3] += 26275094;
          result[4] += 0;
          result[5] += 8589934;
        } else {
          result[0] += 433835;
          result[1] += 0;
          result[2] += 25162434;
          result[3] += 16051897;
          result[4] += 0;
          result[5] += 1301505;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29205777;
          result[3] += 13743895;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 987348;
          result[1] += 0;
          result[2] += 39987626;
          result[3] += 1974697;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 416987;
          result[1] += 0;
          result[2] += 40924306;
          result[3] += 1310530;
          result[4] += 0;
          result[5] += 297847;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
          result[0] += 523776;
          result[1] += 1396737;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40854566;
          result[5] += 174592;
        } else {
          result[0] += 2684354;
          result[1] += 0;
          result[2] += 4026531;
          result[3] += 8053063;
          result[4] += 5368709;
          result[5] += 22817013;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1031277;
          result[4] += 2426535;
          result[5] += 39491860;
        } else {
          result[0] += 3457487;
          result[1] += 998829;
          result[2] += 1767160;
          result[3] += 12139621;
          result[4] += 5224647;
          result[5] += 19361927;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 21913098;
          result[2] += 0;
          result[3] += 0;
          result[4] += 21036574;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 19700828;
          result[1] += 1167110;
          result[2] += 4014860;
          result[3] += 6582504;
          result[4] += 5275340;
          result[5] += 6209028;
        } else {
          result[0] += 37920917;
          result[1] += 872335;
          result[2] += 1334159;
          result[3] += 102627;
          result[4] += 2514377;
          result[5] += 205255;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2741468;
          result[3] += 10052051;
          result[4] += 0;
          result[5] += 30156153;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34359738;
          result[3] += 1717986;
          result[4] += 0;
          result[5] += 6871947;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8765239;
          result[3] += 12271335;
          result[4] += 6135667;
          result[5] += 15777430;
        } else {
          result[0] += 5368709;
          result[1] += 1789569;
          result[2] += 29080507;
          result[3] += 4921316;
          result[4] += 0;
          result[5] += 1789569;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 250435;
          result[2] += 35311392;
          result[3] += 6636538;
          result[4] += 0;
          result[5] += 751306;
        } else {
          result[0] += 85048;
          result[1] += 0;
          result[2] += 42269282;
          result[3] += 595342;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 1034931;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41914741;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 26843545;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5368709;
          result[5] += 10737418;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
          result[0] += 3435973;
          result[1] += 2290649;
          result[2] += 0;
          result[3] += 3435973;
          result[4] += 22333829;
          result[5] += 11453246;
        } else {
          result[0] += 41054834;
          result[1] += 0;
          result[2] += 0;
          result[3] += 631612;
          result[4] += 631612;
          result[5] += 631612;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42810000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42700000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40423221;
          result[5] += 2526451;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1297573;
          result[4] += 519029;
          result[5] += 41133070;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 563644;
          result[1] += 338186;
          result[2] += 112728;
          result[3] += 6876456;
          result[4] += 7101914;
          result[5] += 27956742;
        } else {
          result[0] += 848807;
          result[1] += 848807;
          result[2] += 509284;
          result[3] += 26992086;
          result[4] += 339523;
          result[5] += 13411162;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 42841487;
          result[2] += 0;
          result[3] += 0;
          result[4] += 108185;
          result[5] += 0;
        } else {
          result[0] += 734182;
          result[1] += 15050740;
          result[2] += 0;
          result[3] += 734182;
          result[4] += 24962203;
          result[5] += 1468364;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 35944421;
          result[1] += 1564279;
          result[2] += 68012;
          result[3] += 1598285;
          result[4] += 2924522;
          result[5] += 850151;
        } else {
          result[0] += 6135667;
          result[1] += 766958;
          result[2] += 19940919;
          result[3] += 6135667;
          result[4] += 2684354;
          result[5] += 7286105;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 1952257;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37092899;
          result[5] += 3904515;
        } else {
          result[0] += 664855;
          result[1] += 0;
          result[2] += 15956534;
          result[3] += 17419217;
          result[4] += 265942;
          result[5] += 8643123;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 15618062;
          result[1] += 7028128;
          result[2] += 12494450;
          result[3] += 0;
          result[4] += 3904515;
          result[5] += 3904515;
        } else {
          result[0] += 615596;
          result[1] += 426181;
          result[2] += 39066681;
          result[3] += 2367677;
          result[4] += 0;
          result[5] += 473535;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 562659;
          result[1] += 750212;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37323078;
          result[5] += 4313722;
        } else {
          result[0] += 27244195;
          result[1] += 320519;
          result[2] += 0;
          result[3] += 961559;
          result[4] += 14102877;
          result[5] += 320519;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 92763;
          result[1] += 231909;
          result[2] += 0;
          result[3] += 2226332;
          result[4] += 3664172;
          result[5] += 36734493;
        } else {
          result[0] += 98734;
          result[1] += 592409;
          result[2] += 789879;
          result[3] += 21030529;
          result[4] += 1875962;
          result[5] += 18562157;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 390451;
          result[1] += 14837159;
          result[2] += 390451;
          result[3] += 1171354;
          result[4] += 26160255;
          result[5] += 0;
        } else {
          result[0] += 191312;
          result[1] += 41801797;
          result[2] += 95656;
          result[3] += 0;
          result[4] += 860906;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
          result[0] += 37149631;
          result[1] += 1174691;
          result[2] += 73418;
          result[3] += 1027855;
          result[4] += 2753184;
          result[5] += 770891;
        } else {
          result[0] += 8562751;
          result[1] += 543666;
          result[2] += 14950835;
          result[3] += 9514168;
          result[4] += 2310583;
          result[5] += 7067667;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 4772185;
          result[4] += 4772185;
          result[5] += 4772185;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2386092;
          result[3] += 0;
          result[4] += 0;
          result[5] += 40563580;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2526451;
          result[3] += 37896770;
          result[4] += 0;
          result[5] += 2526451;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10105805;
          result[3] += 12632256;
          result[4] += 0;
          result[5] += 20211610;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 3734754;
          result[1] += 0;
          result[2] += 9336885;
          result[3] += 16806393;
          result[4] += 0;
          result[5] += 13071639;
        } else {
          result[0] += 411658;
          result[1] += 411658;
          result[2] += 33344314;
          result[3] += 6723750;
          result[4] += 686097;
          result[5] += 1372194;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42800000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 67319;
          result[1] += 269276;
          result[2] += 41266692;
          result[3] += 1279065;
          result[4] += 0;
          result[5] += 67319;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42751748;
          result[5] += 197924;
        } else {
          result[0] += 671088;
          result[1] += 1677721;
          result[2] += 0;
          result[3] += 1006632;
          result[4] += 26172456;
          result[5] += 13421772;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42870000))) ) ) {
          result[0] += 156750;
          result[1] += 156750;
          result[2] += 52250;
          result[3] += 2403509;
          result[4] += 627002;
          result[5] += 39553409;
        } else {
          result[0] += 6708163;
          result[1] += 609833;
          result[2] += 609833;
          result[3] += 14635994;
          result[4] += 4878664;
          result[5] += 15507184;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 42748031;
          result[2] += 0;
          result[3] += 0;
          result[4] += 201641;
          result[5] += 0;
        } else {
          result[0] += 1215556;
          result[1] += 17422980;
          result[2] += 405185;
          result[3] += 405185;
          result[4] += 23095578;
          result[5] += 405185;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42950000))) ) ) {
          result[0] += 37748155;
          result[1] += 1226071;
          result[2] += 260075;
          result[3] += 780227;
          result[4] += 2637912;
          result[5] += 297229;
        } else {
          result[0] += 11166914;
          result[1] += 1288490;
          result[2] += 7301444;
          result[3] += 10307921;
          result[4] += 3006477;
          result[5] += 9878424;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1301505;
          result[3] += 0;
          result[4] += 0;
          result[5] += 41648167;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 1952257;
          result[1] += 2733161;
          result[2] += 3514064;
          result[3] += 16008514;
          result[4] += 3514064;
          result[5] += 15227611;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20615843;
          result[3] += 17916149;
          result[4] += 0;
          result[5] += 4417680;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 24542670;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 18407002;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1822107;
          result[1] += 0;
          result[2] += 32407480;
          result[3] += 7809031;
          result[4] += 0;
          result[5] += 911053;
        } else {
          result[0] += 211574;
          result[1] += 0;
          result[2] += 41398124;
          result[3] += 987348;
          result[4] += 0;
          result[5] += 352624;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
          result[0] += 161464;
          result[1] += 3875158;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37782795;
          result[5] += 1130254;
        } else {
          result[0] += 22690393;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 12560753;
          result[5] += 7698526;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 54504;
          result[3] += 2180186;
          result[4] += 1744149;
          result[5] += 38970832;
        } else {
          result[0] += 563274;
          result[1] += 281637;
          result[2] += 281637;
          result[3] += 16616594;
          result[4] += 4647013;
          result[5] += 20559515;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 11665343;
          result[2] += 530242;
          result[3] += 0;
          result[4] += 30754086;
          result[5] += 0;
        } else {
          result[0] += 296887;
          result[1] += 42454861;
          result[2] += 0;
          result[3] += 0;
          result[4] += 197924;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
          result[0] += 6271412;
          result[1] += 2850642;
          result[2] += 760171;
          result[3] += 7791754;
          result[4] += 4370984;
          result[5] += 20904708;
        } else {
          result[0] += 34640863;
          result[1] += 1030792;
          result[2] += 937083;
          result[3] += 1593042;
          result[4] += 3717098;
          result[5] += 1030792;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5973133;
          result[3] += 26168012;
          result[4] += 1706609;
          result[5] += 9101917;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16806393;
          result[3] += 0;
          result[4] += 0;
          result[5] += 26143279;
        } else {
          result[0] += 2243639;
          result[1] += 0;
          result[2] += 26282635;
          result[3] += 13141317;
          result[4] += 0;
          result[5] += 1282079;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6607641;
          result[3] += 13215283;
          result[4] += 0;
          result[5] += 23126746;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 4026531;
          result[4] += 0;
          result[5] += 12079595;
        } else {
          result[0] += 933688;
          result[1] += 0;
          result[2] += 38772645;
          result[3] += 2899348;
          result[4] += 49141;
          result[5] += 294849;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 307882;
          result[1] += 461824;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39870843;
          result[5] += 2309122;
        } else {
          result[0] += 0;
          result[1] += 22973080;
          result[2] += 0;
          result[3] += 12984784;
          result[4] += 5992977;
          result[5] += 998829;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2124718;
          result[4] += 2327072;
          result[5] += 38497881;
        } else {
          result[0] += 6446637;
          result[1] += 251167;
          result[2] += 1339560;
          result[3] += 13814222;
          result[4] += 4521018;
          result[5] += 16577066;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 8053063;
          result[2] += 0;
          result[3] += 0;
          result[4] += 33554431;
          result[5] += 1342177;
        } else {
          result[0] += 0;
          result[1] += 41294016;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1655656;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 36174089;
          result[1] += 752842;
          result[2] += 150568;
          result[3] += 1430401;
          result[4] += 2559664;
          result[5] += 1882106;
        } else {
          result[0] += 9355374;
          result[1] += 1488355;
          result[2] += 10099551;
          result[3] += 9355374;
          result[4] += 1488355;
          result[5] += 11162662;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 933688;
          result[1] += 0;
          result[2] += 4668442;
          result[3] += 26143279;
          result[4] += 0;
          result[5] += 11204262;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26194580;
          result[3] += 14395220;
          result[4] += 0;
          result[5] += 2359872;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 805306;
          result[1] += 0;
          result[2] += 39460012;
          result[3] += 2415919;
          result[4] += 0;
          result[5] += 268435;
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42be0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7158278;
          result[3] += 28633115;
          result[4] += 0;
          result[5] += 7158278;
        } else {
          result[0] += 9544371;
          result[1] += 0;
          result[2] += 33405301;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 376201;
          result[1] += 0;
          result[2] += 41005965;
          result[3] += 1379405;
          result[4] += 0;
          result[5] += 188100;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 205500;
          result[1] += 822003;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39661659;
          result[5] += 2260509;
        } else {
          result[0] += 21227999;
          result[1] += 0;
          result[2] += 0;
          result[3] += 493674;
          result[4] += 14810232;
          result[5] += 6417767;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 183807;
          result[3] += 980306;
          result[4] += 1347921;
          result[5] += 40437637;
        } else {
          result[0] += 183545;
          result[1] += 550636;
          result[2] += 0;
          result[3] += 16152013;
          result[4] += 3212048;
          result[5] += 22851428;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 42647210;
          result[2] += 0;
          result[3] += 0;
          result[4] += 302462;
          result[5] += 0;
        } else {
          result[0] += 277094;
          result[1] += 12469259;
          result[2] += 0;
          result[3] += 0;
          result[4] += 29649129;
          result[5] += 554189;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 14877551;
          result[1] += 471234;
          result[2] += 6395327;
          result[3] += 9693970;
          result[4] += 3702558;
          result[5] += 7809031;
        } else {
          result[0] += 35099469;
          result[1] += 1132240;
          result[2] += 2490930;
          result[3] += 1320947;
          result[4] += 2377705;
          result[5] += 528379;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11848185;
          result[3] += 11354511;
          result[4] += 2962046;
          result[5] += 16784929;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 2831846;
          result[1] += 943948;
          result[2] += 31622286;
          result[3] += 6607641;
          result[4] += 0;
          result[5] += 943948;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 12271335;
          result[4] += 0;
          result[5] += 30678337;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29242330;
          result[3] += 10965873;
          result[4] += 0;
          result[5] += 2741468;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1599189;
          result[1] += 0;
          result[2] += 34953723;
          result[3] += 6396759;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41661182;
          result[3] += 1288490;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42795731;
          result[5] += 153941;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 31496426;
          result[5] += 11453246;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42620000))) ) ) {
          result[0] += 35068999;
          result[1] += 0;
          result[2] += 0;
          result[3] += 394033;
          result[4] += 5516471;
          result[5] += 1970168;
        } else {
          result[0] += 234514;
          result[1] += 234514;
          result[2] += 201012;
          result[3] += 8777546;
          result[4] += 2345145;
          result[5] += 31156939;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 42566193;
          result[2] += 0;
          result[3] += 0;
          result[4] += 383479;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 11621676;
          result[2] += 1010580;
          result[3] += 0;
          result[4] += 28801545;
          result[5] += 1515870;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 17765237;
          result[1] += 2586509;
          result[2] += 6057877;
          result[3] += 5717547;
          result[4] += 3539434;
          result[5] += 7283066;
        } else {
          result[0] += 37803629;
          result[1] += 989623;
          result[2] += 1088586;
          result[3] += 395849;
          result[4] += 2375097;
          result[5] += 296887;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9544371;
          result[3] += 19088743;
          result[4] += 4090445;
          result[5] += 10226112;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 10737418;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 7809031;
          result[2] += 0;
          result[3] += 3904515;
          result[4] += 0;
          result[5] += 31236125;
        } else {
          result[0] += 0;
          result[1] += 1263225;
          result[2] += 15158708;
          result[3] += 24001287;
          result[4] += 0;
          result[5] += 2526451;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 33746171;
          result[1] += 0;
          result[2] += 9203501;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 360164;
          result[1] += 135061;
          result[2] += 38987858;
          result[3] += 3331525;
          result[4] += 45020;
          result[5] += 90041;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42282061;
          result[5] += 667611;
        } else {
          result[0] += 0;
          result[1] += 4294967;
          result[2] += 4294967;
          result[3] += 0;
          result[4] += 17179869;
          result[5] += 17179869;
        }
      } else {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 3579139;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2386092;
          result[4] += 31019208;
          result[5] += 5965232;
        } else {
          result[0] += 513342;
          result[1] += 0;
          result[2] += 0;
          result[3] += 912609;
          result[4] += 741495;
          result[5] += 40782225;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 3419559;
          result[1] += 3282777;
          result[2] += 1367823;
          result[3] += 6702337;
          result[4] += 2598865;
          result[5] += 25578308;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1385473;
          result[3] += 28171290;
          result[4] += 923648;
          result[5] += 12469259;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 3579139;
          result[1] += 11490921;
          result[2] += 0;
          result[3] += 0;
          result[4] += 26749357;
          result[5] += 1130254;
        } else {
          result[0] += 31587325;
          result[1] += 482899;
          result[2] += 823770;
          result[3] += 3380298;
          result[4] += 2840586;
          result[5] += 3834792;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          result[0] += 112728;
          result[1] += 42836944;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5195524;
          result[3] += 24592151;
          result[4] += 0;
          result[5] += 13161996;
        } else {
          result[0] += 4994148;
          result[1] += 0;
          result[2] += 24471325;
          result[3] += 10987125;
          result[4] += 749122;
          result[5] += 1747951;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15618062;
          result[3] += 11713547;
          result[4] += 0;
          result[5] += 15618062;
        } else {
          result[0] += 297572;
          result[1] += 49595;
          result[2] += 39577181;
          result[3] += 2826941;
          result[4] += 0;
          result[5] += 198381;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 185127;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41283521;
          result[5] += 1481023;
        } else {
          result[0] += 27656986;
          result[1] += 650752;
          result[2] += 0;
          result[3] += 976128;
          result[4] += 9110536;
          result[5] += 4555268;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 44646;
          result[2] += 178584;
          result[3] += 2276957;
          result[4] += 3660990;
          result[5] += 36788493;
        } else {
          result[0] += 500578;
          result[1] += 901042;
          result[2] += 1001157;
          result[3] += 21124431;
          result[4] += 1802084;
          result[5] += 17620378;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 7310582;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35639090;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42502280;
          result[2] += 0;
          result[3] += 0;
          result[4] += 447392;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 37595305;
          result[1] += 764909;
          result[2] += 0;
          result[3] += 382454;
          result[4] += 3671565;
          result[5] += 535436;
        } else {
          result[0] += 9801335;
          result[1] += 1651910;
          result[2] += 12224137;
          result[3] += 9250698;
          result[4] += 2202547;
          result[5] += 7819043;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2147483;
          result[5] += 40802189;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30064771;
          result[3] += 0;
          result[4] += 0;
          result[5] += 12884901;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 3205199;
          result[2] += 12820797;
          result[3] += 19231196;
          result[4] += 0;
          result[5] += 7692478;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36077725;
          result[3] += 5153960;
          result[4] += 0;
          result[5] += 1717986;
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 22241794;
          result[3] += 17640044;
          result[4] += 766958;
          result[5] += 2300875;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 32212254;
          result[2] += 10737418;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 266437;
          result[1] += 53287;
          result[2] += 40125438;
          result[3] += 2344647;
          result[4] += 0;
          result[5] += 159862;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 338186;
          result[1] += 1183652;
          result[2] += 676372;
          result[3] += 0;
          result[4] += 40413274;
          result[5] += 338186;
        } else {
          result[0] += 18695739;
          result[1] += 0;
          result[2] += 1010580;
          result[3] += 0;
          result[4] += 10611095;
          result[5] += 12632256;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 645486;
          result[2] += 0;
          result[3] += 2035764;
          result[4] += 2284028;
          result[5] += 37984392;
        } else {
          result[0] += 134638;
          result[1] += 0;
          result[2] += 1346384;
          result[3] += 22619263;
          result[4] += 538553;
          result[5] += 18310832;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 12271335;
          result[2] += 0;
          result[3] += 0;
          result[4] += 30678337;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42668343;
          result[2] += 0;
          result[3] += 0;
          result[4] += 281329;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 33128960;
          result[1] += 1753698;
          result[2] += 414510;
          result[3] += 1084104;
          result[4] += 5101668;
          result[5] += 1466729;
        } else {
          result[0] += 5129820;
          result[1] += 704092;
          result[2] += 8046777;
          result[3] += 11969580;
          result[4] += 3721634;
          result[5] += 13377766;
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6063483;
          result[3] += 28801545;
          result[4] += 505290;
          result[5] += 7579354;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26030104;
          result[3] += 16919568;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34717652;
          result[3] += 5368709;
          result[4] += 0;
          result[5] += 2863311;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 18673770;
          result[3] += 24275902;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 445844;
          result[1] += 0;
          result[2] += 38342614;
          result[3] += 3566754;
          result[4] += 0;
          result[5] += 594459;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 12271335;
          result[1] += 0;
          result[2] += 30678337;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 175304;
          result[1] += 0;
          result[2] += 41897844;
          result[3] += 876523;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
          result[0] += 375106;
          result[1] += 3375956;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37323078;
          result[5] += 1875531;
        } else {
          result[0] += 26639670;
          result[1] += 0;
          result[2] += 0;
          result[3] += 543666;
          result[4] += 5980334;
          result[5] += 9786001;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 139901;
          result[2] += 0;
          result[3] += 2798024;
          result[4] += 2937925;
          result[5] += 37073821;
        } else {
          result[0] += 507279;
          result[1] += 845466;
          result[2] += 676372;
          result[3] += 24180327;
          result[4] += 1014559;
          result[5] += 15725667;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 31789772;
          result[1] += 3061001;
          result[2] += 127541;
          result[3] += 988448;
          result[4] += 5707491;
          result[5] += 1275417;
        } else {
          result[0] += 6663220;
          result[1] += 1364755;
          result[2] += 9794131;
          result[3] += 10677208;
          result[4] += 2890071;
          result[5] += 11560285;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 28633115;
        } else {
          result[0] += 206986;
          result[1] += 42535700;
          result[2] += 0;
          result[3] += 0;
          result[4] += 206986;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b40000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1263225;
          result[1] += 0;
          result[2] += 2526451;
          result[3] += 3789677;
          result[4] += 8842579;
          result[5] += 26527739;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 37580963;
          result[4] += 0;
          result[5] += 5368709;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 2202547;
          result[4] += 0;
          result[5] += 12114010;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 1789569;
          result[2] += 3579139;
          result[3] += 25053975;
          result[4] += 0;
          result[5] += 12526987;
        } else {
          result[0] += 1431655;
          result[1] += 0;
          result[2] += 26485631;
          result[3] += 10737418;
          result[4] += 0;
          result[5] += 4294967;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33229483;
          result[3] += 9494138;
          result[4] += 0;
          result[5] += 226050;
        } else {
          result[0] += 63161;
          result[1] += 0;
          result[2] += 40928511;
          result[3] += 1957999;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42870000))) ) ) {
          result[0] += 173184;
          result[1] += 346368;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41217831;
          result[5] += 1212289;
        } else {
          result[0] += 0;
          result[1] += 14693309;
          result[2] += 0;
          result[3] += 0;
          result[4] += 11302545;
          result[5] += 16953818;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1582356;
          result[1] += 632942;
          result[2] += 0;
          result[3] += 2350929;
          result[4] += 1717986;
          result[5] += 36665457;
        } else {
          result[0] += 1367823;
          result[1] += 0;
          result[2] += 2051735;
          result[3] += 19833447;
          result[4] += 820694;
          result[5] += 18875970;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
          result[0] += 2637260;
          result[1] += 14128181;
          result[2] += 0;
          result[3] += 188375;
          result[4] += 25807478;
          result[5] += 188375;
        } else {
          result[0] += 29102058;
          result[1] += 413773;
          result[2] += 3420526;
          result[3] += 3917054;
          result[4] += 2730904;
          result[5] += 3365356;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 42109581;
          result[2] += 0;
          result[3] += 210022;
          result[4] += 630068;
          result[5] += 0;
        } else {
          result[0] += 14316557;
          result[1] += 0;
          result[2] += 0;
          result[3] += 28633115;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1867377;
          result[3] += 0;
          result[4] += 1867377;
          result[5] += 39214918;
        } else {
          result[0] += 0;
          result[1] += 5153960;
          result[2] += 5153960;
          result[3] += 19756849;
          result[4] += 3435973;
          result[5] += 9448928;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 2526451;
          result[2] += 2526451;
          result[3] += 32843867;
          result[4] += 0;
          result[5] += 5052902;
        } else {
          result[0] += 1007616;
          result[1] += 0;
          result[2] += 31110173;
          result[3] += 9194504;
          result[4] += 251904;
          result[5] += 1385473;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42df0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27487790;
          result[3] += 12884901;
          result[4] += 0;
          result[5] += 2576980;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39273800;
          result[3] += 3482405;
          result[4] += 0;
          result[5] += 193466;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d50000))) ) ) {
          result[0] += 842150;
          result[1] += 0;
          result[2] += 38738920;
          result[3] += 3368601;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41297762;
          result[5] += 1651910;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 674098;
          result[1] += 529648;
          result[2] += 48149;
          result[3] += 1588945;
          result[4] += 1588945;
          result[5] += 38519886;
        } else {
          result[0] += 385198;
          result[1] += 1540795;
          result[2] += 0;
          result[3] += 21571136;
          result[4] += 1733394;
          result[5] += 17719147;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 3734754;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39214918;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42346164;
          result[2] += 0;
          result[3] += 301754;
          result[4] += 301754;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 31112911;
          result[1] += 2017972;
          result[2] += 240951;
          result[3] += 1295116;
          result[4] += 6355105;
          result[5] += 1927615;
        } else {
          result[0] += 7020619;
          result[1] += 0;
          result[2] += 7536841;
          result[3] += 13834750;
          result[4] += 2890843;
          result[5] += 11666617;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42780000))) ) ) {
          result[0] += 0;
          result[1] += 33405301;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9544371;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 499414;
          result[2] += 998829;
          result[3] += 9988296;
          result[4] += 2497074;
          result[5] += 28966058;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6362914;
          result[3] += 30223843;
          result[4] += 0;
          result[5] += 6362914;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28256363;
          result[3] += 9042036;
          result[4] += 0;
          result[5] += 5651272;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 1101273;
          result[2] += 13215283;
          result[3] += 24228020;
          result[4] += 1101273;
          result[5] += 3303820;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33365861;
          result[3] += 7099119;
          result[4] += 0;
          result[5] += 2484691;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 2431113;
          result[1] += 0;
          result[2] += 35116084;
          result[3] += 4592103;
          result[4] += 270123;
          result[5] += 540247;
        } else {
          result[0] += 523776;
          result[1] += 0;
          result[2] += 41552935;
          result[3] += 785664;
          result[4] += 0;
          result[5] += 87296;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 1565873;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41383799;
          result[5] += 0;
        } else {
          result[0] += 2962046;
          result[1] += 5924092;
          result[2] += 0;
          result[3] += 5924092;
          result[4] += 13329208;
          result[5] += 14810232;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1012133;
          result[1] += 88011;
          result[2] += 88011;
          result[3] += 2244296;
          result[4] += 3300435;
          result[5] += 36216783;
        } else {
          result[0] += 2475485;
          result[1] += 618871;
          result[2] += 371322;
          result[3] += 18813689;
          result[4] += 1732839;
          result[5] += 18937463;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 42274060;
          result[2] += 0;
          result[3] += 0;
          result[4] += 675612;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 13904570;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28118131;
          result[5] += 926971;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 36325414;
          result[1] += 1008039;
          result[2] += 180007;
          result[3] += 756029;
          result[4] += 3924152;
          result[5] += 756029;
        } else {
          result[0] += 9283658;
          result[1] += 1326236;
          result[2] += 8365494;
          result[3] += 13058332;
          result[4] += 1938346;
          result[5] += 8977603;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 6607641;
          result[4] += 0;
          result[5] += 36342030;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12079595;
          result[3] += 26843545;
          result[4] += 0;
          result[5] += 4026531;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4294967;
          result[3] += 12884901;
          result[4] += 0;
          result[5] += 25769803;
        } else {
          result[0] += 394033;
          result[1] += 0;
          result[2] += 32310763;
          result[3] += 7486640;
          result[4] += 0;
          result[5] += 2758235;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2863311;
          result[3] += 0;
          result[4] += 8589934;
          result[5] += 31496426;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 23126746;
          result[3] += 19822925;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1380525;
          result[1] += 0;
          result[2] += 35586871;
          result[3] += 5982275;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42283212;
          result[3] += 666460;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 1431655;
          result[1] += 1431655;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28633115;
          result[5] += 11453246;
        }
      } else {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42680000))) ) ) {
          result[0] += 24542670;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 15339168;
          result[5] += 3067833;
        } else {
          result[0] += 0;
          result[1] += 145756;
          result[2] += 0;
          result[3] += 1603324;
          result[4] += 2283523;
          result[5] += 38917067;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1827645;
          result[3] += 6853671;
          result[4] += 1827645;
          result[5] += 32440710;
        } else {
          result[0] += 484394;
          result[1] += 645859;
          result[2] += 2744903;
          result[3] += 24542670;
          result[4] += 0;
          result[5] += 14531844;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 26076587;
          result[2] += 0;
          result[3] += 0;
          result[4] += 16873085;
          result[5] += 0;
        } else {
          result[0] += 399531;
          result[1] += 42550141;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 5135286;
          result[1] += 6769241;
          result[2] += 0;
          result[3] += 0;
          result[4] += 29177766;
          result[5] += 1867377;
        } else {
          result[0] += 31959784;
          result[1] += 356428;
          result[2] += 1039584;
          result[3] += 2376192;
          result[4] += 2613811;
          result[5] += 4603872;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3142658;
          result[3] += 3142658;
          result[4] += 16760847;
          result[5] += 19903506;
        } else {
          result[0] += 4561027;
          result[1] += 4180941;
          result[2] += 9502140;
          result[3] += 19764451;
          result[4] += 760171;
          result[5] += 4180941;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 3343387;
          result[1] += 0;
          result[2] += 24689632;
          result[3] += 12087632;
          result[4] += 0;
          result[5] += 2829020;
        } else {
          result[0] += 1227133;
          result[1] += 0;
          result[2] += 38581077;
          result[3] += 2699693;
          result[4] += 0;
          result[5] += 441768;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 209510;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41692609;
          result[5] += 1047552;
        } else {
          result[0] += 604924;
          result[1] += 604924;
          result[2] += 604924;
          result[3] += 3024624;
          result[4] += 26616698;
          result[5] += 11493574;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          result[0] += 33500744;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9448928;
          result[5] += 0;
        } else {
          result[0] += 44832;
          result[1] += 403493;
          result[2] += 44832;
          result[3] += 3093452;
          result[4] += 3048619;
          result[5] += 36314441;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 8738678;
          result[1] += 1673363;
          result[2] += 3532657;
          result[3] += 16454744;
          result[4] += 2417081;
          result[5] += 10133147;
        } else {
          result[0] += 30447306;
          result[1] += 2830137;
          result[2] += 1803824;
          result[3] += 2021526;
          result[4] += 3918652;
          result[5] += 1928225;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 42848852;
          result[2] += 0;
          result[3] += 0;
          result[4] += 100820;
          result[5] += 0;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3340530;
          result[3] += 9544371;
          result[4] += 3817748;
          result[5] += 26247022;
        } else {
          result[0] += 1087333;
          result[1] += 6524000;
          result[2] += 7611334;
          result[3] += 23377670;
          result[4] += 543666;
          result[5] += 3805667;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13071639;
          result[3] += 26143279;
          result[4] += 0;
          result[5] += 3734754;
        } else {
          result[0] += 0;
          result[1] += 766958;
          result[2] += 35280088;
          result[3] += 5368709;
          result[4] += 0;
          result[5] += 1533916;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 438261;
          result[1] += 438261;
          result[2] += 34038346;
          result[3] += 6720016;
          result[4] += 0;
          result[5] += 1314785;
        } else {
          result[0] += 36814005;
          result[1] += 0;
          result[2] += 6135667;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1455921;
          result[1] += 0;
          result[2] += 34214146;
          result[3] += 6915625;
          result[4] += 0;
          result[5] += 363980;
        } else {
          result[0] += 164873;
          result[1] += 0;
          result[2] += 42207740;
          result[3] += 577058;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39103433;
          result[5] += 3846239;
        } else {
          result[0] += 1385473;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 19396626;
          result[5] += 22167573;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 178708;
          result[3] += 1548809;
          result[4] += 1727518;
          result[5] += 39494636;
        } else {
          result[0] += 2615795;
          result[1] += 590663;
          result[2] += 253141;
          result[3] += 15947913;
          result[4] += 4303405;
          result[5] += 19238753;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 370255;
          result[1] += 20364069;
          result[2] += 0;
          result[3] += 0;
          result[4] += 21845092;
          result[5] += 370255;
        } else {
          result[0] += 208493;
          result[1] += 42532685;
          result[2] += 0;
          result[3] += 0;
          result[4] += 208493;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 17759248;
          result[1] += 1070593;
          result[2] += 5038084;
          result[3] += 7242246;
          result[4] += 3274755;
          result[5] += 8564744;
        } else {
          result[0] += 35722564;
          result[1] += 991146;
          result[2] += 1940994;
          result[3] += 454275;
          result[4] += 3469012;
          result[5] += 371679;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 3158064;
          result[2] += 0;
          result[3] += 9474192;
          result[4] += 5684515;
          result[5] += 24632900;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16702650;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 4772185;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 22906492;
          result[3] += 16225432;
          result[4] += 0;
          result[5] += 3817748;
        } else {
          result[0] += 7669584;
          result[1] += 0;
          result[2] += 33746171;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1533916;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42520000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1292799;
          result[1] += 287288;
          result[2] += 33900076;
          result[3] += 6033064;
          result[4] += 0;
          result[5] += 1436443;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 18790481;
          result[3] += 24159191;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 215106;
          result[1] += 0;
          result[2] += 41515627;
          result[3] += 1218938;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 198841;
          result[1] += 1193046;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39768215;
          result[5] += 1789569;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 11848185;
          result[5] += 31101487;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 16898231;
          result[1] += 2816371;
          result[2] += 0;
          result[3] += 1056139;
          result[4] += 20066650;
          result[5] += 2112278;
        } else {
          result[0] += 115975;
          result[1] += 270610;
          result[2] += 193292;
          result[3] += 6224030;
          result[4] += 1816952;
          result[5] += 34328811;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 13421772;
          result[2] += 0;
          result[3] += 0;
          result[4] += 29527900;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42757073;
          result[2] += 0;
          result[3] += 0;
          result[4] += 192599;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 34574812;
          result[1] += 945023;
          result[2] += 195522;
          result[3] += 651740;
          result[4] += 5279094;
          result[5] += 1303480;
        } else {
          result[0] += 9373936;
          result[1] += 2386092;
          result[2] += 3579139;
          result[3] += 7840019;
          result[4] += 3920009;
          result[5] += 15850474;
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2825636;
          result[3] += 28821491;
          result[4] += 282563;
          result[5] += 11019981;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 25769803;
          result[4] += 0;
          result[5] += 17179869;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40628069;
          result[3] += 0;
          result[4] += 0;
          result[5] += 2321603;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 825955;
          result[2] += 7433597;
          result[3] += 14867194;
          result[4] += 0;
          result[5] += 19822925;
        } else {
          result[0] += 8886139;
          result[1] += 0;
          result[2] += 27028673;
          result[3] += 3332302;
          result[4] += 1851279;
          result[5] += 1851279;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 380085;
          result[1] += 0;
          result[2] += 28506420;
          result[3] += 12162739;
          result[4] += 0;
          result[5] += 1900428;
        } else {
          result[0] += 51436;
          result[1] += 0;
          result[2] += 39606285;
          result[3] += 3086204;
          result[4] += 0;
          result[5] += 205746;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 1541783;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40306616;
          result[5] += 1101273;
        } else {
          result[0] += 10737418;
          result[1] += 894784;
          result[2] += 0;
          result[3] += 2982616;
          result[4] += 14913080;
          result[5] += 13421772;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 187826;
          result[2] += 0;
          result[3] += 1440003;
          result[4] += 939132;
          result[5] += 40382709;
        } else {
          result[0] += 318933;
          result[1] += 318933;
          result[2] += 0;
          result[3] += 14245683;
          result[4] += 4358753;
          result[5] += 23707368;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 3889143;
          result[1] += 10821964;
          result[2] += 507279;
          result[3] += 2198211;
          result[4] += 22996675;
          result[5] += 2536398;
        } else {
          result[0] += 31122951;
          result[1] += 503895;
          result[2] += 1778454;
          result[3] += 3379063;
          result[4] += 2875167;
          result[5] += 3290140;
        }
      } else {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1498244;
          result[3] += 10487710;
          result[4] += 1498244;
          result[5] += 29465473;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7079616;
          result[3] += 24542670;
          result[4] += 0;
          result[5] += 11327386;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 1034931;
          result[2] += 13454114;
          result[3] += 24320899;
          result[4] += 0;
          result[5] += 4139727;
        } else {
          result[0] += 3046076;
          result[1] += 2741468;
          result[2] += 28937722;
          result[3] += 3350683;
          result[4] += 2436860;
          result[5] += 2436860;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 386933;
          result[1] += 0;
          result[2] += 33663257;
          result[3] += 7351745;
          result[4] += 0;
          result[5] += 1547735;
        } else {
          result[0] += 29734388;
          result[1] += 0;
          result[2] += 13215283;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 28633115;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41601174;
          result[3] += 1011373;
          result[4] += 0;
          result[5] += 337124;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 203552;
          result[4] += 40914143;
          result[5] += 1831976;
        } else {
          result[0] += 17179869;
          result[1] += 0;
          result[2] += 25769803;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1241646;
          result[4] += 1354523;
          result[5] += 40353503;
        } else {
          result[0] += 4294967;
          result[1] += 1252698;
          result[2] += 357913;
          result[3] += 13869165;
          result[4] += 3847574;
          result[5] += 19327352;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 6209591;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36740081;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 41409283;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1540389;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 36455003;
          result[1] += 946459;
          result[2] += 97909;
          result[3] += 946459;
          result[4] += 3655291;
          result[5] += 848549;
        } else {
          result[0] += 12693628;
          result[1] += 2434394;
          result[2] += 2956050;
          result[3] += 7824839;
          result[4] += 4347132;
          result[5] += 12693628;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1301505;
          result[3] += 19522578;
          result[4] += 0;
          result[5] += 22125589;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5425221;
          result[3] += 34359738;
          result[4] += 0;
          result[5] += 3164712;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9761289;
          result[3] += 23427094;
          result[4] += 5856773;
          result[5] += 3904515;
        } else {
          result[0] += 2221534;
          result[1] += 0;
          result[2] += 30360975;
          result[3] += 5183581;
          result[4] += 0;
          result[5] += 5183581;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42f50000))) ) ) {
          result[0] += 913822;
          result[1] += 0;
          result[2] += 29111784;
          result[3] += 8746589;
          result[4] += 261092;
          result[5] += 3916383;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 456911;
          result[1] += 0;
          result[2] += 38380558;
          result[3] += 3959898;
          result[4] += 0;
          result[5] += 152303;
        } else {
          result[0] += 311983;
          result[1] += 0;
          result[2] += 42117718;
          result[3] += 519971;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0;
          result[1] += 18407002;
          result[2] += 0;
          result[3] += 0;
          result[4] += 12271335;
          result[5] += 12271335;
        } else {
          result[0] += 503316;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40433090;
          result[5] += 2013265;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 49595;
          result[3] += 2330986;
          result[4] += 2132605;
          result[5] += 38436485;
        } else {
          result[0] += 4890309;
          result[1] += 850488;
          result[2] += 106311;
          result[3] += 16159282;
          result[4] += 2126221;
          result[5] += 18817059;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42420000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 42724215;
          result[2] += 0;
          result[3] += 0;
          result[4] += 225457;
          result[5] += 0;
        } else {
          result[0] += 5856773;
          result[1] += 17570320;
          result[2] += 1952257;
          result[3] += 3904515;
          result[4] += 13665805;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1898328;
          result[1] += 18745989;
          result[2] += 1661037;
          result[3] += 949164;
          result[4] += 18745989;
          result[5] += 949164;
        } else {
          result[0] += 28878075;
          result[1] += 762098;
          result[2] += 2612907;
          result[3] += 3973797;
          result[4] += 3293352;
          result[5] += 3429441;
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 7158278;
          result[4] += 0;
          result[5] += 35791394;
        } else {
          result[0] += 1263225;
          result[1] += 0;
          result[2] += 7579354;
          result[3] += 32843867;
          result[4] += 0;
          result[5] += 1263225;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39467267;
          result[3] += 3482405;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 159664;
          result[1] += 0;
          result[2] += 32731163;
          result[3] += 7983210;
          result[4] += 0;
          result[5] += 2075634;
        } else {
          result[0] += 33405301;
          result[1] += 0;
          result[2] += 9544371;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42700000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 55996;
          result[1] += 0;
          result[2] += 41157770;
          result[3] += 1567915;
          result[4] += 0;
          result[5] += 167990;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 495573;
          result[1] += 0;
          result[2] += 330382;
          result[3] += 0;
          result[4] += 38985087;
          result[5] += 3138629;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 949164;
          result[4] += 593227;
          result[5] += 41407281;
        } else {
          result[0] += 3001858;
          result[1] += 2463063;
          result[2] += 1924268;
          result[3] += 12161376;
          result[4] += 4079449;
          result[5] += 19319655;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 42316508;
          result[2] += 0;
          result[3] += 0;
          result[4] += 633164;
          result[5] += 0;
        } else {
          result[0] += 1367823;
          result[1] += 13678239;
          result[2] += 0;
          result[3] += 4103471;
          result[4] += 21611618;
          result[5] += 2188518;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 36628519;
          result[1] += 478357;
          result[2] += 136673;
          result[3] += 1161725;
          result[4] += 3280165;
          result[5] += 1264230;
        } else {
          result[0] += 5962425;
          result[1] += 1920103;
          result[2] += 9095224;
          result[3] += 10611095;
          result[4] += 2728567;
          result[5] += 12632256;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11232991;
          result[3] += 24448275;
          result[4] += 0;
          result[5] += 7268406;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32440710;
          result[3] += 9595139;
          result[4] += 0;
          result[5] += 913822;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 19327352;
          result[1] += 10737418;
          result[2] += 4294967;
          result[3] += 2147483;
          result[4] += 2147483;
          result[5] += 4294967;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30870077;
          result[3] += 5368709;
          result[4] += 2684354;
          result[5] += 4026531;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 23860929;
          result[3] += 4772185;
          result[4] += 0;
          result[5] += 14316557;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40785542;
          result[3] += 2053149;
          result[4] += 0;
          result[5] += 110981;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
          result[0] += 698368;
          result[1] += 2618882;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39457829;
          result[5] += 174592;
        } else {
          result[0] += 28701944;
          result[1] += 0;
          result[2] += 0;
          result[3] += 206488;
          result[4] += 7846574;
          result[5] += 6194664;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 49999;
          result[2] += 0;
          result[3] += 1199990;
          result[4] += 2849978;
          result[5] += 38849704;
        } else {
          result[0] += 1214515;
          result[1] += 441641;
          result[2] += 110410;
          result[3] += 13911719;
          result[4] += 4416418;
          result[5] += 22854967;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
          result[0] += 103743;
          result[1] += 42638443;
          result[2] += 0;
          result[3] += 0;
          result[4] += 207486;
          result[5] += 0;
        } else {
          result[0] += 14316557;
          result[1] += 14316557;
          result[2] += 0;
          result[3] += 0;
          result[4] += 14316557;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 32725245;
          result[1] += 2547262;
          result[2] += 1096737;
          result[3] += 1485903;
          result[4] += 3714757;
          result[5] += 1379767;
        } else {
          result[0] += 6062478;
          result[1] += 170774;
          result[2] += 11185700;
          result[3] += 15455051;
          result[4] += 3244706;
          result[5] += 6830961;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 42949672;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 5368709;
          result[2] += 5368709;
          result[3] += 13421772;
          result[4] += 6710886;
          result[5] += 12079595;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 940503;
          result[2] += 27901612;
          result[3] += 11599546;
          result[4] += 0;
          result[5] += 2508010;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 2134145;
          result[1] += 266768;
          result[2] += 33079251;
          result[3] += 7202740;
          result[4] += 0;
          result[5] += 266768;
        } else {
          result[0] += 142927;
          result[1] += 0;
          result[2] += 41663326;
          result[3] += 1143418;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 385198;
          result[1] += 1348196;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40253280;
          result[5] += 962997;
        } else {
          result[0] += 20268384;
          result[1] += 3860644;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4343225;
          result[5] += 14477417;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 423566;
          result[2] += 211783;
          result[3] += 2880254;
          result[4] += 1948407;
          result[5] += 37485661;
        } else {
          result[0] += 1047552;
          result[1] += 349184;
          result[2] += 1396737;
          result[3] += 29331483;
          result[4] += 0;
          result[5] += 10824714;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42480000))) ) ) {
          result[0] += 205993;
          result[1] += 41507717;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1029968;
          result[5] += 205993;
        } else {
          result[0] += 294175;
          result[1] += 17356374;
          result[2] += 0;
          result[3] += 1176703;
          result[4] += 23239891;
          result[5] += 882527;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 36304365;
          result[1] += 629555;
          result[2] += 0;
          result[3] += 1189160;
          result[4] += 3707382;
          result[5] += 1119209;
        } else {
          result[0] += 7979182;
          result[1] += 1970168;
          result[2] += 8964266;
          result[3] += 9949350;
          result[4] += 4629895;
          result[5] += 9456808;
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4224557;
          result[3] += 4224557;
          result[4] += 0;
          result[5] += 34500556;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2863311;
          result[3] += 17895697;
          result[4] += 0;
          result[5] += 22190664;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 25299122;
          result[3] += 14708792;
          result[4] += 0;
          result[5] += 2941758;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3303820;
          result[3] += 29734388;
          result[4] += 0;
          result[5] += 9911462;
        } else {
          result[0] += 0;
          result[1] += 3904515;
          result[2] += 27765445;
          result[3] += 10412041;
          result[4] += 0;
          result[5] += 867670;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426c0000))) ) ) {
          result[0] += 0;
          result[1] += 34359738;
          result[2] += 8589934;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 685086;
          result[1] += 0;
          result[2] += 39471539;
          result[3] += 2213357;
          result[4] += 52698;
          result[5] += 526989;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39584952;
          result[5] += 3364720;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1246307;
          result[1] += 95869;
          result[2] += 0;
          result[3] += 1965331;
          result[4] += 2828159;
          result[5] += 36814005;
        } else {
          result[0] += 2158845;
          result[1] += 3863198;
          result[2] += 3976821;
          result[3] += 17157144;
          result[4] += 568117;
          result[5] += 15225545;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 4294967;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38654705;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 33105685;
          result[1] += 1007140;
          result[2] += 32488;
          result[3] += 682256;
          result[4] += 5945378;
          result[5] += 2176723;
        } else {
          result[0] += 10561394;
          result[1] += 1689823;
          result[2] += 7463385;
          result[3] += 12955311;
          result[4] += 985730;
          result[5] += 9294027;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 412977;
          result[3] += 9498485;
          result[4] += 4129776;
          result[5] += 28908433;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15032385;
          result[3] += 6442450;
          result[4] += 17179869;
          result[5] += 4294967;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6888155;
          result[3] += 28362991;
          result[4] += 405185;
          result[5] += 7293340;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35370318;
          result[3] += 3789677;
          result[4] += 0;
          result[5] += 3789677;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 226050;
          result[1] += 226050;
          result[2] += 26900058;
          result[3] += 13110952;
          result[4] += 452101;
          result[5] += 2034458;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38759460;
          result[3] += 4190211;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 12271335;
          result[1] += 6135667;
          result[2] += 3067833;
          result[3] += 0;
          result[4] += 21474836;
          result[5] += 0;
        } else {
          result[0] += 897455;
          result[1] += 0;
          result[2] += 40449617;
          result[3] += 1346183;
          result[4] += 0;
          result[5] += 256415;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 519552;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39485989;
          result[5] += 2944130;
        } else {
          result[0] += 0;
          result[1] += 34896609;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8053063;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42890000))) ) ) {
          result[0] += 195670;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2396963;
          result[4] += 2592634;
          result[5] += 37764404;
        } else {
          result[0] += 5735119;
          result[1] += 1274471;
          result[2] += 1019576;
          result[3] += 15038757;
          result[4] += 4842989;
          result[5] += 15038757;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 5726623;
          result[2] += 0;
          result[3] += 2863311;
          result[4] += 34359738;
          result[5] += 0;
        } else {
          result[0] += 90041;
          result[1] += 41238889;
          result[2] += 0;
          result[3] += 450206;
          result[4] += 720329;
          result[5] += 450206;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 34708765;
          result[1] += 1292691;
          result[2] += 32317;
          result[3] += 549393;
          result[4] += 4556737;
          result[5] += 1809768;
        } else {
          result[0] += 6204918;
          result[1] += 1745133;
          result[2] += 10858608;
          result[3] += 11149463;
          result[4] += 3102459;
          result[5] += 9889089;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b60000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 5726623;
          result[2] += 8589934;
          result[3] += 8589934;
          result[4] += 11453246;
          result[5] += 8589934;
        } else {
          result[0] += 1651910;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1651910;
          result[4] += 0;
          result[5] += 39645851;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 780903;
          result[1] += 1561806;
          result[2] += 6247225;
          result[3] += 24207997;
          result[4] += 780903;
          result[5] += 9370837;
        } else {
          result[0] += 2629571;
          result[1] += 876523;
          result[2] += 26295718;
          result[3] += 8765239;
          result[4] += 0;
          result[5] += 4382619;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32712963;
          result[3] += 9791635;
          result[4] += 0;
          result[5] += 445074;
        } else {
          result[0] += 27790964;
          result[1] += 0;
          result[2] += 15158708;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 313501;
          result[1] += 0;
          result[2] += 37933652;
          result[3] += 3762015;
          result[4] += 0;
          result[5] += 940503;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42054888;
          result[3] += 745654;
          result[4] += 0;
          result[5] += 149130;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42453144;
          result[5] += 496528;
        } else {
          result[0] += 3646670;
          result[1] += 810371;
          result[2] += 1215556;
          result[3] += 4051855;
          result[4] += 18233351;
          result[5] += 14991866;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 797100;
          result[2] += 46888;
          result[3] += 2391302;
          result[4] += 2063084;
          result[5] += 37651296;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1396737;
          result[3] += 29680668;
          result[4] += 349184;
          result[5] += 11523082;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1403584;
          result[1] += 10386522;
          result[2] += 0;
          result[3] += 561433;
          result[4] += 28633115;
          result[5] += 1965017;
        } else {
          result[0] += 28482414;
          result[1] += 1280955;
          result[2] += 1130254;
          result[3] += 3893099;
          result[4] += 2988895;
          result[5] += 5174054;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 98508;
          result[1] += 42654147;
          result[2] += 0;
          result[3] += 0;
          result[4] += 197016;
          result[5] += 0;
        } else {
          result[0] += 15618062;
          result[1] += 7809031;
          result[2] += 0;
          result[3] += 19522578;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42960000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7320966;
          result[3] += 29771932;
          result[4] += 0;
          result[5] += 5856773;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16953818;
          result[3] += 1130254;
          result[4] += 2260509;
          result[5] += 22605091;
        } else {
          result[0] += 3860644;
          result[1] += 0;
          result[2] += 21716126;
          result[3] += 15442579;
          result[4] += 0;
          result[5] += 1930322;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20104102;
          result[3] += 10052051;
          result[4] += 0;
          result[5] += 12793519;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36457280;
          result[3] += 5493562;
          result[4] += 0;
          result[5] += 998829;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 15339168;
          result[1] += 0;
          result[2] += 27610504;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 528792;
          result[1] += 0;
          result[2] += 41363296;
          result[3] += 881320;
          result[4] += 0;
          result[5] += 176264;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42391884;
          result[5] += 557787;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1391458;
          result[1] += 139145;
          result[2] += 46381;
          result[3] += 1066784;
          result[4] += 2458242;
          result[5] += 37847659;
        } else {
          result[0] += 1844464;
          result[1] += 790484;
          result[2] += 1317474;
          result[3] += 18971634;
          result[4] += 2107959;
          result[5] += 17917654;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 1997659;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40952013;
          result[5] += 0;
        } else {
          result[0] += 98734;
          result[1] += 41369914;
          result[2] += 0;
          result[3] += 789879;
          result[4] += 691144;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 34239599;
          result[1] += 1535108;
          result[2] += 133487;
          result[3] += 767554;
          result[4] += 4805557;
          result[5] += 1468364;
        } else {
          result[0] += 9965446;
          result[1] += 1403584;
          result[2] += 6175769;
          result[3] += 10386522;
          result[4] += 1824659;
          result[5] += 13193690;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42d40000))) ) ) {
          result[0] += 0;
          result[1] += 2489836;
          result[2] += 2489836;
          result[3] += 9336885;
          result[4] += 3734754;
          result[5] += 24898361;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 1101273;
          result[1] += 550636;
          result[2] += 4955731;
          result[3] += 28633115;
          result[4] += 2202547;
          result[5] += 5506368;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24728599;
          result[3] += 14641933;
          result[4] += 0;
          result[5] += 3579139;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 16291255;
          result[1] += 0;
          result[2] += 19253301;
          result[3] += 2962046;
          result[4] += 0;
          result[5] += 4443069;
        } else {
          result[0] += 96951;
          result[1] += 0;
          result[2] += 39120074;
          result[3] += 3102459;
          result[4] += 96951;
          result[5] += 533235;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 36168145;
          result[1] += 2260509;
          result[2] += 2260509;
          result[3] += 0;
          result[4] += 2260509;
          result[5] += 0;
        } else {
          result[0] += 4880644;
          result[1] += 0;
          result[2] += 38069028;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 33907636;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9042036;
          result[5] += 0;
        } else {
          result[0] += 967334;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39660734;
          result[5] += 2321603;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42620000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 858993;
          result[1] += 3435973;
          result[2] += 0;
          result[3] += 0;
          result[4] += 17179869;
          result[5] += 21474836;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 7809031;
          result[2] += 0;
          result[3] += 11713547;
          result[4] += 23427094;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 154310;
          result[2] += 0;
          result[3] += 1594538;
          result[4] += 977297;
          result[5] += 40223526;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c00000))) ) ) {
          result[0] += 147087;
          result[1] += 882527;
          result[2] += 588351;
          result[3] += 23828243;
          result[4] += 2500494;
          result[5] += 15002967;
        } else {
          result[0] += 2477865;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 2477865;
          result[4] += 4129776;
          result[5] += 23126746;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 207486;
          result[1] += 42742186;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 4026531;
          result[1] += 11408506;
          result[2] += 167772;
          result[3] += 2013265;
          result[4] += 20132659;
          result[5] += 5200936;
        } else {
          result[0] += 32780615;
          result[1] += 368666;
          result[2] += 1136722;
          result[3] += 2826444;
          result[4] += 2365611;
          result[5] += 3471611;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8960723;
          result[3] += 19157408;
          result[4] += 617980;
          result[5] += 14213560;
        } else {
          result[0] += 288252;
          result[1] += 1729517;
          result[2] += 27672272;
          result[3] += 9224090;
          result[4] += 0;
          result[5] += 4035539;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 12725829;
          result[1] += 9544371;
          result[2] += 4772185;
          result[3] += 0;
          result[4] += 11135100;
          result[5] += 4772185;
        } else {
          result[0] += 702557;
          result[1] += 0;
          result[2] += 39155863;
          result[3] += 2716555;
          result[4] += 46837;
          result[5] += 327860;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42810000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42e30000))) ) ) {
          result[0] += 469395;
          result[1] += 234697;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42010882;
          result[5] += 234697;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
          result[0] += 35957865;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 6991807;
          result[5] += 0;
        } else {
          result[0] += 1160801;
          result[1] += 1160801;
          result[2] += 0;
          result[3] += 3482405;
          result[4] += 17412029;
          result[5] += 19733633;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 4090445;
          result[2] += 0;
          result[3] += 8180890;
          result[4] += 19429613;
          result[5] += 11248723;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 45162;
          result[3] += 2574270;
          result[4] += 1264553;
          result[5] += 39065685;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4156419;
          result[4] += 0;
          result[5] += 38793252;
        } else {
          result[0] += 241290;
          result[1] += 0;
          result[2] += 723870;
          result[3] += 33780641;
          result[4] += 241290;
          result[5] += 7962579;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 2431113;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38897817;
          result[5] += 1620742;
        } else {
          result[0] += 0;
          result[1] += 37347541;
          result[2] += 933688;
          result[3] += 0;
          result[4] += 4668442;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 41297762;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1651910;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42870000))) ) ) {
          result[0] += 28022042;
          result[1] += 3600963;
          result[2] += 654720;
          result[3] += 523776;
          result[4] += 8642312;
          result[5] += 1505857;
        } else {
          result[0] += 1182101;
          result[1] += 788067;
          result[2] += 5253782;
          result[3] += 16155381;
          result[4] += 5385127;
          result[5] += 14185213;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 39558909;
          result[1] += 0;
          result[2] += 1381422;
          result[3] += 1004670;
          result[4] += 376751;
          result[5] += 627919;
        } else {
          result[0] += 1483715;
          result[1] += 0;
          result[2] += 35413957;
          result[3] += 4763509;
          result[4] += 39045;
          result[5] += 1249445;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 165191;
          result[1] += 1817101;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39811043;
          result[5] += 1156337;
        } else {
          result[0] += 21257918;
          result[1] += 1735340;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3470680;
          result[5] += 16485733;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1705197;
          result[4] += 1332185;
          result[5] += 39912289;
        } else {
          result[0] += 123418;
          result[1] += 2468372;
          result[2] += 0;
          result[3] += 17031766;
          result[4] += 1357604;
          result[5] += 21968510;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 301754;
          result[1] += 42446749;
          result[2] += 0;
          result[3] += 100584;
          result[4] += 100584;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42dd0000))) ) ) {
          result[0] += 19088743;
          result[1] += 1550960;
          result[2] += 3499602;
          result[3] += 5090331;
          result[4] += 7396888;
          result[5] += 6323146;
        } else {
          result[0] += 40354939;
          result[1] += 546259;
          result[2] += 1024237;
          result[3] += 0;
          result[4] += 887672;
          result[5] += 136564;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 1590728;
          result[2] += 1590728;
          result[3] += 4772185;
          result[4] += 3181457;
          result[5] += 31814572;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33405301;
          result[3] += 4772185;
          result[4] += 0;
          result[5] += 4772185;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3303820;
          result[3] += 34139483;
          result[4] += 0;
          result[5] += 5506368;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9042036;
          result[3] += 18084072;
          result[4] += 0;
          result[5] += 15823563;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 650752;
          result[1] += 0;
          result[2] += 9761289;
          result[3] += 18871825;
          result[4] += 650752;
          result[5] += 13015052;
        } else {
          result[0] += 16015132;
          result[1] += 727960;
          result[2] += 25478619;
          result[3] += 0;
          result[4] += 727960;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 913822;
          result[1] += 609215;
          result[2] += 33049925;
          result[3] += 7919797;
          result[4] += 0;
          result[5] += 456911;
        } else {
          result[0] += 69610;
          result[1] += 0;
          result[2] += 41348631;
          result[3] += 1392209;
          result[4] += 0;
          result[5] += 139220;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 173885;
          result[1] += 173885;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42428017;
          result[5] += 173885;
        } else {
          result[0] += 1533916;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 26076587;
          result[5] += 15339168;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42850000))) ) ) {
          result[0] += 55996;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1343927;
          result[4] += 951948;
          result[5] += 40597800;
        } else {
          result[0] += 5684515;
          result[1] += 378967;
          result[2] += 694774;
          result[3] += 14842901;
          result[4] += 2968580;
          result[5] += 18379933;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 2147483;
          result[1] += 12884901;
          result[2] += 0;
          result[3] += 0;
          result[4] += 27917287;
          result[5] += 0;
        } else {
          result[0] += 104755;
          result[1] += 42530651;
          result[2] += 0;
          result[3] += 0;
          result[4] += 314265;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
          result[0] += 2399423;
          result[1] += 19195384;
          result[2] += 719826;
          result[3] += 239942;
          result[4] += 19435326;
          result[5] += 959769;
        } else {
          result[0] += 30617286;
          result[1] += 213679;
          result[2] += 3998867;
          result[3] += 3968342;
          result[4] += 1801016;
          result[5] += 2350479;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4893000;
          result[3] += 12504335;
          result[4] += 2718333;
          result[5] += 22834003;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 32212254;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38506603;
          result[3] += 1481023;
          result[4] += 0;
          result[5] += 2962046;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2386092;
          result[5] += 40563580;
        } else {
          result[0] += 933688;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 13071639;
          result[4] += 0;
          result[5] += 7469508;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1997659;
          result[1] += 0;
          result[2] += 31213425;
          result[3] += 9738588;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 132560;
          result[1] += 0;
          result[2] += 40894981;
          result[3] += 1657008;
          result[4] += 0;
          result[5] += 265121;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 0;
          result[1] += 33038209;
          result[2] += 0;
          result[3] += 0;
          result[4] += 6607641;
          result[5] += 3303820;
        } else {
          result[0] += 474582;
          result[1] += 1186455;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38797080;
          result[5] += 2491555;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 14316557;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28633115;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          result[0] += 24957242;
          result[1] += 5223608;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8706014;
          result[5] += 4062806;
        } else {
          result[0] += 0;
          result[1] += 208696;
          result[2] += 0;
          result[3] += 5467839;
          result[4] += 1293916;
          result[5] += 35979220;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 36824121;
          result[1] += 885195;
          result[2] += 318670;
          result[3] += 1097642;
          result[4] += 2513954;
          result[5] += 1310088;
        } else {
          result[0] += 6694793;
          result[1] += 720977;
          result[2] += 4222869;
          result[3] += 10608672;
          result[4] += 5046844;
          result[5] += 15655516;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3303820;
          result[5] += 39645851;
        } else {
          result[0] += 0;
          result[1] += 842150;
          result[2] += 4491469;
          result[3] += 27229531;
          result[4] += 1122867;
          result[5] += 9263654;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 1431655;
          result[1] += 4294967;
          result[2] += 11453246;
          result[3] += 2863311;
          result[4] += 2863311;
          result[5] += 20043180;
        } else {
          result[0] += 568869;
          result[1] += 284434;
          result[2] += 26736882;
          result[3] += 12515136;
          result[4] += 568869;
          result[5] += 2275479;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 40802189;
          result[1] += 0;
          result[2] += 2147483;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1267887;
          result[1] += 475457;
          result[2] += 30429288;
          result[3] += 9192180;
          result[4] += 158485;
          result[5] += 1426372;
        } else {
          result[0] += 67637;
          result[1] += 0;
          result[2] += 40852917;
          result[3] += 1961481;
          result[4] += 0;
          result[5] += 67637;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 0;
          result[1] += 179705;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41332321;
          result[5] += 1437645;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1371646;
          result[1] += 214319;
          result[2] += 0;
          result[3] += 2186061;
          result[4] += 1285918;
          result[5] += 37891727;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 557787;
          result[3] += 20266295;
          result[4] += 1859293;
          result[5] += 20266295;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 31616161;
          result[1] += 2291474;
          result[2] += 526419;
          result[3] += 990908;
          result[4] += 6193175;
          result[5] += 1331532;
        } else {
          result[0] += 7215545;
          result[1] += 1832519;
          result[2] += 8475402;
          result[3] += 13400297;
          result[4] += 4352233;
          result[5] += 7673674;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 106048;
          result[1] += 42631527;
          result[2] += 0;
          result[3] += 106048;
          result[4] += 106048;
          result[5] += 0;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2112278;
          result[3] += 3520464;
          result[4] += 4224557;
          result[5] += 33092370;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 30678337;
          result[4] += 0;
          result[5] += 12271335;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13293946;
          result[3] += 3067833;
          result[4] += 0;
          result[5] += 26587892;
        } else {
          result[0] += 0;
          result[1] += 987348;
          result[2] += 22709022;
          result[3] += 14069720;
          result[4] += 1481023;
          result[5] += 3702558;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 17179869;
          result[1] += 0;
          result[2] += 8589934;
          result[3] += 0;
          result[4] += 17179869;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 21474836;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 51191;
          result[1] += 0;
          result[2] += 39673416;
          result[3] += 2866724;
          result[4] += 0;
          result[5] += 358340;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
          result[0] += 359411;
          result[1] += 179705;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39714969;
          result[5] += 2695586;
        } else {
          result[0] += 0;
          result[1] += 7669584;
          result[2] += 0;
          result[3] += 3067833;
          result[4] += 13805252;
          result[5] += 18407002;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1070593;
          result[4] += 1196545;
          result[5] += 40682534;
        } else {
          result[0] += 3310703;
          result[1] += 447392;
          result[2] += 0;
          result[3] += 15390299;
          result[4] += 1879048;
          result[5] += 21922228;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 3904515;
          result[1] += 15618062;
          result[2] += 0;
          result[3] += 3904515;
          result[4] += 19522578;
          result[5] += 0;
        } else {
          result[0] += 205993;
          result[1] += 42640682;
          result[2] += 0;
          result[3] += 0;
          result[4] += 102996;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 32732300;
          result[1] += 2906138;
          result[2] += 397682;
          result[3] += 856546;
          result[4] += 5078095;
          result[5] += 978909;
        } else {
          result[0] += 7075524;
          result[1] += 1365452;
          result[2] += 9682296;
          result[3] += 11047748;
          result[4] += 3103300;
          result[5] += 10675352;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3482405;
          result[3] += 0;
          result[4] += 1160801;
          result[5] += 38306465;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16361780;
          result[3] += 18407002;
          result[4] += 0;
          result[5] += 8180890;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4601750;
          result[3] += 28377462;
          result[4] += 0;
          result[5] += 9970459;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14810232;
          result[3] += 5924092;
          result[4] += 0;
          result[5] += 22215348;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 842150;
          result[2] += 21053761;
          result[3] += 18106234;
          result[4] += 0;
          result[5] += 2947526;
        } else {
          result[0] += 1573248;
          result[1] += 1101273;
          result[2] += 34611458;
          result[3] += 4090445;
          result[4] += 629299;
          result[5] += 943948;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 32212254;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 128399;
          result[1] += 0;
          result[2] += 41216278;
          result[3] += 1348196;
          result[4] += 0;
          result[5] += 256799;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 376751;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40124036;
          result[5] += 2448884;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 221105;
          result[3] += 1768841;
          result[4] += 1603012;
          result[5] += 39356714;
        } else {
          result[0] += 4479413;
          result[1] += 1580969;
          result[2] += 1580969;
          result[3] += 15019210;
          result[4] += 2547117;
          result[5] += 17741991;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42757504;
          result[2] += 0;
          result[3] += 0;
          result[4] += 192168;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 32521690;
          result[1] += 773589;
          result[2] += 61887;
          result[3] += 1732839;
          result[4] += 6405318;
          result[5] += 1454347;
        } else {
          result[0] += 7790394;
          result[1] += 1742588;
          result[2] += 10660539;
          result[3] += 11070560;
          result[4] += 3177660;
          result[5] += 8507930;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42e80000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42e50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5052902;
          result[3] += 0;
          result[4] += 2526451;
          result[5] += 35370318;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 0;
          result[4] += 0;
          result[5] += 10737418;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 27790964;
          result[1] += 0;
          result[2] += 12632256;
          result[3] += 0;
          result[4] += 0;
          result[5] += 2526451;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 1867377;
          result[2] += 11826721;
          result[3] += 24275902;
          result[4] += 0;
          result[5] += 4979672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31138512;
          result[3] += 8589934;
          result[4] += 0;
          result[5] += 3221225;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33051805;
          result[3] += 9190876;
          result[4] += 0;
          result[5] += 706990;
        } else {
          result[0] += 333978;
          result[1] += 0;
          result[2] += 40344638;
          result[3] += 2271055;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42161605;
          result[5] += 788067;
        } else {
          result[0] += 20259279;
          result[1] += 0;
          result[2] += 810371;
          result[3] += 0;
          result[4] += 14316557;
          result[5] += 7563464;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 59487;
          result[2] += 0;
          result[3] += 1308715;
          result[4] += 1606151;
          result[5] += 39975318;
        } else {
          result[0] += 159961;
          result[1] += 719826;
          result[2] += 479884;
          result[3] += 15356307;
          result[4] += 3759096;
          result[5] += 22474596;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 795364;
          result[1] += 5567550;
          result[2] += 0;
          result[3] += 0;
          result[4] += 34996029;
          result[5] += 1590728;
        } else {
          result[0] += 89852;
          result[1] += 42140997;
          result[2] += 0;
          result[3] += 0;
          result[4] += 718822;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 36798942;
          result[1] += 1687057;
          result[2] += 70294;
          result[3] += 562352;
          result[4] += 3268673;
          result[5] += 562352;
        } else {
          result[0] += 7524875;
          result[1] += 463069;
          result[2] += 11808265;
          result[3] += 10882127;
          result[4] += 1157673;
          result[5] += 11113662;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 14665741;
          result[4] += 0;
          result[5] += 28283930;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15550743;
          result[3] += 22215348;
          result[4] += 0;
          result[5] += 5183581;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 1193046;
          result[1] += 0;
          result[2] += 20281790;
          result[3] += 20281790;
          result[4] += 0;
          result[5] += 1193046;
        } else {
          result[0] += 2099761;
          result[1] += 0;
          result[2] += 35505062;
          result[3] += 4008636;
          result[4] += 0;
          result[5] += 1336212;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15618062;
          result[3] += 27331610;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36168145;
          result[3] += 6781527;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42dc0000))) ) ) {
          result[0] += 94811;
          result[1] += 0;
          result[2] += 40579381;
          result[3] += 2275479;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x423c0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x429c0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42980000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42761297;
          result[2] += 0;
          result[3] += 0;
          result[4] += 188375;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
          result[0] += 12733822;
          result[1] += 1726620;
          result[2] += 0;
          result[3] += 107913;
          result[4] += 25683472;
          result[5] += 2697843;
        } else {
          result[0] += 333913;
          result[1] += 292174;
          result[2] += 0;
          result[3] += 4340880;
          result[4] += 3046964;
          result[5] += 34935739;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 10492768;
          result[1] += 924233;
          result[2] += 4403700;
          result[3] += 13374201;
          result[4] += 3588200;
          result[5] += 10166568;
        } else {
          result[0] += 33722204;
          result[1] += 2264924;
          result[2] += 1887436;
          result[3] += 1132462;
          result[4] += 3439329;
          result[5] += 503316;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2321603;
          result[3] += 2321603;
          result[4] += 4643207;
          result[5] += 33663257;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33038209;
          result[3] += 0;
          result[4] += 0;
          result[5] += 9911462;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3817748;
          result[3] += 24815366;
          result[4] += 0;
          result[5] += 14316557;
        } else {
          result[0] += 4521018;
          result[1] += 2260509;
          result[2] += 23735345;
          result[3] += 10850443;
          result[4] += 452101;
          result[5] += 1130254;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 28633115;
          result[4] += 0;
          result[5] += 14316557;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34133687;
          result[3] += 7685730;
          result[4] += 0;
          result[5] += 1130254;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 447392;
          result[1] += 0;
          result[2] += 36238786;
          result[3] += 6263493;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42155778;
          result[3] += 793894;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x426a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40047668;
          result[5] += 2902004;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1558029;
          result[4] += 2129306;
          result[5] += 39262337;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42820000))) ) ) {
          result[0] += 9689865;
          result[1] += 7332870;
          result[2] += 0;
          result[3] += 261888;
          result[4] += 22260501;
          result[5] += 3404547;
        } else {
          result[0] += 0;
          result[1] += 1059296;
          result[2] += 0;
          result[3] += 19259943;
          result[4] += 1444495;
          result[5] += 21185937;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 31710803;
          result[1] += 2483376;
          result[2] += 31838;
          result[3] += 955144;
          result[4] += 6654174;
          result[5] += 1114335;
        } else {
          result[0] += 7988224;
          result[1] += 726202;
          result[2] += 9336885;
          result[3] += 10893032;
          result[4] += 2074863;
          result[5] += 11930464;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42780000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3904515;
          result[3] += 11713547;
          result[4] += 0;
          result[5] += 27331610;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6299285;
          result[3] += 33214413;
          result[4] += 0;
          result[5] += 3435973;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12884901;
          result[3] += 30064771;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34359738;
          result[3] += 6012954;
          result[4] += 0;
          result[5] += 2576980;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 2239082;
          result[1] += 0;
          result[2] += 31143601;
          result[3] += 7938565;
          result[4] += 0;
          result[5] += 1628423;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 25769803;
          result[3] += 12884901;
          result[4] += 0;
          result[5] += 4294967;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41941464;
          result[3] += 1008208;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          result[0] += 353495;
          result[1] += 3888447;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38177487;
          result[5] += 530242;
        } else {
          result[0] += 14208914;
          result[1] += 1291719;
          result[2] += 1937579;
          result[3] += 0;
          result[4] += 12271335;
          result[5] += 13240124;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 52123;
          result[2] += 104246;
          result[3] += 2084935;
          result[4] += 2554046;
          result[5] += 38154321;
        } else {
          result[0] += 1133569;
          result[1] += 755712;
          result[2] += 377856;
          result[3] += 22923285;
          result[4] += 1259521;
          result[5] += 16499727;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 33391045;
          result[1] += 2662302;
          result[2] += 545290;
          result[3] += 1090581;
          result[4] += 4458554;
          result[5] += 801898;
        } else {
          result[0] += 5951455;
          result[1] += 1785436;
          result[2] += 6744983;
          result[3] += 9026374;
          result[4] += 3769255;
          result[5] += 15672167;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 11453246;
          result[4] += 0;
          result[5] += 31496426;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14195230;
          result[3] += 23658718;
          result[4] += 0;
          result[5] += 5095723;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 10737418;
          result[1] += 0;
          result[2] += 0;
          result[3] += 21474836;
          result[4] += 10737418;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12884901;
          result[3] += 30064771;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1188918;
          result[1] += 0;
          result[2] += 34330015;
          result[3] += 6093206;
          result[4] += 0;
          result[5] += 1337533;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42211475;
          result[3] += 738197;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 753503;
          result[2] += 188375;
          result[3] += 376751;
          result[4] += 39182157;
          result[5] += 2448884;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 36814005;
          result[4] += 6135667;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 115146;
          result[3] += 1151465;
          result[4] += 1439332;
          result[5] += 40243728;
        } else {
          result[0] += 2462083;
          result[1] += 1367823;
          result[2] += 911882;
          result[3] += 14042992;
          result[4] += 3921095;
          result[5] += 20243794;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 11166914;
          result[2] += 0;
          result[3] += 0;
          result[4] += 31782757;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42586462;
          result[2] += 0;
          result[3] += 0;
          result[4] += 363210;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 34934986;
          result[1] += 1098787;
          result[2] += 549393;
          result[3] += 1098787;
          result[4] += 3684170;
          result[5] += 1583547;
        } else {
          result[0] += 6066882;
          result[1] += 1059296;
          result[2] += 5970582;
          result[3] += 10785568;
          result[4] += 5007585;
          result[5] += 14059758;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6135667;
          result[3] += 7669584;
          result[4] += 0;
          result[5] += 29144420;
        } else {
          result[0] += 3506095;
          result[1] += 0;
          result[2] += 14024383;
          result[3] += 19283526;
          result[4] += 0;
          result[5] += 6135667;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17772278;
          result[3] += 25177394;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 766958;
          result[1] += 0;
          result[2] += 32979213;
          result[3] += 7516192;
          result[4] += 0;
          result[5] += 1687308;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c20000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 42949672;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34569248;
          result[3] += 8380423;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 283496;
          result[1] += 0;
          result[2] += 41461317;
          result[3] += 921362;
          result[4] += 0;
          result[5] += 283496;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0;
          result[1] += 37993941;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4955731;
          result[5] += 0;
        } else {
          result[0] += 160860;
          result[1] += 804300;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40215049;
          result[5] += 1769462;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42620000))) ) ) {
          result[0] += 38264254;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4685418;
          result[5] += 0;
        } else {
          result[0] += 252857;
          result[1] += 216735;
          result[2] += 758572;
          result[3] += 6791033;
          result[4] += 2022860;
          result[5] += 32907613;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 655720;
          result[1] += 10491523;
          result[2] += 1639300;
          result[3] += 655720;
          result[4] += 26556668;
          result[5] += 2950740;
        } else {
          result[0] += 208493;
          result[1] += 42741179;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 35041590;
          result[1] += 1933086;
          result[2] += 70294;
          result[3] += 1194999;
          result[4] += 3198379;
          result[5] += 1511322;
        } else {
          result[0] += 10292673;
          result[1] += 1143630;
          result[2] += 8005412;
          result[3] += 13469424;
          result[4] += 1524840;
          result[5] += 8513692;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2260509;
          result[4] += 6781527;
          result[5] += 33907636;
        } else {
          result[0] += 0;
          result[1] += 4241943;
          result[2] += 3181457;
          result[3] += 23330686;
          result[4] += 530242;
          result[5] += 11665343;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 24542670;
          result[2] += 2045222;
          result[3] += 0;
          result[4] += 2045222;
          result[5] += 14316557;
        } else {
          result[0] += 3014012;
          result[1] += 0;
          result[2] += 27126109;
          result[3] += 3014012;
          result[4] += 753503;
          result[5] += 9042036;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 933688;
          result[1] += 0;
          result[2] += 9336885;
          result[3] += 27076967;
          result[4] += 0;
          result[5] += 5602131;
        } else {
          result[0] += 1771120;
          result[1] += 0;
          result[2] += 28337928;
          result[3] += 11955063;
          result[4] += 0;
          result[5] += 885560;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 3427908;
          result[1] += 0;
          result[2] += 31657740;
          result[3] += 6250891;
          result[4] += 0;
          result[5] += 1613133;
        } else {
          result[0] += 67850;
          result[1] += 0;
          result[2] += 40710590;
          result[3] += 1967678;
          result[4] += 0;
          result[5] += 203552;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 657392;
          result[1] += 438261;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40758363;
          result[5] += 1095654;
        } else {
          result[0] += 23718476;
          result[1] += 5769359;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8333518;
          result[5] += 5128319;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 722602;
          result[2] += 0;
          result[3] += 2122644;
          result[4] += 2619433;
          result[5] += 37484993;
        } else {
          result[0] += 138995;
          result[1] += 277991;
          result[2] += 1945939;
          result[3] += 19876385;
          result[4] += 2084935;
          result[5] += 18625424;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 2147483;
          result[1] += 6084537;
          result[2] += 0;
          result[3] += 1789569;
          result[4] += 31496426;
          result[5] += 1431655;
        } else {
          result[0] += 0;
          result[1] += 42166990;
          result[2] += 0;
          result[3] += 0;
          result[4] += 782681;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
          result[0] += 6053309;
          result[1] += 2017769;
          result[2] += 288252;
          result[3] += 11818366;
          result[4] += 6629815;
          result[5] += 16142158;
        } else {
          result[0] += 32722132;
          result[1] += 1229704;
          result[2] += 2309444;
          result[3] += 2459408;
          result[4] += 2909300;
          result[5] += 1319682;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 7158278;
          result[2] += 0;
          result[3] += 21474836;
          result[4] += 7158278;
          result[5] += 7158278;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1908874;
          result[3] += 2863311;
          result[4] += 954437;
          result[5] += 37223049;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4234474;
          result[3] += 27221623;
          result[4] += 0;
          result[5] += 11493574;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35140641;
          result[3] += 0;
          result[4] += 0;
          result[5] += 7809031;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 4772185;
          result[1] += 7158278;
          result[2] += 7158278;
          result[3] += 0;
          result[4] += 21474836;
          result[5] += 2386092;
        } else {
          result[0] += 1110767;
          result[1] += 370255;
          result[2] += 21845092;
          result[3] += 12958953;
          result[4] += 0;
          result[5] += 6664604;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30820367;
          result[3] += 11333941;
          result[4] += 0;
          result[5] += 795364;
        } else {
          result[0] += 505290;
          result[1] += 0;
          result[2] += 39981092;
          result[3] += 2210644;
          result[4] += 0;
          result[5] += 252645;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
          result[0] += 376751;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42007794;
          result[5] += 565127;
        } else {
          result[0] += 21222191;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 13895482;
          result[5] += 7831999;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 319498;
          result[2] += 0;
          result[3] += 2190844;
          result[4] += 3058053;
          result[5] += 37381277;
        } else {
          result[0] += 313501;
          result[1] += 783753;
          result[2] += 940503;
          result[3] += 22885592;
          result[4] += 2351259;
          result[5] += 15675063;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
          result[0] += 96516;
          result[1] += 42177543;
          result[2] += 0;
          result[3] += 0;
          result[4] += 675612;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 13854733;
          result[2] += 0;
          result[3] += 923648;
          result[4] += 28171290;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 37865524;
          result[1] += 1290007;
          result[2] += 0;
          result[3] += 720886;
          result[4] += 2693839;
          result[5] += 379414;
        } else {
          result[0] += 12653223;
          result[1] += 534643;
          result[2] += 10514650;
          result[3] += 7306790;
          result[4] += 2138572;
          result[5] += 9801792;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 1067072;
          result[2] += 2400913;
          result[3] += 21341452;
          result[4] += 1867377;
          result[5] += 16272857;
        } else {
          result[0] += 4294967;
          result[1] += 0;
          result[2] += 2147483;
          result[3] += 0;
          result[4] += 30064771;
          result[5] += 6442450;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 795364;
          result[2] += 19088743;
          result[3] += 0;
          result[4] += 2386092;
          result[5] += 20679472;
        } else {
          result[0] += 8589934;
          result[1] += 954437;
          result[2] += 27678678;
          result[3] += 2863311;
          result[4] += 0;
          result[5] += 2863311;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42df0000))) ) ) {
          result[0] += 11302545;
          result[1] += 0;
          result[2] += 27126109;
          result[3] += 3390763;
          result[4] += 1130254;
          result[5] += 0;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13983614;
          result[3] += 12984784;
          result[4] += 0;
          result[5] += 15981273;
        } else {
          result[0] += 185127;
          result[1] += 0;
          result[2] += 38506603;
          result[3] += 4119095;
          result[4] += 0;
          result[5] += 138845;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 497486;
          result[3] += 0;
          result[4] += 41954699;
          result[5] += 497486;
        } else {
          result[0] += 0;
          result[1] += 4772185;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9544371;
          result[5] += 28633115;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1580277;
          result[4] += 1636715;
          result[5] += 39732680;
        } else {
          result[0] += 5196757;
          result[1] += 305691;
          result[2] += 229268;
          result[3] += 14520352;
          result[4] += 2292687;
          result[5] += 20404915;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 42551068;
          result[2] += 0;
          result[3] += 0;
          result[4] += 398604;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 18812666;
          result[2] += 0;
          result[3] += 354955;
          result[4] += 22717182;
          result[5] += 1064867;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 36865435;
          result[1] += 1440056;
          result[2] += 252009;
          result[3] += 828032;
          result[4] += 2844110;
          result[5] += 720028;
        } else {
          result[0] += 9680719;
          result[1] += 136348;
          result[2] += 6681060;
          result[3] += 10635157;
          result[4] += 3954096;
          result[5] += 11862290;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4190211;
          result[3] += 30728221;
          result[4] += 349184;
          result[5] += 7682055;
        } else {
          result[0] += 3099460;
          result[1] += 0;
          result[2] += 21696226;
          result[3] += 12397843;
          result[4] += 0;
          result[5] += 5756141;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38819896;
          result[3] += 2477865;
          result[4] += 0;
          result[5] += 1651910;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11135100;
          result[3] += 11135100;
          result[4] += 0;
          result[5] += 20679472;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36725082;
          result[3] += 3734754;
          result[4] += 0;
          result[5] += 2489836;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31101487;
          result[3] += 11848185;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 554189;
          result[1] += 0;
          result[2] += 40400402;
          result[3] += 1773405;
          result[4] += 0;
          result[5] += 221675;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 1976763;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39175852;
          result[5] += 1797057;
        } else {
          result[0] += 727960;
          result[1] += 2911842;
          result[2] += 0;
          result[3] += 2183881;
          result[4] += 16015132;
          result[5] += 21110856;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 553475;
          result[1] += 55347;
          result[2] += 0;
          result[3] += 2269248;
          result[4] += 1881815;
          result[5] += 38189786;
        } else {
          result[0] += 3689509;
          result[1] += 189205;
          result[2] += 2270467;
          result[3] += 15325654;
          result[4] += 3973317;
          result[5] += 17501518;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 8589934;
          result[2] += 0;
          result[3] += 0;
          result[4] += 34359738;
          result[5] += 0;
        } else {
          result[0] += 90995;
          result[1] += 41857732;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1000945;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 33350322;
          result[1] += 1385473;
          result[2] += 0;
          result[3] += 1682360;
          result[4] += 4024470;
          result[5] += 2507046;
        } else {
          result[0] += 10114428;
          result[1] += 732929;
          result[2] += 10407599;
          result[3] += 10847357;
          result[4] += 4690749;
          result[5] += 6156608;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28633115;
          result[5] += 14316557;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2147483;
          result[3] += 1073741;
          result[4] += 0;
          result[5] += 39728447;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3666435;
          result[3] += 24617495;
          result[4] += 1047552;
          result[5] += 13618188;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24338148;
          result[3] += 2863311;
          result[4] += 0;
          result[5] += 15748213;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 1952257;
          result[1] += 4555268;
          result[2] += 13015052;
          result[3] += 11062794;
          result[4] += 0;
          result[5] += 12364299;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30388919;
          result[3] += 11345196;
          result[4] += 0;
          result[5] += 1215556;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15032385;
          result[3] += 0;
          result[4] += 0;
          result[5] += 27917287;
        } else {
          result[0] += 758828;
          result[1] += 303531;
          result[2] += 39357886;
          result[3] += 2478838;
          result[4] += 0;
          result[5] += 50588;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 2358021;
          result[1] += 336860;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36212469;
          result[5] += 4042322;
        } else {
          result[0] += 25038745;
          result[1] += 731058;
          result[2] += 0;
          result[3] += 182764;
          result[4] += 13890106;
          result[5] += 3106997;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 15728049;
          result[2] += 604924;
          result[3] += 2419699;
          result[4] += 16937899;
          result[5] += 7259099;
        } else {
          result[0] += 158339;
          result[1] += 118754;
          result[2] += 593774;
          result[3] += 5106458;
          result[4] += 1900077;
          result[5] += 35072267;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42580000))) ) ) {
          result[0] += 0;
          result[1] += 42537685;
          result[2] += 0;
          result[3] += 0;
          result[4] += 411987;
          result[5] += 0;
        } else {
          result[0] += 1974697;
          result[1] += 11354511;
          result[2] += 0;
          result[3] += 5430418;
          result[4] += 23202696;
          result[5] += 987348;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 38554822;
          result[1] += 559344;
          result[2] += 279672;
          result[3] += 1038782;
          result[4] += 2037612;
          result[5] += 479438;
        } else {
          result[0] += 6124865;
          result[1] += 2344084;
          result[2] += 8317718;
          result[3] += 14064505;
          result[4] += 2949009;
          result[5] += 9149490;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d50000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2202547;
          result[3] += 0;
          result[4] += 15417831;
          result[5] += 25329294;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2996488;
          result[3] += 26968399;
          result[4] += 998829;
          result[5] += 11985955;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 6135667;
          result[4] += 0;
          result[5] += 36814005;
        } else {
          result[0] += 1385473;
          result[1] += 0;
          result[2] += 34636833;
          result[3] += 0;
          result[4] += 1385473;
          result[5] += 5541893;
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 704092;
          result[2] += 23235068;
          result[3] += 17602324;
          result[4] += 0;
          result[5] += 1408185;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34045472;
          result[3] += 8118535;
          result[4] += 0;
          result[5] += 785664;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 31236125;
          result[1] += 0;
          result[2] += 11713547;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 126882;
          result[1] += 0;
          result[2] += 40919555;
          result[3] += 1459146;
          result[4] += 0;
          result[5] += 444088;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 39645851;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 3303820;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41075505;
          result[5] += 1874167;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1880092;
          result[1] += 292458;
          result[2] += 41779;
          result[3] += 3091707;
          result[4] += 3175267;
          result[5] += 34468365;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 940503;
          result[3] += 31977128;
          result[4] += 313501;
          result[5] += 9718539;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 10518287;
          result[2] += 0;
          result[3] += 0;
          result[4] += 32431385;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 41927061;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1022611;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
          result[0] += 11048647;
          result[1] += 2801065;
          result[2] += 466844;
          result[3] += 9181270;
          result[4] += 5135286;
          result[5] += 14316557;
        } else {
          result[0] += 34432646;
          result[1] += 1159906;
          result[2] += 629663;
          result[3] += 1159906;
          result[4] += 4639625;
          result[5] += 927925;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 780903;
          result[1] += 0;
          result[2] += 9370837;
          result[3] += 9370837;
          result[4] += 2342709;
          result[5] += 21084384;
        } else {
          result[0] += 833974;
          result[1] += 0;
          result[2] += 2501922;
          result[3] += 29189098;
          result[4] += 0;
          result[5] += 10424677;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5368709;
          result[3] += 29527900;
          result[4] += 0;
          result[5] += 8053063;
        } else {
          result[0] += 1064867;
          result[1] += 0;
          result[2] += 30526213;
          result[3] += 8873899;
          result[4] += 354955;
          result[5] += 2129735;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5602131;
          result[3] += 18673770;
          result[4] += 0;
          result[5] += 18673770;
        } else {
          result[0] += 1817469;
          result[1] += 286968;
          result[2] += 35297169;
          result[3] += 4878470;
          result[4] += 0;
          result[5] += 669594;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 0;
          result[4] += 0;
          result[5] += 10737418;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42168769;
          result[3] += 780903;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42168769;
          result[5] += 780903;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 715827;
          result[4] += 32212254;
          result[5] += 10021590;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 228455;
          result[3] += 1256506;
          result[4] += 913822;
          result[5] += 40550888;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42660000))) ) ) {
          result[0] += 39695909;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3253763;
          result[5] += 0;
        } else {
          result[0] += 364598;
          result[1] += 656276;
          result[2] += 218758;
          result[3] += 15458965;
          result[4] += 3864741;
          result[5] += 22386332;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 2510045;
          result[1] += 17570320;
          result[2] += 0;
          result[3] += 1115575;
          result[4] += 21474836;
          result[5] += 278893;
        } else {
          result[0] += 219691;
          result[1] += 42510290;
          result[2] += 0;
          result[3] += 0;
          result[4] += 219691;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 37810395;
          result[1] += 1211401;
          result[2] += 110127;
          result[3] += 513927;
          result[4] += 2606347;
          result[5] += 697473;
        } else {
          result[0] += 18004155;
          result[1] += 650752;
          result[2] += 4989103;
          result[3] += 11062794;
          result[4] += 3253763;
          result[5] += 4989103;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 805306;
          result[1] += 3221225;
          result[2] += 4563402;
          result[3] += 18522046;
          result[4] += 2684354;
          result[5] += 13153337;
        } else {
          result[0] += 1579032;
          result[1] += 0;
          result[2] += 24948707;
          result[3] += 8842579;
          result[4] += 1263225;
          result[5] += 6316128;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 2332729;
          result[1] += 823316;
          result[2] += 29913829;
          result[3] += 8095944;
          result[4] += 0;
          result[5] += 1783852;
        } else {
          result[0] += 209851;
          result[1] += 0;
          result[2] += 41340808;
          result[3] += 1399012;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1197203;
          result[1] += 748252;
          result[2] += 149650;
          result[3] += 598601;
          result[4] += 36963655;
          result[5] += 3292309;
        } else {
          result[0] += 28633115;
          result[1] += 0;
          result[2] += 0;
          result[3] += 477218;
          result[4] += 6919669;
          result[5] += 6919669;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 476556;
          result[3] += 1370100;
          result[4] += 2084935;
          result[5] += 39018080;
        } else {
          result[0] += 312740;
          result[1] += 625480;
          result[2] += 208493;
          result[3] += 13239340;
          result[4] += 6463300;
          result[5] += 22100317;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 25197141;
          result[2] += 0;
          result[3] += 0;
          result[4] += 17752531;
          result[5] += 0;
        } else {
          result[0] += 105787;
          result[1] += 42526523;
          result[2] += 0;
          result[3] += 0;
          result[4] += 317362;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 35424797;
          result[1] += 1504975;
          result[2] += 463069;
          result[3] += 1427796;
          result[4] += 2392524;
          result[5] += 1736509;
        } else {
          result[0] += 7753092;
          result[1] += 492259;
          result[2] += 7876157;
          result[3] += 16367640;
          result[4] += 1722909;
          result[5] += 8737612;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3446578;
          result[3] += 17498014;
          result[4] += 795364;
          result[5] += 21209715;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 0;
          result[4] += 0;
          result[5] += 21474836;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 0;
          result[4] += 9203501;
          result[5] += 23008753;
        } else {
          result[0] += 302462;
          result[1] += 0;
          result[2] += 27221623;
          result[3] += 14820661;
          result[4] += 0;
          result[5] += 604924;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 6135667;
          result[2] += 0;
          result[3] += 0;
          result[4] += 30678337;
          result[5] += 6135667;
        } else {
          result[0] += 658593;
          result[1] += 0;
          result[2] += 40127131;
          result[3] += 2022821;
          result[4] += 0;
          result[5] += 141127;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 218018;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42513635;
          result[5] += 218018;
        } else {
          result[0] += 0;
          result[1] += 14316557;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28633115;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 11713547;
          result[5] += 31236125;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 795364;
          result[4] += 33405301;
          result[5] += 8749007;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42660000))) ) ) {
          result[0] += 4772185;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28633115;
          result[5] += 9544371;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1933037;
          result[4] += 604074;
          result[5] += 40412561;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 5102931;
          result[1] += 2126221;
          result[2] += 1133984;
          result[3] += 4961183;
          result[4] += 2976710;
          result[5] += 26648641;
        } else {
          result[0] += 0;
          result[1] += 1145324;
          result[2] += 1527099;
          result[3] += 25578916;
          result[4] += 0;
          result[5] += 14698332;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 1472560;
          result[1] += 7853654;
          result[2] += 490853;
          result[3] += 245426;
          result[4] += 31660044;
          result[5] += 1227133;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
          result[0] += 8269812;
          result[1] += 4001522;
          result[2] += 800304;
          result[3] += 11204262;
          result[4] += 8003044;
          result[5] += 10670726;
        } else {
          result[0] += 34917353;
          result[1] += 1261273;
          result[2] += 1327656;
          result[3] += 1394038;
          result[4] += 2887651;
          result[5] += 1161699;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1447741;
          result[1] += 2895483;
          result[2] += 3860644;
          result[3] += 482580;
          result[4] += 3860644;
          result[5] += 30402577;
        } else {
          result[0] += 829945;
          result[1] += 622459;
          result[2] += 15146503;
          result[3] += 17221366;
          result[4] += 1037431;
          result[5] += 8091967;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1382500;
          result[1] += 0;
          result[2] += 34193838;
          result[3] += 6543834;
          result[4] += 0;
          result[5] += 829500;
        } else {
          result[0] += 163930;
          result[1] += 0;
          result[2] += 41884127;
          result[3] += 737685;
          result[4] += 0;
          result[5] += 163930;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 419021;
          result[1] += 419021;
          result[2] += 0;
          result[3] += 209510;
          result[4] += 40226035;
          result[5] += 1676084;
        } else {
          result[0] += 1342177;
          result[1] += 1342177;
          result[2] += 4026531;
          result[3] += 2684354;
          result[4] += 18790481;
          result[5] += 14763950;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 663548;
          result[2] += 0;
          result[3] += 1990644;
          result[4] += 663548;
          result[5] += 39631931;
        } else {
          result[0] += 3741260;
          result[1] += 972727;
          result[2] += 224475;
          result[3] += 14067140;
          result[4] += 3292309;
          result[5] += 20651759;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 12271335;
          result[2] += 0;
          result[3] += 0;
          result[4] += 30678337;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42852501;
          result[2] += 0;
          result[3] += 0;
          result[4] += 97171;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 33710691;
          result[1] += 662292;
          result[2] += 231802;
          result[3] += 794751;
          result[4] += 6059976;
          result[5] += 1490158;
        } else {
          result[0] += 9554110;
          result[1] += 1753047;
          result[2] += 8677586;
          result[3] += 10781244;
          result[4] += 2717224;
          result[5] += 9466458;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2526451;
          result[3] += 39159995;
          result[4] += 0;
          result[5] += 1263225;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12725829;
          result[3] += 11135100;
          result[4] += 0;
          result[5] += 19088743;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9911462;
          result[3] += 9911462;
          result[4] += 0;
          result[5] += 23126746;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37427572;
          result[3] += 4294967;
          result[4] += 0;
          result[5] += 1227133;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1768515;
          result[1] += 0;
          result[2] += 30317416;
          result[3] += 8084644;
          result[4] += 0;
          result[5] += 2779096;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39581071;
          result[3] += 3368601;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37382122;
          result[3] += 4772185;
          result[4] += 0;
          result[5] += 795364;
        } else {
          result[0] += 275907;
          result[1] += 0;
          result[2] += 42397857;
          result[3] += 183938;
          result[4] += 0;
          result[5] += 91969;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 388684;
          result[3] += 0;
          result[4] += 41200591;
          result[5] += 1360396;
        } else {
          result[0] += 0;
          result[1] += 27331610;
          result[2] += 0;
          result[3] += 3904515;
          result[4] += 7809031;
          result[5] += 3904515;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1087333;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2075818;
          result[4] += 2174666;
          result[5] += 37611853;
        } else {
          result[0] += 3873445;
          result[1] += 1594948;
          result[2] += 113924;
          result[3] += 18000128;
          result[4] += 1367098;
          result[5] += 18000128;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 32112763;
          result[1] += 2112278;
          result[2] += 551029;
          result[3] += 1071445;
          result[4] += 6551126;
          result[5] += 551029;
        } else {
          result[0] += 5823684;
          result[1] += 727960;
          result[2] += 8917516;
          result[3] += 12557319;
          result[4] += 3821792;
          result[5] += 11101398;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 41992873;
          result[2] += 0;
          result[3] += 0;
          result[4] += 744177;
          result[5] += 212622;
        } else {
          result[0] += 42949672;
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
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c20000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42660000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8589934;
          result[3] += 0;
          result[4] += 30064771;
          result[5] += 4294967;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3579139;
          result[3] += 6646973;
          result[4] += 1022611;
          result[5] += 31700949;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 32212254;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39370533;
          result[3] += 0;
          result[4] += 0;
          result[5] += 3579139;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42780000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 7158278;
          result[1] += 0;
          result[2] += 0;
          result[3] += 7158278;
          result[4] += 0;
          result[5] += 28633115;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1002159;
          result[1] += 0;
          result[2] += 30494267;
          result[3] += 10021590;
          result[4] += 0;
          result[5] += 1431655;
        } else {
          result[0] += 134849;
          result[1] += 0;
          result[2] += 41398899;
          result[3] += 1213648;
          result[4] += 0;
          result[5] += 202274;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42420000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 26843545;
          result[5] += 16106127;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42094953;
          result[5] += 854719;
        } else {
          result[0] += 0;
          result[1] += 28633115;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 14316557;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 211054;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1266329;
          result[4] += 1688439;
          result[5] += 39783849;
        } else {
          result[0] += 8468949;
          result[1] += 1209849;
          result[2] += 604924;
          result[3] += 1814774;
          result[4] += 11493574;
          result[5] += 19357599;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 5788868;
          result[1] += 186737;
          result[2] += 2987803;
          result[3] += 10457311;
          result[4] += 3548016;
          result[5] += 19980934;
        } else {
          result[0] += 0;
          result[1] += 1709439;
          result[2] += 1495759;
          result[3] += 29701515;
          result[4] += 213679;
          result[5] += 9829278;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
          result[0] += 5672598;
          result[1] += 540247;
          result[2] += 270123;
          result[3] += 10264701;
          result[4] += 5942722;
          result[5] += 20259279;
        } else {
          result[0] += 32466622;
          result[1] += 1911615;
          result[2] += 277492;
          result[3] += 1449127;
          result[4] += 5334022;
          result[5] += 1510792;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11317819;
          result[3] += 21765036;
          result[4] += 290200;
          result[5] += 9576616;
        } else {
          result[0] += 1311726;
          result[1] += 149911;
          result[2] += 34704535;
          result[3] += 4197524;
          result[4] += 187389;
          result[5] += 2398585;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 471974;
          result[1] += 629299;
          result[2] += 943948;
          result[3] += 157324;
          result[4] += 37757954;
          result[5] += 2989171;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 978352;
          result[1] += 48917;
          result[2] += 0;
          result[3] += 1907787;
          result[4] += 1761034;
          result[5] += 38253581;
        } else {
          result[0] += 270123;
          result[1] += 270123;
          result[2] += 270123;
          result[3] += 25661754;
          result[4] += 810371;
          result[5] += 15667176;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 11713547;
          result[2] += 0;
          result[3] += 0;
          result[4] += 31236125;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42764943;
          result[2] += 0;
          result[3] += 184729;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
          result[0] += 4974397;
          result[1] += 3033168;
          result[2] += 2547861;
          result[3] += 7522259;
          result[4] += 7158278;
          result[5] += 17713706;
        } else {
          result[0] += 31732576;
          result[1] += 1505452;
          result[2] += 1210265;
          result[3] += 2479568;
          result[4] += 4545876;
          result[5] += 1475933;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 32414847;
          result[4] += 810371;
          result[5] += 9724454;
        } else {
          result[0] += 0;
          result[1] += 2386092;
          result[2] += 5965232;
          result[3] += 14316557;
          result[4] += 1193046;
          result[5] += 19088743;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 335544;
          result[2] += 7717519;
          result[3] += 10737418;
          result[4] += 5368709;
          result[5] += 18790481;
        } else {
          result[0] += 1561806;
          result[1] += 0;
          result[2] += 31626577;
          result[3] += 2733161;
          result[4] += 780903;
          result[5] += 6247225;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16106127;
          result[3] += 21474836;
          result[4] += 5368709;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 938221;
          result[1] += 0;
          result[2] += 34192943;
          result[3] += 6880287;
          result[4] += 208493;
          result[5] += 729727;
        } else {
          result[0] += 273564;
          result[1] += 0;
          result[2] += 41673037;
          result[3] += 911882;
          result[4] += 0;
          result[5] += 91188;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42248453;
          result[5] += 701219;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1973711;
          result[1] += 300347;
          result[2] += 300347;
          result[3] += 1759177;
          result[4] += 1716270;
          result[5] += 36899818;
        } else {
          result[0] += 184333;
          result[1] += 368666;
          result[2] += 0;
          result[3] += 23779003;
          result[4] += 2027666;
          result[5] += 16590002;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 5602131;
          result[1] += 7469508;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28010656;
          result[5] += 1867377;
        } else {
          result[0] += 109286;
          result[1] += 42840386;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 30829081;
          result[1] += 2880422;
          result[2] += 827052;
          result[3] += 1682623;
          result[4] += 5218984;
          result[5] += 1511509;
        } else {
          result[0] += 6247225;
          result[1] += 0;
          result[2] += 12382892;
          result[3] += 14725602;
          result[4] += 2231151;
          result[5] += 7362801;
        }
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42db0000))) ) ) {
          result[0] += 0;
          result[1] += 40423221;
          result[2] += 0;
          result[3] += 2526451;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 530242;
          result[2] += 4241943;
          result[3] += 10074614;
          result[4] += 3181457;
          result[5] += 24921415;
        } else {
          result[0] += 4294967;
          result[1] += 0;
          result[2] += 25769803;
          result[3] += 7730941;
          result[4] += 0;
          result[5] += 5153960;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 12271335;
          result[4] += 0;
          result[5] += 30678337;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 22906492;
          result[4] += 0;
          result[5] += 5726623;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4772185;
          result[3] += 0;
          result[4] += 0;
          result[5] += 38177487;
        } else {
          result[0] += 352046;
          result[1] += 0;
          result[2] += 39278330;
          result[3] += 3118126;
          result[4] += 0;
          result[5] += 201169;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x423c0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 36814005;
          result[2] += 0;
          result[3] += 0;
          result[4] += 6135667;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 342228;
          result[1] += 855571;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38671817;
          result[5] += 3080056;
        } else {
          result[0] += 1207959;
          result[1] += 100663;
          result[2] += 167772;
          result[3] += 6039797;
          result[4] += 3154116;
          result[5] += 32279363;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 32999553;
          result[1] += 2378648;
          result[2] += 0;
          result[3] += 703543;
          result[4] += 5527844;
          result[5] += 1340083;
        } else {
          result[0] += 6775159;
          result[1] += 3266594;
          result[2] += 8710919;
          result[3] += 11372589;
          result[4] += 4234474;
          result[5] += 8589934;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42780000))) ) ) {
          result[0] += 0;
          result[1] += 39370533;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3579139;
          result[5] += 0;
        } else {
          result[0] += 1498244;
          result[1] += 499414;
          result[2] += 0;
          result[3] += 8490051;
          result[4] += 3495903;
          result[5] += 28966058;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1840700;
          result[3] += 27610504;
          result[4] += 0;
          result[5] += 13498468;
        } else {
          result[0] += 0;
          result[1] += 1982292;
          result[2] += 29734388;
          result[3] += 7929170;
          result[4] += 0;
          result[5] += 3303820;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32283363;
          result[3] += 9101917;
          result[4] += 0;
          result[5] += 1564392;
        } else {
          result[0] += 16743092;
          result[1] += 2911842;
          result[2] += 19654935;
          result[3] += 2183881;
          result[4] += 1455921;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12884901;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 8589934;
        } else {
          result[0] += 138101;
          result[1] += 0;
          result[2] += 41706756;
          result[3] += 1104814;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428b0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 466844;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42249406;
          result[5] += 233422;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 23860929;
          result[5] += 19088743;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
          result[0] += 378411;
          result[1] += 47301;
          result[2] += 0;
          result[3] += 2128563;
          result[4] += 1750151;
          result[5] += 38645245;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 23077436;
          result[4] += 2564159;
          result[5] += 17308077;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 12725829;
          result[2] += 0;
          result[3] += 0;
          result[4] += 30223843;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 41965409;
          result[2] += 0;
          result[3] += 178956;
          result[4] += 447392;
          result[5] += 357913;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 30020378;
          result[1] += 2358347;
          result[2] += 305197;
          result[3] += 1470499;
          result[4] += 5937487;
          result[5] += 2857762;
        } else {
          result[0] += 4028907;
          result[1] += 1596359;
          result[2] += 9350105;
          result[3] += 16495715;
          result[4] += 1976445;
          result[5] += 9502140;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 8421504;
          result[4] += 3368601;
          result[5] += 31159566;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 25053975;
          result[3] += 8947848;
          result[4] += 0;
          result[5] += 8947848;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16953818;
          result[3] += 22605091;
          result[4] += 0;
          result[5] += 3390763;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6607641;
          result[3] += 23126746;
          result[4] += 0;
          result[5] += 13215283;
        } else {
          result[0] += 1042467;
          result[1] += 1042467;
          result[2] += 32733488;
          result[3] += 7088780;
          result[4] += 625480;
          result[5] += 416987;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 894784;
          result[1] += 0;
          result[2] += 33107039;
          result[3] += 8053063;
          result[4] += 0;
          result[5] += 894784;
        } else {
          result[0] += 134638;
          result[1] += 0;
          result[2] += 41737926;
          result[3] += 1077107;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42db0000))) ) ) {
          result[0] += 565127;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40500788;
          result[5] += 1883757;
        } else {
          result[0] += 0;
          result[1] += 26843545;
          result[2] += 0;
          result[3] += 0;
          result[4] += 16106127;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1495955;
          result[1] += 157469;
          result[2] += 39367;
          result[3] += 2558871;
          result[4] += 2598238;
          result[5] += 36099770;
        } else {
          result[0] += 246837;
          result[1] += 1234186;
          result[2] += 987348;
          result[3] += 22462185;
          result[4] += 987348;
          result[5] += 17031766;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 4923085;
          result[1] += 15618062;
          result[2] += 0;
          result[3] += 0;
          result[4] += 21729478;
          result[5] += 679046;
        } else {
          result[0] += 30727292;
          result[1] += 970936;
          result[2] += 1656303;
          result[3] += 3369721;
          result[4] += 3084152;
          result[5] += 3141265;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 42754002;
          result[2] += 0;
          result[3] += 195670;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 21474836;
          result[1] += 21474836;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4772185;
          result[3] += 29163358;
          result[4] += 0;
          result[5] += 9014128;
        } else {
          result[0] += 704092;
          result[1] += 0;
          result[2] += 21826882;
          result[3] += 15490045;
          result[4] += 0;
          result[5] += 4928650;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4294967;
          result[3] += 0;
          result[4] += 0;
          result[5] += 38654705;
        } else {
          result[0] += 2831846;
          result[1] += 0;
          result[2] += 35634069;
          result[3] += 4247769;
          result[4] += 235987;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36022306;
          result[3] += 5818987;
          result[4] += 0;
          result[5] += 1108378;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42308633;
          result[3] += 641039;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 536870;
          result[1] += 0;
          result[2] += 38117834;
          result[3] += 4294967;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 117670;
          result[1] += 0;
          result[2] += 42714332;
          result[3] += 117670;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41423542;
          result[5] += 1526130;
        } else {
          result[0] += 24910810;
          result[1] += 858993;
          result[2] += 0;
          result[3] += 429496;
          result[4] += 8160437;
          result[5] += 8589934;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1851722;
          result[4] += 2520399;
          result[5] += 38577550;
        } else {
          result[0] += 0;
          result[1] += 644889;
          result[2] += 386933;
          result[3] += 17154073;
          result[4] += 4643207;
          result[5] += 20120567;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d70000))) ) ) {
          result[0] += 31359218;
          result[1] += 812414;
          result[2] += 622851;
          result[3] += 1895634;
          result[4] += 5578582;
          result[5] += 2680969;
        } else {
          result[0] += 1771120;
          result[1] += 36750751;
          result[2] += 442780;
          result[3] += 442780;
          result[4] += 3542241;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 42214592;
          result[2] += 0;
          result[3] += 0;
          result[4] += 735079;
          result[5] += 0;
        } else {
          result[0] += 26430567;
          result[1] += 16519104;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3681400;
          result[3] += 26076587;
          result[4] += 0;
          result[5] += 13191685;
        } else {
          result[0] += 0;
          result[1] += 976128;
          result[2] += 10737418;
          result[3] += 3904515;
          result[4] += 0;
          result[5] += 27331610;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 19822925;
          result[4] += 0;
          result[5] += 23126746;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31327996;
          result[3] += 9095224;
          result[4] += 0;
          result[5] += 2526451;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7809031;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 13665805;
        } else {
          result[0] += 3067833;
          result[1] += 0;
          result[2] += 27099198;
          result[3] += 10226112;
          result[4] += 1022611;
          result[5] += 1533916;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1867377;
          result[1] += 0;
          result[2] += 35049231;
          result[3] += 5027553;
          result[4] += 0;
          result[5] += 1005510;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41817432;
          result[3] += 1132240;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 405185;
          result[1] += 202592;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42139301;
          result[5] += 202592;
        } else {
          result[0] += 4772185;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 23860929;
          result[5] += 14316557;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8589934;
          result[5] += 34359738;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 27917287;
          result[5] += 15032385;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42660000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 99076;
          result[2] += 148614;
          result[3] += 1733839;
          result[4] += 1783377;
          result[5] += 39184765;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 5697405;
          result[1] += 7012191;
          result[2] += 0;
          result[3] += 876523;
          result[4] += 6573929;
          result[5] += 22789622;
        } else {
          result[0] += 764229;
          result[1] += 764229;
          result[2] += 1375612;
          result[3] += 22926871;
          result[4] += 152845;
          result[5] += 16965885;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 6871947;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35218731;
          result[5] += 858993;
        } else {
          result[0] += 0;
          result[1] += 42851837;
          result[2] += 97835;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 33486185;
          result[1] += 827227;
          result[2] += 132356;
          result[3] += 1687544;
          result[4] += 5393525;
          result[5] += 1422832;
        } else {
          result[0] += 8719106;
          result[1] += 1776114;
          result[2] += 7588851;
          result[3] += 10979615;
          result[4] += 3713693;
          result[5] += 10172290;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2928386;
          result[3] += 1952257;
          result[4] += 4880644;
          result[5] += 33188383;
        } else {
          result[0] += 1336212;
          result[1] += 954437;
          result[2] += 11453246;
          result[3] += 17943418;
          result[4] += 2863311;
          result[5] += 8399047;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 20281790;
          result[1] += 0;
          result[2] += 15509604;
          result[3] += 3579139;
          result[4] += 0;
          result[5] += 3579139;
        } else {
          result[0] += 276203;
          result[1] += 0;
          result[2] += 39359025;
          result[3] += 2900138;
          result[4] += 0;
          result[5] += 414305;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428b0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 555383;
          result[2] += 0;
          result[3] += 740511;
          result[4] += 38506603;
          result[5] += 3147174;
        } else {
          result[0] += 0;
          result[1] += 36342030;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4955731;
          result[5] += 1651910;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2032487;
          result[4] += 1283676;
          result[5] += 39633508;
        } else {
          result[0] += 1833217;
          result[1] += 0;
          result[2] += 523776;
          result[3] += 9951753;
          result[4] += 8118535;
          result[5] += 22522389;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 27756226;
          result[1] += 2281701;
          result[2] += 671088;
          result[3] += 2120640;
          result[4] += 5717675;
          result[5] += 4402341;
        } else {
          result[0] += 4524469;
          result[1] += 1573728;
          result[2] += 9901374;
          result[3] += 14950420;
          result[4] += 1967160;
          result[5] += 10032519;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 11713547;
          result[1] += 11713547;
          result[2] += 0;
          result[3] += 19522578;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 15618062;
          result[2] += 3904515;
          result[3] += 0;
          result[4] += 23427094;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 1342177;
          result[2] += 5368709;
          result[3] += 8053063;
          result[4] += 2684354;
          result[5] += 25501368;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 24542670;
          result[1] += 12271335;
          result[2] += 0;
          result[3] += 0;
          result[4] += 6135667;
          result[5] += 0;
        } else {
          result[0] += 3789677;
          result[1] += 0;
          result[2] += 37896770;
          result[3] += 1263225;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8589934;
          result[3] += 25769803;
          result[4] += 0;
          result[5] += 8589934;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35095063;
          result[3] += 7186132;
          result[4] += 0;
          result[5] += 668477;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 904203;
          result[1] += 0;
          result[2] += 37072349;
          result[3] += 4973120;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 93572;
          result[1] += 0;
          result[2] += 42388239;
          result[3] += 467861;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42391884;
          result[5] += 557787;
        } else {
          result[0] += 13998411;
          result[1] += 954437;
          result[2] += 1590728;
          result[3] += 2863311;
          result[4] += 8271788;
          result[5] += 15270994;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 49085;
          result[2] += 0;
          result[3] += 2699693;
          result[4] += 2503352;
          result[5] += 37697541;
        } else {
          result[0] += 0;
          result[1] += 362444;
          result[2] += 543666;
          result[3] += 23015225;
          result[4] += 906111;
          result[5] += 18122224;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 9911462;
          result[2] += 0;
          result[3] += 0;
          result[4] += 33038209;
          result[5] += 0;
        } else {
          result[0] += 91772;
          result[1] += 42674354;
          result[2] += 0;
          result[3] += 0;
          result[4] += 183545;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          result[0] += 32082104;
          result[1] += 2342709;
          result[2] += 585677;
          result[3] += 911053;
          result[4] += 5531397;
          result[5] += 1496731;
        } else {
          result[0] += 9364966;
          result[1] += 968789;
          result[2] += 10333755;
          result[3] += 11517832;
          result[4] += 1399362;
          result[5] += 9364966;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 24542670;
          result[4] += 6135667;
          result[5] += 12271335;
        } else {
          result[0] += 825955;
          result[1] += 0;
          result[2] += 12389328;
          result[3] += 4129776;
          result[4] += 1651910;
          result[5] += 23952702;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14998298;
          result[3] += 26587892;
          result[4] += 0;
          result[5] += 1363481;
        } else {
          result[0] += 2564159;
          result[1] += 0;
          result[2] += 29487835;
          result[3] += 8974558;
          result[4] += 641039;
          result[5] += 1282079;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 14316557;
          result[2] += 4772185;
          result[3] += 4772185;
          result[4] += 0;
          result[5] += 19088743;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1625855;
          result[1] += 135487;
          result[2] += 35497836;
          result[3] += 5148541;
          result[4] += 0;
          result[5] += 541951;
        } else {
          result[0] += 73418;
          result[1] += 0;
          result[2] += 42068654;
          result[3] += 807600;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 1824117;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40628069;
          result[5] += 497486;
        } else {
          result[0] += 4706813;
          result[1] += 1176703;
          result[2] += 0;
          result[3] += 0;
          result[4] += 20592308;
          result[5] += 16473847;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 426181;
          result[1] += 94707;
          result[2] += 0;
          result[3] += 3409455;
          result[4] += 1610020;
          result[5] += 37409307;
        } else {
          result[0] += 14621165;
          result[1] += 391638;
          result[2] += 391638;
          result[3] += 5744029;
          result[4] += 7180036;
          result[5] += 14621165;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x425a0000))) ) ) {
          result[0] += 366308;
          result[1] += 42217055;
          result[2] += 0;
          result[3] += 0;
          result[4] += 366308;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 23216039;
          result[2] += 1160801;
          result[3] += 0;
          result[4] += 18572831;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 10056192;
          result[1] += 1686845;
          result[2] += 4476627;
          result[3] += 15635757;
          result[4] += 2270753;
          result[5] += 8823497;
        } else {
          result[0] += 33929022;
          result[1] += 1015839;
          result[2] += 2844349;
          result[3] += 1015839;
          result[4] += 3616386;
          result[5] += 528236;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42810000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 10737418;
          result[4] += 21474836;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 998829;
          result[2] += 1997659;
          result[3] += 7990636;
          result[4] += 998829;
          result[5] += 30963717;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24542670;
          result[3] += 10737418;
          result[4] += 0;
          result[5] += 7669584;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1130254;
          result[3] += 9042036;
          result[4] += 2260509;
          result[5] += 30516872;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33038209;
          result[3] += 4955731;
          result[4] += 0;
          result[5] += 4955731;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 816533;
          result[1] += 0;
          result[2] += 34457722;
          result[3] += 7185496;
          result[4] += 0;
          result[5] += 489920;
        } else {
          result[0] += 73292;
          result[1] += 0;
          result[2] += 41703692;
          result[3] += 1172687;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42300000))) ) ) {
          result[0] += 0;
          result[1] += 26430567;
          result[2] += 0;
          result[3] += 0;
          result[4] += 13215283;
          result[5] += 3303820;
        } else {
          result[0] += 0;
          result[1] += 176023;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40485347;
          result[5] += 2288302;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 107240;
          result[2] += 160860;
          result[3] += 1394121;
          result[4] += 1501361;
          result[5] += 39786089;
        } else {
          result[0] += 4682144;
          result[1] += 270123;
          result[2] += 1710783;
          result[3] += 15036887;
          result[4] += 4592103;
          result[5] += 16657629;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 31410954;
          result[1] += 2777839;
          result[2] += 152628;
          result[3] += 1221028;
          result[4] += 5128319;
          result[5] += 2258902;
        } else {
          result[0] += 10520500;
          result[1] += 542293;
          result[2] += 10845877;
          result[3] += 11496629;
          result[4] += 2169175;
          result[5] += 7375196;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 202116;
          result[1] += 42040150;
          result[2] += 0;
          result[3] += 101058;
          result[4] += 606348;
          result[5] += 0;
        } else {
          result[0] += 28633115;
          result[1] += 0;
          result[2] += 7158278;
          result[3] += 7158278;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1130254;
          result[4] += 2260509;
          result[5] += 39558909;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12494450;
          result[3] += 14837159;
          result[4] += 780903;
          result[5] += 14837159;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 38654705;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 4294967;
        } else {
          result[0] += 1974697;
          result[1] += 987348;
          result[2] += 26658417;
          result[3] += 9379813;
          result[4] += 0;
          result[5] += 3949395;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27201459;
          result[3] += 12884901;
          result[4] += 0;
          result[5] += 2863311;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37204812;
          result[3] += 4650601;
          result[4] += 0;
          result[5] += 1094259;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42df0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40086361;
          result[3] += 2863311;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 104246;
          result[1] += 0;
          result[2] += 42428439;
          result[3] += 312740;
          result[4] += 0;
          result[5] += 104246;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 3046076;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35639090;
          result[5] += 4264506;
        } else {
          result[0] += 18572831;
          result[1] += 15090425;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9286415;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 569212;
          result[2] += 0;
          result[3] += 1241918;
          result[4] += 2432089;
          result[5] += 38706452;
        } else {
          result[0] += 148102;
          result[1] += 592409;
          result[2] += 148102;
          result[3] += 22511552;
          result[4] += 444306;
          result[5] += 19105199;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 609215;
          result[1] += 11270481;
          result[2] += 1523038;
          result[3] += 2132253;
          result[4] += 25891646;
          result[5] += 1523038;
        } else {
          result[0] += 97391;
          result[1] += 41975757;
          result[2] += 292174;
          result[3] += 0;
          result[4] += 389566;
          result[5] += 194783;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 36306506;
          result[1] += 1065748;
          result[2] += 71049;
          result[3] += 1065748;
          result[4] += 3588020;
          result[5] += 852598;
        } else {
          result[0] += 8468949;
          result[1] += 345671;
          result[2] += 9851635;
          result[3] += 12444170;
          result[4] += 2333282;
          result[5] += 9505963;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1209849;
          result[3] += 7259099;
          result[4] += 604924;
          result[5] += 33875798;
        } else {
          result[0] += 3904515;
          result[1] += 0;
          result[2] += 19522578;
          result[3] += 3904515;
          result[4] += 7809031;
          result[5] += 7809031;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19822925;
          result[3] += 13215283;
          result[4] += 0;
          result[5] += 9911462;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x425a0000))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 873552;
          result[1] += 0;
          result[2] += 33340593;
          result[3] += 7425197;
          result[4] += 0;
          result[5] += 1310329;
        } else {
          result[0] += 382341;
          result[1] += 63723;
          result[2] += 41037966;
          result[3] += 1147023;
          result[4] += 0;
          result[5] += 318617;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 3317251;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39283237;
          result[5] += 349184;
        } else {
          result[0] += 24261647;
          result[1] += 0;
          result[2] += 327860;
          result[3] += 0;
          result[4] += 10163663;
          result[5] += 8196502;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 41021;
          result[1] += 246129;
          result[2] += 656346;
          result[3] += 2871515;
          result[4] += 3076624;
          result[5] += 36058034;
        } else {
          result[0] += 1290333;
          result[1] += 0;
          result[2] += 184333;
          result[3] += 25438003;
          result[4] += 737333;
          result[5] += 15299668;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
          result[0] += 33577609;
          result[1] += 1213648;
          result[2] += 168562;
          result[3] += 1314785;
          result[4] += 4517469;
          result[5] += 2157597;
        } else {
          result[0] += 9153208;
          result[1] += 2288302;
          result[2] += 8801162;
          result[3] += 10737418;
          result[4] += 4576604;
          result[5] += 7392976;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 1160801;
          result[2] += 1160801;
          result[3] += 1741202;
          result[4] += 5223608;
          result[5] += 33663257;
        } else {
          result[0] += 0;
          result[1] += 15158708;
          result[2] += 7579354;
          result[3] += 10105805;
          result[4] += 10105805;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9355374;
          result[3] += 25514657;
          result[4] += 425244;
          result[5] += 7654397;
        } else {
          result[0] += 6832902;
          result[1] += 0;
          result[2] += 28307738;
          result[3] += 3904515;
          result[4] += 976128;
          result[5] += 2928386;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 523776;
          result[1] += 0;
          result[2] += 24093718;
          result[3] += 16760847;
          result[4] += 523776;
          result[5] += 1047552;
        } else {
          result[0] += 554514;
          result[1] += 0;
          result[2] += 40025868;
          result[3] += 2318879;
          result[4] += 0;
          result[5] += 50410;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 819650;
          result[2] += 0;
          result[3] += 163930;
          result[4] += 39671071;
          result[5] += 2295020;
        } else {
          result[0] += 0;
          result[1] += 35791394;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3579139;
          result[5] += 3579139;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42830000))) ) ) {
          result[0] += 60663;
          result[1] += 0;
          result[2] += 363980;
          result[3] += 1152604;
          result[4] += 1395257;
          result[5] += 39977167;
        } else {
          result[0] += 5173669;
          result[1] += 164243;
          result[2] += 492730;
          result[3] += 12400383;
          result[4] += 6405496;
          result[5] += 18313149;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 447392;
          result[1] += 12974380;
          result[2] += 0;
          result[3] += 1342177;
          result[4] += 24606583;
          result[5] += 3579139;
        } else {
          result[0] += 0;
          result[1] += 42075132;
          result[2] += 0;
          result[3] += 194342;
          result[4] += 485856;
          result[5] += 194342;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 23767722;
          result[1] += 1901417;
          result[2] += 1789569;
          result[3] += 3187671;
          result[4] += 6095721;
          result[5] += 6207569;
        } else {
          result[0] += 39258685;
          result[1] += 223696;
          result[2] += 1454025;
          result[3] += 1006632;
          result[4] += 727012;
          result[5] += 279620;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 933688;
          result[2] += 0;
          result[3] += 4668442;
          result[4] += 7469508;
          result[5] += 29878033;
        } else {
          result[0] += 371858;
          result[1] += 0;
          result[2] += 11155759;
          result[3] += 23427094;
          result[4] += 743717;
          result[5] += 7251243;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38428654;
          result[3] += 3767515;
          result[4] += 0;
          result[5] += 753503;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42540000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 15748213;
          result[1] += 0;
          result[2] += 10021590;
          result[3] += 0;
          result[4] += 2863311;
          result[5] += 14316557;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36998814;
          result[3] += 4786559;
          result[4] += 0;
          result[5] += 1164298;
        } else {
          result[0] += 85727;
          result[1] += 0;
          result[2] += 42006666;
          result[3] += 771551;
          result[4] += 0;
          result[5] += 85727;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40768634;
          result[5] += 2181038;
        } else {
          result[0] += 0;
          result[1] += 34359738;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8589934;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2157289;
          result[4] += 2010201;
          result[5] += 38782181;
        } else {
          result[0] += 5228655;
          result[1] += 373475;
          result[2] += 622459;
          result[3] += 14939016;
          result[4] += 2614327;
          result[5] += 19171738;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 447392;
          result[1] += 5816101;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36238786;
          result[5] += 447392;
        } else {
          result[0] += 89478;
          result[1] += 41160103;
          result[2] += 89478;
          result[3] += 178956;
          result[4] += 1431655;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 36188746;
          result[1] += 1530104;
          result[2] += 106751;
          result[3] += 925179;
          result[4] += 3451630;
          result[5] += 747260;
        } else {
          result[0] += 7914558;
          result[1] += 2110549;
          result[2] += 8125613;
          result[3] += 9075360;
          result[4] += 3798988;
          result[5] += 11924602;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2045222;
          result[3] += 1022611;
          result[4] += 12271335;
          result[5] += 27610504;
        } else {
          result[0] += 0;
          result[1] += 5567550;
          result[2] += 2386092;
          result[3] += 27837750;
          result[4] += 2386092;
          result[5] += 4772185;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11879696;
          result[3] += 15534988;
          result[4] += 0;
          result[5] += 15534988;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34035589;
          result[3] += 4051855;
          result[4] += 810371;
          result[5] += 4051855;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 3681400;
          result[1] += 2454267;
          result[2] += 13498468;
          result[3] += 19634136;
          result[4] += 0;
          result[5] += 3681400;
        } else {
          result[0] += 792429;
          result[1] += 0;
          result[2] += 34074463;
          result[3] += 7448836;
          result[4] += 0;
          result[5] += 633943;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 6781527;
          result[1] += 0;
          result[2] += 24865600;
          result[3] += 4521018;
          result[4] += 4521018;
          result[5] += 2260509;
        } else {
          result[0] += 68391;
          result[1] += 0;
          result[2] += 41376675;
          result[3] += 1436215;
          result[4] += 0;
          result[5] += 68391;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 2911842;
          result[1] += 0;
          result[2] += 582368;
          result[3] += 0;
          result[4] += 34359738;
          result[5] += 5095723;
        } else {
          result[0] += 29068599;
          result[1] += 4490935;
          result[2] += 81653;
          result[3] += 0;
          result[4] += 9145177;
          result[5] += 163306;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 248264;
          result[1] += 49652;
          result[2] += 0;
          result[3] += 2284028;
          result[4] += 2035764;
          result[5] += 38331962;
        } else {
          result[0] += 6391867;
          result[1] += 1011662;
          result[2] += 3034987;
          result[3] += 14715091;
          result[4] += 4368542;
          result[5] += 13427520;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cc0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 12884901;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 30064771;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 42327213;
          result[1] += 0;
          result[2] += 207486;
          result[3] += 207486;
          result[4] += 207486;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 4294967;
          result[1] += 0;
          result[2] += 0;
          result[3] += 25769803;
          result[4] += 4294967;
          result[5] += 8589934;
        } else {
          result[0] += 5781686;
          result[1] += 0;
          result[2] += 33038209;
          result[3] += 0;
          result[4] += 0;
          result[5] += 4129776;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 530242;
          result[1] += 0;
          result[2] += 28367993;
          result[3] += 10074614;
          result[4] += 265121;
          result[5] += 3711700;
        } else {
          result[0] += 963451;
          result[1] += 0;
          result[2] += 39602945;
          result[3] += 2383275;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42353149;
          result[5] += 596523;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42680000))) ) ) {
          result[0] += 40563580;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1193046;
          result[5] += 1193046;
        } else {
          result[0] += 1765055;
          result[1] += 4118461;
          result[2] += 0;
          result[3] += 4706813;
          result[4] += 8236923;
          result[5] += 24122419;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 31496426;
          result[5] += 11453246;
        } else {
          result[0] += 0;
          result[1] += 318538;
          result[2] += 159269;
          result[3] += 2282862;
          result[4] += 1964323;
          result[5] += 38224678;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 223696;
          result[2] += 2013265;
          result[3] += 7829367;
          result[4] += 3579139;
          result[5] += 29304203;
        } else {
          result[0] += 689032;
          result[1] += 0;
          result[2] += 1378064;
          result[3] += 29858061;
          result[4] += 0;
          result[5] += 11024514;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 543666;
          result[1] += 4349333;
          result[2] += 0;
          result[3] += 1087333;
          result[4] += 36425671;
          result[5] += 543666;
        } else {
          result[0] += 93572;
          result[1] += 41171799;
          result[2] += 0;
          result[3] += 467861;
          result[4] += 1216439;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 35942461;
          result[1] += 1289884;
          result[2] += 69723;
          result[3] += 557787;
          result[4] += 3242142;
          result[5] += 1847672;
        } else {
          result[0] += 10559055;
          result[1] += 998829;
          result[2] += 7847946;
          result[3] += 10273675;
          result[4] += 1854969;
          result[5] += 11415195;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 5684515;
          result[2] += 3789677;
          result[3] += 24632900;
          result[4] += 1263225;
          result[5] += 7579354;
        } else {
          result[0] += 1227133;
          result[1] += 0;
          result[2] += 9203501;
          result[3] += 2454267;
          result[4] += 11044201;
          result[5] += 19020569;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 217466;
          result[1] += 0;
          result[2] += 31206471;
          result[3] += 9786001;
          result[4] += 0;
          result[5] += 1739733;
        } else {
          result[0] += 1461305;
          result[1] += 0;
          result[2] += 39899992;
          result[3] += 1334235;
          result[4] += 0;
          result[5] += 254140;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ad0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
          result[0] += 174592;
          result[1] += 523776;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40505382;
          result[5] += 1745921;
        } else {
          result[0] += 22316986;
          result[1] += 5895053;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5052902;
          result[5] += 9684730;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 51069;
          result[2] += 0;
          result[3] += 1532092;
          result[4] += 2195999;
          result[5] += 39170510;
        } else {
          result[0] += 327860;
          result[1] += 4262181;
          result[2] += 655720;
          result[3] += 15737284;
          result[4] += 1639300;
          result[5] += 20327326;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 727960;
          result[1] += 15287171;
          result[2] += 0;
          result[3] += 1455921;
          result[4] += 25478619;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 14460805;
          result[1] += 2235835;
          result[2] += 3389814;
          result[3] += 8726969;
          result[4] += 5625649;
          result[5] += 8510598;
        } else {
          result[0] += 37621738;
          result[1] += 869866;
          result[2] += 1467900;
          result[3] += 761133;
          result[4] += 2011566;
          result[5] += 217466;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1227133;
          result[3] += 2454267;
          result[4] += 3681400;
          result[5] += 35586871;
        } else {
          result[0] += 0;
          result[1] += 1840700;
          result[2] += 7976367;
          result[3] += 25156237;
          result[4] += 1227133;
          result[5] += 6749234;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 4443069;
          result[1] += 246837;
          result[2] += 23696371;
          result[3] += 12095022;
          result[4] += 0;
          result[5] += 2468372;
        } else {
          result[0] += 477218;
          result[1] += 715827;
          result[2] += 36030003;
          result[3] += 5010795;
          result[4] += 0;
          result[5] += 715827;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ee0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37743651;
          result[3] += 5206020;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42980000))) ) ) {
          result[0] += 8589934;
          result[1] += 0;
          result[2] += 25769803;
          result[3] += 0;
          result[4] += 0;
          result[5] += 8589934;
        } else {
          result[0] += 178214;
          result[1] += 0;
          result[2] += 42504136;
          result[3] += 267321;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
          result[0] += 425244;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42099184;
          result[5] += 425244;
        } else {
          result[0] += 0;
          result[1] += 810371;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35656332;
          result[5] += 6482969;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          result[0] += 40246546;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2703126;
          result[5] += 0;
        } else {
          result[0] += 4421289;
          result[1] += 631612;
          result[2] += 0;
          result[3] += 0;
          result[4] += 17685159;
          result[5] += 20211610;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 350896;
          result[4] += 280716;
          result[5] += 42318060;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1385473;
          result[3] += 6234629;
          result[4] += 6234629;
          result[5] += 29094939;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 1421502;
          result[2] += 812286;
          result[3] += 8122869;
          result[4] += 7005975;
          result[5] += 25587039;
        } else {
          result[0] += 266768;
          result[1] += 266768;
          result[2] += 2000761;
          result[3] += 24809438;
          result[4] += 0;
          result[5] += 15605937;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42580000))) ) ) {
          result[0] += 328696;
          result[1] += 41634887;
          result[2] += 0;
          result[3] += 0;
          result[4] += 986089;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 9153208;
          result[2] += 352046;
          result[3] += 704092;
          result[4] += 31332138;
          result[5] += 1408185;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
          result[0] += 38691206;
          result[1] += 1378931;
          result[2] += 40556;
          result[3] += 567795;
          result[4] += 2068397;
          result[5] += 202784;
        } else {
          result[0] += 6404775;
          result[1] += 753503;
          result[2] += 14316557;
          result[3] += 10925793;
          result[4] += 1507006;
          result[5] += 9042036;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42db0000))) ) ) {
          result[0] += 167119;
          result[1] += 2172551;
          result[2] += 15374980;
          result[3] += 14205144;
          result[4] += 2673909;
          result[5] += 8355967;
        } else {
          result[0] += 25931878;
          result[1] += 2431113;
          result[2] += 13776310;
          result[3] += 0;
          result[4] += 0;
          result[5] += 810371;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30103118;
          result[3] += 10162199;
          result[4] += 0;
          result[5] += 2684354;
        } else {
          result[0] += 596523;
          result[1] += 0;
          result[2] += 40682884;
          result[3] += 1550960;
          result[4] += 0;
          result[5] += 119304;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 873975;
          result[1] += 1623098;
          result[2] += 374561;
          result[3] += 0;
          result[4] += 37705817;
          result[5] += 2372220;
        } else {
          result[0] += 33380574;
          result[1] += 222537;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4228206;
          result[5] += 5118354;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 310330;
          result[3] += 1241320;
          result[4] += 1303386;
          result[5] += 40094636;
        } else {
          result[0] += 678509;
          result[1] += 1560572;
          result[2] += 882062;
          result[3] += 13638047;
          result[4] += 4749568;
          result[5] += 21440910;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
          result[0] += 33691969;
          result[1] += 1972953;
          result[2] += 113824;
          result[3] += 1745304;
          result[4] += 3490609;
          result[5] += 1935011;
        } else {
          result[0] += 7679742;
          result[1] += 142217;
          result[2] += 13368441;
          result[3] += 12941788;
          result[4] += 1279957;
          result[5] += 7537525;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 384337;
          result[1] += 42373167;
          result[2] += 0;
          result[3] += 0;
          result[4] += 192168;
          result[5] += 0;
        } else {
          result[0] += 42949672;
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
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1590728;
          result[3] += 0;
          result[4] += 1590728;
          result[5] += 39768215;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9911462;
          result[3] += 23126746;
          result[4] += 0;
          result[5] += 9911462;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6316128;
          result[3] += 31580641;
          result[4] += 0;
          result[5] += 5052902;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27126109;
          result[3] += 2260509;
          result[4] += 0;
          result[5] += 13563054;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x426c0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 10737418;
          result[4] += 25053975;
          result[5] += 7158278;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 144611;
          result[1] += 0;
          result[2] += 34562194;
          result[3] += 7375196;
          result[4] += 0;
          result[5] += 867670;
        } else {
          result[0] += 194342;
          result[1] += 0;
          result[2] += 41330152;
          result[3] += 1425177;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
          result[0] += 719826;
          result[1] += 479884;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40550249;
          result[5] += 1199711;
        } else {
          result[0] += 18959765;
          result[1] += 8899481;
          result[2] += 0;
          result[3] += 1934669;
          result[4] += 8125613;
          result[5] += 5030141;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 120194;
          result[1] += 80129;
          result[2] += 200324;
          result[3] += 2724419;
          result[4] += 3165134;
          result[5] += 36659468;
        } else {
          result[0] += 409044;
          result[1] += 0;
          result[2] += 2454267;
          result[3] += 25769803;
          result[4] += 1227133;
          result[5] += 13089424;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 10932644;
          result[2] += 0;
          result[3] += 0;
          result[4] += 32017028;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42546389;
          result[2] += 0;
          result[3] += 0;
          result[4] += 403283;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 34275902;
          result[1] += 580400;
          result[2] += 161222;
          result[3] += 1354268;
          result[4] += 5126875;
          result[5] += 1451002;
        } else {
          result[0] += 7524875;
          result[1] += 2199578;
          result[2] += 10534825;
          result[3] += 14123612;
          result[4] += 2083811;
          result[5] += 6482969;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 3995318;
          result[1] += 2996488;
          result[2] += 5992977;
          result[3] += 6991807;
          result[4] += 4994148;
          result[5] += 17978932;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10040183;
          result[3] += 25100458;
          result[4] += 2231151;
          result[5] += 5577879;
        } else {
          result[0] += 604924;
          result[1] += 0;
          result[2] += 32061023;
          result[3] += 8468949;
          result[4] += 0;
          result[5] += 1814774;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3904515;
          result[3] += 0;
          result[4] += 3904515;
          result[5] += 35140641;
        } else {
          result[0] += 0;
          result[1] += 3579139;
          result[2] += 28633115;
          result[3] += 10737418;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1111965;
          result[1] += 138995;
          result[2] += 34331939;
          result[3] += 6810789;
          result[4] += 0;
          result[5] += 555982;
        } else {
          result[0] += 162688;
          result[1] += 0;
          result[2] += 41648167;
          result[3] += 976128;
          result[4] += 0;
          result[5] += 162688;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42420000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 330382;
          result[1] += 0;
          result[2] += 0;
          result[3] += 165191;
          result[4] += 39480660;
          result[5] += 2973438;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
          result[0] += 111412;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2061138;
          result[4] += 1559780;
          result[5] += 39217340;
        } else {
          result[0] += 4312937;
          result[1] += 2246321;
          result[2] += 269558;
          result[3] += 14556165;
          result[4] += 2605733;
          result[5] += 18958956;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 6705896;
          result[1] += 8621867;
          result[2] += 159664;
          result[3] += 319328;
          result[4] += 26025266;
          result[5] += 1117649;
        } else {
          result[0] += 28587952;
          result[1] += 650342;
          result[2] += 2574270;
          result[3] += 4471101;
          result[4] += 2763953;
          result[5] += 3902052;
        }
      } else {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6299285;
          result[3] += 26342466;
          result[4] += 0;
          result[5] += 10307921;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9042036;
          result[3] += 18084072;
          result[4] += 0;
          result[5] += 15823563;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33720817;
          result[3] += 8873899;
          result[4] += 0;
          result[5] += 354955;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 4294967;
          result[1] += 0;
          result[2] += 12884901;
          result[3] += 25769803;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 9761289;
          result[4] += 0;
          result[5] += 976128;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 3904515;
          result[1] += 0;
          result[2] += 31236125;
          result[3] += 0;
          result[4] += 0;
          result[5] += 7809031;
        } else {
          result[0] += 228152;
          result[1] += 0;
          result[2] += 41238530;
          result[3] += 1425951;
          result[4] += 0;
          result[5] += 57038;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 169093;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40582368;
          result[5] += 2198211;
        } else {
          result[0] += 0;
          result[1] += 7158278;
          result[2] += 0;
          result[3] += 28633115;
          result[4] += 7158278;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
          result[0] += 40775005;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2174666;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 200076;
          result[1] += 366806;
          result[2] += 233422;
          result[3] += 6735895;
          result[4] += 2801065;
          result[5] += 32612406;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 0;
          result[1] += 41971320;
          result[2] += 0;
          result[3] += 0;
          result[4] += 978352;
          result[5] += 0;
        } else {
          result[0] += 888613;
          result[1] += 12736799;
          result[2] += 1184818;
          result[3] += 296204;
          result[4] += 27250826;
          result[5] += 592409;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 36934419;
          result[1] += 1570862;
          result[2] += 191568;
          result[3] += 1072783;
          result[4] += 2375450;
          result[5] += 804587;
        } else {
          result[0] += 12925293;
          result[1] += 3231323;
          result[2] += 6058731;
          result[3] += 10097885;
          result[4] += 2288854;
          result[5] += 8347585;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3904515;
          result[3] += 31669960;
          result[4] += 0;
          result[5] += 7375196;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8589934;
          result[3] += 20043180;
          result[4] += 0;
          result[5] += 14316557;
        } else {
          result[0] += 2477865;
          result[1] += 0;
          result[2] += 35516075;
          result[3] += 2477865;
          result[4] += 0;
          result[5] += 2477865;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 27709466;
          result[4] += 2770946;
          result[5] += 12469259;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28412860;
          result[3] += 8589934;
          result[4] += 0;
          result[5] += 5946877;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35218731;
          result[3] += 7215545;
          result[4] += 0;
          result[5] += 515396;
        } else {
          result[0] += 847262;
          result[1] += 0;
          result[2] += 40473060;
          result[3] += 1433828;
          result[4] += 0;
          result[5] += 195522;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 641039;
          result[1] += 427359;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40171833;
          result[5] += 1709439;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42620000))) ) ) {
          result[0] += 30005935;
          result[1] += 1176703;
          result[2] += 0;
          result[3] += 0;
          result[4] += 11767033;
          result[5] += 0;
        } else {
          result[0] += 147720;
          result[1] += 221580;
          result[2] += 184650;
          result[3] += 6536622;
          result[4] += 1957293;
          result[5] += 33901805;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 11790106;
          result[2] += 0;
          result[3] += 0;
          result[4] += 27369889;
          result[5] += 3789677;
        } else {
          result[0] += 91188;
          result[1] += 41217095;
          result[2] += 182376;
          result[3] += 273564;
          result[4] += 1185447;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 33590989;
          result[1] += 969292;
          result[2] += 300814;
          result[3] += 1604345;
          result[4] += 4144559;
          result[5] += 2339670;
        } else {
          result[0] += 11579568;
          result[1] += 947419;
          result[2] += 8842579;
          result[3] += 10421611;
          result[4] += 2105376;
          result[5] += 9053117;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d60000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7251243;
          result[3] += 30120549;
          result[4] += 0;
          result[5] += 5577879;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14810232;
          result[3] += 10367162;
          result[4] += 0;
          result[5] += 17772278;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 6607641;
          result[1] += 0;
          result[2] += 13215283;
          result[3] += 13215283;
          result[4] += 0;
          result[5] += 9911462;
        } else {
          result[0] += 2260509;
          result[1] += 0;
          result[2] += 40689163;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33285996;
          result[3] += 8768891;
          result[4] += 0;
          result[5] += 894784;
        } else {
          result[0] += 2408392;
          result[1] += 0;
          result[2] += 39738482;
          result[3] += 802797;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17179869;
          result[3] += 0;
          result[4] += 0;
          result[5] += 25769803;
        } else {
          result[0] += 295694;
          result[1] += 0;
          result[2] += 41914741;
          result[3] += 591389;
          result[4] += 0;
          result[5] += 147847;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 222537;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42727135;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37298400;
          result[5] += 5651272;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 676782;
          result[1] += 0;
          result[2] += 0;
          result[3] += 780903;
          result[4] += 3071552;
          result[5] += 38420434;
        } else {
          result[0] += 3398215;
          result[1] += 849553;
          result[2] += 566369;
          result[3] += 14914391;
          result[4] += 1415923;
          result[5] += 21805218;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 1356305;
          result[1] += 10398341;
          result[2] += 0;
          result[3] += 452101;
          result[4] += 28482414;
          result[5] += 2260509;
        } else {
          result[0] += 189205;
          result[1] += 40584602;
          result[2] += 0;
          result[3] += 378411;
          result[4] += 1513644;
          result[5] += 283808;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 36516059;
          result[1] += 1060485;
          result[2] += 176747;
          result[3] += 706990;
          result[4] += 3428903;
          result[5] += 1060485;
        } else {
          result[0] += 7680780;
          result[1] += 2037758;
          result[2] += 5799773;
          result[3] += 11599546;
          result[4] += 2194508;
          result[5] += 13637304;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 3579139;
          result[2] += 0;
          result[3] += 2386092;
          result[4] += 7158278;
          result[5] += 29826161;
        } else {
          result[0] += 0;
          result[1] += 338186;
          result[2] += 6087355;
          result[3] += 24687607;
          result[4] += 338186;
          result[5] += 11498337;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 788067;
          result[1] += 0;
          result[2] += 18913617;
          result[3] += 15761347;
          result[4] += 1182101;
          result[5] += 6304539;
        } else {
          result[0] += 1227133;
          result[1] += 0;
          result[2] += 35586871;
          result[3] += 4294967;
          result[4] += 1840700;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42bc0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31159566;
          result[3] += 3368601;
          result[4] += 1684300;
          result[5] += 6737203;
        } else {
          result[0] += 39045157;
          result[1] += 0;
          result[2] += 3904515;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34563050;
          result[3] += 7878342;
          result[4] += 0;
          result[5] += 508280;
        } else {
          result[0] += 257183;
          result[1] += 0;
          result[2] += 41277979;
          result[3] += 1350214;
          result[4] += 0;
          result[5] += 64295;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 681740;
          result[2] += 0;
          result[3] += 170435;
          result[4] += 39540968;
          result[5] += 2556528;
        } else {
          result[0] += 26556668;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7540782;
          result[5] += 8852222;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1531538;
          result[4] += 799063;
          result[5] += 40619070;
        } else {
          result[0] += 287288;
          result[1] += 430933;
          result[2] += 430933;
          result[3] += 6894930;
          result[4] += 6894930;
          result[5] += 28010656;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 294175;
          result[1] += 41871028;
          result[2] += 0;
          result[3] += 294175;
          result[4] += 490293;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 24542670;
          result[4] += 18407002;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 33878545;
          result[1] += 2438474;
          result[2] += 32512;
          result[3] += 1137954;
          result[4] += 4226689;
          result[5] += 1235493;
        } else {
          result[0] += 4802679;
          result[1] += 617487;
          result[2] += 9125090;
          result[3] += 15437182;
          result[4] += 1166364;
          result[5] += 11800868;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5113056;
          result[3] += 3067833;
          result[4] += 4090445;
          result[5] += 30678337;
        } else {
          result[0] += 0;
          result[1] += 17179869;
          result[2] += 0;
          result[3] += 0;
          result[4] += 25769803;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7012191;
          result[3] += 24542670;
          result[4] += 876523;
          result[5] += 10518287;
        } else {
          result[0] += 0;
          result[1] += 858993;
          result[2] += 27917287;
          result[3] += 12025908;
          result[4] += 0;
          result[5] += 2147483;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42640000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 1160801;
          result[1] += 0;
          result[2] += 27278846;
          result[3] += 11608019;
          result[4] += 0;
          result[5] += 2902004;
        } else {
          result[0] += 829945;
          result[1] += 103743;
          result[2] += 40096735;
          result[3] += 1815505;
          result[4] += 0;
          result[5] += 103743;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 185127;
          result[2] += 0;
          result[3] += 370255;
          result[4] += 41098393;
          result[5] += 1295895;
        } else {
          result[0] += 0;
          result[1] += 28633115;
          result[2] += 0;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1034931;
          result[1] += 206986;
          result[2] += 51746;
          result[3] += 1811130;
          result[4] += 2225103;
          result[5] += 37619773;
        } else {
          result[0] += 2938661;
          result[1] += 226050;
          result[2] += 226050;
          result[3] += 14919360;
          result[4] += 3503789;
          result[5] += 21135760;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 867670;
          result[1] += 4338350;
          result[2] += 867670;
          result[3] += 867670;
          result[4] += 35140641;
          result[5] += 867670;
        } else {
          result[0] += 82595;
          result[1] += 40636998;
          result[2] += 0;
          result[3] += 247786;
          result[4] += 1982292;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 37689058;
          result[1] += 1225074;
          result[2] += 0;
          result[3] += 1008884;
          result[4] += 2630307;
          result[5] += 396347;
        } else {
          result[0] += 9410321;
          result[1] += 723870;
          result[2] += 9651611;
          result[3] += 10254837;
          result[4] += 2050967;
          result[5] += 10858063;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 766958;
          result[3] += 1533916;
          result[4] += 13805252;
          result[5] += 26843545;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2497074;
          result[3] += 25969569;
          result[4] += 1997659;
          result[5] += 12485370;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 1997659;
          result[2] += 12485370;
          result[3] += 19976592;
          result[4] += 0;
          result[5] += 8490051;
        } else {
          result[0] += 3612589;
          result[1] += 0;
          result[2] += 29703512;
          result[3] += 7225178;
          result[4] += 2006994;
          result[5] += 401398;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5368709;
          result[3] += 0;
          result[4] += 0;
          result[5] += 37580963;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3067833;
          result[3] += 27610504;
          result[4] += 0;
          result[5] += 12271335;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 215827;
          result[2] += 33884917;
          result[3] += 8201445;
          result[4] += 215827;
          result[5] += 431655;
        } else {
          result[0] += 198229;
          result[1] += 0;
          result[2] += 40967380;
          result[3] += 1519757;
          result[4] += 0;
          result[5] += 264305;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 33405301;
          result[5] += 9544371;
        } else {
          result[0] += 365529;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42218614;
          result[5] += 365529;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 115301;
          result[2] += 172951;
          result[3] += 2017769;
          result[4] += 1787167;
          result[5] += 38856482;
        } else {
          result[0] += 3960523;
          result[1] += 440058;
          result[2] += 704092;
          result[3] += 14169871;
          result[4] += 2552337;
          result[5] += 21122789;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 4849156;
          result[2] += 692736;
          result[3] += 0;
          result[4] += 37407779;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42660773;
          result[2] += 0;
          result[3] += 0;
          result[4] += 288899;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 35415224;
          result[1] += 1261273;
          result[2] += 0;
          result[3] += 1028933;
          result[4] += 4148925;
          result[5] += 1095316;
        } else {
          result[0] += 9445976;
          result[1] += 1475933;
          result[2] += 7822449;
          result[3] += 11069503;
          result[4] += 4132614;
          result[5] += 9003196;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1263225;
          result[3] += 0;
          result[4] += 7579354;
          result[5] += 34107093;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3361278;
          result[3] += 23528951;
          result[4] += 0;
          result[5] += 16059442;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20734324;
          result[3] += 18364687;
          result[4] += 0;
          result[5] += 3850660;
        } else {
          result[0] += 1867377;
          result[1] += 3734754;
          result[2] += 32118885;
          result[3] += 2614327;
          result[4] += 1120426;
          result[5] += 1493901;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30678337;
          result[3] += 12271335;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 322929;
          result[1] += 0;
          result[2] += 40043304;
          result[3] += 2152865;
          result[4] += 107643;
          result[5] += 322929;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
          result[0] += 628531;
          result[1] += 1466574;
          result[2] += 628531;
          result[3] += 0;
          result[4] += 38130929;
          result[5] += 2095105;
        } else {
          result[0] += 13498468;
          result[1] += 0;
          result[2] += 409044;
          result[3] += 0;
          result[4] += 12271335;
          result[5] += 16770824;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 517465;
          result[2] += 0;
          result[3] += 1500651;
          result[4] += 2018117;
          result[5] += 38913438;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2863311;
          result[3] += 15810459;
          result[4] += 871442;
          result[5] += 23404459;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 0;
          result[1] += 41532551;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1308111;
          result[5] += 109009;
        } else {
          result[0] += 0;
          result[1] += 12909728;
          result[2] += 0;
          result[3] += 4468752;
          result[4] += 24578136;
          result[5] += 993056;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 36491846;
          result[1] += 820041;
          result[2] += 136673;
          result[3] += 888378;
          result[4] += 3553513;
          result[5] += 1059220;
        } else {
          result[0] += 8326977;
          result[1] += 1022611;
          result[2] += 5551318;
          result[3] += 11102636;
          result[4] += 3798270;
          result[5] += 13147859;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 33405301;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9544371;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1060485;
          result[3] += 9014128;
          result[4] += 3181457;
          result[5] += 29693601;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3346727;
          result[3] += 34582853;
          result[4] += 0;
          result[5] += 5020091;
        } else {
          result[0] += 1263225;
          result[1] += 0;
          result[2] += 25264513;
          result[3] += 7579354;
          result[4] += 0;
          result[5] += 8842579;
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 189205;
          result[2] += 27245607;
          result[3] += 12298364;
          result[4] += 378411;
          result[5] += 2838084;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40606963;
          result[3] += 2342709;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
          result[0] += 28633115;
          result[1] += 0;
          result[2] += 9544371;
          result[3] += 0;
          result[4] += 4772185;
          result[5] += 0;
        } else {
          result[0] += 677828;
          result[1] += 0;
          result[2] += 39683772;
          result[3] += 1848622;
          result[4] += 184862;
          result[5] += 554586;
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
