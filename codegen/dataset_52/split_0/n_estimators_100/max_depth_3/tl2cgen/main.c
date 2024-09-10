
#include "header.h"


static const int32_t num_class[] = {  2, };

int32_t get_num_target(void) {
  return N_TARGET;
}
void get_num_class(int32_t* out) {
  for (int i = 0; i < N_TARGET; ++i) {
    out[i] = num_class[i];
  }
}
int32_t get_num_feature(void) {
  return 34;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.001044999997247941792) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.1039049997925758362) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.3351449966430664062) ) ) {
        result[0] += 0.5;
        result[1] += 0.5;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.8781099915504455566) ) ) {
        result[0] += 0.19230769230769232;
        result[1] += 0.8076923076923077;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1888450011610984802) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.06569343065693431;
        result[1] += 0.9343065693430657;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.2339249961078166962) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.4666666666666667;
        result[1] += 0.5333333333333333;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.04028999991714954376) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.1547349952161312103) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.33799000084400177) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9997600018978118896) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9290950000286102295) ) ) {
        result[0] += 0.07801418439716312;
        result[1] += 0.9219858156028369;
      } else {
        result[0] += 0.5;
        result[1] += 0.5;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.7756849825382232666) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.3939393939393939;
        result[1] += 0.6060606060606061;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2262849956750869751) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.9051699936389923096) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.07985000312328338623) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.12359550561797752;
        result[1] += 0.8764044943820225;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2179500013589859009) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9814800024032592773) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.830110013484954834) ) ) {
        result[0] += 0.12568306010928962;
        result[1] += 0.8743169398907104;
      } else {
        result[0] += 0.7857142857142857;
        result[1] += 0.21428571428571427;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2927449941635131836) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1351950019598007202) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.0004450000124052166939) ) ) {
        result[0] += 0.46511627906976744;
        result[1] += 0.5348837209302325;
      } else {
        result[0] += 0.8461538461538461;
        result[1] += 0.15384615384615385;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7121499776840209961) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.07586206896551724;
        result[1] += 0.9241379310344827;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.1527649983763694763) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.09367500245571136475) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.9697250127792358398) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.783405005931854248) ) ) {
        result[0] += 0.11170212765957446;
        result[1] += 0.8882978723404256;
      } else {
        result[0] += 0.8181818181818182;
        result[1] += 0.18181818181818182;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.2609449997544288635) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2875100076198577881) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.0467449994757771492) ) ) {
        result[0] += 0.9473684210526315;
        result[1] += 0.05263157894736842;
      } else {
        result[0] += 0.48;
        result[1] += 0.52;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9994949996471405029) ) ) {
        result[0] += 0.09558823529411764;
        result[1] += 0.9044117647058824;
      } else {
        result[0] += 0.5925925925925926;
        result[1] += 0.4074074074074074;
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5442550033330917358) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.9830049872398376465) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.4475899934768676758) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1929550021886825562) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.04146500024944543839) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6363636363636364;
        result[1] += 0.36363636363636365;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.8523750007152557373) ) ) {
        result[0] += 0.1358695652173913;
        result[1] += 0.8641304347826086;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.04615999944508075714) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.6671349853277206421) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.1488099992275238037) ) ) {
        result[0] += 0.7777777777777778;
        result[1] += 0.2222222222222222;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.4122749865055084229) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.15384615384615385;
        result[1] += 0.8461538461538461;
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.3665899932384490967) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.11688311688311688;
        result[1] += 0.8831168831168831;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7472899854183197021) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
        result[0] += 0.8;
        result[1] += 0.2;
      } else {
        result[0] += 0.14772727272727273;
        result[1] += 0.8522727272727273;
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1049150004982948303) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.5288199931383132935) ) ) {
        result[0] += 0.25;
        result[1] += 0.75;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9566900134086608887) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.2412600070238113403) ) ) {
        result[0] += 0.8;
        result[1] += 0.2;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7313249707221984863) ) ) {
        result[0] += 0.12883435582822086;
        result[1] += 0.8711656441717791;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.1304450035095214844) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.5524049997329711914) ) ) {
        result[0] += 0.3333333333333333;
        result[1] += 0.6666666666666666;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.7381399869918823242) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8057949841022491455) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.06417112299465241;
        result[1] += 0.9358288770053476;
      }
    }
  }
  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.2104000002145767212) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4395599961280822754) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1644499972462654114) ) ) {
        result[0] += 0.8333333333333334;
        result[1] += 0.16666666666666666;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.3914799988269805908) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.8;
        result[1] += 0.2;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.89342498779296875) ) ) {
        result[0] += 0.03278688524590164;
        result[1] += 0.9672131147540983;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.2770249992609024048) ) ) {
        result[0] += 0.9285714285714286;
        result[1] += 0.07142857142857142;
      } else {
        result[0] += 0.4074074074074074;
        result[1] += 0.5925925925925926;
      }
    }
  }
  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.5880299806594848633) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.4242150001227855682) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.5792549997568130493) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5490350127220153809) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.8723399937152862549) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5;
        result[1] += 0.5;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
        result[0] += 0.8571428571428571;
        result[1] += 0.14285714285714285;
      } else {
        result[0] += 0.1330049261083744;
        result[1] += 0.8669950738916257;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.9509800076484680176) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.969765007495880127) ) ) {
        result[0] += 0.9;
        result[1] += 0.1;
      } else {
        result[0] += 0.13440860215053763;
        result[1] += 0.8655913978494624;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2192749977111816406) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
        result[0] += 0.08333333333333333;
        result[1] += 0.9166666666666666;
      } else {
        result[0] += 0.6363636363636364;
        result[1] += 0.36363636363636365;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8057949841022491455) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9105649888515472412) ) ) {
        result[0] += 0.2;
        result[1] += 0.8;
      } else {
        result[0] += 0.9166666666666666;
        result[1] += 0.08333333333333333;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9127549827098846436) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.06670500338077545166) ) ) {
        result[0] += 0.8;
        result[1] += 0.2;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
        result[0] += 0.13966480446927373;
        result[1] += 0.8603351955307262;
      } else {
        result[0] += 0.918918918918919;
        result[1] += 0.08108108108108109;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2018849998712539673) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.009259999729692935944) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.1498500034213066101) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9561049938201904297) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1321949958801269531) ) ) {
        result[0] += 0.48863636363636365;
        result[1] += 0.5113636363636364;
      } else {
        result[0] += 0.08264462809917356;
        result[1] += 0.9173553719008265;
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8250949978828430176) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.149645000696182251) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
        result[0] += 0.07017543859649122;
        result[1] += 0.9298245614035088;
      } else {
        result[0] += 0.625;
        result[1] += 0.375;
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.4117650091648101807) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3437649980187416077) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8646399974822998047) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.3141649961471557617) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.152225002646446228) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.8571428571428571;
        result[1] += 0.14285714285714285;
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1644600033760070801) ) ) {
        result[0] += 0.5098039215686274;
        result[1] += 0.49019607843137253;
      } else {
        result[0] += 0.07228915662650602;
        result[1] += 0.927710843373494;
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.9031099975109100342) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.420984998345375061) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1466550007462501526) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.4087100028991699219) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
        result[0] += 0.9736842105263158;
        result[1] += 0.02631578947368421;
      } else {
        result[0] += 0.5909090909090909;
        result[1] += 0.4090909090909091;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.4548499882221221924) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.8788850009441375732) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.4659899920225143433) ) ) {
        result[0] += 0.12244897959183673;
        result[1] += 0.8775510204081632;
      } else {
        result[0] += 0.8571428571428571;
        result[1] += 0.14285714285714285;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1705899983644485474) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.7998900115489959717) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.3199850022792816162) ) ) {
        result[0] += 0.6153846153846154;
        result[1] += 0.38461538461538464;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7876749932765960693) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.5400600135326385498) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.09022556390977443;
        result[1] += 0.9097744360902256;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2700150012969970703) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.638889998197555542) ) ) {
        result[0] += 0.5;
        result[1] += 0.5;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.9108049869537353516) ) ) {
        result[0] += 0.06557377049180328;
        result[1] += 0.9344262295081968;
      } else {
        result[0] += 0.6818181818181818;
        result[1] += 0.3181818181818182;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3585000038146972656) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.05451499857008457184) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.01213499996811151505) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8057949841022491455) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.09340659340659341;
        result[1] += 0.9065934065934066;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9566900134086608887) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.03596000000834465027) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1246299967169761658) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.3695652173913043;
        result[1] += 0.6304347826086957;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6824550032615661621) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.06962025316455696;
        result[1] += 0.930379746835443;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1705899983644485474) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.17857142857142858;
        result[1] += 0.8214285714285714;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.03680000081658363342) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.01680672268907563;
        result[1] += 0.9831932773109243;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.9263550043106079102) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6111111111111112;
        result[1] += 0.3888888888888889;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1266599968075752258) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.89342498779296875) ) ) {
        result[0] += 0.07253886010362694;
        result[1] += 0.927461139896373;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.07123999856412410736) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7908799946308135986) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.647060006856918335) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.11578947368421053;
        result[1] += 0.8842105263157894;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.845485001802444458) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8980149924755096436) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.6228149831295013428) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2869900017976760864) ) ) {
        result[0] += 0.782608695652174;
        result[1] += 0.21739130434782608;
      } else {
        result[0] += 0.06470588235294118;
        result[1] += 0.9352941176470588;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.04615999944508075714) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.6448200047016143799) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2568950057029724121) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.75;
        result[1] += 0.25;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.15789473684210525;
        result[1] += 0.8421052631578947;
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7903949916362762451) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1860899999737739563) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.13559322033898305;
        result[1] += 0.864406779661017;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5434100180864334106) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9552350044250488281) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.8899300098419189453) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.3381300121545791626) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.0001400000037392601371) ) ) {
        result[0] += 0.30357142857142855;
        result[1] += 0.6964285714285714;
      } else {
        result[0] += 0.7884615384615384;
        result[1] += 0.21153846153846154;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.06722689075630252;
        result[1] += 0.9327731092436975;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.7396450042724609375) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.04375;
        result[1] += 0.95625;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.5082300007343292236) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.512999996542930603) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.375;
        result[1] += 0.625;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.9268800020217895508) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.4828200042247772217) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.12290502793296089;
        result[1] += 0.8770949720670391;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.04914500005543231964) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.8019949793815612793) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.38461538461538464;
        result[1] += 0.6153846153846154;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3374749943614006042) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.9166666666666666;
        result[1] += 0.08333333333333333;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.9165700078010559082) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.13793103448275862;
        result[1] += 0.8620689655172413;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.8607999980449676514) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3636350035667419434) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.42105263157894735;
        result[1] += 0.5789473684210527;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.9990999996662139893) ) ) {
        result[0] += 0.08333333333333333;
        result[1] += 0.9166666666666666;
      } else {
        result[0] += 0.41379310344827586;
        result[1] += 0.5862068965517241;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.04673499986529350281) ) ) {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.1384399980306625366) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.1256850063800811768) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.3407450020313262939) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.2649250030517578125) ) ) {
        result[0] += 0.25;
        result[1] += 0.75;
      } else {
        result[0] += 0.92;
        result[1] += 0.08;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.8078349828720092773) ) ) {
        result[0] += 0.11299435028248588;
        result[1] += 0.8870056497175142;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.125) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.9981200098991394043) ) ) {
        result[0] += 0.07051282051282051;
        result[1] += 0.9294871794871795;
      } else {
        result[0] += 0.475;
        result[1] += 0.525;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2248550057411193848) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.3334349989891052246) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.2270999997854232788) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.5880299806594848633) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.2534950068220496178) ) ) {
        result[0] += 0.6;
        result[1] += 0.4;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.006335000041872262955) ) ) {
        result[0] += 0.46153846153846156;
        result[1] += 0.5384615384615384;
      } else {
        result[0] += 0.09883720930232558;
        result[1] += 0.9011627906976745;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1133700013160705566) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2113500013947486877) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.3749499917030334473) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.1342799998819828033) ) ) {
        result[0] += 0.4;
        result[1] += 0.6;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9105649888515472412) ) ) {
        result[0] += 0.12352941176470589;
        result[1] += 0.8764705882352941;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8927049934864044189) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.6790899932384490967) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.11475409836065574;
        result[1] += 0.8852459016393442;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.02214000001549720764) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.3221849948167800903) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.4771250039339065552) ) ) {
        result[0] += 0.9166666666666666;
        result[1] += 0.08333333333333333;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.9684099853038787842) ) ) {
        result[0] += 0.09523809523809523;
        result[1] += 0.9047619047619048;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9970000088214874268) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.4828200042247772217) ) ) {
        result[0] += 0.8333333333333334;
        result[1] += 0.16666666666666666;
      } else {
        result[0] += 0.07518796992481203;
        result[1] += 0.924812030075188;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.6800599992275238037) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5294117647058824;
        result[1] += 0.47058823529411764;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8927049934864044189) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.3813199996948242188) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
        result[0] += 0.12698412698412698;
        result[1] += 0.873015873015873;
      } else {
        result[0] += 0.6363636363636364;
        result[1] += 0.36363636363636365;
      }
    }
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9447599947452545166) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.8295449912548065186) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.1377150006592273712) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5;
        result[1] += 0.5;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7908799946308135986) ) ) {
        result[0] += 0.1951219512195122;
        result[1] += 0.8048780487804879;
      } else {
        result[0] += 0.9230769230769231;
        result[1] += 0.07692307692307693;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7953100204467773438) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.2700499966740608215) ) ) {
        result[0] += 0.7142857142857143;
        result[1] += 0.2857142857142857;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.8230099976062774658) ) ) {
        result[0] += 0.0797872340425532;
        result[1] += 0.9202127659574468;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6824550032615661621) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4330900013446807861) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.15053763440860216;
        result[1] += 0.8494623655913979;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9561049938201904297) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.8165850043296813965) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.3333350121974945068) ) ) {
        result[0] += 0.5;
        result[1] += 0.5;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.8423199951648712158) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.5329150035977363586) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3547399938106536865) ) ) {
        result[0] += 0.4931506849315068;
        result[1] += 0.5068493150684932;
      } else {
        result[0] += 0.1;
        result[1] += 0.9;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.0914500020444393158) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.07233500108122825623) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.2160550039261579514) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.12429378531073447;
        result[1] += 0.8757062146892656;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1111000031232833862) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1304000020027160645) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.5801550000905990601) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.3389400094747543335) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.3289299905300140381) ) ) {
        result[0] += 0.9130434782608695;
        result[1] += 0.08695652173913043;
      } else {
        result[0] += 0.09826589595375723;
        result[1] += 0.9017341040462428;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.6096349954605102539) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7953100204467773438) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0001250000059371814132) ) ) {
        result[0] += 0.5084745762711864;
        result[1] += 0.4915254237288136;
      } else {
        result[0] += 0.1292517006802721;
        result[1] += 0.8707482993197279;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.04039999842643737793) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.08971500303596258163) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1684800013899803162) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
        result[0] += 0.06666666666666667;
        result[1] += 0.9333333333333333;
      } else {
        result[0] += 0.6538461538461539;
        result[1] += 0.34615384615384615;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.1291399970650672913) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5085200071334838867) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.1683300025761127472) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.9;
        result[1] += 0.1;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.7356999814510345459) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5;
        result[1] += 0.5;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.08522727272727272;
        result[1] += 0.9147727272727273;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.10588235294117647;
        result[1] += 0.8941176470588236;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.4831449836492538452) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.7259000241756439209) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.43478260869565216;
        result[1] += 0.5652173913043478;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.1464700028300285339) ) ) {
        result[0] += 0.8;
        result[1] += 0.2;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6023550033569335938) ) ) {
        result[0] += 0.75;
        result[1] += 0.25;
      } else {
        result[0] += 0.044444444444444446;
        result[1] += 0.9555555555555556;
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.001109999953769147396) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.03719500079751014709) ) ) {
        result[0] += 0.8333333333333334;
        result[1] += 0.16666666666666666;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9352599978446960449) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.42857142857142855;
        result[1] += 0.5714285714285714;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.09759000316262245178) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.1316799968481063843) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9127549827098846436) ) ) {
        result[0] += 0.8888888888888888;
        result[1] += 0.1111111111111111;
      } else {
        result[0] += 0.09550561797752809;
        result[1] += 0.9044943820224719;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4454549998044967651) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.03018500003963708878) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.1484850049018859863) ) ) {
        result[0] += 0.5454545454545454;
        result[1] += 0.45454545454545453;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.002039999933913350105) ) ) {
        result[0] += 0.8666666666666667;
        result[1] += 0.13333333333333333;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.3432650119066238403) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.8211749792098999023) ) ) {
        result[0] += 0.9333333333333333;
        result[1] += 0.06666666666666667;
      } else {
        result[0] += 0.1437908496732026;
        result[1] += 0.8562091503267973;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.0914500020444393158) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.2755800038576126099) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.1607049964368343353) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.3333333333333333;
        result[1] += 0.6666666666666666;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.786119997501373291) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.1256544502617801;
        result[1] += 0.8743455497382199;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2389599978923797607) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.02849999908357858658) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.06857142857142857;
        result[1] += 0.9314285714285714;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.008654999546706676483) ) ) {
        result[0] += 0.5833333333333334;
        result[1] += 0.4166666666666667;
      } else {
        result[0] += 0.9259259259259259;
        result[1] += 0.07407407407407407;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2192749977111816406) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.5285849869251251221) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.8409349918365478516) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.875;
        result[1] += 0.125;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8371500074863433838) ) ) {
        result[0] += 0.09195402298850575;
        result[1] += 0.9080459770114943;
      } else {
        result[0] += 0.8421052631578947;
        result[1] += 0.15789473684210525;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2193350046873092651) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.8311949968338012695) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.5186400003731250763) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.01729499921202659607) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.75;
        result[1] += 0.25;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9315849840641021729) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.10582010582010581;
        result[1] += 0.8941798941798942;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.3289299905300140381) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9614199995994567871) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.10497237569060773;
        result[1] += 0.8950276243093923;
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7935449779033660889) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.3813199996948242188) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.20930232558139536;
        result[1] += 0.7906976744186046;
      }
    }
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5911200046539306641) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.6049999967217445374) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6;
        result[1] += 0.4;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8989500105381011963) ) ) {
        result[0] += 0.22277227722772278;
        result[1] += 0.7772277227722773;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.188470005989074707) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.5151999890804290771) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.1691149994730949402) ) ) {
        result[0] += 0.5909090909090909;
        result[1] += 0.4090909090909091;
      } else {
        result[0] += 0.9545454545454546;
        result[1] += 0.045454545454545456;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.08942501246929168701) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.034482758620689655;
        result[1] += 0.9655172413793104;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.8250899910926818848) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9901649951934814453) ) ) {
        result[0] += 0.030534351145038167;
        result[1] += 0.9694656488549618;
      } else {
        result[0] += 0.5294117647058824;
        result[1] += 0.47058823529411764;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.9808050096035003662) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.04028999991714954376) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.2647399976849555969) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.09160500019788742065) ) ) {
        result[0] += 0.25;
        result[1] += 0.75;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.3176300078630447388) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9044649899005889893) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.45454545454545453;
        result[1] += 0.5454545454545454;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1684800013899803162) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.1761006289308176;
        result[1] += 0.8238993710691824;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.04146500024944543839) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.2128300070762634277) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9;
        result[1] += 0.1;
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.8966900110244750977) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6824550032615661621) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.1043956043956044;
        result[1] += 0.8956043956043956;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1293499954044818878) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.6096349954605102539) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.142404995858669281) ) ) {
        result[0] += 0.7619047619047619;
        result[1] += 0.23809523809523808;
      } else {
        result[0] += 0.0658682634730539;
        result[1] += 0.9341317365269461;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.6096349954605102539) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.03986000083386898041) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.09893999993801116943) ) ) {
        result[0] += 0.3125;
        result[1] += 0.6875;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
        result[0] += 0.10909090909090909;
        result[1] += 0.8909090909090909;
      } else {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1111000031232833862) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.02250000089406967163) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.041916167664670656;
        result[1] += 0.9580838323353293;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.6907500028610229492) ) ) {
        result[0] += 0.48;
        result[1] += 0.52;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6457199752330780029) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.6489000022411346436) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.8097999989986419678) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6503849923610687256) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.7688849866390228271) ) ) {
        result[0] += 0.5;
        result[1] += 0.5;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.739674985408782959) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.15270935960591134;
        result[1] += 0.8472906403940886;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6262149810791015625) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.1166549976915121078) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.4136700108647346497) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8980149924755096436) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3471550047397613525) ) ) {
        result[0] += 0.4090909090909091;
        result[1] += 0.5909090909090909;
      } else {
        result[0] += 0.10810810810810811;
        result[1] += 0.8918918918918919;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9366349875926971436) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.7901949882507324219) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4454549998044967651) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.134040001779794693) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8674199879169464111) ) ) {
        result[0] += 0.1;
        result[1] += 0.9;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8145000040531158447) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.8275400102138519287) ) ) {
        result[0] += 0.7368421052631579;
        result[1] += 0.2631578947368421;
      } else {
        result[0] += 0.11170212765957446;
        result[1] += 0.8882978723404256;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.07038500159978866577) ) ) {
        result[0] += 0.4;
        result[1] += 0.6;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
        result[0] += 0.05649717514124294;
        result[1] += 0.943502824858757;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9533349871635437012) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.8571450114250183105) ) ) {
        result[0] += 0.5238095238095238;
        result[1] += 0.47619047619047616;
      } else {
        result[0] += 0.8888888888888888;
        result[1] += 0.1111111111111111;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.8091949820518493652) ) ) {
        result[0] += 0.1368421052631579;
        result[1] += 0.8631578947368421;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.2902100086212158203) ) ) {
        result[0] += 0.75;
        result[1] += 0.25;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
        result[0] += 0.09941520467836257;
        result[1] += 0.9005847953216374;
      } else {
        result[0] += 0.6923076923076923;
        result[1] += 0.3076923076923077;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2179500013589859009) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.16304347826086957;
        result[1] += 0.8369565217391305;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.09160500019788742065) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.7451000064611434937) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.9481050074100494385) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
        result[0] += 0.9333333333333333;
        result[1] += 0.06666666666666667;
      } else {
        result[0] += 0.11049723756906077;
        result[1] += 0.8895027624309392;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0002000000094994902611) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4564349949359893799) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.09893999993801116943) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.8911249935626983643) ) ) {
        result[0] += 0.26666666666666666;
        result[1] += 0.7333333333333333;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7908799946308135986) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
        result[0] += 0.9375;
        result[1] += 0.0625;
      } else {
        result[0] += 0.05454545454545454;
        result[1] += 0.9454545454545454;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.5183350145816802979) ) ) {
        result[0] += 0.5;
        result[1] += 0.5;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9322450160980224609) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9257999956607818604) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.8972699940204620361) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5;
        result[1] += 0.5;
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.00913000013679265976) ) ) {
        result[0] += 0.7419354838709677;
        result[1] += 0.25806451612903225;
      } else {
        result[0] += 0.143646408839779;
        result[1] += 0.856353591160221;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.9972400069236755371) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.4576449990272521973) ) ) {
        result[0] += 0.9;
        result[1] += 0.1;
      } else {
        result[0] += 0.07784431137724551;
        result[1] += 0.9221556886227545;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.6932149976491928101) ) ) {
        result[0] += 0.391304347826087;
        result[1] += 0.6086956521739131;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.2104000002145767212) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7521849870681762695) ) ) {
        result[0] += 0.92;
        result[1] += 0.08;
      } else {
        result[0] += 0.1590909090909091;
        result[1] += 0.8409090909090909;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7871949970722198486) ) ) {
        result[0] += 0.1417910447761194;
        result[1] += 0.8582089552238806;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2018849998712539673) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.2968199998140335083) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5;
        result[1] += 0.5;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.7381399869918823242) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.1919191919191919;
        result[1] += 0.8080808080808081;
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2943850010633468628) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3707499951124191284) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5151515151515151;
        result[1] += 0.48484848484848486;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.230140000581741333) ) ) {
        result[0] += 0.9166666666666666;
        result[1] += 0.08333333333333333;
      } else {
        result[0] += 0.02702702702702703;
        result[1] += 0.972972972972973;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.8788850009441375732) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.03905000165104866028) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.08661417322834646;
        result[1] += 0.9133858267716536;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.143844999372959137) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.1171250026673078537) ) ) {
        result[0] += 0.3333333333333333;
        result[1] += 0.6666666666666666;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6832000017166137695) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.08290155440414508;
        result[1] += 0.917098445595855;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9127549827098846436) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.5714050084352493286) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.4331749975681304932) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.0594349987804889679) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-1.499999962106812745e-05) ) ) {
        result[0] += 0.2878787878787879;
        result[1] += 0.7121212121212122;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.8126150071620941162) ) ) {
        result[0] += 0.08333333333333333;
        result[1] += 0.9166666666666666;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.08839000016450881958) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.09976499900221824646) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.974970012903213501) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7908799946308135986) ) ) {
        result[0] += 0.04895104895104895;
        result[1] += 0.951048951048951;
      } else {
        result[0] += 0.6363636363636364;
        result[1] += 0.36363636363636365;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.2717449963092803955) ) ) {
        result[0] += 0.9259259259259259;
        result[1] += 0.07407407407407407;
      } else {
        result[0] += 0.45;
        result[1] += 0.55;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9927799999713897705) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.0269999997690320015) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1904850006103515625) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.17142857142857143;
        result[1] += 0.8285714285714286;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.4539649933576583862) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.0196078431372549;
        result[1] += 0.9803921568627451;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.009455000050365924835) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9068599939346313477) ) ) {
        result[0] += 0.9;
        result[1] += 0.1;
      } else {
        result[0] += 0.2727272727272727;
        result[1] += 0.7272727272727273;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.1301500014960765839) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.875;
        result[1] += 0.125;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2193350046873092651) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7953100204467773438) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5555555555555556;
        result[1] += 0.4444444444444444;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.678059995174407959) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.07608695652173914;
        result[1] += 0.9239130434782609;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9257999956607818604) ) ) {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.4157600104808807373) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.06015999987721443176) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2528899982571601868) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9287050068378448486) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.13736263736263737;
        result[1] += 0.8626373626373627;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.1385250017046928406) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.09781499952077865601) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1849500015377998352) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.2564550042152404785) ) ) {
        result[0] += 0.4074074074074074;
        result[1] += 0.5925925925925926;
      } else {
        result[0] += 0.008771929824561403;
        result[1] += 0.9912280701754386;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.7887899875640869141) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.45;
        result[1] += 0.55;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2021749988198280334) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.09069000184535980225) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.8100599944591522217) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.9906100034713745117) ) ) {
        result[0] += 0.05625;
        result[1] += 0.94375;
      } else {
        result[0] += 0.4411764705882353;
        result[1] += 0.5588235294117647;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5911200046539306641) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9322450160980224609) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7362250089645385742) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1779949963092803955) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1133700013160705566) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.14035087719298245;
        result[1] += 0.8596491228070176;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.07374999672174453735) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.0873015873015873;
        result[1] += 0.9126984126984127;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9941000044345855713) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.9031099975109100342) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1705899983644485474) ) ) {
        result[0] += 0.3939393939393939;
        result[1] += 0.6060606060606061;
      } else {
        result[0] += 0.07692307692307693;
        result[1] += 0.9230769230769231;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.7259000241756439209) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.6235450208187103271) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.43478260869565216;
        result[1] += 0.5652173913043478;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2179500013589859009) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2207050025463104248) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8927049934864044189) ) ) {
        result[0] += 0.13333333333333333;
        result[1] += 0.8666666666666667;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2102850005030632019) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.3427699953317642212) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.00370500003919005394) ) ) {
        result[0] += 0.98;
        result[1] += 0.02;
      } else {
        result[0] += 0.6296296296296297;
        result[1] += 0.37037037037037035;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.6719200015068054199) ) ) {
        result[0] += 0.07692307692307693;
        result[1] += 0.9230769230769231;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.7746149897575378418) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.1831949949264526367) ) ) {
        result[0] += 0.9285714285714286;
        result[1] += 0.07142857142857142;
      } else {
        result[0] += 0.07936507936507936;
        result[1] += 0.9206349206349206;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.6096349954605102539) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.2253299951553344727) ) ) {
        result[0] += 0.7857142857142857;
        result[1] += 0.21428571428571427;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.12886597938144329;
        result[1] += 0.8711340206185567;
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5490350127220153809) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.6096349954605102539) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.8295449912548065186) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.8333333333333334;
        result[1] += 0.16666666666666666;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
        result[0] += 0.8888888888888888;
        result[1] += 0.1111111111111111;
      } else {
        result[0] += 0.15;
        result[1] += 0.85;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5911200046539306641) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
        result[0] += 0.12365591397849462;
        result[1] += 0.8763440860215054;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9127549827098846436) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7158599793910980225) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.7466399967670440674) ) ) {
        result[0] += 0.3333333333333333;
        result[1] += 0.6666666666666666;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.2893099933862686157) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.3372099995613098145) ) ) {
        result[0] += 0.7358490566037735;
        result[1] += 0.2641509433962264;
      } else {
        result[0] += 0.16666666666666666;
        result[1] += 0.8333333333333334;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.07692307692307693;
        result[1] += 0.9230769230769231;
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 100;
  result[1] /= 100;
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  
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
    

    FILE* file = fopen("./codegen/dataset_52/split_0/test_data.csv", "r");
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
