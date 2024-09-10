
#include "header.h"


static const int32_t num_class[] = {  7, };

int32_t get_num_target(void) {
  return N_TARGET;
}
void get_num_class(int32_t* out) {
  for (int i = 0; i < N_TARGET; ++i) {
    out[i] = num_class[i];
  }
}
int32_t get_num_feature(void) {
  return 7;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9930795847750865;
          result[5] += 0.006920415224913495;
          result[6] += 0;
        } else {
          result[0] += 0.07264150943396226;
          result[1] += 0;
          result[2] += 0.016981132075471698;
          result[3] += 0.9075471698113208;
          result[4] += 0;
          result[5] += 0.002830188679245283;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.9959915611814346;
          result[1] += 0;
          result[2] += 0.0013713080168776372;
          result[3] += 0.0026371308016877636;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5411301859799714;
          result[1] += 0;
          result[2] += 0.0075107296137339056;
          result[3] += 0.45064377682403434;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000715307582260372;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
          result[0] += 0.08706952566601689;
          result[1] += 0;
          result[2] += 0.011695906432748537;
          result[3] += 0.7823261858349577;
          result[4] += 0.11695906432748537;
          result[5] += 0.001949317738791423;
          result[6] += 0;
        } else {
          result[0] += 0.9156752833003993;
          result[1] += 0.0006049118845021575;
          result[2] += 0.0025003024559422512;
          result[3] += 0.08097753760535549;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00024196475380086301;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x445c0000))) ) ) {
          result[0] += 0.00411522633744856;
          result[1] += 0;
          result[2] += 0.00205761316872428;
          result[3] += 0;
          result[4] += 0.9938271604938271;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42da0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0.22641509433962265;
          result[1] += 0.011611030478955007;
          result[2] += 0;
          result[3] += 0.7619738751814223;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0037243947858473;
          result[1] += 0.0037243947858473;
          result[2] += 0;
          result[3] += 0.9925512104283054;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42ce0000))) ) ) {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.023529411764705882;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9764705882352941;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9222222222222223;
          result[1] += 0;
          result[2] += 0.07777777777777778;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42020000))) ) ) {
          result[0] += 0.9987995198079231;
          result[1] += 0;
          result[2] += 0.0012004801920768306;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.980836236933798;
          result[1] += 0;
          result[2] += 0.0156794425087108;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.003484320557491289;
        } else {
          result[0] += 0.9981645763230346;
          result[1] += 0;
          result[2] += 0.0018354236769654328;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42100000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0.039473684210526314;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6842105263157895;
          result[4] += 0.27631578947368424;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.004898530440867741;
          result[2] += 0.007697690692792163;
          result[3] += 0.9622113365990204;
          result[4] += 0.024842547235829255;
          result[5] += 0.00034989503149055286;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0.9975663716814159;
          result[1] += 0;
          result[2] += 0.001991150442477876;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004424778761061947;
        } else {
          result[0] += 0.9775280898876404;
          result[1] += 0.02247191011235955;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.8375516528925621;
          result[1] += 0;
          result[2] += 0.008264462809917357;
          result[3] += 0.08135330578512398;
          result[4] += 0.0712809917355372;
          result[5] += 0.0005165289256198348;
          result[6] += 0.0010330578512396697;
        } else {
          result[0] += 0.05321610365571495;
          result[1] += 0.006015733456732994;
          result[2] += 0.0023137436372049976;
          result[3] += 0.3271633503007867;
          result[4] += 0.6112910689495604;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03698435277382646;
          result[3] += 0;
          result[4] += 0.9601706970128022;
          result[5] += 0.002844950213371266;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.001053370786516854;
          result[3] += 0.9989466292134831;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40600000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.75;
          result[5] += 0.25;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41780000))) ) ) {
          result[0] += 0.11538461538461539;
          result[1] += 0.4230769230769231;
          result[2] += 0.3076923076923077;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.15384615384615385;
          result[6] += 0;
        } else {
          result[0] += 0.0006311139160618492;
          result[1] += 0.0018933417481855476;
          result[2] += 0.002840012622278321;
          result[3] += 0.9933733038813506;
          result[4] += 0;
          result[5] += 0.0012622278321236984;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9977873226604191;
          result[1] += 0;
          result[2] += 0.0018222048678901471;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003904724716907458;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429c0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.038834951456310676;
          result[2] += 0;
          result[3] += 0.9611650485436893;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423a0000))) ) ) {
          result[0] += 0.9995600527936648;
          result[1] += 0;
          result[2] += 0.0004399472063352398;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.510530871321408;
          result[1] += 0.0030294287362954415;
          result[2] += 0.007789959607616849;
          result[3] += 0.4780727062896711;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005770340450086555;
        } else {
          result[0] += 0.9636155606407323;
          result[1] += 0;
          result[2] += 0.008237986270022883;
          result[3] += 0.02700228832951945;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011441647597254005;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x41c80000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41780000))) ) ) {
          result[0] += 0;
          result[1] += 0.4;
          result[2] += 0.6;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0015375153751537515;
          result[2] += 0.006765067650676507;
          result[3] += 0.9904674046740467;
          result[4] += 0;
          result[5] += 0.0012300123001230013;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9929577464788732;
          result[1] += 0;
          result[2] += 0.006259780907668232;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000782472613458529;
        } else {
          result[0] += 0.9986405939558716;
          result[1] += 0;
          result[2] += 0.0013594060441284115;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0.9631624036225677;
          result[1] += 0.0017133765756945293;
          result[2] += 0.008077346713988496;
          result[3] += 0.02570064863541794;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001346224452331416;
        } else {
          result[0] += 0.24882629107981222;
          result[1] += 0.01564945226917058;
          result[2] += 0;
          result[3] += 0.7355242566510172;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.8;
          result[2] += 0;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0039768618944323935;
          result[3] += 0.9960231381055676;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x426c0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.06381381381381383;
          result[1] += 0.009759759759759762;
          result[2] += 0;
          result[3] += 0.9241741741741742;
          result[4] += 0.0022522522522522527;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0.02577319587628866;
          result[1] += 0;
          result[2] += 0.041237113402061855;
          result[3] += 0.9329896907216495;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9829642248722317;
          result[1] += 0;
          result[2] += 0.017035775127768313;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0038461538461538464;
          result[1] += 0.04230769230769231;
          result[2] += 0;
          result[3] += 0.9538461538461539;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0.001342281879194631;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9939597315436243;
          result[4] += 0.002684563758389262;
          result[5] += 0.002013422818791947;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.041666666666666664;
          result[3] += 0;
          result[4] += 0.9583333333333334;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9922630560928434;
          result[1] += 0;
          result[2] += 0.006769825918762089;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009671179883945841;
        } else {
          result[0] += 0.9998328108672936;
          result[1] += 0;
          result[2] += 0.0001671891327063741;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9515677118078719;
          result[1] += 0.001067378252168112;
          result[2] += 0.006804536357571714;
          result[3] += 0.03935957304869913;
          result[4] += 0;
          result[5] += 0.00040026684456304204;
          result[6] += 0.0008005336891260841;
        } else {
          result[0] += 0;
          result[1] += 0.0028178936245156746;
          result[2] += 0.007396970764353646;
          result[3] += 0.9897851356111307;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x41500000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9965156794425087;
          result[5] += 0.003484320557491289;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c00000))) ) ) {
          result[0] += 0.0003169572107765452;
          result[1] += 0.0003169572107765452;
          result[2] += 0.003803486529318542;
          result[3] += 0.9933438985736925;
          result[4] += 0;
          result[5] += 0.0022187004754358162;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42800000))) ) ) {
          result[0] += 0.9985958343084484;
          result[1] += 0;
          result[2] += 0.0012871518839223028;
          result[3] += 0.00011701380762930026;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.03773584905660377;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9622641509433962;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
          result[0] += 0.384;
          result[1] += 0.032;
          result[2] += 0;
          result[3] += 0.584;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9951353637901861;
          result[1] += 0.0011104060913705585;
          result[2] += 0.00338409475465313;
          result[3] += 0.00010575296108291032;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002643824027072758;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004715498270983967;
          result[3] += 0.9946557686262182;
          result[4] += 0;
          result[5] += 0.0006287331027978623;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42180000))) ) ) {
          result[0] += 0.9954622802041975;
          result[1] += 0;
          result[2] += 0.002836074872376631;
          result[3] += 0.0007562866326337683;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009453582907922104;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x418c0000))) ) ) {
          result[0] += 0;
          result[1] += 0.016591251885369532;
          result[2] += 0.013574660633484163;
          result[3] += 0;
          result[4] += 0.9653092006033183;
          result[5] += 0.004524886877828055;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0006644518272425251;
          result[2] += 0.0079734219269103;
          result[3] += 0.9893687707641197;
          result[4] += 0;
          result[5] += 0.001993355481727575;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40900000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9985029940119761;
          result[1] += 0;
          result[2] += 0.0014970059880239522;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0.9859634198213526;
          result[1] += 0;
          result[2] += 0.0034028073160357296;
          result[3] += 0.009783071033602722;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008507018290089324;
        } else {
          result[0] += 0.3719247467438495;
          result[1] += 0;
          result[2] += 0.0120598166907863;
          result[3] += 0.6140858658948384;
          result[4] += 0;
          result[5] += 0.000482392667631452;
          result[6] += 0.001447178002894356;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x41080000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41ec0000))) ) ) {
          result[0] += 0.08;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.88;
          result[4] += 0.04;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0.8672735618115055;
          result[1] += 0.0006502447980416157;
          result[2] += 0.002639228886168911;
          result[3] += 0.12186352509179926;
          result[4] += 0.007305691554467564;
          result[5] += 0.0001529987760097919;
          result[6] += 0.00011474908200734394;
        } else {
          result[0] += 0.007662835249042145;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9923371647509579;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0.48695652173913045;
          result[1] += 0;
          result[2] += 0.034782608695652174;
          result[3] += 0.4782608695652174;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.021630615640599003;
          result[2] += 0;
          result[3] += 0.978369384359401;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
          result[0] += 0.3939393939393939;
          result[1] += 0;
          result[2] += 0.5454545454545454;
          result[3] += 0.06060606060606061;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0054160512063023145;
          result[2] += 0.002461841457410143;
          result[3] += 0.9921221073362876;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9878048780487805;
          result[1] += 0;
          result[2] += 0.012195121951219513;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
          result[0] += 0.11956521739130437;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8764302059496568;
          result[4] += 0.0017162471395881008;
          result[5] += 0.0022883295194508014;
          result[6] += 0;
        } else {
          result[0] += 0.9946055293324343;
          result[1] += 0.001541277333590213;
          result[2] += 0.0027935651671322607;
          result[3] += 0.00038531933339755323;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006743088334457181;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.9957051814907176;
          result[1] += 0;
          result[2] += 0.0002770850651149903;
          result[3] += 0.003809919645331117;
          result[4] += 0;
          result[5] += 0.00020781379883624273;
          result[6] += 0;
        } else {
          result[0] += 0.9547075606276748;
          result[1] += 0;
          result[2] += 0.006419400855920115;
          result[3] += 0;
          result[4] += 0.03887303851640514;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0.1589435774309724;
          result[1] += 0;
          result[2] += 0.010084033613445379;
          result[3] += 0.6722689075630253;
          result[4] += 0.15870348139255702;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9976019184652278;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.002398081534772182;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0.6706114398422091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.32938856015779094;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9638977635782747;
          result[1] += 0;
          result[2] += 0.0025559105431309905;
          result[3] += 0.02843450479233227;
          result[4] += 0.003514376996805112;
          result[5] += 0.0006389776357827476;
          result[6] += 0.0009584664536741214;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9586466165413534;
          result[1] += 0;
          result[2] += 0.03007518796992481;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.011278195488721804;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9897959183673469;
          result[1] += 0;
          result[2] += 0.01020408163265306;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.9973529411764706;
          result[1] += 0;
          result[2] += 0.0026470588235294116;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 0.015873015873015872;
          result[1] += 0.0054249547920434;
          result[2] += 0.016073940124573034;
          result[3] += 0.7799879445449066;
          result[4] += 0.18083182640144665;
          result[5] += 0.0018083182640144665;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.012725344644750796;
          result[2] += 0;
          result[3] += 0.1102863202545069;
          result[4] += 0.8769883351007424;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.002331002331002331;
          result[3] += 0;
          result[4] += 0.9976689976689976;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 0.9854963740935234;
          result[1] += 0;
          result[2] += 0.005501375343835959;
          result[3] += 0.007001750437609402;
          result[4] += 0;
          result[5] += 0.00037509377344336085;
          result[6] += 0.001625406351587897;
        } else {
          result[0] += 0.8325123152709359;
          result[1] += 0.009852216748768473;
          result[2] += 0.0049261083743842365;
          result[3] += 0.15270935960591134;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0034207525655644243;
          result[3] += 0.9965792474344356;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0.9989373007438895;
          result[1] += 0;
          result[2] += 0.0010626992561105207;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9775533108866442;
          result[1] += 0;
          result[2] += 0.017957351290684626;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.004489337822671156;
        } else {
          result[0] += 0.9994305239179955;
          result[1] += 0;
          result[2] += 0.0005694760820045558;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0.0019900497512437814;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9970149253731344;
          result[5] += 0.0009950248756218907;
          result[6] += 0;
        } else {
          result[0] += 0.022596964586846548;
          result[1] += 0.007419898819561553;
          result[2] += 0.027993254637436765;
          result[3] += 0.9392917369308601;
          result[4] += 0;
          result[5] += 0.00269814502529511;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41700000))) ) ) {
          result[0] += 0.6125509372453138;
          result[1] += 0;
          result[2] += 0.002444987775061125;
          result[3] += 0.3838630806845966;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001140994295028525;
        } else {
          result[0] += 0.920673076923077;
          result[1] += 0;
          result[2] += 0.003846153846153847;
          result[3] += 0.07500000000000001;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00048076923076923085;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0.3860103626943005;
          result[1] += 0;
          result[2] += 0.012953367875647668;
          result[3] += 0.6010362694300518;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.109375;
          result[1] += 0.01328125;
          result[2] += 0;
          result[3] += 0.87734375;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40900000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9985771200910644;
          result[1] += 0;
          result[2] += 0.0011383039271485487;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002845759817871372;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
          result[0] += 0;
          result[1] += 0.0392156862745098;
          result[2] += 0;
          result[3] += 0.08169934640522876;
          result[4] += 0.8790849673202614;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.021517553793884484;
          result[1] += 0.009343148357870895;
          result[2] += 0.00594563986409966;
          result[3] += 0.9623442808607021;
          result[4] += 0.0005662514156285391;
          result[5] += 0.00028312570781426955;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.009603072983354673;
          result[3] += 0.030729833546734954;
          result[4] += 0.9596670934699104;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.020930232558139535;
          result[3] += 0.42790697674418604;
          result[4] += 0.5488372093023256;
          result[5] += 0.002325581395348837;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42200000))) ) ) {
          result[0] += 0.9848484848484849;
          result[1] += 0.00015782828282828284;
          result[2] += 0.004892676767676768;
          result[3] += 0.00946969696969697;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006313131313131314;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x424a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9996014348345954;
          result[4] += 0;
          result[5] += 0.00039856516540454366;
          result[6] += 0;
        } else {
          result[0] += 0.9937357630979499;
          result[1] += 0;
          result[2] += 0.0056947608200455585;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005694760820045558;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9596774193548387;
          result[1] += 0;
          result[2] += 0.03494623655913978;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.005376344086021506;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9924812030075187;
          result[1] += 0;
          result[2] += 0.007518796992481203;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9992955620408575;
          result[1] += 0;
          result[2] += 0.0007044379591425984;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0.4402761104441777;
          result[1] += 0;
          result[2] += 0.01050420168067227;
          result[3] += 0.49939975990396157;
          result[4] += 0.04921968787515006;
          result[5] += 0;
          result[6] += 0.0006002400960384153;
        } else {
          result[0] += 0.9223985890652557;
          result[1] += 0;
          result[2] += 0.010582010582010581;
          result[3] += 0.06231628453850676;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.004703115814226925;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.09795191451469279;
          result[1] += 0.01068566340160285;
          result[2] += 0;
          result[3] += 0.8895814781834372;
          result[4] += 0;
          result[5] += 0.0017809439002671415;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x41500000))) ) ) {
          result[0] += 0.125;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.875;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0.6611337740891828;
          result[1] += 0.0033760022506681676;
          result[2] += 0.0036573357715571813;
          result[3] += 0.33112955408636946;
          result[4] += 0;
          result[5] += 0.00042200028133352094;
          result[6] += 0.000281333520889014;
        } else {
          result[0] += 0.05764563106796117;
          result[1] += 0.007888349514563107;
          result[2] += 0.023058252427184466;
          result[3] += 0.9114077669902912;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40200000))) ) ) {
          result[0] += 0.9949874686716792;
          result[1] += 0;
          result[2] += 0.005012531328320802;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9851851851851852;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.014814814814814815;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0.9996718621821165;
          result[1] += 0;
          result[2] += 0.00032813781788351107;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cc0000))) ) ) {
          result[0] += 0.025047644976858154;
          result[1] += 0.007623196297304655;
          result[2] += 0.0057173972229784915;
          result[3] += 0.9602504764497686;
          result[4] += 0.0010890280424720937;
          result[5] += 0.0002722570106180234;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.03484320557491289;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9651567944250871;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.045771144278606964;
          result[4] += 0.954228855721393;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.025966532025389497;
          result[3] += 0.26774379688401617;
          result[4] += 0.7039815349105597;
          result[5] += 0.002308136180034622;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0.9848993288590604;
          result[1] += 0.0008389261744966443;
          result[2] += 0.014261744966442953;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9961579509071505;
          result[1] += 0;
          result[2] += 0.0029882604055496264;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008537886872998933;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0.0030592734225621415;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9969407265774378;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9456106870229007;
          result[1] += 0;
          result[2] += 0.004770992366412214;
          result[3] += 0.04770992366412214;
          result[4] += 0;
          result[5] += 0.0009541984732824427;
          result[6] += 0.0009541984732824427;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0.0838126540673788;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.913722267871816;
          result[4] += 0;
          result[5] += 0.0024650780608052587;
          result[6] += 0;
        } else {
          result[0] += 0.16169724770642205;
          result[1] += 0.0005733944954128442;
          result[2] += 0;
          result[3] += 0.8360091743119267;
          result[4] += 0;
          result[5] += 0.0017201834862385324;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421c0000))) ) ) {
          result[0] += 0.0029850746268656717;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9970149253731343;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.32926829268292684;
          result[3] += 0;
          result[4] += 0.6585365853658537;
          result[5] += 0.012195121951219513;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9885714285714285;
          result[4] += 0.011428571428571429;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 0.024390243902439025;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.975609756097561;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0014461315979754157;
          result[2] += 0;
          result[3] += 0.0007230657989877079;
          result[4] += 0.9978308026030369;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40200000))) ) ) {
          result[0] += 0.9973876698014629;
          result[1] += 0;
          result[2] += 0.002612330198537095;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9736842105263158;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.02631578947368421;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.9991937341626353;
          result[1] += 0;
          result[2] += 0.0008062658373646625;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.0840035746201966;
          result[1] += 0.024128686327077747;
          result[2] += 0.02323503127792672;
          result[3] += 0.868632707774799;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9807764794572182;
          result[1] += 0.00025128785023244125;
          result[2] += 0.005779620555346149;
          result[3] += 0.01193617288604096;
          result[4] += 0;
          result[5] += 0.00012564392511622062;
          result[6] += 0.0011307953260459858;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 0;
          result[1] += 0.0014275517487508922;
          result[2] += 0;
          result[3] += 0.9985724482512491;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0.1792152704135737;
          result[1] += 0.004772004241781549;
          result[2] += 0;
          result[3] += 0.7852598091198303;
          result[4] += 0.030752916224814422;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.06511627906976744;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9348837209302325;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x46503000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9947512301804264;
          result[1] += 0;
          result[2] += 0.0008747949699289229;
          result[3] += 0.004155276107162383;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00021869874248223073;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9916540212443096;
          result[4] += 0.006828528072837633;
          result[5] += 0.0015174506828528073;
          result[6] += 0;
        } else {
          result[0] += 0.3768545994065282;
          result[1] += 0;
          result[2] += 0.10385756676557864;
          result[3] += 0;
          result[4] += 0.5192878338278932;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9741176470588235;
          result[1] += 0;
          result[2] += 0.011764705882352941;
          result[3] += 0.012941176470588235;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001176470588235294;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9738241955021857;
          result[1] += 0.0005793437615210407;
          result[2] += 0.0012640227524095434;
          result[3] += 0.0238057618370464;
          result[4] += 0;
          result[5] += 0.0002106704587349239;
          result[6] += 0.00031600568810238584;
        } else {
          result[0] += 0.17229496898690558;
          result[1] += 0;
          result[2] += 0.027567195037904894;
          result[3] += 0.6815988973121985;
          result[4] += 0.11853893866299105;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3845726970033297;
          result[1] += 0;
          result[2] += 0.0027746947835738073;
          result[3] += 0.47114317425083246;
          result[4] += 0.1409544950055494;
          result[5] += 0.0005549389567147615;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
          result[0] += 0.1328358208955224;
          result[1] += 0.014925373134328358;
          result[2] += 0;
          result[3] += 0.8522388059701492;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.004807692307692308;
          result[2] += 0;
          result[3] += 0.07211538461538461;
          result[4] += 0.9230769230769231;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0.0021645021645021645;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.021645021645021644;
          result[4] += 0.9761904761904762;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.07801418439716312;
          result[1] += 0;
          result[2] += 0.04964539007092199;
          result[3] += 0.8723404255319149;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0.0015989766549408379;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9968020466901183;
          result[4] += 0.0009593859929645027;
          result[5] += 0.0006395906619763352;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06802721088435375;
          result[3] += 0;
          result[4] += 0.9183673469387755;
          result[5] += 0.013605442176870748;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41300000))) ) ) {
          result[0] += 0.9986338797814208;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.001366120218579235;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03025936599423631;
          result[3] += 0;
          result[4] += 0.9697406340057637;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41b80000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42da0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.014840182648401826;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9851598173515982;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.9973965113251757;
          result[1] += 0;
          result[2] += 0.0026034886748242643;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9995676610462603;
          result[1] += 0;
          result[2] += 0.00014411298457991066;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002882259691598213;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0.989232372351511;
          result[1] += 0.003126085446335533;
          result[2] += 0.005904828065300452;
          result[3] += 0.0010420284821118443;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006946856547412296;
        } else {
          result[0] += 0.01524390243902439;
          result[1] += 0.024390243902439025;
          result[2] += 0;
          result[3] += 0.9603658536585366;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0.002918642831083546;
          result[1] += 0;
          result[2] += 0.005472455308281649;
          result[3] += 0.9916089018606348;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8454545454545455;
          result[1] += 0;
          result[2] += 0.010984848484848484;
          result[3] += 0.14204545454545456;
          result[4] += 0;
          result[5] += 0.0003787878787878788;
          result[6] += 0.0011363636363636363;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40900000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.979498861047836;
          result[1] += 0;
          result[2] += 0.015945330296127564;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.004555808656036446;
        } else {
          result[0] += 0.9993923083601007;
          result[1] += 0;
          result[2] += 0.0006076916398992968;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9932885906040269;
          result[1] += 0;
          result[2] += 0.006711409395973154;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42400000))) ) ) {
          result[0] += 0.9924137931034482;
          result[1] += 0;
          result[2] += 0.005517241379310344;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.000689655172413793;
          result[6] += 0.001379310344827586;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8825301204819277;
          result[4] += 0.11746987951807229;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0.4275449101796407;
          result[1] += 0.006786427145708583;
          result[2] += 0.00718562874251497;
          result[3] += 0.5528942115768463;
          result[4] += 0.004391217564870259;
          result[5] += 0;
          result[6] += 0.0011976047904191617;
        } else {
          result[0] += 0.6288352695859398;
          result[1] += 0.002085195114685731;
          result[2] += 0.0038725052129877867;
          result[3] += 0.35090854929997023;
          result[4] += 0.014000595770032768;
          result[5] += 0.0002978850163836759;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0.0027404768429706767;
          result[1] += 0;
          result[2] += 0.009043573581803233;
          result[3] += 0.7906275691970402;
          result[4] += 0.19649218964099754;
          result[5] += 0.0010961907371882709;
          result[6] += 0;
        } else {
          result[0] += 0.0015754233950374162;
          result[1] += 0.0023631350925561244;
          result[2] += 0.01063410791650256;
          result[3] += 0.34186687672311933;
          result[4] += 0.6435604568727845;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42280000))) ) ) {
          result[0] += 0.9924286546301689;
          result[1] += 0;
          result[2] += 0.0064065230052417;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011648223645894002;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9836065573770492;
          result[5] += 0.01639344262295082;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
          result[0] += 0.0013850415512465374;
          result[1] += 0.008310249307479225;
          result[2] += 0;
          result[3] += 0.989612188365651;
          result[4] += 0;
          result[5] += 0.0006925207756232687;
          result[6] += 0;
        } else {
          result[0] += 0.953168044077135;
          result[1] += 0;
          result[2] += 0.046831955922865015;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9907834101382489;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.009216589861751152;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0.7098078867542973;
          result[1] += 0;
          result[2] += 0.0032861476238624874;
          result[3] += 0.2866531850353893;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002527805864509606;
        } else {
          result[0] += 0.9034564958283671;
          result[1] += 0;
          result[2] += 0.004767580452920143;
          result[3] += 0.08978943186332936;
          result[4] += 0;
          result[5] += 0.0003972983710766786;
          result[6] += 0.0015891934843067143;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40b00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.33756345177664976;
          result[1] += 0.005076142131979695;
          result[2] += 0.0025380710659898475;
          result[3] += 0.6548223350253807;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0.9547043510598736;
          result[1] += 0.0014131647452584604;
          result[2] += 0.0023800669393826703;
          result[3] += 0.04127928597991819;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00022313127556712533;
        } else {
          result[0] += 0.888824995207974;
          result[1] += 0;
          result[2] += 9.584052137243626e-05;
          result[3] += 0.11107916427065363;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
          result[0] += 0.0641025641025641;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9358974358974359;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0.009649568308786187;
          result[1] += 0.0045708481462671405;
          result[2] += 0.014220416455053326;
          result[3] += 0.9705434230573895;
          result[4] += 0;
          result[5] += 0.001015744032503809;
          result[6] += 0;
        } else {
          result[0] += 0.9873595505617978;
          result[1] += 0;
          result[2] += 0.011235955056179775;
          result[3] += 0.0014044943820224719;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 0.9986263736263736;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0013736263736263737;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0009596928982725527;
          result[1] += 0.0006397952655150352;
          result[2] += 0.003198976327575176;
          result[3] += 0.9782469609724888;
          result[4] += 0.01599488163787588;
          result[5] += 0.0009596928982725527;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7253218884120172;
          result[4] += 0.27467811158798283;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.006528189910979229;
          result[2] += 0;
          result[3] += 0.010089020771513354;
          result[4] += 0.9833827893175074;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.9960642715291569;
          result[1] += 0.0006860444123487994;
          result[2] += 0.002708070048745261;
          result[3] += 0.0002888608051994945;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00025275320454955767;
        } else {
          result[0] += 0.7490494296577946;
          result[1] += 0;
          result[2] += 0.053231939163498096;
          result[3] += 0.19771863117870722;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41f00000))) ) ) {
          result[0] += 0;
          result[1] += 0.003257328990228013;
          result[2] += 0;
          result[3] += 0.996742671009772;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42440000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04377564979480164;
          result[3] += 0;
          result[4] += 0.948016415868673;
          result[5] += 0.008207934336525308;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 0.9233716475095786;
          result[1] += 0;
          result[2] += 0.04597701149425287;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.03065134099616858;
        } else {
          result[0] += 0.9956521739130435;
          result[1] += 0;
          result[2] += 0.004347826086956522;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41b40000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42500000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9961240310077519;
          result[5] += 0.003875968992248062;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41780000))) ) ) {
          result[0] += 0;
          result[1] += 0.46153846153846156;
          result[2] += 0.38461538461538464;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.15384615384615385;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0006053268765133172;
          result[2] += 0.0033292978208232446;
          result[3] += 0.9945520581113801;
          result[4] += 0;
          result[5] += 0.001513317191283293;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.9967092841344338;
          result[1] += 0.00026973080865296434;
          result[2] += 0.0008091924259588931;
          result[3] += 0.0021578464692237147;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5.394616173059287e-05;
        } else {
          result[0] += 0.9404915912031048;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.059508408796895215;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0.5687914623593885;
          result[1] += 0.0015863859244303433;
          result[2] += 0.007931929622151716;
          result[3] += 0.4212575713873666;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004326507066628209;
        } else {
          result[0] += 0.005763688760806916;
          result[1] += 0.023054755043227664;
          result[2] += 0;
          result[3] += 0.9711815561959655;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.9932036559643779;
          result[1] += 0;
          result[2] += 0.0026951019451605346;
          result[3] += 0.003749707054136396;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00035153503632528717;
        } else {
          result[0] += 0.918918918918919;
          result[1] += 0;
          result[2] += 0.08108108108108109;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
          result[0] += 0.00030553009471432935;
          result[1] += 0.00458295142071494;
          result[2] += 0.003971891231286282;
          result[3] += 0.9902230369691415;
          result[4] += 0;
          result[5] += 0.0009165902841429881;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.00390625;
          result[2] += 0.00390625;
          result[3] += 0.9921875;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
          result[0] += 0.043478260869565216;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9565217391304348;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.994707063332725;
          result[1] += 0.0008395692644643183;
          result[2] += 0.0023726957473991605;
          result[3] += 0.0017521445519255339;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003285271034860376;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.908675799086758;
          result[1] += 0;
          result[2] += 0.0213089802130898;
          result[3] += 0.0700152207001522;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0.4;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.00849673202614379;
          result[1] += 0;
          result[2] += 0.00718954248366013;
          result[3] += 0.9810457516339869;
          result[4] += 0.0022875816993464053;
          result[5] += 0.000980392156862745;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42640000))) ) ) {
          result[0] += 0.2;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42890000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9699842022116903;
          result[1] += 0;
          result[2] += 0.026856240126382307;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00315955766192733;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x423e0000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9979959919839679;
          result[5] += 0.002004008016032064;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.0009296560272699101;
          result[1] += 0.0003098853424233034;
          result[2] += 0;
          result[3] += 0.996901146575767;
          result[4] += 0;
          result[5] += 0.0018593120545398203;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.23255813953488372;
          result[2] += 0.6744186046511628;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.09302325581395349;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0.9958481613285883;
          result[1] += 0;
          result[2] += 0.004151838671411625;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9664634146341463;
          result[1] += 0;
          result[2] += 0.021341463414634148;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.012195121951219513;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9879518072289156;
          result[1] += 0;
          result[2] += 0.012048192771084338;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.999826659733056;
          result[1] += 0;
          result[2] += 0.0001733402669440111;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9727227844976549;
          result[1] += 0.001974821031843989;
          result[2] += 0.0054307578375709705;
          result[3] += 0.018760799802517897;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001110836830412244;
        } else {
          result[0] += 0;
          result[1] += 0.003121748178980229;
          result[2] += 0.007630939993062782;
          result[3] += 0.989247311827957;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0.4097222222222222;
          result[1] += 0;
          result[2] += 0.06481481481481481;
          result[3] += 0.5254629629629629;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.012232415902140673;
          result[1] += 0.04281345565749235;
          result[2] += 0;
          result[3] += 0.944954128440367;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9782903663500678;
          result[1] += 0;
          result[2] += 0.018995929443690638;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0027137042062415195;
        } else {
          result[0] += 0.9989494572195634;
          result[1] += 0;
          result[2] += 0.001050542780436559;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 0.01778265642151482;
          result[1] += 0.0050493962678375415;
          result[2] += 0.01163556531284303;
          result[3] += 0.8004390779363337;
          result[4] += 0.1633369923161361;
          result[5] += 0.001756311745334797;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2079021636876764;
          result[4] += 0.7920978363123237;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0.013605442176870748;
          result[2] += 0;
          result[3] += 0.18877551020408162;
          result[4] += 0.7976190476190477;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42200000))) ) ) {
          result[0] += 0.9884781565050408;
          result[1] += 0;
          result[2] += 0.004000640102416387;
          result[3] += 0.007361177788446151;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00016002560409665546;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9652855543113102;
          result[1] += 0;
          result[2] += 0.010078387458006719;
          result[3] += 0.023516237402015677;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011198208286674132;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x423e0000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0007518796992481203;
          result[1] += 0.0037593984962406013;
          result[2] += 0.007518796992481203;
          result[3] += 0.9842105263157894;
          result[4] += 0;
          result[5] += 0.0037593984962406013;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42000000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.008064516129032258;
          result[3] += 0.9870967741935484;
          result[4] += 0;
          result[5] += 0.004838709677419355;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0.9982025164769323;
          result[1] += 0;
          result[2] += 0.0017974835230677051;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9754098360655737;
          result[1] += 0;
          result[2] += 0.01366120218579235;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.01092896174863388;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
          result[0] += 0.999031007751938;
          result[1] += 0;
          result[2] += 0.0009689922480620155;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9998516320474777;
          result[1] += 0;
          result[2] += 0.0001483679525222552;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0.9893517068587535;
          result[1] += 0.0028186658315064203;
          result[2] += 0.005010961478233636;
          result[3] += 0.001252740369558409;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0015659254619480112;
        } else {
          result[0] += 0.005199306759098787;
          result[1] += 0;
          result[2] += 0.005199306759098787;
          result[3] += 0.9896013864818024;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0.943949817887495;
          result[1] += 0;
          result[2] += 0.007689194658033185;
          result[3] += 0.04775394577094294;
          result[4] += 0;
          result[5] += 0.00020234722784297855;
          result[6] += 0.0004046944556859571;
        } else {
          result[0] += 0.2592;
          result[1] += 0.0144;
          result[2] += 0;
          result[3] += 0.7264;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42400000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
          result[0] += 0.21942656524283208;
          result[1] += 0.012287887653598596;
          result[2] += 0;
          result[3] += 0.7682855471035693;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5344995140913509;
          result[1] += 0;
          result[2] += 0.024295432458697766;
          result[3] += 0.4412050534499514;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41080000))) ) ) {
          result[0] += 0.0017761989342806397;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9964476021314388;
          result[5] += 0.0017761989342806397;
          result[6] += 0;
        } else {
          result[0] += 0.11571782178217822;
          result[1] += 0;
          result[2] += 0.012995049504950494;
          result[3] += 0.8669554455445545;
          result[4] += 0;
          result[5] += 0.004331683168316832;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 0.05622489959839357;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.08433734939759036;
          result[4] += 0.8594377510040161;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9151515151515152;
          result[4] += 0.08484848484848485;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0.9107833655705996;
          result[1] += 0;
          result[2] += 0.0024177949709864605;
          result[3] += 0.08595261121856866;
          result[4] += 0;
          result[5] += 0.00036266924564796907;
          result[6] += 0.00048355899419729207;
        } else {
          result[0] += 0.9466783216783217;
          result[1] += 0.0008012820512820513;
          result[2] += 0.0035693473193473195;
          result[3] += 0.04858682983682984;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00036421911421911425;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.005396654074473826;
          result[3] += 0.9946033459255261;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41e00000))) ) ) {
          result[0] += 0;
          result[1] += 0.001218769043266301;
          result[2] += 0.001218769043266301;
          result[3] += 0.9963436928702011;
          result[4] += 0.001218769043266301;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9727822580645161;
          result[1] += 0.005040322580645161;
          result[2] += 0.02217741935483871;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.001445086705202312;
          result[1] += 0;
          result[2] += 0.01300578034682081;
          result[3] += 0.2817919075144509;
          result[4] += 0.703757225433526;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cc0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.125;
          result[1] += 0.875;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45b71400))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0.9982514207206644;
          result[1] += 0;
          result[2] += 0.0016236807593830013;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00012489851995253857;
        } else {
          result[0] += 0.9999014487040505;
          result[1] += 0;
          result[2] += 9.855129594954174e-05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
          result[0] += 0.8779027576197388;
          result[1] += 0.003084179970972424;
          result[2] += 0.001632801161103048;
          result[3] += 0.11665457184325109;
          result[4] += 0;
          result[5] += 0.000181422351233672;
          result[6] += 0.0005442670537010159;
        } else {
          result[0] += 0.01877133105802048;
          result[1] += 0;
          result[2] += 0.028156996587030716;
          result[3] += 0.8421501706484642;
          result[4] += 0.1083617747440273;
          result[5] += 0.002559726962457338;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42440000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.008966244725738398;
          result[3] += 0.7953586497890296;
          result[4] += 0.19488396624472576;
          result[5] += 0.0007911392405063292;
          result[6] += 0;
        } else {
          result[0] += 0.9919210053859964;
          result[1] += 0;
          result[2] += 0.004937163375224416;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0031418312387791743;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9879385964912282;
          result[1] += 0;
          result[2] += 0.00986842105263158;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002192982456140351;
        } else {
          result[0] += 0.9991049051199428;
          result[1] += 0;
          result[2] += 0.0008950948800572861;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.99945085118067;
          result[5] += 0.0005491488193300384;
          result[6] += 0;
        } else {
          result[0] += 0.016949152542372885;
          result[1] += 0.006922893291955122;
          result[2] += 0.015516829792313202;
          result[3] += 0.9577464788732395;
          result[4] += 0;
          result[5] += 0.0028646455001193607;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0.9947599729546991;
          result[1] += 0.0003380662609871535;
          result[2] += 0.0037187288708586883;
          result[3] += 0.0003380662609871535;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008451656524678837;
        } else {
          result[0] += 0.7249283667621776;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.27507163323782235;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9654782116581777;
          result[1] += 0;
          result[2] += 0.011884550084889643;
          result[3] += 0.022071307300509338;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005659309564233164;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9490740740740741;
          result[1] += 0;
          result[2] += 0.046296296296296294;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.004629629629629629;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9941253263707572;
          result[1] += 0;
          result[2] += 0.00587467362924282;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9998589463290782;
          result[1] += 0;
          result[2] += 0.00014105367092178575;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0.9985915492957746;
          result[1] += 0;
          result[2] += 0.0014084507042253522;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 0.3148457047539616;
          result[1] += 0.002085070892410342;
          result[2] += 0.012510425354462052;
          result[3] += 0.6701417848206839;
          result[4] += 0.0004170141784820684;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7984983990283758;
          result[1] += 0.0017665893783813625;
          result[2] += 0.0061830628243347684;
          result[3] += 0.18648559125538258;
          result[4] += 0.005299768135144088;
          result[5] += 0.0007728828530418461;
          result[6] += 0.0009937065253395165;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0.0013170892327955218;
          result[2] += 0;
          result[3] += 0.9983536384590056;
          result[4] += 0;
          result[5] += 0.00032927230819888045;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.041666666666666664;
          result[3] += 0;
          result[4] += 0.9556451612903226;
          result[5] += 0.002688172043010753;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9878542510121457;
          result[4] += 0.012145748987854251;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0058823529411764705;
          result[1] += 0.03823529411764706;
          result[2] += 0;
          result[3] += 0.16470588235294117;
          result[4] += 0.7911764705882353;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0003155569580309246;
          result[1] += 0.0009466708740927738;
          result[2] += 0;
          result[3] += 0.9977911012937836;
          result[4] += 0;
          result[5] += 0.0009466708740927738;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x457e0800))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9995300751879699;
          result[5] += 0.00046992481203007516;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.36363636363636365;
          result[2] += 0.5757575757575758;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.06060606060606061;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
          result[0] += 0.9686746987951808;
          result[1] += 0.007228915662650603;
          result[2] += 0.004819277108433735;
          result[3] += 0.01927710843373494;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9976569650375252;
          result[1] += 0.00021965952773201537;
          result[2] += 0.0019037159070107999;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00021965952773201537;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.006006006006006006;
          result[1] += 0.018018018018018018;
          result[2] += 0;
          result[3] += 0.975975975975976;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
          result[0] += 0.016518813092688895;
          result[1] += 0;
          result[2] += 0.000611807892321811;
          result[3] += 0.9828693790149893;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9949671772428884;
          result[1] += 0;
          result[2] += 0.004595185995623632;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000437636761487965;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40600000))) ) ) {
          result[0] += 0.9609756097560975;
          result[1] += 0;
          result[2] += 0.03902439024390244;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9970303219756174;
          result[1] += 0;
          result[2] += 0.0029696780243826195;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0.9991031390134529;
          result[1] += 0;
          result[2] += 0.0008968609865470852;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0.8112777053455019;
          result[1] += 0.00423728813559322;
          result[2] += 0.003259452411994785;
          result[3] += 0.17926988265971316;
          result[4] += 0;
          result[5] += 0.0009778357235984355;
          result[6] += 0.0009778357235984355;
        } else {
          result[0] += 0.887722980062959;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.11070304302203568;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0015739769150052466;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x3f800000))) ) ) {
          result[0] += 0.30160857908847183;
          result[1] += 0.007372654155495978;
          result[2] += 0.006702412868632708;
          result[3] += 0.6340482573726541;
          result[4] += 0.05026809651474531;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.018518518518518517;
          result[1] += 0;
          result[2] += 0.010101010101010102;
          result[3] += 0.9663299663299664;
          result[4] += 0.004208754208754209;
          result[5] += 0.0008417508417508417;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.7879675529517801;
          result[1] += 0;
          result[2] += 0.010590356016223525;
          result[3] += 0.1978368634520054;
          result[4] += 0.0011266336187471834;
          result[5] += 0.0015772870662460567;
          result[6] += 0.0009013068949977468;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.01180195739781232;
          result[3] += 0.8048359240069085;
          result[4] += 0.1833621185952792;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
          result[0] += 0;
          result[1] += 0.010718113612004287;
          result[2] += 0;
          result[3] += 0.19185423365487675;
          result[4] += 0.797427652733119;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
          result[0] += 0.929757343550447;
          result[1] += 0;
          result[2] += 0.002554278416347382;
          result[3] += 0.06513409961685823;
          result[4] += 0;
          result[5] += 0.002554278416347382;
          result[6] += 0;
        } else {
          result[0] += 0.9643582224227385;
          result[1] += 0;
          result[2] += 0.00011279043537108053;
          result[3] += 0.035303406271148204;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00022558087074216106;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41100000))) ) ) {
          result[0] += 0.9977634044611015;
          result[1] += 0.0003022426403917065;
          result[2] += 0.0007858308650184369;
          result[3] += 0.0010276249773318023;
          result[4] += 6.04485280783413e-05;
          result[5] += 0;
          result[6] += 6.04485280783413e-05;
        } else {
          result[0] += 0.8332028191072827;
          result[1] += 0.004306969459671104;
          result[2] += 0.0031323414252153485;
          result[3] += 0.15857478465152702;
          result[4] += 0;
          result[5] += 0.00039154267815191856;
          result[6] += 0.00039154267815191856;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0.017699115044247787;
          result[1] += 0.032448377581120944;
          result[2] += 0;
          result[3] += 0.23893805309734514;
          result[4] += 0.7109144542772862;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.006329113924050633;
          result[4] += 0.9936708860759493;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.1739652069586083;
          result[1] += 0.0020995800839832034;
          result[2] += 0.016796640671865627;
          result[3] += 0.8068386322735452;
          result[4] += 0;
          result[5] += 0.00029994001199760045;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42440000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04935064935064935;
          result[3] += 0;
          result[4] += 0.9415584415584416;
          result[5] += 0.00909090909090909;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x41dc0000))) ) ) {
          result[0] += 0.9949074074074075;
          result[1] += 0;
          result[2] += 0.004166666666666667;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000925925925925926;
        } else {
          result[0] += 0.375;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.625;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e40000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0007861635220125788;
          result[2] += 0.009827044025157234;
          result[3] += 0.8824685534591196;
          result[4] += 0.10573899371069184;
          result[5] += 0.001179245283018868;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.9906735751295337;
          result[1] += 0.0005717348579596213;
          result[2] += 0.0020010720028586742;
          result[3] += 0.006467750580668215;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00028586742897981064;
        } else {
          result[0] += 0.6368005492619293;
          result[1] += 0;
          result[2] += 0.0037761757638173706;
          result[3] += 0.3587366975626502;
          result[4] += 0;
          result[5] += 0.00034328870580157915;
          result[6] += 0.00034328870580157915;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x433e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9714285714285714;
          result[1] += 0;
          result[2] += 0.02857142857142857;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0.001976284584980237;
          result[1] += 0.01383399209486166;
          result[2] += 0;
          result[3] += 0.9841897233201581;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.006060606060606061;
          result[1] += 0.05454545454545454;
          result[2] += 0;
          result[3] += 0.9393939393939394;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.986328125;
          result[1] += 0;
          result[2] += 0.01171875;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001953125;
        } else {
          result[0] += 0.9992927864214993;
          result[1] += 0;
          result[2] += 0.0007072135785007072;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9968612680477087;
          result[1] += 0;
          result[2] += 0.003138731952291274;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9997355896351137;
          result[1] += 0;
          result[2] += 0.00026441036488630354;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0.029194738530638437;
          result[1] += 0.004170676932948349;
          result[2] += 0.012832852101379534;
          result[3] += 0.8713506576836703;
          result[4] += 0.08116778954122555;
          result[5] += 0.0012832852101379534;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04160688665710186;
          result[3] += 0;
          result[4] += 0.9555236728837877;
          result[5] += 0.0028694404591104736;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0.5461723309303125;
          result[1] += 0;
          result[2] += 0.0022313765877102648;
          result[3] += 0.45108135942327504;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005149330587023688;
        } else {
          result[0] += 0.9779510022271715;
          result[1] += 0;
          result[2] += 0.005345211581291759;
          result[3] += 0.015590200445434299;
          result[4] += 0;
          result[5] += 0.00044543429844097997;
          result[6] += 0.0006681514476614699;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
          result[0] += 0.00980392156862745;
          result[1] += 0.029411764705882353;
          result[2] += 0;
          result[3] += 0.06862745098039216;
          result[4] += 0.8921568627450981;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41400000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
          result[0] += 0.14705882352941177;
          result[1] += 0.008891928864569083;
          result[2] += 0.007523939808481532;
          result[3] += 0.8365253077975376;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.009584664536741214;
          result[2] += 0;
          result[3] += 0.9904153354632588;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0.5618305744888024;
          result[1] += 0;
          result[2] += 0.021421616358325218;
          result[3] += 0.41674780915287246;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.009523809523809525;
          result[1] += 0;
          result[2] += 0.05714285714285714;
          result[3] += 0.9333333333333333;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.125;
          result[1] += 0.875;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
          result[0] += 0.9193680196131844;
          result[1] += 0;
          result[2] += 0.002724053391446472;
          result[3] += 0.07654590029964588;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001362026695723236;
        } else {
          result[0] += 0.02830188679245283;
          result[1] += 0;
          result[2] += 0.024871355060034305;
          result[3] += 0.8524871355060034;
          result[4] += 0.09433962264150944;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
          result[0] += 0.3291139240506329;
          result[1] += 0.0054249547920434;
          result[2] += 0;
          result[3] += 0.6455696202531646;
          result[4] += 0.0162748643761302;
          result[5] += 0.003616636528028933;
          result[6] += 0;
        } else {
          result[0] += 0.9977348043122615;
          result[1] += 0.0007970132975376484;
          result[2] += 0.0008389613658291036;
          result[3] += 0.0006292210243718277;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9958386683738797;
          result[4] += 0.0038412291933418692;
          result[5] += 0.0003201024327784891;
          result[6] += 0;
        } else {
          result[0] += 0.4805194805194805;
          result[1] += 0;
          result[2] += 0.02291825821237586;
          result[3] += 0;
          result[4] += 0.4965622612681436;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
          result[0] += 0.782608695652174;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.21739130434782608;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9956641702798581;
          result[1] += 0;
          result[2] += 0.003941663381947182;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00039416633819471815;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x44f6b000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9972826086956522;
          result[5] += 0.002717391304347826;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b40000))) ) ) {
          result[0] += 0.02942694889003614;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9695405265875064;
          result[4] += 0;
          result[5] += 0.0010325245224574084;
          result[6] += 0;
        } else {
          result[0] += 0.16240409207161124;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8375959079283888;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42000000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.2641509433962264;
          result[2] += 0.5849056603773585;
          result[3] += 0.09433962264150944;
          result[4] += 0;
          result[5] += 0.05660377358490566;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0.9964643488509134;
          result[1] += 0;
          result[2] += 0.0035356511490866236;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9773371104815864;
          result[1] += 0;
          result[2] += 0.014164305949008499;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0084985835694051;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9998029168309026;
          result[1] += 0;
          result[2] += 0.00019708316909735908;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0.9665918723510346;
          result[1] += 0.0002493143854400399;
          result[2] += 0.004736973323360758;
          result[3] += 0.027673896783844427;
          result[4] += 0;
          result[5] += 0.0002493143854400399;
          result[6] += 0.0004986287708800798;
        } else {
          result[0] += 0.15748642358417378;
          result[1] += 0.008533747090768037;
          result[2] += 0.017843289371605897;
          result[3] += 0.8161365399534523;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.2857142857142857;
          result[2] += 0;
          result[3] += 0.7142857142857143;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.009996429846483398;
          result[3] += 0.9900035701535166;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x4635bc00))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40600000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9929676511954993;
          result[1] += 0;
          result[2] += 0.004219409282700422;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0028129395218002813;
        } else {
          result[0] += 0.999602994555354;
          result[1] += 0;
          result[2] += 0.000397005444646098;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0;
          result[1] += 0.017152658662092625;
          result[2] += 0;
          result[3] += 0.9828473413379074;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9848179497514443;
          result[1] += 0;
          result[2] += 0.0034932151014375923;
          result[3] += 0.01007658202337767;
          result[4] += 0;
          result[5] += 0.00013435442697836894;
          result[6] += 0.0014778986967620583;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 0.13291703835860838;
          result[1] += 0.0024531668153434435;
          result[2] += 0.014942016057091882;
          result[3] += 0.64049955396967;
          result[4] += 0.20807314897413023;
          result[5] += 0.0011150758251561106;
          result[6] += 0;
        } else {
          result[0] += 0.0009560229445506692;
          result[1] += 0.004780114722753346;
          result[2] += 0;
          result[3] += 0.10994263862332695;
          result[4] += 0.884321223709369;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.00966183574879227;
          result[3] += 0.9903381642512077;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0021470746108427268;
          result[2] += 0.0005367686527106817;
          result[3] += 0.9973161567364466;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.005856515373352855;
          result[3] += 0;
          result[4] += 0.9941434846266471;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.631578947368421;
          result[3] += 0;
          result[4] += 0.3684210526315789;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x41c80000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9988616960728515;
          result[5] += 0.0011383039271485487;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0025023459493274947;
          result[2] += 0.003440725680325305;
          result[3] += 0.9934313418830153;
          result[4] += 0;
          result[5] += 0.0006255864873318737;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0.9473684210526315;
          result[1] += 0.05263157894736842;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
          result[0] += 0.8966887417218543;
          result[1] += 0;
          result[2] += 0.0423841059602649;
          result[3] += 0.060927152317880796;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9971641791044776;
          result[1] += 0.0007462686567164179;
          result[2] += 0.0019029850746268657;
          result[3] += 7.462686567164179e-05;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00011194029850746269;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42200000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42400000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9828660436137072;
          result[4] += 0.012461059190031152;
          result[5] += 0.004672897196261682;
          result[6] += 0;
        } else {
          result[0] += 0.9928595715742945;
          result[1] += 0;
          result[2] += 0.0047602856171370285;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0023801428085685142;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
          result[0] += 0.4368809272918862;
          result[1] += 0;
          result[2] += 0.006954689146469968;
          result[3] += 0.5561643835616439;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0.059895833333333336;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9393601190476191;
          result[4] += 0;
          result[5] += 0.000744047619047619;
          result[6] += 0;
        } else {
          result[0] += 0.4426229508196722;
          result[1] += 0.1311475409836066;
          result[2] += 0.34426229508196726;
          result[3] += 0.0655737704918033;
          result[4] += 0;
          result[5] += 0.016393442622950824;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41f80000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.007473841554559043;
          result[3] += 0.9880418535127056;
          result[4] += 0;
          result[5] += 0.004484304932735426;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x46426200))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0.9957185003957689;
          result[1] += 0.0005037058357918975;
          result[2] += 0.0027703820968554365;
          result[3] += 0.0006836007771461466;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003238108944376484;
        } else {
          result[0] += 0.3404710920770878;
          result[1] += 0.021413276231263382;
          result[2] += 0;
          result[3] += 0.6381156316916489;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0.1961266523209345;
          result[1] += 0;
          result[2] += 0.0046111281893636644;
          result[3] += 0.7992622194897018;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9946200403496974;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.005379959650302623;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
          result[0] += 0.9329140461215933;
          result[1] += 0;
          result[2] += 0.0031446540880503146;
          result[3] += 0.06341719077568134;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005241090146750524;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9922822491730982;
          result[1] += 0;
          result[2] += 0.007717750826901874;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0.960352422907489;
          result[1] += 0;
          result[2] += 0.02643171806167401;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.013215859030837005;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0.9998840176293203;
          result[1] += 0;
          result[2] += 0.00011598237067965669;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9965665236051502;
          result[1] += 0;
          result[2] += 0.0034334763948497852;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9998404849258254;
          result[1] += 0;
          result[2] += 0.0001595150741745095;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9994363021420518;
          result[5] += 0.0005636978579481398;
          result[6] += 0;
        } else {
          result[0] += 0.02037351443123939;
          result[1] += 0.007033713315546932;
          result[2] += 0.016492845015765218;
          result[3] += 0.9546446762066456;
          result[4] += 0;
          result[5] += 0.0014552510308028135;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0.8490990990990992;
          result[1] += 0.004504504504504505;
          result[2] += 0.004504504504504505;
          result[3] += 0.13738738738738743;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.004504504504504505;
        } else {
          result[0] += 0.9904550209205021;
          result[1] += 0;
          result[2] += 0.006014644351464435;
          result[3] += 0.002876569037656904;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000653765690376569;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0018181818181818182;
          result[3] += 0.9981818181818182;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 0.986815415821501;
          result[1] += 0;
          result[2] += 0.013184584178498986;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8240740740740741;
          result[1] += 0;
          result[2] += 0.17592592592592593;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 0.09060077519379844;
          result[1] += 0.005813953488372093;
          result[2] += 0.008236434108527133;
          result[3] += 0.8812984496124031;
          result[4] += 0.014050387596899225;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.18556701030927836;
          result[4] += 0.8144329896907216;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0.01098901098901099;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.989010989010989;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.4117647058823529;
          result[1] += 0.5882352941176471;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 0.9863156977250936;
          result[1] += 0.00021790290246666085;
          result[2] += 0.0006972892878933148;
          result[3] += 0.012376884860106336;
          result[4] += 0.00013074174147999652;
          result[5] += 0.00013074174147999652;
          result[6] += 0.00013074174147999652;
        } else {
          result[0] += 0.9372077488309953;
          result[1] += 0.01002004008016032;
          result[2] += 0.0013360053440213762;
          result[3] += 0.05143620574482298;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
          result[0] += 0.9719395621338267;
          result[1] += 0;
          result[2] += 0.001541782300339192;
          result[3] += 0.026210299105766267;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003083564600678384;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.017793594306049824;
          result[3] += 0.9448398576512456;
          result[4] += 0.03558718861209965;
          result[5] += 0.0017793594306049821;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
          result[0] += 0.16292273512712913;
          result[1] += 0;
          result[2] += 0.006665020982473464;
          result[3] += 0.6692174771661319;
          result[4] += 0.16119476672426564;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0.7713950762016413;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.22860492379835873;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.943581616481775;
          result[1] += 0;
          result[2] += 0.006339144215530904;
          result[3] += 0.044057052297939776;
          result[4] += 0.003486529318541997;
          result[5] += 0.0009508716323296355;
          result[6] += 0.001584786053882726;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0.99573905377608;
          result[1] += 0;
          result[2] += 0.003820158683514546;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004407875404055245;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0.02094647013188518;
          result[1] += 0.005689164727178691;
          result[2] += 0.017584690974915957;
          result[3] += 0.9402637703646237;
          result[4] += 0.012412723041117145;
          result[5] += 0.0031031807602792862;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0.9798042566412927;
          result[1] += 0;
          result[2] += 0.0045052042877116675;
          result[3] += 0.01553518719900575;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001553518719900575;
        } else {
          result[0] += 0.38832186090671733;
          result[1] += 0;
          result[2] += 0.004272489912176596;
          result[3] += 0.6064562069784002;
          result[4] += 0;
          result[5] += 0.00023736055067647758;
          result[6] += 0.0007120816520294327;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cc0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.013651877133105802;
          result[1] += 0.04778156996587031;
          result[2] += 0;
          result[3] += 0.006825938566552901;
          result[4] += 0.931740614334471;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x41b40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.07407407407407407;
          result[4] += 0.9259259259259259;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.021815622800844477;
          result[4] += 0.9781843771991555;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
          result[0] += 0.00226904376012966;
          result[1] += 0.0006482982171799027;
          result[2] += 0.002917341977309562;
          result[3] += 0.9753646677471637;
          result[4] += 0.01815235008103728;
          result[5] += 0.0006482982171799027;
          result[6] += 0;
        } else {
          result[0] += 0.9986431478968792;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0013568521031207597;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.05325443786982249;
          result[2] += 0;
          result[3] += 0.9467455621301775;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0.94874022589053;
          result[1] += 0;
          result[2] += 0.036490008688097306;
          result[3] += 0.014769765421372719;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.997939303109779;
          result[1] += 0.0004496065942300487;
          result[2] += 0.0013113525665043087;
          result[3] += 0.00011240164855751218;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00018733608092918696;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0.9505494505494505;
          result[1] += 0.04945054945054945;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.027737226277372264;
          result[3] += 0.04671532846715328;
          result[4] += 0.9255474452554745;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9931729518855656;
          result[4] += 0.005201560468140442;
          result[5] += 0.001625487646293888;
          result[6] += 0;
        } else {
          result[0] += 0.7671232876712328;
          result[1] += 0;
          result[2] += 0.2328767123287671;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x425c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9906803355079218;
          result[1] += 0;
          result[2] += 0.008387698042870458;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009319664492078286;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x4635bc00))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0.9963942307692307;
          result[1] += 0;
          result[2] += 0.003605769230769231;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9806629834254144;
          result[1] += 0;
          result[2] += 0.016574585635359115;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0027624309392265192;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0.9992925005053568;
          result[1] += 0;
          result[2] += 0.0007074994946432181;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x425c0000))) ) ) {
          result[0] += 0.9258517034068137;
          result[1] += 0;
          result[2] += 0.03807615230460922;
          result[3] += 0.036072144288577156;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.09381663113006397;
          result[1] += 0.005685856432125089;
          result[2] += 0;
          result[3] += 0.837953091684435;
          result[4] += 0.06254442075337598;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.8351074932164476;
          result[1] += 0.002713420997704029;
          result[2] += 0.003130870381966187;
          result[3] += 0.1580045919432269;
          result[4] += 0;
          result[5] += 0.00041744938426215825;
          result[6] += 0.0006261740763932374;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9967320261437909;
          result[4] += 0.002178649237472767;
          result[5] += 0.0010893246187363835;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0.0025068368277119417;
          result[1] += 0;
          result[2] += 0.012989972652689152;
          result[3] += 0.8195077484047402;
          result[4] += 0.164767547857794;
          result[5] += 0.00022789425706472196;
          result[6] += 0;
        } else {
          result[0] += 0.9884375926474949;
          result[1] += 0;
          result[2] += 0.008597687518529499;
          result[3] += 0.0017788319003854136;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011858879335902757;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.15555555555555556;
          result[4] += 0.8444444444444444;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.01020408163265306;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9897959183673469;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42df0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7548321464903357;
          result[4] += 0.2451678535096643;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.024096385542168676;
          result[1] += 0.1566265060240964;
          result[2] += 0;
          result[3] += 0.8192771084337349;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41200000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.29882484611080024;
          result[1] += 0.006155567991046447;
          result[2] += 0.016787912702853944;
          result[3] += 0.6782316731952994;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42f30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.12380952380952381;
          result[4] += 0.8761904761904762;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.004338394793926247;
          result[2] += 0;
          result[3] += 0.010845986984815618;
          result[4] += 0.9848156182212582;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45cb4000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9981062314004869;
          result[1] += 0;
          result[2] += 0.0016232302281540265;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00027053837135900444;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
          result[0] += 0.4697442295695571;
          result[1] += 0.002183406113537118;
          result[2] += 0.005770430442919526;
          result[3] += 0.5031191515907674;
          result[4] += 0.019026824703680598;
          result[5] += 0;
          result[6] += 0.00015595757953836556;
        } else {
          result[0] += 0.04792926942764077;
          result[1] += 0;
          result[2] += 0.010702652396463471;
          result[3] += 0.6067938576081898;
          result[4] += 0.33085155886458817;
          result[5] += 0.0037226617031177293;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0.9754292480757845;
          result[1] += 0;
          result[2] += 0.004736530491415038;
          result[3] += 0.019242155121373596;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005920663114268798;
        } else {
          result[0] += 0.9222873900293255;
          result[1] += 0;
          result[2] += 0.008797653958944282;
          result[3] += 0.0689149560117302;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45cb4000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9979136429608128;
          result[1] += 0;
          result[2] += 0.0019956458635703917;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9.0711175616836e-05;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.02847113884555382;
          result[1] += 0.0039001560062402497;
          result[2] += 0.011310452418096724;
          result[3] += 0.858424336973479;
          result[4] += 0.09555382215288612;
          result[5] += 0.00234009360374415;
          result[6] += 0;
        } else {
          result[0] += 0.987157867427682;
          result[1] += 0;
          result[2] += 0.004021273835776365;
          result[3] += 0.007912829160721235;
          result[4] += 0;
          result[5] += 0.00012971851083149564;
          result[6] += 0.0007783110649889739;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.023943661971830985;
          result[3] += 0;
          result[4] += 0.9732394366197183;
          result[5] += 0.0028169014084507044;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0015644555694618273;
          result[2] += 0.004693366708385482;
          result[3] += 0.9937421777221527;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42f90000))) ) ) {
          result[0] += 0.152276295133438;
          result[1] += 0.011773940345368918;
          result[2] += 0;
          result[3] += 0.8359497645211931;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.05555555555555555;
          result[1] += 0.6111111111111112;
          result[2] += 0;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0.717741935483871;
          result[1] += 0;
          result[2] += 0.056451612903225805;
          result[3] += 0.22580645161290322;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.009478672985781991;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.990521327014218;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43590000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0.9991314224627514;
          result[1] += 0;
          result[2] += 0.0008685775372486136;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.989843028624192;
          result[1] += 0;
          result[2] += 0.009233610341643583;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009233610341643582;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 0.01682368775235532;
          result[1] += 0.0035890533871691345;
          result[2] += 0.008524001794526696;
          result[3] += 0.7545984746523106;
          result[4] += 0.21534320323014808;
          result[5] += 0.0011215791834903546;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.01644398766700925;
          result[2] += 0;
          result[3] += 0.09558067831449127;
          result[4] += 0.8879753340184995;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9901491312080996;
          result[1] += 0;
          result[2] += 0.004514981529621015;
          result[3] += 0.003557258174852921;
          result[4] += 0;
          result[5] += 0.0004104528663291832;
          result[6] += 0.0013681762210972772;
        } else {
          result[0] += 0.8852901484480432;
          result[1] += 0.002699055330634278;
          result[2] += 0.02699055330634278;
          result[3] += 0.08502024291497975;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0.022727272727272728;
          result[2] += 0;
          result[3] += 0.9636363636363636;
          result[4] += 0.013636363636363636;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0014814814814814814;
          result[3] += 0;
          result[4] += 0.9985185185185185;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9972649572649573;
          result[4] += 0.0023931623931623936;
          result[5] += 0.00034188034188034193;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9722222222222222;
          result[3] += 0;
          result[4] += 0.027777777777777776;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42200000))) ) ) {
          result[0] += 0.000554016620498615;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9994459833795014;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x41cc0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.004333023831631074;
          result[2] += 0.002785515320334262;
          result[3] += 0.9904054472299597;
          result[4] += 0;
          result[5] += 0.0024760136180748994;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42740000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x42060000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.024096385542168676;
          result[3] += 0;
          result[4] += 0.9759036144578314;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.975;
          result[1] += 0;
          result[2] += 0.025;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9986342795824797;
          result[1] += 0;
          result[2] += 0.001268168959125939;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9.7551458394303e-05;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0.9621285923039454;
          result[1] += 0.001948368241597662;
          result[2] += 0.008402338041889917;
          result[3] += 0.026546517291768143;
          result[4] += 0;
          result[5] += 0.00024354603019970775;
          result[6] += 0.0007306380905991232;
        } else {
          result[0] += 0.2310126582278481;
          result[1] += 0.0189873417721519;
          result[2] += 0;
          result[3] += 0.75;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.009847806624888093;
          result[3] += 0.990152193375112;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0017421602787456446;
          result[2] += 0.0005807200929152149;
          result[3] += 0.9976771196283392;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9986326344576116;
          result[1] += 0;
          result[2] += 0.0013673655423883319;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.7225575254620898;
          result[1] += 0.0011316484345529991;
          result[2] += 0.005563938136552245;
          result[3] += 0.24358732553753304;
          result[4] += 0.025839305922293478;
          result[5] += 0.00037721614485099967;
          result[6] += 0.0009430403621274991;
        } else {
          result[0] += 0;
          result[1] += 0.0034634760705289673;
          result[2] += 0.009760705289672544;
          result[3] += 0.9836272040302267;
          result[4] += 0.0031486146095717885;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x42cd0000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0.006130268199233717;
          result[2] += 0;
          result[3] += 0.9938697318007663;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.7777777777777778;
          result[2] += 0;
          result[3] += 0.2222222222222222;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42440000))) ) ) {
          result[0] += 0.9508196721311475;
          result[1] += 0;
          result[2] += 0.04918032786885246;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9775280898876404;
          result[1] += 0;
          result[2] += 0.020599250936329586;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0018726591760299626;
        } else {
          result[0] += 0.9986013986013986;
          result[1] += 0;
          result[2] += 0.0013986013986013986;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.99617102744097;
          result[1] += 0;
          result[2] += 0.0038289725590299937;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9998232747194487;
          result[1] += 0;
          result[2] += 0.00017672528055138288;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9119774426872624;
          result[1] += 0.0011033468186833395;
          result[2] += 0.002942258183155572;
          result[3] += 0.08250582321932083;
          result[4] += 0;
          result[5] += 0.0006129704548240775;
          result[6] += 0.0008581586367537085;
        } else {
          result[0] += 0.1859774212715389;
          result[1] += 0.0020796197266785502;
          result[2] += 0.01871657754010695;
          result[3] += 0.7780748663101604;
          result[4] += 0.013963161021984551;
          result[5] += 0.0011883541295306002;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0.0009612303748798462;
          result[2] += 0;
          result[3] += 0.9983979493752002;
          result[4] += 0.0003204101249599487;
          result[5] += 0.0003204101249599487;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04532163742690058;
          result[3] += 0;
          result[4] += 0.9532163742690059;
          result[5] += 0.0014619883040935672;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41400000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0012755102040816326;
          result[1] += 0.016581632653061226;
          result[2] += 0;
          result[3] += 0.09056122448979592;
          result[4] += 0.8915816326530612;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0.9471007121057986;
          result[1] += 0.0013987792472024414;
          result[2] += 0.003560528992878942;
          result[3] += 0.04743133265513733;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000508646998982706;
        } else {
          result[0] += 0.9984755322933075;
          result[1] += 0.0005081559022308044;
          result[2] += 5.081559022308044e-05;
          result[3] += 0.000813049443569287;
          result[4] += 0.00010163118044616088;
          result[5] += 5.081559022308044e-05;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0.001288659793814433;
          result[1] += 0;
          result[2] += 0.002577319587628866;
          result[3] += 0.9896907216494846;
          result[4] += 0.002577319587628866;
          result[5] += 0.003865979381443299;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x425c0000))) ) ) {
          result[0] += 0.9335106382978724;
          result[1] += 0;
          result[2] += 0.05585106382978724;
          result[3] += 0.010638297872340427;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.06874328678839957;
          result[1] += 0.008055853920515575;
          result[2] += 0.005907626208378088;
          result[3] += 0.9172932330827067;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0.510377358490566;
          result[1] += 0;
          result[2] += 0.023584905660377353;
          result[3] += 0.04056603773584905;
          result[4] += 0.42547169811320745;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2773972602739726;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7226027397260274;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004120443740095087;
          result[3] += 0.9920760697305864;
          result[4] += 0.0025356576862123614;
          result[5] += 0.0012678288431061807;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42400000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x439bc000))) ) ) {
          result[0] += 0.9963570127504554;
          result[1] += 0;
          result[2] += 0.0030358227079538553;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006071645415907711;
        } else {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9985304922850845;
          result[4] += 0.0014695077149155032;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0011013215859030838;
          result[1] += 0.0011013215859030838;
          result[2] += 0.006607929515418502;
          result[3] += 0.9063876651982379;
          result[4] += 0.08259911894273128;
          result[5] += 0.0022026431718061676;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0.9972972972972973;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002702702702702703;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.033576642335766425;
          result[3] += 0;
          result[4] += 0.9664233576642336;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5765765765765766;
          result[4] += 0.42342342342342343;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 0.03802281368821293;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9619771863117871;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9985575189325641;
          result[1] += 0;
          result[2] += 0.001298232960692391;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000144248106743599;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.10326086956521739;
          result[1] += 0.02826086956521739;
          result[2] += 0.03695652173913044;
          result[3] += 0.8315217391304348;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5865038359167059;
          result[1] += 0.0001565680288085173;
          result[2] += 0.0014091122592766556;
          result[3] += 0.4109910756223579;
          result[4] += 0;
          result[5] += 0.0003131360576170346;
          result[6] += 0.0006262721152340692;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42240000))) ) ) {
          result[0] += 0.9989648033126294;
          result[1] += 0;
          result[2] += 0.0010351966873706005;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8405797101449275;
          result[1] += 0;
          result[2] += 0.15942028985507245;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0.2578125;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7421875;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9892065344224038;
          result[1] += 0;
          result[2] += 0.005834305717619604;
          result[3] += 0.002625437572928822;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0023337222870478415;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42020000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9753694581280788;
          result[1] += 0;
          result[2] += 0.0180623973727422;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.006568144499178982;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9935064935064936;
          result[1] += 0;
          result[2] += 0.006493506493506494;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0.9997966653111021;
          result[1] += 0;
          result[2] += 0.00020333468889792598;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.029472954230235784;
          result[1] += 0.0048543689320388345;
          result[2] += 0.023578363384188627;
          result[3] += 0.9400138696255201;
          result[4] += 0;
          result[5] += 0.0020804438280166435;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9842811501597444;
          result[1] += 0;
          result[2] += 0.00536741214057508;
          result[3] += 0.009456869009584664;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008945686900958467;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0014958863126402393;
          result[3] += 0.9985041136873598;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
          result[0] += 0;
          result[1] += 0.009508716323296355;
          result[2] += 0;
          result[3] += 0.9904912836767037;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9723320158102767;
          result[1] += 0;
          result[2] += 0.02766798418972332;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421c0000))) ) ) {
          result[0] += 0.25;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.25;
          result[5] += 0.5;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0006277463904582549;
          result[1] += 0.0025109855618330196;
          result[2] += 0.004708097928436911;
          result[3] += 0.9918392969240427;
          result[4] += 0;
          result[5] += 0.00031387319522912746;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.008298755186721992;
          result[2] += 0;
          result[3] += 0.991701244813278;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 0.9976659372720642;
          result[1] += 0.0004741064916119621;
          result[2] += 0.001787016776075857;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7.293946024799416e-05;
        } else {
          result[0] += 0.5622895622895623;
          result[1] += 0.030303030303030304;
          result[2] += 0.08417508417508418;
          result[3] += 0.32323232323232326;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04078549848942598;
          result[3] += 0;
          result[4] += 0.9531722054380665;
          result[5] += 0.006042296072507553;
          result[6] += 0;
        } else {
          result[0] += 0.6964285714285714;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.30357142857142855;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0.2857142857142857;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7142857142857143;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9897025171624714;
          result[1] += 0;
          result[2] += 0.008009153318077803;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002288329519450801;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x41c80000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
          result[0] += 0.00036231884057971015;
          result[1] += 0;
          result[2] += 0.004710144927536232;
          result[3] += 0.9931159420289855;
          result[4] += 0;
          result[5] += 0.0018115942028985507;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41fc0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9812154696132597;
          result[1] += 0;
          result[2] += 0.016574585635359115;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0022099447513812156;
        } else {
          result[0] += 0.9992119779353822;
          result[1] += 0;
          result[2] += 0.0007880220646178094;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.7747747747747749;
          result[1] += 0.003603603603603604;
          result[2] += 0.00900900900900901;
          result[3] += 0.21141141141141143;
          result[4] += 0;
          result[5] += 0.00020020020020020024;
          result[6] += 0.0010010010010010012;
        } else {
          result[0] += 0;
          result[1] += 0.001794043774668102;
          result[2] += 0.006099748833871547;
          result[3] += 0.9921062073914604;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0.9179019384264538;
          result[1] += 0;
          result[2] += 0.004561003420752566;
          result[3] += 0.07753705815279362;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9900729927007299;
          result[1] += 0;
          result[2] += 0.006423357664233576;
          result[3] += 0.0023357664233576644;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011678832116788322;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41700000))) ) ) {
          result[0] += 0.009433962264150943;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9858490566037735;
          result[5] += 0.0047169811320754715;
          result[6] += 0;
        } else {
          result[0] += 0.0003147623544224111;
          result[1] += 0.0006295247088448222;
          result[2] += 0;
          result[3] += 0.9981114258734656;
          result[4] += 0;
          result[5] += 0.0009442870632672333;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0.21428571428571427;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.75;
          result[5] += 0.03571428571428571;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.009144350097975179;
          result[3] += 0;
          result[4] += 0.9908556499020248;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09569377990430622;
          result[3] += 0;
          result[4] += 0.9043062200956937;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0.9983936915887851;
          result[1] += 0.0002555490654205608;
          result[2] += 0.0011682242990654207;
          result[3] += 3.6507009345794397e-05;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00014602803738317759;
        } else {
          result[0] += 0.6415094339622641;
          result[1] += 0;
          result[2] += 0.32075471698113206;
          result[3] += 0.03773584905660377;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
          result[0] += 0.04504504504504504;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.954954954954955;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.4425770308123249;
          result[1] += 0.036414565826330535;
          result[2] += 0;
          result[3] += 0.5210084033613446;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0021543985637342907;
          result[1] += 0;
          result[2] += 0.005385996409335727;
          result[3] += 0.99245960502693;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
          result[0] += 0.005208333333333333;
          result[1] += 0;
          result[2] += 0.041666666666666664;
          result[3] += 0.953125;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9281648143128219;
          result[1] += 0;
          result[2] += 0.006505828137706696;
          result[3] += 0.06505828137706696;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002710761724044456;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0.977293934681182;
          result[1] += 0;
          result[2] += 0.003265940902021773;
          result[3] += 0.019284603421461897;
          result[4] += 0;
          result[5] += 0.00015552099533437013;
          result[6] += 0;
        } else {
          result[0] += 0.6770124716553289;
          result[1] += 0;
          result[2] += 0.004393424036281179;
          result[3] += 0.3048469387755102;
          result[4] += 0.011904761904761904;
          result[5] += 0.00042517006802721087;
          result[6] += 0.001417233560090703;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0.9845222535598818;
          result[1] += 0.0004127399050698219;
          result[2] += 0.000963059778496251;
          result[3] += 0.01396436678819564;
          result[4] += 6.878998417830365e-05;
          result[5] += 0;
          result[6] += 6.878998417830365e-05;
        } else {
          result[0] += 0.7270653826659909;
          result[1] += 0.0011826322013853692;
          result[2] += 0.004730528805541477;
          result[3] += 0.2529988173677986;
          result[4] += 0.013684744044602128;
          result[5] += 8.447372867038352e-05;
          result[6] += 0.00025342118601115053;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x431e0000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.03571428571428571;
          result[2] += 0;
          result[3] += 0.9642857142857143;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0.8902439024390244;
          result[1] += 0;
          result[2] += 0.10975609756097561;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41100000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.02185792349726776;
          result[1] += 0.04918032786885246;
          result[2] += 0;
          result[3] += 0.9289617486338798;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0.17579551382368283;
          result[1] += 0.0026082420448617634;
          result[2] += 0;
          result[3] += 0.7829942618675013;
          result[4] += 0.038601982263954095;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.05542725173210162;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9445727482678984;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
          result[0] += 0.18181818181818182;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8181818181818182;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.996719160104987;
          result[1] += 0;
          result[2] += 0.0016404199475065619;
          result[3] += 0.001531058617672791;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001093613298337708;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0.08896797153024913;
          result[1] += 0;
          result[2] += 0.017081850533807834;
          result[3] += 0.7708185053380784;
          result[4] += 0.12313167259786478;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0.3145539906103286;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6854460093896714;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9443946188340807;
          result[1] += 0;
          result[2] += 0.011659192825112108;
          result[3] += 0.036771300448430494;
          result[4] += 0.003587443946188341;
          result[5] += 0.003587443946188341;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45cb4000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9938223938223938;
          result[1] += 0;
          result[2] += 0.005920205920205921;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002574002574002574;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41580000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
          result[0] += 0.1899030424607155;
          result[1] += 0.0043463724506853894;
          result[2] += 0.008692744901370779;
          result[3] += 0.39752591106653296;
          result[4] += 0.3995319291206954;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8227679421283076;
          result[1] += 0.0009518370454978108;
          result[2] += 0.005520654863887303;
          result[3] += 0.15058062059775368;
          result[4] += 0.018846373500856654;
          result[5] += 0.0005711022272986865;
          result[6] += 0.0007614696363982486;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41c00000))) ) ) {
          result[0] += 0;
          result[1] += 0.002173913043478261;
          result[2] += 0.0005434782608695652;
          result[3] += 0.9972826086956522;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.00625;
          result[3] += 0;
          result[4] += 0.99375;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.979047619047619;
          result[1] += 0;
          result[2] += 0.01904761904761905;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0019047619047619048;
        } else {
          result[0] += 0.9986320109439124;
          result[1] += 0;
          result[2] += 0.0013679890560875513;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 0.9989139288623404;
          result[1] += 0;
          result[2] += 0.0010860711376595167;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9999404691034647;
          result[1] += 0;
          result[2] += 5.953089653530182e-05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0.006432459178624443;
          result[1] += 0;
          result[2] += 0.012370113805047007;
          result[3] += 0.839188520534389;
          result[4] += 0.14200890648193965;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0297029702970297;
          result[2] += 0;
          result[3] += 0.11386138613861387;
          result[4] += 0.8564356435643564;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0.5484158857652834;
          result[1] += 0;
          result[2] += 0.002231146809460063;
          result[3] += 0.4489067380633646;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00044622936189201253;
        } else {
          result[0] += 0.9548022598870056;
          result[1] += 0;
          result[2] += 0.008217770929635337;
          result[3] += 0.035952747817154594;
          result[4] += 0;
          result[5] += 0.0005136106831022085;
          result[6] += 0.0005136106831022085;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9335290417278256;
          result[1] += 0.0020968756552736424;
          result[2] += 0.003355001048437828;
          result[3] += 0.05955126860977144;
          result[4] += 0;
          result[5] += 0.0004193751310547285;
          result[6] += 0.0010484378276368212;
        } else {
          result[0] += 0.10881696428571429;
          result[1] += 0.00390625;
          result[2] += 0.011160714285714286;
          result[3] += 0.49581473214285715;
          result[4] += 0.38002232142857145;
          result[5] += 0.00027901785714285713;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41c00000))) ) ) {
          result[0] += 0;
          result[1] += 0.0031529164477141357;
          result[2] += 0.0005254860746190226;
          result[3] += 0.9963215974776668;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0020876826722338203;
          result[3] += 0;
          result[4] += 0.9937369519832986;
          result[5] += 0.0041753653444676405;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
          result[0] += 0.7661574618096357;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.23266745005875442;
          result[4] += 0.0011750881316098707;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9984984984984985;
          result[5] += 0.0015015015015015015;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.0007163323782234957;
          result[2] += 0.010744985673352435;
          result[3] += 0.9849570200573066;
          result[4] += 0.0014326647564469914;
          result[5] += 0.002148997134670487;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.55;
          result[4] += 0.45;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x420c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9716981132075472;
          result[4] += 0.02830188679245283;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0.048582995951417005;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.951417004048583;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9897959183673469;
          result[1] += 0;
          result[2] += 0.008634222919937205;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0015698587127158557;
        } else {
          result[0] += 0.9986525704809287;
          result[1] += 0;
          result[2] += 0.00134742951907131;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9884252208346025;
          result[1] += 0.003350593968930856;
          result[2] += 0.0027413950654888823;
          result[3] += 0.0042643923240938165;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012183978068839476;
        } else {
          result[0] += 0;
          result[1] += 0.002126151665485471;
          result[2] += 0.0024805102763997165;
          result[3] += 0.9953933380581148;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0.017142857142857144;
          result[1] += 0.012857142857142857;
          result[2] += 0.037142857142857144;
          result[3] += 0.9328571428571428;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9837770382695508;
          result[1] += 0;
          result[2] += 0.007071547420965058;
          result[3] += 0.008527454242928452;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006239600665557404;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41180000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41cc0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9984629572702121;
          result[4] += 0;
          result[5] += 0.001537042729787888;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d50000))) ) ) {
          result[0] += 0;
          result[1] += 0.002938295788442703;
          result[2] += 0.005876591576885406;
          result[3] += 0;
          result[4] += 0.9887365328109696;
          result[5] += 0.002448579823702253;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10714285714285714;
          result[3] += 0;
          result[4] += 0.8928571428571429;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9984932194876946;
          result[1] += 0;
          result[2] += 0.0015067805123053742;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429c0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.03225806451612903;
          result[2] += 0;
          result[3] += 0.967741935483871;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.5729318912598655;
          result[1] += 0.0007307804735457469;
          result[2] += 0.007600116924875768;
          result[3] += 0.4175679625840398;
          result[4] += 0;
          result[5] += 0.00029231218941829873;
          result[6] += 0.0008769365682548962;
        } else {
          result[0] += 0.9858060505594696;
          result[1] += 0;
          result[2] += 0.0026937422295897225;
          result[3] += 0.010878574388727726;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006216328222130128;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0.9675675675675676;
          result[1] += 0.032432432432432434;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.006993006993006993;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.993006993006993;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.12508934953538242;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8548963545389564;
          result[4] += 0.020014295925661188;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.04642857142857144;
          result[1] += 0.016071428571428573;
          result[2] += 0.04107142857142858;
          result[3] += 0;
          result[4] += 0.8892857142857143;
          result[5] += 0.0071428571428571435;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41380000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.18018018018018017;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8198198198198198;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.00538971807628524;
          result[3] += 0.7400497512437811;
          result[4] += 0.25290215588723053;
          result[5] += 0.001658374792703151;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04844814534443603;
          result[4] += 0.9515518546555639;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9899598393574297;
          result[1] += 0;
          result[2] += 0.010040160642570281;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9993215739484396;
          result[1] += 0;
          result[2] += 0.0006784260515603799;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9992514169607528;
          result[1] += 0;
          result[2] += 0.0007485830392471393;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.11600587371512482;
          result[1] += 0.032305433186490456;
          result[2] += 0.042584434654919234;
          result[3] += 0.8091042584434655;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9839664528860385;
          result[1] += 0;
          result[2] += 0.00493339911198816;
          result[3] += 0.010236803157375431;
          result[4] += 0;
          result[5] += 0.000123334977799704;
          result[6] += 0.0007400098667982239;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 0;
          result[1] += 0.23076923076923078;
          result[2] += 0.6923076923076923;
          result[3] += 0.07692307692307693;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0010775862068965517;
          result[3] += 0.9989224137931034;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0.9958133971291866;
          result[1] += 0;
          result[2] += 0.004186602870813397;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9716981132075472;
          result[1] += 0;
          result[2] += 0.02830188679245283;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0.997673065735893;
          result[1] += 0;
          result[2] += 0.002326934264107039;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9997586095912456;
          result[1] += 0;
          result[2] += 0.00024139040875442548;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 0.96554757366955;
          result[1] += 0.0020524849728778775;
          result[2] += 0.0027855153203342623;
          result[3] += 0.028588183550799007;
          result[4] += 0;
          result[5] += 0.00014660606949127696;
          result[6] += 0.0008796364169476618;
        } else {
          result[0] += 0.6394160583941606;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3583941605839416;
          result[4] += 0;
          result[5] += 0.0021897810218978104;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
          result[0] += 0.006067961165048544;
          result[1] += 0.015776699029126214;
          result[2] += 0;
          result[3] += 0.08495145631067962;
          result[4] += 0.8932038834951457;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.12502756339581036;
          result[1] += 0.0017640573318632856;
          result[2] += 0.010584343991179712;
          result[3] += 0.6227122381477398;
          result[4] += 0.239470782800441;
          result[5] += 0.0004410143329658214;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.011419249592169658;
          result[3] += 0.9885807504078303;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0016172506738544475;
          result[2] += 0;
          result[3] += 0.9983827493261456;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9985611510791367;
          result[5] += 0.0014388489208633094;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6538461538461539;
          result[3] += 0;
          result[4] += 0.34615384615384615;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 0.995049504950495;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0049504950495049506;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0029069767441860465;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9941860465116279;
          result[4] += 0;
          result[5] += 0.0029069767441860465;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x425e0000))) ) ) {
          result[0] += 0.997647809273213;
          result[1] += 0.0005581469521189651;
          result[2] += 0.0009966909859267232;
          result[3] += 0.0006777498704301718;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00011960291831120679;
        } else {
          result[0] += 0.9630681818181818;
          result[1] += 0;
          result[2] += 0.00390625;
          result[3] += 0.03231534090909091;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007102272727272727;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0.17695099818511797;
          result[1] += 0.0069570477918935265;
          result[2] += 0.008166969147005444;
          result[3] += 0.8076225045372051;
          result[4] += 0;
          result[5] += 0.00030248033877797946;
          result[6] += 0;
        } else {
          result[0] += 0.2517482517482518;
          result[1] += 0;
          result[2] += 0.17482517482517482;
          result[3] += 0.5734265734265734;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c80000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.4386252045826514;
          result[1] += 0;
          result[2] += 0.030278232405891982;
          result[3] += 0;
          result[4] += 0.5310965630114566;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42420000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.92;
          result[4] += 0.02;
          result[5] += 0.06;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9955456570155902;
          result[4] += 0.004454342984409799;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9865889212827988;
          result[1] += 0;
          result[2] += 0.006997084548104956;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00641399416909621;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45b71400))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40900000))) ) ) {
          result[0] += 0.9986628265788933;
          result[1] += 0;
          result[2] += 0.0012343139271754782;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010285949393128986;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.6796116504854369;
          result[1] += 0.0020286914939863787;
          result[2] += 0.0056513548761049125;
          result[3] += 0.31154905086219387;
          result[4] += 0.0002898130705694827;
          result[5] += 0.0002898130705694827;
          result[6] += 0.0005796261411389654;
        } else {
          result[0] += 0.8513475177304964;
          result[1] += 0;
          result[2] += 0.007943262411347518;
          result[3] += 0.05531914893617021;
          result[4] += 0.08340425531914894;
          result[5] += 0.0011347517730496454;
          result[6] += 0.000851063829787234;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.001088139281828074;
          result[2] += 0;
          result[3] += 0.23721436343852012;
          result[4] += 0.7584330794341676;
          result[5] += 0.003264417845484222;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.009443507588532886;
          result[3] += 0.9871838111298483;
          result[4] += 0.00269814502529511;
          result[5] += 0.0006745362563237775;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.003902439024390244;
          result[1] += 0.01951219512195122;
          result[2] += 0;
          result[3] += 0.9765853658536585;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9375;
          result[1] += 0;
          result[2] += 0.0625;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0.996947496947497;
          result[1] += 0;
          result[2] += 0.0030525030525030525;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9821428571428571;
          result[1] += 0;
          result[2] += 0.01020408163265306;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.007653061224489796;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9963898916967509;
          result[1] += 0;
          result[2] += 0.0036101083032490976;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9997477825885913;
          result[1] += 0;
          result[2] += 0.00025221741140863427;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42df0000))) ) ) {
          result[0] += 0.008585630366018981;
          result[1] += 0;
          result[2] += 0.009489380930863083;
          result[3] += 0.7699954812471759;
          result[4] += 0.21057388160867604;
          result[5] += 0.0013556258472661549;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.030534351145038167;
          result[2] += 0;
          result[3] += 0.1984732824427481;
          result[4] += 0.7709923664122137;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.5947687642153147;
          result[1] += 0;
          result[2] += 0.002274450341167551;
          result[3] += 0.4021986353297953;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000758150113722517;
        } else {
          result[0] += 0.9789734075448361;
          result[1] += 0;
          result[2] += 0.0074211502782931356;
          result[3] += 0.011750154607297465;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0018552875695732839;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.702264426588751;
          result[1] += 0.003360116873630388;
          result[2] += 0.008911614317019725;
          result[3] += 0.27859751643535435;
          result[4] += 0.005989773557341127;
          result[5] += 0.0004382761139517897;
          result[6] += 0.0004382761139517897;
        } else {
          result[0] += 0;
          result[1] += 0.0020798668885191347;
          result[2] += 0.0008319467554076539;
          result[3] += 0.7807820299500832;
          result[4] += 0.21547420965058237;
          result[5] += 0.0008319467554076539;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8303571428571429;
          result[4] += 0.16964285714285715;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0007621951219512195;
          result[2] += 0;
          result[3] += 0.053353658536585365;
          result[4] += 0.9458841463414634;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0003891050583657588;
          result[1] += 0;
          result[2] += 0.007392996108949416;
          result[3] += 0.8719844357976654;
          result[4] += 0.11828793774319066;
          result[5] += 0.0019455252918287938;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.990454561584046;
          result[1] += 0.0006032433199673539;
          result[2] += 0.0020936091692984635;
          result[3] += 0.006706646321989993;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001419396046982009;
        } else {
          result[0] += 0.6502474392910577;
          result[1] += 0;
          result[2] += 0.0032224651858671883;
          result[3] += 0.34595465531131314;
          result[4] += 0;
          result[5] += 0.00023017608470479918;
          result[6] += 0.00034526412705719877;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x43080000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004807692307692308;
          result[3] += 0;
          result[4] += 0.9951923076923077;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0.006211180124223602;
          result[2] += 0;
          result[3] += 0.9937888198757764;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.7142857142857143;
          result[2] += 0;
          result[3] += 0.2857142857142857;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9636363636363636;
          result[1] += 0;
          result[2] += 0.03636363636363636;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9894419306184012;
          result[1] += 0;
          result[2] += 0.008295625942684766;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0022624434389140274;
        } else {
          result[0] += 0.9985151187904968;
          result[1] += 0;
          result[2] += 0.0014848812095032398;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0.025049254151421334;
          result[1] += 0.0053475935828877;
          result[2] += 0.007317759639741064;
          result[3] += 0.9586265128060794;
          result[4] += 0.0016887137630171687;
          result[5] += 0.0019701660568533634;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.020522388059701496;
          result[3] += 0.2369402985074627;
          result[4] += 0.7420708955223881;
          result[5] += 0.00046641791044776124;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cc0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.01406799531066823;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9859320046893317;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0.8594104308390023;
          result[1] += 0.0045351473922902496;
          result[2] += 0.0045351473922902496;
          result[3] += 0.1292517006802721;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0022675736961451248;
        } else {
          result[0] += 0.9880472911523971;
          result[1] += 0;
          result[2] += 0.0059763544238014814;
          result[3] += 0.004936988437053398;
          result[4] += 0;
          result[5] += 0.00012992074834351045;
          result[6] += 0.0009094452384045733;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0012165450121654502;
          result[3] += 0.9987834549878345;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0.0013080444735120995;
          result[1] += 0;
          result[2] += 0.00882930019620667;
          result[3] += 0.972531066056246;
          result[4] += 0.016023544800523218;
          result[5] += 0.0013080444735120995;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x420c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9795918367346939;
          result[4] += 0.02040816326530612;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.24;
          result[2] += 0;
          result[3] += 0.76;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9865067466266867;
          result[1] += 0;
          result[2] += 0.012743628185907047;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007496251874062968;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0.9988309790550414;
          result[1] += 0;
          result[2] += 0.0011690209449585973;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0.9856584093872229;
          result[1] += 0.005475880052151239;
          result[2] += 0.007822685788787484;
          result[3] += 0.0002607561929595828;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007822685788787483;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0067966903073286055;
          result[3] += 0.9929078014184397;
          result[4] += 0;
          result[5] += 0.0002955082742316785;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42520000))) ) ) {
          result[0] += 0.810304449648712;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.18969555035128804;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9797263051191081;
          result[1] += 0;
          result[2] += 0.0076026355803345165;
          result[3] += 0.011150532184490625;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0015205271160669035;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41ec0000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9988616960728515;
          result[5] += 0.0011383039271485487;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0024576734025122883;
          result[2] += 0.004096122337520481;
          result[3] += 0.9920808301474604;
          result[4] += 0;
          result[5] += 0.001365374112506827;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.9969049373618276;
          result[1] += 0.0005158437730287399;
          result[2] += 0.002394988946204864;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00018422991893883567;
        } else {
          result[0] += 0.685823754789272;
          result[1] += 0.019157088122605363;
          result[2] += 0.0421455938697318;
          result[3] += 0.25287356321839083;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0.01510989010989011;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9848901098901099;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.042119565217391304;
          result[3] += 0;
          result[4] += 0.9578804347826086;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42400000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9446254071661238;
          result[4] += 0.04560260586319218;
          result[5] += 0.009771986970684038;
          result[6] += 0;
        } else {
          result[0] += 0.9875776397515528;
          result[1] += 0;
          result[2] += 0.009555661729574774;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002866698518872432;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x421c0000))) ) ) {
          result[0] += 0.9986666666666667;
          result[1] += 0;
          result[2] += 0.0013333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.1684179801517805;
          result[1] += 0.0072971395213076475;
          result[2] += 0.005837711617046118;
          result[3] += 0.7466433158201985;
          result[4] += 0.07180385288966724;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0.6652631578947369;
          result[1] += 0;
          result[2] += 0.05473684210526316;
          result[3] += 0;
          result[4] += 0.28;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.04737516005121639;
          result[1] += 0;
          result[2] += 0.004481434058898848;
          result[3] += 0.05121638924455826;
          result[4] += 0.8969270166453265;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41e80000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0;
          result[1] += 0.014778325123152709;
          result[2] += 0;
          result[3] += 0.9786535303776683;
          result[4] += 0;
          result[5] += 0.006568144499178982;
          result[6] += 0;
        } else {
          result[0] += 0.9959349593495935;
          result[1] += 0;
          result[2] += 0.003658536585365854;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004065040650406504;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0.9478187919463087;
          result[1] += 0;
          result[2] += 0.0031879194630872482;
          result[3] += 0.04798657718120805;
          result[4] += 0.0003355704697986577;
          result[5] += 0;
          result[6] += 0.0006711409395973154;
        } else {
          result[0] += 0.9977588525324966;
          result[1] += 0.0007283729269385925;
          result[2] += 0.00022411474675033618;
          result[3] += 0.0010085163603765128;
          result[4] += 5.6028686687584046e-05;
          result[5] += 0.00022411474675033618;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02235929067077872;
          result[3] += 0.8342328450269854;
          result[4] += 0.14340786430223593;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0.2971887550200803;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7028112449799196;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.957345971563981;
          result[1] += 0;
          result[2] += 0.008530805687203791;
          result[3] += 0.025592417061611375;
          result[4] += 0.004739336492890996;
          result[5] += 0.0018957345971563982;
          result[6] += 0.0018957345971563982;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x419c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
          result[0] += 0.48892215568862274;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5110778443113773;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9083147735708983;
          result[1] += 0;
          result[2] += 0.0022271714922048997;
          result[3] += 0.08797327394209355;
          result[4] += 0.0014847809948032665;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 0.9918032786885246;
          result[1] += 0;
          result[2] += 0.00819672131147541;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.784;
          result[1] += 0;
          result[2] += 0.208;
          result[3] += 0.008;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 0.055145631067961165;
          result[1] += 0.0027184466019417475;
          result[2] += 0.0011650485436893205;
          result[3] += 0.6955339805825242;
          result[4] += 0.24543689320388348;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4117647058823529;
          result[4] += 0.5882352941176471;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x44b9e000))) ) ) {
          result[0] += 0.8;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.04132231404958678;
          result[2] += 0;
          result[3] += 0.9586776859504132;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9929873772791024;
          result[1] += 0;
          result[2] += 0.005610098176718092;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001402524544179523;
        } else {
          result[0] += 0.9997618480590617;
          result[1] += 0;
          result[2] += 0.00023815194093831864;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.04051054384017758;
          result[1] += 0.006104328523862375;
          result[2] += 0.008324084350721421;
          result[3] += 0.8795782463928968;
          result[4] += 0.06437291897891231;
          result[5] += 0.0011098779134295228;
          result[6] += 0;
        } else {
          result[0] += 0.9846392333709132;
          result[1] += 0;
          result[2] += 0.006059751972942503;
          result[3] += 0.008596392333709131;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007046223224351747;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
          result[0] += 0;
          result[1] += 0.0006482982171799027;
          result[2] += 0;
          result[3] += 0.9964343598055105;
          result[4] += 0.00226904376012966;
          result[5] += 0.0006482982171799027;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.041726618705035974;
          result[3] += 0;
          result[4] += 0.958273381294964;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0.7956656346749226;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.20227038183694532;
          result[4] += 0.0010319917440660474;
          result[5] += 0.0010319917440660474;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41780000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1506849315068493;
          result[3] += 0;
          result[4] += 0.8493150684931506;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.00035919540229885057;
          result[2] += 0.007183908045977011;
          result[3] += 0.9906609195402298;
          result[4] += 0;
          result[5] += 0.0017959770114942528;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41a40000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0.9987849331713244;
          result[1] += 0;
          result[2] += 0.001215066828675577;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9753424657534246;
          result[1] += 0;
          result[2] += 0.024657534246575342;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9992859328776905;
          result[1] += 0;
          result[2] += 0.0007140671223094971;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.8930520189159695;
          result[1] += 0.003455802109858131;
          result[2] += 0.012550018188432158;
          result[3] += 0.0898508548563114;
          result[4] += 0;
          result[5] += 0.0005456529647144417;
          result[6] += 0.0005456529647144417;
        } else {
          result[0] += 0;
          result[1] += 0.003640145605824233;
          result[2] += 0.005200208008320333;
          result[3] += 0.9911596463858554;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9415859564164649;
          result[1] += 0;
          result[2] += 0.0009079903147699758;
          result[3] += 0.05750605326876514;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0.5070202808112325;
          result[1] += 0;
          result[2] += 0.0007800312012480501;
          result[3] += 0.1466458658346334;
          result[4] += 0.3439937597503901;
          result[5] += 0.0015600624024961001;
          result[6] += 0;
        } else {
          result[0] += 0.23076923076923078;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.046153846153846156;
          result[4] += 0.7230769230769231;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.24390243902439024;
          result[3] += 0.7439024390243902;
          result[4] += 0.012195121951219513;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.000346860908775581;
          result[2] += 0.005896635449184877;
          result[3] += 0.9705168227540756;
          result[4] += 0.021505376344086023;
          result[5] += 0.001734304543877905;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9927371765773945;
          result[1] += 0;
          result[2] += 0.006354970494779845;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009078529278256923;
        } else {
          result[0] += 0.9991178027406928;
          result[1] += 0.00023525260248191495;
          result[2] += 0.0004116920543433512;
          result[3] += 0.00023525260248191495;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0.9190101237345333;
          result[1] += 0.0060742407199100125;
          result[2] += 0.00832395950506187;
          result[3] += 0.06546681664791902;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011248593925759283;
        } else {
          result[0] += 0.0036826247070639436;
          result[1] += 0;
          result[2] += 0.004017408771342484;
          result[3] += 0.991965182457315;
          result[4] += 0;
          result[5] += 0.00033478406427854036;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0.9977553310886644;
          result[1] += 0;
          result[2] += 0.002244668911335578;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9629413481178873;
          result[1] += 0;
          result[2] += 0.007003209804493727;
          result[3] += 0.029763641669098336;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002918004085205719;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x430d0000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3fc00000))) ) ) {
          result[0] += 0.9911699779249448;
          result[1] += 0;
          result[2] += 0.008830022075055188;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.9992117117117117;
          result[1] += 0;
          result[2] += 0.0007882882882882883;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
          result[0] += 0.0017094017094017094;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9982905982905983;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.023796791443850267;
          result[1] += 0.006417112299465241;
          result[2] += 0.011497326203208556;
          result[3] += 0.9572192513368984;
          result[4] += 0;
          result[5] += 0.0010695187165775401;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0.8755868544600939;
          result[1] += 0;
          result[2] += 0.004694835680751174;
          result[3] += 0.11737089201877934;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002347417840375587;
        } else {
          result[0] += 0.9895091309415879;
          result[1] += 0;
          result[2] += 0.004662608470405388;
          result[3] += 0.004533091568449683;
          result[4] += 0;
          result[5] += 0.00012951690195570523;
          result[6] += 0.001165652117601347;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41ac0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0014245014245014246;
          result[3] += 0;
          result[4] += 0.9943019943019943;
          result[5] += 0.004273504273504274;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7272727272727273;
          result[3] += 0;
          result[4] += 0.2727272727272727;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0;
          result[1] += 0.015337423312883436;
          result[2] += 0.046012269938650305;
          result[3] += 0.9386503067484663;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.00036603221083455345;
          result[3] += 0.9996339677891655;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x41c80000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9963235294117647;
          result[5] += 0.003676470588235294;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0.0006180469715698394;
          result[2] += 0.007416563658838073;
          result[3] += 0.9901112484548826;
          result[4] += 0;
          result[5] += 0.0018541409147095182;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42060000))) ) ) {
          result[0] += 0.9826086956521739;
          result[1] += 0.00933977455716586;
          result[2] += 0.007407407407407408;
          result[3] += 0.0006441223832528181;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9961509676039774;
          result[1] += 0.0005345878327809259;
          result[2] += 0.002352186464236074;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009622580990056666;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
          result[0] += 0.43204868154158216;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5679513184584178;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.997288001058341;
          result[1] += 0;
          result[2] += 0.0005291705252017463;
          result[3] += 0.0021828284164572033;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0.21635730858468677;
          result[1] += 0;
          result[2] += 0.0037703016241299302;
          result[3] += 0.7798723897911833;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9964714184897672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0035285815102328866;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
          result[0] += 0.010582010582010581;
          result[1] += 0;
          result[2] += 0.021164021164021163;
          result[3] += 0.9682539682539683;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.905784288961859;
          result[1] += 0;
          result[2] += 0.0035362465269007325;
          result[3] += 0.09017428643596868;
          result[4] += 0;
          result[5] += 0.00025258903763576663;
          result[6] += 0.00025258903763576663;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.0027453671928620456;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9547014413177763;
          result[4] += 0.04255319148936171;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.023255813953488372;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9674418604651163;
          result[5] += 0.009302325581395349;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41e80000))) ) ) {
          result[0] += 0;
          result[1] += 0.0017857142857142857;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9982142857142857;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0007763975155279503;
          result[1] += 0.00038819875776397513;
          result[2] += 0.004270186335403727;
          result[3] += 0.718167701863354;
          result[4] += 0.2748447204968944;
          result[5] += 0.0015527950310559005;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42740000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0.9978404890011346;
          result[1] += 0.0005490282200505106;
          result[2] += 0.0012810658467845247;
          result[3] += 0.00010980564401010212;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00021961128802020424;
        } else {
          result[0] += 0.5483870967741936;
          result[1] += 0;
          result[2] += 0.40322580645161293;
          result[3] += 0.048387096774193554;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41e00000))) ) ) {
          result[0] += 0;
          result[1] += 0.006734006734006734;
          result[2] += 0;
          result[3] += 0.9932659932659933;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9453551912568307;
          result[1] += 0.0546448087431694;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.8454854552323385;
          result[1] += 0;
          result[2] += 0.008689081979599547;
          result[3] += 0.14469210426898377;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011333585190782018;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.007553956834532374;
          result[3] += 0.9924460431654676;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 0.9992700019466615;
          result[1] += 0;
          result[2] += 0.0005353319057815846;
          result[3] += 0;
          result[4] += 0.0001459996106677049;
          result[5] += 0;
          result[6] += 4.8666536889234965e-05;
        } else {
          result[0] += 0.78;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.22;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0.0014727540500736377;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9985272459499264;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.05014749262536873;
          result[1] += 0.008849557522123894;
          result[2] += 0.05309734513274336;
          result[3] += 0.887905604719764;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0.7309703660662407;
          result[1] += 0.0007263219058686811;
          result[2] += 0.0022515979081929116;
          result[3] += 0.2655432887855898;
          result[4] += 0;
          result[5] += 0.00014526438117373622;
          result[6] += 0.00036316095293434055;
        } else {
          result[0] += 0.003929273084479371;
          result[1] += 0;
          result[2] += 0.020301244269810084;
          result[3] += 0.8127046496398166;
          result[4] += 0.16306483300589392;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0.9641304347826085;
          result[1] += 0;
          result[2] += 0.022826086956521736;
          result[3] += 0;
          result[4] += 0.005434782608695651;
          result[5] += 0.0032608695652173903;
          result[6] += 0.004347826086956521;
        } else {
          result[0] += 0.9960954446854664;
          result[1] += 0;
          result[2] += 0.0021691973969631237;
          result[3] += 0;
          result[4] += 0.0008676789587852494;
          result[5] += 0.0008676789587852494;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0.010416666666666666;
          result[2] += 0;
          result[3] += 0.9895833333333334;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8888888888888888;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41280000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.00030487804878048786;
          result[2] += 0;
          result[3] += 0.9993902439024391;
          result[4] += 0;
          result[5] += 0.00030487804878048786;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x41dc0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10256410256410256;
          result[3] += 0;
          result[4] += 0.8974358974358975;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0044662795891022775;
          result[2] += 0.009379187137114784;
          result[3] += 0;
          result[4] += 0.9857079053148727;
          result[5] += 0.00044662795891022776;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40900000))) ) ) {
          result[0] += 0.9964065708418891;
          result[1] += 0.000513347022587269;
          result[2] += 0.0024640657084188913;
          result[3] += 0.0003080082135523614;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003080082135523614;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8987538940809969;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.10124610591900311;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.036337209302325583;
          result[1] += 0.024709302325581394;
          result[2] += 0.0377906976744186;
          result[3] += 0.9011627906976745;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9387939533355242;
          result[1] += 0;
          result[2] += 0.0032040749260598095;
          result[3] += 0.057016102530397635;
          result[4] += 0;
          result[5] += 0.00016431153466973383;
          result[6] += 0.000821557673348669;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0.27625649913344885;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7237435008665511;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.983357452966715;
          result[1] += 0;
          result[2] += 0.013024602026049204;
          result[3] += 0.00361794500723589;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0.9971484583853145;
          result[1] += 0;
          result[2] += 0.0028515416146854392;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9101796407185628;
          result[1] += 0;
          result[2] += 0.0718562874251497;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.017964071856287425;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9979777553083923;
          result[1] += 0;
          result[2] += 0.0020222446916076846;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3266621438263229;
          result[1] += 0.008141112618724558;
          result[2] += 0.011194029850746268;
          result[3] += 0.6540027137042063;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.041413583655438985;
          result[1] += 0.007730535615681944;
          result[2] += 0.012700165654334622;
          result[3] += 0.8630590833793484;
          result[4] += 0.07123136388735506;
          result[5] += 0.003865267807840972;
          result[6] += 0;
        } else {
          result[0] += 0.9852565920045364;
          result[1] += 0;
          result[2] += 0.004536433229373405;
          result[3] += 0.00907286645874681;
          result[4] += 0;
          result[5] += 0.0002835270768358378;
          result[6] += 0.0008505812305075135;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41940000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6666666666666666;
          result[5] += 0.3333333333333333;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0006397952655150352;
          result[2] += 0;
          result[3] += 0.999360204734485;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0015220700152207;
          result[3] += 0;
          result[4] += 0.9984779299847792;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3fc00000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.008333333333333333;
          result[2] += 0.009444444444444445;
          result[3] += 0.69;
          result[4] += 0.29055555555555557;
          result[5] += 0.0016666666666666668;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0.16;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.84;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5656565656565656;
          result[4] += 0.43434343434343436;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x41080000))) ) ) {
          result[0] += 0;
          result[1] += 0.0007977662544874351;
          result[2] += 0.005584363781412046;
          result[3] += 0.45911447945751893;
          result[4] += 0.5337056242520941;
          result[5] += 0.0007977662544874351;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.618103448275862;
          result[4] += 0.38189655172413794;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9904030710172744;
          result[1] += 0;
          result[2] += 0.005758157389635317;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.003838771593090211;
        } else {
          result[0] += 0.9996022727272728;
          result[1] += 0;
          result[2] += 0.00039772727272727274;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
          result[0] += 0;
          result[1] += 0.2;
          result[2] += 0;
          result[3] += 0.8;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7003610108303249;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2996389891696751;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
          result[0] += 0.40192307692307694;
          result[1] += 0.03076923076923077;
          result[2] += 0;
          result[3] += 0.5673076923076923;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9932829554995803;
          result[1] += 0.001079525008996042;
          result[2] += 0.005157730598536645;
          result[3] += 0.0003598416696653473;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00011994722322178243;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
          result[0] += 0.37099198396793587;
          result[1] += 0;
          result[2] += 0.0035070140280561123;
          result[3] += 0.625501002004008;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8562152133580705;
          result[1] += 0;
          result[2] += 0.005333951762523191;
          result[3] += 0.137291280148423;
          result[4] += 0;
          result[5] += 0.00046382189239332097;
          result[6] += 0.0006957328385899814;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9884032114183765;
          result[1] += 0;
          result[2] += 0.009812667261373774;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001784121320249777;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0.9991326220834418;
          result[1] += 0;
          result[2] += 0.0008673779165582445;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x445ae000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0.014354066985645933;
          result[1] += 0.019138755980861243;
          result[2] += 0;
          result[3] += 0.9617224880382775;
          result[4] += 0;
          result[5] += 0.004784688995215311;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0.5889955407754517;
          result[1] += 0.0003779003854583932;
          result[2] += 0.0077091678633512215;
          result[3] += 0.3981558461189631;
          result[4] += 0.0038545839316756108;
          result[5] += 0.0003779003854583932;
          result[6] += 0.0005290605396417506;
        } else {
          result[0] += 0.17759838546922302;
          result[1] += 0.014127144298688193;
          result[2] += 0;
          result[3] += 0.8082744702320888;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.803030303030303;
          result[4] += 0.19696969696969696;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.01131687242798354;
          result[2] += 0;
          result[3] += 0.13786008230452676;
          result[4] += 0.8508230452674898;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9736070381231672;
          result[1] += 0;
          result[2] += 0.017595307917888565;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.008797653958944282;
        } else {
          result[0] += 0.993103448275862;
          result[1] += 0;
          result[2] += 0.006896551724137931;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45cb4000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9996045867931989;
          result[1] += 0;
          result[2] += 0.00039541320680110717;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x46219c00))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0.7346166502138862;
          result[1] += 0.0016452780519907867;
          result[2] += 0.001974333662388944;
          result[3] += 0.2607765712405397;
          result[4] += 0.00016452780519907867;
          result[5] += 0.00016452780519907867;
          result[6] += 0.0006581112207963147;
        } else {
          result[0] += 0.2301523656776263;
          result[1] += 0.00801924619085806;
          result[2] += 0.012830793905372895;
          result[3] += 0.6523656776263032;
          result[4] += 0.09663191659983962;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
          result[0] += 0.0771889400921659;
          result[1] += 0;
          result[2] += 0.006336405529953917;
          result[3] += 0.1284562211981567;
          result[4] += 0.7880184331797235;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.884590377113134;
          result[1] += 0;
          result[2] += 0.012353706111833552;
          result[3] += 0.06566970091027309;
          result[4] += 0.03608582574772432;
          result[5] += 0.000975292587776333;
          result[6] += 0.0003250975292587777;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
          result[0] += 0;
          result[1] += 0.039568345323741004;
          result[2] += 0;
          result[3] += 0.9424460431654677;
          result[4] += 0.014388489208633094;
          result[5] += 0.0035971223021582736;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.007142857142857143;
          result[3] += 0;
          result[4] += 0.9928571428571429;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x426c0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.056915544675642596;
          result[1] += 0.012851897184822521;
          result[2] += 0;
          result[3] += 0.9302325581395349;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 0.9928571428571429;
          result[1] += 0;
          result[2] += 0.007142857142857143;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.048355899419729204;
          result[3] += 0.9516441005802708;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0.9900459418070444;
          result[1] += 0;
          result[2] += 0.009954058192955589;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9992032666069116;
          result[1] += 0;
          result[2] += 0.0007967333930883378;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0.0012422360248447205;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9987577639751553;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3883358856559469;
          result[1] += 0.001403777437468096;
          result[2] += 0.009698825931597753;
          result[3] += 0.5996681980602349;
          result[4] += 0;
          result[5] += 0.000638080653394589;
          result[6] += 0.00025523226135783564;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42520000))) ) ) {
          result[0] += 0.8014018691588785;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1985981308411215;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9835630965005302;
          result[1] += 0;
          result[2] += 0.005302226935312832;
          result[3] += 0.010339342523860021;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007953340402969247;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9892205638474295;
          result[1] += 0;
          result[2] += 0.009950248756218905;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008291873963515755;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
          result[0] += 0.9951573849878934;
          result[1] += 0;
          result[2] += 0.004842615012106538;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9998217786490822;
          result[1] += 0;
          result[2] += 0.00017822135091783995;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cc0000))) ) ) {
          result[0] += 0.02141501761995121;
          result[1] += 0.005421523448088914;
          result[2] += 0.006234751965302251;
          result[3] += 0.9642179452426133;
          result[4] += 0.0010843046896177827;
          result[5] += 0.0016264570344266742;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.030534351145038167;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9694656488549618;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0030165912518853697;
          result[3] += 0;
          result[4] += 0.9969834087481146;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02564102564102564;
          result[3] += 0.2535612535612536;
          result[4] += 0.7193732193732194;
          result[5] += 0.0014245014245014246;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0.4645693341478314;
          result[1] += 0;
          result[2] += 0.0009163103237629811;
          result[3] += 0.5342089187538179;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00030543677458766036;
        } else {
          result[0] += 0.6653274407392528;
          result[1] += 0;
          result[2] += 0.0032141422257934912;
          result[3] += 0.3310566492567296;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004017677782241864;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42000000))) ) ) {
          result[0] += 0.9859783301465902;
          result[1] += 0;
          result[2] += 0.004248990864669641;
          result[3] += 0.009772678988740175;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8272058823529412;
          result[1] += 0;
          result[2] += 0.02573529411764706;
          result[3] += 0.1286764705882353;
          result[4] += 0;
          result[5] += 0.007352941176470589;
          result[6] += 0.011029411764705885;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9772727272727273;
          result[1] += 0;
          result[2] += 0.022727272727272728;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9978947368421053;
          result[1] += 0;
          result[2] += 0.002105263157894737;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9998038318184791;
          result[1] += 0;
          result[2] += 0.0001961681815209573;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9970544918998527;
          result[5] += 0.0029455081001472753;
          result[6] += 0;
        } else {
          result[0] += 0.004629629629629629;
          result[1] += 0.013888888888888888;
          result[2] += 0.018518518518518517;
          result[3] += 0.9629629629629629;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.7099386066376012;
          result[1] += 0.002758252513568823;
          result[2] += 0.006673191565085862;
          result[3] += 0.2792953109707269;
          result[4] += 0.0001779517750689563;
          result[5] += 0.0005338553252068689;
          result[6] += 0.0006228312127413471;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.010719225449515906;
          result[3] += 0.9875518672199171;
          result[4] += 0.0017289073305670815;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
          result[0] += 0.001201923076923077;
          result[1] += 0.014423076923076924;
          result[2] += 0;
          result[3] += 0.09975961538461539;
          result[4] += 0.8846153846153846;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6875;
          result[4] += 0.3125;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41700000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9956140350877193;
          result[5] += 0.0043859649122807015;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0003136762860727729;
          result[2] += 0;
          result[3] += 0.9993726474278545;
          result[4] += 0;
          result[5] += 0.0003136762860727729;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9877049180327869;
          result[5] += 0.012295081967213115;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0.8706896551724138;
          result[1] += 0.12931034482758622;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8529411764705882;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.14705882352941177;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42380000))) ) ) {
          result[0] += 0;
          result[1] += 0.01195219123505976;
          result[2] += 0.00398406374501992;
          result[3] += 0.9840637450199203;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0.9967717084265747;
          result[1] += 0.0005135918412267508;
          result[2] += 0.0024579038115851645;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002567959206133754;
        } else {
          result[0] += 0.06896551724137931;
          result[1] += 0.20689655172413793;
          result[2] += 0;
          result[3] += 0.7241379310344828;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.822104466313399;
          result[1] += 0;
          result[2] += 0.00757002271006813;
          result[3] += 0.1684330052990159;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0018925056775170325;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0032281205164992827;
          result[3] += 0.9967718794835008;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0.0007454342154304882;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9988818486768543;
          result[4] += 0;
          result[5] += 0.0003727171077152441;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.34615384615384615;
          result[2] += 0.5384615384615384;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.11538461538461539;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9900990099009901;
          result[1] += 0;
          result[2] += 0.008415841584158416;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014851485148514852;
        } else {
          result[0] += 0.9994161010145245;
          result[1] += 0;
          result[2] += 0.0005838989854755127;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.999557815609109;
          result[1] += 0;
          result[2] += 0.00044218439089100157;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x425c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.959746016532886;
          result[1] += 0.001317838744459087;
          result[2] += 0.007188211333413202;
          result[3] += 0.03090930873367677;
          result[4] += 0;
          result[5] += 0.00011980352222355337;
          result[6] += 0.0007188211333413202;
        } else {
          result[0] += 0;
          result[1] += 0.0018057060310581437;
          result[2] += 0.006861682918020947;
          result[3] += 0.991332611050921;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2896551724137931;
          result[1] += 0.022988505747126436;
          result[2] += 0;
          result[3] += 0.6873563218390805;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
          result[0] += 0.002232142857142857;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9538690476190477;
          result[4] += 0.04389880952380952;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
          result[0] += 0.5217391304347826;
          result[1] += 0;
          result[2] += 0.43478260869565216;
          result[3] += 0;
          result[4] += 0.043478260869565216;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.01765650080256822;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9807383627608347;
          result[5] += 0.0016051364365971107;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.00099601593625498;
          result[1] += 0.00049800796812749;
          result[2] += 0;
          result[3] += 0.9088645418326693;
          result[4] += 0.08864541832669323;
          result[5] += 0.00099601593625498;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41700000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.01054590570719603;
          result[3] += 0;
          result[4] += 0.9882133995037221;
          result[5] += 0.0012406947890818859;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.998517298187809;
          result[1] += 0.000384404173531027;
          result[2] += 0.0008237232289950578;
          result[3] += 0.00016474464579901155;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001098297638660077;
        } else {
          result[0] += 0.9459459459459459;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05405405405405406;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3fc00000))) ) ) {
          result[0] += 0.983502538071066;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.01649746192893401;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8838028169014085;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.11619718309859155;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0.9216148160181951;
          result[1] += 0.0006498253594346519;
          result[2] += 0.006335797254487857;
          result[3] += 0.0706685078385184;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007310535293639835;
        } else {
          result[0] += 0.3054662379421222;
          result[1] += 0.011254019292604502;
          result[2] += 0;
          result[3] += 0.6832797427652733;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.03325526932084309;
          result[1] += 0;
          result[2] += 0.006557377049180328;
          result[3] += 0.9601873536299765;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9604891815616181;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03951081843838194;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42240000))) ) ) {
          result[0] += 0.02040816326530612;
          result[1] += 0.09523809523809523;
          result[2] += 0;
          result[3] += 0.06802721088435375;
          result[4] += 0.8163265306122449;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.06386701662292213;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6482939632545932;
          result[4] += 0.2878390201224847;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
          result[0] += 0.9983818770226537;
          result[1] += 0;
          result[2] += 0.0016181229773462784;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
          result[0] += 0.6406575596202825;
          result[1] += 0;
          result[2] += 0.009724473257698542;
          result[3] += 0.32553831905533687;
          result[4] += 0.02292197267886085;
          result[5] += 0;
          result[6] += 0.0011576753878212549;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.011730205278592375;
          result[3] += 0.844574780058651;
          result[4] += 0.14076246334310852;
          result[5] += 0.002932551319648094;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
          result[0] += 0.0015117157974300832;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.99848828420257;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2296416938110749;
          result[1] += 0.002035830618892508;
          result[2] += 0.0036644951140065146;
          result[3] += 0.7630293159609121;
          result[4] += 0;
          result[5] += 0.0016286644951140066;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.9960514928602336;
          result[1] += 0.0004868022501081783;
          result[2] += 0.0027585460839463435;
          result[3] += 0.0001622674167027261;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005408913890090869;
        } else {
          result[0] += 0.3368421052631579;
          result[1] += 0.028070175438596492;
          result[2] += 0.017543859649122806;
          result[3] += 0.6175438596491228;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0019230769230769232;
          result[1] += 0;
          result[2] += 0.0019230769230769232;
          result[3] += 0;
          result[4] += 0.9961538461538462;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
          result[0] += 0.49903907751441384;
          result[1] += 0;
          result[2] += 0.0012812299807815502;
          result[3] += 0.4996796925048046;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9047240968638349;
          result[1] += 0;
          result[2] += 0.0027788805081381505;
          result[3] += 0.09170305676855897;
          result[4] += 0.000793965859468043;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.0013136288998357964;
          result[1] += 0.0003284072249589491;
          result[2] += 0;
          result[3] += 0.9967159277504105;
          result[4] += 0.0003284072249589491;
          result[5] += 0.0013136288998357964;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.028532608695652172;
          result[3] += 0;
          result[4] += 0.9660326086956522;
          result[5] += 0.005434782608695652;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41500000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 0.04666666666666667;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9533333333333334;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.00676818950930626;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9932318104906938;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
          result[0] += 0.9974513944513216;
          result[1] += 0.0004004951576494575;
          result[2] += 0.0019296584868564771;
          result[3] += 3.6408650695405226e-05;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00018204325347702613;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0.75;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0.9254658385093167;
          result[1] += 0.07453416149068323;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
          result[0] += 0.019284603421461897;
          result[1] += 0;
          result[2] += 0.00031104199066874026;
          result[3] += 0.9794712286158631;
          result[4] += 0;
          result[5] += 0.0009331259720062209;
          result[6] += 0;
        } else {
          result[0] += 0.9769959404600812;
          result[1] += 0;
          result[2] += 0.023004059539918808;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42180000))) ) ) {
          result[0] += 0.9951867539468617;
          result[1] += 0;
          result[2] += 0.002887947631882942;
          result[3] += 0.0011551790527531767;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007701193685021178;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9835796387520526;
          result[1] += 0;
          result[2] += 0.016420361247947456;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
          result[0] += 0.9965909090909091;
          result[1] += 0;
          result[2] += 0.003409090909090909;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9997786386275594;
          result[1] += 0;
          result[2] += 0.00022136137244050912;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0.024739583333333332;
          result[1] += 0.006510416666666667;
          result[2] += 0.017708333333333333;
          result[3] += 0.9364583333333333;
          result[4] += 0.012760416666666666;
          result[5] += 0.0018229166666666667;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.001564945226917058;
          result[3] += 0;
          result[4] += 0.9984350547730829;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0.541759560967244;
          result[1] += 0;
          result[2] += 0.0025724575544503513;
          result[3] += 0.45532498713771213;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00034299434059338016;
        } else {
          result[0] += 0.9736787990952087;
          result[1] += 0;
          result[2] += 0.005552128315854411;
          result[3] += 0.018301460004112688;
          result[4] += 0;
          result[5] += 0.00041126876413736374;
          result[6] += 0.002056343820686819;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x45c89c00))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.030508474576271188;
          result[2] += 0;
          result[3] += 0.9694915254237289;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45cb4000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0.9966185059944667;
          result[1] += 0;
          result[2] += 0.0027666769136181985;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006148170919151552;
        } else {
          result[0] += 0.9991264468224503;
          result[1] += 0;
          result[2] += 0.0008735531775496833;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x46219c00))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0023201856148491883;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9965197215777263;
          result[5] += 0.0011600928074245941;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 0.56;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.44;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.011358258400378608;
          result[1] += 0.009938476100331283;
          result[2] += 0.017274017983909134;
          result[3] += 0.9607193563653573;
          result[4] += 0;
          result[5] += 0.000709891150023663;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.992548435171386;
          result[1] += 0;
          result[2] += 0.00379352391274895;
          result[3] += 0.0028451429345617125;
          result[4] += 0;
          result[5] += 0.00013548299688389108;
          result[6] += 0.0006774149844194553;
        } else {
          result[0] += 0.8847352024922118;
          result[1] += 0.003115264797507788;
          result[2] += 0.028037383177570093;
          result[3] += 0.08411214953271028;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04081632653061224;
          result[3] += 0.9591836734693877;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45cb4000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40900000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9879598662207358;
          result[1] += 0;
          result[2] += 0.010033444816053512;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002006688963210702;
        } else {
          result[0] += 0.9992187064010268;
          result[1] += 0;
          result[2] += 0.000781293598973157;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0.024837007140639553;
          result[1] += 0.00776156473144986;
          result[2] += 0.022042843837317604;
          result[3] += 0.8525302701024526;
          result[4] += 0.09065507606333437;
          result[5] += 0.002173238124805961;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0030721966205837174;
          result[3] += 0;
          result[4] += 0.9969278033794163;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.5812398042414355;
          result[1] += 0;
          result[2] += 0.0027732463295269166;
          result[3] += 0.41500815660685153;
          result[4] += 0;
          result[5] += 0.0004893964110929853;
          result[6] += 0.0004893964110929853;
        } else {
          result[0] += 0.9689499881488505;
          result[1] += 0;
          result[2] += 0.004029390850912538;
          result[3] += 0.025835506044086277;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011851149561507466;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40900000))) ) ) {
          result[0] += 0.27197346600331673;
          result[1] += 0.003316749585406302;
          result[2] += 0;
          result[3] += 0.724709784411277;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.13239719157472418;
          result[1] += 0.013039117352056168;
          result[2] += 0.006018054162487462;
          result[3] += 0.8485456369107321;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42da0000))) ) ) {
          result[0] += 0.05;
          result[1] += 0.075;
          result[2] += 0;
          result[3] += 0.875;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.011363636363636364;
          result[1] += 0.026515151515151516;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9621212121212122;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9693034238488785;
          result[1] += 0.009445100354191265;
          result[2] += 0.021251475796930347;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.03903477643718949;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0241305890702626;
          result[4] += 0.9368346344925479;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42400000))) ) ) {
          result[0] += 0.21428571428571427;
          result[1] += 0;
          result[2] += 0.7857142857142857;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9848101265822785;
          result[1] += 0;
          result[2] += 0.015189873417721518;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9995347755291929;
          result[1] += 0;
          result[2] += 0.0003876870590059704;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7.753741180119408e-05;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.7269888475836431;
          result[1] += 0.0017843866171003717;
          result[2] += 0.005055762081784387;
          result[3] += 0.24773234200743494;
          result[4] += 0.017397769516728626;
          result[5] += 0.0005947955390334573;
          result[6] += 0.0004460966542750929;
        } else {
          result[0] += 0.4051756705704571;
          result[1] += 0;
          result[2] += 0.007933509633547412;
          result[3] += 0.5819795995466566;
          result[4] += 0.003022289384208538;
          result[5] += 0.0011333585190782018;
          result[6] += 0.0007555723460521345;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x434c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41700000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.004170528266913809;
          result[1] += 0.005097312326227989;
          result[2] += 0.009267840593141797;
          result[3] += 0.9814643188137164;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9710144927536232;
          result[1] += 0;
          result[2] += 0.028985507246376812;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
          result[0] += 0.4605543710021322;
          result[1] += 0;
          result[2] += 0.021321961620469083;
          result[3] += 0.5074626865671642;
          result[4] += 0.008528784648187633;
          result[5] += 0.0021321961620469083;
          result[6] += 0;
        } else {
          result[0] += 0.9941348973607038;
          result[1] += 9.775171065493646e-05;
          result[2] += 0.0007820136852394917;
          result[3] += 0.004789833822091887;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00019550342130987292;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.75;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0.680155323932148;
          result[1] += 0.002452483139178418;
          result[2] += 0.00592683425301451;
          result[3] += 0.27999182505620274;
          result[4] += 0.029429797670141016;
          result[5] += 0.0010218679746576743;
          result[6] += 0.0010218679746576743;
        } else {
          result[0] += 0.0037996545768566492;
          result[1] += 0;
          result[2] += 0.0037996545768566492;
          result[3] += 0.9879101899827288;
          result[4] += 0.0037996545768566492;
          result[5] += 0.000690846286701209;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x43438000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9884935009588749;
          result[1] += 0;
          result[2] += 0.002130833155763904;
          result[3] += 0.008949499254208395;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004261666311527807;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9776536312849162;
          result[1] += 0;
          result[2] += 0.01303538175046555;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00931098696461825;
        } else {
          result[0] += 0.9993098688750862;
          result[1] += 0;
          result[2] += 0.0006901311249137336;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9936020473448497;
          result[1] += 0;
          result[2] += 0.006397952655150352;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.999867998415981;
          result[1] += 0;
          result[2] += 0.00013200158401900823;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x41580000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.6258992805755397;
          result[1] += 0;
          result[2] += 0.0010277492291880783;
          result[3] += 0.24974306269270302;
          result[4] += 0.12230215827338131;
          result[5] += 0.0010277492291880783;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.021442495126705652;
          result[3] += 0.8206627680311891;
          result[4] += 0.15789473684210525;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0.5249031543995573;
          result[1] += 0;
          result[2] += 0.00996126175982291;
          result[3] += 0.41449916989485336;
          result[4] += 0.04925290536801328;
          result[5] += 0;
          result[6] += 0.001383508577753182;
        } else {
          result[0] += 0.0974264705882353;
          result[1] += 0.02389705882352941;
          result[2] += 0;
          result[3] += 0.5349264705882353;
          result[4] += 0.34375;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 0.29124579124579125;
          result[1] += 0.004208754208754209;
          result[2] += 0.016835016835016835;
          result[3] += 0.632996632996633;
          result[4] += 0.054713804713804715;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7104856170739251;
          result[1] += 0.006495515001546551;
          result[2] += 0.0034024126198577173;
          result[3] += 0.2774512836374884;
          result[4] += 0.0006186204763377668;
          result[5] += 0.0009279307145066501;
          result[6] += 0.0006186204763377668;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0.25112309074573225;
          result[1] += 0.0008984725965858042;
          result[2] += 0.005390835579514825;
          result[3] += 0.15633423180592992;
          result[4] += 0.5862533692722371;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3854508714321798;
          result[1] += 0;
          result[2] += 0.003788835564536499;
          result[3] += 0.48118211669613536;
          result[4] += 0.12882040919424098;
          result[5] += 0.0007577671129072998;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.9978963185574756;
          result[1] += 0;
          result[2] += 0.0021036814425244178;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40200000))) ) ) {
          result[0] += 0.9997005763904484;
          result[1] += 0;
          result[2] += 0.0002994236095516131;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.99880810488677;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011918951132300357;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x42cd0000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0.021739130434782608;
          result[1] += 0.00537371763556424;
          result[2] += 0.009526135808500244;
          result[3] += 0.9303859306301905;
          result[4] += 0.0315095261358085;
          result[5] += 0.0014655593551538837;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04022191400832178;
          result[3] += 0;
          result[4] += 0.957004160887656;
          result[5] += 0.0027739251040221915;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.02564102564102564;
          result[2] += 0;
          result[3] += 0.9743589743589743;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.990360155308609;
          result[1] += 0;
          result[2] += 0.0034810550274467804;
          result[3] += 0.004819922345695542;
          result[4] += 0;
          result[5] += 0.00040166019547462854;
          result[6] += 0.0009372071227741332;
        } else {
          result[0] += 0.9034175334323923;
          result[1] += 0.0014858841010401188;
          result[2] += 0.0237741456166419;
          result[3] += 0.0713224368499257;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41100000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0008396305625524769;
          result[3] += 0.9991603694374476;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0.9570847206807251;
          result[1] += 0;
          result[2] += 0.0022197558268590455;
          result[3] += 0.040695523492415835;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9987569919204475;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.001243008079552517;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0;
          result[1] += 0.00326619488296135;
          result[2] += 0;
          result[3] += 0.7397931409907458;
          result[4] += 0.25639629831246596;
          result[5] += 0.0005443658138268917;
          result[6] += 0;
        } else {
          result[0] += 0.9826923076923076;
          result[1] += 0;
          result[2] += 0.01730769230769231;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9924924924924925;
          result[4] += 0.006006006006006006;
          result[5] += 0.0015015015015015015;
          result[6] += 0;
        } else {
          result[0] += 0.35668789808917195;
          result[1] += 0;
          result[2] += 0.11146496815286625;
          result[3] += 0;
          result[4] += 0.5318471337579618;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
          result[0] += 0.9955190440627334;
          result[1] += 0;
          result[2] += 0.0014936519790888724;
          result[3] += 0.0022404779686333084;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007468259895444362;
        } else {
          result[0] += 0.9190751445086706;
          result[1] += 0;
          result[2] += 0.057803468208092484;
          result[3] += 0.011560693641618497;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.011560693641618497;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 0.998894783377542;
          result[1] += 0;
          result[2] += 0.0010499557913351016;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5.5260831122900086e-05;
        } else {
          result[0] += 0.5766458433445459;
          result[1] += 0.0020422873618452667;
          result[2] += 0.007208073041806823;
          result[3] += 0.3885151369533878;
          result[4] += 0.02522825564632388;
          result[5] += 0.0002402691013935608;
          result[6] += 0.0001201345506967804;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x42e50000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0020491803278688526;
          result[3] += 0;
          result[4] += 0.9979508196721312;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.12516129032258064;
          result[1] += 0.011612903225806452;
          result[2] += 0.003870967741935484;
          result[3] += 0.8593548387096774;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.008048289738430584;
          result[4] += 0.9919517102615694;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0030165912518853697;
          result[2] += 0;
          result[3] += 0.11010558069381599;
          result[4] += 0.8868778280542986;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40b00000))) ) ) {
          result[0] += 0.8636363636363636;
          result[1] += 0;
          result[2] += 0.13636363636363635;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.986335403726708;
          result[1] += 0;
          result[2] += 0.013664596273291925;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42da0000))) ) ) {
          result[0] += 0.08781190019193857;
          result[1] += 0.007197696737044146;
          result[2] += 0.007677543186180422;
          result[3] += 0.8973128598848369;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0035587188612099642;
          result[1] += 0.028469750889679714;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9679715302491103;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
          result[0] += 0.31446540880503143;
          result[1] += 0;
          result[2] += 0.031446540880503145;
          result[3] += 0.6540880503144654;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8222222222222222;
          result[1] += 0;
          result[2] += 0.08888888888888889;
          result[3] += 0.08888888888888889;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0.9425720890619297;
          result[1] += 0.0012166930283489476;
          result[2] += 0.003041732570872369;
          result[3] += 0.05219613091616985;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000973354422679158;
        } else {
          result[0] += 0.9970900551357975;
          result[1] += 0.00035736164998978974;
          result[2] += 0.00030630998570553407;
          result[3] += 0.0021441698999387386;
          result[4] += 5.105166428425567e-05;
          result[5] += 5.105166428425567e-05;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.029950083194675542;
          result[3] += 0.9068219633943427;
          result[4] += 0.059900166389351084;
          result[5] += 0.0033277870216306157;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0.09615384615384616;
          result[1] += 0;
          result[2] += 0.001282051282051282;
          result[3] += 0;
          result[4] += 0.9025641025641026;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.42787750791974655;
          result[1] += 0;
          result[2] += 0.005702217529039071;
          result[3] += 0.5662090813093981;
          result[4] += 0.00021119324181626187;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0.8668965517241379;
          result[1] += 0;
          result[2] += 0.004827586206896552;
          result[3] += 0.12206896551724138;
          result[4] += 0.002758620689655172;
          result[5] += 0.000689655172413793;
          result[6] += 0.002758620689655172;
        } else {
          result[0] += 0.9293328069482827;
          result[1] += 0;
          result[2] += 0.0007895775759968417;
          result[3] += 0.06869324911172522;
          result[4] += 0.0011843663639952626;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 0.9969788519637462;
          result[1] += 0;
          result[2] += 0.0030211480362537764;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8738738738738738;
          result[1] += 0;
          result[2] += 0.12612612612612611;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.01313937118723604;
          result[2] += 0.0028155795401220087;
          result[3] += 0.9840450492726419;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40900000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9987157534246576;
          result[1] += 0;
          result[2] += 0.0012842465753424657;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9982638888888888;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001736111111111111;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0.722388698630137;
          result[1] += 0.003424657534246575;
          result[2] += 0.0017123287671232876;
          result[3] += 0.2711900684931507;
          result[4] += 0.0006421232876712328;
          result[5] += 0.0004280821917808219;
          result[6] += 0.00021404109589041095;
        } else {
          result[0] += 0.8849431818181818;
          result[1] += 0.0004734848484848485;
          result[2] += 0.010416666666666666;
          result[3] += 0.06581439393939394;
          result[4] += 0.035748106060606064;
          result[5] += 0.0014204545454545455;
          result[6] += 0.0011837121212121212;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
          result[0] += 0;
          result[1] += 0.0009852216748768472;
          result[2] += 0;
          result[3] += 0.9970443349753695;
          result[4] += 0.0016420361247947454;
          result[5] += 0.0003284072249589491;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03861003861003861;
          result[3] += 0;
          result[4] += 0.9613899613899614;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 100;
  result[1] /= 100;
  result[2] /= 100;
  result[3] /= 100;
  result[4] /= 100;
  result[5] /= 100;
  result[6] /= 100;
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  result[2] += 0;
  result[3] += 0;
  result[4] += 0;
  result[5] += 0;
  result[6] += 0;
  
  // Apply postprocessor
  if (!pred_margin) { postprocess(result); }
}

void postprocess(float* result) {
  // Do nothing
}


int main() {
    float result[MAX_N_CLASS];
    union Entry input[TEST_DATA_COLS];
    char line[1024];
    

    FILE* file = fopen("./codegen/dataset_148/split_3/test_data.csv", "r");
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
