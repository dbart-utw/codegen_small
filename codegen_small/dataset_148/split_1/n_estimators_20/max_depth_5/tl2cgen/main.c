
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
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)125.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.2571428571428571;
            result[2] += (float)0;
            result[3] += (float)0.05714285714285714;
            result[4] += (float)0.6857142857142857;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-347.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9974587039390089;
            result[4] += (float)0.0012706480304955528;
            result[5] += (float)0.0012706480304955528;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.0070134424313267095;
            result[3] += (float)0;
            result[4] += (float)0.9906487434248977;
            result[5] += (float)0.0023378141437755697;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
            result[0] += (float)0.9922135706340378;
            result[1] += (float)0;
            result[2] += (float)0.0055617352614015575;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.002224694104560623;
          } else {
            result[0] += (float)0.9988054352695237;
            result[1] += (float)0;
            result[2] += (float)0.0011945647304763326;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)46.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9955223880597015;
            result[1] += (float)0;
            result[2] += (float)0.004477611940298508;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)91) ) ) {
            result[0] += (float)0.9877266898699395;
            result[1] += (float)0.002747755999267265;
            result[2] += (float)0.008060084264517311;
            result[3] += (float)0.0007327349331379373;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0007327349331379373;
          } else {
            result[0] += (float)0.3118279569892473;
            result[1] += (float)0.01881720430107527;
            result[2] += (float)0;
            result[3] += (float)0.6693548387096774;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
            result[0] += (float)0.002890173410404624;
            result[1] += (float)0;
            result[2] += (float)0.007947976878612716;
            result[3] += (float)0.9891618497109826;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.8360896729143698;
            result[1] += (float)0;
            result[2] += (float)0.009555310547592797;
            result[3] += (float)0.15325248070562295;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0011025358324145535;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-9) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-348) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.8623188405797102;
            result[1] += (float)0;
            result[2] += (float)0.13043478260869565;
            result[3] += (float)0.007246376811594203;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.24168514412416853;
            result[1] += (float)0.008869179600886918;
            result[2] += (float)0;
            result[3] += (float)0.7494456762749445;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-35) ) ) {
            result[0] += (float)0.14285714285714285;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.8571428571428571;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-24) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-130) ) ) {
            result[0] += (float)0.5;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.5;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.008501594048884165;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.9914984059511158;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)-185) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
            result[0] += (float)0.9948567229977957;
            result[1] += (float)0;
            result[2] += (float)0.0029390154298310064;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.002204261572373255;
          } else {
            result[0] += (float)0.9998546934030805;
            result[1] += (float)0;
            result[2] += (float)0.00014530659691950015;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
            result[0] += (float)0.9102564102564102;
            result[1] += (float)0;
            result[2] += (float)0.08974358974358974;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += (float)0.990119971771348;
            result[1] += (float)0;
            result[2] += (float)0.004940014114326042;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0.0007057163020465774;
            result[6] += (float)0.004234297812279465;
          } else {
            result[0] += (float)0.6081771720613288;
            result[1] += (float)0.003975014196479273;
            result[2] += (float)0.0017035775127768314;
            result[3] += (float)0.3855763770584895;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0005678591709256105;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)41.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.03005008347245409;
            result[3] += (float)0.5325542570951586;
            result[4] += (float)0.4323873121869783;
            result[5] += (float)0.005008347245409015;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9906127770534551;
            result[1] += (float)0;
            result[2] += (float)0.008604954367666232;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0007822685788787483;
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.0009813542688910696;
            result[2] += (float)0;
            result[3] += (float)0.9990186457311089;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.5555555555555556;
            result[5] += (float)0.4444444444444444;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)106.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.13875598086124402;
            result[3] += (float)0;
            result[4] += (float)0.861244019138756;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-25.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)10) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.009052183173588925;
            result[1] += (float)0.001597444089456869;
            result[2] += (float)0.009584664536741214;
            result[3] += (float)0.979765708200213;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.8938053097345132;
            result[1] += (float)0;
            result[2] += (float)0.10619469026548672;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-8.5) ) ) {
            result[0] += (float)0.022727272727272728;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9772727272727273;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.2857142857142857;
            result[2] += (float)0;
            result[3] += (float)0.7142857142857143;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)50) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)64) ) ) {
            result[0] += (float)0.0026560424966799467;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9960159362549801;
            result[4] += (float)0;
            result[5] += (float)0.0013280212483399733;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
            result[0] += (float)0.8543689320388349;
            result[1] += (float)0;
            result[2] += (float)0.14563106796116504;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
            result[0] += (float)0.9981490829547367;
            result[1] += (float)0;
            result[2] += (float)0.0016826518593303045;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00016826518593303046;
          } else {
            result[0] += (float)0.7466435686444348;
            result[1] += (float)0;
            result[2] += (float)0.0043308791684712;
            result[3] += (float)0.24772628843655262;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00129926375054136;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
            result[0] += (float)0.9936974789915967;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.0063025210084033615;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.3485653560042508;
            result[1] += (float)0;
            result[2] += (float)0.015940488841657812;
            result[3] += (float)0.6354941551540914;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
            result[0] += (float)0.1252336448598131;
            result[1] += (float)0.002803738317757009;
            result[2] += (float)0.012149532710280374;
            result[3] += (float)0.7495327102803738;
            result[4] += (float)0.1102803738317757;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9935831203436837;
            result[1] += (float)0.0005438033607047692;
            result[2] += (float)0.002012072434607646;
            result[3] += (float)0.0036434825167219534;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00021752134428190765;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
            result[0] += (float)0.21540528437080161;
            result[1] += (float)0;
            result[2] += (float)0.0013434841021047917;
            result[3] += (float)0.7814599193909538;
            result[4] += (float)0.0017913121361397223;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9961154273029966;
            result[1] += (float)0;
            result[2] += (float)0.001664816870144284;
            result[3] += (float)0.0022197558268590455;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)204) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
            result[0] += (float)0.2854251012145749;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.7145748987854251;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.14646904969485613;
            result[1] += (float)0.006102877070619006;
            result[2] += (float)0;
            result[3] += (float)0.8474280732345248;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
            result[0] += (float)0.37606837606837606;
            result[1] += (float)0;
            result[2] += (float)0.03133903133903134;
            result[3] += (float)0.5925925925925926;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.6529850746268657;
            result[1] += (float)0;
            result[2] += (float)0.011194029850746268;
            result[3] += (float)0.3358208955223881;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-115) ) ) {
            result[0] += (float)0.5;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.25;
            result[4] += (float)0.25;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.004032258064516129;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.9959677419354839;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)122) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.1864406779661017;
            result[2] += (float)0;
            result[3] += (float)0.3050847457627119;
            result[4] += (float)0.5084745762711864;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)85.5) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.7631578947368421;
            result[1] += (float)0;
            result[2] += (float)0.23684210526315788;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.13962264150943396;
            result[4] += (float)0.8603773584905661;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-4.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
            result[0] += (float)0.028985507246376812;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9710144927536232;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)6.5) ) ) {
            result[0] += (float)0.1440466278101582;
            result[1] += (float)0.002497918401332223;
            result[2] += (float)0;
            result[3] += (float)0.8492922564529559;
            result[4] += (float)0.002497918401332223;
            result[5] += (float)0.0016652789342214821;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.045714285714285714;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9542857142857143;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.05303030303030303;
            result[3] += (float)0;
            result[4] += (float)0.946969696969697;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.7894736842105263;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0.21052631578947367;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
            result[0] += (float)0.9900583244962884;
            result[1] += (float)0;
            result[2] += (float)0.0009278897136797455;
            result[3] += (float)0.009013785790031814;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.072992700729927;
            result[1] += (float)0;
            result[2] += (float)0.010948905109489052;
            result[3] += (float)0.9145985401459854;
            result[4] += (float)0;
            result[5] += (float)0.00145985401459854;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
            result[0] += (float)0.9937313007550933;
            result[1] += (float)0.00014247043738424277;
            result[2] += (float)0.0005698817495369711;
            result[3] += (float)0.005556347057985468;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.5343598517251213;
            result[1] += (float)0.0017108639863130882;
            result[2] += (float)0.005702879954376961;
            result[3] += (float)0.45680068434559457;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0014257199885942403;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
            result[0] += (float)0.9977728285077951;
            result[1] += (float)0;
            result[2] += (float)0.0022271714922048997;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.3014705882352941;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.6985294117647058;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-190.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9937288348175091;
            result[1] += (float)0;
            result[2] += (float)0.0038881224131443624;
            result[3] += (float)0.0011288097328483633;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0012542330364981814;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)1;
          result[6] += (float)0;
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9988019169329073;
            result[4] += (float)0;
            result[5] += (float)0.0011980830670926517;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.3225806451612903;
            result[2] += (float)0.6774193548387096;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
            result[0] += (float)0.8642857142857143;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.1357142857142857;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.3100686498855835;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.6899313501144165;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.75;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0.25;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += (float)0.9946855624446412;
            result[1] += (float)0;
            result[2] += (float)0.003985828166519044;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.001328609388839681;
          } else {
            result[0] += (float)0.9997682100017384;
            result[1] += (float)0;
            result[2] += (float)0.000231789998261575;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.5172413793103449;
            result[2] += (float)0.4827586206896552;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.015873015873015872;
            result[3] += (float)0.9841269841269841;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += (float)0.9940632093591759;
            result[1] += (float)0;
            result[2] += (float)0.005587567661952157;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0003492229788720098;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.0012622278321236984;
            result[3] += (float)0.9987377721678763;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.6666666666666666;
            result[1] += (float)0;
            result[2] += (float)0.3333333333333333;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-61) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9919481539670071;
            result[1] += (float)0;
            result[2] += (float)0.00589159465828751;
            result[3] += (float)0.001178318931657502;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0009819324430479183;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9716312056737588;
            result[1] += (float)0;
            result[2] += (float)0.028368794326241134;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
            result[0] += (float)0.9985111662531018;
            result[1] += (float)0;
            result[2] += (float)0.001488833746898263;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-9.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
            result[0] += (float)0.03571428571428571;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9642857142857143;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9032258064516129;
            result[1] += (float)0;
            result[2] += (float)0.0967741935483871;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)93.5) ) ) {
            result[0] += (float)0.6599490878235046;
            result[1] += (float)0.003606279168434451;
            result[2] += (float)0.006682223165040306;
            result[3] += (float)0.3289138735680951;
            result[4] += (float)0.00010606703436571915;
            result[5] += (float)0.00031820110309715744;
            result[6] += (float)0.0004242681374628766;
          } else {
            result[0] += (float)0.9728065674704977;
            result[1] += (float)0;
            result[2] += (float)0.00513083632632119;
            result[3] += (float)0.018471010774756286;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0035915854284248334;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.0013472549680026945;
            result[2] += (float)0;
            result[3] += (float)0.9986527450319973;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)1;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)110) ) ) {
            result[0] += (float)0.0136986301369863;
            result[1] += (float)0.0273972602739726;
            result[2] += (float)0;
            result[3] += (float)0.958904109589041;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.012016021361815754;
            result[2] += (float)0;
            result[3] += (float)0.0013351134846461949;
            result[4] += (float)0.986648865153538;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9174041297935103;
            result[4] += (float)0.08259587020648967;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.18633540372670807;
            result[4] += (float)0.8136645962732919;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
            result[0] += (float)0.9972530491154818;
            result[1] += (float)0.00032963410614218216;
            result[2] += (float)0.0016481705307109108;
            result[3] += (float)0.0007691462476650917;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.8462448255470136;
            result[1] += (float)0.0059136605558840925;
            result[2] += (float)0.010644589000591367;
            result[3] += (float)0.1360141927853341;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0011827321111768185;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
            result[0] += (float)0.9997842502696872;
            result[1] += (float)0;
            result[2] += (float)0.0002157497303128371;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9157427937915743;
            result[1] += (float)0;
            result[2] += (float)0.0014781966001478197;
            result[3] += (float)0.08056171470805618;
            result[4] += (float)0;
            result[5] += (float)0.0007390983000739098;
            result[6] += (float)0.0014781966001478197;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.0013140604467805521;
            result[2] += (float)0.006898817345597898;
            result[3] += (float)0.9881734559789751;
            result[4] += (float)0.002299605781865966;
            result[5] += (float)0.0013140604467805521;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.039711191335740074;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.9602888086642599;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
            result[0] += (float)0.9864864864864865;
            result[1] += (float)0.013513513513513514;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.016025641025641024;
            result[3] += (float)0;
            result[4] += (float)0.9818376068376068;
            result[5] += (float)0.002136752136752137;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)98) ) ) {
            result[0] += (float)0.9984405458089669;
            result[1] += (float)0;
            result[2] += (float)0.0015594541910331384;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)38) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)50) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
            result[0] += (float)0.875968992248062;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.12403100775193798;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.10663082437275985;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.8933691756272402;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
            result[0] += (float)0.2261380323054332;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.7738619676945668;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)58) ) ) {
            result[0] += (float)0.9981412639405205;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.0018587360594795538;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9246376811594202;
            result[1] += (float)0;
            result[2] += (float)0.07536231884057971;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)113.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)1;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)48.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9770114942528736;
            result[4] += (float)0.020114942528735632;
            result[5] += (float)0.0028735632183908046;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9918144611186903;
            result[1] += (float)0;
            result[2] += (float)0.006480218281036835;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0017053206002728514;
          }
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)33.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9987684729064039;
            result[1] += (float)0;
            result[2] += (float)0.0012315270935960591;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
            result[0] += (float)0.9739413680781759;
            result[1] += (float)0;
            result[2] += (float)0.016286644951140065;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.009771986970684038;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
            result[0] += (float)0.9992587101556709;
            result[1] += (float)0;
            result[2] += (float)0.0007412898443291327;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9976099426386233;
            result[1] += (float)0;
            result[2] += (float)0.002390057361376673;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)112) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.003481288076588338;
            result[2] += (float)0.02088772845953003;
            result[3] += (float)0.9747606614447346;
            result[4] += (float)0.0008703220191470845;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9886363636363636;
            result[1] += (float)0.011363636363636364;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
            result[0] += (float)0.5;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.5;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.995847750865052;
            result[1] += (float)0;
            result[2] += (float)0.001384083044982699;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0.001384083044982699;
            result[6] += (float)0.001384083044982699;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += (float)0.6355629611997142;
            result[1] += (float)0.0030945013092120916;
            result[2] += (float)0.0011901928112354198;
            result[3] += (float)0.3592001904308497;
            result[4] += (float)0.00023803856224708397;
            result[5] += (float)0.00023803856224708397;
            result[6] += (float)0.00047607712449416795;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.00975609756097561;
            result[2] += (float)0;
            result[3] += (float)0.9902439024390244;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
            result[0] += (float)0.4347224965435513;
            result[1] += (float)0;
            result[2] += (float)0.003160181710448351;
            result[3] += (float)0.5619198103890973;
            result[4] += (float)0;
            result[5] += (float)0.00019751135690302193;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.021080368906455864;
            result[3] += (float)0.9736495388669302;
            result[4] += (float)0.005270092226613966;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9471947194719472;
            result[1] += (float)0;
            result[2] += (float)0.04372937293729373;
            result[3] += (float)0.0024752475247524753;
            result[4] += (float)0;
            result[5] += (float)0.0008250825082508251;
            result[6] += (float)0.005775577557755775;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.2080536912751678;
            result[4] += (float)0.7919463087248322;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.072992700729927;
            result[2] += (float)0;
            result[3] += (float)0.6496350364963503;
            result[4] += (float)0.2773722627737226;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)106.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.047021943573667714;
            result[4] += (float)0.9529780564263323;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)125.5) ) ) {
            result[0] += (float)0.01171875;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.0625;
            result[4] += (float)0.92578125;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.0425531914893617;
            result[1] += (float)0.19148936170212766;
            result[2] += (float)0;
            result[3] += (float)0.23404255319148937;
            result[4] += (float)0.5319148936170213;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)1;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)47.5) ) ) {
            result[0] += (float)0.983790523690773;
            result[1] += (float)0;
            result[2] += (float)0.016209476309226933;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.3333333333333333;
            result[1] += (float)0;
            result[2] += (float)0.6666666666666666;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)10) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-13) ) ) {
            result[0] += (float)0.16887816646562123;
            result[1] += (float)0.012062726176115802;
            result[2] += (float)0;
            result[3] += (float)0.8190591073582629;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.0030935808197989174;
            result[3] += (float)0.9969064191802011;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
            result[0] += (float)0.9995552700499086;
            result[1] += (float)0;
            result[2] += (float)0.0004447299500914167;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.00816326530612245;
            result[2] += (float)0;
            result[3] += (float)0.9795918367346939;
            result[4] += (float)0.004081632653061225;
            result[5] += (float)0.00816326530612245;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)94) ) ) {
            result[0] += (float)0.6153846153846154;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.38461538461538464;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9656652360515021;
            result[1] += (float)0;
            result[2] += (float)0.015021459227467811;
            result[3] += (float)0.019313304721030045;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            result[0] += (float)0.9996517499564688;
            result[1] += (float)0;
            result[2] += (float)0.00034825004353125546;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.6771313941825476;
            result[1] += (float)0.0015045135406218655;
            result[2] += (float)0.004312938816449348;
            result[3] += (float)0.3164493480441324;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0006018054162487463;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.014311270125223614;
            result[3] += (float)0.9391771019677997;
            result[4] += (float)0.046511627906976744;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.03590425531914894;
            result[1] += (float)0;
            result[2] += (float)0.018617021276595744;
            result[3] += (float)0.7832446808510638;
            result[4] += (float)0.1595744680851064;
            result[5] += (float)0.0026595744680851063;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)22.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
            result[0] += (float)0.24444444444444444;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.7444444444444445;
            result[4] += (float)0.011111111111111112;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9;
            result[1] += (float)0;
            result[2] += (float)0.07142857142857142;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0.02857142857142857;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
            result[0] += (float)0.9985487664514837;
            result[1] += (float)0.00015012760846719713;
            result[2] += (float)0.000400340289245859;
            result[3] += (float)0.000800680578491718;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00010008507231146475;
          } else {
            result[0] += (float)0.8634969325153374;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.13650306748466257;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
            result[0] += (float)0.9957934435741225;
            result[1] += (float)0;
            result[2] += (float)0.0027560197272991005;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.001450536698578474;
          } else {
            result[0] += (float)0.737349004244205;
            result[1] += (float)0.001305909239307868;
            result[2] += (float)0.002448579823702253;
            result[3] += (float)0.2584067907280444;
            result[4] += (float)0;
            result[5] += (float)0.0001632386549134835;
            result[6] += (float)0.000326477309826967;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
            result[0] += (float)0.16632962588473205;
            result[1] += (float)0;
            result[2] += (float)0.006066734074823054;
            result[3] += (float)0.8255813953488372;
            result[4] += (float)0.0020222446916076846;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.16427104722792607;
            result[1] += (float)0;
            result[2] += (float)0.03696098562628337;
            result[3] += (float)0.22176591375770022;
            result[4] += (float)0.5728952772073922;
            result[5] += (float)0.004106776180698152;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)103.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78) ) ) {
            result[0] += (float)0.27182866556836904;
            result[1] += (float)0.0032948929159802307;
            result[2] += (float)0;
            result[3] += (float)0.7248764415156508;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.03467406380027739;
            result[1] += (float)0;
            result[2] += (float)0.020804438280166437;
            result[3] += (float)0.9445214979195562;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)104) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.125;
            result[1] += (float)0.75;
            result[2] += (float)0;
            result[3] += (float)0.125;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)4979) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9847908745247148;
            result[1] += (float)0;
            result[2] += (float)0.015209125475285171;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9603960396039604;
            result[1] += (float)0;
            result[2] += (float)0.039603960396039604;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9997958558742472;
            result[1] += (float)0;
            result[2] += (float)0.00020414412575278147;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)9463.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)10) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.7169811320754716;
            result[4] += (float)0.2830188679245283;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)102) ) ) {
            result[0] += (float)0.0026595744680851068;
            result[1] += (float)0.007683215130023641;
            result[2] += (float)0.0041371158392435;
            result[3] += (float)0.9843380614657211;
            result[4] += (float)0.0008865248226950355;
            result[5] += (float)0.00029550827423167853;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.05737704918032787;
            result[2] += (float)0;
            result[3] += (float)0.00819672131147541;
            result[4] += (float)0.9344262295081968;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.09701492537313434;
            result[3] += (float)0.8992537313432837;
            result[4] += (float)0;
            result[5] += (float)0.00373134328358209;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)26) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.0078125;
            result[3] += (float)0.9921875;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.009224091155724362;
            result[3] += (float)0.10417797069994574;
            result[4] += (float)0.8860553445469344;
            result[5] += (float)0.0005425935973955507;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2.5) ) ) {
            result[0] += (float)0.9981078524124882;
            result[1] += (float)0;
            result[2] += (float)0.001892147587511826;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9852249832102082;
            result[1] += (float)0;
            result[2] += (float)0.013431833445265278;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.001343183344526528;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
            result[0] += (float)0.9911504424778761;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.008849557522123894;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
            result[0] += (float)0.000777000777000777;
            result[1] += (float)0;
            result[2] += (float)0.0003885003885003885;
            result[3] += (float)0.9988344988344988;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.20930232558139536;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.7906976744186046;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
            result[0] += (float)0.9547383309759547;
            result[1] += (float)0;
            result[2] += (float)0.008958038661008957;
            result[3] += (float)0.033474776049033476;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.002828854314002829;
          } else {
            result[0] += (float)0.047619047619047616;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9523809523809523;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
            result[0] += (float)0.9928418038654259;
            result[1] += (float)0;
            result[2] += (float)0.0071581961345740875;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9988496932515337;
            result[1] += (float)0;
            result[2] += (float)0.0011503067484662577;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
            result[0] += (float)0.019930244145490782;
            result[1] += (float)0.0057299451918286;
            result[2] += (float)0.008221225710014948;
            result[3] += (float)0.9651220727453911;
            result[4] += (float)0;
            result[5] += (float)0.000996512207274539;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.23809523809523808;
            result[2] += (float)0;
            result[3] += (float)0.7619047619047619;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)86) ) ) {
            result[0] += (float)0.9917855598789451;
            result[1] += (float)0;
            result[2] += (float)0.00648508430609598;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0017293558149589277;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
            result[0] += (float)0.9703557312252964;
            result[1] += (float)0;
            result[2] += (float)0.0009881422924901185;
            result[3] += (float)0.02865612648221344;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.8319502074688797;
            result[1] += (float)0;
            result[2] += (float)0.016597510373443983;
            result[3] += (float)0.15145228215767634;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)36) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
            result[0] += (float)0.9931116389548693;
            result[1] += (float)0;
            result[2] += (float)0.006175771971496437;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0007125890736342043;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9872389791183295;
            result[1] += (float)0;
            result[2] += (float)0.009280742459396751;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0034802784222737818;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9989838431053755;
            result[1] += (float)0;
            result[2] += (float)0.00101615689462453;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)97.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)75) ) ) {
            result[0] += (float)0.02697967764540995;
            result[1] += (float)0.005956552207428171;
            result[2] += (float)0.010161177295024528;
            result[3] += (float)0.9548002803083392;
            result[4] += (float)0.000350385423966363;
            result[5] += (float)0.001751927119831815;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.9629629629629629;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0.037037037037037035;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
            result[0] += (float)0.9901364680448588;
            result[1] += (float)0;
            result[2] += (float)0.004729090663423862;
            result[3] += (float)0.0037832725307390892;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0013511687609782462;
          } else {
            result[0] += (float)0.8790496760259179;
            result[1] += (float)0;
            result[2] += (float)0.02159827213822894;
            result[3] += (float)0.09935205183585313;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-7) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.3193548387096774;
            result[1] += (float)0;
            result[2] += (float)0.04516129032258064;
            result[3] += (float)0.635483870967742;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-32) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.0068415051311288486;
            result[2] += (float)0;
            result[3] += (float)0.9931584948688712;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-26) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
            result[0] += (float)0.003129890453834116;
            result[1] += (float)0.023474178403755867;
            result[2] += (float)0;
            result[3] += (float)0.03912363067292645;
            result[4] += (float)0.9342723004694836;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.41009463722397477;
            result[4] += (float)0.5899053627760252;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)50) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)80.5) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
            result[0] += (float)0.0010427528675703858;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9937434827945777;
            result[4] += (float)0.0046923879040667365;
            result[5] += (float)0.0005213764337851929;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.7142857142857143;
            result[5] += (float)0.2857142857142857;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-1) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.04861111111111111;
            result[3] += (float)0;
            result[4] += (float)0.9513888888888888;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)61) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9991045444369823;
            result[1] += (float)7.462129691814044e-05;
            result[2] += (float)0.000671591672263264;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00014924259383628088;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
            result[0] += (float)0.9791029561671764;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.02089704383282365;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
            result[0] += (float)0.8912975180647189;
            result[1] += (float)0.0021991831605403713;
            result[2] += (float)0.0028275212064090486;
            result[3] += (float)0.10320452403393027;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00047125353440150805;
          } else {
            result[0] += (float)0.45773357759748756;
            result[1] += (float)0;
            result[2] += (float)0.004710808688824915;
            result[3] += (float)0.5375556137136875;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
            result[0] += (float)0.963716514072567;
            result[1] += (float)0;
            result[2] += (float)0.005764665988470668;
            result[3] += (float)0.029501525940996948;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.001017293997965412;
          } else {
            result[0] += (float)0.02252252252252252;
            result[1] += (float)0;
            result[2] += (float)0.06756756756756757;
            result[3] += (float)0.9099099099099099;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.01598173515981735;
            result[2] += (float)0;
            result[3] += (float)0.9840182648401826;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
            result[0] += (float)0.002386634844868735;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9976133651551312;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.08333333333333333;
            result[1] += (float)0;
            result[2] += (float)0.04583333333333333;
            result[3] += (float)0.8708333333333333;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)177.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-8.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.11864406779661017;
            result[2] += (float)0;
            result[3] += (float)0.8813559322033898;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)8.5) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
            result[0] += (float)0.4;
            result[1] += (float)0;
            result[2] += (float)0.6;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.0017431725740848344;
            result[2] += (float)0.0017431725740848344;
            result[3] += (float)0.9959325973271353;
            result[4] += (float)0.0005810575246949448;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9798387096774194;
            result[1] += (float)0;
            result[2] += (float)0.020161290322580645;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)1;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-96) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)104) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.7692307692307693;
            result[2] += (float)0;
            result[3] += (float)0.23076923076923078;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)57) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.9166666666666666;
            result[5] += (float)0.08333333333333333;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)27.5) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.6;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0.4;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.005188067444876783;
            result[3] += (float)0.9948119325551232;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.010416666666666666;
            result[3] += (float)0.9895833333333334;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
            result[0] += (float)0.923469387755102;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.07653061224489796;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9972685663664551;
            result[1] += (float)0.0007751365716816773;
            result[2] += (float)0.0018086520005905805;
            result[3] += (float)3.691126531817512e-05;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00011073379595452534;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
            result[0] += (float)0.3482025715035424;
            result[1] += (float)0;
            result[2] += (float)0.008921542902125426;
            result[3] += (float)0.6423510889530307;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0005247966413014956;
          } else {
            result[0] += (float)0.6285714285714286;
            result[1] += (float)0;
            result[2] += (float)0.002197802197802198;
            result[3] += (float)0.3677655677655678;
            result[4] += (float)0;
            result[5] += (float)0.0014652014652014652;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.9615384615384616;
            result[5] += (float)0.038461538461538464;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.012702078521939953;
            result[3] += (float)0.9872979214780601;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.0015117157974300832;
            result[1] += (float)0.0007558578987150416;
            result[2] += (float)0;
            result[3] += (float)0.9954648526077098;
            result[4] += (float)0;
            result[5] += (float)0.0022675736961451248;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)1.5) ) ) {
            result[0] += (float)0.998038624019312;
            result[1] += (float)7.543753771876886e-05;
            result[2] += (float)0.001131563065781533;
            result[3] += (float)0.0007543753771876886;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += (float)0.8950887117510928;
            result[1] += (float)0.003342761635381846;
            result[2] += (float)0.013113911031113397;
            result[3] += (float)0.08768320905116997;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0007714065312419646;
          } else {
            result[0] += (float)0.12164948453608247;
            result[1] += (float)0;
            result[2] += (float)0.004810996563573883;
            result[3] += (float)0.8735395189003436;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
            result[0] += (float)0.9315866084425036;
            result[1] += (float)0;
            result[2] += (float)0.00363901018922853;
            result[3] += (float)0.06477438136826782;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9949865492785522;
            result[1] += (float)0;
            result[2] += (float)0.002078747860112497;
            result[3] += (float)0.001467351430667645;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.001467351430667645;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)88.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.625;
            result[4] += (float)0.375;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)124.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.07407407407407407;
            result[1] += (float)0.2962962962962963;
            result[2] += (float)0;
            result[3] += (float)0.6296296296296297;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)107.5) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)75) ) ) {
            result[0] += (float)0.896551724137931;
            result[1] += (float)0.10344827586206896;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
            result[0] += (float)0.10621761658031088;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.8937823834196891;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.029950083194675542;
            result[1] += (float)0;
            result[2] += (float)0.014975041597337771;
            result[3] += (float)0.20632279534109818;
            result[4] += (float)0.7487520798668885;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)100) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)123.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.0029154518950437317;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.9970845481049563;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)1;
          result[6] += (float)0;
        }
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-16) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.9166666666666666;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0.08333333333333333;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.00032488628979857054;
            result[2] += (float)0;
            result[3] += (float)0.9993502274204029;
            result[4] += (float)0;
            result[5] += (float)0.00032488628979857054;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.09090909090909091;
            result[2] += (float)0.6363636363636364;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0.2727272727272727;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)32.5) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)82.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.4;
            result[2] += (float)0.2;
            result[3] += (float)0.4;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)12) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.03125;
            result[2] += (float)0;
            result[3] += (float)0.96875;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            result[0] += (float)0.9960815492077915;
            result[1] += (float)0.0008518371287409847;
            result[2] += (float)0.0029530353796354135;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0001135782838321313;
          } else {
            result[0] += (float)0.9991338241663058;
            result[1] += (float)0;
            result[2] += (float)0.00032481593763534;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0005413598960589;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.0003198976327575176;
            result[3] += (float)0.9996801023672425;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)44.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.5714285714285714;
            result[1] += (float)0;
            result[2] += (float)0.42857142857142855;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)48) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.2222222222222222;
            result[3] += (float)0.7777777777777778;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)38) ) ) {
            result[0] += (float)0.9931008049060943;
            result[1] += (float)0;
            result[2] += (float)0.005174396320429283;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0017247987734764277;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9940244219277734;
            result[1] += (float)0;
            result[2] += (float)0.005455962587685113;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0005196154845414394;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.037067888379841735;
            result[1] += (float)0.004581424406497293;
            result[2] += (float)0.01582673885880883;
            result[3] += (float)0.941274468971262;
            result[4] += (float)0;
            result[5] += (float)0.0012494793835901709;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
            result[0] += (float)0.9885292912740681;
            result[1] += (float)0;
            result[2] += (float)0.005462242250443808;
            result[3] += (float)0.005462242250443808;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0005462242250443808;
          } else {
            result[0] += (float)0.8987951807228916;
            result[1] += (float)0;
            result[2] += (float)0.01927710843373494;
            result[3] += (float)0.0819277108433735;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)19.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.00033783783783783786;
            result[2] += (float)0.007432432432432433;
            result[3] += (float)0.9922297297297298;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.1;
            result[3] += (float)0;
            result[4] += (float)0.8;
            result[5] += (float)0.1;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)19) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.004728132387706856;
            result[2] += (float)0;
            result[3] += (float)0.9952718676122931;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-1) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.07142857142857142;
            result[1] += (float)0;
            result[2] += (float)0.9285714285714286;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-10.5) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)-178) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
            result[0] += (float)0.9913544668587896;
            result[1] += (float)0;
            result[2] += (float)0.007492795389048991;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0011527377521613833;
          } else {
            result[0] += (float)0.9980478282088824;
            result[1] += (float)0;
            result[2] += (float)0.0019521717911176184;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)57) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.9833333333333333;
            result[5] += (float)0.016666666666666666;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
            result[0] += (float)0.5985401459854015;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.40145985401459855;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.0018661690215942418;
            result[1] += (float)0.0034657424686750206;
            result[2] += (float)0.014929352172753934;
            result[3] += (float)0.9778725673153826;
            result[4] += (float)0;
            result[5] += (float)0.0018661690215942418;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)13) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.12643678160919541;
            result[2] += (float)0;
            result[3] += (float)0.8735632183908046;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-61.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)1;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
            result[0] += (float)0.9909127899091279;
            result[1] += (float)0;
            result[2] += (float)0.0031194900311949003;
            result[3] += (float)0.0035263800352638005;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0024413400244134003;
          } else {
            result[0] += (float)0.858187134502924;
            result[1] += (float)0;
            result[2] += (float)0.026315789473684213;
            result[3] += (float)0.11549707602339182;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)1;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)9) ) ) {
            result[0] += (float)0.9984283593818214;
            result[1] += (float)4.3656683838295645e-05;
            result[2] += (float)0.0006985069414127303;
            result[3] += (float)0.0006548502575744347;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00017462673535318258;
          } else {
            result[0] += (float)0.004048582995951417;
            result[1] += (float)0.004048582995951417;
            result[2] += (float)0;
            result[3] += (float)0.9757085020242915;
            result[4] += (float)0;
            result[5] += (float)0.016194331983805668;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += (float)0.9883855981416957;
            result[1] += (float)0;
            result[2] += (float)0.009291521486643438;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0.0023228803716608595;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.8221024258760108;
            result[1] += (float)0.003032345013477089;
            result[2] += (float)0.0033692722371967657;
            result[3] += (float)0.1711590296495957;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00033692722371967657;
          }
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.05660377358490566;
            result[1] += (float)0.11320754716981132;
            result[2] += (float)0;
            result[3] += (float)0.8301886792452831;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.0036900369003690036;
            result[2] += (float)0;
            result[3] += (float)0.025830258302583026;
            result[4] += (float)0.9704797047970479;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)77.5) ) ) {
            result[0] += (float)0.0019230769230769232;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9942307692307693;
            result[4] += (float)0.0028846153846153848;
            result[5] += (float)0.0009615384615384616;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.2926596758817922;
            result[1] += (float)0.0038131553860819827;
            result[2] += (float)0.019065776930409915;
            result[3] += (float)0.652049571020019;
            result[4] += (float)0.032411820781696854;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.013157894736842105;
            result[4] += (float)0.9868421052631579;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.44924406047516197;
            result[4] += (float)0.550755939524838;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
            result[0] += (float)0.5657894736842105;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.4342105263157895;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.0012987012987012987;
            result[3] += (float)0.9987012987012988;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)1;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)25) ) ) {
            result[0] += (float)0.9764521193092621;
            result[1] += (float)0;
            result[2] += (float)0.01726844583987441;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.006279434850863423;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.9944444444444445;
            result[5] += (float)0.005555555555555556;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)40) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.11182108626198083;
            result[3] += (float)0;
            result[4] += (float)0.8881789137380192;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9944598337950139;
            result[1] += (float)0;
            result[2] += (float)0.00554016620498615;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)45) ) ) {
            result[0] += (float)0.125;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.625;
            result[4] += (float)0.25;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9863247863247864;
            result[1] += (float)0;
            result[2] += (float)0.005128205128205128;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.008547008547008548;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-80.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 20;
  result[1] /= 20;
  result[2] /= 20;
  result[3] /= 20;
  result[4] /= 20;
  result[5] /= 20;
  result[6] /= 20;
  
  // Apply base_scores
  result[0] += (float)0;
  result[1] += (float)0;
  result[2] += (float)0;
  result[3] += (float)0;
  result[4] += (float)0;
  result[5] += (float)0;
  result[6] += (float)0;
  
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
    

    FILE* file = fopen("./codegen_small/dataset_148/split_1/test_data.csv", "r");
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
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
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
