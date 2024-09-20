
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
  return 87;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f420e3a))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
          if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
            result[0] += (float)0.9076710435383553;
            result[1] += (float)0.09232895646164478;
          } else {
            result[0] += (float)0.13817723645527089;
            result[1] += (float)0.8618227635447291;
          }
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e82ed20))) ) ) {
            result[0] += (float)0.9005328596802842;
            result[1] += (float)0.0994671403197158;
          } else {
            result[0] += (float)0.997933058765675;
            result[1] += (float)0.002066941234325055;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3f180c))) ) ) {
      if ( LIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
        if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e79a066))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e073712))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      }
    } else {
      if ( LIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f455a69))) ) ) {
        if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.7953346618215918;
            result[1] += (float)0.20466533817840815;
          }
        } else {
          if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd59576))) ) ) {
            result[0] += (float)0.9974900264261445;
            result[1] += (float)0.0025099735738554623;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      } else {
        if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e97c804))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0ee618))) ) ) {
            result[0] += (float)0.9551435406698564;
            result[1] += (float)0.04485645933014354;
          } else {
            result[0] += (float)0.9988302984319676;
            result[1] += (float)0.0011697015680323722;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d258d46))) ) ) {
      result[0] += (float)1;
      result[1] += (float)0;
    } else {
      if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
        if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
          if ( LIKELY( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f38f638))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.010471204188481676;
            result[1] += (float)0.9895287958115183;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      } else {
        if ( UNLIKELY( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f3a4aef))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9745075712513384;
            result[1] += (float)0.025492428748661648;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
    if ( LIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9e003a))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1d92e6))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
      if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aee9437))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
          if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0dcf64))) ) ) {
            result[0] += (float)0.8530276308054086;
            result[1] += (float)0.14697236919459142;
          } else {
            result[0] += (float)0.07283511269276394;
            result[1] += (float)0.927164887307236;
          }
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
            result[0] += (float)0.6799211685601669;
            result[1] += (float)0.32007883143983307;
          } else {
            result[0] += (float)0.9992183072443376;
            result[1] += (float)0.0007816927556623869;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
        if ( LIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4c3fb8))) ) ) {
          if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
            result[0] += (float)0.9516806722689075;
            result[1] += (float)0.04831932773109244;
          } else {
            result[0] += (float)0.03493842534938425;
            result[1] += (float)0.9650615746506157;
          }
        } else {
          if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d728d94))) ) ) {
            result[0] += (float)0.0016843878302979262;
            result[1] += (float)0.9983156121697021;
          } else {
            result[0] += (float)0.7403100775193798;
            result[1] += (float)0.2596899224806202;
          }
        }
      } else {
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb2ce54))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f53226a))) ) ) {
            result[0] += (float)0.9999183440166578;
            result[1] += (float)8.16559833421794e-05;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
    if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f431db8))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( LIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3c3c87))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
      if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
        if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0dcf64))) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7fac27))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        } else {
          if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46e1c3))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.959018695338201;
            result[1] += (float)0.040981304661798924;
          }
        }
      } else {
        if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec38888))) ) ) {
          if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
            result[0] += (float)0.8170441001191895;
            result[1] += (float)0.18295589988081049;
          } else {
            result[0] += (float)0.07403939779791775;
            result[1] += (float)0.9259606022020822;
          }
        } else {
          if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
          } else {
            result[0] += (float)0.003742084052964882;
            result[1] += (float)0.9962579159470352;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e939ec0))) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9eccae))) ) ) {
            result[0] += (float)0.993689524610854;
            result[1] += (float)0.006310475389145982;
          } else {
            result[0] += (float)0.9997132616487455;
            result[1] += (float)0.0002867383512544803;
          }
        } else {
          if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4df154))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9999292015349107;
            result[1] += (float)7.079846508927686e-05;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( LIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec44c73))) ) ) {
      if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
          if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            result[0] += (float)0.00018484288354898336;
            result[1] += (float)0.999815157116451;
          } else {
            result[0] += (float)0.7974669356646492;
            result[1] += (float)0.20253306433535082;
          }
        } else {
          if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3c3c87))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9981329690346084;
            result[1] += (float)0.0018670309653916212;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec38888))) ) ) {
        if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed1c0bb))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e897dfc))) ) ) {
            result[0] += (float)0.03608247422680412;
            result[1] += (float)0.9639175257731959;
          } else {
            result[0] += (float)0.8823529411764706;
            result[1] += (float)0.11764705882352941;
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea2649f))) ) ) {
          if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
          } else {
            result[0] += (float)0.009057971014492754;
            result[1] += (float)0.9909420289855072;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
    if ( LIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f386016))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e9b41d5))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8f48dc))) ) ) {
      if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
        if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
          if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3c5f4a))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.8889846743295019;
            result[1] += (float)0.11101532567049809;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      } else {
        if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
          if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
            result[0] += (float)0.9598880597014925;
            result[1] += (float)0.04011194029850746;
          } else {
            result[0] += (float)0.14862914862914864;
            result[1] += (float)0.8513708513708513;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    } else {
      if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
        if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e79a066))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9996264253147791;
            result[1] += (float)0.000373574685220876;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( LIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f494192))) ) ) {
        if ( UNLIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f485169))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee32e94))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ebe8a28))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
      if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e9199ed))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea91902))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      }
    } else {
      if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3c3c87))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3aea446e))) ) ) {
          if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
            result[0] += (float)0.5949079909251324;
            result[1] += (float)0.40509200907486764;
          } else {
            result[0] += (float)0.9979348577959118;
            result[1] += (float)0.0020651422040881794;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e88b800))) ) ) {
            result[0] += (float)0.21818181818181817;
            result[1] += (float)0.7818181818181819;
          } else {
            result[0] += (float)0.9989433271107041;
            result[1] += (float)0.0010566728892959037;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
        if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9292337725719864;
            result[1] += (float)0.07076622742801367;
          }
        } else {
          if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
            result[0] += (float)0.7935377875136911;
            result[1] += (float)0.20646221248630886;
          } else {
            result[0] += (float)0.34202898550724636;
            result[1] += (float)0.6579710144927536;
          }
        }
      } else {
        if ( LIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eb12ab8))) ) ) {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += (float)0.9667590027700831;
            result[1] += (float)0.0332409972299169;
          } else {
            result[0] += (float)0.9992137141359455;
            result[1] += (float)0.0007862858640544503;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae61f2c))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
          if ( UNLIKELY( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e380c))) ) ) {
            result[0] += (float)0.7017482517482517;
            result[1] += (float)0.29825174825174827;
          } else {
            result[0] += (float)0.3564154786150713;
            result[1] += (float)0.6435845213849287;
          }
        } else {
          if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
            result[0] += (float)0.9935725125722844;
            result[1] += (float)0.0064274874277155634;
          } else {
            result[0] += (float)0.8989046507451967;
            result[1] += (float)0.10109534925480337;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e9a1985))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e99b6c0))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f425b6a))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
          if ( UNLIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f3445b2))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9988943918591139;
            result[1] += (float)0.001105608140886066;
          }
        } else {
          if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f402eb2))) ) ) {
            result[0] += (float)0.7916834339369551;
            result[1] += (float)0.20831656606304494;
          } else {
            result[0] += (float)0.9914270100416696;
            result[1] += (float)0.008572989958330487;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ebc7f0c))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      result[0] += (float)1;
      result[1] += (float)0;
    }
  } else {
    if ( UNLIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae89bf6))) ) ) {
      if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
      } else {
        if ( LIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aee9437))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e068e63))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
            result[0] += (float)0.7444794952681388;
            result[1] += (float)0.2555205047318612;
          } else {
            result[0] += (float)0.9704230625233995;
            result[1] += (float)0.029576937476600524;
          }
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
            result[0] += (float)0.7037953795379538;
            result[1] += (float)0.2962046204620462;
          } else {
            result[0] += (float)0.2114528101802757;
            result[1] += (float)0.7885471898197243;
          }
        }
      } else {
        if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e878fb0))) ) ) {
          if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
            result[0] += (float)0.7612456747404844;
            result[1] += (float)0.23875432525951557;
          } else {
            result[0] += (float)0.1037344398340249;
            result[1] += (float)0.8962655601659751;
          }
        } else {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
            result[0] += (float)0.48752012882447665;
            result[1] += (float)0.5124798711755234;
          } else {
            result[0] += (float)0.9990433950778329;
            result[1] += (float)0.000956604922167145;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f324a3c))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
          if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec38888))) ) ) {
            result[0] += (float)0.6227433628318584;
            result[1] += (float)0.3772566371681416;
          } else {
            result[0] += (float)0.25732217573221755;
            result[1] += (float)0.7426778242677824;
          }
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8603ba))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9971652657658342;
            result[1] += (float)0.0028347342341657673;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
      if ( LIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3f180c))) ) ) {
        if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e576228))) ) ) {
          if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec97624))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      } else {
        if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0dcf64))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e79a066))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f455a69))) ) ) {
        if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
          if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea5c7fe))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
            result[0] += (float)0.9827465772562168;
            result[1] += (float)0.01725342274378318;
          } else {
            result[0] += (float)0.6374681083707934;
            result[1] += (float)0.3625318916292067;
          }
        }
      } else {
        if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1d92e6))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f422cae))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9958367299406079;
            result[1] += (float)0.004163270059392104;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee66ce4))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      result[0] += (float)1;
      result[1] += (float)0;
    }
  } else {
    if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3f180c))) ) ) {
      if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
      } else {
        if ( LIKELY( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7b0b0a))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.7747669629308476;
            result[1] += (float)0.2252330370691524;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.997900897385876;
            result[1] += (float)0.0020991026141240735;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec2bc12))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f47d2be))) ) ) {
            result[0] += (float)0.9864986498649865;
            result[1] += (float)0.013501350135013501;
          } else {
            result[0] += (float)0.10332215787869552;
            result[1] += (float)0.8966778421213045;
          }
        } else {
          if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
            result[0] += (float)0.9986836436743095;
            result[1] += (float)0.0013163563256904888;
          } else {
            result[0] += (float)0.9590705651064542;
            result[1] += (float)0.04092943489354582;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eb05e44))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    }
  }
  if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e99b6c0))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      result[0] += (float)1;
      result[1] += (float)0;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea59655))) ) ) {
        if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
          if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
            result[0] += (float)0.6833967649857279;
            result[1] += (float)0.3166032350142721;
          } else {
            result[0] += (float)0.4064769975786925;
            result[1] += (float)0.5935230024213075;
          }
        } else {
          if ( UNLIKELY( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f2f8954))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9969880920960705;
            result[1] += (float)0.003011907903929453;
          }
        }
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    }
  }
  if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aeee91c))) ) ) {
    if ( LIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f373418))) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f44ffbe))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3f180c))) ) ) {
        if ( UNLIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed23173))) ) ) {
          if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0e7812))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.52;
            result[1] += (float)0.48;
          }
        } else {
          if ( LIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f44896c))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.045454545454545456;
            result[1] += (float)0.9545454545454546;
          }
        }
      } else {
        if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb6df49))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f30763a))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
      if ( LIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f44cf16))) ) ) {
        if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9c289a))) ) ) {
          if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
            result[0] += (float)0.9777703156480859;
            result[1] += (float)0.022229684351914036;
          } else {
            result[0] += (float)0.4332826619373364;
            result[1] += (float)0.5667173380626637;
          }
        } else {
          if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += (float)0.05816310619055044;
            result[1] += (float)0.9418368938094496;
          } else {
            result[0] += (float)0.974796960964108;
            result[1] += (float)0.02520303903589206;
          }
        }
      } else {
        if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
          if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f504bde))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.8631688431757771;
            result[1] += (float)0.1368311568242228;
          }
        } else {
          if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
            result[0] += (float)0.22888459058671826;
            result[1] += (float)0.7711154094132817;
          } else {
            result[0] += (float)0.05685671894870708;
            result[1] += (float)0.943143281051293;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38853cc0))) ) ) {
        if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e22fb72))) ) ) {
            result[0] += (float)0.9999028111864324;
            result[1] += (float)9.718881356755838e-05;
          } else {
            result[0] += (float)0.9680759275237274;
            result[1] += (float)0.03192407247627265;
          }
        }
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    }
  }
  if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
      if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f39c178))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9945796321479895;
            result[1] += (float)0.005420367852010455;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
        if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
          if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
            result[0] += (float)0.9857775705292608;
            result[1] += (float)0.0142224294707391;
          } else {
            result[0] += (float)0.41936651583710405;
            result[1] += (float)0.580633484162896;
          }
        } else {
          if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
            result[0] += (float)0.0022711563148020146;
            result[1] += (float)0.997728843685198;
          } else {
            result[0] += (float)0.0681602172437203;
            result[1] += (float)0.9318397827562797;
          }
        }
      } else {
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3ea757a2))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x36552000))) ) ) {
            result[0] += (float)0.9997141836370133;
            result[1] += (float)0.000285816362986781;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
      if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
        if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
            result[0] += (float)0.17391304347826086;
            result[1] += (float)0.8260869565217391;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      } else {
        if ( UNLIKELY( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f3a4aef))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9745833491515129;
            result[1] += (float)0.02541665084848715;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.8429752066115702;
            result[1] += (float)0.15702479338842976;
          }
        } else {
          if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f2c967c))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9995169304379831;
            result[1] += (float)0.0004830695620169304;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e9388a8))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      result[0] += (float)1;
      result[1] += (float)0;
    }
  } else {
    if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
      if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f41f48b))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9951252878103294;
            result[1] += (float)0.00487471218967062;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
        if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
            result[0] += (float)0.9828437743696387;
            result[1] += (float)0.01715622563036132;
          } else {
            result[0] += (float)0.6604890604890605;
            result[1] += (float)0.3395109395109395;
          }
        }
      } else {
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7288c2))) ) ) {
            result[0] += (float)0.9998413642673012;
            result[1] += (float)0.0001586357326987904;
          } else {
            result[0] += (float)0.9879032258064516;
            result[1] += (float)0.012096774193548387;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
      if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1ccd5a))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3cd958e9))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    }
  } else {
    if ( LIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e50e189))) ) ) {
      if ( UNLIKELY( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f3643ef))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
          if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
            result[0] += (float)0.8798973880597015;
            result[1] += (float)0.1201026119402985;
          } else {
            result[0] += (float)0.45512386625152296;
            result[1] += (float)0.5448761337484771;
          }
        } else {
          if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9979263786463775;
            result[1] += (float)0.0020736213536226007;
          }
        }
      }
    } else {
      result[0] += (float)0;
      result[1] += (float)1;
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
    if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec38888))) ) ) {
      if ( UNLIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae89bf6))) ) ) {
        if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f475a41))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
          if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e88553b))) ) ) {
            result[0] += (float)0.8088563758939366;
            result[1] += (float)0.1911436241060634;
          } else {
            result[0] += (float)0.6465538847117794;
            result[1] += (float)0.35344611528822056;
          }
        } else {
          if ( LIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f49f59f))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.006264094211976948;
            result[1] += (float)0.9937359057880231;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46e1c3))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f37ac08))) ) ) {
          if ( LIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea92e63))) ) ) {
            result[0] += (float)0.9275123558484349;
            result[1] += (float)0.07248764415156507;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
            result[0] += (float)0.5602462620932278;
            result[1] += (float)0.4397537379067722;
          } else {
            result[0] += (float)0.033825503355704695;
            result[1] += (float)0.9661744966442953;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
      if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
          if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0d26b5))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e9225b4))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ea3464e))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38850440))) ) ) {
          if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d258d46))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
          } else {
            result[0] += (float)0.9976945244956772;
            result[1] += (float)0.0023054755043227667;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
      if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edc51c2))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eb190d6))) ) ) {
        if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
          if ( UNLIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f490576))) ) ) {
            result[0] += (float)0.41597887091449326;
            result[1] += (float)0.5840211290855067;
          } else {
            result[0] += (float)0.6744515215852795;
            result[1] += (float)0.32554847841472045;
          }
        } else {
          if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e657868))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9972732382384664;
            result[1] += (float)0.0027267617615336706;
          }
        }
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    }
  }
  if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e9a1985))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      result[0] += (float)1;
      result[1] += (float)0;
    }
  } else {
    if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb28b60))) ) ) {
        if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee25e))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f427ee4))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3eca2e64))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      }
    } else {
      if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd59576))) ) ) {
        if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e10712c))) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9564187265064358;
            result[1] += (float)0.043581273493564186;
          }
        } else {
          if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.996914898159614;
            result[1] += (float)0.0030851018403860115;
          }
        }
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    }
  }
  if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( LIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eba4384))) ) ) {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.7989130434782609;
            result[1] += (float)0.20108695652173914;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9962940797348311;
            result[1] += (float)0.0037059202651689533;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f364ba6))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f4eea32))) ) ) {
            result[0] += (float)0.9102040816326531;
            result[1] += (float)0.08979591836734693;
          } else {
            result[0] += (float)0.9758308157099698;
            result[1] += (float)0.02416918429003021;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f3e7bbc))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
        if ( UNLIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f36bc04))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f45be70))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9850616906291424;
            result[1] += (float)0.014938309370857552;
          }
        }
      } else {
        if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
          if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
            result[0] += (float)0.989935956084172;
            result[1] += (float)0.010064043915827997;
          } else {
            result[0] += (float)0.0006625056661668817;
            result[1] += (float)0.9993374943338331;
          }
        } else {
          if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea2dade))) ) ) {
            result[0] += (float)0.8426855356261314;
            result[1] += (float)0.15731446437386867;
          } else {
            result[0] += (float)0.9987718250016597;
            result[1] += (float)0.0012281749983403042;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
        if ( LIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f49f59f))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d739f9b))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      } else {
        if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1ccd5a))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eb12ab8))) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
        if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
            result[0] += (float)0.9364328327504629;
            result[1] += (float)0.06356716724953713;
          } else {
            result[0] += (float)0.4027954256670902;
            result[1] += (float)0.5972045743329097;
          }
        } else {
          if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
            result[0] += (float)0.4126537785588752;
            result[1] += (float)0.5873462214411248;
          } else {
            result[0] += (float)0.22734254992319508;
            result[1] += (float)0.7726574500768049;
          }
        }
      } else {
        if ( UNLIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae89bf6))) ) ) {
          if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e878fb0))) ) ) {
            result[0] += (float)0.007594936708860759;
            result[1] += (float)0.9924050632911392;
          } else {
            result[0] += (float)0.8333333333333334;
            result[1] += (float)0.16666666666666666;
          }
        } else {
          if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd59576))) ) ) {
            result[0] += (float)0.9981152354398044;
            result[1] += (float)0.0018847645601956418;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      }
    } else {
      result[0] += (float)0;
      result[1] += (float)1;
    }
  }
  if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( UNLIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e64f32e))) ) ) {
      if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3ce09f37))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e5c2ce6))) ) ) {
            result[0] += (float)0.6368852459016393;
            result[1] += (float)0.36311475409836064;
          } else {
            result[0] += (float)0.7938965059708094;
            result[1] += (float)0.20610349402919062;
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f484b44))) ) ) {
          if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee66ce4))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee66ce4))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
      if ( LIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aee9437))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e932573))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
          } else {
            result[0] += (float)0.6;
            result[1] += (float)0.4;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f40745c))) ) ) {
        if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec689ae))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
            result[0] += (float)0.6134251290877797;
            result[1] += (float)0.3865748709122203;
          } else {
            result[0] += (float)0.997583962301825;
            result[1] += (float)0.002416037698174993;
          }
        }
      } else {
        if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d4b554a))) ) ) {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e91fcb2))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9996076752978101;
            result[1] += (float)0.00039232470218988517;
          }
        } else {
          if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
            result[0] += (float)0.8529411764705882;
            result[1] += (float)0.14705882352941177;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
      if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
        if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aec176e))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9786336005816184;
            result[1] += (float)0.021366399418381567;
          }
        }
      } else {
        if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
          if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3adf7d22))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9301052631578948;
            result[1] += (float)0.06989473684210526;
          }
        } else {
          if ( LIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ebfaabe))) ) ) {
            result[0] += (float)0.052251191177257884;
            result[1] += (float)0.9477488088227422;
          } else {
            result[0] += (float)0.01732283464566929;
            result[1] += (float)0.9826771653543307;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38850440))) ) ) {
          if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9995394782288333;
            result[1] += (float)0.0004605217711667319;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
      if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee66ce4))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed85e6e))) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7b0a06))) ) ) {
          if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
            result[0] += (float)0.9303864080589385;
            result[1] += (float)0.0696135919410615;
          } else {
            result[0] += (float)0.275;
            result[1] += (float)0.725;
          }
        } else {
          if ( UNLIKELY( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f3b0332))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9970247624104891;
            result[1] += (float)0.002975237589510921;
          }
        }
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec38888))) ) ) {
          if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec5d64a))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9986691538218193;
            result[1] += (float)0.0013308461781806678;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    } else {
      if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
        if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
            result[0] += (float)0.9548879942190565;
            result[1] += (float)0.045112005780943536;
          } else {
            result[0] += (float)0.6844139869970128;
            result[1] += (float)0.31558601300298716;
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
          if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eaaabaa))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3ea3a524))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9996445918730008;
            result[1] += (float)0.0003554081269991707;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
    if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3ed262))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.8001900688999762;
            result[1] += (float)0.19980993110002376;
          }
        } else {
          if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd59576))) ) ) {
            result[0] += (float)0.988929889298893;
            result[1] += (float)0.01107011070110701;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f36bc04))) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f44c378))) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e9199ed))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec689ae))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ad4b5ab))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.999816898023643;
            result[1] += (float)0.0001831019763569573;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
    if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1d92e6))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e20a9f1))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    }
  } else {
    if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
      if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f47d2be))) ) ) {
        if ( LIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3f180c))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f373418))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.8597662771285476;
            result[1] += (float)0.14023372287145242;
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45b47a))) ) ) {
          if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea0818c))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea59655))) ) ) {
        if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3d75f0))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
            result[0] += (float)0.9990746069901028;
            result[1] += (float)0.0009253930098971911;
          } else {
            result[0] += (float)0.9062976473085905;
            result[1] += (float)0.09370235269140949;
          }
        }
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
    if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aee9437))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4f5adb))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
            result[0] += (float)0.9889734947780136;
            result[1] += (float)0.011026505221986435;
          } else {
            result[0] += (float)0.698032853376597;
            result[1] += (float)0.30196714662340296;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
      if ( LIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4f5644))) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f46e1c3))) ) ) {
          if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
          } else {
            result[0] += (float)0.9968938424995432;
            result[1] += (float)0.003106157500456788;
          }
        } else {
          if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d33cc3e))) ) ) {
            result[0] += (float)0.9899979162325484;
            result[1] += (float)0.010002083767451552;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      } else {
        if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1a7cba))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9772727272727273;
            result[1] += (float)0.022727272727272728;
          }
        }
      }
    } else {
      result[0] += (float)0;
      result[1] += (float)1;
    }
  }
  if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
      result[0] += (float)1;
      result[1] += (float)0;
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3eb28b60))) ) ) {
        if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0dcf64))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3eca2e64))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
      if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
        if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
          if ( UNLIKELY( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee76429))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9974346915216554;
            result[1] += (float)0.0025653084783445208;
          }
        } else {
          if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.8776013143483024;
            result[1] += (float)0.1223986856516977;
          }
        }
      } else {
        if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e90d462))) ) ) {
          if ( UNLIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f44896c))) ) ) {
            result[0] += (float)0.5497076023391813;
            result[1] += (float)0.4502923976608187;
          } else {
            result[0] += (float)0.033401164830538205;
            result[1] += (float)0.9665988351694618;
          }
        } else {
          if ( UNLIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f481571))) ) ) {
            result[0] += (float)0.11514522821576763;
            result[1] += (float)0.8848547717842323;
          } else {
            result[0] += (float)0.6025732411433459;
            result[1] += (float)0.39742675885665407;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e8c31d2))) ) ) {
        if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3f180c))) ) ) {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb73dc0))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9973190348525469;
            result[1] += (float)0.002680965147453083;
          }
        } else {
          if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d33cc3e))) ) ) {
            result[0] += (float)0.9989759927181704;
            result[1] += (float)0.0010240072818295596;
          } else {
            result[0] += (float)0.2138364779874214;
            result[1] += (float)0.7861635220125787;
          }
        }
      } else {
        if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7288c2))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
        } else {
          if ( LIKELY( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38853cc0))) ) ) {
            result[0] += (float)0.9982436331702421;
            result[1] += (float)0.0017563668297578723;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f47d2be))) ) ) {
      if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edc51c2))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51791f))) ) ) {
        if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3eda3044))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1e5870))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f43d27c))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec454fc))) ) ) {
      if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0d800c))) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
            result[0] += (float)0.632635698485622;
            result[1] += (float)0.3673643015143781;
          } else {
            result[0] += (float)0.9944275385441556;
            result[1] += (float)0.005572461455844469;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    } else {
      result[0] += (float)0;
      result[1] += (float)1;
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
    if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3d75f0))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f61df9d))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9724336595509262;
            result[1] += (float)0.027566340449073808;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
      if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed42267))) ) ) {
        if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42e172))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f2f7201))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e932573))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d52000))) ) ) {
          if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f45783c))) ) ) {
            result[0] += (float)0.9999760851369126;
            result[1] += (float)2.3914863087408826e-05;
          } else {
            result[0] += (float)0.9989462592202318;
            result[1] += (float)0.001053740779768177;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8f48dc))) ) ) {
      if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
        if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e95378d))) ) ) {
          if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
            result[0] += (float)0.9966648735879505;
            result[1] += (float)0.003335126412049489;
          } else {
            result[0] += (float)0.7046783625730995;
            result[1] += (float)0.2953216374269006;
          }
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
            result[0] += (float)0.70261066969353;
            result[1] += (float)0.2973893303064699;
          } else {
            result[0] += (float)0.9983456158820875;
            result[1] += (float)0.001654384117912468;
          }
        }
      } else {
        if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
          if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.7856328392246295;
            result[1] += (float)0.21436716077537057;
          }
        } else {
          if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
            result[0] += (float)0.9504950495049505;
            result[1] += (float)0.04950495049504951;
          } else {
            result[0] += (float)0.008211232061471242;
            result[1] += (float)0.9917887679385288;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e98cf7d))) ) ) {
          if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f48c3c8))) ) ) {
            result[0] += (float)0.9990314044635279;
            result[1] += (float)0.0009685955364721155;
          } else {
            result[0] += (float)0.9096947651431283;
            result[1] += (float)0.09030523485687174;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f36800b))) ) ) {
    if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4fd360))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( LIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec07061))) ) ) {
        if ( LIKELY( !(data[68].missing != -1) || ((*( ((int*)(data)) + 68 ))<=((int)(0x3f51df8c))) ) ) {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec690e2))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e61173a))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
      if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
        if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3ed262))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9681706819109841;
            result[1] += (float)0.03182931808901592;
          }
        }
      } else {
        if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.8226973684210527;
            result[1] += (float)0.17730263157894738;
          }
        } else {
          if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb9172e))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.6949152542372882;
            result[1] += (float)0.3050847457627119;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f2d1b72))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e4c4f))) ) ) {
            result[0] += (float)0.9982569721115537;
            result[1] += (float)0.0017430278884462151;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e979cce))) ) ) {
      if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
        if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e657868))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
            result[0] += (float)0.7718082033506644;
            result[1] += (float)0.22819179664933564;
          } else {
            result[0] += (float)0.9986229356599354;
            result[1] += (float)0.0013770643400645311;
          }
        }
      } else {
        if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e19b730))) ) ) {
          if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.7853720050441362;
            result[1] += (float)0.21462799495586382;
          }
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
            result[0] += (float)0.00501432664756447;
            result[1] += (float)0.9949856733524355;
          } else {
            result[0] += (float)0.9788732394366197;
            result[1] += (float)0.02112676056338028;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d33cc3e))) ) ) {
        if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3af03caf))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
        } else {
          if ( LIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e039ba6))) ) ) {
            result[0] += (float)0.970886932972241;
            result[1] += (float)0.02911306702775897;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      } else {
        if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
          if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3ae8c653))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.883373934226553;
            result[1] += (float)0.11662606577344702;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1e5870))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb210a8))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f48c3c8))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c9507))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e98cf7d))) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e9199ed))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
          if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f47d2be))) ) ) {
            result[0] += (float)0.9987035436473639;
            result[1] += (float)0.0012964563526361278;
          } else {
            result[0] += (float)0.22090457804743518;
            result[1] += (float)0.7790954219525648;
          }
        } else {
          if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e9f1ca7))) ) ) {
            result[0] += (float)0.9646759328080868;
            result[1] += (float)0.03532406719191319;
          } else {
            result[0] += (float)0.9993892508143323;
            result[1] += (float)0.0006107491856677524;
          }
        }
      }
    } else {
      result[0] += (float)0;
      result[1] += (float)1;
    }
  }
  if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f425b6a))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
          if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
            result[0] += (float)0.9334623399821376;
            result[1] += (float)0.06653766001786246;
          } else {
            result[0] += (float)0.22478829869130101;
            result[1] += (float)0.775211701308699;
          }
        } else {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9982052686013263;
            result[1] += (float)0.001794731398673724;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0c7d46))) ) ) {
      if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea79579))) ) ) {
            result[0] += (float)0.9580222037849156;
            result[1] += (float)0.04197779621508435;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      } else {
        if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e08886f))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e03417a))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9999378217723282;
            result[1] += (float)6.217822767179845e-05;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e919a5e))) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
          if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
            result[0] += (float)0.9987004548408057;
            result[1] += (float)0.001299545159194282;
          } else {
            result[0] += (float)0.9230769230769231;
            result[1] += (float)0.07692307692307693;
          }
        } else {
          if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
            result[0] += (float)0.7742616033755274;
            result[1] += (float)0.22573839662447256;
          } else {
            result[0] += (float)0.007314169076373533;
            result[1] += (float)0.9926858309236265;
          }
        }
      } else {
        if ( LIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ea06598))) ) ) {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb32cca))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    }
  }
  if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1b4246))) ) ) {
    if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3f180c))) ) ) {
      if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0dcf64))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dc55866))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e4710))) ) ) {
          if ( LIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e9f9924))) ) ) {
            result[0] += (float)0.9843041351711872;
            result[1] += (float)0.015695864828812807;
          } else {
            result[0] += (float)0.9716434839711062;
            result[1] += (float)0.0283565160288938;
          }
        } else {
          if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e8e669f))) ) ) {
            result[0] += (float)0.9911089157816745;
            result[1] += (float)0.008891084218325513;
          } else {
            result[0] += (float)0.8226950354609929;
            result[1] += (float)0.1773049645390071;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e925fe8))) ) ) {
      if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb79c96))) ) ) {
        if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea2caf8))) ) ) {
            result[0] += (float)0.7719298245614035;
            result[1] += (float)0.22807017543859648;
          } else {
            result[0] += (float)0.06382978723404255;
            result[1] += (float)0.9361702127659575;
          }
        }
      } else {
        if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
          if ( UNLIKELY( !(data[50].missing != -1) || ((*( ((int*)(data)) + 50 ))<=((int)(0x3e12bb51))) ) ) {
            result[0] += (float)0.9285714285714286;
            result[1] += (float)0.07142857142857142;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    } else {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f422cae))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
          if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d89a422))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.8293650793650794;
            result[1] += (float)0.17063492063492064;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x37037800))) ) ) {
            result[0] += (float)0.9995535924063719;
            result[1] += (float)0.000446407593628119;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f40d5d0))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
            result[0] += (float)0.988454925079833;
            result[1] += (float)0.011545074920167035;
          } else {
            result[0] += (float)0.7391869315017635;
            result[1] += (float)0.2608130684982365;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f2818db))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1da382))) ) ) {
          if ( UNLIKELY( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f79fe5a))) ) ) {
            result[0] += (float)0.9941176470588236;
            result[1] += (float)0.0058823529411764705;
          } else {
            result[0] += (float)0.9998948254101809;
            result[1] += (float)0.00010517458981909971;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f431db8))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d728d94))) ) ) {
        if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d33cc3e))) ) ) {
          if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e932573))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9535232383808095;
            result[1] += (float)0.046476761619190406;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      } else {
        if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
          if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
            result[0] += (float)0.9170691320546434;
            result[1] += (float)0.0829308679453567;
          } else {
            result[0] += (float)0.1854419410745234;
            result[1] += (float)0.8145580589254766;
          }
        } else {
          if ( UNLIKELY( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f2d52cb))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9931244715410974;
            result[1] += (float)0.006875528458902586;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3ea8e542))) ) ) {
      if ( LIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f5308af))) ) ) {
        if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ea69a56))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7288c2))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
          } else {
            result[0] += (float)0.9993232573877735;
            result[1] += (float)0.0006767426122264832;
          }
        }
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    } else {
      result[0] += (float)0;
      result[1] += (float)1;
    }
  }
  if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    if ( LIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
      if ( LIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f63bfa7))) ) ) {
        if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d5db7b1))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      } else {
        if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d5db7b1))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    } else {
      if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1ccd5a))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8dbd57))) ) ) {
      if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
          if ( LIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e4710))) ) ) {
            result[0] += (float)0.9943833104080697;
            result[1] += (float)0.005616689591930307;
          } else {
            result[0] += (float)0.9251955117307038;
            result[1] += (float)0.07480448826929616;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
            result[0] += (float)0.753;
            result[1] += (float)0.247;
          } else {
            result[0] += (float)0.35330005546311705;
            result[1] += (float)0.646699944536883;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e4c4f))) ) ) {
        if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3d98d6))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1ef5a0))) ) ) {
            result[0] += (float)0.9913070927324381;
            result[1] += (float)0.008692907267561858;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    }
  }
  if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
      if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
        if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6fc1dd))) ) ) {
          if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
            result[0] += (float)0.89353478566409;
            result[1] += (float)0.10646521433591005;
          } else {
            result[0] += (float)0.25728155339805825;
            result[1] += (float)0.7427184466019418;
          }
        } else {
          if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            result[0] += (float)0.005988023952095809;
            result[1] += (float)0.9940119760479041;
          } else {
            result[0] += (float)0.9664823773324119;
            result[1] += (float)0.033517622667588114;
          }
        }
      } else {
        if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
            result[0] += (float)0.9726247987117552;
            result[1] += (float)0.027375201288244767;
          } else {
            result[0] += (float)0.32904884318766064;
            result[1] += (float)0.6709511568123393;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae89bf6))) ) ) {
        if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      } else {
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9974651361062055;
            result[1] += (float)0.0025348638937945315;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
    if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb859e2))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( LIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f42a88e))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f431db8))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec38888))) ) ) {
        if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd59576))) ) ) {
          if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
            result[0] += (float)0.9942197664393762;
            result[1] += (float)0.005780233560623873;
          } else {
            result[0] += (float)0.8964606581570567;
            result[1] += (float)0.10353934184294332;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
          if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9205d6))) ) ) {
            result[0] += (float)0.8297872340425532;
            result[1] += (float)0.1702127659574468;
          } else {
            result[0] += (float)0.9993523316062176;
            result[1] += (float)0.0006476683937823834;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e82ed20))) ) ) {
            result[0] += (float)0.2701688555347092;
            result[1] += (float)0.7298311444652908;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 50;
  result[1] /= 50;
  
  // Apply base_scores
  result[0] += (float)0;
  result[1] += (float)0;
  
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
    

    FILE* file = fopen("./codegen_small/esa_3_months_global/split_0/test_data.csv", "r");
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
