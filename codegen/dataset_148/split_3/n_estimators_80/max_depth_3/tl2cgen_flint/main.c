
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
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0.0005701254275940707;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.999429874572406;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.18165467625899281;
        result[1] += 0.0023124357656731757;
        result[2] += 0.0012846865364850976;
        result[3] += 0.8142343268242549;
        result[4] += 0;
        result[5] += 0.0005138746145940391;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 0.9945139111538597;
        result[1] += 0.0006056072102881976;
        result[2] += 0.0024224288411527906;
        result[3] += 0.0022086851198746035;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000249367674824552;
      } else {
        result[0] += 0.002898550724637681;
        result[1] += 0.014492753623188406;
        result[2] += 0;
        result[3] += 0.9826086956521739;
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
        result[3] += 0.9977707006369426;
        result[4] += 0.001910828025477707;
        result[5] += 0.0003184713375796178;
        result[6] += 0;
      } else {
        result[0] += 0.4764521193092622;
        result[1] += 0;
        result[2] += 0.01726844583987441;
        result[3] += 0;
        result[4] += 0.5062794348508635;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 0.9979116945107399;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.002088305489260143;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9922248803827751;
        result[1] += 0;
        result[2] += 0.006578947368421052;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0011961722488038277;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 0.3633942161339422;
        result[1] += 0.002663622526636225;
        result[2] += 0.013318112633181126;
        result[3] += 0.619482496194825;
        result[4] += 0.001141552511415525;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0005254860746190226;
        result[1] += 0.005254860746190226;
        result[2] += 0;
        result[3] += 0.1418812401471361;
        result[4] += 0.8523384130320546;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        result[0] += 0.9757765946193717;
        result[1] += 0.0004583759387891823;
        result[2] += 0.0009167518775783646;
        result[3] += 0.022636719438665773;
        result[4] += 3.525968759916787e-05;
        result[5] += 0;
        result[6] += 0.00017629843799583936;
      } else {
        result[0] += 0.02406417112299465;
        result[1] += 0;
        result[2] += 0.015151515151515152;
        result[3] += 0.8511586452762924;
        result[4] += 0.10784313725490197;
        result[5] += 0.0017825311942959;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0.45707705192629816;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5429229480737019;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.19686162624821682;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8031383737517832;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42200000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.048366013071895426;
        result[3] += 0;
        result[4] += 0.9437908496732026;
        result[5] += 0.00784313725490196;
        result[6] += 0;
      } else {
        result[0] += 0.9938347718865598;
        result[1] += 0;
        result[2] += 0.004315659679408138;
        result[3] += 0.0012330456226880395;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006165228113440197;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9986234743507387;
        result[1] += 0;
        result[2] += 0.001284757272643847;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9.176837661741764e-05;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 0.01619778346121057;
        result[1] += 0.00639386189258312;
        result[2] += 0.014705882352941176;
        result[3] += 0.8079710144927537;
        result[4] += 0.15366581415174765;
        result[5] += 0.0010656436487638534;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.004364694471387003;
        result[2] += 0;
        result[3] += 0.14161008729388944;
        result[4] += 0.8540252182347235;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.9849956954864099;
        result[1] += 0;
        result[2] += 0.004181527487393924;
        result[3] += 0.009715902103062352;
        result[4] += 0;
        result[5] += 0.00012298610257040953;
        result[6] += 0.0009838888205632762;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0007390983000739098;
        result[3] += 0.9992609016999261;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0.0603448275862069;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9396551724137931;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.4238386748289521;
        result[1] += 0.0025207057976233344;
        result[2] += 0.014043932301044292;
        result[3] += 0.5523946705077422;
        result[4] += 0.007202016564638099;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0.008620689655172414;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7758620689655172;
        result[4] += 0.21551724137931033;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0011117287381878821;
        result[1] += 0.007782101167315175;
        result[2] += 0;
        result[3] += 0.07893274041133963;
        result[4] += 0.9121734296831573;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 0.12002376708259062;
        result[1] += 0.0005941770647653001;
        result[2] += 0.0053475935828877;
        result[3] += 0.8538324420677362;
        result[4] += 0.0184194890077243;
        result[5] += 0.0017825311942959;
        result[6] += 0;
      } else {
        result[0] += 0.9939514641882423;
        result[1] += 0.0004425757911042267;
        result[2] += 0.0014752526370140889;
        result[3] += 0.003946300804012688;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001844065796267611;
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
        result[0] += 0.35515111036900987;
        result[1] += 0;
        result[2] += 0.005677074636834196;
        result[3] += 0.5259642678243446;
        result[4] += 0.11203873768575723;
        result[5] += 0.0006678911337451996;
        result[6] += 0.0005009183503088997;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.8949211908931699;
        result[1] += 0;
        result[2] += 0.0008756567425569177;
        result[3] += 0.09661412726211326;
        result[4] += 0.0072971395213076475;
        result[5] += 9.72951936174353e-05;
        result[6] += 0.0001945903872348706;
      } else {
        result[0] += 0.5172638436482084;
        result[1] += 0;
        result[2] += 0.013355048859934854;
        result[3] += 0.40781758957654723;
        result[4] += 0.06026058631921824;
        result[5] += 0.000977198697068404;
        result[6] += 0.0003257328990228013;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9988577644819147;
        result[1] += 0;
        result[2] += 0.0010878433505575197;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.439216752787599e-05;
      } else {
        result[0] += 0.5432763957354122;
        result[1] += 0.001834231342428064;
        result[2] += 0.005846612403989454;
        result[3] += 0.3700561733348619;
        result[4] += 0.07818411097099623;
        result[5] += 0.000343918376705262;
        result[6] += 0.000458557835607016;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 0.17846153846153845;
        result[1] += 0.011538461538461539;
        result[2] += 0.005384615384615384;
        result[3] += 0.8046153846153846;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
        result[0] += 0.0010672358591248667;
        result[1] += 0.013874066168623266;
        result[2] += 0;
        result[3] += 0.1728922091782284;
        result[4] += 0.8121664887940235;
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
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        result[0] += 0.1253854059609455;
        result[1] += 0.000685166152792052;
        result[2] += 0.004110996916752312;
        result[3] += 0.7728674203494346;
        result[4] += 0.09455292908530316;
        result[5] += 0.0023980815347721817;
        result[6] += 0;
      } else {
        result[0] += 0.9905278842060451;
        result[1] += 0.0007095217823187171;
        result[2] += 0.0018802327231446005;
        result[3] += 0.006634028664680006;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000248332623811551;
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
        result[0] += 0.3591633807646151;
        result[1] += 0;
        result[2] += 0.010114863706497515;
        result[3] += 0.5175724327104406;
        result[4] += 0.11229213097891308;
        result[5] += 0.0006857534716269502;
        result[6] += 0.00017143836790673754;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42da0000))) ) ) {
        result[0] += 0.15403624382207579;
        result[1] += 0.006589785831960461;
        result[2] += 0;
        result[3] += 0.8393739703459637;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.011627906976744186;
        result[2] += 0;
        result[3] += 0.003875968992248062;
        result[4] += 0.9844961240310077;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 0.009216589861751152;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.019201228878648235;
        result[4] += 0.9715821812596006;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.30742049469964666;
        result[1] += 0;
        result[2] += 0.038869257950530034;
        result[3] += 0.6537102473498233;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
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
        result[4] += 0.9956140350877193;
        result[5] += 0.0043859649122807015;
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
        result[1] += 0.003157562361856647;
        result[2] += 0.007262393432270288;
        result[3] += 0.9873697505525735;
        result[4] += 0;
        result[5] += 0.002210293653299653;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 0.9965128950236106;
        result[1] += 0.0006175081729022884;
        result[2] += 0.0024700326916091537;
        result[3] += 0.00018162005085361425;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00021794406102433709;
      } else {
        result[0] += 0.006756756756756757;
        result[1] += 0.033783783783783786;
        result[2] += 0;
        result[3] += 0.9594594594594594;
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
        result[0] += 0.41417040358744395;
        result[1] += 0;
        result[2] += 0.006995515695067265;
        result[3] += 0.5773991031390134;
        result[4] += 0;
        result[5] += 0.00017937219730941703;
        result[6] += 0.0012556053811659193;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45b71400))) ) ) {
        result[0] += 0.9993107937358808;
        result[1] += 0;
        result[2] += 0.0006892062641191561;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 0.6077278783603731;
        result[1] += 0.0019594012069911433;
        result[2] += 0.006191707814092014;
        result[3] += 0.3276118818089192;
        result[4] += 0.05549024218198918;
        result[5] += 0.0007837604827964574;
        result[6] += 0.00023512814483893723;
      } else {
        result[0] += 0.007217847769028871;
        result[1] += 0;
        result[2] += 0.01706036745406824;
        result[3] += 0.797244094488189;
        result[4] += 0.17585301837270342;
        result[5] += 0.0026246719160104987;
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
        result[0] += 0.15151515151515152;
        result[1] += 0.01594896331738437;
        result[2] += 0;
        result[3] += 0.8325358851674641;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 0.3523489932885906;
        result[1] += 0;
        result[2] += 0.010067114093959731;
        result[3] += 0.6375838926174496;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.019952114924181964;
        result[4] += 0.9800478850758181;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9266352386564526;
        result[4] += 0.07307012374779022;
        result[5] += 0.0002946375957572186;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.004745470232959448;
        result[2] += 0.013805004314063849;
        result[3] += 0;
        result[4] += 0.9788610871440897;
        result[5] += 0.0025884383088869713;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 0.9948559670781894;
        result[1] += 0;
        result[2] += 0.004629629629629629;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00051440329218107;
      } else {
        result[0] += 0.9995760196726872;
        result[1] += 0;
        result[2] += 0.00042398032731281267;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0.9393697008478643;
        result[1] += 0.0035194368900975845;
        result[2] += 0.007038873780195169;
        result[3] += 0.04943209086546153;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006398976163813789;
      } else {
        result[0] += 0.4123984123984124;
        result[1] += 0;
        result[2] += 0.005292005292005292;
        result[3] += 0.5817425817425818;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000567000567000567;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 0.9915123456790124;
        result[1] += 0;
        result[2] += 0.008487654320987654;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9987146529562982;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0012853470437017994;
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
        result[0] += 0.999627622160619;
        result[1] += 0;
        result[2] += 0.00037237783938102526;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 0.9148409456615918;
        result[1] += 0.0012377769525931427;
        result[2] += 0.003589553162520114;
        result[3] += 0.07859883648966456;
        result[4] += 0;
        result[5] += 0.0003713330857779428;
        result[6] += 0.001361554647852457;
      } else {
        result[0] += 0.1172668513388735;
        result[1] += 0.00443213296398892;
        result[2] += 0.007571560480147738;
        result[3] += 0.5447830101569714;
        result[4] += 0.3255771006463527;
        result[5] += 0.0003693444136657433;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        result[0] += 0;
        result[1] += 0.0009800718719372753;
        result[2] += 0.004573668735707285;
        result[3] += 0.9944462593923554;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.02282453637660485;
        result[3] += 0;
        result[4] += 0.9771754636233951;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x41180000))) ) ) {
        result[0] += 0.415929203539823;
        result[1] += 0.0028157683024939663;
        result[2] += 0.010458567980691875;
        result[3] += 0.5607401448109413;
        result[4] += 0.01005631536604988;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.2978723404255319;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7021276595744681;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.00234192037470726;
        result[1] += 0.00624512099921936;
        result[2] += 0;
        result[3] += 0.21467603434816548;
        result[4] += 0.7767369242779079;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 0.1288056206088993;
        result[1] += 0;
        result[2] += 0.00819672131147541;
        result[3] += 0.8372365339578455;
        result[4] += 0.02107728337236534;
        result[5] += 0.00468384074941452;
        result[6] += 0;
      } else {
        result[0] += 0.9939945404913558;
        result[1] += 0.00040036396724294816;
        result[2] += 0.0012010919017288444;
        result[3] += 0.004331210191082803;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.279344858962693e-05;
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
        result[0] += 0.36854866643574646;
        result[1] += 0;
        result[2] += 0.009525458953931417;
        result[3] += 0.5050225147211639;
        result[4] += 0.11603740907516454;
        result[5] += 0.0005195704883962591;
        result[6] += 0.00034638032559750607;
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
        result[0] += 0.49936948297604034;
        result[1] += 0;
        result[2] += 0.012610340479192938;
        result[3] += 0.4880201765447667;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.14769647696476965;
        result[1] += 0.014905149051490514;
        result[2] += 0.007452574525745257;
        result[3] += 0.8299457994579946;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9995039682539683;
        result[1] += 0;
        result[2] += 0.000496031746031746;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5358822326722553;
        result[1] += 0;
        result[2] += 0.012471887139644247;
        result[3] += 0.40686976078511555;
        result[4] += 0.04395829073809038;
        result[5] += 0.00020445716622367616;
        result[6] += 0.0006133714986710285;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9990619654582574;
        result[1] += 0;
        result[2] += 0.0008276775368316504;
        result[3] += 0;
        result[4] += 0.00011035700491088672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5656290531776913;
        result[1] += 0.002464332036316472;
        result[2] += 0.003501945525291829;
        result[3] += 0.3522697795071336;
        result[4] += 0.07561608300907911;
        result[5] += 0.0005188067444876783;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41780000))) ) ) {
        result[0] += 0.001142857142857143;
        result[1] += 0.005142857142857143;
        result[2] += 0.006285714285714286;
        result[3] += 0;
        result[4] += 0.9857142857142858;
        result[5] += 0.0017142857142857142;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0003155569580309246;
        result[2] += 0.0018933417481855476;
        result[3] += 0.9971599873777217;
        result[4] += 0;
        result[5] += 0.0006311139160618492;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 0.997364953886693;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.002635046113306983;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.015691868758915834;
        result[3] += 0;
        result[4] += 0.9843081312410842;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.833823369269302;
        result[1] += 0;
        result[2] += 0.002504628117173037;
        result[3] += 0.1635631057388653;
        result[4] += 0;
        result[5] += 0.00010889687465969727;
        result[6] += 0;
      } else {
        result[0] += 0.9942493946731236;
        result[1] += 0;
        result[2] += 0.0027239709443099276;
        result[3] += 0.0024213075060532693;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006053268765133173;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0.9900748454279206;
        result[1] += 0.0008135372600065083;
        result[2] += 0.0026575550493545936;
        result[3] += 0.006345590628050765;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010847163466753444;
      } else {
        result[0] += 0.6865719819238219;
        result[1] += 0;
        result[2] += 0.0033892834086507425;
        result[3] += 0.31003873466752746;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9983870967741936;
        result[5] += 0.0016129032258064516;
        result[6] += 0;
      } else {
        result[0] += 0.1837748344370861;
        result[1] += 0.004415011037527594;
        result[2] += 0.011589403973509934;
        result[3] += 0.7985651214128036;
        result[4] += 0;
        result[5] += 0.0016556291390728477;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.9959060547295842;
        result[1] += 0;
        result[2] += 0.001185089420383538;
        result[3] += 0.0028011204481792717;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010773540185304891;
      } else {
        result[0] += 0.5429362880886427;
        result[1] += 0;
        result[2] += 0.00865650969529086;
        result[3] += 0.4456371191135734;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.002770083102493075;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x41080000))) ) ) {
        result[0] += 0.5894736842105264;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.38947368421052636;
        result[4] += 0.02105263157894737;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8477791830964958;
        result[1] += 0.0007811918756044937;
        result[2] += 0.0025295736924335985;
        result[3] += 0.1229447213748977;
        result[4] += 0.025593333829328175;
        result[5] += 0.00011159883937207053;
        result[6] += 0.00026039729186816456;
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
        result[0] += 0.1388888888888889;
        result[1] += 0.007246376811594203;
        result[2] += 0.00966183574879227;
        result[3] += 0.8442028985507246;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x453af800))) ) ) {
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0.08189836203275934;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9176816463670726;
        result[4] += 0;
        result[5] += 0.00041999160016799666;
        result[6] += 0;
      } else {
        result[0] += 0.33898305084745767;
        result[1] += 0.0032594524119947854;
        result[2] += 0.015645371577574972;
        result[3] += 0.6408083441981748;
        result[4] += 0;
        result[5] += 0.0013037809647979141;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0.9898795180722892;
        result[1] += 0;
        result[2] += 0.009638554216867472;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004819277108433735;
      } else {
        result[0] += 0.9997439180537772;
        result[1] += 0;
        result[2] += 0.00025608194622279127;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0.940920798454604;
        result[1] += 0.003380553766902769;
        result[2] += 0.007244043786220219;
        result[3] += 0.047488731487443654;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009658725048293626;
      } else {
        result[0] += 0.4051376146788991;
        result[1] += 0;
        result[2] += 0.006422018348623854;
        result[3] += 0.5875229357798165;
        result[4] += 0;
        result[5] += 0.0001834862385321101;
        result[6] += 0.0007339449541284404;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 0.8895668090298963;
        result[1] += 0.0018303843807199512;
        result[2] += 0.0016270083384177345;
        result[3] += 0.10595891803945495;
        result[4] += 0;
        result[5] += 0.0002033760423022168;
        result[6] += 0.0008135041692088672;
      } else {
        result[0] += 0.9863928541614492;
        result[1] += 0.00012521913348359628;
        result[2] += 0.000876533934385174;
        result[3] += 0.012396694214876033;
        result[4] += 0;
        result[5] += 0.00012521913348359628;
        result[6] += 8.347942232239753e-05;
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
        result[0] += 0.18299120234604105;
        result[1] += 0.0061583577712609975;
        result[2] += 0.01407624633431085;
        result[3] += 0.7958944281524927;
        result[4] += 0;
        result[5] += 0.0008797653958944282;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0.0752157829839704;
        result[1] += 0;
        result[2] += 0.017879161528976572;
        result[3] += 0.8008631319358817;
        result[4] += 0.10480887792848335;
        result[5] += 0.0012330456226880395;
        result[6] += 0;
      } else {
        result[0] += 0.19166369789811186;
        result[1] += 0;
        result[2] += 0.0003562522265764161;
        result[3] += 0.6419665122907018;
        result[4] += 0.1660135375846099;
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
        result[0] += 0.9859484777517564;
        result[1] += 0;
        result[2] += 0.00936768149882904;
        result[3] += 0.003278688524590164;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001405152224824356;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        result[0] += 0.978584729981378;
        result[1] += 0;
        result[2] += 0.021415270018621976;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.08036138849262958;
        result[1] += 0.005230622919638612;
        result[2] += 0.007608178792201617;
        result[3] += 0.8906324298621018;
        result[4] += 0.016167379933428434;
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
        result[0] += 0.013201320132013201;
        result[1] += 0.0429042904290429;
        result[2] += 0;
        result[3] += 0.9438943894389439;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 0.12247474747474749;
        result[1] += 0.0006313131313131315;
        result[2] += 0.007575757575757577;
        result[3] += 0.8428030303030304;
        result[4] += 0.023358585858585863;
        result[5] += 0.003156565656565657;
        result[6] += 0;
      } else {
        result[0] += 0.9934191176470588;
        result[1] += 0.000625;
        result[2] += 0.0012132352941176471;
        result[3] += 0.0045588235294117645;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001838235294117647;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0.44161513277555475;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5583848672244452;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8175290913592471;
        result[1] += 0;
        result[2] += 0.011141371626640256;
        result[3] += 0.00024758603614756123;
        result[4] += 0.16984402079722702;
        result[5] += 0.00024758603614756123;
        result[6] += 0.000990344144590245;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        result[0] += 0.9728506787330317;
        result[1] += 0;
        result[2] += 0.027149321266968326;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0814884597268017;
        result[1] += 0.005652378709373528;
        result[2] += 0.005652378709373528;
        result[3] += 0.8888365520489873;
        result[4] += 0.018370230805463968;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
        result[0] += 0.0016366612111292963;
        result[1] += 0.006546644844517185;
        result[2] += 0;
        result[3] += 0.26104746317512273;
        result[4] += 0.7307692307692307;
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
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0.8716125794580128;
        result[1] += 0.0012546002007360324;
        result[2] += 0.002509200401472065;
        result[3] += 0.12320173971227837;
        result[4] += 0.0005854800936768151;
        result[5] += 0.0003345600535296086;
        result[6] += 0.000501840080294413;
      } else {
        result[0] += 0.9934755774995592;
        result[1] += 0;
        result[2] += 0.0012931287838711574;
        result[3] += 0.0032328219596778934;
        result[4] += 0.0018809145947216834;
        result[5] += 0.00011755716217010521;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.14272322474806656;
        result[1] += 0;
        result[2] += 0.0058589172720881185;
        result[3] += 0.686899460979611;
        result[4] += 0.16358097023670026;
        result[5] += 0.0009374267635340989;
        result[6] += 0;
      } else {
        result[0] += 0.9949979991996799;
        result[1] += 0;
        result[2] += 0.0026010404161664665;
        result[3] += 0.0014005602240896359;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0010004001600640256;
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
        result[0] += 0.9921935987509758;
        result[1] += 0;
        result[2] += 0.00624512099921936;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00156128024980484;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 0.9988624431221561;
        result[1] += 0;
        result[2] += 0.0011375568778438923;
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.02074688796680498;
        result[1] += 0.010114107883817428;
        result[2] += 0.005705394190871369;
        result[3] += 0.891597510373444;
        result[4] += 0.07157676348547717;
        result[5] += 0.00025933609958506224;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.015663937344250624;
        result[3] += 0.18867924528301888;
        result[4] += 0.793876824492702;
        result[5] += 0.00177999288002848;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0.5435165609584215;
        result[1] += 0;
        result[2] += 0.00105708245243129;
        result[3] += 0.4545454545454546;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008809020436927415;
      } else {
        result[0] += 0.9738325281803543;
        result[1] += 0.00020128824476650564;
        result[2] += 0.005032206119162641;
        result[3] += 0.019927536231884056;
        result[4] += 0;
        result[5] += 0.00040257648953301127;
        result[6] += 0.0006038647342995169;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40900000))) ) ) {
        result[0] += 0.998913830557567;
        result[1] += 0;
        result[2] += 0.0008792800248267302;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00020688941760628945;
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
        result[0] += 0.01762018707852948;
        result[1] += 0.006090928866652166;
        result[2] += 0.015009788992821406;
        result[3] += 0.8020448118338047;
        result[4] += 0.15727648466391128;
        result[5] += 0.0019577985642810535;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.007785888077858881;
        result[2] += 0;
        result[3] += 0.15669099756690996;
        result[4] += 0.8355231143552312;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0.5484996510816469;
        result[1] += 0;
        result[2] += 0.00104675505931612;
        result[3] += 0.44975575715282623;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006978367062107466;
      } else {
        result[0] += 0.9748085449415559;
        result[1] += 0;
        result[2] += 0.005441354292623943;
        result[3] += 0.018943974203950022;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008061265618702138;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 0.0006493506493506495;
        result[1] += 0.0006493506493506495;
        result[2] += 0.002597402597402598;
        result[3] += 0.9779220779220781;
        result[4] += 0.016883116883116885;
        result[5] += 0.001298701298701299;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.004772004241781549;
        result[2] += 0;
        result[3] += 0.09437963944856839;
        result[4] += 0.9008483563096501;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.025036818851251842;
        result[3] += 0;
        result[4] += 0.9749631811487481;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 0.9928716904276986;
        result[1] += 0;
        result[2] += 0.0050916496945010185;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.002036659877800407;
      } else {
        result[0] += 0.9994078836068347;
        result[1] += 0;
        result[2] += 0.0005921163931652851;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x425c0000))) ) ) {
        result[0] += 0.7090493601462524;
        result[1] += 0.0009140767824497259;
        result[2] += 0.00776965265082267;
        result[3] += 0.2814442413162706;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008226691042047533;
      } else {
        result[0] += 0.1896551724137931;
        result[1] += 0.022413793103448276;
        result[2] += 0;
        result[3] += 0.7879310344827586;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 0;
        result[1] += 0.00026802465826856065;
        result[2] += 0.008844813722862502;
        result[3] += 0.7946931117662823;
        result[4] += 0.19512195121951215;
        result[5] += 0.0010720986330742426;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.005888650963597431;
        result[2] += 0;
        result[3] += 0.1076017130620985;
        result[4] += 0.8865096359743041;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
        result[0] += 0.9570815450643777;
        result[1] += 0.04291845493562232;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.9937391304347827;
        result[1] += 0.0003975155279503106;
        result[2] += 0.0007950310559006212;
        result[3] += 0.004919254658385094;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00014906832298136648;
      } else {
        result[0] += 0.8024721279689773;
        result[1] += 0.0008482792050412022;
        result[2] += 0.006180319922443044;
        result[3] += 0.19001454192922929;
        result[4] += 0;
        result[5] += 6.05913717886573e-05;
        result[6] += 0.0004241396025206011;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        result[0] += 0.13933040243490025;
        result[1] += 0;
        result[2] += 0.004058167061210686;
        result[3] += 0.7510990869124112;
        result[4] += 0.10517416300304362;
        result[5] += 0.00033818058843422386;
        result[6] += 0;
      } else {
        result[0] += 0.9905166312809625;
        result[1] += 0.0005661712668082095;
        result[2] += 0.0023000707714083512;
        result[3] += 0.006334041047416843;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00028308563340410475;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0.4358152686145146;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5641847313854854;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8072504467704876;
        result[1] += 0;
        result[2] += 0.014807250446770488;
        result[3] += 0.0005105948429920858;
        result[4] += 0.17513403114628542;
        result[5] += 0.0010211896859841716;
        result[6] += 0.0012764871074802144;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0.17836498761354255;
        result[1] += 0.004954582989265071;
        result[2] += 0;
        result[3] += 0.8142031379025599;
        result[4] += 0.0024772914946325354;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.09988649262202043;
        result[1] += 0;
        result[2] += 0.0056753688989784334;
        result[3] += 0.21112372304199772;
        result[4] += 0.6833144154370034;
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
        result[0] += 0.034482758620689655;
        result[1] += 0.09655172413793103;
        result[2] += 0;
        result[3] += 0.8689655172413793;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0.12091503267973856;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8392156862745098;
        result[4] += 0.03986928104575163;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.17420109119251753;
        result[1] += 0.000779423226812159;
        result[2] += 0;
        result[3] += 0.7486360093530787;
        result[4] += 0.07482462977396727;
        result[5] += 0.001558846453624318;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 0.8991596638655462;
        result[1] += 0;
        result[2] += 0.09243697478991597;
        result[3] += 0;
        result[4] += 0.008403361344537815;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.005842696629213483;
        result[2] += 0.006741573033707865;
        result[3] += 0;
        result[4] += 0.9865168539325843;
        result[5] += 0.0008988764044943821;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 0.4926900584795322;
        result[1] += 0.008771929824561403;
        result[2] += 0;
        result[3] += 0.49853801169590645;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8818164251207727;
        result[1] += 0.0006183574879227052;
        result[2] += 0.0026280193236714973;
        result[3] += 0.1147053140096618;
        result[4] += 0;
        result[5] += 3.8647342995169076e-05;
        result[6] += 0.00019323671497584535;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
        result[0] += 0.9879001524390244;
        result[1] += 0;
        result[2] += 0.0022865853658536584;
        result[3] += 0.009336890243902439;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004763719512195122;
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d60000))) ) ) {
        result[0] += 0.30952380952380953;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5198412698412699;
        result[4] += 0.17063492063492064;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0032258064516129032;
        result[1] += 0.03225806451612903;
        result[2] += 0;
        result[3] += 0.267741935483871;
        result[4] += 0.6967741935483871;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41e80000))) ) ) {
        result[0] += 0;
        result[1] += 0.004878048780487805;
        result[2] += 0;
        result[3] += 0.055284552845528454;
        result[4] += 0.9398373983739837;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.21858585858585858;
        result[1] += 0.0028282828282828283;
        result[2] += 0.01696969696969697;
        result[3] += 0.4921212121212121;
        result[4] += 0.2694949494949495;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40600000))) ) ) {
        result[0] += 0.9991085007079553;
        result[1] += 0;
        result[2] += 0.0007866170223923645;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010488226965231528;
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
        result[0] += 0.7855378396586572;
        result[1] += 0.0010105546822366945;
        result[2] += 0.006512463507747587;
        result[3] += 0.19144397035706268;
        result[4] += 0.014260049404895577;
        result[5] += 0.0010105546822366945;
        result[6] += 0.0002245677071637099;
      } else {
        result[0] += 0;
        result[1] += 0.0015604681404421327;
        result[2] += 0.010663198959687906;
        result[3] += 0.7955786736020807;
        result[4] += 0.19115734720416125;
        result[5] += 0.0010403120936280884;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 0.0025340513145391194;
        result[1] += 0.0003167564143173899;
        result[2] += 0.004434589800443459;
        result[3] += 0.9730757047830219;
        result[4] += 0.017104846373139058;
        result[5] += 0.0025340513145391194;
        result[6] += 0;
      } else {
        result[0] += 0.4982357092448836;
        result[1] += 0;
        result[2] += 0.017642907551164433;
        result[3] += 0;
        result[4] += 0.48412138320395204;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
        result[0] += 0;
        result[1] += 0.007774538386783284;
        result[2] += 0;
        result[3] += 0.1836734693877551;
        result[4] += 0.8085519922254616;
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
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.009708737864077669;
        result[1] += 0.03559870550161812;
        result[2] += 0;
        result[3] += 0.9546925566343042;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0.8861312664907652;
        result[1] += 0;
        result[2] += 0.0023087071240105545;
        result[3] += 0.11090039577836414;
        result[4] += 0;
        result[5] += 0.0001649076517150396;
        result[6] += 0.0004947229551451189;
      } else {
        result[0] += 0.9219704110487275;
        result[1] += 0.0005737469775828859;
        result[2] += 0.002663825253063399;
        result[3] += 0.07466907093971559;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001229457809106184;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 0.9750750750750751;
        result[1] += 0.0016816816816816818;
        result[2] += 0.001981981981981982;
        result[3] += 0.02066066066066066;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006006006006006006;
      } else {
        result[0] += 0.2503894947696417;
        result[1] += 0.0035610950367237926;
        result[2] += 0.004673937235699978;
        result[3] += 0.6761629200979301;
        result[4] += 0.06476741598041398;
        result[5] += 0.0004451368795904741;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0.9999082737112457;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 9.1726288754357e-05;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.1120309050772627;
        result[1] += 0;
        result[2] += 0.02097130242825607;
        result[3] += 0.052980132450331126;
        result[4] += 0.8140176600441501;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0.170718954248366;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.829281045751634;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.07874015748031496;
        result[1] += 0;
        result[2] += 0.04068241469816273;
        result[3] += 0;
        result[4] += 0.8753280839895013;
        result[5] += 0.005249343832020997;
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
        result[0] += 0.992886781268524;
        result[1] += 0;
        result[2] += 0.006520450503852994;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005927682276229994;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 0.997433574879227;
        result[1] += 0;
        result[2] += 0.00196256038647343;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006038647342995169;
      } else {
        result[0] += 0.9995480225988701;
        result[1] += 0;
        result[2] += 0.0004519774011299435;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.020345093999484937;
        result[1] += 0.0074684522276590275;
        result[2] += 0.007210919392222509;
        result[3] += 0.8964718001545198;
        result[4] += 0.06798866855524081;
        result[5] += 0.0005150656708730365;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.01629844259326331;
        result[3] += 0.1926838102136907;
        result[4] += 0.791017747193046;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.5820162651526777;
        result[1] += 0.00015344483658124908;
        result[2] += 0.002762007058462483;
        result[3] += 0.41399416909620995;
        result[4] += 0;
        result[5] += 0.00015344483658124908;
        result[6] += 0.0009206690194874943;
      } else {
        result[0] += 0.9672811059907834;
        result[1] += 0;
        result[2] += 0.004377880184331797;
        result[3] += 0.025806451612903226;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.002534562211981567;
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
        result[1] += 0.0034931724356938713;
        result[2] += 0.008574150523975867;
        result[3] += 0.9853921879961893;
        result[4] += 0;
        result[5] += 0.0025404890441409977;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0.9919469445760303;
        result[1] += 0;
        result[2] += 0.006631927996210327;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0014211274277593558;
      } else {
        result[0] += 0.99944256249732;
        result[1] += 0;
        result[2] += 0.000557437502679988;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0.5234235694602043;
        result[1] += 0.00259361322742746;
        result[2] += 0.0038904198411411897;
        result[3] += 0.4691197925109418;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009726049602852974;
      } else {
        result[0] += 0.856070087609512;
        result[1] += 0.0014303593777936709;
        result[2] += 0.01269443947791883;
        result[3] += 0.1290899338458788;
        result[4] += 0;
        result[5] += 0.00017879492222420886;
        result[6] += 0.0005363847666726266;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.4645669291338583;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.12780133252574197;
        result[4] += 0.40702604482132043;
        result[5] += 0.0006056935190793458;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0003272251308900524;
        result[2] += 0.011780104712041885;
        result[3] += 0.9479712041884817;
        result[4] += 0.03861256544502618;
        result[5] += 0.0013089005235602095;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8082901554404145;
        result[4] += 0.19170984455958548;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.007921998781230956;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.992078001218769;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0.9955800304325774;
        result[1] += 0.0008332729512354177;
        result[2] += 0.002789652923701181;
        result[3] += 0.0006158973987392218;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00018114629374682995;
      } else {
        result[0] += 0.2920353982300885;
        result[1] += 0.011061946902654867;
        result[2] += 0;
        result[3] += 0.6969026548672567;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        result[0] += 0.4365726227795193;
        result[1] += 0;
        result[2] += 0.004597701149425287;
        result[3] += 0.5588296760710554;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8745145631067961;
        result[1] += 0;
        result[2] += 0.0048543689320388345;
        result[3] += 0.11868932038834952;
        result[4] += 0;
        result[5] += 0.00024271844660194174;
        result[6] += 0.0016990291262135922;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.30242272347535504;
        result[1] += 0;
        result[2] += 0.000835421888053467;
        result[3] += 0.14870509607351712;
        result[4] += 0.5472013366750209;
        result[5] += 0.000835421888053467;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0012897678417884782;
        result[2] += 0.014617368873602751;
        result[3] += 0.8693035253654342;
        result[4] += 0.11392949269131557;
        result[5] += 0.0008598452278589854;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 0.9354597776899082;
        result[1] += 0.00092263081586925;
        result[2] += 0.00276789244760775;
        result[3] += 0.060234611836035325;
        result[4] += 0;
        result[5] += 4.393480075567857e-05;
        result[6] += 0.0005711524098238215;
      } else {
        result[0] += 0.8706957132817991;
        result[1] += 0;
        result[2] += 0.0011946591707659873;
        result[3] += 0.128109627547435;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.022988505747126436;
        result[1] += 0.13793103448275862;
        result[2] += 0;
        result[3] += 0.8390804597701149;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.13763806287170774;
        result[1] += 0.009345794392523364;
        result[2] += 0;
        result[3] += 0.8530161427357689;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.08968177434908389;
        result[1] += 0;
        result[2] += 0.01253616200578592;
        result[3] += 0.19961427193828352;
        result[4] += 0.6981677917068466;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45b53000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9984843081312411;
        result[1] += 0;
        result[2] += 0.0014265335235378032;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8.91583452211127e-05;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 0.9177326310509155;
        result[1] += 0.0018811136192626034;
        result[2] += 0.0031351893654376723;
        result[3] += 0.07599699021820917;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001254075746175069;
      } else {
        result[0] += 0.1125803489439853;
        result[1] += 0.003856749311294766;
        result[2] += 0.010284664830119375;
        result[3] += 0.5401285583103765;
        result[4] += 0.3322314049586777;
        result[5] += 0.0009182736455463728;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 0.0016265452179570594;
        result[2] += 0;
        result[3] += 0.996746909564086;
        result[4] += 0.0009759271307742356;
        result[5] += 0.0006506180871828238;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.050684931506849315;
        result[3] += 0;
        result[4] += 0.947945205479452;
        result[5] += 0.0013698630136986301;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
        result[0] += 0.9808743169398907;
        result[1] += 0;
        result[2] += 0.01366120218579235;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00546448087431694;
      } else {
        result[0] += 0.9987253027405991;
        result[1] += 0;
        result[2] += 0.0012746972594008922;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 0.9990628904623073;
        result[1] += 0;
        result[2] += 0.000937109537692628;
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
        result[0] += 0.0170610897083104;
        result[1] += 0.006053935057787562;
        result[2] += 0.005136672170243992;
        result[3] += 0.6391487800403596;
        result[4] += 0.3313153549807375;
        result[5] += 0.001284168042560998;
        result[6] += 0;
      } else {
        result[0] += 0.983112334250688;
        result[1] += 0.00012509382036527395;
        result[2] += 0.005003752814610958;
        result[3] += 0.010632974731048286;
        result[4] += 0;
        result[5] += 0.00012509382036527395;
        result[6] += 0.0010007505629221916;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 0.002127659574468085;
        result[2] += 0;
        result[3] += 0.22872340425531915;
        result[4] += 0.7680851063829788;
        result[5] += 0.0010638297872340426;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.011760513186029936;
        result[3] += 0.9864575908766928;
        result[4] += 0.0007127583749109052;
        result[5] += 0.0010691375623663579;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.8991157174099078;
        result[1] += 0;
        result[2] += 0.0013311780926119616;
        result[3] += 0.09118569934391937;
        result[4] += 0.008367405153560901;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5204149933065596;
        result[1] += 0;
        result[2] += 0.01104417670682731;
        result[3] += 0.40896921017402943;
        result[4] += 0.056559571619812586;
        result[5] += 0.0013386880856760374;
        result[6] += 0.0016733601070950468;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9991273996509599;
        result[1] += 0;
        result[2] += 0.000599912739965096;
        result[3] += 0;
        result[4] += 0.00010907504363001745;
        result[5] += 0;
        result[6] += 0.0001636125654450262;
      } else {
        result[0] += 0.5551667832983438;
        result[1] += 0.0018661068346162819;
        result[2] += 0.005598320503848845;
        result[3] += 0.3599253557266153;
        result[4] += 0.07651038021926755;
        result[5] += 0.000583158385817588;
        result[6] += 0.0003498950314905528;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 0.20256776034236804;
        result[1] += 0.009272467902995721;
        result[2] += 0.0042796005706134095;
        result[3] += 0.7838801711840229;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.11016949152542373;
        result[4] += 0.8898305084745762;
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
        result[0] += 0.0425531914893617;
        result[1] += 0.09219858156028368;
        result[2] += 0;
        result[3] += 0.8652482269503546;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x453af800))) ) ) {
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
        result[0] += 0.06408399710354816;
        result[1] += 0.003620564808110065;
        result[2] += 0.007965242577842143;
        result[3] += 0.9232440260680667;
        result[4] += 0;
        result[5] += 0.0010861694424330196;
        result[6] += 0;
      } else {
        result[0] += 0.4446322907861369;
        result[1] += 0;
        result[2] += 0.00253592561284869;
        result[3] += 0.5528317836010144;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0.9939969984992496;
        result[1] += 0;
        result[2] += 0.005502751375687844;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005002501250625312;
      } else {
        result[0] += 0.9996174607897309;
        result[1] += 0;
        result[2] += 0.0003825392102690526;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.5191623323295921;
        result[1] += 0.0036955926635641938;
        result[2] += 0.010402408978921434;
        result[3] += 0.46632904462085956;
        result[4] += 0;
        result[5] += 0.0001368738023542294;
        result[6] += 0.0002737476047084588;
      } else {
        result[0] += 0.9710178000912826;
        result[1] += 0;
        result[2] += 0.005020538566864447;
        result[3] += 0.022592423550890008;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001369237790963031;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0.012048192771084338;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9879518072289156;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.018156424581005588;
        result[2] += 0;
        result[3] += 0.002793296089385475;
        result[4] += 0.979050279329609;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.00597119775201967;
        result[1] += 0.0017562346329469617;
        result[2] += 0.008429926238145416;
        result[3] += 0.6765015806111696;
        result[4] += 0.3073410607657183;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9959266802443992;
        result[1] += 0;
        result[2] += 0.004073319755600814;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        result[0] += 0.9766461124105181;
        result[1] += 0.0006378907080586859;
        result[2] += 0.0008150825714083209;
        result[3] += 0.021440215465305834;
        result[4] += 0.000141753490679708;
        result[5] += 7.0876745339854e-05;
        result[6] += 0.000248068608689489;
      } else {
        result[0] += 0.028404344193817876;
        result[1] += 0;
        result[2] += 0.017543859649122806;
        result[3] += 0.8529657477025898;
        result[4] += 0.1010860484544695;
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
        result[0] += 0.3606055451607416;
        result[1] += 0;
        result[2] += 0.007654362986902534;
        result[3] += 0.5145432896751149;
        result[4] += 0.11498554175880252;
        result[5] += 0.001360775642116006;
        result[6] += 0.0008504847763225039;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
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
        result[0] += 0.005955107650022904;
        result[1] += 0.011452130096197893;
        result[2] += 0.010077874484654145;
        result[3] += 0.9725148877691251;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.988540870893812;
        result[1] += 0;
        result[2] += 0.01145912910618793;
        result[3] += 0;
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
        result[0] += 0.9990818317456674;
        result[1] += 0;
        result[2] += 0.0008416542331382225;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.651402119438387e-05;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
        result[0] += 0.6556452397160362;
        result[1] += 0.002431197121462608;
        result[2] += 0.005251385782359234;
        result[3] += 0.32509967908197995;
        result[4] += 0.010502771564718467;
        result[5] += 0.00019449576971700865;
        result[6] += 0.000875230963726539;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.01;
        result[3] += 0.655;
        result[4] += 0.33111111111111113;
        result[5] += 0.0038888888888888888;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 0.0005825808330905913;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9362073987765802;
        result[4] += 0.06291872997378387;
        result[5] += 0.00029129041654529564;
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
        result[0] += 0.6451612903225806;
        result[1] += 0.08064516129032258;
        result[2] += 0.25;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.024193548387096774;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 0.9917055469155003;
        result[1] += 0;
        result[2] += 0.007776049766718507;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005184033177812338;
      } else {
        result[0] += 0.9996163355784807;
        result[1] += 0;
        result[2] += 0.00038366442151931113;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.5262655205348615;
        result[1] += 0.004639104925637877;
        result[2] += 0.00750443443853186;
        result[3] += 0.46145449583845;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001364442625187611;
      } else {
        result[0] += 0.9659013412139122;
        result[1] += 0;
        result[2] += 0.003409865878608775;
        result[3] += 0.030006819731757218;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000681973175721755;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.1405775075987842;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8571428571428571;
        result[4] += 0.0011398176291793312;
        result[5] += 0.0011398176291793312;
        result[6] += 0;
      } else {
        result[0] += 0.002012072434607646;
        result[1] += 0;
        result[2] += 0.030181086519114688;
        result[3] += 0;
        result[4] += 0.9637826961770624;
        result[5] += 0.004024144869215292;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.9911926994906621;
        result[1] += 0.00042444821731748726;
        result[2] += 0.0018746462931522353;
        result[3] += 0.006154499151103565;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003537068477645727;
      } else {
        result[0] += 0.6491452494476102;
        result[1] += 0;
        result[2] += 0.003605070357018258;
        result[3] += 0.34666821723456215;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005814629608093965;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 0.009836065573770493;
        result[1] += 0.04590163934426229;
        result[2] += 0;
        result[3] += 0.08524590163934426;
        result[4] += 0.8590163934426229;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.14890016920473773;
        result[1] += 0.005076142131979695;
        result[2] += 0;
        result[3] += 0.8460236886632826;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 0.011263073209975865;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.028962188254223652;
        result[4] += 0.9597747385358005;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.315018315018315;
        result[1] += 0;
        result[2] += 0.04395604395604396;
        result[3] += 0.6410256410256411;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0.0005868544600938967;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9994131455399061;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.2468729427254773;
        result[1] += 0.003730524467851657;
        result[2] += 0.0013166556945358788;
        result[3] += 0.7472021066491112;
        result[4] += 0;
        result[5] += 0.0008777704630239193;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 0.9950678619001332;
        result[1] += 0.000504014112395147;
        result[2] += 0.002268063505778162;
        result[3] += 0.001908053425495914;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002520070561975735;
      } else {
        result[0] += 0;
        result[1] += 0.203125;
        result[2] += 0;
        result[3] += 0.796875;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
        result[2] += 0.009650495565988524;
        result[3] += 0.8093375065206051;
        result[4] += 0.1807511737089202;
        result[5] += 0.0002608242044861763;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 0.9976782752902156;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.002321724709784411;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9931542917324908;
        result[1] += 0;
        result[2] += 0.004739336492890996;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00210637177461822;
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
        result[0] += 0.9922928709055877;
        result[1] += 0;
        result[2] += 0.0072254335260115606;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004816955684007707;
      } else {
        result[0] += 0.9996286515926721;
        result[1] += 0;
        result[2] += 0.0003713484073279419;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.019900497512437814;
        result[1] += 0.007331762241424457;
        result[2] += 0.005236973029588899;
        result[3] += 0.888714323121236;
        result[4] += 0.0775072008379157;
        result[5] += 0.0013092432573972247;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.01710334788937409;
        result[3] += 0.19177583697234352;
        result[4] += 0.789665211062591;
        result[5] += 0.001455604075691412;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3fc00000))) ) ) {
        result[0] += 0.7253340915553028;
        result[1] += 0.0004264998578333807;
        result[2] += 0.005402331532556156;
        result[3] += 0.2679840773386409;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008529997156667614;
      } else {
        result[0] += 0.7827663134411601;
        result[1] += 0;
        result[2] += 0.0002788622420524261;
        result[3] += 0.21639709983268265;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005577244841048522;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        result[0] += 0.9905437352245863;
        result[1] += 0;
        result[2] += 0.009456264775413711;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.060583941605839416;
        result[1] += 0.006569343065693431;
        result[2] += 0.00145985401459854;
        result[3] += 0.589051094890511;
        result[4] += 0.34233576642335767;
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
        result[0] += 0.5485426714195849;
        result[1] += 0;
        result[2] += 0.00691968966240302;
        result[3] += 0.40155168798490254;
        result[4] += 0.04130845040889076;
        result[5] += 0.0012581253931641856;
        result[6] += 0.00041937513105472853;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0.8621213271581505;
        result[1] += 0.0013666388277275834;
        result[2] += 0.005466555310910334;
        result[3] += 0.10500341659706931;
        result[4] += 0.025738364588869488;
        result[5] += 7.592437931819907e-05;
        result[6] += 0.00022777313795459722;
      } else {
        result[0] += 0.04505632040050062;
        result[1] += 0.006257822277847309;
        result[2] += 0.007509386733416771;
        result[3] += 0.27909887359199;
        result[4] += 0.6620775969962454;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 0.9111491163775551;
        result[1] += 0;
        result[2] += 0.00016287971333170455;
        result[3] += 0.08575616906914243;
        result[4] += 0.002768955126638977;
        result[5] += 0;
        result[6] += 0.00016287971333170455;
      } else {
        result[0] += 0.18300898203592814;
        result[1] += 0;
        result[2] += 0.00037425149700598805;
        result[3] += 0.4719311377245509;
        result[4] += 0.344311377245509;
        result[5] += 0.00037425149700598805;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 0;
        result[1] += 0.05985915492957746;
        result[2] += 0;
        result[3] += 0.07042253521126761;
        result[4] += 0.8697183098591549;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.3347884486232371;
        result[1] += 0.005036937541974479;
        result[2] += 0.005372733378106112;
        result[3] += 0.6548018804566823;
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
        result[0] += 0.48043478260869565;
        result[1] += 0;
        result[2] += 0.02608695652173913;
        result[3] += 0.4934782608695652;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 0.9994297445255474;
        result[1] += 0;
        result[2] += 0.0005322384428223844;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.801703163017032e-05;
      } else {
        result[0] += 0.8;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.2;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.7447452229299362;
        result[1] += 0.0030254777070063688;
        result[2] += 0.0035031847133757954;
        result[3] += 0.24235668789808912;
        result[4] += 0.005414012738853502;
        result[5] += 0.00031847133757961776;
        result[6] += 0.0006369426751592355;
      } else {
        result[0] += 0.35630599586492073;
        result[1] += 0;
        result[2] += 0.0074086836664369405;
        result[3] += 0.5101654031702274;
        result[4] += 0.12491385251550655;
        result[5] += 0.0008614748449345279;
        result[6] += 0.00034458993797381116;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x450d7000))) ) ) {
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
        result[4] += 0.9995744680851064;
        result[5] += 0.000425531914893617;
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
        result[0] += 0.0006289308176100629;
        result[1] += 0.0037735849056603774;
        result[2] += 0.007861635220125786;
        result[3] += 0.9858490566037735;
        result[4] += 0;
        result[5] += 0.0018867924528301887;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9991816275382334;
        result[1] += 0;
        result[2] += 0.0007160759040458289;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010229655772083269;
      } else {
        result[0] += 0.5263229124374069;
        result[1] += 0.004195425632697252;
        result[2] += 0.006766815536608472;
        result[3] += 0.46203816483962645;
        result[4] += 0;
        result[5] += 0.00013533631073216944;
        result[6] += 0.0005413452429286778;
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
        result[0] += 0.988038510162404;
        result[1] += 0;
        result[2] += 0.0028201886608966256;
        result[3] += 0.00875230963726539;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003889915394340173;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        result[0] += 0.9885844748858448;
        result[1] += 0;
        result[2] += 0.01141552511415525;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.060014461315979754;
        result[1] += 0.005784526391901663;
        result[2] += 0.0007230657989877079;
        result[3] += 0.5885755603759942;
        result[4] += 0.34490238611713664;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.3042805569881382;
        result[1] += 0.008251676121712223;
        result[2] += 0.009798865394533264;
        result[3] += 0.5729757607013924;
        result[4] += 0.10469314079422383;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.10894941634241245;
        result[1] += 0;
        result[2] += 0.005447470817120622;
        result[3] += 0.10116731517509728;
        result[4] += 0.7844357976653696;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0.12837837837837834;
        result[1] += 0.0012285012285012283;
        result[2] += 0;
        result[3] += 0.8648648648648647;
        result[4] += 0.004914004914004913;
        result[5] += 0.0006142506142506141;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.02838709677419355;
        result[3] += 0;
        result[4] += 0.9703225806451613;
        result[5] += 0.0012903225806451613;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9991890326317822;
        result[1] += 0;
        result[2] += 0.0006564973933191736;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00015446997489862907;
      } else {
        result[0] += 0.6852417052279216;
        result[1] += 0.0009845426799251747;
        result[2] += 0.004036624987693216;
        result[3] += 0.3086541301565423;
        result[4] += 0;
        result[5] += 0.00019690853598503495;
        result[6] += 0.0008860884119326573;
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
        result[0] += 0.19344438473938744;
        result[1] += 0.009134873723804407;
        result[2] += 0;
        result[3] += 0.7974207415368082;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5403508771929825;
        result[1] += 0;
        result[2] += 0.02456140350877193;
        result[3] += 0.43508771929824563;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 0.10981781376518218;
        result[1] += 0;
        result[2] += 0.012145748987854251;
        result[3] += 0.7980769230769231;
        result[4] += 0.07894736842105263;
        result[5] += 0.0010121457489878543;
        result[6] += 0;
      } else {
        result[0] += 0.9112339367141081;
        result[1] += 0.000442172170789001;
        result[2] += 0.001906867486527567;
        result[3] += 0.08619593754318089;
        result[4] += 0;
        result[5] += 0.00011054304269725025;
        result[6] += 0.00011054304269725025;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43590000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0029498525073746312;
        result[3] += 0;
        result[4] += 0.9970501474926253;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
        result[0] += 0.5;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9991997866097626;
        result[1] += 0;
        result[2] += 0.0007240025911671683;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.621079907022826e-05;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.6713984045049273;
        result[1] += 0.0011731581417175035;
        result[2] += 0.007625527921163773;
        result[3] += 0.2884795870483341;
        result[4] += 0.03038479587048334;
        result[5] += 0.0003519474425152511;
        result[6] += 0.0005865790708587518;
      } else {
        result[0] += 0.35679611650485443;
        result[1] += 0;
        result[2] += 0.00866851595006935;
        result[3] += 0.516990291262136;
        result[4] += 0.11650485436893206;
        result[5] += 0.000346740638002774;
        result[6] += 0.000693481276005548;
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
        result[0] += 0.13037542662116042;
        result[1] += 0.010921501706484642;
        result[2] += 0.004095563139931741;
        result[3] += 0.8546075085324232;
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
        result[0] += 0.9886605244507441;
        result[1] += 0;
        result[2] += 0.009213323883770375;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.002126151665485471;
      } else {
        result[0] += 0.9994654629684623;
        result[1] += 0;
        result[2] += 0.0005345370315376849;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 0.9147334649555775;
        result[1] += 0.0011105626850937808;
        result[2] += 0.0030848963474827246;
        result[3] += 0.07959032576505429;
        result[4] += 0;
        result[5] += 0.00024679170779861795;
        result[6] += 0.0012339585389930898;
      } else {
        result[0] += 0.10425571455119866;
        result[1] += 0.004274298457535774;
        result[2] += 0.00873443597844267;
        result[3] += 0.5532428916558261;
        result[4] += 0.32930682029362573;
        result[5] += 0.00018583906337112061;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 0.0013123359580052493;
        result[2] += 0;
        result[3] += 0.9967191601049868;
        result[4] += 0.0013123359580052493;
        result[5] += 0.0006561679790026247;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.035211267605633804;
        result[3] += 0;
        result[4] += 0.9647887323943662;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 0.9986357435197817;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.001364256480218281;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0026073004412354595;
        result[2] += 0.0028078620136381873;
        result[3] += 0.6403931006819095;
        result[4] += 0.3537906137184116;
        result[5] += 0.0004011231448054553;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        result[0] += 0.422360248447205;
        result[1] += 0.010351966873706004;
        result[2] += 0;
        result[3] += 0.567287784679089;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9940647482014386;
        result[1] += 0.0005395683453237409;
        result[2] += 0.0028057553956834526;
        result[3] += 0.002266187050359712;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00032374100719424455;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.0896755162241888;
        result[1] += 0;
        result[2] += 0.02123893805309735;
        result[3] += 0.776991150442478;
        result[4] += 0.11032448377581122;
        result[5] += 0.001769911504424779;
        result[6] += 0;
      } else {
        result[0] += 0.9905660377358491;
        result[1] += 0;
        result[2] += 0.004043126684636119;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.005390835579514825;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.19121813031161472;
        result[1] += 0;
        result[2] += 0.0010623229461756375;
        result[3] += 0.6327903682719547;
        result[4] += 0.17492917847025496;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9985693848354793;
        result[1] += 0;
        result[2] += 0.0002861230329041488;
        result[3] += 0.0011444921316165952;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41fc0000))) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0.9925880172946263;
        result[1] += 0;
        result[2] += 0.0067943174799258805;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006176652254478073;
      } else {
        result[0] += 0.9996469638894493;
        result[1] += 0;
        result[2] += 0.00035303611055073636;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.022815659839253304;
        result[1] += 0.01011148561057817;
        result[2] += 0.0059631838216230235;
        result[3] += 0.8936997666580244;
        result[4] += 0.06637282862328234;
        result[5] += 0.0010370754472387865;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.016356877323420074;
        result[3] += 0.20260223048327136;
        result[4] += 0.7795539033457249;
        result[5] += 0.001486988847583643;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0.5422989708703995;
        result[1] += 0;
        result[2] += 0.0019187162044304901;
        result[3] += 0.4552590266875981;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005232862375719519;
      } else {
        result[0] += 0.9725915320106362;
        result[1] += 0;
        result[2] += 0.006545305788504808;
        result[3] += 0.020454080589077526;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004090816117815505;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 0.9619289340101523;
        result[1] += 0;
        result[2] += 0.03807106598984772;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.08591764107778342;
        result[1] += 0.004575495678698526;
        result[2] += 0.001525165226232842;
        result[3] += 0.9079816980172852;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41b80000))) ) ) {
        result[0] += 0.003727865796831314;
        result[1] += 0.0130475302889096;
        result[2] += 0;
        result[3] += 0.22273998136067102;
        result[4] += 0.7604846225535881;
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
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 0.11405405405405407;
        result[1] += 0;
        result[2] += 0.006486486486486487;
        result[3] += 0.818918918918919;
        result[4] += 0.05891891891891893;
        result[5] += 0.0016216216216216218;
        result[6] += 0;
      } else {
        result[0] += 0.9934723944278318;
        result[1] += 0.0006199401940048138;
        result[2] += 0.0018233535117788639;
        result[3] += 0.0037561082342644596;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00032820363212019554;
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
        result[0] += 0.3580226084022271;
        result[1] += 0;
        result[2] += 0.007929812721444239;
        result[3] += 0.5199932512232158;
        result[4] += 0.1127045722962713;
        result[5] += 0.0005061582588155897;
        result[6] += 0.0008435970980259828;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
        result[0] += 0.9988842053062237;
        result[1] += 0;
        result[2] += 0.0010538060996776594;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6.198859409868585e-05;
      } else {
        result[0] += 0.9999;
        result[1] += 0;
        result[2] += 0.0001;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x434c0000))) ) ) {
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.020560747663551402;
        result[1] += 0.007209612817089452;
        result[2] += 0.005073431241655541;
        result[3] += 0.8974632843791722;
        result[4] += 0.0691588785046729;
        result[5] += 0.000534045393858478;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.01729106628242075;
        result[3] += 0.18371757925072046;
        result[4] += 0.797550432276657;
        result[5] += 0.001440922190201729;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0.5404802744425387;
        result[1] += 0;
        result[2] += 0.0015437392795883363;
        result[3] += 0.45711835334476847;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008576329331046313;
      } else {
        result[0] += 0.9754588986432562;
        result[1] += 0.0003990422984836393;
        result[2] += 0.0045889864325618515;
        result[3] += 0.018555466879489224;
        result[4] += 0;
        result[5] += 0.00019952114924181964;
        result[6] += 0.0007980845969672786;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9996222138269739;
        result[1] += 0;
        result[2] += 0.00037778617302606723;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5365987892129884;
        result[1] += 0;
        result[2] += 0.011557512383048982;
        result[3] += 0.40047697670152266;
        result[4] += 0.050082553659878924;
        result[5] += 0.000550357732526142;
        result[6] += 0.000733810310034856;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 0.06853426713356679;
        result[1] += 0;
        result[2] += 0.005002501250625313;
        result[3] += 0.6173086543271636;
        result[4] += 0.3071535767883943;
        result[5] += 0.0020010005002501254;
        result[6] += 0;
      } else {
        result[0] += 0.9159677290518412;
        result[1] += 0.0004792715073088905;
        result[2] += 0.002316478951992971;
        result[3] += 0.08099688473520249;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00023963575365444525;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 0.010810810810810811;
        result[2] += 0;
        result[3] += 0.9891891891891892;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9705882352941176;
        result[1] += 0;
        result[2] += 0.029411764705882353;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.45830797321972;
        result[1] += 0;
        result[2] += 0.0012172854534388314;
        result[3] += 0.12355447352404139;
        result[4] += 0.4169202678027998;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0006435006435006435;
        result[2] += 0.008043758043758044;
        result[3] += 0.9510939510939511;
        result[4] += 0.03861003861003861;
        result[5] += 0.0016087516087516086;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.3236009732360097;
        result[4] += 0.6763990267639902;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.008396946564885497;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9916030534351145;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.9962340211106986;
        result[1] += 0.00010608391237468838;
        result[2] += 0.0009547552113721954;
        result[3] += 0.0026520978093672095;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.304195618734419e-05;
      } else {
        result[0] += 0.9584026622296173;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.04159733777038269;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0.9601961678832117;
        result[1] += 0.002281021897810219;
        result[2] += 0.004676094890510949;
        result[3] += 0.032276459854014596;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005702554744525547;
      } else {
        result[0] += 0.6262035344302255;
        result[1] += 0;
        result[2] += 0.005240706886045094;
        result[3] += 0.36733698964046313;
        result[4] += 0;
        result[5] += 0.0001218769043266301;
        result[6] += 0.0010968921389396709;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0.9783699808795411;
        result[1] += 0.0007966857871255577;
        result[2] += 0.0010755258126195029;
        result[3] += 0.019160293180369662;
        result[4] += 0.00015933715742511153;
        result[5] += 0.0002788400254939452;
        result[6] += 0.00015933715742511153;
      } else {
        result[0] += 0.6813441483198147;
        result[1] += 0;
        result[2] += 0.002780996523754346;
        result[3] += 0.3147161066048668;
        result[4] += 0.00023174971031286214;
        result[5] += 0.00023174971031286214;
        result[6] += 0.0006952491309385865;
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
        result[0] += 0.32517877305231463;
        result[1] += 0.006774557771923222;
        result[2] += 0.023334587881068874;
        result[3] += 0.6447120812946933;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.43425995492111197;
        result[1] += 0;
        result[2] += 0.007513148009015778;
        result[3] += 0.028549962434259956;
        result[4] += 0.5296769346356123;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.016996291718170582;
        result[1] += 0;
        result[2] += 0.004326328800988875;
        result[3] += 0.9740420271940667;
        result[4] += 0.0030902348578491965;
        result[5] += 0.0015451174289245982;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x433f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.99382838940872;
        result[1] += 0;
        result[2] += 0.0021899263388413305;
        result[3] += 0.0025880947640852083;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0013935894883535737;
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
        result[0] += 0.0636042402826855;
        result[1] += 0.0038869257950530037;
        result[2] += 0.010954063604240283;
        result[3] += 0.9194346289752651;
        result[4] += 0;
        result[5] += 0.0021201413427561835;
        result[6] += 0;
      } else {
        result[0] += 0.43908629441624364;
        result[1] += 0;
        result[2] += 0.0025380710659898475;
        result[3] += 0.55668358714044;
        result[4] += 0;
        result[5] += 0.001692047377326565;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.9987518202621178;
        result[1] += 0.0001040149781568546;
        result[2] += 0.0009881422924901187;
        result[3] += 0.0001040149781568546;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.20074890784273e-05;
      } else {
        result[0] += 0.8767123287671232;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.1232876712328767;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.5540340985367164;
        result[1] += 0.003087662773526648;
        result[2] += 0.006578064169687206;
        result[3] += 0.43603168210498056;
        result[4] += 0;
        result[5] += 0.00013424620754463686;
        result[6] += 0.00013424620754463686;
      } else {
        result[0] += 0.9848218895198761;
        result[1] += 0;
        result[2] += 0.0021683014971605576;
        result[3] += 0.012700051626226123;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003097573567372225;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0.0012626262626262627;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9987373737373737;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.19545929018789146;
        result[1] += 0.0005219206680584552;
        result[2] += 0.008089770354906056;
        result[3] += 0.7941022964509395;
        result[4] += 0;
        result[5] += 0.001826722338204593;
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
        result[1] += 0.056910569105691054;
        result[2] += 0;
        result[3] += 0.943089430894309;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9991837983982044;
        result[1] += 0;
        result[2] += 0.0007651890016834158;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.101260011222772e-05;
      } else {
        result[0] += 0.7039473684210527;
        result[1] += 0.023026315789473683;
        result[2] += 0;
        result[3] += 0.2730263157894737;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.5387832186699043;
        result[1] += 0.003372453797382976;
        result[2] += 0.007824092809928506;
        result[3] += 0.44921084581141246;
        result[4] += 0;
        result[5] += 0.0005395926075812763;
        result[6] += 0.00026979630379063814;
      } else {
        result[0] += 0.9837699024139702;
        result[1] += 0;
        result[2] += 0.0029789419619928093;
        result[3] += 0.012840267077555213;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00041088854648176684;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.010869565217391304;
        result[1] += 0.09782608695652174;
        result[2] += 0;
        result[3] += 0.8913043478260869;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0.344162799000357;
        result[1] += 0.0032131381649410924;
        result[2] += 0.008211353088182792;
        result[3] += 0.6290610496251339;
        result[4] += 0.01535166012138522;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0054894784995425435;
        result[1] += 0;
        result[2] += 0.006404391582799634;
        result[3] += 0.1756633119853614;
        result[4] += 0.8124428179322964;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 0.9963925315653488;
        result[1] += 0;
        result[2] += 0.0007799931750597182;
        result[3] += 0.0026812265392677816;
        result[4] += 4.874957344123239e-05;
        result[5] += 0;
        result[6] += 9.749914688246478e-05;
      } else {
        result[0] += 0.012422360248447206;
        result[1] += 0.0031055900621118015;
        result[2] += 0.011387163561076606;
        result[3] += 0.27225672877846796;
        result[4] += 0.6997929606625259;
        result[5] += 0.0010351966873706007;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0.6931138950298862;
        result[1] += 0.0009006796037009743;
        result[2] += 0.0030295586669941863;
        result[3] += 0.3018095472037992;
        result[4] += 0.00016375992794563171;
        result[5] += 0.0005731597478097109;
        result[6] += 0.00040939981986407926;
      } else {
        result[0] += 0.826250247084404;
        result[1] += 0;
        result[2] += 0.009092706068392962;
        result[3] += 0.1355999209329907;
        result[4] += 0.02826645582130856;
        result[5] += 0;
        result[6] += 0.000790670092903736;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x453af800))) ) ) {
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40900000))) ) ) {
        result[0] += 0.217406260749914;
        result[1] += 0.003783969728242174;
        result[2] += 0.010663914688682491;
        result[3] += 0.7657378740970072;
        result[4] += 0;
        result[5] += 0.002407980736154111;
        result[6] += 0;
      } else {
        result[0] += 0.12112932604735883;
        result[1] += 0.0009107468123861566;
        result[2] += 0;
        result[3] += 0.8779599271402551;
        result[4] += 0;
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
        result[0] += 0.9976811056488267;
        result[1] += 0;
        result[2] += 0.0020406270290325578;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002782673221408033;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0.9475479051640143;
        result[1] += 0.005034101981162715;
        result[2] += 0.006008444300097434;
        result[3] += 0.040922377395258204;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004871711594673595;
      } else {
        result[0] += 0.4097870750840493;
        result[1] += 0;
        result[2] += 0.006723944714232349;
        result[3] += 0.5827418752334703;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007471049682480389;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.14864864864864866;
        result[1] += 0.0045045045045045045;
        result[2] += 0.013513513513513514;
        result[3] += 0.832046332046332;
        result[4] += 0;
        result[5] += 0.001287001287001287;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0.0005530973451327434;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9994469026548672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.2265238879736409;
        result[1] += 0.0016474464579901156;
        result[2] += 0.005354200988467876;
        result[3] += 0.7640032948929161;
        result[4] += 0;
        result[5] += 0.0024711696869851732;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 0.6146926536731635;
        result[1] += 0.0029985007496251877;
        result[2] += 0.0029985007496251877;
        result[3] += 0.37931034482758624;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9950487786987456;
        result[1] += 0.0007335142668524903;
        result[2] += 0.002420597080613218;
        result[3] += 0.001650407100418103;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00014670285337049806;
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
        result[0] += 0.40786558345642543;
        result[1] += 0;
        result[2] += 0.00775480059084195;
        result[3] += 0.5832717872968981;
        result[4] += 0;
        result[5] += 0.00018463810930576072;
        result[6] += 0.0009231905465288035;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 0.0007861635220125787;
        result[1] += 0.0007861635220125787;
        result[2] += 0.0047169811320754715;
        result[3] += 0.8863993710691824;
        result[4] += 0.10495283018867925;
        result[5] += 0.0023584905660377358;
        result[6] += 0;
      } else {
        result[0] += 0.35970561177552896;
        result[1] += 0;
        result[2] += 0.017479300827966882;
        result[3] += 0;
        result[4] += 0.6228150873965042;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.9912324470739183;
        result[1] += 0.0003564045904911255;
        result[2] += 0.0022453489200940906;
        result[3] += 0.005987597120250909;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00017820229524556275;
      } else {
        result[0] += 0.6509606587374199;
        result[1] += 0;
        result[2] += 0.003087831655992681;
        result[3] += 0.34526532479414457;
        result[4] += 0;
        result[5] += 0.00022872827081427266;
        result[6] += 0.0004574565416285453;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 0.5701943844492441;
        result[1] += 0;
        result[2] += 0.01079913606911447;
        result[3] += 0.4190064794816415;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.00968783638320775;
        result[2] += 0;
        result[3] += 0.9903121636167922;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.002347417840375587;
        result[1] += 0.02112676056338028;
        result[2] += 0;
        result[3] += 0.3591549295774648;
        result[4] += 0.6173708920187794;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.01921537229783827;
        result[4] += 0.9807846277021617;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.2895174708818636;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.15474209650582363;
        result[4] += 0.5549084858569051;
        result[5] += 0.0008319467554076539;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0004266211604095563;
        result[2] += 0.013651877133105802;
        result[3] += 0.8622013651877133;
        result[4] += 0.12030716723549488;
        result[5] += 0.0034129692832764505;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.9927482973198098;
        result[1] += 0.0003429859375765594;
        result[2] += 0.0013719437503062375;
        result[3] += 0.005438777010142584;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9.799598216473124e-05;
      } else {
        result[0] += 0.808018925148611;
        result[1] += 0.00048526022079340043;
        result[2] += 0.0057018075943224555;
        result[3] += 0.18543006187067815;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003639451655950503;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 0.15119363395225463;
        result[1] += 0.013262599469496022;
        result[2] += 0.005968169761273209;
        result[3] += 0.8295755968169761;
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        result[0] += 0.0004411116012351125;
        result[1] += 0.00882223202470225;
        result[2] += 0.008381120423467137;
        result[3] += 0.8694309660344067;
        result[4] += 0.1129245699161888;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9989858012170385;
        result[1] += 0.0010141987829614604;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 0.5077605321507761;
        result[1] += 0;
        result[2] += 0.015521064301552107;
        result[3] += 0;
        result[4] += 0.47671840354767187;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.013761467889908258;
        result[1] += 0;
        result[2] += 0.002621231979030144;
        result[3] += 0.1566186107470511;
        result[4] += 0.8269986893840104;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 0.9911688311688311;
        result[1] += 0;
        result[2] += 0.006753246753246753;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.002077922077922078;
      } else {
        result[0] += 0.9997105404623082;
        result[1] += 0;
        result[2] += 0.0002894595376917669;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.3727370818846661;
        result[1] += 0.0017983455221196498;
        result[2] += 0.006234264476681453;
        result[3] += 0.5312312672341446;
        result[4] += 0.0860808056587939;
        result[5] += 0.0013187867162210765;
        result[6] += 0.0005994485073732166;
      } else {
        result[0] += 0.9665009159905784;
        result[1] += 0;
        result[2] += 0.003402250719706883;
        result[3] += 0.029573410102067522;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005234231876472127;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 0;
        result[1] += 0.00020669698222405952;
        result[2] += 0.006821000413393965;
        result[3] += 0.6575031004547334;
        result[4] += 0.33443571723852833;
        result[5] += 0.0010334849111202976;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.013761467889908258;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9862385321100917;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0.9958004489175296;
        result[1] += 0.0005430453985953227;
        result[2] += 0.002896242125841721;
        result[3] += 0.0005792484251683442;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00018101513286510756;
      } else {
        result[0] += 0.3366733466933868;
        result[1] += 0.036072144288577156;
        result[2] += 0;
        result[3] += 0.627254509018036;
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
        result[0] += 0.406203007518797;
        result[1] += 0;
        result[2] += 0.0050751879699248124;
        result[3] += 0.5870300751879699;
        result[4] += 0;
        result[5] += 0.00018796992481203009;
        result[6] += 0.0015037593984962407;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 0.0009490667510281557;
        result[1] += 0.0009490667510281557;
        result[2] += 0.0025308446694084154;
        result[3] += 0.9743751977222399;
        result[4] += 0.01961404618791522;
        result[5] += 0.0015817779183802596;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.007966011683483803;
        result[2] += 0;
        result[3] += 0.09824747742963356;
        result[4] += 0.8937865108868827;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.018571428571428572;
        result[3] += 0;
        result[4] += 0.9814285714285714;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 0.9960889403925545;
        result[1] += 0.0006156297530238285;
        result[2] += 0.0026798001013978415;
        result[3] += 0.0005069892083725647;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010864054465126386;
      } else {
        result[0] += 0.36455696202531646;
        result[1] += 0.02278481012658228;
        result[2] += 0;
        result[3] += 0.6126582278481013;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.19757453259221833;
        result[1] += 0;
        result[2] += 0.005305709954522487;
        result[3] += 0.796867104598282;
        result[4] += 0;
        result[5] += 0.0002526528549772613;
        result[6] += 0;
      } else {
        result[0] += 0.9942277070063694;
        result[1] += 0;
        result[2] += 0.004378980891719745;
        result[3] += 0.0007961783439490446;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005971337579617834;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
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
        result[0] += 0.004422821760283061;
        result[1] += 0.006634232640424591;
        result[2] += 0.011057054400707651;
        result[3] += 0.9778858911985847;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9873217115689382;
        result[1] += 0;
        result[2] += 0.012678288431061807;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 0.982756143124012;
        result[1] += 0.00014369880729989942;
        result[2] += 0.0015327872778655937;
        result[3] += 0.015423671983522538;
        result[4] += 0;
        result[5] += 9.57992048665996e-05;
        result[6] += 4.78996024332998e-05;
      } else {
        result[0] += 0.0029542097488921715;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9970457902511078;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
        result[0] += 0.706135865595325;
        result[1] += 0.0013878743608473339;
        result[2] += 0.002337472607742878;
        result[3] += 0.2894083272461651;
        result[4] += 0;
        result[5] += 0.0003652300949598247;
        result[6] += 0.0003652300949598247;
      } else {
        result[0] += 0.8955622288955623;
        result[1] += 0;
        result[2] += 0.012345679012345678;
        result[3] += 0.07307307307307308;
        result[4] += 0.01568234901568235;
        result[5] += 0.002002002002002002;
        result[6] += 0.001334668001334668;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0.36205962059620594;
        result[1] += 0.004336043360433604;
        result[2] += 0.008672086720867209;
        result[3] += 0.5913279132791328;
        result[4] += 0.03360433604336043;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.13155386081982842;
        result[1] += 0.008579599618684463;
        result[2] += 0;
        result[3] += 0.6739752144899905;
        result[4] += 0.1858913250714967;
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
        result[0] += 0.313953488372093;
        result[1] += 0;
        result[2] += 0.040697674418604654;
        result[3] += 0.6453488372093024;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41c80000))) ) ) {
        result[0] += 0.7336431226765799;
        result[1] += 0;
        result[2] += 0.005390334572490706;
        result[3] += 0.24014869888475837;
        result[4] += 0.019888475836431226;
        result[5] += 0.0001858736059479554;
        result[6] += 0.0007434944237918215;
      } else {
        result[0] += 0.8938799111354577;
        result[1] += 0.0004564959371861591;
        result[2] += 0.002221613560972641;
        result[3] += 0.10277245199184395;
        result[4] += 0.00039562981222800457;
        result[5] += 6.0866124958154545e-05;
        result[6] += 0.00021303143735354092;
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
        result[2] += 0.0014727540500736377;
        result[3] += 0;
        result[4] += 0.9985272459499264;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ed0000))) ) ) {
        result[0] += 0.31976516634050883;
        result[1] += 0.0019569471624266144;
        result[2] += 0.007436399217221135;
        result[3] += 0.6661448140900196;
        result[4] += 0.004696673189823875;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.012539184952978056;
        result[1] += 0.02821316614420063;
        result[2] += 0;
        result[3] += 0.12225705329153605;
        result[4] += 0.8369905956112853;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0.898876404494382;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.10112359550561797;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.015441630636195183;
        result[1] += 0;
        result[2] += 0.004941321803582459;
        result[3] += 0.12229771463866584;
        result[4] += 0.8573193329215565;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 0.0041055718475073305;
        result[1] += 0.0017595307917888559;
        result[2] += 0.010557184750733136;
        result[3] += 0.9014662756598238;
        result[4] += 0.07917888563049852;
        result[5] += 0.002932551319648093;
        result[6] += 0;
      } else {
        result[0] += 0.2042755344418052;
        result[1] += 0;
        result[2] += 0.019002375296912115;
        result[3] += 0;
        result[4] += 0.7767220902612827;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 0.93578771000317;
        result[1] += 0.0009509577503056651;
        result[2] += 0.002671738441334964;
        result[3] += 0.05995562197165241;
        result[4] += 0;
        result[5] += 0.00013585110718652358;
        result[6] += 0.0004981207263505866;
      } else {
        result[0] += 0.8758398656215006;
        result[1] += 0;
        result[2] += 0.0009798432250839868;
        result[3] += 0.12318029115341547;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.1899836690255852;
        result[1] += 0.003810560696788242;
        result[2] += 0.007076755579749592;
        result[3] += 0.799129014697877;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        result[0] += 0.9074446680080483;
        result[1] += 0;
        result[2] += 0.001341381623071764;
        result[3] += 0.08987256874580819;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001341381623071764;
      } else {
        result[0] += 0.8822926374650513;
        result[1] += 0;
        result[2] += 0.002423112767940354;
        result[3] += 0.11491146318732526;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003727865796831314;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.9855183343352096;
        result[1] += 0.0010929558992294663;
        result[2] += 0.001038308104267993;
        result[3] += 0.012022514891524129;
        result[4] += 5.464779496147331e-05;
        result[5] += 5.464779496147331e-05;
        result[6] += 0.00021859117984589325;
      } else {
        result[0] += 0.7042682926829268;
        result[1] += 0;
        result[2] += 0.0005081300813008131;
        result[3] += 0.2872628726287263;
        result[4] += 0.00796070460704607;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 0.25102519039250154;
        result[1] += 0.0032220269478617464;
        result[2] += 0.0140597539543058;
        result[3] += 0.5527240773286468;
        result[4] += 0.17838312829525485;
        result[5] += 0.0005858230814294084;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.048223350253807105;
        result[4] += 0.9517766497461929;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x41080000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
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
        result[3] += 0.611764705882353;
        result[4] += 0.38823529411764707;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.8193468767799507;
        result[1] += 0.0015663565597114108;
        result[2] += 0.001946079362065692;
        result[3] += 0.16508448832352382;
        result[4] += 0.011486614771217011;
        result[5] += 0.00023732675147142586;
        result[6] += 0.0003322574520599962;
      } else {
        result[0] += 0.8754796773435665;
        result[1] += 0;
        result[2] += 0.003054272065157804;
        result[3] += 0.006656746808677266;
        result[4] += 0.11480930378259849;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0.31842231842231844;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6815776815776816;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7604790419161677;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.23952095808383234;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421c0000))) ) ) {
        result[0] += 0.0014814814814814814;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9985185185185185;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9794214136594095;
        result[1] += 0;
        result[2] += 0.01550849985087981;
        result[3] += 0;
        result[4] += 0.0020876826722338203;
        result[5] += 0.001789442290486132;
        result[6] += 0.0011929615269907546;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0.5006738544474394;
        result[1] += 0;
        result[2] += 0.014824797843665768;
        result[3] += 0.4831536388140162;
        result[4] += 0.0013477088948787063;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.15833333333333333;
        result[1] += 0.010833333333333334;
        result[2] += 0.005;
        result[3] += 0.8258333333333333;
        result[4] += 0;
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
        result[0] += 0.002398081534772182;
        result[1] += 0.005595523581135092;
        result[2] += 0;
        result[3] += 0.21982414068745004;
        result[4] += 0.7721822541966427;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0.995740653099858;
        result[1] += 0;
        result[2] += 0.003312825366777094;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000946521533364884;
      } else {
        result[0] += 0.9997928062323885;
        result[1] += 0;
        result[2] += 0.00020719376761147026;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        result[0] += 0.6421254801536492;
        result[1] += 0.0013718675690506678;
        result[2] += 0.005761843790012805;
        result[3] += 0.32138284250960314;
        result[4] += 0.028626303274190603;
        result[5] += 9.145783793671119e-05;
        result[6] += 0.0006402048655569783;
      } else {
        result[0] += 0.015285126396237508;
        result[1] += 0;
        result[2] += 0.014697236919459141;
        result[3] += 0.6901822457378013;
        result[4] += 0.2774838330393886;
        result[5] += 0.0023515579071134627;
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
        result[0] += 0;
        result[1] += 0.00028571428571428574;
        result[2] += 0;
        result[3] += 0.9382857142857143;
        result[4] += 0.060571428571428575;
        result[5] += 0.0008571428571428571;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9995440036479708;
        result[5] += 0.00045599635202918376;
        result[6] += 0;
      } else {
        result[0] += 0.7050359712230215;
        result[1] += 0.050359712230215826;
        result[2] += 0.2302158273381295;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.014388489208633094;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.9961093641741726;
        result[1] += 0;
        result[2] += 0.0012791131482172361;
        result[3] += 0.002504929915258754;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010659276235143633;
      } else {
        result[0] += 0.966934763181412;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.03306523681858802;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0.7735936059022441;
        result[1] += 0;
        result[2] += 0.004918536735321242;
        result[3] += 0.2199508146326468;
        result[4] += 0;
        result[5] += 0.0001537042729787888;
        result[6] += 0.0013833384568090992;
      } else {
        result[0] += 0.8149228453142642;
        result[1] += 0.000940910801656003;
        result[2] += 0.005739555890101619;
        result[3] += 0.17830259691381256;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9.40910801656003e-05;
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
        result[0] += 0.045454545454545456;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9545454545454546;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.3519125683060109;
        result[1] += 0.0058287795992714025;
        result[2] += 0.010564663023679418;
        result[3] += 0.6316939890710382;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 0.9993485841284439;
        result[1] += 0;
        result[2] += 0.000613097290876346;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.831858067977162e-05;
      } else {
        result[0] += 0.7142857142857143;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.2857142857142857;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.36641929499072357;
        result[1] += 0.0027829313543599257;
        result[2] += 0.007884972170686457;
        result[3] += 0.5253942486085343;
        result[4] += 0.09589517625231911;
        result[5] += 0.0011595547309833025;
        result[6] += 0.00046382189239332097;
      } else {
        result[0] += 0.9707760314341847;
        result[1] += 0;
        result[2] += 0.0031925343811394892;
        result[3] += 0.025294695481335953;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007367387033398821;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.010079575596816976;
        result[1] += 0.003713527851458886;
        result[2] += 0.013262599469496022;
        result[3] += 0.9612732095490716;
        result[4] += 0.011671087533156498;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9812244897959184;
        result[1] += 0;
        result[2] += 0.018775510204081632;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.3924646781789639;
        result[4] += 0.6075353218210361;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0006949270326615705;
        result[1] += 0.009034051424600417;
        result[2] += 0;
        result[3] += 0.04100069492703266;
        result[4] += 0.9492703266157053;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 0.9837472432639754;
        result[1] += 0.00033560264646658356;
        result[2] += 0.001534183526704382;
        result[3] += 0.01385559497554895;
        result[4] += 0.00019177294083804776;
        result[5] += 9.588647041902388e-05;
        result[6] += 0.0002397161760475597;
      } else {
        result[0] += 0.0015105740181268882;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9984894259818731;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
        result[0] += 0.8016550131502983;
        result[1] += 0.000898069151324652;
        result[2] += 0.0033998332157290398;
        result[3] += 0.1935339021104625;
        result[4] += 0;
        result[5] += 0.00012829559304637885;
        result[6] += 0.0003848867791391366;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.016597510373443983;
        result[3] += 0.946058091286307;
        result[4] += 0.03402489626556016;
        result[5] += 0.0033195020746887966;
        result[6] += 0;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 0.9945011783189317;
        result[1] += 0;
        result[2] += 0.0054988216810683424;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9997913406364111;
        result[1] += 0;
        result[2] += 0.00020865936358894105;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 0.014618299945858148;
        result[1] += 0.005414185165132647;
        result[2] += 0.007038440714672442;
        result[3] += 0.6543945136256993;
        result[4] += 0.3170907778379354;
        result[5] += 0.0014437827107020393;
        result[6] += 0;
      } else {
        result[0] += 0.9816731080912604;
        result[1] += 0;
        result[2] += 0.005236254831068445;
        result[3] += 0.011594564268794415;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0014960728088766987;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 0.0016276041666666667;
        result[2] += 0;
        result[3] += 0.9964192708333334;
        result[4] += 0.0016276041666666667;
        result[5] += 0.0003255208333333333;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.04016620498614959;
        result[3] += 0;
        result[4] += 0.9584487534626039;
        result[5] += 0.0013850415512465376;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x43080000))) ) ) {
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
        result[0] += 0.9980086893555395;
        result[1] += 0;
        result[2] += 0.001719768283852281;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00027154236060825495;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 0.01611849270311479;
        result[1] += 0.007623611413635374;
        result[2] += 0.01590067523415378;
        result[3] += 0.7945981267697669;
        result[4] += 0.16467000653452407;
        result[5] += 0.0010890873448050533;
        result[6] += 0;
      } else {
        result[0] += 0.7415289834780173;
        result[1] += 0;
        result[2] += 0.0034537477830673016;
        result[3] += 0.2539904788574629;
        result[4] += 0;
        result[5] += 9.334453467749463e-05;
        result[6] += 0.0009334453467749463;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.3830769230769231;
        result[4] += 0.6169230769230769;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0014347202295552368;
        result[1] += 0.006456241032998565;
        result[2] += 0;
        result[3] += 0.05954088952654232;
        result[4] += 0.9325681492109039;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 0.0007830853563038371;
        result[1] += 0.0007830853563038371;
        result[2] += 0.008613938919342208;
        result[3] += 0.8758809710258418;
        result[4] += 0.1096319498825372;
        result[5] += 0.004306969459671104;
        result[6] += 0;
      } else {
        result[0] += 0.34172661870503596;
        result[1] += 0;
        result[2] += 0.01079136690647482;
        result[3] += 0;
        result[4] += 0.6474820143884892;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.9909839557006958;
        result[1] += 0.0005324435609825359;
        result[2] += 0.0018458043447394576;
        result[3] += 0.006424818969189266;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00021297742439301435;
      } else {
        result[0] += 0.6514853774130158;
        result[1] += 0;
        result[2] += 0.0027742457519361924;
        result[3] += 0.3445844411050746;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0011559357299734134;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        result[0] += 0.15529411764705883;
        result[1] += 0.005490196078431373;
        result[2] += 0.00784313725490196;
        result[3] += 0.8313725490196079;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 0.01904761904761905;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6571428571428571;
        result[4] += 0.3238095238095238;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0006447453255963894;
        result[1] += 0.006447453255963894;
        result[2] += 0;
        result[3] += 0.05738233397807866;
        result[4] += 0.935525467440361;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
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
        result[0] += 0.9991184023918126;
        result[1] += 0;
        result[2] += 0.0008049369466058492;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.666066158150945e-05;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.7425873465533522;
        result[1] += 0.0012275731822474032;
        result[2] += 0.0058545797922568464;
        result[3] += 0.22530689329556186;
        result[4] += 0.02351274787535411;
        result[5] += 0.0008498583569405099;
        result[6] += 0.0006610009442870633;
      } else {
        result[0] += 0;
        result[1] += 0.0021396095212623694;
        result[2] += 0.007488633324418294;
        result[3] += 0.8087723990371757;
        result[4] += 0.18133190692698584;
        result[5] += 0.0002674511901577962;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 0.016715116279069766;
        result[2] += 0;
        result[3] += 0.9832848837209303;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9962825278810409;
        result[1] += 0;
        result[2] += 0.0037174721189591076;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        result[0] += 0.3171545016672842;
        result[1] += 0.0029640607632456465;
        result[2] += 0.008151167098925528;
        result[3] += 0.6717302704705447;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0056179775280898875;
        result[1] += 0.042134831460674156;
        result[2] += 0;
        result[3] += 0.1601123595505618;
        result[4] += 0.7921348314606742;
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
        result[0] += 0.3484848484848485;
        result[1] += 0;
        result[2] += 0.02727272727272727;
        result[3] += 0.6242424242424243;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42aa0000))) ) ) {
        result[0] += 0.11617312072892938;
        result[1] += 0.0005694760820045558;
        result[2] += 0;
        result[3] += 0.8792710706150342;
        result[4] += 0.0028473804100227792;
        result[5] += 0.0011389521640091116;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.047225501770956316;
        result[3] += 0;
        result[4] += 0.9527744982290437;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.9927464556544675;
        result[1] += 0.0005861449976187859;
        result[2] += 0.0020881415540169247;
        result[3] += 0.0043594534197897205;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00021980437410704473;
      } else {
        result[0] += 0.6587473002159828;
        result[1] += 0;
        result[2] += 0.0037512788450608167;
        result[3] += 0.33670569512333753;
        result[4] += 0;
        result[5] += 0.00034102534955098333;
        result[6] += 0.00045470046606797777;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.010706638115631691;
        result[1] += 0.009100642398286937;
        result[2] += 0.016059957173447537;
        result[3] += 0.9641327623126338;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9895506792058516;
        result[1] += 0;
        result[2] += 0.01044932079414838;
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
        result[0] += 0.006920415224913495;
        result[1] += 0.03806228373702422;
        result[2] += 0;
        result[3] += 0.9550173010380623;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42aa0000))) ) ) {
        result[0] += 0.12677657760090963;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8669698692438886;
        result[4] += 0.002842524161455373;
        result[5] += 0.003411028993746447;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.029481132075471702;
        result[3] += 0;
        result[4] += 0.9693396226415095;
        result[5] += 0.001179245283018868;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.8812755706802279;
        result[1] += 0.0005353114365464765;
        result[2] += 0.0022559553397315797;
        result[3] += 0.11547432416931136;
        result[4] += 0;
        result[5] += 0.00011470959354567354;
        result[6] += 0.0003441287806370206;
      } else {
        result[0] += 0.9866507272365014;
        result[1] += 0;
        result[2] += 0.001992428770671449;
        result[3] += 0.011057979677226541;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002988643156007173;
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
