
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
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9247550070285797119) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1790000051259994507) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-3.0000002880115062e-05) ) ) {
        result[0] += 0.06896551724137931;
        result[1] += 0.9310344827586207;
      } else {
        result[0] += 0.8888888888888888;
        result[1] += 0.1111111111111111;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.10493827160493827;
        result[1] += 0.8950617283950617;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.03839499969035387039) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.4093900024890899658) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.01929499948164448142) ) ) {
        result[0] += 0.8421052631578947;
        result[1] += 0.15789473684210525;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.8262999951839447021) ) ) {
        result[0] += 0.09523809523809523;
        result[1] += 0.9047619047619048;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7652349770069122314) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
        result[0] += 0.10218978102189781;
        result[1] += 0.8978102189781022;
      } else {
        result[0] += 0.65;
        result[1] += 0.35;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0) ) ) {
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
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.5279999971389770508) ) ) {
        result[0] += 0.29411764705882354;
        result[1] += 0.7058823529411765;
      } else {
        result[0] += 0.02127659574468085;
        result[1] += 0.9787234042553191;
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.1586499959230422974) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5714285714285714;
        result[1] += 0.42857142857142855;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.0438749995082616806) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.03277999907732009888) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.420354992151260376) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.02526500076055526733) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.4444444444444444;
        result[1] += 0.5555555555555556;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9566900134086608887) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.06936416184971098;
        result[1] += 0.930635838150289;
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
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
        result[0] += 0.09302325581395349;
        result[1] += 0.9069767441860465;
      } else {
        result[0] += 0.5416666666666666;
        result[1] += 0.4583333333333333;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5911200046539306641) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3974700123071670532) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.148965001106262207) ) ) {
        result[0] += 0.9318181818181818;
        result[1] += 0.06818181818181818;
      } else {
        result[0] += 0.18181818181818182;
        result[1] += 0.8181818181818182;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1333349943161010742) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.0851063829787234;
        result[1] += 0.9148936170212766;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.3735450059175491333) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.2412600070238113403) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      } else {
        result[0] += 1;
        result[1] += 0;
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9127549827098846436) ) ) {
        result[0] += 0.8181818181818182;
        result[1] += 0.18181818181818182;
      } else {
        result[0] += 0.10555555555555556;
        result[1] += 0.8944444444444445;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2179500013589859009) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.983574986457824707) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.12365591397849462;
        result[1] += 0.8763440860215054;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.0914500020444393158) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1993150040507316589) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.03083499521017074585) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.08536585365853659;
        result[1] += 0.9146341463414634;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.4771399945020675659) ) ) {
        result[0] += 0.7368421052631579;
        result[1] += 0.2631578947368421;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.149645000696182251) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1408099979162216187) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9927799999713897705) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4172700047492980957) ) ) {
        result[0] += 0.6;
        result[1] += 0.4;
      } else {
        result[0] += 0.06918238993710692;
        result[1] += 0.9308176100628931;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.07053999975323677063) ) ) {
        result[0] += 0.5714285714285714;
        result[1] += 0.42857142857142855;
      } else {
        result[0] += 0.9230769230769231;
        result[1] += 0.07692307692307693;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2152049988508224487) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.3670400083065032959) ) ) {
        result[0] += 0.7959183673469388;
        result[1] += 0.20408163265306123;
      } else {
        result[0] += 0.13793103448275862;
        result[1] += 0.8620689655172413;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.7295950055122375488) ) ) {
        result[0] += 0.10067114093959731;
        result[1] += 0.8993288590604027;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.5839999914169311523) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.04242424242424243;
        result[1] += 0.9575757575757575;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.8592000007629394531) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.6228049993515014648) ) ) {
        result[0] += 0.8888888888888888;
        result[1] += 0.1111111111111111;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.8607999980449676514) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.52;
        result[1] += 0.48;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2175149992108345032) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.5684849917888641357) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5454545454545454;
        result[1] += 0.45454545454545453;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1408099979162216187) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.08241758241758242;
        result[1] += 0.9175824175824175;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.9051699936389923096) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.89342498779296875) ) ) {
        result[0] += 0.1111111111111111;
        result[1] += 0.8888888888888888;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9256849884986877441) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.9509800076484680176) ) ) {
        result[0] += 0.09289617486338798;
        result[1] += 0.907103825136612;
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
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.04453500080853700638) ) ) {
        result[0] += 0.5;
        result[1] += 0.5;
      } else {
        result[0] += 0.049079754601226995;
        result[1] += 0.950920245398773;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.5256149917840957642) ) ) {
        result[0] += 0.6538461538461539;
        result[1] += 0.34615384615384615;
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.1998299956321716309) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.7375349998474121094) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6153846153846154;
        result[1] += 0.38461538461538464;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5515550076961517334) ) ) {
        result[0] += 0.8461538461538461;
        result[1] += 0.15384615384615385;
      } else {
        result[0] += 0.13297872340425532;
        result[1] += 0.8670212765957447;
      }
    }
  }
  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.3444900065660476685) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.1517499927431344986) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1816200017929077148) ) ) {
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
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2102850005030632019) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.000155000001541338861) ) ) {
        result[0] += 0.21875;
        result[1] += 0.78125;
      } else {
        result[0] += 0.7857142857142857;
        result[1] += 0.21428571428571427;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1333349943161010742) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.13013698630136986;
        result[1] += 0.8698630136986302;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.9175949990749359131) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1408099979162216187) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.11734693877551021;
        result[1] += 0.8826530612244898;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5176050066947937012) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7652349770069122314) ) ) {
        result[0] += 0.13903743315508021;
        result[1] += 0.8609625668449198;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2880550026893615723) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.7310699969530105591) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.01044999994337558746) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9257999956607818604) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.9756500124931335449) ) ) {
        result[0] += 0.075;
        result[1] += 0.925;
      } else {
        result[0] += 0.8888888888888888;
        result[1] += 0.1111111111111111;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2179500013589859009) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8646399974822998047) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9105649888515472412) ) ) {
        result[0] += 0.10891089108910891;
        result[1] += 0.8910891089108911;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.2451000064611434937) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.8988850116729736328) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.1218274111675127;
        result[1] += 0.8781725888324873;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.8558900058269500732) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.06942499801516532898) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.09004000201821327209) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.1794871794871795;
        result[1] += 0.8205128205128205;
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9447599947452545166) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.12162162162162163;
        result[1] += 0.8783783783783784;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8900200128555297852) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.2050850018858909607) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.8333333333333334;
        result[1] += 0.16666666666666666;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.5880299806594848633) ) ) {
        result[0] += 0.8333333333333334;
        result[1] += 0.16666666666666666;
      } else {
        result[0] += 0.08333333333333333;
        result[1] += 0.9166666666666666;
      }
    }
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3787900060415267944) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.06296499911695718765) ) ) {
        result[0] += 0.8518518518518519;
        result[1] += 0.14814814814814814;
      } else {
        result[0] += 0.10638297872340426;
        result[1] += 0.8936170212765957;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.07700499892234802246) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.01639344262295082;
        result[1] += 0.9836065573770492;
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.001109999953769147396) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.03875000029802322388) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.8333333333333334;
        result[1] += 0.16666666666666666;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.6754399985074996948) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.46153846153846156;
        result[1] += 0.5384615384615384;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.8377850055694580078) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.2170249968767166138) ) ) {
        result[0] += 0.3709677419354839;
        result[1] += 0.6290322580645161;
      } else {
        result[0] += 0.06060606060606061;
        result[1] += 0.9393939393939394;
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9387849867343902588) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.6120550036430358887) ) ) {
        result[0] += 0.5;
        result[1] += 0.5;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2592999935150146484) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.6937399804592132568) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.1977299973368644714) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.7142857142857143;
        result[1] += 0.2857142857142857;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.04958000034093856812) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.07317073170731707;
        result[1] += 0.926829268292683;
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.3665899932384490967) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
        result[0] += 0.0703125;
        result[1] += 0.9296875;
      } else {
        result[0] += 0.5882352941176471;
        result[1] += 0.4117647058823529;
      }
    }
  }
  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.5839999914169311523) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.9031099975109100342) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.03422500006854534149) ) ) {
        result[0] += 0.675;
        result[1] += 0.325;
      } else {
        result[0] += 0.16129032258064516;
        result[1] += 0.8387096774193549;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9257999956607818604) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.8295449912548065186) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.3333333333333333;
        result[1] += 0.6666666666666666;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2874100059270858765) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
        result[0] += 0.9090909090909091;
        result[1] += 0.09090909090909091;
      } else {
        result[0] += 0.08673469387755102;
        result[1] += 0.9132653061224489;
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8219450116157531738) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.969765007495880127) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.7766600251197814941) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.11891891891891893;
        result[1] += 0.8810810810810811;
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.1929050013422966003) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9643700122833251953) ) ) {
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
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.9443449974060058594) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.04088499955832958221) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.260839998722076416) ) ) {
        result[0] += 0.7777777777777778;
        result[1] += 0.2222222222222222;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8701950013637542725) ) ) {
        result[0] += 0.13227513227513227;
        result[1] += 0.8677248677248677;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.9280549883842468262) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9561049938201904297) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.2;
        result[1] += 0.8;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.19811320754716982;
        result[1] += 0.8018867924528302;
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
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.09379500336945056915) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.3137254901960784;
        result[1] += 0.6862745098039216;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.461979985237121582) ) ) {
        result[0] += 0.7272727272727273;
        result[1] += 0.2727272727272727;
      } else {
        result[0] += 0.12080536912751678;
        result[1] += 0.8791946308724832;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4330900013446807861) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.96096000075340271) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.05660500004887580872) ) ) {
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.07245999947190284729) ) ) {
        result[0] += 0.5384615384615384;
        result[1] += 0.46153846153846156;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.125) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.10526315789473684;
        result[1] += 0.8947368421052632;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.6096349954605102539) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.1404199956741649657) ) ) {
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.8177399933338165283) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.3010550141334533691) ) ) {
        result[0] += 0.4318181818181818;
        result[1] += 0.5681818181818182;
      } else {
        result[0] += 0.05555555555555555;
        result[1] += 0.9444444444444444;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3867399990558624268) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.7142857142857143;
        result[1] += 0.2857142857142857;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9322450160980224609) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.11731843575418995;
        result[1] += 0.88268156424581;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.7980450093746185303) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1348499953746795654) ) ) {
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
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5930700004100799561) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.4527499973773956299) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5;
        result[1] += 0.5;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7028900086879730225) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.15;
        result[1] += 0.85;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1184299997985363007) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-5.999999848427250981e-05) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8712100088596343994) ) ) {
        result[0] += 0.21875;
        result[1] += 0.78125;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3553850091993808746) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.8333333333333334;
        result[1] += 0.16666666666666666;
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1351950019598007202) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
        result[0] += 0.05925925925925926;
        result[1] += 0.9407407407407408;
      } else {
        result[0] += 0.7;
        result[1] += 0.3;
      }
    }
  }
  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.5880299806594848633) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.007985000032931566238) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.0001400000037392601371) ) ) {
        result[0] += 0.12903225806451613;
        result[1] += 0.8709677419354839;
      } else {
        result[0] += 0.925;
        result[1] += 0.075;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.04958000034093856812) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.10559006211180125;
        result[1] += 0.8944099378881988;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.04088499955832958221) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.05845999903976917267) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7344049811363220215) ) ) {
        result[0] += 0.06936416184971098;
        result[1] += 0.930635838150289;
      } else {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.3283500000834465027) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.4182549938559532166) ) ) {
        result[0] += 0.6;
        result[1] += 0.4;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2481500059366226196) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.01625999948009848595) ) ) {
        result[0] += 0.04;
        result[1] += 0.96;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.05053500086069107056) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.04225352112676056;
        result[1] += 0.9577464788732394;
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.007555000018328428268) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.03719500079751014709) ) ) {
        result[0] += 0.5333333333333333;
        result[1] += 0.4666666666666667;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.7636999785900115967) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.9090909090909091;
        result[1] += 0.09090909090909091;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1175950020551681519) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.2341749966144561768) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.8636363636363636;
        result[1] += 0.13636363636363635;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5931549966335296631) ) ) {
        result[0] += 0.8;
        result[1] += 0.2;
      } else {
        result[0] += 0.049079754601226995;
        result[1] += 0.950920245398773;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.8599999845027923584) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.3422800004482269287) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.7142857142857143;
        result[1] += 0.2857142857142857;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.2576199918985366821) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.4666666666666667;
        result[1] += 0.5333333333333333;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.08698000013828277588) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.003389999968931078911) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.004464999772608280182) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.4079499989748001099) ) ) {
        result[0] += 0.2;
        result[1] += 0.8;
      } else {
        result[0] += 0.9;
        result[1] += 0.1;
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.1060349978506565094) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.2678550034761428833) ) ) {
        result[0] += 0.3;
        result[1] += 0.7;
      } else {
        result[0] += 0.9545454545454546;
        result[1] += 0.045454545454545456;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.7425700128078460693) ) ) {
        result[0] += 0.05673758865248227;
        result[1] += 0.9432624113475178;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.144859999418258667) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.05619500111788511276) ) ) {
        result[0] += 0.9565217391304348;
        result[1] += 0.043478260869565216;
      } else {
        result[0] += 0.02631578947368421;
        result[1] += 0.9736842105263158;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.1097400039434432983) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.023255813953488372;
        result[1] += 0.9767441860465116;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.783235013484954834) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7547650039196014404) ) ) {
        result[0] += 0.5;
        result[1] += 0.5;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.06798500008881092072) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.8419449925422668457) ) ) {
        result[0] += 0.05555555555555555;
        result[1] += 0.9444444444444444;
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
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.9051699936389923096) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.054878048780487805;
        result[1] += 0.9451219512195121;
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.3953550010919570923) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9004149734973907471) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.07166500110179185867) ) ) {
        result[0] += 0.5555555555555556;
        result[1] += 0.4444444444444444;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.03839499969035387039) ) ) {
        result[0] += 0.42857142857142855;
        result[1] += 0.5714285714285714;
      } else {
        result[0] += 0.08148148148148149;
        result[1] += 0.9185185185185185;
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9387849867343902588) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.8333333333333334;
        result[1] += 0.16666666666666666;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6457199752330780029) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9469150006771087646) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2522249966859817505) ) ) {
        result[0] += 0.9512195121951219;
        result[1] += 0.04878048780487805;
      } else {
        result[0] += 0.14917127071823205;
        result[1] += 0.850828729281768;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3724099993705749512) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.3588199913501739502) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.001685000024735927582) ) ) {
        result[0] += 0.6111111111111112;
        result[1] += 0.3888888888888889;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.5234299991279840469) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.9175949990749359131) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7614249885082244873) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.09302325581395349;
        result[1] += 0.9069767441860465;
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.188470005989074707) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.3875849992036819458) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.742129981517791748) ) ) {
        result[0] += 0.9591836734693877;
        result[1] += 0.04081632653061224;
      } else {
        result[0] += 0.3076923076923077;
        result[1] += 0.6923076923076923;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.305004999041557312) ) ) {
        result[0] += 0.7777777777777778;
        result[1] += 0.2222222222222222;
      } else {
        result[0] += 0.0967741935483871;
        result[1] += 0.9032258064516129;
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.995559990406036377) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.9117650091648101807) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.02654867256637168;
        result[1] += 0.9734513274336283;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
        result[0] += 0.2857142857142857;
        result[1] += 0.7142857142857143;
      } else {
        result[0] += 0.8125;
        result[1] += 0.1875;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8668549954891204834) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5372500121593475342) ) ) {
        result[0] += 0.7894736842105263;
        result[1] += 0.21052631578947367;
      } else {
        result[0] += 0.07514450867052024;
        result[1] += 0.9248554913294798;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9970000088214874268) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.0914500020444393158) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.1766500025987625122) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.6901649981737136841) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.07734806629834254;
        result[1] += 0.9226519337016574;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.1184800006449222565) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.356835000216960907) ) ) {
        result[0] += 0.45454545454545453;
        result[1] += 0.5454545454545454;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1904850006103515625) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2654599994421005249) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.3333333333333333;
        result[1] += 0.6666666666666666;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.6800599992275238037) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.109375;
        result[1] += 0.890625;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.006755000111297704279) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3248399943113327026) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.9175949990749359131) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9814800024032592773) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.10465116279069768;
        result[1] += 0.8953488372093024;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.8275400102138519287) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.09362500160932540894) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.8786250054836273193) ) ) {
        result[0] += 0.6;
        result[1] += 0.4;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1779949963092803955) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.003504999913275241852) ) ) {
        result[0] += 0.1951219512195122;
        result[1] += 0.8048780487804879;
      } else {
        result[0] += 0.925;
        result[1] += 0.075;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
        result[0] += 0.0743801652892562;
        result[1] += 0.9256198347107438;
      } else {
        result[0] += 0.6206896551724138;
        result[1] += 0.3793103448275862;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7935449779033660889) ) ) {
        result[0] += 0.1497326203208556;
        result[1] += 0.8502673796791443;
      } else {
        result[0] += 0.875;
        result[1] += 0.125;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.04615999944508075714) ) ) {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.1384399980306625366) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1094999909400939941) ) ) {
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
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3547399938106536865) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.6577149927616119385) ) ) {
        result[0] += 0.8979591836734694;
        result[1] += 0.10204081632653061;
      } else {
        result[0] += 0.05555555555555555;
        result[1] += 0.9444444444444444;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9614199995994567871) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.136986301369863;
        result[1] += 0.863013698630137;
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8646399974822998047) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
        result[0] += 0.056818181818181816;
        result[1] += 0.9431818181818182;
      } else {
        result[0] += 0.7419354838709677;
        result[1] += 0.25806451612903225;
      }
    }
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2179500013589859009) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9280749857425689697) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.07985000312328338623) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.07777777777777778;
        result[1] += 0.9222222222222223;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.2475700005888938904) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.05415000021457672119) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3994899988174438477) ) ) {
        result[0] += 0.7058823529411765;
        result[1] += 0.29411764705882354;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1134350001811981201) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.8846153846153846;
        result[1] += 0.11538461538461539;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9566900134086608887) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.2412600070238113403) ) ) {
        result[0] += 0.3333333333333333;
        result[1] += 0.6666666666666666;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.9443449974060058594) ) ) {
        result[0] += 0.10526315789473684;
        result[1] += 0.8947368421052632;
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
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7312500178813934326) ) ) {
        result[0] += 0.2727272727272727;
        result[1] += 0.7272727272727273;
      } else {
        result[0] += 0.02608695652173913;
        result[1] += 0.9739130434782609;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.7259000241756439209) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5277777777777778;
        result[1] += 0.4722222222222222;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.9051699936389923096) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.4962249994277954102) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.14606741573033707;
        result[1] += 0.8539325842696629;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.009455000050365924835) ) ) {
        result[0] += 0.6818181818181818;
        result[1] += 0.3181818181818182;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1795299937948584557) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.75;
        result[1] += 0.25;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.12290502793296089;
        result[1] += 0.8770949720670391;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1321949958801269531) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.148965001106262207) ) ) {
        result[0] += 0.8928571428571429;
        result[1] += 0.10714285714285714;
      } else {
        result[0] += 0.07407407407407407;
        result[1] += 0.9259259259259259;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.6049750000238418579) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.04065040650406504;
        result[1] += 0.959349593495935;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.8774850070476531982) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.4337150007486343384) ) ) {
        result[0] += 0.5294117647058824;
        result[1] += 0.47058823529411764;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5370100140571594238) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.7476750016212463379) ) ) {
        result[0] += 0.5;
        result[1] += 0.5;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
        result[0] += 0.14754098360655737;
        result[1] += 0.8524590163934426;
      } else {
        result[0] += 0.7941176470588235;
        result[1] += 0.20588235294117646;
      }
    }
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.001844999962486326694) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.194360002875328064) ) ) {
        result[0] += 0.9375;
        result[1] += 0.0625;
      } else {
        result[0] += 0.20588235294117646;
        result[1] += 0.7941176470588235;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3585000038146972656) ) ) {
        result[0] += 0.3333333333333333;
        result[1] += 0.6666666666666666;
      } else {
        result[0] += 0.010101010101010102;
        result[1] += 0.98989898989899;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.6179199963808059692) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.5596549957990646362) ) ) {
        result[0] += 0.9375;
        result[1] += 0.0625;
      } else {
        result[0] += 0.5333333333333333;
        result[1] += 0.4666666666666667;
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.8788850009441375732) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.619029998779296875) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
        result[0] += 0.12087912087912088;
        result[1] += 0.8791208791208791;
      } else {
        result[0] += 0.7352941176470589;
        result[1] += 0.2647058823529412;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.149645000696182251) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9994949996471405029) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.6528300046920776367) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.10734463276836158;
        result[1] += 0.8926553672316384;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.4510500133037567139) ) ) {
        result[0] += 0.4583333333333333;
        result[1] += 0.5416666666666666;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.0467449994757771492) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.04756499826908111572) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.739674985408782959) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.12437810945273632;
        result[1] += 0.8756218905472637;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
        result[0] += 0.10204081632653061;
        result[1] += 0.8979591836734694;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.04028999991714954376) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05826499871909618378) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.08709999918937683105) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4172700047492980957) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.0004250000056345015764) ) ) {
        result[0] += 0.8;
        result[1] += 0.2;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.297214999794960022) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.09696969696969697;
        result[1] += 0.9030303030303031;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05703499820083379745) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.625;
        result[1] += 0.375;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5370100140571594238) ) ) {
        result[0] += 0.9047619047619048;
        result[1] += 0.09523809523809523;
      } else {
        result[0] += 0.07602339181286549;
        result[1] += 0.9239766081871345;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.1870450004935264587) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.7604499757289886475) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9826149940490722656) ) ) {
        result[0] += 0.75;
        result[1] += 0.25;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6731700003147125244) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.10303030303030303;
        result[1] += 0.896969696969697;
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
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.9051699936389923096) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.08866995073891626;
        result[1] += 0.9113300492610837;
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.188470005989074707) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.04340999945998191833) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.001494999974966049194) ) ) {
        result[0] += 0.875;
        result[1] += 0.125;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.04580000042915344238) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.14285714285714285;
        result[1] += 0.8571428571428571;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.6834149956703186035) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.1008050031960010529) ) ) {
        result[0] += 0.65;
        result[1] += 0.35;
      } else {
        result[0] += 0.06201550387596899;
        result[1] += 0.937984496124031;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.5880299806594848633) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.9175949990749359131) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.07368421052631578;
        result[1] += 0.9263157894736842;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.07206000015139579773) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.7890000045299530029) ) ) {
        result[0] += 0.3584905660377358;
        result[1] += 0.6415094339622641;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.03968253968253968;
        result[1] += 0.9603174603174603;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7652499973773956299) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9352599978446960449) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.42105263157894735;
        result[1] += 0.5789473684210527;
      }
    }
  }
  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.5880299806594848633) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.6812500059604644775) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.5) ) ) {
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
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.89342498779296875) ) ) {
        result[0] += 0.10824742268041238;
        result[1] += 0.8917525773195877;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.798739999532699585) ) ) {
        result[0] += 0.9444444444444444;
        result[1] += 0.05555555555555555;
      } else {
        result[0] += 0.375;
        result[1] += 0.625;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.0467449994757771492) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.0935672514619883;
        result[1] += 0.9064327485380117;
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.03221999853849411011) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.8252550065517425537) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.2222222222222222;
        result[1] += 0.7777777777777778;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.798739999532699585) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.8571428571428571;
        result[1] += 0.14285714285714285;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2686599940061569214) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1097849998623132706) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.8620689655172413;
        result[1] += 0.13793103448275862;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8917249739170074463) ) ) {
        result[0] += 0.09375;
        result[1] += 0.90625;
      } else {
        result[0] += 0.8333333333333334;
        result[1] += 0.16666666666666666;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7652499973773956299) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.6329499930143356323) ) ) {
        result[0] += 0.4444444444444444;
        result[1] += 0.5555555555555556;
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
