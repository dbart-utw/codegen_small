
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
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9069299995899200439) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.006680000107735395432) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.2553400024771690369) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.2119949990883469582) ) ) {
          result[0] += 0.75;
          result[1] += 0.25;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3973399996757507324) ) ) {
          result[0] += 0.34782608695652173;
          result[1] += 0.6521739130434783;
        } else {
          result[0] += 0.03389830508474576;
          result[1] += 0.9661016949152542;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6255199909210205078) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.1230649948120117188) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.01382499979808926582) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.01978500001132488251) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.09302325581395349;
          result[1] += 0.9069767441860465;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.7361499965190887451) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.6;
          result[1] += 0.4;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.6828050017356872559) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.03937999997287988663) ) ) {
          result[0] += 0.5555555555555556;
          result[1] += 0.4444444444444444;
        } else {
          result[0] += 0.05217391304347826;
          result[1] += 0.9478260869565217;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.250930003821849823) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.31207999587059021) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.04094999935477972031) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.10344827586206896;
          result[1] += 0.896551724137931;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.5596249997615814209) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.057692307692307696;
          result[1] += 0.9423076923076923;
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9387849867343902588) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.7412600070238113403) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.35714285714285715;
          result[1] += 0.6428571428571429;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1256750002503395081) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.4361900091171264648) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.1721349954605102539) ) ) {
          result[0] += 0.14285714285714285;
          result[1] += 0.8571428571428571;
        } else {
          result[0] += 0.9666666666666667;
          result[1] += 0.03333333333333333;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.1176100056618452072) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.9288100004196166992) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.4622649997472763062) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.6332649886608123779) ) ) {
          result[0] += 0.04201680672268908;
          result[1] += 0.957983193277311;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9387849867343902588) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.8146849870681762695) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.5277900006622076035) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.13333333333333333;
          result[1] += 0.8666666666666667;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4965550005435943604) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7468499839305877686) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
          result[0] += 0.8421052631578947;
          result[1] += 0.15789473684210525;
        } else {
          result[0] += 0.0975609756097561;
          result[1] += 0.9024390243902439;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9788799881935119629) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.3933999985456466675) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1484399944311007857) ) ) {
          result[0] += 0.4;
          result[1] += 0.6;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2748949974775314331) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
          result[0] += 0.8333333333333334;
          result[1] += 0.16666666666666666;
        } else {
          result[0] += 0.0440251572327044;
          result[1] += 0.9559748427672956;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.5946100056171417236) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.4961250000633299351) ) ) {
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.05956500023603439331) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.1066399998962879181) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.03277999907732009888) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.02468999847769737244) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9735499918460845947) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-0.1637550145387649536) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.220315001904964447) ) ) {
          result[0] += 0.6;
          result[1] += 0.4;
        } else {
          result[0] += 0.0364963503649635;
          result[1] += 0.9635036496350365;
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.6234750151634216309) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.4655349999666213989) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.1875;
          result[1] += 0.8125;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.1527649983763694763) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.1078049968928098679) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.5935100018978118896) ) ) {
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
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.08064516129032258;
          result[1] += 0.9193548387096774;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.7182199954986572266) ) ) {
          result[0] += 0.5;
          result[1] += 0.5;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4521050006151199341) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2828499972820281982) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.04166499897837638855) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8646399974822998047) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9361749887466430664) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.875) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.8314950168132781982) ) ) {
          result[0] += 0.7;
          result[1] += 0.3;
        } else {
          result[0] += 0.09090909090909091;
          result[1] += 0.9090909090909091;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.3235299885272979736) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.859375) ) ) {
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
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.00147999997716397047) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.6397249996662139893) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.2443300038576126099) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7437599897384643555) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6698200106620788574) ) ) {
          result[0] += 0.8;
          result[1] += 0.2;
        } else {
          result[0] += 0.054878048780487805;
          result[1] += 0.9451219512195121;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.3987400159239768982) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1321949958801269531) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.3364399969577789307) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.2872499972581863403) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.5285349991172552109) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.25;
          result[1] += 0.75;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.1457449980080127716) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.8571428571428571;
          result[1] += 0.14285714285714285;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.04708499833941459656) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.792675018310546875) ) ) {
          result[0] += 0.75;
          result[1] += 0.25;
        } else {
          result[0] += 0.05263157894736842;
          result[1] += 0.9473684210526315;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.09732999652624130249) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.9457899928092956543) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
          result[0] += 0.04424778761061947;
          result[1] += 0.9557522123893806;
        } else {
          result[0] += 0.5294117647058824;
          result[1] += 0.47058823529411764;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1321949958801269531) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.6353399753570556641) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.003504999913275241852) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.9895350039005279541) ) ) {
          result[0] += 0.7142857142857143;
          result[1] += 0.2857142857142857;
        } else {
          result[0] += 0.02702702702702703;
          result[1] += 0.972972972972973;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4576800018548965454) ) ) {
          result[0] += 0.5555555555555556;
          result[1] += 0.4444444444444444;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9027200043201446533) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.6753300130367279053) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.09732999652624130249) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.034482758620689655;
          result[1] += 0.9655172413793104;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0002000000094994902611) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-3.999999898951500654e-05) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.4453400075435638428) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.00741000007838010788) ) ) {
          result[0] += 0.16666666666666666;
          result[1] += 0.8333333333333334;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.7536750137805938721) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5370100140571594238) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.284174993634223938) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1049150004982948303) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.1932899951934814453) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.1;
          result[1] += 0.9;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.9717650115489959717) ) ) {
          result[0] += 0.06716417910447761;
          result[1] += 0.9328358208955224;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.05421499907970428467) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.08839000016450881958) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.2926700115203857422) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.75;
          result[1] += 0.25;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.9509800076484680176) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.8770299851894378662) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.06547619047619048;
          result[1] += 0.9345238095238095;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.0625) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.7182199954986572266) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7769350111484527588) ) ) {
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
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.5411049872636795044) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.8311949968338012695) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.546159990131855011) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03320500021800398827) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.8766050040721893311) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.08045977011494253;
          result[1] += 0.9195402298850575;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.5942850112915039062) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2011200040578842163) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1431150044063542737) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.6524899899959564209) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7955000102519989014) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9814800024032592773) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.06748466257668712;
          result[1] += 0.9325153374233128;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.436520010232925415) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9313749969005584717) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.1130100004374980927) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2726550139486789703) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9946700036525726318) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.0761800035834312439) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6885399967432022095) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.08588957055214724;
          result[1] += 0.9141104294478528;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7628700137138366699) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.14285714285714285;
          result[1] += 0.8571428571428571;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05153499916195869446) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5415849983692169189) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1541999988257884979) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.07461000233888626099) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.134529992938041687) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.2244900017976760864) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9366349875926971436) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.9763750135898590088) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8980149924755096436) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.08029197080291971;
          result[1] += 0.9197080291970803;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4454549998044967651) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-3.999999898951500654e-05) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.2226649969816207886) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.2100699953734874725) ) ) {
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
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.07582499831914901733) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.04199000075459480286) ) ) {
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
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
          result[0] += 0.06666666666666667;
          result[1] += 0.9333333333333333;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9387849867343902588) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.2777777777777778;
          result[1] += 0.7222222222222222;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9503299891948699951) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.4927150160074234009) ) ) {
          result[0] += 0.5;
          result[1] += 0.5;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0002000000094994902611) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1784450039267539978) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.6769249886274337769) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.7820450067520141602) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.8928950130939483643) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.8295849859714508057) ) ) {
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
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.8314950168132781982) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7558549940586090088) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.08275862068965517;
          result[1] += 0.9172413793103448;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.001044999997247941792) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.04615999944508075714) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.163639996200799942) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3019650131464004517) ) ) {
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.6724149882793426514) ) ) {
          result[0] += 0.03333333333333333;
          result[1] += 0.9666666666666667;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.04444999992847442627) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8791849911212921143) ) ) {
          result[0] += 0.07086614173228346;
          result[1] += 0.9291338582677166;
        } else {
          result[0] += 0.7142857142857143;
          result[1] += 0.2857142857142857;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9580449759960174561) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5636099874973297119) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7903949916362762451) ) ) {
          result[0] += 0.08695652173913043;
          result[1] += 0.9130434782608695;
        } else {
          result[0] += 0.8;
          result[1] += 0.2;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.348834991455078125) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.9342049956321716309) ) ) {
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
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6559349894523620605) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.8503800034523010254) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.5) ) ) {
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.04741499945521354675) ) ) {
          result[0] += 0.2;
          result[1] += 0.8;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8917249739170074463) ) ) {
          result[0] += 0.060109289617486336;
          result[1] += 0.9398907103825137;
        } else {
          result[0] += 0.8888888888888888;
          result[1] += 0.1111111111111111;
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.01111999992281198502) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9299800097942352295) ) ) {
          result[0] += 0.13043478260869565;
          result[1] += 0.8695652173913043;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.139164995402097702) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8989500105381011963) ) ) {
          result[0] += 0.06622516556291391;
          result[1] += 0.9337748344370861;
        } else {
          result[0] += 0.8333333333333334;
          result[1] += 0.16666666666666666;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.758170008659362793) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4172700047492980957) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.2264149934053421021) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.9060499966144561768) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.12716763005780346;
          result[1] += 0.8728323699421965;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9098950028419494629) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.4483349993824958801) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9550499916076660156) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.3750000074505805969) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-2.999999924213625491e-05) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.9741150140762329102) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.58223000168800354) ) ) {
          result[0] += 0.25;
          result[1] += 0.75;
        } else {
          result[0] += 0.033707865168539325;
          result[1] += 0.9662921348314607;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.3010550141334533691) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2445850074291229248) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.1093350015580654144) ) ) {
          result[0] += 0.75;
          result[1] += 0.25;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.1477050036191940308) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.0006999999750405550003) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.7885950207710266113) ) ) {
          result[0] += 0.375;
          result[1] += 0.625;
        } else {
          result[0] += 0.8333333333333334;
          result[1] += 0.16666666666666666;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8791849911212921143) ) ) {
          result[0] += 0.08333333333333333;
          result[1] += 0.9166666666666666;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.006755000111297704279) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.1104700006544589996) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.002110000001266598701) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.2525750100612640381) ) ) {
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
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.2475700005888938904) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.1657650023698806763) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.8;
          result[1] += 0.2;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.5594450086355209351) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9429549872875213623) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.3350149989128112793) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.4522150009870529175) ) ) {
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
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6698200106620788574) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3242800086736679077) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.3282350003719329834) ) ) {
          result[0] += 0.225;
          result[1] += 0.775;
        } else {
          result[0] += 0.019230769230769232;
          result[1] += 0.9807692307692307;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9848699867725372314) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.0005600000149570405483) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1350200027227401733) ) ) {
          result[0] += 0.0449438202247191;
          result[1] += 0.9550561797752809;
        } else {
          result[0] += 0.4;
          result[1] += 0.6;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.00275000004330649972) ) ) {
          result[0] += 0.4722222222222222;
          result[1] += 0.5277777777777778;
        } else {
          result[0] += 0.15384615384615385;
          result[1] += 0.8461538461538461;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.8433550000190734863) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.2632649987936019897) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.02812498807907104492) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2816650047898292542) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.3062150031328201294) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.01923000067472457886) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.1289300024509429932) ) ) {
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
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.7006449997425079346) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.0253649991936981678) ) ) {
          result[0] += 0.25;
          result[1] += 0.75;
        } else {
          result[0] += 0.030303030303030304;
          result[1] += 0.9696969696969697;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5355550013482570648) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.5555555555555556;
          result[1] += 0.4444444444444444;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4965550005435943604) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.1439400017261505127) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.4716999996453523636) ) ) {
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
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3451300114393234253) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02312999917194247246) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6549850106239318848) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.18461538461538463;
          result[1] += 0.8153846153846154;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.8166249990463256836) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.7661449909210205078) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1333349943161010742) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.019230769230769232;
          result[1] += 0.9807692307692307;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9127549827098846436) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.1449500024318695068) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3146950006484985352) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.5041249990463256836) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.7142857142857143;
          result[1] += 0.2857142857142857;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.8744800090789794922) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3585000038146972656) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.00147999997716397047) ) ) {
          result[0] += 0.6363636363636364;
          result[1] += 0.36363636363636365;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
          result[0] += 0.04666666666666667;
          result[1] += 0.9533333333333334;
        } else {
          result[0] += 0.5714285714285714;
          result[1] += 0.42857142857142855;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2011200040578842163) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2566100060939788818) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.7072850018739700317) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.005164999980479478836) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.04927500057965517044) ) ) {
          result[0] += 0.1724137931034483;
          result[1] += 0.8275862068965517;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.9763750135898590088) ) ) {
          result[0] += 0.05228758169934641;
          result[1] += 0.9477124183006536;
        } else {
          result[0] += 0.42857142857142855;
          result[1] += 0.5714285714285714;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.01539499999489635229) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.006680000107735395432) ) ) {
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
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9551299810409545898) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1442600004374980927) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9105649888515472412) ) ) {
          result[0] += 0.08333333333333333;
          result[1] += 0.9166666666666666;
        } else {
          result[0] += 0.9375;
          result[1] += 0.0625;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.4770499914884567261) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.6348499953746795654) ) ) {
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
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5545850098133087158) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2318000048398971558) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2284099943935871124) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.6950049996376037598) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.75;
          result[1] += 0.25;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7437599897384643555) ) ) {
          result[0] += 0.06329113924050633;
          result[1] += 0.9367088607594937;
        } else {
          result[0] += 0.7692307692307693;
          result[1] += 0.23076923076923078;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.03138000005856156349) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1536499960348010063) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.3044000118970870972) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.09732999652624130249) ) ) {
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
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9848499894142150879) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1634849980473518372) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3976149857044219971) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.1376650054007768631) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.8243899941444396973) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5370100140571594238) ) ) {
          result[0] += 0.7857142857142857;
          result[1] += 0.21428571428571427;
        } else {
          result[0] += 0.06206896551724138;
          result[1] += 0.9379310344827586;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.03277999907732009888) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.09473499655723571777) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.1360049992799758911) ) ) {
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
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.8032550215721130371) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.1952300071716308594) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.8276349902153015137) ) ) {
          result[0] += 0.5;
          result[1] += 0.5;
        } else {
          result[0] += 0.9615384615384616;
          result[1] += 0.038461538461538464;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.9655199944972991943) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4246549904346466064) ) ) {
          result[0] += 0.5714285714285714;
          result[1] += 0.42857142857142855;
        } else {
          result[0] += 0.06711409395973154;
          result[1] += 0.9328859060402684;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.813050001859664917) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0009699999936856329441) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.09893999993801116943) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.225654996931552887) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.043478260869565216;
          result[1] += 0.9565217391304348;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-5.999999848427250981e-05) ) ) {
          result[0] += 0.42857142857142855;
          result[1] += 0.5714285714285714;
        } else {
          result[0] += 0.972972972972973;
          result[1] += 0.02702702702702703;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.07692307692307693;
          result[1] += 0.9230769230769231;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0002000000094994902611) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.3912100046873092651) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.02011499926447868347) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.8226700127124786377) ) ) {
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
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2179500013589859009) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.89342498779296875) ) ) {
          result[0] += 0.09271523178807947;
          result[1] += 0.9072847682119205;
        } else {
          result[0] += 0.8181818181818182;
          result[1] += 0.18181818181818182;
        }
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
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5370100140571594238) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.9150350093841552734) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.152225002646446228) ) ) {
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7312500178813934326) ) ) {
          result[0] += 0.3469387755102041;
          result[1] += 0.6530612244897959;
        } else {
          result[0] += 0.0234375;
          result[1] += 0.9765625;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2230500057339668274) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8312600255012512207) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9561049938201904297) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.08648648648648649;
          result[1] += 0.9135135135135135;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7300400137901306152) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.4987249970436096191) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.3125) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.26666666666666666;
          result[1] += 0.7333333333333333;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4172700047492980957) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.2264149934053421021) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.7264149934053421021) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.4815400000661611557) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2318000048398971558) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.1647799983620643616) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.1814700067043304443) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.16666666666666666;
          result[1] += 0.8333333333333334;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7558549940586090088) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6698200106620788574) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.08875739644970414;
          result[1] += 0.9112426035502958;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02312999917194247246) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.06835999712347984314) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3624400049448013306) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        } else {
          result[0] += 0.03614457831325301;
          result[1] += 0.963855421686747;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.8607999980449676514) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7857150137424468994) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7272749990224838257) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.23529411764705882;
          result[1] += 0.7647058823529411;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.9;
          result[1] += 0.1;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7684749960899353027) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2193350046873092651) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.521469995379447937) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.4444444444444444;
          result[1] += 0.5555555555555556;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4521050006151199341) ) ) {
          result[0] += 0.4117647058823529;
          result[1] += 0.5882352941176471;
        } else {
          result[0] += 0.04938271604938271;
          result[1] += 0.9506172839506173;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.5) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.125339999794960022) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.6;
          result[1] += 0.4;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0009699999936856329441) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4766350090503692627) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.2266049981117248535) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8431349992752075195) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1413400024175643921) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.07377049180327869;
          result[1] += 0.9262295081967213;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.09447999671101570129) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9941000044345855713) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.0005600000149570405483) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.3498850036412477493) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.010869565217391304;
          result[1] += 0.9891304347826086;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4454549998044967651) ) ) {
          result[0] += 0.9090909090909091;
          result[1] += 0.09090909090909091;
        } else {
          result[0] += 0.15384615384615385;
          result[1] += 0.8461538461538461;
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9387849867343902588) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.5417800098657608032) ) ) {
          result[0] += 0.07692307692307693;
          result[1] += 0.9230769230769231;
        } else {
          result[0] += 0.8571428571428571;
          result[1] += 0.14285714285714285;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.8389199972152709961) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
          result[0] += 0.06395348837209303;
          result[1] += 0.936046511627907;
        } else {
          result[0] += 0.75;
          result[1] += 0.25;
        }
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
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.8788850009441375732) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8980149924755096436) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
          result[0] += 0.8571428571428571;
          result[1] += 0.14285714285714285;
        } else {
          result[0] += 0.07909604519774012;
          result[1] += 0.9209039548022598;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.7714850008487701416) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7950850129127502441) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.12849162011173185;
          result[1] += 0.8715083798882681;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.3598399907350540161) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9361749887466430664) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.04028999991714954376) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.07506499998271465302) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.0337000042200088501) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.006680000107735395432) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.8;
          result[1] += 0.2;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9580449759960174561) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.9108049869537353516) ) ) {
          result[0] += 0.11560693641618497;
          result[1] += 0.884393063583815;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.4204150056466460228) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2207150012254714966) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1173599995672702789) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.2045000046491622925) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.003560000099241733551) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.5869050025939941406) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.8333333333333334;
          result[1] += 0.16666666666666666;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.06497999653220176697) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.9297600090503692627) ) ) {
          result[0] += 0.15789473684210525;
          result[1] += 0.8421052631578947;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.03905000165104866028) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.8521549999713897705) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.06689000129699707031) ) ) {
          result[0] += 0.4;
          result[1] += 0.6;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.732675015926361084) ) ) {
          result[0] += 0.04310344827586207;
          result[1] += 0.9568965517241379;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.0914500020444393158) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.0395349990576505661) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.2894800007343292236) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.1360049992799758911) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.4998099952936172485) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.3444900065660476685) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.6647100150585174561) ) ) {
          result[0] += 0.42857142857142855;
          result[1] += 0.5714285714285714;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
          result[0] += 0.05194805194805195;
          result[1] += 0.948051948051948;
        } else {
          result[0] += 0.5454545454545454;
          result[1] += 0.45454545454545453;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.006755000111297704279) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.03265500068664550781) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1519400030374526978) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.001494999974966049194) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.4494450092315673828) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.3237150013446807861) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.9684099853038787842) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.6586899757385253906) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9447599947452545166) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.06976744186046512;
          result[1] += 0.9302325581395349;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9021950066089630127) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.6396850049495697021) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.666665002703666687) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.8980849981307983398) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1408099979162216187) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.8865099847316741943) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.1358695652173913;
          result[1] += 0.8641304347826086;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4572850018739700317) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.1776700019836425781) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.04672500118613243103) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.9655449986457824707) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
          result[0] += 0.05232558139534884;
          result[1] += 0.9476744186046512;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4474650025367736816) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.4422750025987625122) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4395599961280822754) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.714935004711151123) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.7997150123119354248) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.06626506024096386;
          result[1] += 0.9337349397590361;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3882950060069561005) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.4;
          result[1] += 0.6;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2816650047898292542) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.6865999996662139893) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.251270003616809845) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.6;
          result[1] += 0.4;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.03147500008344650269) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8980149924755096436) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8989500105381011963) ) ) {
          result[0] += 0.05847953216374269;
          result[1] += 0.9415204678362573;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.0009850000496953725815) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2120900005102157593) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-5.999999848427250981e-05) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.002614999888464808464) ) ) {
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
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0932049974799156189) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.04081632653061224;
          result[1] += 0.9591836734693877;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9280749857425689697) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.008928571428571428;
          result[1] += 0.9910714285714286;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3732299953699111938) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1826099976897239685) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.188470005989074707) ) ) {
          result[0] += 0.918918918918919;
          result[1] += 0.08108108108108109;
        } else {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.04047999903559684753) ) ) {
          result[0] += 0.04;
          result[1] += 0.96;
        } else {
          result[0] += 0.625;
          result[1] += 0.375;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1734700053930282593) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.5299400091171264648) ) ) {
          result[0] += 0.7142857142857143;
          result[1] += 0.2857142857142857;
        } else {
          result[0] += 0.0625;
          result[1] += 0.9375;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.8607999980449676514) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.8927749991416931152) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.38461538461538464;
          result[1] += 0.6153846153846154;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.7446350008249282837) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.4497149921953678131) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.7902100086212158203) ) ) {
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
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4521050006151199341) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1304000020027160645) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.04580000042915344238) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.2;
          result[1] += 0.8;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1860899999737739563) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.65;
          result[1] += 0.35;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0009699999936856329441) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.2941200137138366699) ) ) {
          result[0] += 0.9444444444444444;
          result[1] += 0.05555555555555555;
        } else {
          result[0] += 0.05263157894736842;
          result[1] += 0.9473684210526315;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.8845050036907196045) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.058394160583941604;
          result[1] += 0.9416058394160584;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5507950037717819214) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4502249956130981445) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1478099972009658813) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.2785799950361251831) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9941000044345855713) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.9060499966144561768) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.0755813953488372;
          result[1] += 0.9244186046511628;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9387849867343902588) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.4;
          result[1] += 0.6;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6642700135707855225) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.03636363636363636;
          result[1] += 0.9636363636363636;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.007125000003725290298) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.4927150160074234009) ) ) {
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
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4474650025367736816) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1234450042247772217) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.1515749990940093994) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.8666666666666667;
          result[1] += 0.13333333333333333;
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.8484800159931182861) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2522249966859817505) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.06748466257668712;
          result[1] += 0.9325153374233128;
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1790000051259994507) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.001470000017434358597) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1532800011336803436) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4975449889898300171) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.005350000225007534027) ) ) {
          result[0] += 0.8;
          result[1] += 0.2;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.07622999884188175201) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.01111999992281198502) ) ) {
          result[0] += 0.8571428571428571;
          result[1] += 0.14285714285714285;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.5177649855613708496) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.8;
          result[1] += 0.2;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9127549827098846436) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.03905000165104866028) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9994949996471405029) ) ) {
          result[0] += 0.05;
          result[1] += 0.95;
        } else {
          result[0] += 0.25925925925925924;
          result[1] += 0.7407407407407407;
        }
      }
    }
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.05956500023603439331) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.09893999993801116943) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.05882500112056732178) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.02796499989926815033) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.8333333333333334;
          result[1] += 0.16666666666666666;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6698200106620788574) ) ) {
          result[0] += 0.9;
          result[1] += 0.1;
        } else {
          result[0] += 0.10975609756097561;
          result[1] += 0.8902439024390244;
        }
      }
    }
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9285149872303009033) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.333334997296333313) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.5) ) ) {
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
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3471550047397613525) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3023900091648101807) ) ) {
          result[0] += 0.17142857142857143;
          result[1] += 0.8285714285714286;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1363649964332580566) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.0661764705882353;
          result[1] += 0.9338235294117647;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5176050066947937012) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9361749887466430664) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5372500121593475342) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.2858399972319602966) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.9655449986457824707) ) ) {
          result[0] += 0.05747126436781609;
          result[1] += 0.9425287356321839;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02312999917194247246) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7903949916362762451) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.3321299999952316284) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.6814249902963638306) ) ) {
          result[0] += 0.5;
          result[1] += 0.5;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9469150006771087646) ) ) {
          result[0] += 0.07954545454545454;
          result[1] += 0.9204545454545454;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.8474049866199493408) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9376849830150604248) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5370100140571594238) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.096045197740113;
          result[1] += 0.903954802259887;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.8250899910926818848) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.09893999993801116943) ) ) {
          result[0] += 0.7777777777777778;
          result[1] += 0.2222222222222222;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5370100140571594238) ) ) {
          result[0] += 0.5;
          result[1] += 0.5;
        } else {
          result[0] += 0.05063291139240506;
          result[1] += 0.9493670886075949;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.8774850070476531982) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9352599978446960449) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.09090909090909091;
          result[1] += 0.9090909090909091;
        }
      }
    }
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1659950017929077148) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.04615999944508075714) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.09249500185251235962) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.01729499921202659607) ) ) {
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
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8004899919033050537) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.02065000124275684357) ) ) {
          result[0] += 0.14285714285714285;
          result[1] += 0.8571428571428571;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1071449965238571167) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.2587399929761886597) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.9895350039005279541) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.06293706293706294;
          result[1] += 0.9370629370629371;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.149645000696182251) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2284099943935871124) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.03053499944508075714) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5555649995803833008) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.05263157894736842;
          result[1] += 0.9473684210526315;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.6742399930953979492) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.5256149917840957642) ) ) {
          result[0] += 0.25;
          result[1] += 0.75;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.001044999997247941792) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1784450039267539978) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.02862500026822090149) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.6479350030422210693) ) ) {
          result[0] += 0.047619047619047616;
          result[1] += 0.9523809523809523;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.63190498948097229) ) ) {
          result[0] += 0.2459016393442623;
          result[1] += 0.7540983606557377;
        } else {
          result[0] += 0.041666666666666664;
          result[1] += 0.9583333333333334;
        }
      }
    }
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1196150034666061401) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1295600049197673798) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1904850006103515625) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.625;
          result[1] += 0.375;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3448999971151351929) ) ) {
          result[0] += 0.7586206896551724;
          result[1] += 0.2413793103448276;
        } else {
          result[0] += 0.09523809523809523;
          result[1] += 0.9047619047619048;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8980149924755096436) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1240149941295385361) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.05263157894736842;
          result[1] += 0.9473684210526315;
        }
      }
    }
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1190350018441677094) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4411299973726272583) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1904850006103515625) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.8;
          result[1] += 0.2;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.09519000351428985596) ) ) {
          result[0] += 0.75;
          result[1] += 0.25;
        } else {
          result[0] += 0.09375;
          result[1] += 0.90625;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2147799953818321228) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.8690499961376190186) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.25;
          result[1] += 0.75;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.5281899869441986084) ) ) {
          result[0] += 0.1875;
          result[1] += 0.8125;
        } else {
          result[0] += 0.024390243902439025;
          result[1] += 0.975609756097561;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1184299997985363007) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7250399887561798096) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.01252000010572373867) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2428749948740005493) ) ) {
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
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.6711599975824356079) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.848834991455078125) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.06666666666666667;
          result[1] += 0.9333333333333333;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.9763750135898590088) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.1452299952507019043) ) ) {
          result[0] += 0.008771929824561403;
          result[1] += 0.9912280701754386;
        } else {
          result[0] += 0.2608695652173913;
          result[1] += 0.7391304347826086;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
          result[0] += 0.46153846153846156;
          result[1] += 0.5384615384615384;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.7576749920845031738) ) ) {
        result[0] += 0;
        result[1] += 1;
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
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.5698849856853485107) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.12359550561797752;
          result[1] += 0.8764044943820225;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8791849911212921143) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.8;
          result[1] += 0.2;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.9206700026988983154) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.005164999980479478836) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7250399887561798096) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-2.999999924213625491e-05) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.08018999733030796051) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.8766050040721893311) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.89519500732421875) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8989500105381011963) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.02498000022023916245) ) ) {
          result[0] += 0.2830188679245283;
          result[1] += 0.7169811320754716;
        } else {
          result[0] += 0.0392156862745098;
          result[1] += 0.9607843137254902;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.7959599792957305908) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.4;
          result[1] += 0.6;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8917249739170074463) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7472899854183197021) ) ) {
          result[0] += 0.7142857142857143;
          result[1] += 0.2857142857142857;
        } else {
          result[0] += 0.04242424242424243;
          result[1] += 0.9575757575757575;
        }
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
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.9443449974060058594) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.5) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.9230769230769231;
          result[1] += 0.07692307692307693;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.9101049900054931641) ) ) {
          result[0] += 0.03870967741935484;
          result[1] += 0.9612903225806452;
        } else {
          result[0] += 0.75;
          result[1] += 0.25;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.0914500020444393158) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.1130100004374980927) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.07367500104010105133) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.1616050004959106445) ) ) {
          result[0] += 0.04;
          result[1] += 0.96;
        } else {
          result[0] += 0.28125;
          result[1] += 0.71875;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.8369050025939941406) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.4550499916076660156) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9500699937343597412) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.7272727272727273;
          result[1] += 0.2727272727272727;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.7783250212669372559) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.9263550043106079102) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.5) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.7902100086212158203) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.07190000265836715698) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.2086800038814544678) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1304000020027160645) ) ) {
          result[0] += 0.8;
          result[1] += 0.2;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.06666666666666667;
          result[1] += 0.9333333333333333;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.08145000040531158447) ) ) {
          result[0] += 0.5;
          result[1] += 0.5;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5545850098133087158) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.5779399871826171875) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.7688849866390228271) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.9320099949836730957) ) ) {
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
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.1814199984073638916) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1688899993896484375) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.01328999968245625496) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.89342498779296875) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7950850129127502441) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.06976744186046512;
          result[1] += 0.9302325581395349;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.06637499993667006493) ) ) {
          result[0] += 0.75;
          result[1] += 0.25;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6503849923610687256) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.89342498779296875) ) ) {
          result[0] += 0.09937888198757763;
          result[1] += 0.9006211180124224;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.05054000020027160645) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2954649962484836578) ) ) {
          result[0] += 0.4;
          result[1] += 0.6;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9580449759960174561) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9072249829769134521) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.005164999980479478836) ) ) {
          result[0] += 0.4444444444444444;
          result[1] += 0.5555555555555556;
        } else {
          result[0] += 0.0896551724137931;
          result[1] += 0.9103448275862069;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.9508799910545349121) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.7449049949645996094) ) ) {
          result[0] += 0.25;
          result[1] += 0.75;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.3120149970054626465) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.4071100056171417236) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2945750057697296143) ) ) {
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
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02312999917194247246) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.06231500022113323212) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.9655449986457824707) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.8314950168132781982) ) ) {
          result[0] += 0.42857142857142855;
          result[1] += 0.5714285714285714;
        } else {
          result[0] += 0.05945945945945946;
          result[1] += 0.9405405405405406;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.6052649915218353271) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03749000001698732376) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.3327600061893463135) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.16666666666666666;
          result[1] += 0.8333333333333334;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.9763750135898590088) ) ) {
          result[0] += 0.10625;
          result[1] += 0.89375;
        } else {
          result[0] += 0.7142857142857143;
          result[1] += 0.2857142857142857;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.4515300095081329346) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.36363636363636365;
          result[1] += 0.6363636363636364;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.5092350095510482788) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.1932149976491928101) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.5944000035524368286) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.25;
          result[1] += 0.75;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.06935500167310237885) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-5.999999848427250981e-05) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-2.999999924213625491e-05) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.02858499996364116669) ) ) {
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
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2867400050163269043) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.03053499944508075714) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.2;
          result[1] += 0.8;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1049150004982948303) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.6125200092792510986) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.666665002703666687) ) ) {
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
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8989500105381011963) ) ) {
          result[0] += 0.07352941176470588;
          result[1] += 0.9264705882352942;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9127549827098846436) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.09562000259757041931) ) ) {
          result[0] += 0.03225806451612903;
          result[1] += 0.967741935483871;
        } else {
          result[0] += 0.2413793103448276;
          result[1] += 0.7586206896551724;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.0456350008025765419) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.169290006160736084) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.875;
          result[1] += 0.125;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.13647499680519104) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.8024500012397766113) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.220315001904964447) ) ) {
          result[0] += 0.5833333333333334;
          result[1] += 0.4166666666666667;
        } else {
          result[0] += 0.08641975308641975;
          result[1] += 0.9135802469135802;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.04545500129461288452) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.5183350145816802979) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.7027949988842010498) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.2777777777777778;
          result[1] += 0.7222222222222222;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.8253200054168701172) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.939999997615814209) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1922499984502792358) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4395599961280822754) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7216299772262573242) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2102850005030632019) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.09517999738454818726) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.4997699999948963523) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.07004499994218349457) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6698200106620788574) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.223789997398853302) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.05660377358490566;
          result[1] += 0.9433962264150944;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.47058823529411764;
          result[1] += 0.5294117647058824;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.04615999944508075714) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1841050013899803162) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.0395349990576505661) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.08397000283002853394) ) ) {
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
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.07539000362157821655) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.75;
          result[1] += 0.25;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.0969000011682510376) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9352599978446960449) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9361749887466430664) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
          result[0] += 0.16167664670658682;
          result[1] += 0.8383233532934131;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9848699867725372314) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.2035950049757957458) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5415849983692169189) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.170329999178647995) ) ) {
          result[0] += 0.375;
          result[1] += 0.625;
        } else {
          result[0] += 0.9393939393939394;
          result[1] += 0.06060606060606061;
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5031150132417678833) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.6219300031661987305) ) ) {
          result[0] += 0.04504504504504504;
          result[1] += 0.954954954954955;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9387849867343902588) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.8531700074672698975) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.05054000020027160645) ) ) {
          result[0] += 0.3076923076923077;
          result[1] += 0.6923076923076923;
        } else {
          result[0] += 0.9090909090909091;
          result[1] += 0.09090909090909091;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.7444249987602233887) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9257999956607818604) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.7274450063705444336) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.117274995893239975) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.5076099932193756104) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.03904999978840351105) ) ) {
          result[0] += 0.88;
          result[1] += 0.12;
        } else {
          result[0] += 0.2;
          result[1] += 0.8;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.02302999980747699738) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.04854368932038835;
          result[1] += 0.9514563106796117;
        }
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.9812499880790710449) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.78125) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8031700253486633301) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.2888200134038925171) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.6;
          result[1] += 0.4;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6255199909210205078) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.10106382978723404;
          result[1] += 0.898936170212766;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9127549827098846436) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3248399943113327026) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.06547619047619048;
          result[1] += 0.9345238095238095;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.5081850141286849976) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.1226950027048587799) ) ) {
          result[0] += 0.7368421052631579;
          result[1] += 0.2631578947368421;
        } else {
          result[0] += 0.2;
          result[1] += 0.8;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.8962650001049041748) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9876999855041503906) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.4251499921083450317) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.008334999904036521912) ) ) {
          result[0] += 0.8;
          result[1] += 0.2;
        } else {
          result[0] += 0.1590909090909091;
          result[1] += 0.8409090909090909;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.05053500086069107056) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.08823529411764706;
          result[1] += 0.9117647058823529;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.03533500060439109802) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.6742250025272369385) ) ) {
          result[0] += 0.2857142857142857;
          result[1] += 0.7142857142857143;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.8190799951553344727) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.8260869565217391;
          result[1] += 0.17391304347826086;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2318000048398971558) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.3721999973058700562) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1700599938631057739) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.6547199785709381104) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.4541999995708465576) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.8314950168132781982) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.4497149921953678131) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.8766050040721893311) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.04938271604938271;
          result[1] += 0.9506172839506173;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.8079099953174591064) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
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
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1390250027179718018) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.3284299969673156738) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.2075450047850608826) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.01729499921202659607) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.002039999933913350105) ) ) {
          result[0] += 0.8888888888888888;
          result[1] += 0.1111111111111111;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.4453400075435638428) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.739034995436668396) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.714935004711151123) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0009699999936856329441) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.3122349977493286133) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.2857142857142857;
          result[1] += 0.7142857142857143;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
          result[0] += 0.8;
          result[1] += 0.2;
        } else {
          result[0] += 0.064;
          result[1] += 0.936;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.9534899890422821045) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
          result[0] += 0.5;
          result[1] += 0.5;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0002000000094994902611) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.156419999897480011) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.0001199999969685450196) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.009365000063553452492) ) ) {
          result[0] += 0.16666666666666666;
          result[1] += 0.8333333333333334;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.002110000001266598701) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7401400208473205566) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7558549940586090088) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6698200106620788574) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.3452149946242570877) ) ) {
          result[0] += 0.5;
          result[1] += 0.5;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1351950019598007202) ) ) {
          result[0] += 0.7222222222222222;
          result[1] += 0.2777777777777778;
        } else {
          result[0] += 0.06349206349206349;
          result[1] += 0.9365079365079365;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3341400027275085449) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7468699812889099121) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.01733000017702579498) ) ) {
          result[0] += 0.9444444444444444;
          result[1] += 0.05555555555555555;
        } else {
          result[0] += 0.47058823529411764;
          result[1] += 0.5294117647058824;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.04374500131234526634) ) ) {
          result[0] += 0.0196078431372549;
          result[1] += 0.9803921568627451;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.37910500168800354) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.266380012035369873) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.1070900000631809235) ) ) {
          result[0] += 0.18181818181818182;
          result[1] += 0.8181818181818182;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.07442500069737434387) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.156039997935295105) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.03699000179767608643) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
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
    

    FILE* file = fopen("./codegen/dataset_52/split_2/test_data.csv", "r");
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
