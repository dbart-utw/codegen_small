
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
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.875) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.2888950109481811523) ) ) {
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.02214000001549720764) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.2677899971604347229) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7158949971199035645) ) ) {
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6128349900245666504) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.04790419161676647;
            result[1] += 0.9520958083832335;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.149645000696182251) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.8649899959564208984) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2193350046873092651) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.7577850222587585449) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.9642849862575531006) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.9118300080299377441) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.0064516129032258064;
            result[1] += 0.9935483870967742;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.5082300007343292236) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.6184649765491485596) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.6800599992275238037) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.1875;
            result[1] += 0.8125;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.5880299806594848633) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.02214000001549720764) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4975449889898300171) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.6862699985504150391) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9069299995899200439) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.0863149985671043396) ) ) {
            result[0] += 0.5;
            result[1] += 0.5;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.06535947712418301;
            result[1] += 0.934640522875817;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.001044999997247941792) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.3263549953699111938) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.04061000049114227295) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.01991499960422515869) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.01644000038504600525) ) ) {
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
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7927399873733520508) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1020400002598762512) ) ) {
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
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8989500105381011963) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7313249707221984863) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.8962250053882598877) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.4768899977207183838) ) ) {
            result[0] += 0.13043478260869565;
            result[1] += 0.8695652173913043;
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
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.1875) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0) ) ) {
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
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9614199995994567871) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.2672250047326087952) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.730354994535446167) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.05415000021457672119) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1726649999618530273) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.2857142857142857;
            result[1] += 0.7142857142857143;
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.06545499898493289948) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.1813649982213973999) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.7374449968338012695) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.5414449870586395264) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.008928571428571428;
            result[1] += 0.9910714285714286;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.933945000171661377) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2807449996471405029) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.6022599935531616211) ) ) {
            result[0] += 0.2857142857142857;
            result[1] += 0.7142857142857143;
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2599149942398071289) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7256699800491333008) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9032450020313262939) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.938935011625289917) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.05232558139534884;
            result[1] += 0.9476744186046512;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.08356499671936035156) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2877649962902069092) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.2659899964928627014) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.766904979944229126) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2266699932515621185) ) ) {
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2131100036203861237) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.89342498779296875) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7555849850177764893) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.9922749996185302734) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.02631578947368421;
            result[1] += 0.9736842105263158;
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
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.8604550063610076904) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.5709349960088729858) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.4962150007486343384) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.4887999892234802246) ) ) {
            result[0] += 0.14285714285714285;
            result[1] += 0.8571428571428571;
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
  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.3173149973154067993) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.4236450046300888062) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3786149919033050537) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.4817700088024139404) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.8308050036430358887) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.0718349972739815712) ) ) {
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
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7183800041675567627) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.4439249932765960693) ) ) {
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.938935011625289917) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05761999823153018951) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7558549940586090088) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.08602150537634409;
            result[1] += 0.9139784946236559;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9127549827098846436) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.5714050084352493286) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.06670500338077545166) ) ) {
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.813050001859664917) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.03867403314917127;
            result[1] += 0.9613259668508287;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.2395199984312057495) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.8980049788951873779) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.1377150006592273712) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.3927350044250488281) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.2862349897623062134) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2033349946141242981) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.03773584905660377;
            result[1] += 0.9622641509433962;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.4962150007486343384) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.5194800198078155518) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.2;
            result[1] += 0.8;
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.08616000041365623474) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.2825650125741958618) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.334515005350112915) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.2415250018239021301) ) ) {
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
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.9945150017738342285) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.1060349978506565094) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.04907499998807907104) ) ) {
            result[0] += 0.0625;
            result[1] += 0.9375;
          } else {
            result[0] += 0.7777777777777778;
            result[1] += 0.2222222222222222;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8181799948215484619) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.0547945205479452;
            result[1] += 0.9452054794520548;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.7576749920845031738) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.5) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.9987249970436096191) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8980149924755096436) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.5880299806594848633) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.030864197530864196;
            result[1] += 0.9691358024691358;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.3177599981427192688) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1788899898529052734) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9944899976253509521) ) ) {
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.04731999896466732025) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.03127999976277351379) ) ) {
            result[0] += 0.2;
            result[1] += 0.8;
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
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.05560999922454357147) ) ) {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.1067650020122528076) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.01411500014364719391) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9429549872875213623) ) ) {
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1863349974155426025) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9447599947452545166) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8646399974822998047) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9940800070762634277) ) ) {
            result[0] += 0.028985507246376812;
            result[1] += 0.9710144927536232;
          } else {
            result[0] += 0.35294117647058826;
            result[1] += 0.6470588235294118;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.5193799994885921478) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.75;
            result[1] += 0.25;
          }
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.758170008659362793) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.01477000024169683456) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1437549963593482971) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3612650111317634583) ) ) {
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
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7634799778461456299) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1175950020551681519) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.0547945205479452;
            result[1] += 0.9452054794520548;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.767360001802444458) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.235704994760453701) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.5;
            result[1] += 0.5;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.007985000032931566238) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.3579650074243545532) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.4265100061893463135) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3166899979114532471) ) ) {
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.9655449986457824707) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.05947000160813331604) ) ) {
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9970000088214874268) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.154935002326965332) ) ) {
            result[0] += 0.008403361344537815;
            result[1] += 0.9915966386554622;
          } else {
            result[0] += 0.1875;
            result[1] += 0.8125;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.3333350121974945068) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.23333333333333334;
            result[1] += 0.7666666666666667;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.8741100132465362549) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9105649888515472412) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8980149924755096436) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8927049934864044189) ) ) {
            result[0] += 0.05952380952380952;
            result[1] += 0.9404761904761905;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.2551449984312057495) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.8648650050163269043) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9447599947452545166) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.149645000696182251) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2193350046873092651) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.9673900008201599121) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.008440000470727682114) ) ) {
            result[0] += 0.15625;
            result[1] += 0.84375;
          } else {
            result[0] += 0.008695652173913044;
            result[1] += 0.991304347826087;
          }
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.7890950143337249756) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.6030699983239173889) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.8076899945735931396) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6000000014901161194) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.05;
            result[1] += 0.95;
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.2920700013637542725) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.007519999751821160316) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.3011000007390975952) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.027777777777777776;
            result[1] += 0.9722222222222222;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.3488599956035614014) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.8333333333333334;
            result[1] += 0.16666666666666666;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.05322499573230743408) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9948549866676330566) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.4681200087070465088) ) ) {
            result[0] += 0.043478260869565216;
            result[1] += 0.9565217391304348;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.987724989652633667) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5176050066947937012) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7535249888896942139) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.6837150007486343384) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.6348499953746795654) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.09090909090909091;
            result[1] += 0.9090909090909091;
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9941000044345855713) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8989500105381011963) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.04444999992847442627) ) ) {
            result[0] += 0.21052631578947367;
            result[1] += 0.7894736842105263;
          } else {
            result[0] += 0.02054794520547945;
            result[1] += 0.9794520547945206;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.9423100054264068604) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9004149734973907471) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.06402999907732009888) ) ) {
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9447599947452545166) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.9052549898624420166) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.5714050084352493286) ) ) {
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.0761800035834312439) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7472899854183197021) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0.3333333333333333;
          } else {
            result[0] += 0.03184713375796178;
            result[1] += 0.9681528662420382;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.02666500024497509003) ) ) {
            result[0] += 0.9090909090909091;
            result[1] += 0.09090909090909091;
          } else {
            result[0] += 0.2222222222222222;
            result[1] += 0.7777777777777778;
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2599149942398071289) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8694249987602233887) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9032450020313262939) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8431349992752075195) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.7006950080394744873) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.05263157894736842;
            result[1] += 0.9473684210526315;
          }
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.4131499975919723511) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.6912750005722045898) ) ) {
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
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1190350018441677094) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.477854996919631958) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.1453849989920854568) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.02741999924182891846) ) ) {
            result[0] += 0.3;
            result[1] += 0.7;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.09443999826908111572) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.1833799928426742554) ) ) {
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
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6731700003147125244) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.03644999861717224121) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9940800070762634277) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7555849850177764893) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.7142857142857143;
            result[1] += 0.2857142857142857;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.5204949826002120972) ) ) {
            result[0] += 0.25;
            result[1] += 0.75;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05675499793142080307) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.03277999907732009888) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.6013450026512145996) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.8484800159931182861) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2207050025463104248) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.129795001819729805) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.6979950070381164551) ) ) {
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
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.043010752688172046;
            result[1] += 0.956989247311828;
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2599149942398071289) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2193350046873092651) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.8690499961376190186) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1335700005292892456) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4409199953079223633) ) ) {
            result[0] += 0.8181818181818182;
            result[1] += 0.18181818181818182;
          } else {
            result[0] += 0.075;
            result[1] += 0.925;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.4241850078105926514) ) ) {
            result[0] += 0.14285714285714285;
            result[1] += 0.8571428571428571;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9046050012111663818) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.8181799948215484619) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9068599939346313477) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.09090909090909091;
            result[1] += 0.9090909090909091;
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
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7183800041675567627) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2599149942398071289) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2193350046873092651) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9352599978446960449) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.0546448087431694;
            result[1] += 0.9453551912568307;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.1668299995362758636) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.02796499989926815033) ) ) {
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
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.8071799874305725098) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5911200046539306641) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.6727450191974639893) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8980149924755096436) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.8389199972152709961) ) ) {
            result[0] += 0.07926829268292683;
            result[1] += 0.9207317073170732;
          } else {
            result[0] += 0.5;
            result[1] += 0.5;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.1169049963355064392) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.1067150011658668518) ) ) {
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
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.8474049866199493408) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.1324949972331523895) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.8333333333333334;
            result[1] += 0.16666666666666666;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.9342049956321716309) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.03550295857988166;
            result[1] += 0.9644970414201184;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5515550076961517334) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.09481000155210494995) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.3761650025844573975) ) ) {
            result[0] += 0.5789473684210527;
            result[1] += 0.42105263157894735;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.9976400136947631836) ) ) {
            result[0] += 0.016129032258064516;
            result[1] += 0.9838709677419355;
          } else {
            result[0] += 0.2222222222222222;
            result[1] += 0.7777777777777778;
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.5281199812889099121) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.1656899973750114441) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.1646800041198730469) ) ) {
            result[0] += 0.3076923076923077;
            result[1] += 0.6923076923076923;
          } else {
            result[0] += 0.9166666666666666;
            result[1] += 0.08333333333333333;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.02087000012397766113) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0.3333333333333333;
          } else {
            result[0] += 0.04;
            result[1] += 0.96;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.2213400006294250488) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.8607999980449676514) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.08999999985098838806) ) ) {
            result[0] += 0.5;
            result[1] += 0.5;
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.08616000041365623474) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.02429999923333525658) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.2537350058555603027) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7498099952936172485) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7344049811363220215) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2686599940061569214) ) ) {
            result[0] += 0.46153846153846156;
            result[1] += 0.5384615384615384;
          } else {
            result[0] += 0.03592814371257485;
            result[1] += 0.9640718562874252;
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.2736600041389465332) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.2351749986410140991) ) ) {
            result[0] += 0.75;
            result[1] += 0.25;
          } else {
            result[0] += 0.09090909090909091;
            result[1] += 0.9090909090909091;
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
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.843020021915435791) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.4702650010585784912) ) ) {
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
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.999664992094039917) ) ) {
            result[0] += 0.04195804195804196;
            result[1] += 0.958041958041958;
          } else {
            result[0] += 0.3333333333333333;
            result[1] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.7687500119209289551) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.2857142857142857;
            result[1] += 0.7142857142857143;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03717499971389770508) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.3982300106436014175) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7446549832820892334) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6824550032615661621) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.420354992151260376) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.06972499936819076538) ) ) {
            result[0] += 0.9090909090909091;
            result[1] += 0.09090909090909091;
          } else {
            result[0] += 0.2222222222222222;
            result[1] += 0.7777777777777778;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.820670008659362793) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.046242774566473986;
            result[1] += 0.953757225433526;
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4468399882316589355) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2599149942398071289) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.003414999926462769508) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1849500015377998352) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.137194998562335968) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7820699810981750488) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2074200063943862915) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.9726549983024597168) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.001524999970570206642) ) ) {
            result[0] += 0.10909090909090909;
            result[1] += 0.8909090909090909;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.7432049959897994995) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.655910000205039978) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.07997000165050849319) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.8;
            result[1] += 0.2;
          }
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.05041499994695186615) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.1107100024819374084) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1364650018513202667) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.9197149872779846191) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02659500017762184143) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9290950000286102295) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.0761800035834312439) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.6808699965476989746) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.017241379310344827;
            result[1] += 0.9827586206896551;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7172899842262268066) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.8295449912548065186) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.14285714285714285;
            result[1] += 0.8571428571428571;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7016600072383880615) ) ) {
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
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9361749887466430664) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.05486999824643135071) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.2160499989986419678) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05703499820083379745) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.8758150041103363037) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.4666450014337897301) ) ) {
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
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.7035500109195709229) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7498099952936172485) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.0196078431372549;
            result[1] += 0.9803921568627451;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.1381600014865398407) ) ) {
            result[0] += 0.7894736842105263;
            result[1] += 0.21052631578947367;
          } else {
            result[0] += 0.2;
            result[1] += 0.8;
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.4541299939155578613) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.185340002179145813) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.563434988260269165) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.001449999981559813023) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.7777777777777778;
            result[1] += 0.2222222222222222;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.01264000032097101212) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.8069100081920623779) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4411299973726272583) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1631149947643280029) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7652349770069122314) ) ) {
            result[0] += 0.016129032258064516;
            result[1] += 0.9838709677419355;
          } else {
            result[0] += 0.2857142857142857;
            result[1] += 0.7142857142857143;
          }
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7639899849891662598) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.006864999886602163315) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.01778000034391880035) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.5011099999537691474) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.6742250025272369385) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.6764699965715408325) ) ) {
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
  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1797650009393692017) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.4460799992084503174) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.1174999997019767761) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.3078799992799758911) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2207050025463104248) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.214620005339384079) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.3906800001859664917) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.09411499649286270142) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.08878999948501586914) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.4020949993282556534) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1071449965238571167) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.7207549810409545898) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.6753300130367279053) ) ) {
            result[0] += 0.02054794520547945;
            result[1] += 0.9794520547945206;
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.5642800033092498779) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.6547199785709381104) ) ) {
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
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9447599947452545166) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.8788850009441375732) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9037699997425079346) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7472899854183197021) ) ) {
            result[0] += 0.75;
            result[1] += 0.25;
          } else {
            result[0] += 0.031446540880503145;
            result[1] += 0.9685534591194969;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.5540950000286102295) ) ) {
            result[0] += 0.5;
            result[1] += 0.5;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2245049998164176941) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.6206550002098083496) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.08251000195741653442) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.4030999988317489624) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.1149800028651952744) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.5;
            result[1] += 0.5;
          }
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.4405599832534790039) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.8804349899291992188) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.3831000030040740967) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9566900134086608887) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.5477849990129470825) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.04388000071048736572) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.02962962962962963;
            result[1] += 0.9703703703703703;
          }
        }
      }
    }
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.05560999922454357147) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.80750998854637146) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9607850015163421631) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.2764250040054321289) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.2290250062942504883) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.8;
            result[1] += 0.2;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5911200046539306641) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.1814199984073638916) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.2540800049901008606) ) ) {
            result[0] += 0.15384615384615385;
            result[1] += 0.8461538461538461;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
            result[0] += 0.03278688524590164;
            result[1] += 0.9672131147540983;
          } else {
            result[0] += 0.2777777777777778;
            result[1] += 0.7222222222222222;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.9902099967002868652) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.1139050014317035675) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.3431849926710128784) ) ) {
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
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.02214000001549720764) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.05992499832063913345) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.1261900030076503754) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.2301650047302246094) ) ) {
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.3411300033330917358) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.2620650045573711395) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.6204600036144256592) ) ) {
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.7894900143146514893) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.8389199972152709961) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.02666666666666667;
            result[1] += 0.9733333333333334;
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.6753299832344055176) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.6492599993944168091) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.15384615384615385;
            result[1] += 0.8461538461538461;
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1175950020551681519) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.03235499933362007141) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.37178000807762146) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2276500016450881958) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01879500038921833038) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
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
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.9754950106143951416) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1071449965238571167) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.8404749929904937744) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.7688849866390228271) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.6828050017356872559) ) ) {
            result[0] += 0.046242774566473986;
            result[1] += 0.953757225433526;
          } else {
            result[0] += 0.4;
            result[1] += 0.6;
          }
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.0969000011682510376) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1815550029277801514) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.2902449965476989746) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.6800599992275238037) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2147799953818321228) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.2040100060403347015) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.990094989538192749) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0.3333333333333333;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.6808699965476989746) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7888549864292144775) ) ) {
            result[0] += 0.0379746835443038;
            result[1] += 0.9620253164556962;
          } else {
            result[0] += 0.6363636363636364;
            result[1] += 0.36363636363636365;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3225699961185455322) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.006680000107735395432) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.09475000202655792236) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5055199936032295227) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4220199882984161377) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.04411499574780464172) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.00889999978244304657) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.6077099889516830444) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9811899960041046143) ) ) {
            result[0] += 0.5;
            result[1] += 0.5;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.7481950074434280396) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.024242424242424242;
            result[1] += 0.9757575757575757;
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.0761800035834312439) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.9320099949836730957) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8980149924755096436) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.4998099952936172485) ) ) {
            result[0] += 0.7142857142857143;
            result[1] += 0.2857142857142857;
          } else {
            result[0] += 0.052941176470588235;
            result[1] += 0.9470588235294117;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9127549827098846436) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.5122349997982382774) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.9514200091361999512) ) ) {
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
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.0966800004243850708) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2276500016450881958) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.970699995756149292) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2624249979853630066) ) ) {
            result[0] += 0.2;
            result[1] += 0.8;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.8157800137996673584) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7745099961757659912) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.7797049880027770996) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.03597122302158273;
            result[1] += 0.9640287769784173;
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
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2976150065660476685) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.06591000035405158997) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.1959399953484535217) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.4787950068712234497) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.2649250030517578125) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.2443249970674514771) ) ) {
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
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.1139599978923797607) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.287094995379447937) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3724199980497360229) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1547600030899047852) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.029197080291970802;
            result[1] += 0.9708029197080292;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.2418500036001205444) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.5575999915599822998) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.1197099983692169189) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.2964750006794929504) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1791600026190280914) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.7196100056171417236) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.7151899933815002441) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01359499990940093994) ) ) {
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
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6023550033569335938) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.7935699820518493652) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.7805449962615966797) ) ) {
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.7961200177669525146) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.9655449986457824707) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.8071799874305725098) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.029411764705882353;
            result[1] += 0.9705882352941176;
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03717499971389770508) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.8492049872875213623) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.4901949996128678322) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2522249966859817505) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.08264499902725219727) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.06558500230312347412) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9928199946880340576) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4113550037145614624) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.2773300036787986755) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.8389199972152709961) ) ) {
            result[0] += 0.006993006993006993;
            result[1] += 0.993006993006993;
          } else {
            result[0] += 0.8;
            result[1] += 0.2;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.1180200017988681793) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8181799948215484619) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.09733000025153160095) ) ) {
            result[0] += 0.5833333333333334;
            result[1] += 0.4166666666666667;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1190350018441677094) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.01991499960422515869) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.938935011625289917) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.06260500010102987289) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.3181000053882598877) ) ) {
            result[0] += 0.16666666666666666;
            result[1] += 0.8333333333333334;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4409199953079223633) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.190189998596906662) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.01477000024169683456) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.154555000364780426) ) ) {
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7908799946308135986) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9826700091361999512) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9127549827098846436) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.2564550042152404785) ) ) {
            result[0] += 0.17777777777777778;
            result[1] += 0.8222222222222222;
          } else {
            result[0] += 0.009523809523809525;
            result[1] += 0.9904761904761905;
          }
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.5) ) ) {
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
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6128349900245666504) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.4887199997901916504) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.260455012321472168) ) ) {
            result[0] += 0.058823529411764705;
            result[1] += 0.9411764705882353;
          } else {
            result[0] += 0.75;
            result[1] += 0.25;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2266550064086914062) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8980149924755096436) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.03571428571428571;
            result[1] += 0.9642857142857143;
          }
        }
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5490350127220153809) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.1814199984073638916) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.1218599975109100342) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.06034499965608119965) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.4128649979829788208) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.3108800053596496582) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.8071799874305725098) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.9283550083637237549) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.3785700052976608276) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.022058823529411766;
            result[1] += 0.9779411764705882;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.6044850051403045654) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0.3333333333333333;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05761999823153018951) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.07598000019788742065) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.07925499975681304932) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.3909049853682518005) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.9434149861335754395) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.6;
            result[1] += 0.4;
          }
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.149645000696182251) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1071449965238571167) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.05172413793103448;
            result[1] += 0.9482758620689655;
          }
        }
      }
    }
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9105649888515472412) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.208334997296333313) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.2801149934530258179) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.1660799980163574219) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2498800009489059448) ) ) {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1453649997711181641) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7931700050830841064) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1422200053930282593) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.2383300028741359711) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.8597099781036376953) ) ) {
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6824550032615661621) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9303149878978729248) ) ) {
            result[0] += 0.5;
            result[1] += 0.5;
          } else {
            result[0] += 0.017391304347826087;
            result[1] += 0.9826086956521739;
          }
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8851149976253509521) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.9148949980735778809) ) ) {
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
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1070350036025047302) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1574749946594238281) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.5343949794769287109) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.1908949986100196838) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.02048500068485736847) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.3333350121974945068) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-0.1943100094795227051) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.04212500154972076416) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.4084300100803375244) ) ) {
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.6783599853515625) ) ) {
            result[0] += 0.22580645161290322;
            result[1] += 0.7741935483870968;
          } else {
            result[0] += 0.03333333333333333;
            result[1] += 0.9666666666666667;
          }
        }
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.353789985179901123) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.01020500017330050468) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7340849936008453369) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.2359700053930282593) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.1977299973368644714) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.75;
            result[1] += 0.25;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1032800003886222839) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.7299300134181976318) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.1798800006508827209) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.005659999791532754898) ) ) {
            result[0] += 0.3076923076923077;
            result[1] += 0.6923076923076923;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.001379996538162231445) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.3586949929594993591) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.06134499981999397278) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.3152400031685829163) ) ) {
            result[0] += 0.42857142857142855;
            result[1] += 0.5714285714285714;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
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
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.3749499917030334473) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.5679749846458435059) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2262849956750869751) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2037050053477287292) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.03430499881505966187) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.9636799991130828857) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.6;
            result[1] += 0.4;
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
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
            result[0] += 0.03592814371257485;
            result[1] += 0.9640718562874252;
          } else {
            result[0] += 0.8333333333333334;
            result[1] += 0.16666666666666666;
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1196150034666061401) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7374099940061569214) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.5343949794769287109) ) ) {
            result[0] += 0.4;
            result[1] += 0.6;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5883850008249282837) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.4394399970769882202) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.6058149933815002441) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.0761800035834312439) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.057692307692307696;
            result[1] += 0.9423076923076923;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.9924199879169464111) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.8604550063610076904) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.6105400025844573975) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.3710500113666057587) ) ) {
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
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.08204999938607215881) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.06591000035405158997) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4096949994564056396) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.1921649985015392303) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.816940009593963623) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.1835449934005737305) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.3885599970817565918) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9366349875926971436) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8586249947547912598) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2178549915552139282) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7955000102519989014) ) ) {
            result[0] += 0.06201550387596899;
            result[1] += 0.937984496124031;
          } else {
            result[0] += 0.6;
            result[1] += 0.4;
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3471650034189224243) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.1609399989247322083) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.0909850001335144043) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.7063799947500228882) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.8431400060653686523) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.148965001106262207) ) ) {
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.3084350079298019409) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.5071649849414825439) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1547899991273880005) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.03225806451612903;
            result[1] += 0.967741935483871;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.8604550063610076904) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7714300155639648438) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.2732999995350837708) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.7352949976921081543) ) ) {
            result[0] += 0.043478260869565216;
            result[1] += 0.9565217391304348;
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.983574986457824707) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7555849850177764893) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.139164995402097702) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.6641400158405303955) ) ) {
            result[0] += 0.30303030303030304;
            result[1] += 0.696969696969697;
          } else {
            result[0] += 0.04666666666666667;
            result[1] += 0.9533333333333334;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.18085499107837677) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.6546050012111663818) ) ) {
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
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.08721999824047088623) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.2946349978446960449) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.005880000069737434387) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2383150011301040649) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.1104349987581372261) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.2;
            result[1] += 0.8;
          }
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.4075349867343902588) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.5479950010776519775) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9921000003814697266) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3873150050640106201) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.5490399971604347229) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.024193548387096774;
            result[1] += 0.9758064516129032;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.5860700011253356934) ) ) {
            result[0] += 0.1111111111111111;
            result[1] += 0.8888888888888888;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.3177599981427192688) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9504149854183197021) ) ) {
            result[0] += 0.5;
            result[1] += 0.5;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.8414199948310852051) ) ) {
            result[0] += 0.625;
            result[1] += 0.375;
          } else {
            result[0] += 0.1111111111111111;
            result[1] += 0.8888888888888888;
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.07985000312328338623) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.9697250127792358398) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3851100057363510132) ) ) {
            result[0] += 0.038461538461538464;
            result[1] += 0.9615384615384616;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.6568950116634368896) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.5256149917840957642) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.7972199916839599609) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.862630009651184082) ) ) {
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
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03717499971389770508) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8646399974822998047) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8371500074863433838) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2409100010991096497) ) ) {
            result[0] += 0.5;
            result[1] += 0.5;
          } else {
            result[0] += 0.05555555555555555;
            result[1] += 0.9444444444444444;
          }
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.3806699961423873901) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.4138849973678588867) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.277775004506111145) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.8178299963474273682) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9447599947452545166) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.9048750102519989014) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3585000038146972656) ) ) {
            result[0] += 0.5;
            result[1] += 0.5;
          } else {
            result[0] += 0.025;
            result[1] += 0.975;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.1101399995386600494) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.7890950143337249756) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.1111111111111111;
            result[1] += 0.8888888888888888;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.08377500250935554504) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.5460849851369857788) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9826700091361999512) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.8431400060653686523) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.2862100005149841309) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.3237349987030029297) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.7718150019645690918) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.959515005350112915) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.6042999923229217529) ) ) {
            result[0] += 0.5;
            result[1] += 0.5;
          } else {
            result[0] += 0.03731343283582089;
            result[1] += 0.9626865671641791;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.6445199847221374512) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.4515300095081329346) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.6043599843978881836) ) ) {
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
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.813050001859664917) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.2948250137269496918) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.2585650011897087097) ) ) {
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
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.9763750135898590088) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.7493149936199188232) ) ) {
            result[0] += 0.8333333333333334;
            result[1] += 0.16666666666666666;
          } else {
            result[0] += 0.05084745762711865;
            result[1] += 0.9491525423728814;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.6742250025272369385) ) ) {
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1960400007665157318) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6503849923610687256) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8646399974822998047) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7555849850177764893) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9303149878978729248) ) ) {
            result[0] += 0.75;
            result[1] += 0.25;
          } else {
            result[0] += 0.03389830508474576;
            result[1] += 0.9661016949152542;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.01714499853551387787) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.3732099980115890503) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.7395199984312057495) ) ) {
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
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3148300051689147949) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1250299997627735138) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.162684999406337738) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1634849980473518372) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.5649650022387504578) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9550499916076660156) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.02544500073418021202) ) ) {
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
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8536449968814849854) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.7869000136852264404) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7916449904441833496) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5434100180864334106) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2018849998712539673) ) ) {
            result[0] += 0.75;
            result[1] += 0.25;
          } else {
            result[0] += 0.046875;
            result[1] += 0.953125;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1193349994719028473) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2664300054311752319) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.1400950103998184204) ) ) {
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5176050066947937012) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7652349770069122314) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
            result[0] += 0.056179775280898875;
            result[1] += 0.9438202247191011;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9581199884414672852) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.287560001015663147) ) ) {
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
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.001044999997247941792) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.05427499860525131226) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.618390008807182312) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.9482350051403045654) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1944350004196166992) ) ) {
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2262849956750869751) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.576810002326965332) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1165399998426437378) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.14;
            result[1] += 0.86;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.5081850141286849976) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.3066050074994564056) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.17647058823529413;
            result[1] += 0.8235294117647058;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.2131849974393844604) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.4537249952554702759) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.01792499981820583344) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.1481099948287010193) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9090909090909091;
            result[1] += 0.09090909090909091;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.6750800013542175293) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9599649906158447266) ) ) {
            result[0] += 0.2;
            result[1] += 0.8;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.4262500032782554626) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.023622047244094488;
            result[1] += 0.9763779527559056;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7028900086879730225) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.2023450024425983429) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.01819000393152236938) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6285450160503387451) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.4863500148057937622) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7955000102519989014) ) ) {
            result[0] += 0.047058823529411764;
            result[1] += 0.9529411764705882;
          } else {
            result[0] += 0.42857142857142855;
            result[1] += 0.5714285714285714;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.03596000000834465027) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.3117949962615966797) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.4887900054454803467) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.148965001106262207) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.1943300026468932629) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2809000015258789062) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.1464550048112869263) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.8916699886322021484) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2560350000858306885) ) ) {
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
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.1719750016927719116) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.8166899979114532471) ) ) {
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02659500017762184143) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.3410899937152862549) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.7816649973392486572) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.6407900005578994751) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.06206896551724138;
            result[1] += 0.9379310344827586;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.353789985179901123) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5419000014662742615) ) ) {
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
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9927799999713897705) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.149645000696182251) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.5839999914169311523) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-0.3928550034761428833) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9105649888515472412) ) ) {
            result[0] += 0.046357615894039736;
            result[1] += 0.9536423841059603;
          } else {
            result[0] += 0.5;
            result[1] += 0.5;
          }
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9352599978446960449) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7300400137901306152) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.07997000165050849319) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.6818200051784515381) ) ) {
            result[0] += 0.0625;
            result[1] += 0.9375;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
            result[0] += 0.6;
            result[1] += 0.4;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.758170008659362793) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6824550032615661621) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.5281199812889099121) ) ) {
            result[0] += 0.09523809523809523;
            result[1] += 0.9047619047619048;
          } else {
            result[0] += 0.009009009009009009;
            result[1] += 0.990990990990991;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.353789985179901123) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.8741100132465362549) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.5868500024080276489) ) ) {
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1578199975192546844) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6255199909210205078) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2207050025463104248) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.06702000327641144395) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.4028300046920776367) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.06832298136645963;
            result[1] += 0.9316770186335404;
          }
        }
      }
    }
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.938935011625289917) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.3470599949359893799) ) ) {
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7446549832820892334) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.2975350022315979004) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.09663000330328941345) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.11538461538461539;
            result[1] += 0.8846153846153846;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9948549866676330566) ) ) {
            result[0] += 0.035398230088495575;
            result[1] += 0.9646017699115044;
          } else {
            result[0] += 0.2;
            result[1] += 0.8;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2955650091171264648) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.7955650091171264648) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.813050001859664917) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.8788850009441375732) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.02214000001549720764) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1773849986493587494) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.380079999566078186) ) ) {
            result[0] += 0.038461538461538464;
            result[1] += 0.9615384615384616;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7944949865341186523) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.5868500024080276489) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.030120481927710843;
            result[1] += 0.9698795180722891;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.2053949981927871704) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.5479550063610076904) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2567100003361701965) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.1020400002598762512) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.9655199944972991943) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.2373999999836087227) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1898349970579147339) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.2357800006866455078) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.09046000335365533829) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8980149924755096436) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.033112582781456956;
            result[1] += 0.9668874172185431;
          }
        }
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
    

    FILE* file = fopen("./codegen/dataset_52/split_1/test_data.csv", "r");
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
