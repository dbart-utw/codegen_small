
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
        result[0] += 0;
        result[1] += 0.0005979073243647235;
        result[2] += 0;
        result[3] += 0.9327354260089686;
        result[4] += 0.06666666666666667;
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
        result[0] += 0.7045454545454546;
        result[1] += 0.06818181818181818;
        result[2] += 0.21212121212121213;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.015151515151515152;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.9990800838145858;
        result[1] += 0;
        result[2] += 0.0007665968211785149;
        result[3] += 0.00015331936423570297;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8735294117647059;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.1264705882352941;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0.8155672500305962;
        result[1] += 0.0005507281850446702;
        result[2] += 0.0041610573981152865;
        result[3] += 0.1791702362011994;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005507281850446702;
      } else {
        result[0] += 0.22488038277511962;
        result[1] += 0.007974481658692184;
        result[2] += 0;
        result[3] += 0.7671451355661882;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
        result[0] += 0.9993912646476945;
        result[1] += 0;
        result[2] += 0.000570689392786486;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.804595951909907e-05;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.9549112097669257;
        result[1] += 0.0020810210876803553;
        result[2] += 0.0030521642619311877;
        result[3] += 0.038984461709211986;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009711431742508325;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.00809323405632891;
        result[3] += 0.9592101003561023;
        result[4] += 0.03269666558756879;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 0.4000830909846282;
        result[1] += 0;
        result[2] += 0.008724553385957623;
        result[3] += 0.35770668882426254;
        result[4] += 0.23182384711258827;
        result[5] += 0.0016618196925633569;
        result[6] += 0;
      } else {
        result[0] += 0.061795710650672485;
        result[1] += 0.0021810250817884407;
        result[2] += 0.010905125408942203;
        result[3] += 0.8393311523082515;
        result[4] += 0.08324245728825881;
        result[5] += 0.002544529262086514;
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
        result[0] += 0.025;
        result[1] += 0.04375;
        result[2] += 0;
        result[3] += 0.93125;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.46075303126994255;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.12188895979578813;
        result[4] += 0.41608168474792595;
        result[5] += 0.0012763241863433313;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.000693721817551162;
        result[2] += 0.005549774540409296;
        result[3] += 0.9653139091224419;
        result[4] += 0.025320846340617414;
        result[5] += 0.003121748178980229;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x46133a00))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.005738132498695879;
        result[2] += 0;
        result[3] += 0.08607198748043818;
        result[4] += 0.908189880020866;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 0.8534278959810875;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.14657210401891252;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.006944444444444444;
        result[1] += 0.024305555555555556;
        result[2] += 0;
        result[3] += 0.96875;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.9958475456028474;
        result[1] += 4.943398091848337e-05;
        result[2] += 0.0007909436946957339;
        result[3] += 0.0032626427406199023;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4.943398091848337e-05;
      } else {
        result[0] += 0.8100061766522545;
        result[1] += 0.0006176652254478073;
        result[2] += 0.005250154416306362;
        result[3] += 0.1836318715256331;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004941321803582458;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43750000))) ) ) {
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
        result[0] += 0.9958314034275128;
        result[1] += 0;
        result[2] += 0.003242241778601204;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009263547938860583;
      } else {
        result[0] += 0.9997908299866132;
        result[1] += 0;
        result[2] += 0.00020917001338688086;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.7034797090016653;
        result[1] += 0.0012271014111666229;
        result[2] += 0.008765010079761592;
        result[3] += 0.2846875273906565;
        result[4] += 0.0005259006047856955;
        result[5] += 0.00043825050398807957;
        result[6] += 0.0008765010079761591;
      } else {
        result[0] += 0;
        result[1] += 0.001337613697164259;
        result[2] += 0.005885500267522739;
        result[3] += 0.8087212413055109;
        result[4] += 0.18378812199036917;
        result[5] += 0.00026752273943285177;
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
        result[0] += 0.002544529262086514;
        result[1] += 0.027989821882951654;
        result[2] += 0;
        result[3] += 0.9694656488549618;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0.9083763203144192;
        result[1] += 0;
        result[2] += 0.0027020388111029235;
        result[3] += 0.07713092606239255;
        result[4] += 0.010562515352493246;
        result[5] += 0.0004912797838368952;
        result[6] += 0.0007369196757553428;
      } else {
        result[0] += 0.8081620839363242;
        result[1] += 0.0018523878437047758;
        result[2] += 0.0012735166425470333;
        result[3] += 0.17580318379160637;
        result[4] += 0.012503617945007236;
        result[5] += 0.00023154848046309697;
        result[6] += 0.00017366136034732273;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0.9997205923442303;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.0002794076557697681;
        result[6] += 0;
      } else {
        result[0] += 0.09409064830751578;
        result[1] += 0;
        result[2] += 0.012048192771084338;
        result[3] += 0.024670109007458405;
        result[4] += 0.8691910499139415;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0.25041070171321284;
        result[1] += 0;
        result[2] += 0.002816240319173903;
        result[3] += 0.7467730579676133;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.6035889070146819;
        result[1] += 0;
        result[2] += 0.026644915715062535;
        result[3] += 0.000543773790103317;
        result[4] += 0.3610657966286025;
        result[5] += 0.0027188689505165853;
        result[6] += 0.005437737901033171;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0.9839095872042908;
        result[1] += 0.00019155253328225267;
        result[2] += 0.0005267694665261948;
        result[3] += 0.014893209462695144;
        result[4] += 0.00043099319988506847;
        result[5] += 0;
        result[6] += 4.7888133320563166e-05;
      } else {
        result[0] += 0.030855539971949508;
        result[1] += 0;
        result[2] += 0.008415147265077139;
        result[3] += 0;
        result[4] += 0.9607293127629734;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 0.7839902230369692;
        result[1] += 0.0010388023220287198;
        result[2] += 0.0034219370608004887;
        result[3] += 0.210937977390773;
        result[4] += 0;
        result[5] += 0.00012221203788573176;
        result[6] += 0.000488848151542927;
      } else {
        result[0] += 0.16190092629883207;
        result[1] += 0;
        result[2] += 0.016109544905356425;
        result[3] += 0.7068062827225131;
        result[4] += 0.11236407571486105;
        result[5] += 0.002819170358437374;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        result[0] += 0.1358768406961178;
        result[1] += 0.0107095046854083;
        result[2] += 0.008032128514056224;
        result[3] += 0.8453815261044176;
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
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
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
        result[0] += 0.9991261398176292;
        result[1] += 0;
        result[2] += 0.0007978723404255319;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.598784194528876e-05;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 0.0035294117647058825;
        result[2] += 0;
        result[3] += 0.21176470588235294;
        result[4] += 0.7835294117647059;
        result[5] += 0.001176470588235294;
        result[6] += 0;
      } else {
        result[0] += 0.5891309263586342;
        result[1] += 0.0010552498680937664;
        result[2] += 0.007160624104921987;
        result[3] += 0.38184970226878723;
        result[4] += 0.019974372503203438;
        result[5] += 0.00045224994346875706;
        result[6] += 0.0003768749528906309;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0.20766378244746603;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5846724351050681;
        result[4] += 0.20766378244746603;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0952006294256491;
        result[1] += 0.0023603461841070024;
        result[2] += 0.006294256490952006;
        result[3] += 0.5279307631785995;
        result[4] += 0.3682140047206924;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        result[0] += 0.0078125;
        result[1] += 0.0390625;
        result[2] += 0;
        result[3] += 0.2421875;
        result[4] += 0.7109375;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.004132231404958678;
        result[2] += 0;
        result[3] += 0.05785123966942149;
        result[4] += 0.9380165289256198;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x44db3000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9991019308486754;
        result[1] += 0;
        result[2] += 0.000898069151324652;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9987608426270136;
        result[5] += 0.0012391573729863693;
        result[6] += 0;
      } else {
        result[0] += 0.019980970504281638;
        result[1] += 0.005708848715509039;
        result[2] += 0.011417697431018078;
        result[3] += 0.9612274024738344;
        result[4] += 0;
        result[5] += 0.001665080875356803;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.5936902485659656;
        result[1] += 0;
        result[2] += 0.0036647546207775657;
        result[3] += 0.40216698534098155;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00047801147227533465;
      } else {
        result[0] += 0.9687427645288261;
        result[1] += 0;
        result[2] += 0.009029868025005789;
        result[3] += 0.021532762213475342;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006946052326927529;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.9870466321243523;
        result[1] += 0;
        result[2] += 0.012953367875647668;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9997696560196561;
        result[1] += 0;
        result[2] += 0.00023034398034398035;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 0.606797281087565;
        result[1] += 0.001199520191923231;
        result[2] += 0.004958016793282688;
        result[3] += 0.33210715713714517;
        result[4] += 0.054058376649340274;
        result[5] += 0.0003998400639744103;
        result[6] += 0.00047980807676929234;
      } else {
        result[0] += 0.00327653997378768;
        result[1] += 0;
        result[2] += 0.02162516382699869;
        result[3] += 0.7955439056356488;
        result[4] += 0.17889908256880735;
        result[5] += 0.000655307994757536;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 0.20188133140376266;
        result[1] += 0.001447178002894356;
        result[2] += 0.009406657018813314;
        result[3] += 0.7872648335745297;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0012106537530266344;
        result[1] += 0.007263922518159807;
        result[2] += 0;
        result[3] += 0.09443099273607748;
        result[4] += 0.8970944309927361;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9987271570142741;
        result[1] += 0;
        result[2] += 0.0010910082734794072;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00018183471224656787;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0.006289308176100629;
        result[1] += 0.0025157232704402514;
        result[2] += 0.00880503144654088;
        result[3] += 0.6867924528301886;
        result[4] += 0.29350104821802936;
        result[5] += 0.0020964360587002098;
        result[6] += 0;
      } else {
        result[0] += 0.01247352318192516;
        result[1] += 0.00564838785596611;
        result[2] += 0.007295834313956225;
        result[3] += 0.5511885149446929;
        result[4] += 0.42292304071546244;
        result[5] += 0.0004706989879971758;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.5896026386053086;
        result[1] += 0;
        result[2] += 0.003926495994974085;
        result[3] += 0.40615674572011934;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00031411967959792684;
      } else {
        result[0] += 0.968649885583524;
        result[1] += 0;
        result[2] += 0.007780320366132723;
        result[3] += 0.022196796338672768;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0013729977116704805;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0.10648836057454185;
        result[1] += 0.0014858841010401188;
        result[2] += 0;
        result[3] += 0.6448736998514116;
        result[4] += 0.24715205547300645;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.1471729490022173;
        result[1] += 0.0002771618625277162;
        result[2] += 0.0024944567627494456;
        result[3] += 0.5130266075388027;
        result[4] += 0.33647450110864746;
        result[5] += 0.0005543237250554324;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0.9966227140444796;
        result[1] += 0.0005748571839183702;
        result[2] += 0.002335357309668379;
        result[3] += 0.0004311428879387777;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.592857399489814e-05;
      } else {
        result[0] += 0.3305084745762712;
        result[1] += 0.014830508474576272;
        result[2] += 0;
        result[3] += 0.6546610169491526;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.16208277703604806;
        result[1] += 0;
        result[2] += 0.008544726301735648;
        result[3] += 0.8275033377837117;
        result[4] += 0.0013351134846461949;
        result[5] += 0.000534045393858478;
        result[6] += 0;
      } else {
        result[0] += 0.9936034115138593;
        result[1] += 0;
        result[2] += 0.003682884279899206;
        result[3] += 0.001163016088389223;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001550688117852297;
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
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 0.0019477989871445266;
        result[1] += 0;
        result[2] += 0.005453837164004675;
        result[3] += 0.8944292948967667;
        result[4] += 0.09622126996493961;
        result[5] += 0.0019477989871445266;
        result[6] += 0;
      } else {
        result[0] += 0.3553875236294896;
        result[1] += 0;
        result[2] += 0.014177693761814745;
        result[3] += 0;
        result[4] += 0.6304347826086957;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.8803928976199471;
        result[1] += 0.0005666792595391009;
        result[2] += 0.002455610124669437;
        result[3] += 0.1163581412920287;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00022667170381564036;
      } else {
        result[0] += 0.9866153105440539;
        result[1] += 0;
        result[2] += 0.0029850746268656717;
        result[3] += 0.009340394800192586;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001059220028887819;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 0.6012145748987854;
        result[1] += 0;
        result[2] += 0.01417004048582996;
        result[3] += 0.38461538461538464;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0018744142455482662;
        result[1] += 0.014058106841611996;
        result[2] += 0;
        result[3] += 0.9840674789128397;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
        result[0] += 0.5714285714285714;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.42857142857142855;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
        result[0] += 0;
        result[1] += 0.012048192771084338;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9879518072289156;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0004033884630899556;
        result[2] += 0.005849132714804356;
        result[3] += 0.6403791851553046;
        result[4] += 0.3519564340459863;
        result[5] += 0.0014118596208148447;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.9963762147916323;
        result[1] += 0;
        result[2] += 0.00032943501894251357;
        result[3] += 0.003294350189425136;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7726775956284153;
        result[1] += 0;
        result[2] += 0.00546448087431694;
        result[3] += 0.22107728337236535;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00078064012490242;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9990390050876201;
        result[1] += 0;
        result[2] += 0.0009044657998869418;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.652911249293386e-05;
      } else {
        result[0] += 0.6882421083116131;
        result[1] += 0.003764842166232262;
        result[2] += 0.007240081088908196;
        result[3] += 0.3001737619461338;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005792064871126556;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43780000))) ) ) {
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 0;
        result[1] += 0.0002963841138114997;
        result[2] += 0;
        result[3] += 0.9306461173681091;
        result[4] += 0.06816834617664493;
        result[5] += 0.0008891523414344991;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0068201193520886615;
        result[2] += 0.01278772378516624;
        result[3] += 0;
        result[4] += 0.9799658994032395;
        result[5] += 0.00042625745950554135;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9993939700015151;
        result[1] += 0;
        result[2] += 0.000606029998484925;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7013888888888888;
        result[1] += 0.006944444444444444;
        result[2] += 0;
        result[3] += 0.2916666666666667;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.5519999999999999;
        result[1] += 0.0023050847457627113;
        result[2] += 0.007864406779661015;
        result[3] += 0.4376949152542372;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00013559322033898302;
      } else {
        result[0] += 0.9866946045049765;
        result[1] += 0;
        result[2] += 0.0037716081718177055;
        result[3] += 0.008590885280251441;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009429020429544264;
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
        result[0] += 0.004923682914820286;
        result[1] += 0.007877892663712457;
        result[2] += 0.007877892663712457;
        result[3] += 0.9793205317577548;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.987603305785124;
        result[1] += 0;
        result[2] += 0.012396694214876033;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 0.11689038031319911;
        result[1] += 0;
        result[2] += 0.0050335570469798654;
        result[3] += 0.7958612975391499;
        result[4] += 0.08165548098434004;
        result[5] += 0.0005592841163310962;
        result[6] += 0;
      } else {
        result[0] += 0.9929615592853276;
        result[1] += 0.0005053239487457137;
        result[2] += 0.0015520664140046922;
        result[3] += 0.00476448294531673;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002165674066053059;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.14505956552207427;
        result[1] += 0;
        result[2] += 0.003737444522307872;
        result[3] += 0.7052090633029666;
        result[4] += 0.14482597523943003;
        result[5] += 0.00116795141322121;
        result[6] += 0;
      } else {
        result[0] += 0.9919449901768173;
        result[1] += 0;
        result[2] += 0.004911591355599214;
        result[3] += 0.0011787819253438114;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0019646365422396855;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.9772727272727273;
        result[1] += 0;
        result[2] += 0.022727272727272728;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9996534195933456;
        result[1] += 0;
        result[2] += 0.00030807147258163895;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.850893407270487e-05;
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9991752577319588;
        result[5] += 0.0008247422680412372;
        result[6] += 0;
      } else {
        result[0] += 0.02089407191448008;
        result[1] += 0.007774538386783284;
        result[2] += 0.011661807580174927;
        result[3] += 0.9589407191448007;
        result[4] += 0;
        result[5] += 0.0007288629737609329;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
        result[0] += 0.9964568921882909;
        result[1] += 0;
        result[2] += 0.0028682301332883416;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006748776784207862;
      } else {
        result[0] += 0.4212218649517685;
        result[1] += 0;
        result[2] += 0.005144694533762058;
        result[3] += 0.5727759914255091;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008574490889603429;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 0.22919418758256274;
        result[1] += 0.004623513870541612;
        result[2] += 0;
        result[3] += 0.7661822985468957;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5507886435331231;
        result[1] += 0;
        result[2] += 0.01829652996845426;
        result[3] += 0.416403785488959;
        result[4] += 0.014511041009463722;
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
        result[0] += 0.0030211480362537764;
        result[1] += 0.03625377643504532;
        result[2] += 0;
        result[3] += 0.9607250755287009;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 0.7171204430087679;
        result[1] += 0;
        result[2] += 0.006460544531610522;
        result[3] += 0.2648823257960314;
        result[4] += 0.010383017997231195;
        result[5] += 0.0006922011998154131;
        result[6] += 0.00046146746654360867;
      } else {
        result[0] += 0.985426871230215;
        result[1] += 0.0006476946119904465;
        result[2] += 0.0007691373517386553;
        result[3] += 0.012711006760312513;
        result[4] += 0.00020240456624701452;
        result[5] += 0.00020240456624701452;
        result[6] += 4.0480913249402905e-05;
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
        result[0] += 0.3622866894197953;
        result[1] += 0;
        result[2] += 0.008191126279863483;
        result[3] += 0.5121160409556315;
        result[4] += 0.11706484641638226;
        result[5] += 0.00017064846416382255;
        result[6] += 0.00017064846416382255;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 0.9855628324347795;
        result[1] += 0.0004342005282773094;
        result[2] += 0.0012664182074754859;
        result[3] += 0.012627998697398415;
        result[4] += 3.618337735644245e-05;
        result[5] += 3.618337735644245e-05;
        result[6] += 3.618337735644245e-05;
      } else {
        result[0] += 0.330654420206659;
        result[1] += 0;
        result[2] += 0.008323765786452353;
        result[3] += 0.5835246842709529;
        result[4] += 0.07548794489092997;
        result[5] += 0.0020091848450057405;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 0.646908116920927;
        result[1] += 0;
        result[2] += 0.005007569581926168;
        result[3] += 0.34610457668568767;
        result[4] += 0.0008151857458949575;
        result[5] += 0.0003493653196692675;
        result[6] += 0.0008151857458949575;
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
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 0.15877862595419848;
        result[1] += 0.0053435114503816794;
        result[2] += 0.010687022900763359;
        result[3] += 0.8251908396946565;
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0.005504587155963303;
        result[1] += 0.01651376146788991;
        result[2] += 0;
        result[3] += 0.21834862385321102;
        result[4] += 0.7596330275229358;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.04526404023470243;
        result[4] += 0.9547359597652976;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x44c4d000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3fc00000))) ) ) {
        result[0] += 0.9992275435886118;
        result[1] += 0;
        result[2] += 0.0007724564113882145;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x439b0000))) ) ) {
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 0.02097902097902098;
        result[1] += 0.004589160839160839;
        result[2] += 0.015515734265734266;
        result[3] += 0.8076923076923077;
        result[4] += 0.15056818181818182;
        result[5] += 0.0006555944055944056;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.004373177842565598;
        result[2] += 0;
        result[3] += 0.13945578231292516;
        result[4] += 0.8561710398445093;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.9779529498706737;
        result[1] += 0;
        result[2] += 0.006651065402143121;
        result[3] += 0.014164305949008499;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001231678778174652;
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9988726042841037;
        result[5] += 0.0011273957158962795;
        result[6] += 0;
      } else {
        result[0] += 0.00186219739292365;
        result[1] += 0.004965859714463066;
        result[2] += 0.002482929857231533;
        result[3] += 0.9882060831781502;
        result[4] += 0;
        result[5] += 0.002482929857231533;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 0.9956647398843931;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.004335260115606936;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.01812688821752266;
        result[3] += 0;
        result[4] += 0.9818731117824774;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41980000))) ) ) {
        result[0] += 0.22666666666666666;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7733333333333333;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8906948394961398;
        result[1] += 0;
        result[2] += 0.003331978870377895;
        result[3] += 0.10548557496952458;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00048760666395774075;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0.9876462938881665;
        result[1] += 0.0015713047247507585;
        result[2] += 0.0022756827048114434;
        result[3] += 0.00828998699609883;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00021673168617251842;
      } else {
        result[0] += 0.6888924507132553;
        result[1] += 0;
        result[2] += 0.001763103061388043;
        result[3] += 0.3093444462253566;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 20;
  result[1] /= 20;
  result[2] /= 20;
  result[3] /= 20;
  result[4] /= 20;
  result[5] /= 20;
  result[6] /= 20;
  
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
    

    FILE* file = fopen("./codegen/dataset_148/split_1/test_data.csv", "r");
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
