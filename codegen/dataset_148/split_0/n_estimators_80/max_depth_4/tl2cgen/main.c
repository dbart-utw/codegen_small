
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
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)16) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          result[0] += 0.04537953795379538;
          result[1] += 0.00825082508250825;
          result[2] += 0.01485148514851485;
          result[3] += 0.9315181518151815;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.4755700325732899;
          result[1] += 0;
          result[2] += 0.004885993485342019;
          result[3] += 0.5195439739413681;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9951878091164283;
          result[1] += 0;
          result[2] += 0.0009357037829167225;
          result[3] += 0.00374281513166689;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00013367196898810322;
        } else {
          result[0] += 0.07913669064748201;
          result[1] += 0;
          result[2] += 0.00935251798561151;
          result[3] += 0.9115107913669065;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9939548202354439;
          result[1] += 0;
          result[2] += 0.0022271714922049;
          result[3] += 0.0022271714922049;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0015908367801463572;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)1.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
          result[0] += 0.16008537886872998;
          result[1] += 0.012806830309498399;
          result[2] += 0.020277481323372464;
          result[3] += 0.35645677694770544;
          result[4] += 0.4503735325506937;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8952776336274001;
          result[1] += 0.0017644006227296315;
          result[2] += 0.0032174364296834457;
          result[3] += 0.0776336274001038;
          result[4] += 0.02117280747275558;
          result[5] += 0.0005189413596263622;
          result[6] += 0.0004151530877010898;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
          result[0] += 0.19895287958115182;
          result[1] += 0;
          result[2] += 0.020942408376963352;
          result[3] += 0.4214659685863874;
          result[4] += 0.3586387434554974;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8641843971631206;
          result[1] += 0;
          result[2] += 0.0010638297872340426;
          result[3] += 0.10780141843971631;
          result[4] += 0.02695035460992908;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          result[0] += 0.9819010591232069;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.01193189435581177;
          result[4] += 0.00563078160611342;
          result[5] += 0;
          result[6] += 0.0005362649148679448;
        } else {
          result[0] += 0.8122112874071097;
          result[1] += 0;
          result[2] += 0.0010042177144004819;
          result[3] += 0.18658365133560953;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00020084354288009635;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          result[0] += 0.19823973176865045;
          result[1] += 0.00041911148365465214;
          result[2] += 0;
          result[3] += 0.501257334450964;
          result[4] += 0.3000838222967309;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.11082474226804123;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.39948453608247425;
          result[4] += 0.4896907216494845;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
          result[0] += 0.9966386554621849;
          result[1] += 0;
          result[2] += 0.0033613445378151263;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9997190748197397;
          result[1] += 0;
          result[2] += 0.000280925180260324;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
          result[0] += 0.0226628895184136;
          result[1] += 0.006515580736543909;
          result[2] += 0.00198300283286119;
          result[3] += 0.9662889518413598;
          result[4] += 0.0011331444759206798;
          result[5] += 0.00141643059490085;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.029605263157894735;
          result[2] += 0;
          result[3] += 0.18092105263157895;
          result[4] += 0.7894736842105263;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
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
          result[2] += 0.064;
          result[3] += 0.9296;
          result[4] += 0;
          result[5] += 0.0064;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          result[0] += 0.47220500103327134;
          result[1] += 0;
          result[2] += 0.0012399256044637321;
          result[3] += 0.5255218020252118;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010332713370531101;
        } else {
          result[0] += 0.9307891332470892;
          result[1] += 0.000646830530401035;
          result[2] += 0.003234152652005175;
          result[3] += 0.06532988357050452;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)52.5) ) ) {
          result[0] += 0.8321167883211679;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1678832116788321;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9894736842105263;
          result[1] += 0;
          result[2] += 0.0057644110275689225;
          result[3] += 0.004260651629072682;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005012531328320802;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-35) ) ) {
          result[0] += 0;
          result[1] += 0.9473684210526315;
          result[2] += 0;
          result[3] += 0.05263157894736842;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0015378700499807767;
          result[1] += 0;
          result[2] += 0.006151480199923107;
          result[3] += 0.9892349096501346;
          result[4] += 0;
          result[5] += 0.0030757400999615533;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9953917050691244;
          result[1] += 0;
          result[2] += 0.004608294930875576;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0273972602739726;
          result[2] += 0;
          result[3] += 0.9726027397260274;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
          result[0] += 0.7201017811704835;
          result[1] += 0;
          result[2] += 0.001272264631043257;
          result[3] += 0.2786259541984733;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9958784695626801;
          result[1] += 0.000656526972316446;
          result[2] += 0.002151949520370573;
          result[3] += 0.001203632782580151;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000109421162052741;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.16993977481015973;
          result[1] += 0;
          result[2] += 0.0054988216810683424;
          result[3] += 0.8240377062058131;
          result[4] += 0;
          result[5] += 0.0005236973029588898;
          result[6] += 0;
        } else {
          result[0] += 0.9924106251248253;
          result[1] += 0;
          result[2] += 0.004194128220491312;
          result[3] += 0.00219692430597164;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011983223487118035;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)19) ) ) {
          result[0] += 0.9890827149461906;
          result[1] += 0.0004662185788103656;
          result[2] += 0.0009712887058549283;
          result[3] += 0.009130113835036327;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003496639341077742;
        } else {
          result[0] += 0.004357298474945534;
          result[1] += 0.006535947712418301;
          result[2] += 0;
          result[3] += 0.9673202614379085;
          result[4] += 0.013071895424836602;
          result[5] += 0.008714596949891068;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          result[0] += 0.9584509883017346;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04154901169826543;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.16931671680275032;
          result[1] += 0;
          result[2] += 0.01675977653631285;
          result[3] += 0.7000429737859906;
          result[4] += 0.11388053287494629;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
          result[0] += 0.2520237452779277;
          result[1] += 0;
          result[2] += 0.0124123043712898;
          result[3] += 0.6454398273070696;
          result[4] += 0.0901241230437129;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8755221386800334;
          result[1] += 0;
          result[2] += 0.010025062656641603;
          result[3] += 0.10192147034252297;
          result[4] += 0.005012531328320802;
          result[5] += 0.001670843776106934;
          result[6] += 0.005847953216374269;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.5059026778001727;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4940973221998272;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8128779793667734;
          result[1] += 0;
          result[2] += 0.004980434009249377;
          result[3] += 0.001422981145499822;
          result[4] += 0.1807186054784774;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.008856088560885609;
          result[2] += 0;
          result[3] += 0.9911439114391144;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9166666666666666;
          result[1] += 0;
          result[2] += 0.08333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 0.9778933680104032;
          result[1] += 0;
          result[2] += 0.022106631989596878;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8902439024390244;
          result[1] += 0;
          result[2] += 0.10975609756097561;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-13) ) ) {
          result[0] += 0.26735598227474155;
          result[1] += 0.02511078286558346;
          result[2] += 0;
          result[3] += 0.706056129985229;
          result[4] += 0.001477104874446086;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)18) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.008097165991902834;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9919028340080972;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 0.9960172963131543;
          result[1] += 0;
          result[2] += 0.0005689576695493855;
          result[3] += 0.0030723714155666817;
          result[4] += 0.0003413746017296313;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.024793388429752067;
          result[1] += 0.006887052341597796;
          result[2] += 0.02203856749311295;
          result[3] += 0.31955922865013775;
          result[4] += 0.6253443526170799;
          result[5] += 0.0013774104683195593;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)22.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03255813953488372;
          result[4] += 0.9674418604651163;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9921259842519685;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.006929133858267717;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009448818897637795;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)11.5) ) ) {
          result[0] += 0.4168349122534555;
          result[1] += 0.002174250660040379;
          result[2] += 0.006988662835844075;
          result[3] += 0.5570740798260599;
          result[4] += 0.015840969094579903;
          result[5] += 0.0009318217114458767;
          result[6] += 0.00015530361857431278;
        } else {
          result[0] += 0.5041509433962266;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.46566037735849064;
          result[4] += 0.027924528301886797;
          result[5] += 0.0007547169811320755;
          result[6] += 0.001509433962264151;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.9362880886426593;
          result[1] += 0;
          result[2] += 0.002077562326869806;
          result[3] += 0.061634349030470915;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.995369211514393;
          result[1] += 0;
          result[2] += 0.0026282853566958696;
          result[3] += 0.000750938673341677;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012515644555694619;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2263) ) ) {
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)28) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9791459781529295;
          result[1] += 0;
          result[2] += 0.020854021847070508;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
          result[0] += 0;
          result[1] += 0.013313609467455622;
          result[2] += 0;
          result[3] += 0.9866863905325444;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9339622641509434;
          result[1] += 0;
          result[2] += 0.0660377358490566;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.028833551769331587;
          result[3] += 0.927916120576671;
          result[4] += 0.04325032765399738;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9987484355444305;
          result[1] += 0;
          result[2] += 0.0012515644555694619;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9669678457767861;
          result[1] += 0.0004755459633463804;
          result[2] += 0.0008047700918169514;
          result[3] += 0.031093389911109486;
          result[4] += 0.00014632183487580934;
          result[5] += 0.00021948275231371402;
          result[6] += 0.0002926436697516187;
        } else {
          result[0] += 0.6282243926872026;
          result[1] += 0;
          result[2] += 0.005133984472827448;
          result[3] += 0.3646381167042324;
          result[4] += 0.0011269722013523666;
          result[5] += 0.0005008765339343851;
          result[6] += 0.0003756574004507889;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)880) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-174.5) ) ) {
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-35) ) ) {
          result[0] += 0;
          result[1] += 0.9375;
          result[2] += 0;
          result[3] += 0.0625;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.006191950464396285;
          result[3] += 0.9919504643962849;
          result[4] += 0;
          result[5] += 0.0018575851393188853;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0.04377104377104377;
          result[2] += 0;
          result[3] += 0.9562289562289562;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
          result[0] += 0.968141592920354;
          result[1] += 0;
          result[2] += 0.02654867256637168;
          result[3] += 0.005309734513274336;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9976732161323681;
          result[1] += 0.0009971930861279361;
          result[2] += 0.0009602600088639386;
          result[3] += 0.00011079923179199292;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002585315408479835;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.25609467455621304;
          result[1] += 0;
          result[2] += 0.0007100591715976331;
          result[3] += 0.7431952662721893;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9625935162094763;
          result[1] += 0;
          result[2] += 0.02826267664172901;
          result[3] += 0.0016625103906899418;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.007481296758104738;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          result[0] += 0.9988571428571429;
          result[1] += 0;
          result[2] += 0.001142857142857143;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9862258953168044;
          result[1] += 0;
          result[2] += 0.005509641873278237;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.008264462809917356;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.9992271171469581;
          result[1] += 0;
          result[2] += 0.0007728828530418461;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)47.5) ) ) {
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
          result[4] += 0.9995854063018242;
          result[5] += 0.00041459369817578774;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
          result[0] += 0.539568345323741;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.45323741007194246;
          result[4] += 0;
          result[5] += 0.007194244604316547;
          result[6] += 0;
        } else {
          result[0] += 0.00196174595389897;
          result[1] += 0.009563511525257478;
          result[2] += 0.01373222167729279;
          result[3] += 0.9730259931338892;
          result[4] += 0;
          result[5] += 0.0017165277096615988;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 0.9874131375376951;
          result[1] += 0;
          result[2] += 0.004720073423364364;
          result[3] += 0.006817883833748526;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001048905205192081;
        } else {
          result[0] += 0.8938547486033519;
          result[1] += 0.002793296089385475;
          result[2] += 0.036312849162011177;
          result[3] += 0.0670391061452514;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.022222222222222223;
          result[3] += 0.9777777777777777;
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0.9969469886205939;
          result[1] += 0;
          result[2] += 0.002775464890369137;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002775464890369137;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.6622418879056048;
          result[1] += 0.0016715830875122912;
          result[2] += 0.004719764011799411;
          result[3] += 0.33028515240904627;
          result[4] += 0.0003933136676499509;
          result[5] += 0.0002949852507374632;
          result[6] += 0.0003933136676499509;
        } else {
          result[0] += 0;
          result[1] += 0.00195248942401562;
          result[2] += 0;
          result[3] += 0.996745850959974;
          result[4] += 0.0013016596160104134;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          result[0] += 0.6484641638225256;
          result[1] += 0;
          result[2] += 0.025938566552901023;
          result[3] += 0;
          result[4] += 0.32081911262798635;
          result[5] += 0.0006825938566552901;
          result[6] += 0.004095563139931741;
        } else {
          result[0] += 0.46853146853146854;
          result[1] += 0;
          result[2] += 0.016317016317016316;
          result[3] += 0.006993006993006993;
          result[4] += 0.5058275058275058;
          result[5] += 0;
          result[6] += 0.002331002331002331;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
          result[0] += 0.0024752475247524753;
          result[1] += 0.017326732673267328;
          result[2] += 0;
          result[3] += 0.4504950495049505;
          result[4] += 0.5297029702970297;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
          result[0] += 0;
          result[1] += 0.005605381165919282;
          result[2] += 0;
          result[3] += 0.2713004484304933;
          result[4] += 0.7230941704035875;
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
          result[0] += 0;
          result[1] += 0.010459035444509006;
          result[2] += 0.004648460197559558;
          result[3] += 0.9843114468332365;
          result[4] += 0.0005810575246949448;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.028037383177570093;
          result[2] += 0;
          result[3] += 0.205607476635514;
          result[4] += 0.7663551401869159;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)62) ) ) {
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
          result[3] += 0.030405405405405407;
          result[4] += 0.9695945945945946;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.05128205128205128;
          result[1] += 0;
          result[2] += 0.1794871794871795;
          result[3] += 0.7692307692307693;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)27.5) ) ) {
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
          result[2] += 0.01263537906137184;
          result[3] += 0.8935018050541517;
          result[4] += 0.09085439229843562;
          result[5] += 0.0030084235860409147;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          result[0] += 0.9598486559747007;
          result[1] += 0.000960018070928394;
          result[2] += 0.0028800542127851818;
          result[3] += 0.03614185678789248;
          result[4] += 0;
          result[5] += 5.6471651231081995e-05;
          result[6] += 0.00011294330246216399;
        } else {
          result[0] += 0.8632414053645636;
          result[1] += 0;
          result[2] += 0.0012952668789465163;
          result[3] += 0.13546332775648984;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-81) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          result[0] += 0.9923224568138196;
          result[1] += 0;
          result[2] += 0.007677543186180422;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.998641304347826;
          result[1] += 0;
          result[2] += 0.001358695652173913;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
          result[0] += 0.9996496145760336;
          result[1] += 0;
          result[2] += 0.000350385423966363;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          result[0] += 0.026795895096921322;
          result[1] += 0.0059863169897377425;
          result[2] += 0.00427594070695553;
          result[3] += 0.959521094640821;
          result[4] += 0.0014253135689851768;
          result[5] += 0.0019954389965792475;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.01637043966323667;
          result[3] += 0.2558465855940131;
          result[4] += 0.7268475210477081;
          result[5] += 0.0009354536950420954;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0;
          result[1] += 0.025;
          result[2] += 0;
          result[3] += 0.3107142857142857;
          result[4] += 0.6642857142857143;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.005772005772005772;
          result[2] += 0;
          result[3] += 0.046176046176046176;
          result[4] += 0.948051948051948;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9748313440581214;
          result[1] += 0;
          result[2] += 0.0036325895173845357;
          result[3] += 0.02101712506486767;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005189413596263622;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.002043318348998774;
          result[3] += 0.9979566816510013;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.8924122310305775;
          result[1] += 0;
          result[2] += 0.0022650056625141564;
          result[3] += 0.10532276330690826;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9909960607765897;
          result[1] += 0;
          result[2] += 0.005908835115362971;
          result[3] += 0.0008441193021947102;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0022509848058525606;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
          result[0] += 0.9786096256684492;
          result[1] += 0;
          result[2] += 0.0213903743315508;
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
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          result[0] += 0.8870358716173694;
          result[1] += 0;
          result[2] += 0.005034612964128383;
          result[3] += 0.10509754562617998;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0028319697923222154;
        } else {
          result[0] += 0.11077694235588972;
          result[1] += 0.004511278195488722;
          result[2] += 0.0040100250626566416;
          result[3] += 0.6441102756892231;
          result[4] += 0.23609022556390977;
          result[5] += 0.0005012531328320802;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)100.5) ) ) {
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
          result[2] += 0.1518324607329843;
          result[3] += 0;
          result[4] += 0.8481675392670157;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-13) ) ) {
          result[0] += 0.2;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)50) ) ) {
          result[0] += 0.0020161290322580645;
          result[1] += 0.003360215053763441;
          result[2] += 0.006720430107526882;
          result[3] += 0.9838709677419355;
          result[4] += 0;
          result[5] += 0.004032258064516129;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
          result[0] += 0.314540059347181;
          result[1] += 0.019287833827893175;
          result[2] += 0;
          result[3] += 0.6661721068249258;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9913350449293966;
          result[1] += 0.0008557980316645272;
          result[2] += 0.0017650834403080873;
          result[3] += 0.005937098844672657;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001069747539580659;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          result[0] += 0.23715890850722313;
          result[1] += 0;
          result[2] += 0.0008025682182985554;
          result[3] += 0.7620385232744783;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9966759002770084;
          result[1] += 0;
          result[2] += 0.0030470914127423824;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002770083102493075;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9859424920127796;
          result[1] += 0.00044236913246497916;
          result[2] += 0.0011796510199066112;
          result[3] += 0.012042270828213322;
          result[4] += 0.00024576062914721065;
          result[5] += 0.0001474563774883264;
          result[6] += 0;
        } else {
          result[0] += 0.8738601823708206;
          result[1] += 0;
          result[2] += 0.015197568389057751;
          result[3] += 0.11094224924012158;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)191) ) ) {
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
          result[0] += 0.8881661245934451;
          result[1] += 0.0009173546826786756;
          result[2] += 0.0024184805270619633;
          result[3] += 0.1070803102326745;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014177299641397714;
        } else {
          result[0] += 0.5113663555874611;
          result[1] += 0;
          result[2] += 0.0033500837520938024;
          result[3] += 0.4852835606604451;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.006692160611854685;
          result[1] += 0;
          result[2] += 0.011950286806883365;
          result[3] += 0.8484703632887189;
          result[4] += 0.13145315487571702;
          result[5] += 0.0014340344168260039;
          result[6] += 0;
        } else {
          result[0] += 0.9810874704491725;
          result[1] += 0;
          result[2] += 0.002364066193853428;
          result[3] += 0.016548463356973995;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-11.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 0.8613138686131386;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1386861313868613;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.030042918454935622;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9699570815450643;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
          result[0] += 0;
          result[1] += 0.017163504968383016;
          result[2] += 0;
          result[3] += 0.982836495031617;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9602272727272727;
          result[1] += 0;
          result[2] += 0.03977272727272727;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)3184.5) ) ) {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
          result[0] += 0.0008892841262783459;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9959982214317474;
          result[4] += 0.0017785682525566918;
          result[5] += 0.0013339261894175188;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.020554984583761562;
          result[3] += 0;
          result[4] += 0.9753340184994861;
          result[5] += 0.0041109969167523125;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
          result[0] += 0.9971146653368005;
          result[1] += 0.0005343212339258362;
          result[2] += 0.0010686424678516724;
          result[3] += 0.0010330210522566166;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002493499091653902;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05172413793103448;
          result[3] += 0.9482758620689655;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.40384989305852614;
          result[1] += 0;
          result[2] += 0.00816643982111608;
          result[3] += 0.5870114719035582;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009721952167995333;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.12244897959183673;
          result[2] += 0;
          result[3] += 0.8775510204081632;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
          result[0] += 0;
          result[1] += 0.009654062751407884;
          result[2] += 0;
          result[3] += 0.9903459372485921;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.972972972972973;
          result[1] += 0;
          result[2] += 0.02702702702702703;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.9975845410628019;
          result[1] += 0;
          result[2] += 0.0024154589371980675;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9852579852579852;
          result[1] += 0;
          result[2] += 0.009828009828009828;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.004914004914004914;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9962121212121212;
          result[1] += 0;
          result[2] += 0.003787878787878788;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9997496453308854;
          result[1] += 0;
          result[2] += 0.000250354669114579;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0.0040650406504065045;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9959349593495935;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.021450747953711543;
          result[1] += 0.009031893875246966;
          result[2] += 0.002822466836014677;
          result[3] += 0.9661303979678239;
          result[4] += 0;
          result[5] += 0.0005644933672029354;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08487084870848709;
          result[3] += 0.915129151291513;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.005490196078431373;
          result[3] += 0.13607843137254902;
          result[4] += 0.856078431372549;
          result[5] += 0.002352941176470588;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9967129291453616;
          result[1] += 0;
          result[2] += 0.002556610664718773;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007304601899196494;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0008012820512820513;
          result[3] += 0.999198717948718;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0.9344951923076923;
          result[1] += 0;
          result[2] += 0.012319711538461538;
          result[3] += 0.051382211538461536;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0018028846153846155;
        } else {
          result[0] += 0.9783571077225774;
          result[1] += 0;
          result[2] += 0.000983767830791933;
          result[3] += 0.020659124446630595;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-178) ) ) {
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9945155393053017;
          result[5] += 0.005484460694698354;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)54) ) ) {
          result[0] += 0;
          result[1] += 0.0027803521779425394;
          result[2] += 0.0027803521779425394;
          result[3] += 0.9922767995057151;
          result[4] += 0;
          result[5] += 0.002162496138399753;
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
          result[0] += 0.9916820702402958;
          result[1] += 0.0030036968576709795;
          result[2] += 0.0046210720887245845;
          result[3] += 0.0006931608133086876;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9969977483112334;
          result[1] += 0.00012509382036527395;
          result[2] += 0.0016262196647485615;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012509382036527395;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
          result[0] += 0.4089935760171306;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5910064239828694;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9965420933634792;
          result[1] += 0;
          result[2] += 0.0008644766591302035;
          result[3] += 0.0025934299773906102;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
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
          result[2] += 0.0036979969183359015;
          result[3] += 0.9963020030816641;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)38) ) ) {
          result[0] += 0.9953005678480517;
          result[1] += 0;
          result[2] += 0.0015664773839827687;
          result[3] += 0.0011748580379870766;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001958096729978461;
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)36.5) ) ) {
          result[0] += 0.31417624521072796;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.16475095785440613;
          result[4] += 0.5210727969348659;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.00881488736532811;
          result[3] += 0.8942213516160626;
          result[4] += 0.0920666013712047;
          result[5] += 0.004897159647404506;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.99958825144112;
          result[1] += 0;
          result[2] += 0.00041174855888004394;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6892697466467959;
          result[1] += 0;
          result[2] += 0.010680576254346746;
          result[3] += 0.2998012916045703;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00024838549428713363;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          result[0] += 0.0025974025974025974;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9974025974025974;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.10893854748603352;
          result[1] += 0;
          result[2] += 0.00558659217877095;
          result[3] += 0.8819832402234636;
          result[4] += 0;
          result[5] += 0.0034916201117318434;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9994071678792779;
          result[1] += 0;
          result[2] += 0.0005928321207221773;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6970128022759602;
          result[1] += 0.0034139402560455193;
          result[2] += 0.0055476529160739686;
          result[3] += 0.2934566145092461;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005689900426742532;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 0.6327433628318584;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3672566371681416;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.002028397565922921;
          result[1] += 0.02434077079107505;
          result[2] += 0;
          result[3] += 0.973630831643002;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.25;
          result[1] += 0.0330188679245283;
          result[2] += 0;
          result[3] += 0.7169811320754716;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.028846153846153848;
          result[1] += 0;
          result[2] += 0.028846153846153848;
          result[3] += 0.9423076923076923;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.03508771929824561;
          result[2] += 0;
          result[3] += 0.9649122807017544;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-34) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)123.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.0078125;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9921875;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0196078431372549;
          result[2] += 0;
          result[3] += 0.33986928104575165;
          result[4] += 0.6405228758169934;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.23076923076923078;
          result[1] += 0.3076923076923077;
          result[2] += 0;
          result[3] += 0.46153846153846156;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9893992932862191;
          result[1] += 0;
          result[2] += 0.01060070671378092;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0.08874801901743265;
          result[1] += 0.005282620179609086;
          result[2] += 0;
          result[3] += 0.9043845747490755;
          result[4] += 0.001584786053882726;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.20524412296564196;
          result[4] += 0.794755877034358;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)58) ) ) {
          result[0] += 0.0031426775612822125;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9930861093651792;
          result[4] += 0;
          result[5] += 0.003771213073538655;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.054878048780487805;
          result[3] += 0;
          result[4] += 0.9451219512195121;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82) ) ) {
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
          result[2] += 0.015492957746478873;
          result[3] += 0;
          result[4] += 0.9845070422535211;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)41.5) ) ) {
          result[0] += 0.9968115455613359;
          result[1] += 0.00011187559433909494;
          result[2] += 0.0007271913632041171;
          result[3] += 0.0022934496839514466;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5.593779716954747e-05;
        } else {
          result[0] += 0.975800156128025;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02419984387197502;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
          result[0] += 0.9104297648781328;
          result[1] += 0.00111962793902334;
          result[2] += 0.0037895099474636123;
          result[3] += 0.08379984497459306;
          result[4] += 0;
          result[5] += 0.0003445009043148738;
          result[6] += 0.0005167513564723107;
        } else {
          result[0] += 0.5033460803059273;
          result[1] += 0;
          result[2] += 0.0026290630975143404;
          result[3] += 0.4940248565965583;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)9.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)39) ) ) {
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
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
          result[3] += 0.9988666414809217;
          result[4] += 0;
          result[5] += 0.0011333585190782018;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9980119284294234;
          result[5] += 0.0019880715705765406;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.8823529411764706;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.11764705882352941;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.2972972972972973;
          result[2] += 0.6756756756756757;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.02702702702702703;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          result[0] += 0.9300291545189504;
          result[1] += 0.052478134110787174;
          result[2] += 0;
          result[3] += 0.01749271137026239;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.10748299319727891;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8925170068027211;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
          result[0] += 0.7164527421236873;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.28354725787631274;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9973238507221938;
          result[1] += 0.0006965320038125962;
          result[2] += 0.0016130214825133807;
          result[3] += 0.00010997873744409414;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00025661705403621967;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.25925925925925924;
          result[1] += 0;
          result[2] += 0.0023590469450342063;
          result[3] += 0.7383816937957065;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
          result[0] += 0.9874194538201903;
          result[1] += 0;
          result[2] += 0.010432648051549556;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0021478981282602025;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          result[0] += 0.025054945054945054;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9520879120879121;
          result[4] += 0.022857142857142857;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9352941176470588;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.06470588235294118;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)6.5) ) ) {
          result[0] += 0.3317683881064163;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5821596244131455;
          result[4] += 0.08607198748043818;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.1510989010989011;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.771978021978022;
          result[4] += 0.07692307692307693;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)117) ) ) {
          result[0] += 0.6451612903225806;
          result[1] += 0.3548387096774194;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
          result[0] += 0.09146341463414634;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9085365853658537;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.015605493133583021;
          result[3] += 0;
          result[4] += 0.980649188514357;
          result[5] += 0.003745318352059925;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
          result[0] += 0.998389175257732;
          result[1] += 0;
          result[2] += 0.0010738831615120276;
          result[3] += 0.000429553264604811;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010738831615120275;
        } else {
          result[0] += 0.33183856502242154;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6681614349775785;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.082044384667115;
          result[1] += 0;
          result[2] += 0.010759919300605245;
          result[3] += 0.9071956960322798;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9874088800530152;
          result[1] += 0;
          result[2] += 0.00927766732935719;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0033134526176275677;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
          result[0] += 0.3013698630136986;
          result[1] += 0.1232876712328767;
          result[2] += 0;
          result[3] += 0.5753424657534246;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9223309230114844;
          result[1] += 0.0013611229264142918;
          result[2] += 0.0040833687792428755;
          result[3] += 0.07196937473415568;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002552105487026797;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
          result[0] += 0.44274809160305345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5572519083969466;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9172679172679173;
          result[1] += 0;
          result[2] += 0.0007215007215007216;
          result[3] += 0.08177008177008178;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00024050024050024054;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0.6509803921568628;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3431372549019608;
          result[4] += 0.00196078431372549;
          result[5] += 0.00392156862745098;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)67) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.007177033492822967;
          result[3] += 0.9875598086124402;
          result[4] += 0.0009569377990430622;
          result[5] += 0.00430622009569378;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02768166089965398;
          result[3] += 0;
          result[4] += 0.972318339100346;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
          result[0] += 0;
          result[1] += 0.005555555555555556;
          result[2] += 0;
          result[3] += 0.9944444444444445;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9441077441077441;
          result[1] += 0.00040404040404040404;
          result[2] += 0.00287317620650954;
          result[3] += 0.05185185185185185;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007631874298540966;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          result[0] += 0.9948016415868673;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.005198358413132695;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.4605493863237873;
          result[1] += 0;
          result[2] += 0.004383401519579193;
          result[3] += 0.5350672121566336;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
          result[0] += 0.015625;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.984375;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.1111111111111111;
          result[1] += 0.7777777777777778;
          result[2] += 0;
          result[3] += 0.1111111111111111;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.966183574879227;
          result[1] += 0.033816425120772944;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
          result[0] += 0.27469135802469136;
          result[1] += 0;
          result[2] += 0.033950617283950615;
          result[3] += 0.691358024691358;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.047979797979797977;
          result[4] += 0.952020202020202;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9938542581211589;
          result[1] += 0;
          result[2] += 0.0052677787532923615;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000877963125548727;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
          result[0] += 0.9999007591921798;
          result[1] += 0;
          result[2] += 9.924080782017565e-05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.999029361805387;
          result[1] += 0;
          result[2] += 0.000970638194612958;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0.020921610169491525;
          result[1] += 0.010063559322033898;
          result[2] += 0.0031779661016949155;
          result[3] += 0.899364406779661;
          result[4] += 0.0659427966101695;
          result[5] += 0.0005296610169491525;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.01867816091954023;
          result[3] += 0.26197318007662834;
          result[4] += 0.717911877394636;
          result[5] += 0.0014367816091954023;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91) ) ) {
          result[0] += 0.99617903930131;
          result[1] += 0.0002729257641921397;
          result[2] += 0.003002183406113537;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005458515283842794;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0015467904098994587;
          result[3] += 0.9984532095901005;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)36) ) ) {
          result[0] += 0.9902597402597403;
          result[1] += 0;
          result[2] += 0.008812615955473098;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009276437847866419;
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)112) ) ) {
          result[0] += 0.0015479876160990713;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.996594427244582;
          result[4] += 0.001238390092879257;
          result[5] += 0.0006191950464396285;
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
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
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
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0.125;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.875;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.005461993627674101;
          result[3] += 0;
          result[4] += 0.9936276741010469;
          result[5] += 0.0009103322712790169;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
          result[0] += 0.9056603773584906;
          result[1] += 0.09433962264150944;
          result[2] += 0;
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
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.998163284048122;
          result[1] += 0;
          result[2] += 0.0017448801542841402;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9.183579759390212e-05;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          result[0] += 0.9903931684753603;
          result[1] += 0.002668564312399929;
          result[2] += 0.0051592243373065295;
          result[3] += 0.0010674257249599715;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007116171499733144;
        } else {
          result[0] += 0.4009828904259192;
          result[1] += 0;
          result[2] += 0.009464870768110667;
          result[3] += 0.5879140880961049;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001638150709865308;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          result[0] += 0.956896551724138;
          result[1] += 0;
          result[2] += 0.001596424010217114;
          result[3] += 0.04102809706257983;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00047892720306513413;
        } else {
          result[0] += 0.9982277882797732;
          result[1] += 0.00011814744801512288;
          result[2] += 0.00011814744801512288;
          result[3] += 0.0011224007561436674;
          result[4] += 0.00023629489603024575;
          result[5] += 0.00017722117202268432;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)19) ) ) {
          result[0] += 0.9995217599234816;
          result[1] += 0;
          result[2] += 0.00047824007651841227;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8484848484848483;
          result[1] += 0.003124023742580443;
          result[2] += 0.003124023742580443;
          result[3] += 0.14276788503592625;
          result[4] += 0;
          result[5] += 0.0006248047485160886;
          result[6] += 0.0018744142455482658;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
          result[0] += 0.18628868961527337;
          result[1] += 0.006653167486259763;
          result[2] += 0.0028926815157651145;
          result[3] += 0.8038761932311252;
          result[4] += 0;
          result[5] += 0.0002892681515765114;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
          result[0] += 0.3174520973588814;
          result[1] += 0;
          result[2] += 0.007767995857068877;
          result[3] += 0.6727084412221647;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0020714655618850335;
        } else {
          result[0] += 0.5730198019801981;
          result[1] += 0;
          result[2] += 0.012376237623762379;
          result[3] += 0.4077970297029703;
          result[4] += 0.004950495049504951;
          result[5] += 0.0018564356435643566;
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
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.008969996906897619;
          result[3] += 0.9885555211877514;
          result[4] += 0;
          result[5] += 0.0024744819053510673;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
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
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.8554442364857426;
          result[1] += 0;
          result[2] += 0.0030826819332819555;
          result[3] += 0.14136298579764395;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001100957833314984;
        } else {
          result[0] += 0.9923298178331735;
          result[1] += 0;
          result[2] += 0.0028763183125599234;
          result[3] += 0.003515500159795462;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001278363694471077;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          result[0] += 0.9967857921115713;
          result[1] += 0.0006537371976465462;
          result[2] += 0.001961211592939639;
          result[3] += 0.0003813466986271519;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002179123992155154;
        } else {
          result[0] += 0.6793560288445414;
          result[1] += 0;
          result[2] += 0.00335401643468053;
          result[3] += 0.31678685225557607;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005031024652020795;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-178) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-29) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.45;
          result[2] += 0;
          result[3] += 0.55;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.006974248927038627;
          result[3] += 0.8055257510729614;
          result[4] += 0.18589055793991416;
          result[5] += 0.001609442060085837;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.13979416809605488;
          result[4] += 0.8602058319039451;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.9989361702127659;
          result[1] += 0;
          result[2] += 0.0010638297872340426;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9974811083123426;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0025188916876574307;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
          result[0] += 0.3548387096774194;
          result[1] += 0.023297491039426525;
          result[2] += 0;
          result[3] += 0.6218637992831542;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9874779541446208;
          result[1] += 0.0026455026455026454;
          result[2] += 0.007231040564373898;
          result[3] += 0.0012345679012345679;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014109347442680777;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          result[0] += 0.0049382716049382715;
          result[1] += 0;
          result[2] += 0.0024691358024691358;
          result[3] += 0.9925925925925926;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8459500378501136;
          result[1] += 0;
          result[2] += 0.010598031794095382;
          result[3] += 0.14193792581377745;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001514004542013626;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-174.5) ) ) {
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
          result[0] += 0.9952087611225189;
          result[1] += 0;
          result[2] += 0.003422313483915127;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0013689253935660508;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9994182664339732;
          result[1] += 0;
          result[2] += 0.0005817335660267597;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          result[0] += 0.004651162790697675;
          result[1] += 0.004651162790697675;
          result[2] += 0;
          result[3] += 0.972093023255814;
          result[4] += 0.013953488372093025;
          result[5] += 0.004651162790697675;
          result[6] += 0;
        } else {
          result[0] += 0.6960319440978289;
          result[1] += 0.0009982530571499878;
          result[2] += 0.006862989767906165;
          result[3] += 0.261916645869728;
          result[4] += 0.03256800598951835;
          result[5] += 0.0011230346892937362;
          result[6] += 0.0004991265285749939;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.2526841448189763;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7473158551810237;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6117381489841986;
          result[1] += 0;
          result[2] += 0.024266365688487584;
          result[3] += 0.001128668171557562;
          result[4] += 0.3577878103837472;
          result[5] += 0.002257336343115124;
          result[6] += 0.0028216704288939053;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
          result[0] += 0.3983516483516483;
          result[1] += 0;
          result[2] += 0.016483516483516484;
          result[3] += 0.5851648351648352;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.1543560606060606;
          result[1] += 0.00946969696969697;
          result[2] += 0;
          result[3] += 0.8361742424242424;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.010362694300518135;
          result[1] += 0.07772020725388601;
          result[2] += 0;
          result[3] += 0.9119170984455959;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-13.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.0024630541871921183;
          result[1] += 0;
          result[2] += 0.006157635467980296;
          result[3] += 0.6699507389162561;
          result[4] += 0.31896551724137934;
          result[5] += 0.0024630541871921183;
          result[6] += 0;
        } else {
          result[0] += 0.7464084946908183;
          result[1] += 0;
          result[2] += 0.003123048094940662;
          result[3] += 0.2504684572142411;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)1.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.8169374247894103;
          result[1] += 0.0012033694344163659;
          result[2] += 0.00030084235860409147;
          result[3] += 0.14455475330926595;
          result[4] += 0.036853188929001204;
          result[5] += 0;
          result[6] += 0.00015042117930204573;
        } else {
          result[0] += 0.5102389078498294;
          result[1] += 0;
          result[2] += 0.015358361774744027;
          result[3] += 0.4271899886234357;
          result[4] += 0.04379977246871445;
          result[5] += 0;
          result[6] += 0.0034129692832764505;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)66) ) ) {
          result[0] += 0.8008130081300814;
          result[1] += 0;
          result[2] += 0.004065040650406505;
          result[3] += 0.1504065040650407;
          result[4] += 0.04200542005420055;
          result[5] += 0;
          result[6] += 0.002710027100271003;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)2.5) ) ) {
          result[0] += 0.14115092290988057;
          result[1] += 0;
          result[2] += 0.010857763300760043;
          result[3] += 0.48534201954397393;
          result[4] += 0.3583061889250814;
          result[5] += 0.004343105320304018;
          result[6] += 0;
        } else {
          result[0] += 0.040217391304347816;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6989130434782608;
          result[4] += 0.258695652173913;
          result[5] += 0.0021739130434782605;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-29) ) ) {
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
          result[3] += 0.32615083251714005;
          result[4] += 0.67384916748286;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.983619467632698;
          result[1] += 0.0008925290071927338;
          result[2] += 0.0019950648396072873;
          result[3] += 0.013230429988974642;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002625085315272746;
        } else {
          result[0] += 0.7028161623228967;
          result[1] += 0;
          result[2] += 0.0019240860591219172;
          result[3] += 0.2950848347035158;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00017491691446562882;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78) ) ) {
          result[0] += 0.8559322033898306;
          result[1] += 0.059322033898305086;
          result[2] += 0;
          result[3] += 0.0847457627118644;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.036613272311212815;
          result[1] += 0;
          result[2] += 0.006864988558352402;
          result[3] += 0.9565217391304348;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-168.5) ) ) {
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
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-35) ) ) {
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
          result[3] += 0.9974882260596546;
          result[4] += 0.002197802197802198;
          result[5] += 0.0003139717425431711;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0.23529411764705882;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7058823529411765;
          result[5] += 0.058823529411764705;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.008861320336730174;
          result[3] += 0;
          result[4] += 0.9889233495790873;
          result[5] += 0.0022153300841825435;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9987776928953399;
          result[1] += 0.00030557677616501144;
          result[2] += 0.0008403361344537816;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7.639419404125286e-05;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8528974739970282;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.14710252600297177;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91) ) ) {
          result[0] += 0.9932560340747753;
          result[1] += 0.000946521533364884;
          result[2] += 0.0040227165168007575;
          result[3] += 0.000473260766682442;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0013014671083767155;
        } else {
          result[0] += 0.3333333333333333;
          result[1] += 0.024390243902439025;
          result[2] += 0;
          result[3] += 0.6422764227642277;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.4068814855270344;
          result[1] += 0;
          result[2] += 0.007646095030038231;
          result[3] += 0.5841980702712544;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012743491716730383;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9982668977469671;
          result[1] += 0;
          result[2] += 0.0017331022530329288;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0.35033259423503327;
          result[1] += 0;
          result[2] += 0.03991130820399113;
          result[3] += 0.6053215077605322;
          result[4] += 0;
          result[5] += 0.004434589800443459;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82.5) ) ) {
          result[0] += 0.011739594450373533;
          result[1] += 0;
          result[2] += 0.0064034151547491995;
          result[3] += 0.9669156883671292;
          result[4] += 0.012806830309498399;
          result[5] += 0.0021344717182497333;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0062724014336917565;
          result[2] += 0;
          result[3] += 0.5663082437275986;
          result[4] += 0.4274193548387097;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
          result[0] += 0.9450311399945843;
          result[1] += 0;
          result[2] += 0.004332520985648524;
          result[3] += 0.04955320877335499;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001083130246412131;
        } else {
          result[0] += 0.44011976047904194;
          result[1] += 0;
          result[2] += 0.002245508982035928;
          result[3] += 0.5576347305389222;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
          result[0] += 0.9875274208712;
          result[1] += 0.0003760576621748667;
          result[2] += 0.0010028204324663112;
          result[3] += 0.010529614540896268;
          result[4] += 0.00018802883108743335;
          result[5] += 0.00018802883108743335;
          result[6] += 0.00018802883108743335;
        } else {
          result[0] += 0.915149544863459;
          result[1] += 0.002925877763328999;
          result[2] += 0.0042262678803641094;
          result[3] += 0.0770481144343303;
          result[4] += 0;
          result[5] += 0.0006501950585175553;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
          result[0] += 0.1355174981384959;
          result[1] += 0.0037230081906180195;
          result[2] += 0.010424422933730455;
          result[3] += 0.6068503350707372;
          result[4] += 0.24348473566641846;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.004518072289156626;
          result[2] += 0;
          result[3] += 0.06325301204819277;
          result[4] += 0.9322289156626506;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)16.5) ) ) {
          result[0] += 0.7149914497434923;
          result[1] += 0;
          result[2] += 0.002470074102223067;
          result[3] += 0.2825384761542846;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6150392817059483;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.38047138047138046;
          result[4] += 0.001122334455667789;
          result[5] += 0;
          result[6] += 0.003367003367003367;
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)107) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)16.5) ) ) {
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
          result[4] += 0.9987187700192185;
          result[5] += 0.0012812299807815502;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
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
          result[2] += 0.010420686993438826;
          result[3] += 0.9864917020455423;
          result[4] += 0;
          result[5] += 0.0030876109610189118;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-26) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)3.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          result[0] += 0.9986028641285365;
          result[1] += 0;
          result[2] += 0.0012224938875305623;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00017464198393293747;
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
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91) ) ) {
          result[0] += 0.96622249767586;
          result[1] += 0.005577936163619462;
          result[2] += 0.002788968081809731;
          result[3] += 0.02448094205144097;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009296560272699102;
        } else {
          result[0] += 0.0021849963583394027;
          result[1] += 0;
          result[2] += 0.005826656955571741;
          result[3] += 0.9919883466860888;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.010033444816053512;
          result[1] += 0.007525083612040134;
          result[2] += 0.013377926421404682;
          result[3] += 0.9665551839464883;
          result[4] += 0;
          result[5] += 0.002508361204013378;
          result[6] += 0;
        } else {
          result[0] += 0.9792415169660679;
          result[1] += 0;
          result[2] += 0.006387225548902195;
          result[3] += 0.013373253493013972;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000998003992015968;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.9977851605758582;
          result[1] += 0;
          result[2] += 0.0022148394241417496;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9996480938416422;
          result[1] += 0;
          result[2] += 0.00035190615835777126;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
          result[0] += 0.9996066089693155;
          result[1] += 0;
          result[2] += 0.0001966955153422502;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001966955153422502;
        } else {
          result[0] += 0.9998993963782696;
          result[1] += 0;
          result[2] += 0.00010060362173038229;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-9.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
          result[0] += 0.5705652328474938;
          result[1] += 0;
          result[2] += 0.009953785993601137;
          result[3] += 0.3729114824031283;
          result[4] += 0.0458585140419481;
          result[5] += 0.0007109847138286527;
          result[6] += 0;
        } else {
          result[0] += 0.11267605633802817;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4346076458752515;
          result[4] += 0.45271629778672035;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.010492332526230832;
          result[1] += 0.004842615012106538;
          result[2] += 0.010492332526230832;
          result[3] += 0.7215496368038741;
          result[4] += 0.25181598062953997;
          result[5] += 0.0008071025020177562;
          result[6] += 0;
        } else {
          result[0] += 0.7191115224433133;
          result[1] += 0;
          result[2] += 0.005090236001850995;
          result[3] += 0.2744099953725127;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0013882461823229986;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.021754894851341557;
          result[1] += 0.007251631617113852;
          result[2] += 0.013415518491660625;
          result[3] += 0.7664974619289341;
          result[4] += 0.18854242204496013;
          result[5] += 0.002538071065989848;
          result[6] += 0;
        } else {
          result[0] += 0.7465732087227415;
          result[1] += 0;
          result[2] += 0.003894080996884735;
          result[3] += 0.24922118380062305;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00031152647975077883;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.025157232704402517;
          result[2] += 0;
          result[3] += 0.9748427672955975;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
          result[0] += 0.9802955665024631;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.019704433497536946;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9925373134328358;
          result[4] += 0;
          result[5] += 0.007462686567164179;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)55.5) ) ) {
          result[0] += 0.9980615555028088;
          result[1] += 0.0005538412849117811;
          result[2] += 0.000593401376691194;
          result[3] += 0.000632961468470607;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00015824036711765174;
        } else {
          result[0] += 0.9724702380952381;
          result[1] += 0;
          result[2] += 0.0026041666666666665;
          result[3] += 0.02492559523809524;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
          result[0] += 0.21525423728813559;
          result[1] += 0;
          result[2] += 0.003389830508474576;
          result[3] += 0.764406779661017;
          result[4] += 0.01694915254237288;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0032626427406199023;
          result[1] += 0.008156606851549755;
          result[2] += 0;
          result[3] += 0.2365415986949429;
          result[4] += 0.7520391517128875;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.16538461538461538;
          result[1] += 0.004326923076923077;
          result[2] += 0.017788461538461538;
          result[3] += 0.8115384615384615;
          result[4] += 0;
          result[5] += 0.0009615384615384616;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9948783610755442;
          result[4] += 0.004481434058898848;
          result[5] += 0.0006402048655569782;
          result[6] += 0;
        } else {
          result[0] += 0.9641833810888252;
          result[1] += 0;
          result[2] += 0.03581661891117478;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
          result[0] += 0.9972801450589301;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0027198549410698096;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9863095238095239;
          result[1] += 0;
          result[2] += 0.008333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.005357142857142857;
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
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.9984717977215893;
          result[1] += 0;
          result[2] += 0.0012503473186996387;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002778549597110308;
        } else {
          result[0] += 0.9943609022556391;
          result[1] += 0;
          result[2] += 0.005639097744360902;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0.9998359176306506;
          result[1] += 0;
          result[2] += 0.0001640823693494134;
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9661062906724514;
          result[1] += 0.002711496746203905;
          result[2] += 0.002711496746203905;
          result[3] += 0.02792841648590022;
          result[4] += 0;
          result[5] += 0.0002711496746203905;
          result[6] += 0.0002711496746203905;
        } else {
          result[0] += 0;
          result[1] += 0.03501945525291829;
          result[2] += 0;
          result[3] += 0.9649805447470817;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.472800925925926;
          result[1] += 0;
          result[2] += 0.002893518518518519;
          result[3] += 0.5219907407407408;
          result[4] += 0;
          result[5] += 0.002314814814814815;
          result[6] += 0;
        } else {
          result[0] += 0.1072344792201129;
          result[1] += 0.0046177526936890725;
          result[2] += 0.003591585428424834;
          result[3] += 0.8306824012314008;
          result[4] += 0.0538737814263725;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.7898905194502679;
          result[1] += 0;
          result[2] += 0.010948054973212206;
          result[3] += 0.1970649895178197;
          result[4] += 0.0004658746797111577;
          result[5] += 0.0004658746797111577;
          result[6] += 0.0011646866992778943;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0060501296456352644;
          result[3] += 0.8035148372227024;
          result[4] += 0.19014693171996547;
          result[5] += 0.00028810141169691736;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0.028662420382165606;
          result[2] += 0;
          result[3] += 0.45222929936305734;
          result[4] += 0.5191082802547771;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02360655737704918;
          result[4] += 0.9763934426229508;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9909808342728298;
          result[1] += 0;
          result[2] += 0.007891770011273957;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011273957158962795;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
          result[0] += 0.9998495788206979;
          result[1] += 0;
          result[2] += 0.00015042117930204573;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9992588932806324;
          result[1] += 0;
          result[2] += 0.0007411067193675889;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.014257939079714843;
          result[1] += 0;
          result[2] += 0.013609850939727804;
          result[3] += 0.8198314970836035;
          result[4] += 0.15100453661697993;
          result[5] += 0.0012961762799740767;
          result[6] += 0;
        } else {
          result[0] += 0.7246204933586338;
          result[1] += 0;
          result[2] += 0.008776091081593928;
          result[3] += 0.26541745730550287;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011859582542694497;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
          result[0] += 0.01282051282051282;
          result[1] += 0.038461538461538464;
          result[2] += 0;
          result[3] += 0.07692307692307693;
          result[4] += 0.8717948717948718;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.1111111111111111;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6092384519350812;
          result[4] += 0.27965043695380776;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 0.74423642271391;
          result[1] += 0.0020114497911186756;
          result[2] += 0.006807983908401671;
          result[3] += 0.21383258548661613;
          result[4] += 0.03233792356490794;
          result[5] += 0.00030945381401825775;
          result[6] += 0.0004641807210273867;
        } else {
          result[0] += 0.059548254620123205;
          result[1] += 0.008726899383983572;
          result[2] += 0.004620123203285421;
          result[3] += 0.3773100616016427;
          result[4] += 0.5497946611909651;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)24) ) ) {
          result[0] += 0;
          result[1] += 0.0016538037486218302;
          result[2] += 0.0005512679162072767;
          result[3] += 0.9977949283351709;
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
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-174.5) ) ) {
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
          result[0] += 0.9969450101832994;
          result[1] += 0;
          result[2] += 0.003054989816700611;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9854014598540146;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.014598540145985401;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0.9994407506369228;
          result[1] += 0;
          result[2] += 0.0005592493630771143;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0.017622304050499738;
          result[1] += 0.0052603892688058915;
          result[2] += 0.016307206733298264;
          result[3] += 0.9566017885323514;
          result[4] += 0.0013150973172014729;
          result[5] += 0.0028932140978432403;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9794935145151328;
          result[1] += 0;
          result[2] += 0.006176652254478073;
          result[3] += 0.013341568869672638;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009882643607164916;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0019069412662090007;
          result[3] += 0.998093058733791;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)98.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          result[0] += 0.006339144215530904;
          result[1] += 0.01584786053882726;
          result[2] += 0;
          result[3] += 0.04595879556259905;
          result[4] += 0.9318541996830428;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.44786729857819907;
          result[4] += 0.5521327014218009;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)33.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9963942307692307;
          result[1] += 0;
          result[2] += 0.003605769230769231;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9701492537313433;
          result[1] += 0;
          result[2] += 0.024875621890547265;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.004975124378109453;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)32.5) ) ) {
          result[0] += 0.9951690821256038;
          result[1] += 0;
          result[2] += 0.004830917874396135;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9925373134328358;
          result[1] += 0;
          result[2] += 0.007462686567164179;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
          result[0] += 0.02298221614227086;
          result[1] += 0.007934336525307797;
          result[2] += 0.0024623803009575923;
          result[3] += 0.9638850889192886;
          result[4] += 0.0013679890560875513;
          result[5] += 0.0013679890560875513;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.05434782608695652;
          result[2] += 0;
          result[3] += 0.0036231884057971015;
          result[4] += 0.9420289855072463;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10077519379844961;
          result[3] += 0.8992248062015504;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.006645817044566067;
          result[3] += 0.11727912431587177;
          result[4] += 0.8749022673964034;
          result[5] += 0.0011727912431587178;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
          result[0] += 0.4276129032258065;
          result[1] += 0;
          result[2] += 0.0018064516129032257;
          result[3] += 0.5703225806451613;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00025806451612903227;
        } else {
          result[0] += 0.8465539661898571;
          result[1] += 0.0008669267446900738;
          result[2] += 0.006501950585175553;
          result[3] += 0.14521022973558737;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008669267446900738;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.8892543859649122;
          result[1] += 0;
          result[2] += 0.005482456140350877;
          result[3] += 0.10526315789473684;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9854904236796284;
          result[1] += 0;
          result[2] += 0.009286128845037723;
          result[3] += 0.003192106790481717;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002031340684852002;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1753.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.9961265332472563;
          result[1] += 0;
          result[2] += 0.0025823111684958036;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012911555842479018;
        } else {
          result[0] += 0.9997185635483508;
          result[1] += 0;
          result[2] += 0.0002814364516492176;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-310) ) ) {
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.8651193343551565;
          result[1] += 0.0004379242391066346;
          result[2] += 0.006021458287716225;
          result[3] += 0.12776439675936063;
          result[4] += 0;
          result[5] += 0.00010948105977665864;
          result[6] += 0.0005474052988832932;
        } else {
          result[0] += 0;
          result[1] += 0.0015856236786469344;
          result[2] += 0.0047568710359408035;
          result[3] += 0.8076109936575053;
          result[4] += 0.18578224101479915;
          result[5] += 0.0002642706131078224;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.1789748045178106;
          result[1] += 0.006081668114682885;
          result[2] += 0.004344048653344918;
          result[3] += 0.8062554300608167;
          result[4] += 0.004344048653344918;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0014482259232440262;
          result[1] += 0;
          result[2] += 0.010861694424330198;
          result[3] += 0.9406227371469951;
          result[4] += 0.0441708906589428;
          result[5] += 0.0028964518464880524;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0011587485515643105;
          result[1] += 0.016222479721900347;
          result[2] += 0;
          result[3] += 0.004634994206257242;
          result[4] += 0.9779837775202781;
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
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
          result[0] += 0.9867580887079495;
          result[1] += 0;
          result[2] += 0.0006428112277694451;
          result[3] += 0.012256267409470752;
          result[4] += 0;
          result[5] += 0.00021427040925648167;
          result[6] += 0.000128562245553889;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)19) ) ) {
          result[0] += 0.9995105237395986;
          result[1] += 0;
          result[2] += 0.0004894762604013706;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8540747278611357;
          result[1] += 0.003824654310091204;
          result[2] += 0.0035304501323918805;
          result[3] += 0.13798175934098267;
          result[4] += 0;
          result[5] += 0.00029420417769932336;
          result[6] += 0.00029420417769932336;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78.5) ) ) {
          result[0] += 0.01084010840108401;
          result[1] += 0;
          result[2] += 0.0018066847335140017;
          result[3] += 0.987353206865402;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2611251049538203;
          result[1] += 0.006717044500419815;
          result[2] += 0.0163727959697733;
          result[3] += 0.7157850545759865;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9974619289340102;
          result[4] += 0.002220812182741117;
          result[5] += 0.00031725888324873094;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05373134328358209;
          result[3] += 0;
          result[4] += 0.9462686567164179;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)74) ) ) {
          result[0] += 0.9919028340080972;
          result[1] += 0;
          result[2] += 0.005847953216374269;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002249212775528565;
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)373) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9642857142857143;
          result[1] += 0;
          result[2] += 0.03571428571428571;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9991675915649278;
          result[1] += 0;
          result[2] += 0.000832408435072142;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)93.5) ) ) {
          result[0] += 0.656975505857295;
          result[1] += 0.0027689030883919063;
          result[2] += 0.005537806176783813;
          result[3] += 0.33354632587859423;
          result[4] += 0.00021299254526091586;
          result[5] += 0.0003194888178913738;
          result[6] += 0.0006389776357827476;
        } else {
          result[0] += 0.9728033472803348;
          result[1] += 0;
          result[2] += 0.008891213389121341;
          result[3] += 0.015167364016736403;
          result[4] += 0;
          result[5] += 0.0005230125523012553;
          result[6] += 0.0026150627615062765;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0.0034762456546929316;
          result[2] += 0;
          result[3] += 0.21436848203939746;
          result[4] += 0.779837775202781;
          result[5] += 0.002317497103128621;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.009853890587835541;
          result[3] += 0.9887869520897044;
          result[4] += 0.0006795786612300374;
          result[5] += 0.0006795786612300374;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.1875;
          result[1] += 0.75;
          result[2] += 0;
          result[3] += 0.0625;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.001053740779768177;
          result[3] += 0.9251844046364595;
          result[4] += 0.0737618545837724;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.015841584158415842;
          result[2] += 0;
          result[3] += 0.1782178217821782;
          result[4] += 0.805940594059406;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8333333333333334;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
          result[0] += 0.19154929577464788;
          result[1] += 0.014084507042253521;
          result[2] += 0;
          result[3] += 0.7943661971830986;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.537328094302554;
          result[1] += 0;
          result[2] += 0.021611001964636542;
          result[3] += 0.44106090373280943;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)50.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          result[0] += 0.946238173899985;
          result[1] += 0.0019522450818441207;
          result[2] += 0.0018020723832407267;
          result[3] += 0.04940681784051659;
          result[4] += 0;
          result[5] += 0.0001501726986033939;
          result[6] += 0.0004505180958101817;
        } else {
          result[0] += 0.9980716878402905;
          result[1] += 0.00039700544464609807;
          result[2] += 0.0002268602540834846;
          result[3] += 0.0009074410163339384;
          result[4] += 0.00039700544464609807;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.6324895866709388;
          result[1] += 0;
          result[2] += 0.0019224607497596924;
          result[3] += 0.36526754245434156;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003204101249599487;
        } else {
          result[0] += 0.923905240488155;
          result[1] += 0;
          result[2] += 0.01507537688442211;
          result[3] += 0.03015075376884422;
          result[4] += 0.030868628858578606;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          result[0] += 0.17365771812080538;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8263422818791947;
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
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          result[0] += 0.8491773308957953;
          result[1] += 0;
          result[2] += 0.01218769043266301;
          result[3] += 0;
          result[4] += 0.13619744058500913;
          result[5] += 0.0015234613040828763;
          result[6] += 0.0009140767824497258;
        } else {
          result[0] += 0.6974789915966386;
          result[1] += 0;
          result[2] += 0.003601440576230492;
          result[3] += 0.0024009603841536613;
          result[4] += 0.2965186074429772;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-310) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9945750452079566;
          result[1] += 0;
          result[2] += 0.0045207956600361665;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009041591320072332;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9993880048959608;
          result[1] += 0;
          result[2] += 0.0006119951040391676;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9999557169426977;
          result[1] += 0;
          result[2] += 4.428305730227615e-05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          result[0] += 0;
          result[1] += 0.029411764705882353;
          result[2] += 0;
          result[3] += 0.09926470588235294;
          result[4] += 0.8713235294117647;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.01735722284434491;
          result[1] += 0.005599104143337067;
          result[2] += 0.0053191489361702135;
          result[3] += 0.9692049272116462;
          result[4] += 0.00083986562150056;
          result[5] += 0.00167973124300112;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
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
          result[2] += 0.01704283740211884;
          result[3] += 0.25702441271303544;
          result[4] += 0.7254721326577614;
          result[5] += 0.00046061722708429296;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86) ) ) {
          result[0] += 0.9970652971386648;
          result[1] += 0;
          result[2] += 0.002384446074834923;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005502567865003668;
        } else {
          result[0] += 0.9631578947368421;
          result[1] += 0;
          result[2] += 0.03684210526315789;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9395910780669146;
          result[1] += 0;
          result[2] += 0.010223048327137546;
          result[3] += 0.047862453531598514;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0023234200743494425;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0011632415664986429;
          result[3] += 0.9988367584335014;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24) ) ) {
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
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.01098901098901099;
          result[3] += 0.9733124018838305;
          result[4] += 0.015698587127158554;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
          result[0] += 0.22616699539776464;
          result[1] += 0.0046022353714661405;
          result[2] += 0.006574621959237344;
          result[3] += 0.7626561472715319;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1811320754716981;
          result[4] += 0.8188679245283019;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)97) ) ) {
          result[0] += 0.9829290206648698;
          result[1] += 7.487271638215035e-05;
          result[2] += 0.0001497454327643007;
          result[3] += 0.016696615753219526;
          result[4] += 0.0001497454327643007;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0015015015015015015;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9984984984984985;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
          result[0] += 0.9919869416827423;
          result[1] += 0;
          result[2] += 0.0002967799376762131;
          result[3] += 0.0074194984419053275;
          result[4] += 0.00014838996883810655;
          result[5] += 0;
          result[6] += 0.00014838996883810655;
        } else {
          result[0] += 0.890927624872579;
          result[1] += 0;
          result[2] += 0.014271151885830785;
          result[3] += 0.09378185524974515;
          result[4] += 0.0010193679918450561;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          result[0] += 0.5085979860573199;
          result[1] += 0.003098373353989156;
          result[2] += 0.004957397366382649;
          result[3] += 0.48319132455460884;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00015491866769945777;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.013071895424836602;
          result[3] += 0.879448075526507;
          result[4] += 0.10602759622367465;
          result[5] += 0.0014524328249818446;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
          result[0] += 0.9993165897830173;
          result[1] += 0;
          result[2] += 0.0006834102169827439;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9662337662337663;
          result[1] += 0;
          result[2] += 0.004906204906204907;
          result[3] += 0.02770562770562771;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011544011544011546;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-184) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
          result[0] += 0.9989064519335918;
          result[1] += 0;
          result[2] += 0.0010935480664081916;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9968911917098445;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0031088082901554403;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9971711456859972;
          result[5] += 0.002828854314002829;
          result[6] += 0;
        } else {
          result[0] += 0.01;
          result[1] += 0.005;
          result[2] += 0;
          result[3] += 0.985;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.7437002970202166;
          result[1] += 0.0008623167576889911;
          result[2] += 0.005173900546133947;
          result[3] += 0.22219028456453005;
          result[4] += 0.026348567596052506;
          result[5] += 0.0007665037846124365;
          result[6] += 0.0009581297307655457;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.010118632240055827;
          result[3] += 0.9856943475226797;
          result[4] += 0.00418702023726448;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-34) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          result[0] += 0.008077544426494346;
          result[1] += 0.008077544426494346;
          result[2] += 0;
          result[3] += 0.04361873990306947;
          result[4] += 0.9402261712439418;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.26605504587155965;
          result[4] += 0.7339449541284404;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
          result[0] += 0.09000432713111207;
          result[1] += 0.006057983556901774;
          result[2] += 0.005192557334487235;
          result[3] += 0.5560363479013414;
          result[4] += 0.3427087840761575;
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.9974666052510364;
          result[1] += 0;
          result[2] += 0.0023030861354214646;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00023030861354214648;
        } else {
          result[0] += 0.999770873430483;
          result[1] += 0;
          result[2] += 0.0002291265695170012;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
          result[0] += 0.0007407407407407407;
          result[1] += 0.005925925925925926;
          result[2] += 0.01;
          result[3] += 0.8818518518518519;
          result[4] += 0.09925925925925926;
          result[5] += 0.0022222222222222222;
          result[6] += 0;
        } else {
          result[0] += 0.995420922860162;
          result[1] += 0;
          result[2] += 0.003522367030644593;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010567101091933778;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.3139534883720931;
          result[1] += 0;
          result[2] += 0.01906976744186047;
          result[3] += 0.584186046511628;
          result[4] += 0.08000000000000002;
          result[5] += 0.000930232558139535;
          result[6] += 0.00186046511627907;
        } else {
          result[0] += 0.37880464858882124;
          result[1] += 0;
          result[2] += 0.002767017155506364;
          result[3] += 0.48118428334255675;
          result[4] += 0.13724405091311567;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-34) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)122) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.02040816326530612;
          result[1] += 0.22448979591836735;
          result[2] += 0;
          result[3] += 0.7551020408163265;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 0.6115702479338843;
          result[1] += 0;
          result[2] += 0.01859504132231405;
          result[3] += 0.36983471074380164;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.013953488372093023;
          result[2] += 0;
          result[3] += 0.986046511627907;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9900990099009901;
          result[1] += 0;
          result[2] += 0.0039603960396039604;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.005940594059405941;
        } else {
          result[0] += 0.99933598937583;
          result[1] += 0;
          result[2] += 0.0006640106241699867;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.9988324576765908;
          result[1] += 0;
          result[2] += 0.0011675423234092236;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.022322690025430914;
          result[1] += 0.009607233681831025;
          result[2] += 0.003673354054817745;
          result[3] += 0.963549025148347;
          result[4] += 0;
          result[5] += 0.0008476970895733258;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
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
          result[2] += 0.06288343558282208;
          result[3] += 0.9263803680981595;
          result[4] += 0;
          result[5] += 0.010736196319018405;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
          result[0] += 0.44371859296482413;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5562814070351759;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6077507200837916;
          result[1] += 0;
          result[2] += 0.0034040324692327832;
          result[3] += 0.3867504582351401;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002094789211835559;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.14285714285714285;
          result[1] += 0;
          result[2] += 0.015873015873015872;
          result[3] += 0.8412698412698413;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9858362841074776;
          result[1] += 0;
          result[2] += 0.005832118308685691;
          result[3] += 0.007706727765048948;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006248698187877526;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)109) ) ) {
          result[0] += 0;
          result[1] += 0.125;
          result[2] += 0;
          result[3] += 0.875;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.008064516129032258;
          result[1] += 0.028225806451612902;
          result[2] += 0;
          result[3] += 0.004032258064516129;
          result[4] += 0.9596774193548387;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 0.47027388109552437;
          result[1] += 0;
          result[2] += 0.008016032064128256;
          result[3] += 0.5190380761523046;
          result[4] += 0.0026720106880427524;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.15483870967741936;
          result[1] += 0.004032258064516129;
          result[2] += 0;
          result[3] += 0.8411290322580646;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
          result[0] += 0.7814569536423841;
          result[1] += 0;
          result[2] += 0.06622516556291391;
          result[3] += 0.152317880794702;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)106.5) ) ) {
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
          result[3] += 0.08023774145616643;
          result[4] += 0.9197622585438335;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)373) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0.9994832634782109;
          result[1] += 0;
          result[2] += 0.0005167365217890567;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.999884805897938;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00011519410206197443;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.7052880481513327;
          result[1] += 0.0017196904557179708;
          result[2] += 0.0015047291487532244;
          result[3] += 0.2897678417884781;
          result[4] += 0.0004299226139294927;
          result[5] += 0.0006448839208942391;
          result[6] += 0.0006448839208942391;
        } else {
          result[0] += 0.8903210686665104;
          result[1] += 0;
          result[2] += 0.008202484180923366;
          result[3] += 0.06397937661120225;
          result[4] += 0.03609093039606281;
          result[5] += 0.00046871338176704945;
          result[6] += 0.0009374267635340989;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.003587736464448793;
          result[3] += 0.9964122635355512;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.012711864406779662;
          result[3] += 0;
          result[4] += 0.9830508474576272;
          result[5] += 0.00423728813559322;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.9885496183206107;
          result[1] += 0;
          result[2] += 0.0057251908396946565;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0057251908396946565;
        } else {
          result[0] += 0.9974326059050064;
          result[1] += 0;
          result[2] += 0.0025673940949935813;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.998998998998999;
          result[1] += 0;
          result[2] += 0.001001001001001001;
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)19) ) ) {
          result[0] += 0.9084249084249084;
          result[1] += 0.00402930402930403;
          result[2] += 0.005494505494505495;
          result[3] += 0.08095238095238096;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001098901098901099;
        } else {
          result[0] += 0.0021598272138228943;
          result[1] += 0.008639308855291577;
          result[2] += 0;
          result[3] += 0.9762419006479481;
          result[4] += 0.0064794816414686825;
          result[5] += 0.0064794816414686825;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          result[0] += 0.9368959636156907;
          result[1] += 0;
          result[2] += 0.0005685048322910744;
          result[3] += 0.06253553155201819;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.175018698578908;
          result[1] += 0.005609573672400898;
          result[2] += 0.005609573672400898;
          result[3] += 0.7804786836200449;
          result[4] += 0.03328347045624533;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.45491306105944196;
          result[1] += 0.0014152850788515972;
          result[2] += 0.005256773150020219;
          result[3] += 0.21593206631621512;
          result[4] += 0.3224828143954711;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.999291031549096;
          result[4] += 0;
          result[5] += 0.0007089684509039348;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          result[0] += 0.6390658174097665;
          result[1] += 0;
          result[2] += 0.028308563340410476;
          result[3] += 0;
          result[4] += 0.3255484784147205;
          result[5] += 0.002830856334041048;
          result[6] += 0.004246284501061572;
        } else {
          result[0] += 0.49130434782608695;
          result[1] += 0;
          result[2] += 0.008695652173913044;
          result[3] += 0.004347826086956522;
          result[4] += 0.4956521739130435;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.9964929859719439;
          result[1] += 0;
          result[2] += 0.00250501002004008;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001002004008016032;
        } else {
          result[0] += 0.9996571428571429;
          result[1] += 0;
          result[2] += 0.00034285714285714285;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
          result[0] += 0.02369534555712271;
          result[1] += 0.005359661495063469;
          result[2] += 0.005077574047954866;
          result[3] += 0.9636107193229901;
          result[4] += 0.0005641748942172073;
          result[5] += 0.001692524682651622;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.020134228187919462;
          result[2] += 0;
          result[3] += 0.14429530201342283;
          result[4] += 0.8355704697986577;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03502824858757062;
          result[3] += 0.2903954802259887;
          result[4] += 0.672316384180791;
          result[5] += 0.0022598870056497176;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.00933125972006221;
          result[3] += 0.17573872472783825;
          result[4] += 0.8144116122343183;
          result[5] += 0.0005184033177812338;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
          result[0] += 0.9850046860356139;
          result[1] += 0.0004016601954746285;
          result[2] += 0.004686035613870665;
          result[3] += 0.009238184495916455;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006694336591243808;
        } else {
          result[0] += 0.9395218002812941;
          result[1] += 0;
          result[2] += 0.012658227848101267;
          result[3] += 0.04078762306610408;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.007032348804500704;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103.5) ) ) {
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
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)73.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9375;
          result[4] += 0.0625;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.48853754940711464;
          result[1] += 0;
          result[2] += 0.014229249011857707;
          result[3] += 0.4853754940711462;
          result[4] += 0.011857707509881422;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
          result[0] += 0.1918775750441436;
          result[1] += 0.006474396703943496;
          result[2] += 0.007062978222483814;
          result[3] += 0.7510300176574456;
          result[4] += 0.04355503237198352;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.08993288590604027;
          result[4] += 0.9100671140939597;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)124.5) ) ) {
          result[0] += 0.019230769230769232;
          result[1] += 0.019230769230769232;
          result[2] += 0;
          result[3] += 0.9615384615384616;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.043478260869565216;
          result[1] += 0.34782608695652173;
          result[2] += 0;
          result[3] += 0.6086956521739131;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)373) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)31.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9991508632889895;
          result[1] += 0;
          result[2] += 0.0008491367110104727;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9987146529562982;
          result[5] += 0.0012853470437017994;
          result[6] += 0;
        } else {
          result[0] += 0.4060327868852459;
          result[1] += 0.002098360655737705;
          result[2] += 0.007737704918032787;
          result[3] += 0.583344262295082;
          result[4] += 0;
          result[5] += 0.0006557377049180328;
          result[6] += 0.00013114754098360657;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)36) ) ) {
          result[0] += 0.9905847373637264;
          result[1] += 0;
          result[2] += 0.007185332011892963;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0022299306243805748;
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-13) ) ) {
          result[0] += 0.1111111111111111;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8888888888888888;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9989583333333333;
          result[5] += 0.0010416666666666667;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28.5) ) ) {
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
          result[2] += 0.013576580398812049;
          result[3] += 0.9843020789138736;
          result[4] += 0;
          result[5] += 0.0021213406873143827;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.998533724340176;
          result[1] += 0;
          result[2] += 0.001374633431085044;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9.164222873900293e-05;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9495451788963009;
          result[1] += 0.0014554275318374775;
          result[2] += 0.006549423893268649;
          result[3] += 0.04147968465736811;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000970285021224985;
        } else {
          result[0] += 0;
          result[1] += 0.001437297879985627;
          result[2] += 0.005749191519942508;
          result[3] += 0.9928135106000718;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)124.5) ) ) {
          result[0] += 0;
          result[1] += 0.008448540706605223;
          result[2] += 0;
          result[3] += 0.9915514592933948;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.3888888888888889;
          result[2] += 0;
          result[3] += 0.6111111111111112;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8533333333333334;
          result[1] += 0;
          result[2] += 0.14666666666666667;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9972100438421682;
          result[4] += 0.0007971303308090873;
          result[5] += 0.0019928258270227183;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.21428571428571427;
          result[2] += 0.7380952380952381;
          result[3] += 0.023809523809523808;
          result[4] += 0;
          result[5] += 0.023809523809523808;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0.013966480446927373;
          result[2] += 0;
          result[3] += 0.9860335195530726;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-1) ) ) {
          result[0] += 0.7202572347266881;
          result[1] += 0;
          result[2] += 0.01607717041800643;
          result[3] += 0.26366559485530544;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9937567665102851;
          result[1] += 0.0004691447130999639;
          result[2] += 0.001443522194153735;
          result[3] += 0.004222302417899676;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010826416456153014;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          result[0] += 0.8839156800462028;
          result[1] += 0;
          result[2] += 0.0075079410915391285;
          result[3] += 0.10655501010684379;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002021368755414381;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.025495750708215296;
          result[3] += 0.9716713881019831;
          result[4] += 0;
          result[5] += 0.0028328611898017;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.316938453445555;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6830615465544451;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9875246224556796;
          result[1] += 0;
          result[2] += 0.010505581089954037;
          result[3] += 0.001969796454366382;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)252) ) ) {
          result[0] += 0.995987080356269;
          result[1] += 9.787608887148871e-05;
          result[2] += 0.000538318488793188;
          result[3] += 0.003229910932759127;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00014681413330723306;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          result[0] += 0.002328288707799767;
          result[1] += 0.004656577415599534;
          result[2] += 0;
          result[3] += 0.220023282887078;
          result[4] += 0.7729918509895227;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.18;
          result[3] += 0.78;
          result[4] += 0.04;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)41.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)80.5) ) ) {
          result[0] += 0.38503155996393146;
          result[1] += 0.0015028554253080854;
          result[2] += 0.0063119927862939585;
          result[3] += 0.6041478809738503;
          result[4] += 0.0016531409678388939;
          result[5] += 0.0009017132551848512;
          result[6] += 0.0004508566275924256;
        } else {
          result[0] += 0.11912568306010929;
          result[1] += 0;
          result[2] += 0.029508196721311476;
          result[3] += 0.5387978142076503;
          result[4] += 0.31256830601092894;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9994685562444642;
          result[1] += 0;
          result[2] += 0.0005314437555358724;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.88702211554946;
          result[1] += 0;
          result[2] += 0.0034287673581347507;
          result[3] += 0.10903480198868507;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005143151037202125;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)18) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.009855951478392721;
          result[2] += 0;
          result[3] += 0.9901440485216073;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)88.5) ) ) {
          result[0] += 0.8333333333333334;
          result[1] += 0;
          result[2] += 0.16666666666666666;
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)373) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9985865058424426;
          result[1] += 0;
          result[2] += 0.0014134941575574822;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9982993197278912;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0017006802721088435;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
          result[0] += 0.018843120070113933;
          result[1] += 0.007011393514460999;
          result[2] += 0.0056967572304995615;
          result[3] += 0.7708150744960561;
          result[4] += 0.19653812445223487;
          result[5] += 0.0010955302366345311;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.006688963210702341;
          result[2] += 0;
          result[3] += 0.10925306577480491;
          result[4] += 0.8840579710144928;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.8577494692144374;
          result[1] += 0.004246284501061571;
          result[2] += 0.012738853503184714;
          result[3] += 0.11889596602972399;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.006369426751592357;
        } else {
          result[0] += 0.987417304449345;
          result[1] += 0;
          result[2] += 0.005837332987417305;
          result[3] += 0.0053184589440913215;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014269036191464522;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
          result[0] += 0;
          result[1] += 0.0016806722689075631;
          result[2] += 0;
          result[3] += 0.9983193277310924;
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0008680555555555555;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9947916666666666;
          result[4] += 0.0013020833333333333;
          result[5] += 0.0030381944444444445;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-33) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.002081165452653486;
          result[1] += 0;
          result[2] += 0.026014568158168574;
          result[3] += 0;
          result[4] += 0.9687825182101977;
          result[5] += 0.003121748178980229;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)41.5) ) ) {
          result[0] += 0.9973669467787115;
          result[1] += 0.0003361344537815126;
          result[2] += 0.000784313725490196;
          result[3] += 0.0014565826330532213;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5.6022408963585436e-05;
        } else {
          result[0] += 0.9753947851634227;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.024605214836577304;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9717447610077702;
          result[1] += 0.0009418412997409936;
          result[2] += 0.005768777960913586;
          result[3] += 0.021191429244172357;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003531904874028726;
        } else {
          result[0] += 0.6303219106957425;
          result[1] += 0;
          result[2] += 0.005192107995846314;
          result[3] += 0.3642263759086189;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00025960539979231567;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 0.4696969696969697;
          result[1] += 0;
          result[2] += 0.020202020202020204;
          result[3] += 0.51010101010101;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0010351966873706005;
          result[1] += 0.012422360248447204;
          result[2] += 0;
          result[3] += 0.9865424430641822;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.003875968992248062;
          result[1] += 0.050387596899224806;
          result[2] += 0;
          result[3] += 0.007751937984496124;
          result[4] += 0.937984496124031;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2306.5) ) ) {
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
          result[4] += 0.9989795918367347;
          result[5] += 0.0010204081632653062;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
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
          result[2] += 0.00996102208748376;
          result[3] += 0.9878735383282806;
          result[4] += 0;
          result[5] += 0.0021654395842356;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
          result[0] += 0.7347294938917975;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.26527050610820246;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9977188789919618;
          result[1] += 0.0004707075095951915;
          result[2] += 0.0013759142588167137;
          result[3] += 0.0002534578897820262;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00018104134984430444;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.43924191750278707;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5607580824972129;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9869767441860465;
          result[1] += 0;
          result[2] += 0.00992248062015504;
          result[3] += 0.00062015503875969;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00248062015503876;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-7) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3103448275862069;
          result[1] += 0;
          result[2] += 0.03761755485893417;
          result[3] += 0.6520376175548589;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)114.5) ) ) {
          result[0] += 0;
          result[1] += 0.017006802721088437;
          result[2] += 0;
          result[3] += 0.9829931972789115;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)18) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.011834319526627219;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9881656804733728;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-11.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.007035175879396985;
          result[1] += 0;
          result[2] += 0.009045226130653266;
          result[3] += 0.6914572864321608;
          result[4] += 0.2904522613065327;
          result[5] += 0.0020100502512562816;
          result[6] += 0;
        } else {
          result[0] += 0.7357656163626313;
          result[1] += 0;
          result[2] += 0.002763957987838585;
          result[3] += 0.2614704256495301;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
          result[0] += 0.9986263736263736;
          result[1] += 0;
          result[2] += 0.0013736263736263737;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.58568479008947;
          result[1] += 0.004473503097040606;
          result[2] += 0.0027529249827942187;
          result[3] += 0.3282863041982106;
          result[4] += 0.07708189951823813;
          result[5] += 0;
          result[6] += 0.0017205781142463868;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0228310502283105;
          result[3] += 0.8470319634703196;
          result[4] += 0.12899543378995434;
          result[5] += 0.001141552511415525;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)8.5) ) ) {
          result[0] += 0.2521626297577855;
          result[1] += 0.005622837370242215;
          result[2] += 0.013408304498269897;
          result[3] += 0.5021626297577855;
          result[4] += 0.22664359861591696;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          result[0] += 0;
          result[1] += 0.002145922746781116;
          result[2] += 0;
          result[3] += 0.017167381974248927;
          result[4] += 0.98068669527897;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.18468468468468469;
          result[4] += 0.8153153153153153;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9856304391823517;
          result[1] += 0.0003373136342170951;
          result[2] += 0.00020238818053025704;
          result[3] += 0.013762396276057479;
          result[4] += 0;
          result[5] += 0;
          result[6] += 6.746272684341901e-05;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.6873784046692608;
          result[1] += 0.001337548638132296;
          result[2] += 0.003526264591439689;
          result[3] += 0.29328793774319073;
          result[4] += 0.013983463035019458;
          result[5] += 0.00024319066147859925;
          result[6] += 0.00024319066147859925;
        } else {
          result[0] += 0.9960732984293194;
          result[1] += 0;
          result[2] += 0.0013089005235602095;
          result[3] += 0.0008726003490401396;
          result[4] += 0.0004363001745200698;
          result[5] += 0;
          result[6] += 0.0013089005235602095;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.08351843625055531;
          result[1] += 0;
          result[2] += 0.010217681030653044;
          result[3] += 0.9053753887161262;
          result[4] += 0;
          result[5] += 0.000888494002665482;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9856314772527666;
          result[1] += 0.0003513086246267346;
          result[2] += 0.0017916739855963464;
          result[3] += 0.01208501668715967;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00014052344985069384;
        } else {
          result[0] += 0.6467650397275823;
          result[1] += 0;
          result[2] += 0.004653802497162316;
          result[3] += 0.347900113507378;
          result[4] += 0;
          result[5] += 0.000340522133938706;
          result[6] += 0.000340522133938706;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)109) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.24594594594594596;
          result[1] += 0.014864864864864866;
          result[2] += 0;
          result[3] += 0.7391891891891892;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.00909090909090909;
          result[2] += 0;
          result[3] += 0.990909090909091;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5241.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.020080321285140562;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9799196787148594;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.052132701421800945;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9478672985781991;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-8.5) ) ) {
          result[0] += 0.9322033898305084;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.06779661016949153;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2962962962962963;
          result[1] += 0;
          result[2] += 0.14814814814814814;
          result[3] += 0.5555555555555556;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.002886002886002886;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9923039923039924;
          result[4] += 0.002405002405002405;
          result[5] += 0.002405002405002405;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.017857142857142856;
          result[3] += 0;
          result[4] += 0.9678571428571429;
          result[5] += 0.014285714285714285;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)27) ) ) {
          result[0] += 0.989010989010989;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01098901098901099;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02332814930015552;
          result[3] += 0;
          result[4] += 0.9766718506998445;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
          result[0] += 0.9954695076629031;
          result[1] += 0.000637100484904258;
          result[2] += 0.0012034120270413761;
          result[3] += 0.0024776129968498923;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002123668283014193;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.031496062992125984;
          result[3] += 0.968503937007874;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.54337899543379;
          result[1] += 0;
          result[2] += 0.008781173164734809;
          result[3] += 0.4450298559887601;
          result[4] += 0;
          result[5] += 0.002107481559536354;
          result[6] += 0.0007024938531787847;
        } else {
          result[0] += 0.6894109518051478;
          result[1] += 0;
          result[2] += 0.0012091898428053206;
          result[3] += 0.309207116945932;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001727414061150458;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
          result[0] += 0;
          result[1] += 0.3333333333333333;
          result[2] += 0;
          result[3] += 0.6666666666666666;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.01337295690936107;
          result[2] += 0;
          result[3] += 0.986627043090639;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)88.5) ) ) {
          result[0] += 0.9318181818181818;
          result[1] += 0;
          result[2] += 0.06818181818181818;
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-7.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)48.5) ) ) {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)26) ) ) {
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
          result[4] += 0.9984871406959153;
          result[5] += 0.0015128593040847202;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
          result[0] += 0.002314814814814815;
          result[1] += 0.00771604938271605;
          result[2] += 0;
          result[3] += 0.9891975308641976;
          result[4] += 0;
          result[5] += 0.000771604938271605;
          result[6] += 0;
        } else {
          result[0] += 0.9365079365079365;
          result[1] += 0;
          result[2] += 0.06349206349206349;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0025826446280991736;
          result[2] += 0.004132231404958678;
          result[3] += 0.9891528925619835;
          result[4] += 0;
          result[5] += 0.004132231404958678;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.981651376146789;
          result[1] += 0;
          result[2] += 0.01834862385321101;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
          result[0] += 0.998981031509641;
          result[1] += 0;
          result[2] += 0.0009405862987929142;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7.838219156607619e-05;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.08675373134328358;
          result[1] += 0.029850746268656716;
          result[2] += 0.03171641791044776;
          result[3] += 0.851679104477612;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.582398753894081;
          result[1] += 0;
          result[2] += 0.0021806853582554517;
          result[3] += 0.41495327102803736;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00046728971962616824;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.8844056706652127;
          result[1] += 0;
          result[2] += 0.003271537622682661;
          result[3] += 0.11232279171210469;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.991764705882353;
          result[1] += 0;
          result[2] += 0.006470588235294118;
          result[3] += 0.001176470588235294;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000588235294117647;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)248) ) ) {
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.998373454782043;
          result[4] += 0.0009759271307742355;
          result[5] += 0.0006506180871828237;
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
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1705653021442495;
          result[4] += 0.8294346978557505;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.02088167053364269;
          result[2] += 0;
          result[3] += 0.002320185614849188;
          result[4] += 0.9767981438515081;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0.04024767801857585;
          result[2] += 0;
          result[3] += 0.9597523219814241;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.9979284779764501;
          result[1] += 0.0005087948829771771;
          result[2] += 0.001053932257595581;
          result[3] += 0.00010902747492368078;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003997674080534962;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9375;
          result[3] += 0.0625;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          result[0] += 0.9312977099236641;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.06870229007633588;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.018026565464895637;
          result[1] += 0;
          result[2] += 0.004743833017077799;
          result[3] += 0.9772296015180265;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)236.5) ) ) {
          result[0] += 0.99341580207502;
          result[1] += 0;
          result[2] += 0.004189944134078212;
          result[3] += 0.0019952114924181963;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003990422984836393;
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9970972423802612;
          result[1] += 0;
          result[2] += 0.0024189646831156266;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004837929366231253;
        } else {
          result[0] += 0.999793431109275;
          result[1] += 0;
          result[2] += 0.0002065688907250568;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9969040247678018;
          result[5] += 0.0030959752321981426;
          result[6] += 0;
        } else {
          result[0] += 0.024071526822558458;
          result[1] += 0.0034387895460797797;
          result[2] += 0.01891334250343879;
          result[3] += 0.9515130674002751;
          result[4] += 0;
          result[5] += 0.0020632737276478678;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.5707138092061375;
          result[1] += 0;
          result[2] += 0.00266844563042028;
          result[3] += 0.42578385590393597;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008338892595063375;
        } else {
          result[0] += 0.9705268043629612;
          result[1] += 0;
          result[2] += 0.004873520538407983;
          result[3] += 0.023439313065676492;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011603620329542817;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-6.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
          result[0] += 0;
          result[1] += 0.011527377521613832;
          result[2] += 0;
          result[3] += 0.9884726224783862;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 0.4728434504792332;
          result[1] += 0;
          result[2] += 0.03514376996805112;
          result[3] += 0.49201277955271566;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.01838235294117647;
          result[2] += 0;
          result[3] += 0.9816176470588235;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)57) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9959839357429718;
          result[5] += 0.004016064257028112;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0;
          result[1] += 0.002849002849002849;
          result[2] += 0.022222222222222223;
          result[3] += 0.9732193732193732;
          result[4] += 0;
          result[5] += 0.0017094017094017094;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.003289473684210526;
          result[2] += 0;
          result[3] += 0.9967105263157895;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)51) ) ) {
          result[0] += 0.9983566146261298;
          result[1] += 0;
          result[2] += 0.0004108463434675431;
          result[3] += 0.0012325390304026294;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9876160990712074;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.01238390092879257;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 0.7758431372549021;
          result[1] += 0;
          result[2] += 0.005803921568627452;
          result[3] += 0.21694117647058828;
          result[4] += 0;
          result[5] += 0.00015686274509803925;
          result[6] += 0.001254901960784314;
        } else {
          result[0] += 0.007042253521126761;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9929577464788732;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)287.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9988347575185884;
          result[1] += 0;
          result[2] += 0.0008323160581511485;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00033292642326045944;
        } else {
          result[0] += 0.6581404790905401;
          result[1] += 0.0024360535931790502;
          result[2] += 0.006631479225876304;
          result[3] += 0.3323859791582082;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004060089321965084;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)551) ) ) {
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
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9985479186834463;
          result[1] += 0;
          result[2] += 0.000968054211035818;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000484027105517909;
        } else {
          result[0] += 0.9999500174938771;
          result[1] += 0;
          result[2] += 4.9982506122857e-05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9574468085106383;
          result[1] += 0;
          result[2] += 0.0425531914893617;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-8.5) ) ) {
          result[0] += 0.3829787234042553;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.574468085106383;
          result[4] += 0.0425531914893617;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7383615333142147;
          result[1] += 0.0010515247108307045;
          result[2] += 0.006309148264984227;
          result[3] += 0.22923238696109358;
          result[4] += 0.02380269572698595;
          result[5] += 0.00047796577765032023;
          result[6] += 0.0007647452442405124;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0.13595583160800553;
          result[1] += 0.016563146997929608;
          result[2] += 0;
          result[3] += 0.6997929606625258;
          result[4] += 0.147688060731539;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.05793450881612091;
          result[1] += 0;
          result[2] += 0.0025188916876574307;
          result[3] += 0.1681360201511335;
          result[4] += 0.7714105793450882;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6666666666666666;
          result[5] += 0.3333333333333333;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0013127666557269445;
          result[2] += 0;
          result[3] += 0.998687233344273;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
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
          result[2] += 0.717948717948718;
          result[3] += 0;
          result[4] += 0.28205128205128205;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5230.5) ) ) {
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
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
          result[0] += 0.0018162005085361425;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9949146385760989;
          result[4] += 0.001452960406828914;
          result[5] += 0.0018162005085361425;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.00889328063241107;
          result[3] += 0;
          result[4] += 0.9861660079051384;
          result[5] += 0.004940711462450594;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          result[0] += 0.9459459459459459;
          result[1] += 0;
          result[2] += 0.04054054054054054;
          result[3] += 0;
          result[4] += 0.013513513513513514;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.005797101449275362;
          result[3] += 0;
          result[4] += 0.9942028985507246;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)32.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0.0015455950540958269;
          result[2] += 0;
          result[3] += 0.9984544049459042;
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
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
          result[0] += 0.9935355021811111;
          result[1] += 5.255689283649551e-05;
          result[2] += 0.0007357964997109371;
          result[3] += 0.005571030640668524;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010511378567299102;
        } else {
          result[0] += 0.5678291814946619;
          result[1] += 0.00199288256227758;
          result[2] += 0.007402135231316726;
          result[3] += 0.42277580071174375;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
          result[0] += 0.9975511380005763;
          result[1] += 0;
          result[2] += 0.002304811293575339;
          result[3] += 0.00014405070584845868;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9618607338919387;
          result[1] += 0;
          result[2] += 0.004911875180583647;
          result[3] += 0.031493787922565734;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0017336030049118752;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.9965928449744463;
          result[1] += 0;
          result[2] += 0.0034071550255536627;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9665271966527197;
          result[1] += 0;
          result[2] += 0.02092050209205021;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.012552301255230125;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.9973297730307076;
          result[1] += 0;
          result[2] += 0.0026702269692923898;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0.020087561164048418;
          result[1] += 0.006438320885912954;
          result[2] += 0.012104043265516354;
          result[3] += 0.9456605717228946;
          result[4] += 0.014421838784445017;
          result[5] += 0.0012876641771825909;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.38394415357766143;
          result[4] += 0.6160558464223386;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.005997001499250375;
          result[2] += 0;
          result[3] += 0.05847076461769116;
          result[4] += 0.9355322338830585;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          result[0] += 0.9946766036731435;
          result[1] += 0.00026616981634282674;
          result[2] += 0.0031940377961139207;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0018631887143997872;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0007707129094412332;
          result[3] += 0.9992292870905588;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)52.5) ) ) {
          result[0] += 0.851508120649652;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.14849187935034802;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9850224663005491;
          result[1] += 0;
          result[2] += 0.007239141288067898;
          result[3] += 0.005741387918122816;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00199700449326011;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)33) ) ) {
          result[0] += 0;
          result[1] += 0.005252790544977019;
          result[2] += 0;
          result[3] += 0.680236375574524;
          result[4] += 0.314510833880499;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9946751863684771;
          result[1] += 0;
          result[2] += 0.005324813631522897;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
          result[0] += 0;
          result[1] += 0.0033806626098715348;
          result[2] += 0.009465855307640297;
          result[3] += 0.5581473968897904;
          result[4] += 0.4290060851926978;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9964209019327129;
          result[1] += 0.0021474588403722263;
          result[2] += 0.0014316392269148174;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)19) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1753.5) ) ) {
          result[0] += 0.9901863448907897;
          result[1] += 0.0004200397128455781;
          result[2] += 0.0007637085688101421;
          result[3] += 0.008400794256911563;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00022911257064304262;
        } else {
          result[0] += 0.7272727272727273;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2727272727272727;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
          result[0] += 0.007575757575757576;
          result[1] += 0.0030303030303030303;
          result[2] += 0;
          result[3] += 0.9787878787878788;
          result[4] += 0;
          result[5] += 0.010606060606060607;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
          result[0] += 0.005332385353714895;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9946676146462851;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03961748633879782;
          result[3] += 0;
          result[4] += 0.9603825136612022;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.009900990099009901;
          result[3] += 0.9529702970297029;
          result[4] += 0.0297029702970297;
          result[5] += 0.007425742574257425;
          result[6] += 0;
        } else {
          result[0] += 0.9903381642512077;
          result[1] += 0;
          result[2] += 0.006587615283267457;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0030742204655248135;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0;
          result[1] += 0.005426739023186976;
          result[2] += 0.00986679822397632;
          result[3] += 0.9842131228416379;
          result[4] += 0;
          result[5] += 0.000493339911198816;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.002654867256637168;
          result[2] += 0;
          result[3] += 0.995575221238938;
          result[4] += 0;
          result[5] += 0.0017699115044247787;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.9985358711566618;
          result[1] += 0;
          result[2] += 0.0014641288433382138;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.5175122749590835;
          result[1] += 0;
          result[2] += 0.005564648117839607;
          result[3] += 0.47692307692307695;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9804908747640025;
          result[1] += 0;
          result[2] += 0.006922592825676526;
          result[3] += 0.00881057268722467;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.003775959723096287;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)61) ) ) {
          result[0] += 0.7982456140350878;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.20175438596491227;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.012345679012345678;
          result[1] += 0.06790123456790123;
          result[2] += 0;
          result[3] += 0.9197530864197531;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          result[0] += 0.9966973083062696;
          result[1] += 0.0008256729234325976;
          result[2] += 0.0020917047393625805;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003853140309352122;
        } else {
          result[0] += 0.6980392156862745;
          result[1] += 0;
          result[2] += 0.003758169934640523;
          result[3] += 0.29820261437908496;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.996186844613918;
          result[1] += 0;
          result[2] += 0.0038131553860819827;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9894366197183099;
          result[1] += 0;
          result[2] += 0.01056338028169014;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
          result[0] += 0.9984859954579863;
          result[1] += 0;
          result[2] += 0.001514004542013626;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9998255306775226;
          result[1] += 0;
          result[2] += 0.00017446932247746437;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.0124750499001996;
          result[1] += 0.000499001996007984;
          result[2] += 0;
          result[3] += 0.7639720558882236;
          result[4] += 0.22255489021956087;
          result[5] += 0.000499001996007984;
          result[6] += 0;
        } else {
          result[0] += 0.015264976958525345;
          result[1] += 0.007200460829493088;
          result[2] += 0.007200460829493088;
          result[3] += 0.6080069124423964;
          result[4] += 0.3623271889400922;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          result[0] += 0.9906769355492501;
          result[1] += 0;
          result[2] += 0.004053506282934738;
          result[3] += 0.004323740035130388;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009458181326847723;
        } else {
          result[0] += 0.8940027894002789;
          result[1] += 0;
          result[2] += 0.02092050209205021;
          result[3] += 0.08507670850767085;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8;
          result[5] += 0.2;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0015807777426493834;
          result[2] += 0;
          result[3] += 0.9984192222573506;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
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
          result[2] += 0.71875;
          result[3] += 0;
          result[4] += 0.28125;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
          result[0] += 0;
          result[1] += 0.03508771929824561;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9649122807017544;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0065111231687466084;
          result[2] += 0.008138903960933261;
          result[3] += 0.9853499728703201;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
          result[0] += 0.9666666666666667;
          result[1] += 0.03333333333333333;
          result[2] += 0;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03466386554621849;
          result[4] += 0.9653361344537815;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.22348484848484848;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7765151515151515;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
          result[0] += 0.07142857142857142;
          result[1] += 0;
          result[2] += 0.9285714285714286;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9919571045576407;
          result[1] += 0;
          result[2] += 0.00804289544235925;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9989717704243783;
          result[1] += 0;
          result[2] += 0.0008412787436904094;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001869508319312021;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.6444539067489887;
          result[1] += 0.0034064296359378327;
          result[2] += 0.002767724079199489;
          result[3] += 0.34766872471790505;
          result[4] += 0.0006387055567383436;
          result[5] += 0.0004258037044922291;
          result[6] += 0.0006387055567383436;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.010277492291880781;
          result[3] += 0.7846865364850977;
          result[4] += 0.2040082219938335;
          result[5] += 0.0010277492291880781;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)36) ) ) {
          result[0] += 0.9937296212691247;
          result[1] += 0;
          result[2] += 0.005016302984700276;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001254075746175069;
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.984375;
          result[5] += 0.015625;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.10020366598778004;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8981670061099797;
          result[4] += 0;
          result[5] += 0.001629327902240326;
          result[6] += 0;
        } else {
          result[0] += 0.5387323943661972;
          result[1] += 0;
          result[2] += 0.07042253521126762;
          result[3] += 0.37323943661971837;
          result[4] += 0;
          result[5] += 0.017605633802816906;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
          result[0] += 0.6615646258503401;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.33843537414965985;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9970522944794207;
          result[1] += 0.0004366971141599039;
          result[2] += 0.0021107027184395356;
          result[3] += 0.00021834855707995196;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00018195713089995996;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
          result[0] += 0.8438152011922502;
          result[1] += 0;
          result[2] += 0.0068554396423248865;
          result[3] += 0.14754098360655735;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0017883755588673617;
        } else {
          result[0] += 0.5241458293567475;
          result[1] += 0;
          result[2] += 0.0024813895781637717;
          result[3] += 0.47337278106508873;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
          result[0] += 0;
          result[1] += 0.0636042402826855;
          result[2] += 0;
          result[3] += 0.9363957597173145;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8333333333333334;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.009900990099009901;
          result[1] += 0.12871287128712872;
          result[2] += 0;
          result[3] += 0.8613861386138614;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.002902757619738752;
          result[1] += 0.005805515239477504;
          result[2] += 0.003386550556361877;
          result[3] += 0.9879051765844219;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)47.5) ) ) {
          result[0] += 0.9947807933194155;
          result[1] += 0;
          result[2] += 0.005219206680584551;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          result[0] += 0.2367021276595745;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2194148936170213;
          result[4] += 0.5425531914893618;
          result[5] += 0.0013297872340425534;
          result[6] += 0;
        } else {
          result[0] += 0.039301310043668124;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.13973799126637554;
          result[4] += 0.8209606986899564;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.12643678160919544;
          result[3] += 0;
          result[4] += 0.8620689655172414;
          result[5] += 0.01149425287356322;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0037650602409638554;
          result[3] += 0.9954819277108434;
          result[4] += 0;
          result[5] += 0.0007530120481927711;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
          result[0] += 0.9972594397076736;
          result[1] += 0.0008120178643930166;
          result[2] += 0.0008120178643930166;
          result[3] += 0.001116524563540398;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.990576295759333;
          result[1] += 0;
          result[2] += 0.0009061254077564335;
          result[3] += 0.008336353751359188;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001812250815512867;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9994749737486874;
          result[1] += 0;
          result[2] += 0.0005250262513125656;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6736367363673637;
          result[1] += 0.001127511275112751;
          result[2] += 0.004817548175481755;
          result[3] += 0.3195981959819598;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008200082000820008;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
          result[0] += 0.0005089058524173028;
          result[1] += 0.004580152671755725;
          result[2] += 0.011704834605597965;
          result[3] += 0.9821882951653944;
          result[4] += 0.0010178117048346056;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.016597510373443983;
          result[2] += 0;
          result[3] += 0.004149377593360996;
          result[4] += 0.979253112033195;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.441340782122905;
          result[1] += 0;
          result[2] += 0.008379888268156424;
          result[3] += 0;
          result[4] += 0.5502793296089385;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
          result[0] += 0.07142857142857142;
          result[1] += 0;
          result[2] += 0.025210084033613446;
          result[3] += 0.9033613445378151;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.019425019425019424;
          result[4] += 0.9805749805749806;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0.9990840393863064;
          result[1] += 0;
          result[2] += 0.0009159606136936112;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9998858317159494;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00011416828405069072;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.7373197212769405;
          result[1] += 0.001944579484686436;
          result[2] += 0.003240965807810727;
          result[3] += 0.2514989466861124;
          result[4] += 0.004375303840544482;
          result[5] += 0.0011343380327337544;
          result[6] += 0.000486144871171609;
        } else {
          result[0] += 0.403969754253308;
          result[1] += 0;
          result[2] += 0.009073724007561434;
          result[3] += 0.5826086956521738;
          result[4] += 0.002646502835538752;
          result[5] += 0.0005671077504725896;
          result[6] += 0.0011342155009451793;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)880) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4516) ) ) {
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)236) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9640287769784173;
          result[1] += 0;
          result[2] += 0.03597122302158273;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9968814968814969;
          result[1] += 0;
          result[2] += 0.0031185031185031187;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9998325098400469;
          result[1] += 0;
          result[2] += 0.00016749015995310275;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
          result[0] += 0.31734778982485407;
          result[1] += 0.005838198498748957;
          result[2] += 0.006672226855713094;
          result[3] += 0.6701417848206839;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8011085751548744;
          result[1] += 0.0006521030322791001;
          result[2] += 0.006521030322791001;
          result[3] += 0.1847625258124117;
          result[4] += 0.0051081404195196176;
          result[5] += 0.0008694707097054668;
          result[6] += 0.00097815454841865;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
          result[0] += 0;
          result[1] += 0.0009810333551340746;
          result[2] += 0;
          result[3] += 0.9973839110529757;
          result[4] += 0.0006540222367560497;
          result[5] += 0.0009810333551340746;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03115727002967359;
          result[3] += 0;
          result[4] += 0.9688427299703264;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)17) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.006369426751592357;
          result[1] += 0.006369426751592357;
          result[2] += 0;
          result[3] += 0.9872611464968153;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
          result[0] += 0.08187672493100276;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8399264029438822;
          result[4] += 0.078196872125115;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9962426194310252;
          result[1] += 0;
          result[2] += 0.0013955984970477724;
          result[3] += 0.0022544283413848632;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010735373054213633;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.32117962466487937;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6788203753351206;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.810692375109553;
          result[1] += 0;
          result[2] += 0.028045574057843997;
          result[3] += 0;
          result[4] += 0.1551270815074496;
          result[5] += 0.0008764241893076249;
          result[6] += 0.0052585451358457495;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.8485923823042347;
          result[1] += 0.0016560208185474332;
          result[2] += 0.0046132008516678496;
          result[3] += 0.1434823752070026;
          result[4] += 0.0004731488052992666;
          result[5] += 0.00035486160397445;
          result[6] += 0.0008280104092737166;
        } else {
          result[0] += 0.966677609980302;
          result[1] += 0;
          result[2] += 0.0020518713066316483;
          result[3] += 0.014363099146421537;
          result[4] += 0.016825344714379513;
          result[5] += 8.207485226526592e-05;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.36630434782608695;
          result[1] += 0;
          result[2] += 0.0016304347826086956;
          result[3] += 0.48179347826086955;
          result[4] += 0.14972826086956523;
          result[5] += 0;
          result[6] += 0.0005434782608695652;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
          result[0] += 0;
          result[1] += 0.01487603305785124;
          result[2] += 0;
          result[3] += 0.9851239669421488;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9686520376175548;
          result[1] += 0;
          result[2] += 0.03134796238244514;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)102) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)119.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.07142857142857142;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9285714285714286;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)212) ) ) {
          result[0] += 0;
          result[1] += 0.012987012987012988;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.987012987012987;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.35714285714285715;
          result[4] += 0.14285714285714285;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
          result[0] += 0.9681528662420382;
          result[1] += 0;
          result[2] += 0.03184713375796178;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9990412272291467;
          result[1] += 0;
          result[2] += 0.0009587727708533077;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9994959042218021;
          result[1] += 0;
          result[2] += 0.0005040957781978576;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
          result[0] += 0.014336917562724016;
          result[1] += 0.028673835125448032;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.939068100358423;
          result[5] += 0.01792114695340502;
          result[6] += 0;
        } else {
          result[0] += 0.019452054794520546;
          result[1] += 0.007671232876712329;
          result[2] += 0.002465753424657534;
          result[3] += 0.9698630136986301;
          result[4] += 0;
          result[5] += 0.000547945205479452;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
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
          result[2] += 0.0169971671388102;
          result[3] += 0.25967894239848915;
          result[4] += 0.7214353163361662;
          result[5] += 0.0018885741265344666;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)30.5) ) ) {
          result[0] += 0.5414258188824663;
          result[1] += 0;
          result[2] += 0.0015764582238570678;
          result[3] += 0.45664739884393063;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003503240497460151;
        } else {
          result[0] += 0.7254901960784313;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.27450980392156865;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 0.9818652849740933;
          result[1] += 0;
          result[2] += 0.004749568221070812;
          result[3] += 0.01273747841105354;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006476683937823834;
        } else {
          result[0] += 0.8793103448275862;
          result[1] += 0;
          result[2] += 0.02586206896551724;
          result[3] += 0.09482758620689655;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)63) ) ) {
          result[0] += 0.6583969465648856;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3358778625954199;
          result[4] += 0.0019083969465648856;
          result[5] += 0.0038167938931297713;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)71) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.009496676163342831;
          result[3] += 0.9848053181386516;
          result[4] += 0.0028490028490028496;
          result[5] += 0.0028490028490028496;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.9955089820359282;
          result[1] += 0;
          result[2] += 0.0029940119760479044;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014970059880239522;
        } else {
          result[0] += 0.9997077488309953;
          result[1] += 0;
          result[2] += 0.000292251169004676;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.5293942106833781;
          result[1] += 0.0014920919128618322;
          result[2] += 0.007012831990450612;
          result[3] += 0.4610564010743062;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010444643390032826;
        } else {
          result[0] += 0.9729858952904614;
          result[1] += 0;
          result[2] += 0.004303131723643318;
          result[3] += 0.021515658618216593;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011953143676786994;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
          result[0] += 0.15283842794759825;
          result[1] += 0.008005822416302766;
          result[2] += 0.009461426491994178;
          result[3] += 0.8296943231441049;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-25) ) ) {
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
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)102) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)224.5) ) ) {
          result[0] += 0;
          result[1] += 0.007352941176470588;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9926470588235294;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.16666666666666669;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6666666666666667;
          result[4] += 0.16666666666666669;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)14) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)3164.5) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)22.5) ) ) {
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
          result[4] += 0.998769987699877;
          result[5] += 0.0012300123001230013;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
          result[0] += 0.0007830853563038371;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9960845732184808;
          result[4] += 0;
          result[5] += 0.0031323414252153485;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.7692307692307693;
          result[2] += 0.23076923076923078;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94) ) ) {
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.997148288973384;
          result[1] += 0;
          result[2] += 0.0022813688212927757;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005703422053231939;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.9624548736462094;
          result[1] += 0.00457280385078219;
          result[2] += 0.006738868832731649;
          result[3] += 0.02527075812274368;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009626955475330926;
        } else {
          result[0] += 0.7713068181818182;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.22869318181818182;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.7612502771004213;
          result[1] += 0;
          result[2] += 0.005985369097761029;
          result[3] += 0.22988250942141436;
          result[4] += 0;
          result[5] += 0.0006650410108623366;
          result[6] += 0.002216803369541122;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.007551240560949299;
          result[3] += 0.9924487594390508;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
          result[0] += 0.009641873278236915;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9807162534435262;
          result[4] += 0;
          result[5] += 0.009641873278236915;
          result[6] += 0;
        } else {
          result[0] += 0.9866666666666667;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.013333333333333334;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
          result[0] += 0.7246376811594203;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2753623188405797;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9977270267344951;
          result[1] += 0.0004690262293899051;
          result[2] += 0.0007576577551683082;
          result[3] += 0.0009741313995021106;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7.215788144460079e-05;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
          result[0] += 0.17501585288522511;
          result[1] += 0.004438807863031071;
          result[2] += 0.0025364616360177552;
          result[3] += 0.8167406467977172;
          result[4] += 0.0006341154090044388;
          result[5] += 0.0006341154090044388;
          result[6] += 0;
        } else {
          result[0] += 0.012269938650306749;
          result[1] += 0.049079754601226995;
          result[2] += 0;
          result[3] += 0.20552147239263804;
          result[4] += 0.7331288343558282;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.033296337402885685;
          result[4] += 0.9667036625971143;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.05322128851540616;
          result[1] += 0;
          result[2] += 0.049019607843137254;
          result[3] += 0.08403361344537816;
          result[4] += 0.8137254901960784;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
          result[0] += 0.005239259517988124;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9947607404820119;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.037037037037037035;
          result[3] += 0;
          result[4] += 0.9629629629629629;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
          result[0] += 0.09045226130653267;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9095477386934674;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8965667101260322;
          result[1] += 0;
          result[2] += 0.0047805302042590175;
          result[3] += 0.09126466753585398;
          result[4] += 0.002607561929595828;
          result[5] += 0.0021729682746631897;
          result[6] += 0.002607561929595828;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-174.5) ) ) {
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.998019801980198;
          result[5] += 0.0019801980198019802;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9981927710843373;
          result[4] += 0;
          result[5] += 0.0018072289156626507;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.2972972972972973;
          result[2] += 0.5135135135135135;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.1891891891891892;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9963299208035542;
          result[1] += 0;
          result[2] += 0.0034769171334749853;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00019316206297083252;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.543752853446964;
          result[1] += 0.0018262060569167557;
          result[2] += 0.007761375741896211;
          result[3] += 0.4458986455638412;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007609191903819815;
        } else {
          result[0] += 0.9653284671532847;
          result[1] += 0;
          result[2] += 0.007527372262773723;
          result[3] += 0.025547445255474453;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0015967153284671533;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-19) ) ) {
          result[0] += 0.33534743202416917;
          result[1] += 0.02416918429003021;
          result[2] += 0;
          result[3] += 0.6404833836858006;
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
  
  // Average tree outputs
  result[0] /= 80;
  result[1] /= 80;
  result[2] /= 80;
  result[3] /= 80;
  result[4] /= 80;
  result[5] /= 80;
  result[6] /= 80;
  
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
