
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.9821917808219178;
          result[1] += 0;
          result[2] += 0.01780821917808219;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7321428571428571;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0.017857142857142856;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41500000))) ) ) {
          result[0] += 0.170261066969353;
          result[1] += 0.032917139614074914;
          result[2] += 0;
          result[3] += 0.7968217934165721;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0031128404669260703;
          result[3] += 0.9968871595330739;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
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
          result[0] += 0.9966634890371783;
          result[1] += 0;
          result[2] += 0.002859866539561487;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00047664442326024784;
        } else {
          result[0] += 0.9997098806366048;
          result[1] += 0;
          result[2] += 0.00029011936339522546;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
          result[0] += 0.6525963149078727;
          result[1] += 0;
          result[2] += 0.007035175879396985;
          result[3] += 0.3005025125628141;
          result[4] += 0.03986599664991625;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8621657312644438;
          result[1] += 0.0021459227467811163;
          result[2] += 0.003631561571475735;
          result[3] += 0.12941564872895348;
          result[4] += 0.00033014196104324867;
          result[5] += 0.0006602839220864973;
          result[6] += 0.0016507098052162433;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0;
          result[1] += 0.0013536379018612521;
          result[2] += 0.007445008460236886;
          result[3] += 0.8406091370558376;
          result[4] += 0.150253807106599;
          result[5] += 0.00033840947546531303;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6764705882352942;
          result[4] += 0.3235294117647059;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41700000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3fc00000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0.9998738647830474;
          result[1] += 0;
          result[2] += 0.00012613521695257316;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9979601748421564;
          result[1] += 0;
          result[2] += 0.0020398251578436135;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0.34198813056379823;
          result[1] += 0.004080118694362018;
          result[2] += 0.009643916913946587;
          result[3] += 0.6435459940652819;
          result[4] += 0.000741839762611276;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0005211047420531526;
          result[1] += 0.004689942678478374;
          result[2] += 0;
          result[3] += 0.11933298593017197;
          result[4] += 0.8754559666492965;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
          result[0] += 0.9318034487229353;
          result[1] += 0.0009075586671852716;
          result[2] += 0.003241280954233113;
          result[3] += 0.06314015298846104;
          result[4] += 0;
          result[5] += 0.0001296512381693245;
          result[6] += 0.0007779074290159471;
        } else {
          result[0] += 0.010574018126888218;
          result[1] += 0;
          result[2] += 0.013595166163141994;
          result[3] += 0.8595166163141994;
          result[4] += 0.11404833836858005;
          result[5] += 0.0022658610271903325;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
          result[0] += 0;
          result[1] += 0.0006749915626054674;
          result[2] += 0;
          result[3] += 0.9993250084373946;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.35294117647058826;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0.14705882352941177;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0030864197530864196;
          result[3] += 0;
          result[4] += 0.9969135802469136;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.9976804870977095;
          result[1] += 0;
          result[2] += 0.002319512902290519;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9997028820441716;
          result[1] += 0;
          result[2] += 0.0002971179558284639;
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
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.6623225053491538;
          result[1] += 0.0027232056020229526;
          result[2] += 0.007780587434351294;
          result[3] += 0.3214355183816378;
          result[4] += 0.005446411204045905;
          result[5] += 0;
          result[6] += 0.0002917720287881735;
        } else {
          result[0] += 0;
          result[1] += 0.0006786562606040041;
          result[2] += 0;
          result[3] += 0.999321343739396;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40600000))) ) ) {
          result[0] += 0.6893939393939393;
          result[1] += 0;
          result[2] += 0.05492424242424241;
          result[3] += 0;
          result[4] += 0.25189393939393934;
          result[5] += 0.003787878787878787;
          result[6] += 0;
        } else {
          result[0] += 0.5789871504157219;
          result[1] += 0;
          result[2] += 0.012093726379440667;
          result[3] += 0.0015117157974300834;
          result[4] += 0.4043839758125473;
          result[5] += 0.0007558578987150417;
          result[6] += 0.002267573696145125;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
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
          result[3] += 0.8025751072961373;
          result[4] += 0.19742489270386265;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
          result[0] += 0.002257336343115124;
          result[1] += 0.014672686230248307;
          result[2] += 0;
          result[3] += 0.11963882618510158;
          result[4] += 0.863431151241535;
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
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
          result[0] += 0.8;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9993899416631715;
          result[1] += 0;
          result[2] += 0.0005719296907766805;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 3.81286460517787e-05;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9170073083116562;
          result[1] += 0.0027251331599157692;
          result[2] += 0.0027251331599157692;
          result[3] += 0.07617985878855446;
          result[4] += 0;
          result[5] += 0.00012386968908708042;
          result[6] += 0.001238696890870804;
        } else {
          result[0] += 0.16365824308062576;
          result[1] += 0;
          result[2] += 0.015643802647412757;
          result[3] += 0.7067789811472122;
          result[4] += 0.11271560369033293;
          result[5] += 0.0012033694344163659;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0;
          result[1] += 0.0010135135135135136;
          result[2] += 0.009121621621621622;
          result[3] += 0.9898648648648649;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.001447178002894356;
          result[3] += 0;
          result[4] += 0.9971056439942113;
          result[5] += 0.001447178002894356;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.026758409785932722;
          result[2] += 0;
          result[3] += 0.9732415902140673;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9656862745098039;
          result[1] += 0;
          result[2] += 0.03431372549019608;
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
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42990000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41c80000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
          result[0] += 0.61738746690203;
          result[1] += 0;
          result[2] += 0.0004413062665489849;
          result[3] += 0.38128861429832295;
          result[4] += 0.0008826125330979698;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7661469933184856;
          result[1] += 0;
          result[2] += 0.0038975501113585748;
          result[3] += 0.22828507795100222;
          result[4] += 0;
          result[5] += 0.0005567928730512249;
          result[6] += 0.0011135857461024498;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424a0000))) ) ) {
          result[0] += 0.9844876022963235;
          result[1] += 0.0007328691828508611;
          result[2] += 0.000529294409836733;
          result[3] += 0.014087374292577663;
          result[4] += 8.142990920565123e-05;
          result[5] += 4.071495460282562e-05;
          result[6] += 4.071495460282562e-05;
        } else {
          result[0] += 0.8734643734643734;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.12653562653562653;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
          result[0] += 0.18925100057175528;
          result[1] += 0.012006861063464836;
          result[2] += 0;
          result[3] += 0.7987421383647799;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5943025540275049;
          result[1] += 0;
          result[2] += 0.06483300589390963;
          result[3] += 0.34086444007858546;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.038028169014084505;
          result[3] += 0;
          result[4] += 0.9605633802816902;
          result[5] += 0.0014084507042253522;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.002173913043478261;
          result[3] += 0.9978260869565218;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0.9764837625979843;
          result[1] += 0;
          result[2] += 0.015677491601343786;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.007838745800671893;
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
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x43260000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9967381174277726;
          result[1] += 0;
          result[2] += 0.0027958993476234857;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00046598322460391424;
        } else {
          result[0] += 0.9997096279089062;
          result[1] += 0;
          result[2] += 0.00029037209109387317;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.431678486997636;
          result[1] += 0.0013002364066193855;
          result[2] += 0.005791962174940899;
          result[3] += 0.47813238770685584;
          result[4] += 0.0822695035460993;
          result[5] += 0.0004728132387706856;
          result[6] += 0.00035460992907801426;
        } else {
          result[0] += 0.9711836151464635;
          result[1] += 0;
          result[2] += 0.00523934270064301;
          result[3] += 0.021433674684448678;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0021433674684448677;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 0.0054869684499314125;
          result[1] += 0;
          result[2] += 0.00823045267489712;
          result[3] += 0.9753086419753086;
          result[4] += 0.010973936899862825;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02389937106918239;
          result[3] += 0.6251572327044025;
          result[4] += 0.34968553459119495;
          result[5] += 0.0012578616352201257;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42df0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
          result[0] += 0.13070283600493218;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6621454993834772;
          result[4] += 0.20715166461159062;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0.04504504504504504;
          result[1] += 0.10810810810810811;
          result[2] += 0;
          result[3] += 0.36036036036036034;
          result[4] += 0.4864864864864865;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05303030303030303;
          result[4] += 0.946969696969697;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41200000))) ) ) {
          result[0] += 0.1103448275862069;
          result[1] += 0.01793103448275862;
          result[2] += 0.006896551724137931;
          result[3] += 0.8648275862068966;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.12448979591836734;
          result[4] += 0.8755102040816326;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.005594405594405594;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9944055944055944;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.446164199192463;
          result[1] += 0;
          result[2] += 0.014131897711978465;
          result[3] += 0.5383580080753702;
          result[4] += 0.0013458950201884253;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.17407071622846781;
          result[1] += 0.010879419764279238;
          result[2] += 0;
          result[3] += 0.815049864007253;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
          result[0] += 0.003289473684210526;
          result[1] += 0.05263157894736842;
          result[2] += 0;
          result[3] += 0.05592105263157895;
          result[4] += 0.8881578947368421;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0.3119533527696793;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.09912536443148688;
          result[4] += 0.5889212827988338;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0.045454545454545456;
          result[1] += 0;
          result[2] += 0.45454545454545453;
          result[3] += 0.5;
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
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41c80000))) ) ) {
          result[0] += 0.6731843575418994;
          result[1] += 0;
          result[2] += 0.002793296089385475;
          result[3] += 0.31340782122905025;
          result[4] += 0.01005586592178771;
          result[5] += 0;
          result[6] += 0.0005586592178770949;
        } else {
          result[0] += 0.9776247848537005;
          result[1] += 0;
          result[2] += 0.0004917629702483403;
          result[3] += 0.021760511433489057;
          result[4] += 0;
          result[5] += 0.00012294074256208508;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0.2773681225184345;
          result[1] += 0;
          result[2] += 0.014180374361883154;
          result[3] += 0.6074872376630743;
          result[4] += 0.10096426545660805;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8767660910518054;
          result[1] += 0;
          result[2] += 0.005494505494505495;
          result[3] += 0.10832025117739404;
          result[4] += 0.005494505494505495;
          result[5] += 0.0007849293563579278;
          result[6] += 0.0031397174254317113;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.15400624349635797;
          result[1] += 0.002081165452653486;
          result[2] += 0.011446409989594173;
          result[3] += 0.8293444328824141;
          result[4] += 0;
          result[5] += 0.003121748178980229;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 0.9987995853112893;
          result[1] += 0;
          result[2] += 0.0010367217766137392;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001636929120969062;
        } else {
          result[0] += 0.7036303630363038;
          result[1] += 0.0019801980198019807;
          result[2] += 0.003135313531353136;
          result[3] += 0.29059405940594063;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006600660066006602;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41080000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9901960784313726;
          result[5] += 0.00980392156862745;
          result[6] += 0;
        } else {
          result[0] += 0.14893617021276595;
          result[1] += 0;
          result[2] += 0.010315925209542231;
          result[3] += 0.8401031592520954;
          result[4] += 0;
          result[5] += 0.0006447453255963894;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 0.9944237918215614;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0055762081784386614;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.00041946308724832214;
          result[2] += 0.007130872483221477;
          result[3] += 0.7462248322147651;
          result[4] += 0.24538590604026847;
          result[5] += 0.0008389261744966443;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x43100000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.010321100917431193;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9896788990825688;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.997228637413395;
          result[1] += 0;
          result[2] += 0.002771362586605081;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9997163925127623;
          result[1] += 0;
          result[2] += 0.0002836074872376631;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0;
          result[1] += 0.041666666666666664;
          result[2] += 0;
          result[3] += 0.9583333333333334;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8739837398373984;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.12601626016260162;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9887640449438202;
          result[1] += 0;
          result[2] += 0.011235955056179775;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9043365847925726;
          result[1] += 0.002820542954518745;
          result[2] += 0.009049241979080974;
          result[3] += 0.08308849453519802;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007051357386296862;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.005784526391901663;
          result[3] += 0.9942154736080984;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.008733624454148471;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.004366812227074236;
          result[4] += 0.9868995633187773;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.23529411764705882;
          result[2] += 0;
          result[3] += 0.36764705882352944;
          result[4] += 0.39705882352941174;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
          result[0] += 0.1875;
          result[1] += 0.007425742574257425;
          result[2] += 0;
          result[3] += 0.8038366336633663;
          result[4] += 0.0012376237623762376;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5128205128205129;
          result[1] += 0;
          result[2] += 0.02118171683389075;
          result[3] += 0.4659977703455965;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0.11570247933884298;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03305785123966942;
          result[4] += 0.8512396694214877;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.025974025974025976;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.974025974025974;
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
          result[0] += 0.29441624365482233;
          result[1] += 0;
          result[2] += 0.04060913705583756;
          result[3] += 0.6649746192893401;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41dc0000))) ) ) {
          result[0] += 0.9899497487437185;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.010050251256281407;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0012195121951219512;
          result[2] += 0.003048780487804878;
          result[3] += 0.9073170731707317;
          result[4] += 0.08780487804878048;
          result[5] += 0.0006097560975609756;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41c80000))) ) ) {
          result[0] += 0.956017729287419;
          result[1] += 0;
          result[2] += 0.007500852369587453;
          result[3] += 0.03511762700306853;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0013637913399249914;
        } else {
          result[0] += 0.9980918354918599;
          result[1] += 0.00056838942795664;
          result[2] += 0.0005277901831025943;
          result[3] += 0.0007713856522268686;
          result[4] += 0;
          result[5] += 0;
          result[6] += 4.059924485404571e-05;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.8803267045454546;
          result[1] += 0;
          result[2] += 0.006036931818181818;
          result[3] += 0.10653409090909091;
          result[4] += 0.0035511363636363635;
          result[5] += 0.0017755681818181818;
          result[6] += 0.0017755681818181818;
        } else {
          result[0] += 0.5386165211551377;
          result[1] += 0;
          result[2] += 0.004365345869711216;
          result[3] += 0.4570181329751511;
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 0.9959677419354839;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004032258064516129;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0012195121951219512;
          result[3] += 0.2329268292682927;
          result[4] += 0.7646341463414634;
          result[5] += 0.0012195121951219512;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x42d80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0006988120195667365;
          result[2] += 0.004542278127183787;
          result[3] += 0.9703004891684137;
          result[4] += 0.02236198462613557;
          result[5] += 0.0020964360587002098;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9795918367346939;
          result[4] += 0.02040816326530612;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.018518518518518517;
          result[4] += 0.9814814814814815;
          result[5] += 0;
          result[6] += 0;
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
          result[0] += 0;
          result[1] += 0.014722536806342015;
          result[2] += 0;
          result[3] += 0.028312570781426953;
          result[4] += 0.956964892412231;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3fc00000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9916792738275341;
          result[1] += 0;
          result[2] += 0.00832072617246596;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9992678909157464;
          result[1] += 0;
          result[2] += 0.0007321090842535538;
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
          result[0] += 0.998015873015873;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001984126984126984;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0.9887563884156729;
          result[1] += 0.002555366269165247;
          result[2] += 0.0068143100511073255;
          result[3] += 0.001362862010221465;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005110732538330494;
        } else {
          result[0] += 0.41779175143332714;
          result[1] += 0;
          result[2] += 0.0068429813205104495;
          result[3] += 0.572960976511929;
          result[4] += 0;
          result[5] += 0.000554836323284631;
          result[6] += 0.0018494544109487702;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0.2857142857142857;
          result[1] += 0.7142857142857143;
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
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0.9977362761743067;
          result[1] += 0;
          result[2] += 0.0022637238256932655;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9877675840978594;
          result[1] += 0;
          result[2] += 0.009174311926605505;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0030581039755351682;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.9998343548119927;
          result[1] += 0;
          result[2] += 0.00016564518800728838;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9991747813170491;
          result[1] += 0;
          result[2] += 0.000825218682950982;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 0.018462773429660847;
          result[1] += 0.005619104956853301;
          result[2] += 0.011037527593818985;
          result[3] += 0.7750351194059804;
          result[4] += 0.1882400160545856;
          result[5] += 0.0016054585591009432;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.022035676810073453;
          result[2] += 0;
          result[3] += 0.09653725078698845;
          result[4] += 0.881427072402938;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.985116756479343;
          result[1] += 0;
          result[2] += 0.0050038491147036184;
          result[3] += 0.008724659994867847;
          result[4] += 0;
          result[5] += 0.00012830382345393893;
          result[6] += 0.0010264305876315114;
        } else {
          result[0] += 0.8708609271523179;
          result[1] += 0.006622516556291391;
          result[2] += 0.03642384105960265;
          result[3] += 0.08609271523178808;
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
          result[2] += 0.005917159763313609;
          result[3] += 0.9940828402366864;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45afc400))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40900000))) ) ) {
          result[0] += 0.9993816345460167;
          result[1] += 0;
          result[2] += 0.0005668349994846954;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5.153045449860868e-05;
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x4613de00))) ) ) {
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9986737400530504;
          result[5] += 0.001326259946949602;
          result[6] += 0;
        } else {
          result[0] += 0.02520790020790021;
          result[1] += 0.007016632016632017;
          result[2] += 0.014812889812889814;
          result[3] += 0.9508835758835759;
          result[4] += 0;
          result[5] += 0.002079002079002079;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0.019963702359346643;
          result[2] += 0;
          result[3] += 0.5045372050816697;
          result[4] += 0.47549909255898365;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.01939799331103679;
          result[4] += 0.9806020066889632;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0.49022869022869026;
          result[1] += 0;
          result[2] += 0.0010395010395010396;
          result[3] += 0.5081081081081081;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006237006237006237;
        } else {
          result[0] += 0.9388770433546554;
          result[1] += 0;
          result[2] += 0.00568585643212509;
          result[3] += 0.05472636815920399;
          result[4] += 0;
          result[5] += 0.0007107320540156362;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42100000))) ) ) {
          result[0] += 0.9915927136851939;
          result[1] += 0;
          result[2] += 0.006305464736104624;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0021018215787015414;
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
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41280000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.006355932203389831;
          result[1] += 0.005296610169491525;
          result[2] += 0.011652542372881356;
          result[3] += 0.9766949152542372;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
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
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a80000))) ) ) {
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1377952755905512;
          result[4] += 0.8622047244094488;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.002129925452609159;
          result[1] += 0.013844515441959531;
          result[2] += 0;
          result[3] += 0.003194888178913738;
          result[4] += 0.9808306709265175;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.0020026702269692926;
          result[1] += 0.0006675567423230974;
          result[2] += 0;
          result[3] += 0.9846461949265688;
          result[4] += 0.009345794392523364;
          result[5] += 0.0033377837116154874;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.18840579710144928;
          result[3] += 0;
          result[4] += 0.8115942028985508;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0.961352657004831;
          result[1] += 0;
          result[2] += 0.03864734299516908;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.001524390243902439;
          result[3] += 0;
          result[4] += 0.9984756097560976;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
          result[0] += 0.7180451127819549;
          result[1] += 0;
          result[2] += 0.0037593984962406013;
          result[3] += 0.2781954887218045;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9970736405393391;
          result[1] += 0.0007408504963698325;
          result[2] += 0.0009631056452807824;
          result[3] += 0.0011483182693732405;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7.408504963698325e-05;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0.44795138208194474;
          result[1] += 0;
          result[2] += 0.002744559890217604;
          result[3] += 0.5493040580278377;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9315716272600836;
          result[1] += 0;
          result[2] += 0.0052851182197496535;
          result[3] += 0.06203059805285119;
          result[4] += 0;
          result[5] += 0.0005563282336578583;
          result[6] += 0.0005563282336578583;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41dc0000))) ) ) {
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41300000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.5277777777777778;
          result[2] += 0.4444444444444444;
          result[3] += 0.027777777777777776;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0.9551282051282052;
          result[1] += 0.03205128205128205;
          result[2] += 0;
          result[3] += 0.01282051282051282;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.10850439882697947;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8914956011730205;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.9883331532894026;
          result[1] += 0;
          result[2] += 0.00118828994274603;
          result[3] += 0.010154477692556984;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003240790752943718;
        } else {
          result[0] += 0.5511402902557014;
          result[1] += 0;
          result[2] += 0.007601935038009675;
          result[3] += 0.43711126468555633;
          result[4] += 0;
          result[5] += 0.00138217000691085;
          result[6] += 0.0027643400138217;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x41b40000))) ) ) {
          result[0] += 0.9186178577669055;
          result[1] += 0.0009173510396645116;
          result[2] += 0.0028831032675170364;
          result[3] += 0.07753800454307182;
          result[4] += 0;
          result[5] += 0;
          result[6] += 4.368338284116722e-05;
        } else {
          result[0] += 0.8987574781408192;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.10124252185918085;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0;
          result[1] += 0.00032425421530479895;
          result[2] += 0;
          result[3] += 0.9980544747081712;
          result[4] += 0;
          result[5] += 0.001621271076523995;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.2926829268292683;
          result[2] += 0.5609756097560976;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.14634146341463414;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0.9950348362296787;
          result[1] += 0.0010410827260350763;
          result[2] += 0.003283414751341394;
          result[3] += 8.00832866180828e-05;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005605830063265796;
        } else {
          result[0] += 0.08333333333333333;
          result[1] += 0.9166666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0.9517391304347826;
          result[1] += 0;
          result[2] += 0.0008695652173913044;
          result[3] += 0.04739130434782609;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9953220582943505;
          result[1] += 0;
          result[2] += 0.0013494062612450521;
          result[3] += 0.003328535444404462;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0.11655172413793104;
          result[1] += 0;
          result[2] += 0.011034482758620689;
          result[3] += 0.8710344827586207;
          result[4] += 0;
          result[5] += 0.001379310344827586;
          result[6] += 0;
        } else {
          result[0] += 0.24827305973181635;
          result[1] += 0;
          result[2] += 0.0016253555465258025;
          result[3] += 0.7501015847216579;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x433e8000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9909353905496625;
          result[1] += 0;
          result[2] += 0.006171648987463838;
          result[3] += 0.0015429122468659595;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0013500482160077145;
        }
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
    

    FILE* file = fopen("./codegen/dataset_148/split_2/test_data.csv", "r");
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
