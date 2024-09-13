
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
  if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1256750002503395081) ) ) {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1295600049197673798) ) ) {
      if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.01766500063240528107) ) ) {
        if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.01501999981701374054) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.1040200022980570793) ) ) {
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
      if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.0004450000124052166939) ) ) {
        if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.1805150043219327927) ) ) {
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.8770299851894378662) ) ) {
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
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9127549827098846436) ) ) {
        if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.277779996395111084) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.9882499873638153076) ) ) {
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
  if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.144859999418258667) ) ) {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1295600049197673798) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.07461000233888626099) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9891000092029571533) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8431349992752075195) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9088949859142303467) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.3371100127696990967) ) ) {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.01389000006020069122) ) ) {
            result[0] += 0.6470588235294118;
            result[1] += 0.35294117647058826;
          } else {
            result[0] += 0.1;
            result[1] += 0.9;
          }
        } else {
          if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2295399978756904602) ) ) {
            result[0] += 0.008771929824561403;
            result[1] += 0.9912280701754386;
          } else {
            result[0] += 0.15384615384615385;
            result[1] += 0.8461538461538461;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8371500074863433838) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9447599947452545166) ) ) {
            result[0] += 0.75;
            result[1] += 0.25;
          } else {
            result[0] += 0.046242774566473986;
            result[1] += 0.953757225433526;
          }
        }
      } else {
        if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.8656750023365020752) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9581199884414672852) ) ) {
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
  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2891950011253356934) ) ) {
      if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.01236999966204166412) ) ) {
        if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.8770299851894378662) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.7368099987506866455) ) ) {
            result[0] += 0.05555555555555555;
            result[1] += 0.9444444444444444;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.232890002429485321) ) ) {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1431300044059753418) ) ) {
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
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1480599939823150635) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9566900134086608887) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.1640449985861778259) ) ) {
            result[0] += 0.14705882352941177;
            result[1] += 0.8529411764705882;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.186569996178150177) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1227300018072128296) ) ) {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.2586900070309638977) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.6489800065755844116) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.4755800068378448486) ) ) {
        if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1402600035071372986) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2367650046944618225) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8376899957656860352) ) ) {
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
    if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.9754950106143951416) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.09732999652624130249) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7745099961757659912) ) ) {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.4002050012350082397) ) ) {
            result[0] += 0.625;
            result[1] += 0.375;
          } else {
            result[0] += 0.0196078431372549;
            result[1] += 0.9803921568627451;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.3496449906378984451) ) ) {
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
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1408099979162216187) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7472899854183197021) ) ) {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.220190003514289856) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9941000044345855713) ) ) {
            result[0] += 0.056818181818181816;
            result[1] += 0.9431818181818182;
          } else {
            result[0] += 0.4;
            result[1] += 0.6;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1304000020027160645) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.04580000042915344238) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.07761500030755996704) ) ) {
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
    if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.999664992094039917) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.171070002019405365) ) ) {
        if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.6648299992084503174) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.3324349988251924515) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6283050179481506348) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.9239149987697601318) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1071449965238571167) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.05673758865248227;
            result[1] += 0.9432624113475178;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.01940499991178512573) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.04420499876141548157) ) ) {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.2831749990582466125) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0.3333333333333333;
          }
        } else {
          if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.5963599979877471924) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.09602999687194824219) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.686900019645690918) ) ) {
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
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.7052400112152099609) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9469150006771087646) ) ) {
        if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.9606400132179260254) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.01334000006318092346) ) ) {
            result[0] += 0.3409090909090909;
            result[1] += 0.6590909090909091;
          } else {
            result[0] += 0.0364963503649635;
            result[1] += 0.9635036496350365;
          }
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.9756099879741668701) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.3125) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.4131499975919723511) ) ) {
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
  if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9361749887466430664) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2943250089883804321) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1133700013160705566) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.4697350114583969116) ) ) {
            result[0] += 0.061224489795918366;
            result[1] += 0.9387755102040817;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.8618150055408477783) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9952850043773651123) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.2857142857142857;
            result[1] += 0.7142857142857143;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7272749990224838257) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.6445949971675872803) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.6618950068950653076) ) ) {
            result[0] += 0.14285714285714285;
            result[1] += 0.8571428571428571;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.144859999418258667) ) ) {
      if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.003504999913275241852) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832050047814846039) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.6098250150680541992) ) ) {
            result[0] += 0.023255813953488372;
            result[1] += 0.9767441860465116;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.02796499989926815033) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.2315250039100646973) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9329150021076202393) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1779949963092803955) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7472899854183197021) ) ) {
            result[0] += 0.5;
            result[1] += 0.5;
          } else {
            result[0] += 0.008264462809917356;
            result[1] += 0.9917355371900827;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.04914500005543231964) ) ) {
      if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.5082300007343292236) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5382650010287761688) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.5081850141286849976) ) ) {
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
  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.1599950045347213745) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7216299772262573242) ) ) {
      if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.01728999987244606018) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.01205499982461333275) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3826349973678588867) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.969765007495880127) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7950299978256225586) ) ) {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7826600074768066406) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.06451612903225806;
            result[1] += 0.9354838709677419;
          }
        } else {
          if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.1875) ) ) {
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
  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.08616000041365623474) ) ) {
    if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.1319649927318096161) ) ) {
      if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.1339749991893768311) ) ) {
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
    if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9814800024032592773) ) ) {
        if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.2013400048017501831) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
          if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.500845000147819519) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.5;
            result[1] += 0.5;
          }
        } else {
          if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.9483700096607208252) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0.3333333333333333;
          } else {
            result[0] += 0.027586206896551724;
            result[1] += 0.9724137931034482;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.4298199862241744995) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.6194450110197067261) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.6363649964332580566) ) ) {
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
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1097000017762184143) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
      if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.1256199926137924194) ) ) {
        if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.3413049876689910889) ) ) {
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
      if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.9697250127792358398) ) ) {
        if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9948549866676330566) ) ) {
          if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
            result[0] += 0.01935483870967742;
            result[1] += 0.9806451612903225;
          } else {
            result[0] += 0.5;
            result[1] += 0.5;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6285450160503387451) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.058823529411764705;
            result[1] += 0.9411764705882353;
          }
        }
      } else {
        if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)0) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.08616000041365623474) ) ) {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.0395349990576505661) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.1482399990782141685) ) ) {
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
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.9682050049304962158) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.1456900015473365784) ) ) {
            result[0] += 0.5;
            result[1] += 0.5;
          } else {
            result[0] += 0.03496503496503497;
            result[1] += 0.965034965034965;
          }
        }
      } else {
        if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.8839950263500213623) ) ) {
          if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.572705000638961792) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.125) ) ) {
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
  if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2102850005030632019) ) ) {
    if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.4247750043869018555) ) ) {
      if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.2132249996066093445) ) ) {
        if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.002600000007078051567) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.02201499976217746735) ) ) {
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
        if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.6814399957656860352) ) ) {
          if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.1593800000846385956) ) ) {
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
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.08236499130725860596) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.9756500124931335449) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.2;
            result[1] += 0.8;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.6614950001239776611) ) ) {
            result[0] += 0.12;
            result[1] += 0.88;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9533349871635437012) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.04545500129461288452) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.8433550000190734863) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.3845349922776222229) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.08333333333333333;
            result[1] += 0.9166666666666666;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7134000062942504883) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.05151499994099140167) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.5880299806594848633) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.205454997718334198) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.969765007495880127) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.07017543859649122;
            result[1] += 0.9298245614035088;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1190350018441677094) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.01812000013887882233) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.09249500185251235962) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1484000161290168762) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9088949859142303467) ) ) {
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
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7745099961757659912) ) ) {
        if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.918825000524520874) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7250399887561798096) ) ) {
            result[0] += 0.375;
            result[1] += 0.625;
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
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3392850011587142944) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.008194999769330024719) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.2;
            result[1] += 0.8;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.046296296296296294;
            result[1] += 0.9537037037037037;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9361749887466430664) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.08440000005066394806) ) ) {
      if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.07859499752521514893) ) ) {
        if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.01625999948009848595) ) ) {
          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0002000000094994902611) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.2487100064754486084) ) ) {
            result[0] += 0.8571428571428571;
            result[1] += 0.14285714285714285;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.01093500014394521713) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.8069100081920623779) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.07142857142857142;
            result[1] += 0.9285714285714286;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
        if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.859375) ) ) {
          if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.333334997296333313) ) ) {
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
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.3949650079011917114) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6698200106620788574) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.07236842105263158;
            result[1] += 0.9276315789473685;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3493700027465820312) ) ) {
    if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.07581000030040740967) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1815550029277801514) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2816650047898292542) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.002695000031962990761) ) ) {
          if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.739584997296333313) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.4959250092506408691) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0.3333333333333333;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.555429995059967041) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5883850008249282837) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.6648549884557723999) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.8648650050163269043) ) ) {
            result[0] += 0.034482758620689655;
            result[1] += 0.9655172413793104;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.124704994261264801) ) ) {
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
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.8243899941444396973) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.3953550010919570923) ) ) {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9364649951457977295) ) ) {
          if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.4743749797344207764) ) ) {
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
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1142599992454051971) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.969765007495880127) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.03773584905660377;
            result[1] += 0.9622641509433962;
          }
        }
      }
    }
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.09069000184535980225) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.05278500169515609741) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6079050004482269287) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.8139800131320953369) ) ) {
        if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.9320099949836730957) ) ) {
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
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.9570200145244598389) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6283050179481506348) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.056962025316455694;
            result[1] += 0.9430379746835443;
          }
        } else {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2366299927234649658) ) ) {
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
  if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9469150006771087646) ) ) {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6285450160503387451) ) ) {
      if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.6907950043678283691) ) ) {
        if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.4396849870681762695) ) ) {
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
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.6968950033187866211) ) ) {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.4823500066995620728) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9891000092029571533) ) ) {
            result[0] += 0.05172413793103448;
            result[1] += 0.9482758620689655;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.7446800172328948975) ) ) {
      if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.9069150090217590332) ) ) {
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
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4330900013446807861) ) ) {
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9516099989414215088) ) ) {
        if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.152225002646446228) ) ) {
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
      if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7826600074768066406) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.4723749905824661255) ) ) {
            result[0] += 0.875;
            result[1] += 0.125;
          } else {
            result[0] += 0.07100591715976332;
            result[1] += 0.9289940828402367;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1930849999189376831) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.3953550010919570923) ) ) {
      if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.6916300058364868164) ) ) {
        if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.5471849888563156128) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.8228799998760223389) ) ) {
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
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.166665002703666687) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.02237000083550810814) ) ) {
            result[0] += 0.021052631578947368;
            result[1] += 0.9789473684210527;
          } else {
            result[0] += 0.14473684210526316;
            result[1] += 0.8552631578947368;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.08616000041365623474) ) ) {
    if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.8224800229072570801) ) ) {
      if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.7026149928569793701) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.2586900070309638977) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.1576250046491622925) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9984749853610992432) ) ) {
      if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.9984749853610992432) ) ) {
        if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.2147549986839294434) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3866399973630905151) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.04;
            result[1] += 0.96;
          }
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6549850106239318848) ) ) {
            result[0] += 0.5;
            result[1] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.673730015754699707) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0.3333333333333333;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.8939599990844726562) ) ) {
        if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.7826099991798400879) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.3872949928045272827) ) ) {
          if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.1305150017142295837) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
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
  if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7966699898242950439) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.205454997718334198) ) ) {
      if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.7261900007724761963) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.236364997923374176) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.06627999991178512573) ) ) {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.5015150159597396851) ) ) {
          if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.08204999938607215881) ) ) {
            result[0] += 0.9714285714285714;
            result[1] += 0.02857142857142857;
          } else {
            result[0] += 0.2857142857142857;
            result[1] += 0.7142857142857143;
          }
        } else {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.9549750089645385742) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.4368249997496604919) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.00684931506849315;
            result[1] += 0.9931506849315068;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.149645000696182251) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.1818900033831596375) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.06162999942898750305) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9614199995994567871) ) ) {
        if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.4252800028771162033) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.9359599947929382324) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8980149924755096436) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.036458333333333336;
            result[1] += 0.9635416666666666;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6283050179481506348) ) ) {
    if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.7476750016212463379) ) ) {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.5810000002384185791) ) ) {
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
    if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.06023499928414821625) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.326640002429485321) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.009045000042533501983) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.8679200112819671631) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0.6666666666666666;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1256750002503395081) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8762150108814239502) ) ) {
          if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.2588749974966049194) ) ) {
            result[0] += 0.3181818181818182;
            result[1] += 0.6818181818181818;
          } else {
            result[0] += 0.04201680672268908;
            result[1] += 0.957983193277311;
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2880550026893615723) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2074200063943862915) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.2505199909210205078) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.4558250010013580322) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.8333333333333334;
            result[1] += 0.16666666666666666;
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.3953550010919570923) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.1590399965643882751) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.4998099952936172485) ) ) {
            result[0] += 0.8571428571428571;
            result[1] += 0.14285714285714285;
          } else {
            result[0] += 0.060240963855421686;
            result[1] += 0.9397590361445783;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1897749975323677063) ) ) {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.08295000018551945686) ) ) {
        if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3168150037527084351) ) ) {
          if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.09704000316560268402) ) ) {
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
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.8389199972152709961) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.4056749939918518066) ) ) {
            result[0] += 0.3;
            result[1] += 0.7;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.1446500122547149658) ) ) {
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
  if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.08204999938607215881) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.231155000627040863) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.0701000019907951355) ) ) {
        if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8094049990177154541) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.7684749960899353027) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7036599963903427124) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2107650041580200195) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.2505199909210205078) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.999664992094039917) ) ) {
            result[0] += 0.018867924528301886;
            result[1] += 0.9811320754716981;
          } else {
            result[0] += 0.3333333333333333;
            result[1] += 0.6666666666666666;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9566900134086608887) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1783800050616264343) ) ) {
          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9533349871635437012) ) ) {
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
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.4998099952936172485) ) ) {
      if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.009785000234842300415) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1256750002503395081) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.3404199928045272827) ) ) {
          if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.2535250037908554077) ) ) {
            result[0] += 0.9375;
            result[1] += 0.0625;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.7270999997854232788) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.05555555555555555;
            result[1] += 0.9444444444444444;
          }
        }
      } else {
        if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.4683049917221069336) ) ) {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.3002950139343738556) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.2015950009226799011) ) ) {
            result[0] += 0.29411764705882354;
            result[1] += 0.7058823529411765;
          } else {
            result[0] += 0.08620689655172414;
            result[1] += 0.9137931034482759;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1984199956059455872) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1133700013160705566) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.2411750108003616333) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.8112449944019317627) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.1111111111111111;
            result[1] += 0.8888888888888888;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.09465999901294708252) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6586450189352035522) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9475899934768676758) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.3207800090312957764) ) ) {
            result[0] += 0.1111111111111111;
            result[1] += 0.8888888888888888;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.7581249773502349854) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.8599999845027923584) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.3505450040102005005) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.7919400036334991455) ) ) {
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
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2880550026893615723) ) ) {
    if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1664250046014785767) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.05952500179409980774) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.1190500035881996155) ) ) {
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
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4149949997663497925) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.8234950006008148193) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.5919400006532669067) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.0963855421686747;
            result[1] += 0.9036144578313253;
          }
        } else {
          if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.6186250001192092896) ) ) {
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
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1480049975216388702) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
        if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.999664992094039917) ) ) {
          if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9832650125026702881) ) ) {
            result[0] += 0.02666666666666667;
            result[1] += 0.9733333333333334;
          } else {
            result[0] += 0.6;
            result[1] += 0.4;
          }
        } else {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7506299912929534912) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.13636363636363635;
            result[1] += 0.8636363636363636;
          }
        }
      } else {
        if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.9534749984741210938) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.4618500024080276489) ) ) {
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
  if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.07860999926924705505) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.714935004711151123) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3900499939918518066) ) ) {
        if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.006755000111297704279) ) ) {
          if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.1995100043714046478) ) ) {
            result[0] += 0.7142857142857143;
            result[1] += 0.2857142857142857;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.06771000288426876068) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.09677000343799591064) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7745099961757659912) ) ) {
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
      if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.6912750005722045898) ) ) {
        if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.3253950029611587524) ) ) {
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
    if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2152049988508224487) ) ) {
      if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.2448800057172775269) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1462099999189376831) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9127549827098846436) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.8924849927425384521) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.8389199972152709961) ) ) {
            result[0] += 0.02459016393442623;
            result[1] += 0.9754098360655737;
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
  if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.02259499905630946159) ) ) {
    if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.4508100003004074097) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.6950049996376037598) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.06695500262139830738) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.3666799962520599365) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4454499930143356323) ) ) {
        if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.2551000118255615234) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.499365001916885376) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.08377500250935554504) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.6445199847221374512) ) ) {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.57355499267578125) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.05426356589147287;
            result[1] += 0.9457364341085271;
          }
        } else {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.9902099967002868652) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.8181818181818182;
            result[1] += 0.18181818181818182;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.1814199984073638916) ) ) {
      if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.04340999945998191833) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.1444600000977516174) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.3414200097322463989) ) ) {
        if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.3841250091791152954) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2679650038480758667) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.1640449985861778259) ) ) {
          if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3122599869966506958) ) ) {
            result[0] += 0.75;
            result[1] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.7919400036334991455) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.4831449836492538452) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.7909249961376190186) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.16666666666666666;
            result[1] += 0.8333333333333334;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.05486999824643135071) ) ) {
    if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.07598000019788742065) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.08015500009059906006) ) ) {
        if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.2584649920463562012) ) ) {
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
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.0761800035834312439) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.9895350039005279541) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.06115999817848205566) ) ) {
            result[0] += 0.13333333333333333;
            result[1] += 0.8666666666666667;
          } else {
            result[0] += 0.007042253521126761;
            result[1] += 0.9929577464788732;
          }
        } else {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.09905999898910522461) ) ) {
            result[0] += 0.8823529411764706;
            result[1] += 0.11764705882352941;
          } else {
            result[0] += 0.36363636363636365;
            result[1] += 0.6363636363636364;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4369300007820129395) ) ) {
    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.08080499991774559021) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.002695000031962990761) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4016550034284591675) ) ) {
          if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.2010100036859512329) ) ) {
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
    }
  } else {
    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9835450053215026855) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.9538150131702423096) ) ) {
            result[0] += 0.020134228187919462;
            result[1] += 0.9798657718120806;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0.3333333333333333;
          }
        } else {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.5256149917840957642) ) ) {
            result[0] += 0.1111111111111111;
            result[1] += 0.8888888888888888;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.139164995402097702) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9127549827098846436) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.5) ) ) {
          if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.5714050084352493286) ) ) {
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
        if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.9351400136947631836) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8980149924755096436) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.06417112299465241;
            result[1] += 0.9358288770053476;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1664250046014785767) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1606599986553192139) ) ) {
      if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.2456199899315834045) ) ) {
        if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.5150199998170137405) ) ) {
          if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.08663999848067760468) ) ) {
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
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.1473699957132339478) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.04615999944508075714) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.6792899966239929199) ) ) {
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
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.8211749792098999023) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.732675015926361084) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.4702650010585784912) ) ) {
            result[0] += 0.24242424242424243;
            result[1] += 0.7575757575757576;
          } else {
            result[0] += 0.039603960396039604;
            result[1] += 0.9603960396039604;
          }
        }
      } else {
        if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.6941300034523010254) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
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
  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.09160500019788742065) ) ) {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.5916650146245956421) ) ) {
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
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1684800013899803162) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.6929450035095214844) ) ) {
            result[0] += 0.15384615384615385;
            result[1] += 0.8461538461538461;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.969765007495880127) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1256750002503395081) ) ) {
      if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.4853899925947189331) ) ) {
        if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.002039999933913350105) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3031300008296966553) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.2222222222222222;
            result[1] += 0.7777777777777778;
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.1485900022089481354) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.4891800135374069214) ) ) {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.7052400112152099609) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.2930749952793121338) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.06338028169014084;
            result[1] += 0.9366197183098591;
          }
        } else {
          if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.857219994068145752) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.8571428571428571;
            result[1] += 0.14285714285714285;
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.4853049926459789276) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1634849980473518372) ) ) {
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
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.05151499994099140167) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4783350080251693726) ) ) {
      if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.96096000075340271) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.8389199972152709961) ) ) {
        if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.9684099853038787842) ) ) {
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.8770299851894378662) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.05325443786982249;
            result[1] += 0.9467455621301775;
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.02709499932825565338) ) ) {
          if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.6933500021696090698) ) ) {
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
  if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.189065001904964447) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.3295300006866455078) ) ) {
      if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.2316149920225143433) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2040800005197525024) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1003550011664628983) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.0515450015664100647) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.5609849989414215088) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.2174699977040290833) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.9612700045108795166) ) ) {
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
    if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.9454649984836578369) ) ) {
      if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.7143349945545196533) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8646399974822998047) ) ) {
        if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.9849300086498260498) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
            result[0] += 0.02962962962962963;
            result[1] += 0.9703703703703703;
          } else {
            result[0] += 0.4166666666666667;
            result[1] += 0.5833333333333334;
          }
        }
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9643700122833251953) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.1598850004374980927) ) ) {
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
  if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.0914500020444393158) ) ) {
      if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.2341749966144561768) ) ) {
        if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.8235300183296203613) ) ) {
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
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.9118300080299377441) ) ) {
        if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.6681800037622451782) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.5281199812889099121) ) ) {
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5545850098133087158) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.136986301369863;
            result[1] += 0.863013698630137;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.8268249928951263428) ) ) {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9385949969291687012) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.5714299976825714111) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.6966850012540817261) ) ) {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.4962150007486343384) ) ) {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.7352949976921081543) ) ) {
            result[0] += 0.08333333333333333;
            result[1] += 0.9166666666666666;
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
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9941000044345855713) ) ) {
      if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.4720299988985061646) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7989200055599212646) ) ) {
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.6559349894523620605) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0.3333333333333333;
          }
        } else {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.8605450093746185303) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.006864999886602163315) ) ) {
        if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.1945349983870983124) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1624599993228912354) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.6;
            result[1] += 0.4;
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7058800011873245239) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.001139999949373304844) ) ) {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2385100051760673523) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.3683699965476989746) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.111660003662109375) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.0851063829787234;
            result[1] += 0.9148936170212766;
          }
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.06263499706983566284) ) ) {
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
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7555849850177764893) ) ) {
      if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8619300127029418945) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9395299851894378662) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0.3333333333333333;
          } else {
            result[0] += 0.02727272727272727;
            result[1] += 0.9727272727272728;
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
  if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2399550005793571472) ) ) {
    if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.01057999953627586365) ) ) {
      if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.2063499987125396729) ) ) {
        if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.3088649958372116089) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.01111999992281198502) ) ) {
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
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.4069299995899200439) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.2516949921846389771) ) ) {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.4117650091648101807) ) ) {
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
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7950850129127502441) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.8976149857044219971) ) ) {
        if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.4702000021934509277) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3637199997901916504) ) ) {
            result[0] += 0.7142857142857143;
            result[1] += 0.2857142857142857;
          } else {
            result[0] += 0.031746031746031744;
            result[1] += 0.9682539682539683;
          }
        }
      } else {
        result[0] += 1;
        result[1] += 0;
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
    

    FILE* file = fopen("./codegen_small/dataset_52/split_4/test_data.csv", "r");
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
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        
    }
    

    return 0;
}
