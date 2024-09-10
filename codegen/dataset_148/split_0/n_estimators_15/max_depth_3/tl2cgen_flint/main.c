
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.14457831325301204;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8511465215701516;
        result[4] += 0.003109211037699184;
        result[5] += 0.001165954139137194;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.023157894736842106;
        result[3] += 0;
        result[4] += 0.9715789473684211;
        result[5] += 0.005263157894736842;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9994193698227143;
        result[1] += 0;
        result[2] += 0.0005032128203143145;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.7417356971433e-05;
      } else {
        result[0] += 0.7044081853421077;
        result[1] += 0.000901469395114036;
        result[2] += 0.006490579644821059;
        result[3] += 0.2872982962228433;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000901469395114036;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0.17439862542955326;
        result[1] += 0.00859106529209622;
        result[2] += 0;
        result[3] += 0.8170103092783505;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.05901639344262295;
        result[1] += 0;
        result[2] += 0.013114754098360656;
        result[3] += 0.23169398907103825;
        result[4] += 0.6961748633879782;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0.0034482758620689655;
        result[1] += 0.017241379310344827;
        result[2] += 0;
        result[3] += 0.22413793103448276;
        result[4] += 0.7551724137931034;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.004405286343612335;
        result[2] += 0;
        result[3] += 0.06461086637298091;
        result[4] += 0.9309838472834068;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9981481481481481;
        result[5] += 0.001851851851851852;
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
        result[0] += 0.070293182620982;
        result[1] += 0.0038855528081949845;
        result[2] += 0.006711409395973155;
        result[3] += 0.916637230660544;
        result[4] += 0;
        result[5] += 0.0024726245143058996;
        result[6] += 0;
      } else {
        result[0] += 0.481044650379107;
        result[1] += 0;
        result[2] += 0.0016849199663016006;
        result[3] += 0.5155855096882898;
        result[4] += 0;
        result[5] += 0.0016849199663016006;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 0.9980905717476674;
        result[1] += 0.00036026948157221605;
        result[2] += 0.001296970133659978;
        result[3] += 0.00014410779262888644;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010808084447166482;
      } else {
        result[0] += 0.010033444816053512;
        result[1] += 0.046822742474916385;
        result[2] += 0;
        result[3] += 0.9431438127090301;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.18455145441212417;
        result[1] += 0;
        result[2] += 0.0031777071620630653;
        result[3] += 0.8122708384258127;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9929577464788732;
        result[1] += 0;
        result[2] += 0.005030181086519115;
        result[3] += 0.0012072434607645875;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008048289738430583;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0.9970223325062034;
        result[1] += 0;
        result[2] += 0.0024813895781637717;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004962779156327543;
      } else {
        result[0] += 0.9997522913054249;
        result[1] += 0;
        result[2] += 0.00024770869457517957;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 0.01392706615356423;
        result[1] += 0.004581271761040865;
        result[2] += 0.004214770020157596;
        result[3] += 0.6582371266263515;
        result[4] += 0.3183067619571193;
        result[5] += 0.0007330034817665384;
        result[6] += 0;
      } else {
        result[0] += 0.9807264640474426;
        result[1] += 0.00012354830738818879;
        result[2] += 0.0054361255250803065;
        result[3] += 0.012972572275759823;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007412898443291327;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 0;
        result[1] += 0.0013386880856760374;
        result[2] += 0.011713520749665328;
        result[3] += 0.8363453815261044;
        result[4] += 0.14926372155287818;
        result[5] += 0.0013386880856760374;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6879334257975035;
        result[4] += 0.3120665742024965;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9910313901345291;
        result[5] += 0.008968609865470852;
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
        result[0] += 0.04000000000000001;
        result[1] += 0.36000000000000004;
        result[2] += 0.5200000000000001;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.08000000000000002;
        result[6] += 0;
      } else {
        result[0] += 0.07681564245810056;
        result[1] += 0;
        result[2] += 0.004189944134078212;
        result[3] += 0.9179469273743017;
        result[4] += 0;
        result[5] += 0.001047486033519553;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9991139552055132;
        result[1] += 0;
        result[2] += 0.0007383706620723603;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00014767413241447206;
      } else {
        result[0] += 0.6298932384341637;
        result[1] += 0.010676156583629894;
        result[2] += 0;
        result[3] += 0.3594306049822064;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 0.8111077017490028;
        result[1] += 0.0004909481436023321;
        result[2] += 0.003927585148818657;
        result[3] += 0.18379871126112307;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006750536974532066;
      } else {
        result[0] += 0.15769522365428354;
        result[1] += 0.006823351023502654;
        result[2] += 0.004548900682335102;
        result[3] += 0.8294162244124337;
        result[4] += 0;
        result[5] += 0.001516300227445034;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 0.0022172949002217295;
        result[1] += 0.004988913525498891;
        result[2] += 0;
        result[3] += 0.7184035476718403;
        result[4] += 0.2721729490022173;
        result[5] += 0.0022172949002217295;
        result[6] += 0;
      } else {
        result[0] += 0.5639810426540285;
        result[1] += 0;
        result[2] += 0.035545023696682464;
        result[3] += 0;
        result[4] += 0.4004739336492891;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 0.18125;
        result[1] += 0;
        result[2] += 0.003289473684210526;
        result[3] += 0.6065789473684211;
        result[4] += 0.2075657894736842;
        result[5] += 0.0013157894736842105;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0017467248908296944;
        result[2] += 0;
        result[3] += 0.029694323144104803;
        result[4] += 0.9685589519650655;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 0.6290076335877862;
        result[1] += 0.0061068702290076335;
        result[2] += 0;
        result[3] += 0.3648854961832061;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9958719953240301;
        result[1] += 0.0006575582669686564;
        result[2] += 0.001680426682253233;
        result[3] += 0.001716957697084825;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.306202966318405e-05;
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
        result[0] += 0.41719038817005544;
        result[1] += 0;
        result[2] += 0.007024029574861368;
        result[3] += 0.5750462107208872;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007393715341959334;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0.4986449864498645;
        result[1] += 0;
        result[2] += 0.008807588075880758;
        result[3] += 0.49254742547425473;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.1437908496732026;
        result[1] += 0.016339869281045753;
        result[2] += 0.00392156862745098;
        result[3] += 0.8359477124183007;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
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
        result[0] += 0.9994304806743108;
        result[1] += 0;
        result[2] += 0.0005315513706431772;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.796795504594123e-05;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.3551675650339817;
        result[1] += 0.0014061401453011485;
        result[2] += 0.008085305835481603;
        result[3] += 0.5308179048511835;
        result[4] += 0.10323412233419264;
        result[5] += 0.0009374267635340989;
        result[6] += 0.0003515350363252871;
      } else {
        result[0] += 0.9715994020926756;
        result[1] += 0;
        result[2] += 0.004982561036372696;
        result[3] += 0.02192326856003986;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0014947683109118087;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
        result[0] += 0.999485728979172;
        result[1] += 0;
        result[2] += 0.0005142710208279763;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9978064162325199;
        result[1] += 0;
        result[2] += 0.0019193857965451055;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00027419797093501506;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0.0008103727714748784;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9987844408427877;
        result[5] += 0.0004051863857374392;
        result[6] += 0;
      } else {
        result[0] += 0.02034136076689268;
        result[1] += 0.0060790273556231;
        result[2] += 0.013327098433481413;
        result[3] += 0.9574468085106383;
        result[4] += 0;
        result[5] += 0.0028057049333645077;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41700000))) ) ) {
        result[0] += 0.6135727227804315;
        result[1] += 0;
        result[2] += 0.0034590676988963927;
        result[3] += 0.3819799044638445;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009883050568275408;
      } else {
        result[0] += 0.9235280848184074;
        result[1] += 0.00022558087074216106;
        result[2] += 0.0051883600270697045;
        result[3] += 0.07060681254229641;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00045116174148432213;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0.5304304799604156;
        result[1] += 0;
        result[2] += 0.012370113805047007;
        result[3] += 0.4448292924294904;
        result[4] += 0.012370113805047007;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.15630114566284778;
        result[1] += 0.008183306055646482;
        result[2] += 0.007364975450081833;
        result[3] += 0.8281505728314239;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.39368770764119604;
        result[4] += 0.606312292358804;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0014245014245014246;
        result[1] += 0.009259259259259259;
        result[2] += 0;
        result[3] += 0.054843304843304845;
        result[4] += 0.9344729344729344;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 0.11566265060240964;
        result[1] += 0;
        result[2] += 0.010843373493975903;
        result[3] += 0.8385542168674699;
        result[4] += 0.03072289156626506;
        result[5] += 0.004216867469879518;
        result[6] += 0;
      } else {
        result[0] += 0.9085443918730866;
        result[1] += 0.000528806011689396;
        result[2] += 0.0018369050932368495;
        result[3] += 0.08872808238241024;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003618146395769552;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x458d2000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8571428571428571;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.14285714285714285;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x439b0000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0.9938388625592417;
        result[1] += 0;
        result[2] += 0.0042654028436018955;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0018957345971563982;
      } else {
        result[0] += 0.9997929692352283;
        result[1] += 0;
        result[2] += 0.00020703076477164508;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 0.5241480967658024;
        result[1] += 0.0017341541663053845;
        result[2] += 0.004335385415763462;
        result[3] += 0.32341975201595424;
        result[4] += 0.1454088268447065;
        result[5] += 0.00043353854157634613;
        result[6] += 0.0005202462498916154;
      } else {
        result[0] += 0.9657894736842106;
        result[1] += 0;
        result[2] += 0.008947368421052633;
        result[3] += 0.016842105263157898;
        result[4] += 0.0015789473684210528;
        result[5] += 0.0015789473684210528;
        result[6] += 0.005263157894736843;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 0.0016056518946692357;
        result[2] += 0;
        result[3] += 0.9977520873474631;
        result[4] += 0.0003211303789338471;
        result[5] += 0.0003211303789338471;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.050724637681159424;
        result[3] += 0;
        result[4] += 0.9492753623188406;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41b40000))) ) ) {
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
        result[4] += 0.9995785924989464;
        result[5] += 0.00042140750105351877;
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
        result[0] += 0.0003883495145631068;
        result[1] += 0.005825242718446602;
        result[2] += 0.010097087378640776;
        result[3] += 0.9813592233009709;
        result[4] += 0;
        result[5] += 0.002330097087378641;
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
        result[0] += 0.9985581688744706;
        result[1] += 0;
        result[2] += 0.0011714877894926556;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002703433360367667;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.8557320738514383;
        result[1] += 0.0020395019321597253;
        result[2] += 0.0066552168312580505;
        result[3] += 0.13428510090167453;
        result[4] += 0;
        result[5] += 0.00032202662086732505;
        result[6] += 0.0009660798626019751;
      } else {
        result[0] += 0;
        result[1] += 0.000725689404934688;
        result[2] += 0.007982583454281567;
        result[3] += 0.9912917271407837;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x437c0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 0.9972770592239619;
        result[1] += 0;
        result[2] += 0.0020422055820285907;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006807351940095302;
      } else {
        result[0] += 0.9998626373626374;
        result[1] += 0;
        result[2] += 0.00013736263736263736;
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
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.7027027027027026;
        result[1] += 0.0013291980505095258;
        result[2] += 0.005228178998670801;
        result[3] += 0.28896765618077086;
        result[4] += 0.00035445281346920687;
        result[5] += 0.00035445281346920687;
        result[6] += 0.0010633584404076205;
      } else {
        result[0] += 0;
        result[1] += 0.0023828435266084196;
        result[2] += 0.007148530579825258;
        result[3] += 0.8128144029653164;
        result[4] += 0.1768599417527138;
        result[5] += 0.0007942811755361397;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0.0012224938875305623;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.4339853300733496;
        result[4] += 0.5647921760391198;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.00291970802919708;
        result[1] += 0.0072992700729927005;
        result[2] += 0;
        result[3] += 0.060583941605839416;
        result[4] += 0.9291970802919708;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0.9966459032103497;
        result[1] += 0;
        result[2] += 0.0023957834211787254;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009583133684714902;
      } else {
        result[0] += 0.9996662773235442;
        result[1] += 0;
        result[2] += 0.0003337226764558652;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 0.6102667493796528;
        result[1] += 0.001240694789081886;
        result[2] += 0.005583126550868487;
        result[3] += 0.32986972704714645;
        result[4] += 0.051799007444168745;
        result[5] += 0.0006978908188585609;
        result[6] += 0.0005428039702233252;
      } else {
        result[0] += 0.07179269328802039;
        result[1] += 0.004672897196261682;
        result[2] += 0.008496176720475786;
        result[3] += 0.9120645709430756;
        result[4] += 0.0021240441801189465;
        result[5] += 0.0008496176720475786;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0020161290322580645;
        result[1] += 0.004032258064516129;
        result[2] += 0;
        result[3] += 0.28763440860215056;
        result[4] += 0.7063172043010753;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 0.9976846492243575;
        result[1] += 0;
        result[2] += 0.0023153507756425097;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9997713135748262;
        result[1] += 0;
        result[2] += 0.00022868642517380168;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        result[0] += 0.0013409319477036543;
        result[1] += 0.009051290646999666;
        result[2] += 0.0033523298692591354;
        result[3] += 0.9570901776734831;
        result[4] += 0.02748910492792491;
        result[5] += 0.0016761649346295677;
        result[6] += 0;
      } else {
        result[0] += 0.9969644405897659;
        result[1] += 0;
        result[2] += 0.0026019080659150044;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004336513443191674;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0.13229475766567755;
        result[1] += 0;
        result[2] += 0.008654797230464886;
        result[3] += 0.69188921859545;
        result[4] += 0.16691394658753708;
        result[5] += 0.0002472799208704253;
        result[6] += 0;
      } else {
        result[0] += 0.5072233967582804;
        result[1] += 0.0010570824524312897;
        result[2] += 0.00828047921071177;
        result[3] += 0.19573643410852712;
        result[4] += 0.2864693446088795;
        result[5] += 0.0008809020436927414;
        result[6] += 0.00035236081747709656;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x41100000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420a0000))) ) ) {
        result[0] += 0.9992819530876017;
        result[1] += 0;
        result[2] += 0.0007180469123982767;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9998320644872369;
        result[1] += 0;
        result[2] += 0.00016793551276309896;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
        result[0] += 0.21118820468343452;
        result[1] += 0.007805724197745013;
        result[2] += 0.0039028620988725065;
        result[3] += 0.4269297484822203;
        result[4] += 0.3501734605377277;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7967081850533808;
        result[1] += 0.0012233096085409252;
        result[2] += 0.006561387900355872;
        result[3] += 0.17938167259786478;
        result[4] += 0.01434608540925267;
        result[5] += 0.0008896797153024911;
        result[6] += 0.0008896797153024911;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
        result[0] += 0;
        result[1] += 0.000687757909215956;
        result[2] += 0;
        result[3] += 0.9917469050894085;
        result[4] += 0.007221458046767538;
        result[5] += 0.000343878954607978;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.037815126050420166;
        result[3] += 0;
        result[4] += 0.9621848739495799;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41600000))) ) ) {
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
        result[4] += 0.9995855781185247;
        result[5] += 0.0004144218814753419;
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
        result[1] += 0.002551020408163265;
        result[2] += 0.007653061224489796;
        result[3] += 0.9878826530612245;
        result[4] += 0;
        result[5] += 0.001913265306122449;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0.9984619328377339;
        result[1] += 0;
        result[2] += 0.0015380671622660857;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9999434165110621;
        result[1] += 0;
        result[2] += 5.6583488937927916e-05;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.905861257424633;
        result[1] += 0.002689678359296201;
        result[2] += 0.007284545556427211;
        result[3] += 0.08293174941163287;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0012327692480107587;
      } else {
        result[0] += 0;
        result[1] += 0.0017857142857142857;
        result[2] += 0.0067857142857142855;
        result[3] += 0.9914285714285714;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 15;
  result[1] /= 15;
  result[2] /= 15;
  result[3] /= 15;
  result[4] /= 15;
  result[5] /= 15;
  result[6] /= 15;
  
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
    

    FILE* file = fopen("./codegen/dataset_148/split_0/test_data.csv", "r");
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
