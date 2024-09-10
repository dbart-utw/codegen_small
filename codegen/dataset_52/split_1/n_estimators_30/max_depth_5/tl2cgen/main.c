
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
  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1779949963092803955) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3608649969100952148) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.7894900143146514893) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.1295350007712841034) ) ) {
            result[0] += 0.25;
            result[1] += 0.75;
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
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9272800087928771973) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.3927749991416931152) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.04778499901294708252) ) ) {
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
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.2885800078511238098) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5296200215816497803) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.4901949996128678322) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.03125;
            result[1] += 0.96875;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.5800950005650520325) ) ) {
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
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2599149942398071289) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0009699999936856329441) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.2437149956822395325) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.706300005316734314) ) ) {
            result[0] += 0.5;
            result[1] += 0.5;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.3912100046873092651) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.6077099889516830444) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.1451549981720745564) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5647349953651428223) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0.3333333333333333;
          } else {
            result[0] += 0.027210884353741496;
            result[1] += 0.9727891156462585;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01879500038921833038) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.006680000107735395432) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.1757349986582994461) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.09473499655723571777) ) ) {
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
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.8474049866199493408) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.8757099807262420654) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.9626800119876861572) ) ) {
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
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9788799881935119629) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.579645007848739624) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8736650049686431885) ) ) {
            result[0] += 0.06329113924050633;
            result[1] += 0.9367088607594937;
          } else {
            result[0] += 0.7142857142857143;
            result[1] += 0.2857142857142857;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.8471899926662445068) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.9342049956321716309) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.6912750005722045898) ) ) {
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2383150011301040649) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5515550076961517334) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2193350046873092651) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.2362850010395050049) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.9609400033950805664) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.6;
            result[1] += 0.4;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7558549940586090088) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.8618449866771697998) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0.3333333333333333;
          } else {
            result[0] += 0.04093567251461988;
            result[1] += 0.9590643274853801;
          }
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4625150114297866821) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.6976850032806396484) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.4943900108337402344) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.09817999601364135742) ) ) {
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2599149942398071289) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7652349770069122314) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7935449779033660889) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.7538200020790100098) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.06321839080459771;
            result[1] += 0.9367816091954023;
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.933945000171661377) ) ) {
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
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2033349946141242981) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.3856500089168548584) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2946100085973739624) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.23981500044465065) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.5629699975252151489) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6255199909210205078) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8791849911212921143) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.0299100000411272049) ) ) {
            result[0] += 0.2222222222222222;
            result[1] += 0.7777777777777778;
          } else {
            result[0] += 0.008928571428571428;
            result[1] += 0.9910714285714286;
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.8604550063610076904) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.1825399994850158691) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.8571450114250183105) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7232149839401245117) ) ) {
            result[0] += 0;
            result[1] += 1;
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
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.02214000001549720764) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4096949994564056396) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.245320003479719162) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.1336250007152557373) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9085099995136260986) ) ) {
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
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.9509800076484680176) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1142599992454051971) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.198930002748966217) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2193350046873092651) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.0582699999213218689) ) ) {
            result[0] += 0.8571428571428571;
            result[1] += 0.14285714285714285;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.9483700096607208252) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0.3333333333333333;
          } else {
            result[0] += 0.05263157894736842;
            result[1] += 0.9473684210526315;
          }
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.8217900097370147705) ) ) {
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
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4369349926710128784) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.02292000036686658859) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1513049975037574768) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.2630150020122528076) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.6969700008630752563) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.8988850116729736328) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2166000008583068848) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.7489149868488311768) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5324800163507461548) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.1030350029468536377) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
            result[0] += 0.024096385542168676;
            result[1] += 0.9759036144578314;
          } else {
            result[0] += 0.5;
            result[1] += 0.5;
          }
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.2831750065088272095) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02878000028431415558) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05826499871909618378) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.1904799938201904297) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8394100069999694824) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.001494999974966049194) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.341169990599155426) ) ) {
            result[0] += 0.6923076923076923;
            result[1] += 0.3076923076923077;
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
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7972849905490875244) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.7692300081253051758) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.714935004711151123) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.5437850058078765869) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.03076923076923077;
            result[1] += 0.9692307692307692;
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.01644499972462654114) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.1782099902629852295) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9026100039482116699) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.9774450063705444336) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0) ) ) {
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.5487850010395050049) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.02377998828887939453) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.2571949958801269531) ) ) {
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
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.3953550010919570923) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.2585249990224838257) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0.6666666666666666;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1888450011610984802) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.06962025316455696;
            result[1] += 0.930379746835443;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.2000949978828430176) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.0969000011682510376) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.6472850143909454346) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8927049934864044189) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.5880299806594848633) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7472899854183197021) ) ) {
            result[0] += 0.8;
            result[1] += 0.2;
          } else {
            result[0] += 0.033707865168539325;
            result[1] += 0.9662921348314607;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.0625) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
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
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9127549827098846436) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.7406799942255020142) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.4396849870681762695) ) ) {
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.9021950066089630127) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.7668049931526184082) ) ) {
            result[0] += 0.12612612612612611;
            result[1] += 0.8738738738738738;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.5028099864721298218) ) ) {
            result[0] += 0.375;
            result[1] += 0.625;
          } else {
            result[0] += 0.8571428571428571;
            result[1] += 0.14285714285714285;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.4135650023818016052) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9908599853515625) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0.3333333333333333;
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2166000008583068848) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.2242600023746490479) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.7826099991798400879) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3181799948215484619) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5647349953651428223) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.6317949891090393066) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2452850043773651123) ) ) {
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
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.2631550133228302002) ) ) {
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
            result[0] += 0.021739130434782608;
            result[1] += 0.9782608695652174;
          }
        }
      }
    }
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9614199995994567871) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.08616000041365623474) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.1885000020265579224) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.1576250046491622925) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.08538500219583511353) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.3005800023674964905) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0.3333333333333333;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.8250899910926818848) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.6666649878025054932) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.0113399997353553772) ) ) {
            result[0] += 0.1388888888888889;
            result[1] += 0.8611111111111112;
          } else {
            result[0] += 0.01694915254237288;
            result[1] += 0.9830508474576272;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2316300049424171448) ) ) {
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
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.06023499928414821625) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.3239700049161911011) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.3707450032234191895) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05826499871909618378) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.5;
            result[1] += 0.5;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.1224500015377998352) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.008685000359037076123) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.03953500092029571533) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.030303030303030304;
            result[1] += 0.9696969696969697;
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1516650021076202393) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2253750041127204895) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.08410000056028366089) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.04;
            result[1] += 0.96;
          }
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.7890950143337249756) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2111250013113021851) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.5714299976825714111) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0.3333333333333333;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.7037000060081481934) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.07142857142857142;
            result[1] += 0.9285714285714286;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.1598850004374980927) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.7432049959897994995) ) ) {
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1578199975192546844) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.0761800035834312439) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7374099940061569214) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9469150006771087646) ) ) {
            result[0] += 0.06043956043956044;
            result[1] += 0.9395604395604396;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9194949865341186523) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.7623949944972991943) ) ) {
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
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.07985000312328338623) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.8768799901008605957) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.09360999986529350281) ) ) {
            result[0] += 0.0967741935483871;
            result[1] += 0.9032258064516129;
          } else {
            result[0] += 0.008264462809917356;
            result[1] += 0.9917355371900827;
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.6381750106811523438) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9098950028419494629) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9200499951839447021) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.3333333333333333;
            result[1] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5794949978590011597) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.07692307692307693;
            result[1] += 0.9230769230769231;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9447599947452545166) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1453649997711181641) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.9945150017738342285) ) ) {
            result[0] += 0.08;
            result[1] += 0.92;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0.3333333333333333;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.5642800033092498779) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.1039649979211390018) ) ) {
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7472899854183197021) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2686599940061569214) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2142700031399726868) ) ) {
            result[0] += 0.07142857142857142;
            result[1] += 0.9285714285714286;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.1449500024318695068) ) ) {
            result[0] += 0.07692307692307693;
            result[1] += 0.9230769230769231;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7597500085830688477) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.03302000090479850769) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.2222222222222222;
            result[1] += 0.7777777777777778;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1348499953746795654) ) ) {
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
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9614199995994567871) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1348499953746795654) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9500699937343597412) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0) ) ) {
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.09663000330328941345) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6638600081205368042) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.02378000039607286453) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.244495004415512085) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.6363636363636364;
            result[1] += 0.36363636363636365;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1071449965238571167) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.045454545454545456;
            result[1] += 0.9545454545454546;
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.6452600061893463135) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.6339749991893768311) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.9754950106143951416) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.683935016393661499) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1276500001549720764) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0.6666666666666666;
          } else {
            result[0] += 0.019230769230769232;
            result[1] += 0.9807692307692307;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.5308099985122680664) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5176050066947937012) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7915299832820892334) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.08333333333333333;
            result[1] += 0.9166666666666666;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.1143600046634674072) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02659500017762184143) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.07598000019788742065) ) ) {
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
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.7052400112152099609) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.8372700214385986328) ) ) {
            result[0] += 0.03333333333333333;
            result[1] += 0.9666666666666667;
          } else {
            result[0] += 0.1625;
            result[1] += 0.8375;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.5348850004374980927) ) ) {
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
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.813050001859664917) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01879500038921833038) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.1482399990782141685) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.9320099949836730957) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.0670391061452514;
            result[1] += 0.9329608938547486;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.007985000032931566238) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.3427000045776367188) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.01766500063240528107) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.4777850061655044556) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.4973599910736083984) ) ) {
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
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.2321349978446960449) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.1449500024318695068) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2012799978256225586) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.09638500213623046875) ) ) {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2700150012969970703) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0.6666666666666666;
          } else {
            result[0] += 0.022388059701492536;
            result[1] += 0.9776119402985075;
          }
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.4962150007486343384) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1624599993228912354) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.1770400106906890869) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9166666666666666;
            result[1] += 0.08333333333333333;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5794949978590011597) ) ) {
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
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.8993699848651885986) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.0863149985671043396) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.5612250007688999176) ) ) {
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
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.9106349945068359375) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.03731998801231384277) ) ) {
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
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1892450004816055298) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.1299900002777576447) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.003560000099241733551) ) ) {
            result[0] += 0.14285714285714285;
            result[1] += 0.8571428571428571;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.3876250088214874268) ) ) {
            result[0] += 0.7777777777777778;
            result[1] += 0.2222222222222222;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.1148349978029727936) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.1265949979424476624) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.015625;
            result[1] += 0.984375;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.9024400115013122559) ) ) {
            result[0] += 0.8333333333333334;
            result[1] += 0.16666666666666666;
          } else {
            result[0] += 0.15384615384615385;
            result[1] += 0.8461538461538461;
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
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.0761800035834312439) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7876749932765960693) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.022988505747126436;
            result[1] += 0.9770114942528736;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2719449996948242188) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6824550032615661621) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.0761800035834312439) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2193350046873092651) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.05649717514124294;
            result[1] += 0.943502824858757;
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9994949996471405029) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.983574986457824707) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8980149924755096436) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.03488372093023256;
            result[1] += 0.9651162790697675;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.1843449994921684265) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.7449049949645996094) ) ) {
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.0761800035834312439) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6023550033569335938) ) ) {
            result[0] += 0.7777777777777778;
            result[1] += 0.2222222222222222;
          } else {
            result[0] += 0.06358381502890173;
            result[1] += 0.9364161849710982;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.7965900003910064697) ) ) {
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.9606400132179260254) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5609500110149383545) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9322450160980224609) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.4887599870562553406) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.5880299806594848633) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2037050053477287292) ) ) {
            result[0] += 0.625;
            result[1] += 0.375;
          } else {
            result[0] += 0.05813953488372093;
            result[1] += 0.9418604651162791;
          }
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 30;
  result[1] /= 30;
  
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
