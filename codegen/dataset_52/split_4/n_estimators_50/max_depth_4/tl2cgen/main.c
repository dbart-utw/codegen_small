
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9832650125026702881) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.0606399979442358017) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.5808449983596801758) ) ) {
          result[0] += 0.8333333333333334;
          result[1] += 0.16666666666666666;
        } else {
          result[0] += 0.15;
          result[1] += 0.85;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9856599867343902588) ) ) {
          result[0] += 0.022388059701492536;
          result[1] += 0.9776119402985075;
        } else {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.02869999967515468597) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.9040200114250183105) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.7777777777777778;
          result[1] += 0.2222222222222222;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.2528349980711936951) ) ) {
          result[0] += 0.8571428571428571;
          result[1] += 0.14285714285714285;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.139164995402097702) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.04958000034093856812) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.615939997136592865) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.111110001802444458) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.9815250039100646973) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
          result[0] += 0.01818181818181818;
          result[1] += 0.9818181818181818;
        } else {
          result[0] += 0.6842105263157895;
          result[1] += 0.3157894736842105;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.08616000041365623474) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.2825650125741958618) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.33799000084400177) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
          result[0] += 0.8333333333333334;
          result[1] += 0.16666666666666666;
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
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7950850129127502441) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1071449965238571167) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.09836065573770492;
          result[1] += 0.9016393442622951;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.05486999824643135071) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2091500014066696167) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9643700122833251953) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2052299976348876953) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.1108249984681606293) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7729800045490264893) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7967550158500671387) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6283050179481506348) ) ) {
          result[0] += 0.8181818181818182;
          result[1] += 0.18181818181818182;
        } else {
          result[0] += 0.07272727272727272;
          result[1] += 0.9272727272727272;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.2949300110340118408) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1256750002503395081) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.4981250166893005371) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2354950010776519775) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.3708650022745132446) ) ) {
          result[0] += 0.8;
          result[1] += 0.2;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.2622400075197219849) ) ) {
          result[0] += 0.42857142857142855;
          result[1] += 0.5714285714285714;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.489555000327527523) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1460099965333938599) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.7668049931526184082) ) ) {
          result[0] += 0.16901408450704225;
          result[1] += 0.8309859154929577;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.03421499952673912048) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9293499886989593506) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.3076923076923077;
          result[1] += 0.6923076923076923;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7966699898242950439) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.9454649984836578369) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1408099979162216187) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.11299435028248588;
          result[1] += 0.8870056497175142;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2725899964570999146) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1318199969828128815) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.2843600064516067505) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.5565599799156188965) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7437599897384643555) ) ) {
          result[0] += 0.04430379746835443;
          result[1] += 0.9556962025316456;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.6552150249481201172) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.3472950011491775513) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.6120550036430358887) ) ) {
          result[0] += 0.36363636363636365;
          result[1] += 0.6363636363636364;
        } else {
          result[0] += 0.8181818181818182;
          result[1] += 0.18181818181818182;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5372500121593475342) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.5522349998354911804) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.8175899982452392578) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.9773649871349334717) ) ) {
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02312999917194247246) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6586450189352035522) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.0972972972972973;
          result[1] += 0.9027027027027027;
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.0569800008088350296) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.4981250166893005371) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1057599969208240509) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.1660399958491325378) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.249109998345375061) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.9333333333333333;
          result[1] += 0.06666666666666667;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.2593849897384643555) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.8042899966239929199) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.6011549830436706543) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.3059900104999542236) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.06993006993006994;
          result[1] += 0.9300699300699301;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9395299851894378662) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.6514700055122375488) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.4414100050926208496) ) ) {
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2880550026893615723) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.2463200092315673828) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.5597649998962879181) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1577399969100952148) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9970000088214874268) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7455049753189086914) ) ) {
          result[0] += 0.08333333333333333;
          result[1] += 0.9166666666666666;
        } else {
          result[0] += 0.8333333333333334;
          result[1] += 0.16666666666666666;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7603200078010559082) ) ) {
          result[0] += 0.3684210526315789;
          result[1] += 0.631578947368421;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.5394750013947486877) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.9538150131702423096) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.270830005407333374) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.1824650019407272339) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.08287292817679558;
          result[1] += 0.9171270718232044;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.9987249970436096191) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.5880299806594848633) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.00464499741792678833) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.05128205128205128;
          result[1] += 0.9487179487179487;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.3723399937152862549) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.2545850053429603577) ) ) {
          result[0] += 0.9;
          result[1] += 0.1;
        } else {
          result[0] += 0.18181818181818182;
          result[1] += 0.8181818181818182;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1256750002503395081) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.3900350034236907959) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7441250085830688477) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.0467449994757771492) ) ) {
          result[0] += 0.9411764705882353;
          result[1] += 0.058823529411764705;
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
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.01370999962091445923) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.6344799995422363281) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
          result[0] += 0.09395973154362416;
          result[1] += 0.9060402684563759;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.5731500014662742615) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.3059900104999542236) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1428199969232082367) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1666649989783763885) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.8768799901008605957) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.018867924528301886;
          result[1] += 0.9811320754716981;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.05151499994099140167) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9814800024032592773) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5370100140571594238) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.6217650175094604492) ) ) {
          result[0] += 0.375;
          result[1] += 0.625;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.13647499680519104) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.06097560975609756;
          result[1] += 0.9390243902439024;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3900399953126907349) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.2477700039744377136) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1717600049450993538) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4149949997663497925) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.9533250033855438232) ) ) {
          result[0] += 0.12574850299401197;
          result[1] += 0.874251497005988;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2857299968600273132) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.03581000026315450668) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.4030800014734268188) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.3758300095796585083) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.8;
          result[1] += 0.2;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.1647799983620643616) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.7196249961853027344) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.11180124223602485;
          result[1] += 0.8881987577639752;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.75;
          result[1] += 0.25;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4369300007820129395) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.4034850001335144043) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.358945012092590332) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.3087950143963098526) ) ) {
          result[0] += 0.9583333333333334;
          result[1] += 0.041666666666666664;
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4330900013446807861) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.6317949891090393066) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9717000126838684082) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.6005150079727172852) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.8634200096130371094) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9469150006771087646) ) ) {
          result[0] += 0.050955414012738856;
          result[1] += 0.9490445859872612;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9194949865341186523) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.001505000051110982895) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.4089999943971633911) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.01729499921202659607) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.2826250046491622925) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.9;
          result[1] += 0.1;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.9886899888515472412) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.07732000201940536499) ) ) {
          result[0] += 0.75;
          result[1] += 0.25;
        } else {
          result[0] += 0.05405405405405406;
          result[1] += 0.9459459459459459;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.4278150126338005066) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.42857142857142855;
          result[1] += 0.5714285714285714;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.9118300080299377441) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1523000001907348633) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.05405405405405406;
          result[1] += 0.9459459459459459;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.144859999418258667) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.231155000627040863) ) ) {
          result[0] += 0.8518518518518519;
          result[1] += 0.14814814814814814;
        } else {
          result[0] += 0.06976744186046512;
          result[1] += 0.9302325581395349;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.7047049999237060547) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.0625;
          result[1] += 0.9375;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.897180020809173584) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.4337150007486343384) ) ) {
          result[0] += 0.47619047619047616;
          result[1] += 0.5238095238095238;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1898399963974952698) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4083350002765655518) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.07955000363290309906) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.3754250109195709229) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.9338650107383728027) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.01093500014394521713) ) ) {
          result[0] += 0.75;
          result[1] += 0.25;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.522929999977350235) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.9481050074100494385) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.3522550016641616821) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.9320099949836730957) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.11564625850340136;
          result[1] += 0.8843537414965986;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9832650125026702881) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1142599992454051971) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3795849978923797607) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.4779850002378225327) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9994949996471405029) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.9118300080299377441) ) ) {
          result[0] += 0.6;
          result[1] += 0.4;
        } else {
          result[0] += 0.04054054054054054;
          result[1] += 0.9594594594594594;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.946139991283416748) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.5596249848604202271) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.04938500095158815384) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.962994992733001709) ) ) {
          result[0] += 0.2;
          result[1] += 0.8;
        } else {
          result[0] += 0.7;
          result[1] += 0.3;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1105400025844573975) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1175950020551681519) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2284099943935871124) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.09160500019788742065) ) ) {
        result[0] += 0;
        result[1] += 1;
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
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5370100140571594238) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3007199950516223907) ) ) {
          result[0] += 0.2;
          result[1] += 0.8;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8323700129985809326) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.03636363636363636;
          result[1] += 0.9636363636363636;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.1254899986088275909) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2661649957299232483) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.8806549906730651855) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2600500062108039856) ) ) {
          result[0] += 0.4444444444444444;
          result[1] += 0.5555555555555556;
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
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.001429999945685267448) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.09268500190228223801) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4513149857521057129) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.875;
          result[1] += 0.125;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.5330899991095066071) ) ) {
          result[0] += 0.15217391304347827;
          result[1] += 0.8478260869565217;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1734700053930282593) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1480599939823150635) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.009433962264150943;
          result[1] += 0.9905660377358491;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.5161550045013427734) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.4857900002971291542) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7781049907207489014) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.205454997718334198) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.169290006160736084) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.1919199973344802856) ) ) {
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
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.1143800020217895508) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.6627749800682067871) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.4117647058823529;
          result[1] += 0.5882352941176471;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.3870549947023391724) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.04938271604938271;
          result[1] += 0.9506172839506173;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.1599950045347213745) ) ) {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.08251500129699707031) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.04580000042915344238) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.8938300013542175293) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.03068999946117401123) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.001784999971278011799) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6060149967670440674) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.58684501051902771) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.4121749997138977051) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5405949950218200684) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.10429447852760736;
          result[1] += 0.8957055214723927;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1190350018441677094) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2446349933743476868) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.08204999938607215881) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.5217400193214416504) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.246655002236366272) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.75;
          result[1] += 0.25;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.6517450213432312012) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.09087500348687171936) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.9035499989986419678) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1154799964278936386) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.3880199939012527466) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.9983800053596496582) ) ) {
          result[0] += 0.4;
          result[1] += 0.6;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9891000092029571533) ) ) {
          result[0] += 0.0661764705882353;
          result[1] += 0.9338235294117647;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6285450160503387451) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.7600899934768676758) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.5169649999588727951) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.08616000041365623474) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.09156499989330768585) ) ) {
          result[0] += 0.4;
          result[1] += 0.6;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2074200063943862915) ) ) {
          result[0] += 0.8333333333333334;
          result[1] += 0.16666666666666666;
        } else {
          result[0] += 0.08383233532934131;
          result[1] += 0.9161676646706587;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0001250000059371814132) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.07538999989628791809) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.5810000002384185791) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.2517250021919608116) ) ) {
          result[0] += 0.75;
          result[1] += 0.25;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.3117850124835968018) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1560249999165534973) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.3239450007677078247) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9607850015163421631) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8323700129985809326) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.9101049900054931641) ) ) {
          result[0] += 0.0718954248366013;
          result[1] += 0.9281045751633987;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1705899983644485474) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.01812000013887882233) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.2380950003862380981) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.2997800037264823914) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.4;
          result[1] += 0.6;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1606599986553192139) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.786119997501373291) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1460099965333938599) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.4891800135374069214) ) ) {
          result[0] += 0.056451612903225805;
          result[1] += 0.9435483870967742;
        } else {
          result[0] += 0.9;
          result[1] += 0.1;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.05869499966502189636) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.3621450066566467285) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.06787000037729740143) ) ) {
          result[0] += 0.46153846153846156;
          result[1] += 0.5384615384615384;
        } else {
          result[0] += 0.9;
          result[1] += 0.1;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.041666666666666664;
          result[1] += 0.9583333333333334;
        }
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.969765007495880127) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1929550021886825562) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.5333900153636932373) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.04929577464788732;
          result[1] += 0.9507042253521126;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1797650009393692017) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3889850080013275146) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.02796499989926815033) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.9427549839019775391) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.813050001859664917) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.2911849953234195709) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.024;
          result[1] += 0.976;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.75) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.3044199943542480469) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9566900134086608887) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.15384615384615385;
          result[1] += 0.8461538461538461;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.1176350004971027374) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.8234950006008148193) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2053650021553039551) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.638889998197555542) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9257999956607818604) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.07065217391304347;
          result[1] += 0.9293478260869565;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.5540950000286102295) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.4499399960041046143) ) ) {
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
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.0914500020444393158) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.1406799983233213425) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.01305999979376792908) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1776150055229663849) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4369300007820129395) ) ) {
          result[0] += 0.5555555555555556;
          result[1] += 0.4444444444444444;
        } else {
          result[0] += 0.06293706293706294;
          result[1] += 0.9370629370629371;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.02590999938547611237) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.009455000050365924835) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.02642000000923871994) ) ) {
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
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.6428550034761428833) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.7215900123119354248) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.0625;
          result[1] += 0.9375;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2107650041580200195) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6586450189352035522) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.0625;
          result[1] += 0.9375;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1256750002503395081) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.01236999966204166412) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1841150000691413879) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.5222049951553344727) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.1316450014710426331) ) ) {
          result[0] += 0.5555555555555556;
          result[1] += 0.4444444444444444;
        } else {
          result[0] += 0.9736842105263158;
          result[1] += 0.02631578947368421;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.3126749992370605469) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.01370999962091445923) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9952850043773651123) ) ) {
          result[0] += 0.0423728813559322;
          result[1] += 0.9576271186440678;
        } else {
          result[0] += 0.36666666666666664;
          result[1] += 0.6333333333333333;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.08616000041365623474) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.0438749995082616806) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.2062300033867359161) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.2443649992346763611) ) ) {
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
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.9754950106143951416) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6283050179481506348) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.4886899888515472412) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.8;
          result[1] += 0.2;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.08045977011494253;
          result[1] += 0.9195402298850575;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02312999917194247246) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1266599968075752258) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6079050004482269287) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9050999879837036133) ) ) {
          result[0] += 0.5;
          result[1] += 0.5;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.75) ) ) {
          result[0] += 0.05714285714285714;
          result[1] += 0.9428571428571428;
        } else {
          result[0] += 0.75;
          result[1] += 0.25;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9689399898052215576) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2109400033950805664) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.6888200044631958008) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.04958000034093856812) ) ) {
          result[0] += 0.9473684210526315;
          result[1] += 0.05263157894736842;
        } else {
          result[0] += 0.0893854748603352;
          result[1] += 0.9106145251396648;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2725899964570999146) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.02830000128597021103) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.007005000254139304161) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.03259499929845333099) ) ) {
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2724949941039085388) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.0375;
          result[1] += 0.9625;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.211594998836517334) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.6363636363636364;
          result[1] += 0.36363636363636365;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8145000040531158447) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.0594349987804889679) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.003009999891219194978) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1216150000691413879) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.1319900006055831909) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.21052631578947367;
          result[1] += 0.7894736842105263;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4783350080251693726) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.7169799953699111938) ) ) {
          result[0] += 0.4;
          result[1] += 0.6;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.3275549989193677902) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.0703125;
          result[1] += 0.9296875;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.0914500020444393158) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.07245999947190284729) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.3841250091791152954) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.3592899888753890991) ) ) {
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.0761800035834312439) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9088949859142303467) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8972199857234954834) ) ) {
          result[0] += 0.030303030303030304;
          result[1] += 0.9696969696969697;
        } else {
          result[0] += 0.5555555555555556;
          result[1] += 0.4444444444444444;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9994949996471405029) ) ) {
          result[0] += 0.03773584905660377;
          result[1] += 0.9622641509433962;
        } else {
          result[0] += 0.3076923076923077;
          result[1] += 0.6923076923076923;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.9344849884510040283) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.02590999938547611237) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.04002500046044588089) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.6;
          result[1] += 0.4;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7272749990224838257) ) ) {
          result[0] += 0.18181818181818182;
          result[1] += 0.8181818181818182;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.198720000684261322) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.4247750043869018555) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.1068050041794776917) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.02793500106781721115) ) ) {
          result[0] += 0.25;
          result[1] += 0.75;
        } else {
          result[0] += 0.9333333333333333;
          result[1] += 0.06666666666666667;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.540394999086856842) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.005464993417263031006) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.6811750084161758423) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.9606400132179260254) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        } else {
          result[0] += 0.03389830508474576;
          result[1] += 0.9661016949152542;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.02941000089049339294) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.01778000034391880035) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.875;
          result[1] += 0.125;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.570969998836517334) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.25;
          result[1] += 0.75;
        }
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5442550033330917358) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8619300127029418945) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2591699957847595215) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.09899500012397766113) ) ) {
          result[0] += 0.4444444444444444;
          result[1] += 0.5555555555555556;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.03867403314917127;
          result[1] += 0.9613259668508287;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.6912750005722045898) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.5) ) ) {
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
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.01477000024169683456) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.3295300006866455078) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.789254993200302124) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.1540200002491474152) ) ) {
          result[0] += 0.8;
          result[1] += 0.2;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2025299966335296631) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4587999992072582245) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.8766050040721893311) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.047619047619047616;
          result[1] += 0.9523809523809523;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.9155400097370147705) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9689399898052215576) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.3926900029182434082) ) ) {
          result[0] += 0.3;
          result[1] += 0.7;
        } else {
          result[0] += 0.03636363636363636;
          result[1] += 0.9636363636363636;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.3837050125002861023) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9689399898052215576) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8668549954891204834) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.4702650010585784912) ) ) {
          result[0] += 0.2631578947368421;
          result[1] += 0.7368421052631579;
        } else {
          result[0] += 0.045871559633027525;
          result[1] += 0.9541284403669725;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1408099979162216187) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.9606400132179260254) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.057803468208092484;
          result[1] += 0.9421965317919075;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.9754950106143951416) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1384000033140182495) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.1515600010752677917) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.1256599985063076019) ) ) {
          result[0] += 0.5;
          result[1] += 0.5;
        } else {
          result[0] += 0.972972972972973;
          result[1] += 0.02702702702702703;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.06979000009596347809) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7558549940586090088) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.4692450016736984253) ) ) {
          result[0] += 0.07741935483870968;
          result[1] += 0.9225806451612903;
        } else {
          result[0] += 0.6111111111111112;
          result[1] += 0.3888888888888889;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.8723399937152862549) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2570499926805496216) ) ) {
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.0914500020444393158) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.5924699902534484863) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.5) ) ) {
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
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.983574986457824707) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2200950011610984802) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.1181099992245435715) ) ) {
          result[0] += 0.05;
          result[1] += 0.95;
        } else {
          result[0] += 0.64;
          result[1] += 0.36;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1460099965333938599) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.046052631578947366;
          result[1] += 0.9539473684210527;
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 50;
  result[1] /= 50;
  
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
    

    FILE* file = fopen("./codegen/dataset_52/split_4/test_data.csv", "r");
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
