
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2817499935626983643) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.001205000327900052071) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.03158500045537948608) ) ) {
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
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6348199844360351562) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7935449779033660889) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8927049934864044189) ) ) {
            result[0] += 0.08280254777070063;
            result[1] += 0.9171974522292994;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.235875006765127182) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.7449049949645996094) ) ) {
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
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.001449999981559813023) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9643700122833251953) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.1179799996316432953) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.4113650023937225342) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.5950899869203567505) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.5886350125074386597) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.7639900147914886475) ) ) {
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
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9970000088214874268) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.6669600009918212891) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.6456450223922729492) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.7955650091171264648) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.3040700070559978485) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3687900006771087646) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7344049811363220215) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9908199906349182129) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.42857142857142855;
            result[1] += 0.5714285714285714;
          }
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2951499968767166138) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.04741499945521354675) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.03920999914407730103) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.7564949989318847656) ) ) {
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
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.3202600032091140747) ) ) {
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
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9550499916076660156) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.2729100063443183899) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.5794249922037124634) ) ) {
            result[0] += 0.07142857142857142;
            result[1] += 0.9285714285714286;
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
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.0612250007688999176) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.6522949934005737305) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7944949865341186523) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3002150058746337891) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.03076923076923077;
            result[1] += 0.9692307692307692;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.05720999930053949356) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.06209000200033187866) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.004185000216239131987) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-1.499999962106812745e-05) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1184399984776973724) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3025600016117095947) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.005880000069737434387) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.3497000038623809814) ) ) {
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
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9566900134086608887) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2147799953818321228) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.8217200040817260742) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2270149998366832733) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7874299883842468262) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7614249885082244873) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.058394160583941604;
            result[1] += 0.9416058394160584;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6330349743366241455) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.04328999947756528854) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1023649973794817924) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.4804150164127349854) ) ) {
            result[0] += 0.6363636363636364;
            result[1] += 0.36363636363636365;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9072249829769134521) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.838880002498626709) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.9945150017738342285) ) ) {
            result[0] += 0.05217391304347826;
            result[1] += 0.9478260869565217;
          } else {
            result[0] += 0.3333333333333333;
            result[1] += 0.6666666666666666;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.7890950143337249756) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.8774850070476531982) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1348499953746795654) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0.3333333333333333;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.7949300110340118408) ) ) {
            result[0] += 0.05263157894736842;
            result[1] += 0.9473684210526315;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05176999978721141815) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1057599969208240509) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.5461599975824356079) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3795849978923797607) ) ) {
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
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.03213499952107667923) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.02250000089406967163) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3840900063514709473) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-5.999999848427250981e-05) ) ) {
            result[0] += 0.5;
            result[1] += 0.5;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.431995004415512085) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.943720012903213501) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7272749990224838257) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.4702650010585784912) ) ) {
            result[0] += 0.15384615384615385;
            result[1] += 0.8461538461538461;
          } else {
            result[0] += 0.01904761904761905;
            result[1] += 0.9809523809523809;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.8723399937152862549) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9994949996471405029) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.01383499940857291222) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.3359899967908859253) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.1373899988830089569) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.2711400110274553299) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.4521199911832809448) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9550499916076660156) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1058199964463710785) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.1703200042247772217) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.6489800065755844116) ) ) {
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
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9329150021076202393) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9901649951934814453) ) ) {
            result[0] += 0.050724637681159424;
            result[1] += 0.9492753623188406;
          } else {
            result[0] += 0.8;
            result[1] += 0.2;
          }
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.03719500079751014709) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9352599978446960449) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.5764350071549415588) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9144749939441680908) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7058800011873245239) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2018849998712539673) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.04244999960064888) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.8657250106334686279) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.2357999980449676514) ) ) {
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
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5442550033330917358) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.4225250035524368286) ) ) {
            result[0] += 0.9375;
            result[1] += 0.0625;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.048484848484848485;
            result[1] += 0.9515151515151515;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.007794999517500400543) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.7564949989318847656) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.9101049900054931641) ) ) {
            result[0] += 0.007246376811594203;
            result[1] += 0.9927536231884058;
          } else {
            result[0] += 0.3333333333333333;
            result[1] += 0.6666666666666666;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.5082300007343292236) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7272749990224838257) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.25;
            result[1] += 0.75;
          }
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4572850018739700317) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.8726750016212463379) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.3668549954891204834) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.0679900050163269043) ) ) {
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2318000048398971558) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6549850106239318848) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9105649888515472412) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.3894799947738647461) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.04242424242424243;
            result[1] += 0.9575757575757575;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.02840000391006469727) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.25;
            result[1] += 0.75;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.9754950106143951416) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7446549832820892334) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.5289800167083740234) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.166665002703666687) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1930849999189376831) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.0004799999878741800785) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.3067100048065185547) ) ) {
            result[0] += 0.35714285714285715;
            result[1] += 0.6428571428571429;
          } else {
            result[0] += 0.9411764705882353;
            result[1] += 0.058823529411764705;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6283050179481506348) ) ) {
            result[0] += 0.875;
            result[1] += 0.125;
          } else {
            result[0] += 0.039473684210526314;
            result[1] += 0.9605263157894737;
          }
        }
      }
    }
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4783350080251693726) ) ) {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.5889599919319152832) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.8506000041961669922) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.9957500100135803223) ) ) {
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.1066399998962879181) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.01520000025629997253) ) ) {
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
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5322400182485580444) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.9424299895763397217) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.5150550082325935364) ) ) {
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
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8972199857234954834) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
            result[0] += 0.04666666666666667;
            result[1] += 0.9533333333333334;
          } else {
            result[0] += 0.3333333333333333;
            result[1] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.9534899890422821045) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.3333333333333333;
            result[1] += 0.6666666666666666;
          }
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7652349770069122314) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.2099249958992004395) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9315849840641021729) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.6618850231170654297) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.3580950051546096802) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8484949767589569092) ) ) {
            result[0] += 0.09375;
            result[1] += 0.90625;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.8421449959278106689) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.1304599940776824951) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.983574986457824707) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.9815250039100646973) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.05151499994099140167) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.10975609756097561;
            result[1] += 0.8902439024390244;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.4890850111842155457) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0.6666666666666666;
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
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2276500016450881958) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.2264650017023086548) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.5507449954748153687) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.9981200098991394043) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.168150000274181366) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2022700007073581219) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6351750046014785767) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.007142857142857143;
            result[1] += 0.9928571428571429;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.6052049994468688965) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.8604550063610076904) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9387849867343902588) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2438949896022677422) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.7272749990224838257) ) ) {
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
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.5729900002479553223) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.8763650059700012207) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.4780500084161758423) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.09302325581395349;
            result[1] += 0.9069767441860465;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7547650039196014404) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9499999880790710449) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.7516649961471557617) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0.6666666666666666;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7272749990224838257) ) ) {
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
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9948549866676330566) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.8389199972152709961) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6549850106239318848) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0.3333333333333333;
          } else {
            result[0] += 0.019736842105263157;
            result[1] += 0.9802631578947368;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.5) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.8333350121974945068) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.6742250025272369385) ) ) {
            result[0] += 0.09090909090909091;
            result[1] += 0.9090909090909091;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9026100039482116699) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9143399894237518311) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.1814199984073638916) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.3359899967908859253) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.383129999041557312) ) ) {
            result[0] += 0.8461538461538461;
            result[1] += 0.15384615384615385;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.1315799951553344727) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.03225806451612903;
            result[1] += 0.967741935483871;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2193350046873092651) ) ) {
            result[0] += 0.8571428571428571;
            result[1] += 0.14285714285714285;
          } else {
            result[0] += 0.02727272727272727;
            result[1] += 0.9727272727272728;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.04545500129461288452) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.6;
            result[1] += 0.4;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7696200013160705566) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.9754950106143951416) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.4962249994277954102) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.03996500000357627869) ) ) {
            result[0] += 0.3157894736842105;
            result[1] += 0.6842105263157895;
          } else {
            result[0] += 0.05442176870748299;
            result[1] += 0.9455782312925171;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.493609994649887085) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.9041649997234344482) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1797650009393692017) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1863349974155426025) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6248599886894226074) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.138295002281665802) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.2223699986934661865) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.6808699965476989746) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3833300024271011353) ) ) {
            result[0] += 0.010101010101010102;
            result[1] += 0.98989898989899;
          } else {
            result[0] += 0.25;
            result[1] += 0.75;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.9318049848079681396) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.9774450063705444336) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.5) ) ) {
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
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.9783149957656860352) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7272749990224838257) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5794949978590011597) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.4444444444444444;
            result[1] += 0.5555555555555556;
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01879500038921833038) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.8954249918460845947) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.1287100017070770264) ) ) {
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
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9469150006771087646) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.719550013542175293) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.05625;
            result[1] += 0.94375;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.9148949980735778809) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.8604550063610076904) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.6974750012159347534) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.2537799999117851257) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.2483849972486495972) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.5;
            result[1] += 0.5;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3636350035667419434) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.06666666666666667;
            result[1] += 0.9333333333333333;
          }
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.6397249996662139893) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.4194850027561187744) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.06016000360250473022) ) ) {
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.1576400101184844971) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.9140549898147583008) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.3674950003623962402) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1593749970197677612) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6638600081205368042) ) ) {
            result[0] += 0.5;
            result[1] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3637199997901916504) ) ) {
            result[0] += 0.6;
            result[1] += 0.4;
          } else {
            result[0] += 0.07142857142857142;
            result[1] += 0.9285714285714286;
          }
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3952050060033798218) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.06134499981999397278) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.3638150021433830261) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3841849863529205322) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.6;
            result[1] += 0.4;
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.6754399985074996948) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.7102600038051605225) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4330900013446807861) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.96096000075340271) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3113200068473815918) ) ) {
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02598000038415193558) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.777779996395111084) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2874100059270858765) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3445850014686584473) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.9808349907398223877) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.8071799874305725098) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.05521472392638037;
            result[1] += 0.9447852760736196;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2570499926805496216) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5911200046539306641) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.813050001859664917) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7483049929141998291) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.2099249958992004395) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9615384615384616;
            result[1] += 0.038461538461538464;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6642700135707855225) ) ) {
            result[0] += 0.6;
            result[1] += 0.4;
          } else {
            result[0] += 0.04375;
            result[1] += 0.95625;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.07105500251054763794) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.1578249968588352203) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3281099945306777954) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.6195150017738342285) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7614249885082244873) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8972199857234954834) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7555849850177764893) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
            result[0] += 0.056338028169014086;
            result[1] += 0.9436619718309859;
          } else {
            result[0] += 0.6;
            result[1] += 0.4;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.09134000539779663086) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9573650062084197998) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0930849909782409668) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.8;
            result[1] += 0.2;
          }
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.8484800159931182861) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5442550033330917358) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.8479700088500976562) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.814449995756149292) ) ) {
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.739674985408782959) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.07051282051282051;
            result[1] += 0.9294871794871795;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.9318049848079681396) ) ) {
            result[0] += 0.8235294117647058;
            result[1] += 0.17647058823529413;
          } else {
            result[0] += 0.391304347826087;
            result[1] += 0.6086956521739131;
          }
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.739674985408782959) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.9031099975109100342) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5498799979686737061) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2891950011253356934) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
            result[0] += 0.9565217391304348;
            result[1] += 0.043478260869565216;
          } else {
            result[0] += 0.11428571428571428;
            result[1] += 0.8857142857142857;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2309599965810775757) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.06837606837606838;
            result[1] += 0.9316239316239316;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.1482399990782141685) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.373974991962313652) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.6990399956703186035) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.277779996395111084) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7944949865341186523) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.983574986457824707) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.9945150017738342285) ) ) {
            result[0] += 0.040697674418604654;
            result[1] += 0.9593023255813954;
          } else {
            result[0] += 0.7;
            result[1] += 0.3;
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5490350127220153809) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9552350044250488281) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.3372099995613098145) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.4050849974155426025) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.2186749950051307678) ) ) {
            result[0] += 0.95;
            result[1] += 0.05;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4034350067377090454) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2641499936580657959) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.3423550128936767578) ) ) {
            result[0] += 0.04878048780487805;
            result[1] += 0.9512195121951219;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.6235450208187103271) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.4133149832487106323) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.3878500089049339294) ) ) {
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.06134499981999397278) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.4615349918603897095) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7668600082397460938) ) ) {
            result[0] += 0.2;
            result[1] += 0.8;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.7449049949645996094) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7272749990224838257) ) ) {
            result[0] += 0.1111111111111111;
            result[1] += 0.8888888888888888;
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
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1408099979162216187) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.4576449990272521973) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.8784950077533721924) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.4394399970769882202) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2193350046873092651) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.9598650038242340088) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.013422818791946308;
            result[1] += 0.9865771812080537;
          }
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9098950028419494629) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.2881499975919723511) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.3449999988079071045) ) ) {
            result[0] += 0.9090909090909091;
            result[1] += 0.09090909090909091;
          } else {
            result[0] += 0.2;
            result[1] += 0.8;
          }
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2891950011253356934) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1295600049197673798) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.001494999974966049194) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.04836999997496604919) ) ) {
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.231155000627040863) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.1945800036191940308) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.6872799992561340332) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.4790100008249282837) ) ) {
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
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.8192099928855895996) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.9533250033855438232) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6283050179481506348) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.3262549936771392822) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
            result[0] += 0.023255813953488372;
            result[1] += 0.9767441860465116;
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
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6475049853324890137) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1408099979162216187) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.07741935483870968;
            result[1] += 0.9225806451612903;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.8246999979019165039) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.4298199862241744995) ) ) {
            result[0] += 0.16666666666666666;
            result[1] += 0.8333333333333334;
          } else {
            result[0] += 0.875;
            result[1] += 0.125;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.875) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.5) ) ) {
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
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9876999855041503906) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.2757949978113174438) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.05755395683453238;
            result[1] += 0.9424460431654677;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.5740499794483184814) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.21428571428571427;
            result[1] += 0.7857142857142857;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.9482350051403045654) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2749550044536590576) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9667899906635284424) ) ) {
            result[0] += 0.2;
            result[1] += 0.8;
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
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.4576449990272521973) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4723600000143051147) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9352599978446960449) ) ) {
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
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.5729900002479553223) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7997750043869018555) ) ) {
            result[0] += 0.08571428571428572;
            result[1] += 0.9142857142857143;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.9491199851036071777) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.9124599993228912354) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7947549819946289062) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.9590699970722198486) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.0967741935483871;
            result[1] += 0.9032258064516129;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.5020799934864044189) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.220315001904964447) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.9726549983024597168) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5691300034523010254) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.5770699977874755859) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.2022650055587291718) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.3181249946355819702) ) ) {
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
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6768300086259841919) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.01775147928994083;
            result[1] += 0.9822485207100592;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.3431849926710128784) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4404000043869018555) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.0003900000010617077351) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.2802999988198280334) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3002150058746337891) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-1.499999962106812745e-05) ) ) {
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
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.5729900002479553223) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5176050066947937012) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.2264149934053421021) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.9759500026702880859) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1707299947738647461) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9105649888515472412) ) ) {
            result[0] += 0.04487179487179487;
            result[1] += 0.9551282051282052;
          } else {
            result[0] += 0.625;
            result[1] += 0.375;
          }
        }
      }
    }
  }
  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.01950000040233135223) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.06190999969840049744) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.297214999794960022) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.008534999564290046692) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.3840799927711486816) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.148965001106262207) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.8824099898338317871) ) ) {
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
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.8040699958801269531) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.9945150017738342285) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1408099979162216187) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.03731343283582089;
            result[1] += 0.9626865671641791;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9643700122833251953) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.08208999782800674438) ) ) {
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
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.08685000240802764893) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.1351349949836730957) ) ) {
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
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0002000000094994902611) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.3155150115489959717) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.03265500068664550781) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.6696750223636627197) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.4699399955570697784) ) ) {
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.02543000038713216782) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9205549955368041992) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.9754950106143951416) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6283050179481506348) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6060149967670440674) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.3333333333333333;
            result[1] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2816650047898292542) ) ) {
            result[0] += 0.8571428571428571;
            result[1] += 0.14285714285714285;
          } else {
            result[0] += 0.055944055944055944;
            result[1] += 0.9440559440559441;
          }
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3449150025844573975) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.1834249980747699738) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-2.999999924213625491e-05) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6475049853324890137) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.16666666666666666;
            result[1] += 0.8333333333333334;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.01642500050365924835) ) ) {
            result[0] += 0.8;
            result[1] += 0.2;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.4877500087022781372) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.1376650054007768631) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.4487800002098083496) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.8589250147342681885) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0.3333333333333333;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.5082300007343292236) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9566900134086608887) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3225150108337402344) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.2995750010013580322) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7272749990224838257) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6128349900245666504) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05176999978721141815) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.1315799951553344727) ) ) {
            result[0] += 0.875;
            result[1] += 0.125;
          } else {
            result[0] += 0.06666666666666667;
            result[1] += 0.9333333333333333;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.8278599977493286133) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.3671000003814697266) ) ) {
            result[0] += 0.3076923076923077;
            result[1] += 0.6923076923076923;
          } else {
            result[0] += 0.05982905982905983;
            result[1] += 0.9401709401709402;
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9361749887466430664) ) ) {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.8264750242233276367) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.5) ) ) {
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
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8339450061321258545) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3651700019836425781) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.15;
            result[1] += 0.85;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.1561299972236156464) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.06870229007633588;
            result[1] += 0.9312977099236641;
          }
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3217900097370147705) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4657850004732608795) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8057949841022491455) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6283050179481506348) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.4548599869012832642) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.6000000014901161194) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.4308699965476989746) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1408099979162216187) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.0481283422459893;
            result[1] += 0.9518716577540107;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2318000048398971558) ) ) {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.5212650001049041748) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.2559149861335754395) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.7278099954128265381) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.8766050040721893311) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.08356499671936035156) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0) ) ) {
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
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.89342498779296875) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7575750052928924561) ) ) {
            result[0] += 0.04316546762589928;
            result[1] += 0.9568345323741008;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2672550082206726074) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.3333333333333333;
            result[1] += 0.6666666666666666;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.04086500173434615135) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
            result[0] += 0.16666666666666666;
            result[1] += 0.8333333333333334;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.05882500112056732178) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0.3333333333333333;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.8211749792098999023) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.983574986457824707) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.4866099953651428223) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01879500038921833038) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.08295000018551945686) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.6904799938201904297) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.2693900018930435181) ) ) {
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7935449779033660889) ) ) {
            result[0] += 0.05;
            result[1] += 0.95;
          } else {
            result[0] += 0.5454545454545454;
            result[1] += 0.45454545454545453;
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1930849999189376831) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5967300087213516235) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4330900013446807861) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.09166499972343444824) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.890960007905960083) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3118499964475631714) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.9474450051784515381) ) ) {
            result[0] += 0.08152173913043478;
            result[1] += 0.9184782608695652;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.0467449994757771492) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.1576250046491622925) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.1010449975728988647) ) ) {
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
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.7797049880027770996) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.1448950022459030151) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2888550013303756714) ) ) {
            result[0] += 0.17647058823529413;
            result[1] += 0.8235294117647058;
          } else {
            result[0] += 0.009708737864077669;
            result[1] += 0.9902912621359223;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.1950199976563453674) ) ) {
            result[0] += 0.6153846153846154;
            result[1] += 0.38461538461538464;
          } else {
            result[0] += 0.08;
            result[1] += 0.92;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.02869999967515468597) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.4388900101184844971) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.14285714285714285;
            result[1] += 0.8571428571428571;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.1840150021016597748) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0.3333333333333333;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05176999978721141815) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.05730999913066625595) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.136410001665353775) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.1458899956196546555) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.03125;
            result[1] += 0.96875;
          }
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9081700146198272705) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.09732999652624130249) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.6005150079727172852) ) ) {
            result[0] += 0.5;
            result[1] += 0.5;
          } else {
            result[0] += 0.03571428571428571;
            result[1] += 0.9642857142857143;
          }
        }
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5397500097751617432) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.9320099949836730957) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9387849867343902588) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.05869499966502189636) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.156419999897480011) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.2853900045156478882) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.002489999867975711823) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.3801700025796890259) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.8149949908256530762) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.7919400036334991455) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.32765999436378479) ) ) {
            result[0] += 0.4074074074074074;
            result[1] += 0.5925925925925926;
          } else {
            result[0] += 0.027522935779816515;
            result[1] += 0.9724770642201835;
          }
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.2920700013637542725) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.2867700010538101196) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4354950115084648132) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.08080499991774559021) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-5.999999848427250981e-05) ) ) {
            result[0] += 0.7777777777777778;
            result[1] += 0.2222222222222222;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.5040950030088424683) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.08333333333333333;
            result[1] += 0.9166666666666666;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1283600032329559326) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.5071649849414825439) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.8890099823474884033) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8181799948215484619) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.52447500079870224) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.6176450029015541077) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
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
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9032450020313262939) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9329150021076202393) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.7770250141620635986) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.1770400106906890869) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9285149872303009033) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3303000032901763916) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.04017999954521656036) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.5573770491803278;
            result[1] += 0.4426229508196721;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7953100204467773438) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.058333333333333334;
            result[1] += 0.9416666666666667;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.0594349987804889679) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2109400033950805664) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.468745008111000061) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0002000000094994902611) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.3917100131511688232) ) ) {
            result[0] += 0.9090909090909091;
            result[1] += 0.09090909090909091;
          } else {
            result[0] += 0.08333333333333333;
            result[1] += 0.9166666666666666;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.3515450060367584229) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.2087950035929679871) ) ) {
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
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2364600002765655518) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.1123099997639656067) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3040250092744827271) ) ) {
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
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1550100073218345642) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.03260999917984008789) ) ) {
            result[0] += 0.7142857142857143;
            result[1] += 0.2857142857142857;
          } else {
            result[0] += 0.08695652173913043;
            result[1] += 0.9130434782608695;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.5412550121545791626) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.3781900107860565186) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.2777777777777778;
            result[1] += 0.7222222222222222;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01879500038921833038) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.3202600032091140747) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.5) ) ) {
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7944949865341186523) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.8766050040721893311) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.7797049880027770996) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.0748663101604278;
            result[1] += 0.9251336898395722;
          }
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9352599978446960449) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8989500105381011963) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.500845000147819519) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.8389199972152709961) ) ) {
            result[0] += 0.06593406593406594;
            result[1] += 0.9340659340659341;
          } else {
            result[0] += 0.6;
            result[1] += 0.4;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3226000070571899414) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2442150041460990906) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1097849998623132706) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.5916050001978874207) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-0.4026700034737586975) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-3.999999898951500654e-05) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.0499000009149312973) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.3965499997138977051) ) ) {
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
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.9084300100803375244) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3547399938106536865) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.04469500001869164407) ) ) {
            result[0] += 0.125;
            result[1] += 0.875;
          } else {
            result[0] += 0.9230769230769231;
            result[1] += 0.07692307692307693;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.37910500168800354) ) ) {
            result[0] += 0.5714285714285714;
            result[1] += 0.42857142857142855;
          } else {
            result[0] += 0.03937007874015748;
            result[1] += 0.9606299212598425;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.8674700260162353516) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4330900013446807861) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.4780500084161758423) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
            result[0] += 0.9230769230769231;
            result[1] += 0.07692307692307693;
          } else {
            result[0] += 0.13368983957219252;
            result[1] += 0.8663101604278075;
          }
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7446549832820892334) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.4439249932765960693) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8980149924755096436) ) ) {
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1408099979162216187) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8250949978828430176) ) ) {
            result[0] += 0.006369426751592357;
            result[1] += 0.9936305732484076;
          } else {
            result[0] += 0.4;
            result[1] += 0.6;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7874299883842468262) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.6153846153846154;
            result[1] += 0.38461538461538464;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.03839499969035387039) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.01539499999489635229) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.0381649993360042572) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0001250000059371814132) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.2647399976849555969) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.2481950074434280396) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.00752499699592590332) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0.3333333333333333;
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
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9970000088214874268) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.4780500084161758423) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1049150004982948303) ) ) {
            result[0] += 0.42857142857142855;
            result[1] += 0.5714285714285714;
          } else {
            result[0] += 0.024793388429752067;
            result[1] += 0.9752066115702479;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.1617150008678436279) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.2331650033593177795) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.18181818181818182;
            result[1] += 0.8181818181818182;
          }
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9667899906635284424) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.7376199960708618164) ) ) {
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
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9127549827098846436) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.7406799942255020142) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.05526499822735786438) ) ) {
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
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05153499916195869446) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02598000038415193558) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.0001400000037392601371) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.6098250150680541992) ) ) {
            result[0] += 0.027777777777777776;
            result[1] += 0.9722222222222222;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.4849949851632118225) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.3619949966669082642) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7745099961757659912) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.9988799989223480225) ) ) {
            result[0] += 0.02564102564102564;
            result[1] += 0.9743589743589743;
          } else {
            result[0] += 0.35;
            result[1] += 0.65;
          }
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
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.4555999934673309326) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.09893999993801116943) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.5630550086498260498) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.3540999889373779297) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.5;
            result[1] += 0.5;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.3239949941635131836) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.04314499907195568085) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1860899999737739563) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.625;
            result[1] += 0.375;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.2347399964928627014) ) ) {
            result[0] += 0.06666666666666667;
            result[1] += 0.9333333333333333;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9127549827098846436) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.703250005841255188) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.5) ) ) {
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
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.6150349974632263184) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.8653100132942199707) ) ) {
            result[0] += 0.028846153846153848;
            result[1] += 0.9711538461538461;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.5596849918365478516) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.14285714285714285;
            result[1] += 0.8571428571428571;
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4404000043869018555) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-1.499999962106812745e-05) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.148965001106262207) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.0003900000010617077351) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)3.500000457279384136e-05) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.5073750000447034836) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.2132249996066093445) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.5729799866676330566) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.166665002703666687) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.9815250039100646973) ) ) {
            result[0] += 0.05806451612903226;
            result[1] += 0.9419354838709677;
          } else {
            result[0] += 0.7;
            result[1] += 0.3;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.9902099967002868652) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0.6666666666666666;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1408099979162216187) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7272749990224838257) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
            result[0] += 0.012195121951219513;
            result[1] += 0.9878048780487805;
          } else {
            result[0] += 0.26666666666666666;
            result[1] += 0.7333333333333333;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.06935500167310237885) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.1110950037837028503) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.2143850028514862061) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1206900030374526978) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.8571428571428571;
            result[1] += 0.14285714285714285;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4083350002765655518) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1020400002598762512) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2522249966859817505) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.4312149956822395325) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.8579899966716766357) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.6669999957084655762) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.4582000123336911201) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.028368794326241134;
            result[1] += 0.9716312056737588;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.6357650011777877808) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5490350127220153809) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.445209994912147522) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9050999879837036133) ) ) {
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
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1321949958801269531) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.4195300042629241943) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2313050031661987305) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4576800018548965454) ) ) {
            result[0] += 0.625;
            result[1] += 0.375;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1995900087058544159) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9919500052928924561) ) ) {
            result[0] += 0.02857142857142857;
            result[1] += 0.9714285714285714;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5296200215816497803) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-0.1735700145363807678) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2230500057339668274) ) ) {
            result[0] += 0.5;
            result[1] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.2370949983596801758) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8057949841022491455) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4404000043869018555) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.01162500027567148209) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.5360999926924705505) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.04671000130474567413) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0.3333333333333333;
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2193350046873092651) ) ) {
            result[0] += 0.8;
            result[1] += 0.2;
          } else {
            result[0] += 0.02962962962962963;
            result[1] += 0.9703703703703703;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.006864999886602163315) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.06134499981999397278) ) ) {
            result[0] += 0.75;
            result[1] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.8770299851894378662) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
            result[0] += 0.031446540880503145;
            result[1] += 0.9685534591194969;
          } else {
            result[0] += 0.34782608695652173;
            result[1] += 0.6521739130434783;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9666149914264678955) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.4181049885228276253) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.5;
            result[1] += 0.5;
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.813050001859664917) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9322450160980224609) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.05357142857142857;
            result[1] += 0.9464285714285714;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.8531700074672698975) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.21428571428571427;
            result[1] += 0.7857142857142857;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.007985000032931566238) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.568085014820098877) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.001365000032819807529) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.574610002338886261) ) ) {
            result[0] += 0.125;
            result[1] += 0.875;
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.4201899915933609009) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.4290899932384490967) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7472899854183197021) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.5) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4404000043869018555) ) ) {
            result[0] += 0.6153846153846154;
            result[1] += 0.38461538461538464;
          } else {
            result[0] += 0.02857142857142857;
            result[1] += 0.9714285714285714;
          }
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9032450020313262939) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1321949958801269531) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.3235899955034255981) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.008630000054836273193) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.0988449975848197937) ) ) {
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.109544999897480011) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.888889998197555542) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.6;
            result[1] += 0.4;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1835000067949295044) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.7465550005435943604) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.8856399953365325928) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.6911749839782714844) ) ) {
            result[0] += 0.007874015748031496;
            result[1] += 0.9921259842519685;
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
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.1558800041675567627) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1354300007224082947) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-3.999999898951500654e-05) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.1578249968588352203) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.02686500083655118942) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0.3333333333333333;
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
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.1945800036191940308) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.4821300003677606583) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.04388000071048736572) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6503849923610687256) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.2876749932765960693) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.6077099889516830444) ) ) {
            result[0] += 0.8333333333333334;
            result[1] += 0.16666666666666666;
          } else {
            result[0] += 0.07006369426751592;
            result[1] += 0.9299363057324841;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9026100039482116699) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.9774450063705444336) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.2505600079894065857) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.3809499964118003845) ) ) {
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8744599819183349609) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3989050090312957764) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.7705349922180175781) ) ) {
            result[0] += 0.17333333333333334;
            result[1] += 0.8266666666666667;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2122050002217292786) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.5714285714285714;
            result[1] += 0.42857142857142855;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.426369987428188324) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9382799863815307617) ) ) {
            result[0] += 0.8;
            result[1] += 0.2;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.4;
            result[1] += 0.6;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9026100039482116699) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.875) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.3933999985456466675) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.631149977445602417) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1919199936091899872) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.01462999964132905006) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0.3333333333333333;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.5009999871253967285) ) ) {
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
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.8768799901008605957) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7091999948024749756) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1707299947738647461) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.7072850018739700317) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.05952380952380952;
            result[1] += 0.9404761904761905;
          }
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5176050066947937012) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.8506000041961669922) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5911200046539306641) ) ) {
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.04088499955832958221) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.1888099983334541321) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.3445399999618530273) ) ) {
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
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8339450061321258545) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7558549940586090088) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.8024950027465820312) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.09803921568627451;
            result[1] += 0.9019607843137255;
          }
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7558549940586090088) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8917249739170074463) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.860009998083114624) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7652349770069122314) ) ) {
            result[0] += 0.057692307692307696;
            result[1] += 0.9423076923076923;
          } else {
            result[0] += 0.5;
            result[1] += 0.5;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5770050138235092163) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.9534749984741210938) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9581199884414672852) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.1630349978804588318) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.1321400031447410583) ) ) {
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8057949841022491455) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7752499878406524658) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7935449779033660889) ) ) {
            result[0] += 0.08783783783783784;
            result[1] += 0.9121621621621622;
          } else {
            result[0] += 0.6153846153846154;
            result[1] += 0.38461538461538464;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.0698550008237361908) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.0281399991363286972) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.969765007495880127) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.3114549964666366577) ) ) {
            result[0] += 0.5;
            result[1] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.4739950001239776611) ) ) {
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
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6642700135707855225) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.6626999974250793457) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.9830049872398376465) ) ) {
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
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.875) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2195649966597557068) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.09378499910235404968) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.2451200038194656372) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.044444444444444446;
            result[1] += 0.9555555555555556;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.8231399953365325928) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.5) ) ) {
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
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.05284999962896108627) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.09823499992489814758) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.148965001106262207) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.04194999951869249344) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.05595500022172927856) ) ) {
            result[0] += 0.75;
            result[1] += 0.25;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.8295449912548065186) ) ) {
            result[0] += 0.6;
            result[1] += 0.4;
          } else {
            result[0] += 0.04895104895104895;
            result[1] += 0.951048951048951;
          }
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.08850499987602233887) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.4511300027370452881) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1574749946594238281) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2125849965959787369) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.04671000130474567413) ) ) {
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
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.259990006685256958) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3912149965763092041) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0.3333333333333333;
          }
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2591699957847595215) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.5128100067377090454) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.00147999997716397047) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.9808349907398223877) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2147799953818321228) ) ) {
            result[0] += 0.5625;
            result[1] += 0.4375;
          } else {
            result[0] += 0.04929577464788732;
            result[1] += 0.9507042253521126;
          }
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7446549832820892334) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.9084950089454650879) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.5) ) ) {
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4965550005435943604) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.9659099876880645752) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9717000126838684082) ) ) {
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
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.07243000157177448273) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.8988299965858459473) ) ) {
            result[0] += 0.1724137931034483;
            result[1] += 0.8275862068965517;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2178549915552139282) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1309350021183490753) ) ) {
            result[0] += 0.04201680672268908;
            result[1] += 0.957983193277311;
          } else {
            result[0] += 0.2608695652173913;
            result[1] += 0.7391304347826086;
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1408099979162216187) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9901649951934814453) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6255199909210205078) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5322400182485580444) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2230500057339668274) ) ) {
            result[0] += 0.6;
            result[1] += 0.4;
          } else {
            result[0] += 0.05521472392638037;
            result[1] += 0.9447852760736196;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4657350033521652222) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.7949300110340118408) ) ) {
            result[0] += 0.09090909090909091;
            result[1] += 0.9090909090909091;
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
  }
  
  // Average tree outputs
  result[0] /= 80;
  result[1] /= 80;
  
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
    

    FILE* file = fopen("./codegen/dataset_52/split_3/test_data.csv", "r");
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
