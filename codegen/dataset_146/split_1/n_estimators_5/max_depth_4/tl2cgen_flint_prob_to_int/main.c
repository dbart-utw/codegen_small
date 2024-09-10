
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
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 5524073;
          result[1] += 13810184;
          result[2] += 0;
          result[3] += 0;
          result[4] += 800990685;
          result[5] += 38668515;
        } else {
          result[0] += 482791944;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 225720908;
          result[5] += 150480605;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 4169871;
          result[2] += 0;
          result[3] += 19459398;
          result[4] += 20849355;
          result[5] += 814514833;
        } else {
          result[0] += 0;
          result[1] += 2399423;
          result[2] += 4798846;
          result[3] += 143965384;
          result[4] += 105574615;
          result[5] += 602255190;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 636217117;
          result[1] += 56195833;
          result[2] += 1337996;
          result[3] += 37463889;
          result[4] += 84293750;
          result[5] += 43484871;
        } else {
          result[0] += 76151902;
          result[1] += 7615190;
          result[2] += 184287603;
          result[3] += 356390903;
          result[4] += 59398483;
          result[5] += 175149375;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0;
          result[1] += 858993459;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 858993459;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 858993459;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41902119;
          result[3] += 20951059;
          result[4] += 0;
          result[5] += 796140279;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 35060957;
          result[1] += 35060957;
          result[2] += 78887154;
          result[3] += 490853405;
          result[4] += 0;
          result[5] += 219130984;
        } else {
          result[0] += 171798691;
          result[1] += 98170681;
          result[2] += 441768064;
          result[3] += 49085340;
          result[4] += 98170681;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 156180628;
          result[3] += 624722515;
          result[4] += 0;
          result[5] += 78090314;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 661068698;
          result[3] += 174173788;
          result[4] += 0;
          result[5] += 23750971;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 552210080;
          result[1] += 0;
          result[2] += 306783378;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 2454267;
          result[1] += 0;
          result[2] += 831996521;
          result[3] += 22088403;
          result[4] += 0;
          result[5] += 2454267;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 797636783;
          result[2] += 0;
          result[3] += 0;
          result[4] += 61356675;
          result[5] += 0;
        } else {
          result[0] += 9010420;
          result[1] += 15017368;
          result[2] += 0;
          result[3] += 3003473;
          result[4] += 801927459;
          result[5] += 30034736;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 447580802;
          result[1] += 49731200;
          result[2] += 0;
          result[3] += 9042036;
          result[4] += 253177019;
          result[5] += 99462400;
        } else {
          result[0] += 9278057;
          result[1] += 0;
          result[2] += 10051228;
          result[3] += 83502514;
          result[4] += 50256142;
          result[5] += 705905515;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 261432791;
          result[2] += 0;
          result[3] += 0;
          result[4] += 560213125;
          result[5] += 37347541;
        } else {
          result[0] += 0;
          result[1] += 851219762;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7773696;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 726044517;
          result[1] += 10349318;
          result[2] += 10349318;
          result[3] += 30251854;
          result[4] += 45377782;
          result[5] += 36620666;
        } else {
          result[0] += 149081509;
          result[1] += 22717182;
          result[2] += 127784150;
          result[3] += 329399144;
          result[4] += 44014540;
          result[5] += 185996930;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42e30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27709466;
          result[3] += 27709466;
          result[4] += 0;
          result[5] += 803574526;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 858993459;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 497312002;
          result[2] += 226050910;
          result[3] += 0;
          result[4] += 135630546;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 404718072;
          result[3] += 297343889;
          result[4] += 0;
          result[5] += 156931497;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 738624948;
          result[3] += 87540734;
          result[4] += 0;
          result[5] += 32827775;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 490853405;
          result[3] += 368140053;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 10919408;
          result[1] += 0;
          result[2] += 820168895;
          result[3] += 25478619;
          result[4] += 0;
          result[5] += 2426535;
        } else {
          result[0] += 687194767;
          result[1] += 0;
          result[2] += 171798691;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42870000))) ) ) {
          result[0] += 25942755;
          result[1] += 8647585;
          result[2] += 0;
          result[3] += 14412641;
          result[4] += 720632096;
          result[5] += 89358379;
        } else {
          result[0] += 631308445;
          result[1] += 20698637;
          result[2] += 0;
          result[3] += 10349318;
          result[4] += 82794550;
          result[5] += 113842506;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 896652;
          result[2] += 896652;
          result[3] += 38556073;
          result[4] += 69042271;
          result[5] += 749601807;
        } else {
          result[0] += 0;
          result[1] += 9733636;
          result[2] += 9733636;
          result[3] += 474514800;
          result[4] += 26767501;
          result[5] += 338243883;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 381774870;
          result[2] += 0;
          result[3] += 0;
          result[4] += 477218588;
          result[5] += 0;
        } else {
          result[0] += 1831542;
          result[1] += 857161916;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 58326716;
          result[1] += 217399579;
          result[2] += 0;
          result[3] += 0;
          result[4] += 583267163;
          result[5] += 0;
        } else {
          result[0] += 607405416;
          result[1] += 10782344;
          result[2] += 59302895;
          result[3] += 67090144;
          result[4] += 47921531;
          result[5] += 66491125;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 858993459;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 202116108;
          result[4] += 0;
          result[5] += 656877351;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 292838679;
          result[3] += 507587043;
          result[4] += 0;
          result[5] += 58567735;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 808464432;
          result[3] += 50529027;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 390451572;
          result[1] += 0;
          result[2] += 0;
          result[3] += 156180628;
          result[4] += 78090314;
          result[5] += 234270943;
        } else {
          result[0] += 25468808;
          result[1] += 0;
          result[2] += 701549913;
          result[3] += 104190581;
          result[4] += 0;
          result[5] += 27784155;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 5688698;
          result[1] += 0;
          result[2] += 802106474;
          result[3] += 51198285;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 849298273;
          result[3] += 9695185;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 6292992;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 786624046;
          result[5] += 66076419;
        } else {
          result[0] += 0;
          result[1] += 858993459;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 16284236;
          result[1] += 0;
          result[2] += 0;
          result[3] += 41728355;
          result[4] += 61065885;
          result[5] += 739914981;
        } else {
          result[0] += 66076419;
          result[1] += 77468906;
          result[2] += 91139889;
          result[3] += 353167072;
          result[4] += 13670983;
          result[5] += 257470187;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42980000))) ) ) {
          result[0] += 0;
          result[1] += 202116108;
          result[2] += 0;
          result[3] += 0;
          result[4] += 656877351;
          result[5] += 0;
        } else {
          result[0] += 3843371;
          result[1] += 849385031;
          result[2] += 1921685;
          result[3] += 0;
          result[4] += 3843371;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42890000))) ) ) {
          result[0] += 99517534;
          result[1] += 151895184;
          result[2] += 10475529;
          result[3] += 15713294;
          result[4] += 565678619;
          result[5] += 15713294;
        } else {
          result[0] += 641984585;
          result[1] += 14467258;
          result[2] += 30140121;
          result[3] += 61485847;
          result[4] += 50032601;
          result[5] += 60883045;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 135630546;
          result[2] += 45210182;
          result[3] += 0;
          result[4] += 678152730;
          result[5] += 0;
        } else {
          result[0] += 14081859;
          result[1] += 14081859;
          result[2] += 42245579;
          result[3] += 42245579;
          result[4] += 14081859;
          result[5] += 732256719;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 94785485;
          result[3] += 622029746;
          result[4] += 5924092;
          result[5] += 136254134;
        } else {
          result[0] += 9336885;
          result[1] += 18673770;
          result[2] += 485518042;
          result[3] += 224085250;
          result[4] += 0;
          result[5] += 121379510;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 11453246;
          result[1] += 0;
          result[2] += 492489583;
          result[3] += 332144137;
          result[4] += 0;
          result[5] += 22906492;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 787410670;
          result[3] += 71582788;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 3158064;
          result[1] += 0;
          result[2] += 751619276;
          result[3] += 101058054;
          result[4] += 0;
          result[5] += 3158064;
        } else {
          result[0] += 1496504;
          result[1] += 0;
          result[2] += 836545894;
          result[3] += 17958051;
          result[4] += 0;
          result[5] += 2993008;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 644245094;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 858993459;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
          result[0] += 9465492;
          result[1] += 78090314;
          result[2] += 0;
          result[3] += 0;
          result[4] += 738308427;
          result[5] += 33129224;
        } else {
          result[0] += 653966213;
          result[1] += 42419430;
          result[2] += 0;
          result[3] += 0;
          result[4] += 107816051;
          result[5] += 54791763;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 1178317;
          result[2] += 0;
          result[3] += 16496445;
          result[4] += 44776065;
          result[5] += 796542631;
        } else {
          result[0] += 0;
          result[1] += 12570635;
          result[2] += 4190211;
          result[3] += 243032295;
          result[4] += 87994451;
          result[5] += 511205863;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 4032833;
          result[1] += 0;
          result[2] += 12098499;
          result[3] += 141149159;
          result[4] += 141149159;
          result[5] += 560563806;
        } else {
          result[0] += 104261887;
          result[1] += 99593444;
          result[2] += 20229918;
          result[3] += 359470088;
          result[4] += 94925001;
          result[5] += 180513118;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42890000))) ) ) {
          result[0] += 823202064;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 47721858;
          result[1] += 0;
          result[2] += 262470223;
          result[3] += 477218588;
          result[4] += 0;
          result[5] += 71582788;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 845444666;
          result[1] += 0;
          result[2] += 5419517;
          result[3] += 2709758;
          result[4] += 5419517;
          result[5] += 0;
        } else {
          result[0] += 372230498;
          result[1] += 0;
          result[2] += 429496729;
          result[3] += 28633115;
          result[4] += 28633115;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 273316100;
          result[3] += 351406415;
          result[4] += 0;
          result[5] += 234270943;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 589024086;
          result[3] += 241336257;
          result[4] += 0;
          result[5] += 28633115;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 199409195;
          result[1] += 0;
          result[2] += 567549249;
          result[3] += 30678337;
          result[4] += 0;
          result[5] += 61356675;
        } else {
          result[0] += 7386921;
          result[1] += 0;
          result[2] += 809395556;
          result[3] += 42210980;
          result[4] += 0;
          result[5] += 0;
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
