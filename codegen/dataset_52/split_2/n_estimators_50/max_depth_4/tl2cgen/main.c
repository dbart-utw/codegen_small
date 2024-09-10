
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05703499820083379745) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.7270999997854232788) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.2;
          result[1] += 0.8;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.1616050004959106445) ) ) {
          result[0] += 0.03225806451612903;
          result[1] += 0.967741935483871;
        } else {
          result[0] += 0.29411764705882354;
          result[1] += 0.7058823529411765;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1098350025713443756) ) ) {
          result[0] += 0.3076923076923077;
          result[1] += 0.6923076923076923;
        } else {
          result[0] += 0.8571428571428571;
          result[1] += 0.14285714285714285;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1184299997985363007) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.5679849982261657715) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.5347349792718887329) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.004185000216239131987) ) ) {
          result[0] += 0.7142857142857143;
          result[1] += 0.2857142857142857;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.75) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.4515649974346160889) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.2538300007581710815) ) ) {
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03030500002205371857) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9814800024032592773) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.7501900196075439453) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
          result[0] += 0.12413793103448276;
          result[1] += 0.8758620689655172;
        } else {
          result[0] += 0.8;
          result[1] += 0.2;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.454864993691444397) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.3567750006914138794) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.5621200203895568848) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.4777050018310546875) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8106650114059448242) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5636099874973297119) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.9671449959278106689) ) ) {
          result[0] += 0.06547619047619048;
          result[1] += 0.9345238095238095;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.6956750154495239258) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.9534749984741210938) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.07105500251054763794) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4330900013446807861) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.96096000075340271) ) ) {
          result[0] += 0.4;
          result[1] += 0.6;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8989500105381011963) ) ) {
          result[0] += 0.0880503144654088;
          result[1] += 0.9119496855345912;
        } else {
          result[0] += 0.8;
          result[1] += 0.2;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4034350067377090454) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.4640750139951705933) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.6492599993944168091) ) ) {
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.8389199972152709961) ) ) {
          result[0] += 0.0449438202247191;
          result[1] += 0.9550561797752809;
        } else {
          result[0] += 0.8;
          result[1] += 0.2;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5545850098133087158) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
          result[0] += 0.10989010989010989;
          result[1] += 0.8901098901098901;
        } else {
          result[0] += 0.7;
          result[1] += 0.3;
        }
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5545850098133087158) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2318000048398971558) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.005030000116676092148) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.8333333333333334;
          result[1] += 0.16666666666666666;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.4870300143957138062) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.06666666666666667;
          result[1] += 0.9333333333333333;
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.21091499924659729) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.4460799992084503174) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-5.999999848427250981e-05) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.3122600018978118896) ) ) {
          result[0] += 0.5555555555555556;
          result[1] += 0.4444444444444444;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1020400002598762512) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2319900020956993103) ) ) {
          result[0] += 0.7777777777777778;
          result[1] += 0.2222222222222222;
        } else {
          result[0] += 0.023809523809523808;
          result[1] += 0.9761904761904762;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.8550800085067749023) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3185300081968307495) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.08;
          result[1] += 0.92;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.07243000157177448273) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.1110950037837028503) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.0003900000010617077351) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-2.999999924213625491e-05) ) ) {
          result[0] += 0.4166666666666667;
          result[1] += 0.5833333333333334;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.3688199964817613363) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.03158500045537948608) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.045454545454545456;
          result[1] += 0.9545454545454546;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.786119997501373291) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9814800024032592773) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.3568650037050247192) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7903949916362762451) ) ) {
          result[0] += 0.047244094488188976;
          result[1] += 0.952755905511811;
        } else {
          result[0] += 0.35714285714285715;
          result[1] += 0.6428571428571429;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1142599992454051971) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.1885000020265579224) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.1056450009346008301) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.1429050043225288391) ) ) {
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
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8972199857234954834) ) ) {
          result[0] += 0.07262569832402235;
          result[1] += 0.9273743016759777;
        } else {
          result[0] += 0.75;
          result[1] += 0.25;
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2102850005030632019) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1826099976897239685) ) ) {
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
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.8692849874496459961) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7241249978542327881) ) ) {
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
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5397500097751617432) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.7446800023317337036) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.5148949995636940002) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.020833333333333332;
          result[1] += 0.9791666666666666;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.4298199862241744995) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.4568350166082382202) ) ) {
          result[0] += 0.8571428571428571;
          result[1] += 0.14285714285714285;
        } else {
          result[0] += 0.2857142857142857;
          result[1] += 0.7142857142857143;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.9267849922180175781) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.8;
          result[1] += 0.2;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4965550005435943604) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.96096000075340271) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4957500100135803223) ) ) {
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
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7028900086879730225) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.4918750077486038208) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.07982500270009040833) ) ) {
          result[0] += 0.82;
          result[1] += 0.18;
        } else {
          result[0] += 0.16071428571428573;
          result[1] += 0.8392857142857143;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
          result[0] += 0.5714285714285714;
          result[1] += 0.42857142857142855;
        } else {
          result[0] += 0.03333333333333333;
          result[1] += 0.9666666666666667;
        }
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5490350127220153809) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2951499968767166138) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.04615999944508075714) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.1622399985790252686) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        } else {
          result[0] += 0.975;
          result[1] += 0.025;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.01260000001639127731) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.1;
          result[1] += 0.9;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.4998099952936172485) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1333349943161010742) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.04918032786885246;
          result[1] += 0.9508196721311475;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4220199882984161377) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1193349994719028473) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.1321400031447410583) ) ) {
          result[0] += 0.5;
          result[1] += 0.5;
        } else {
          result[0] += 0.9705882352941176;
          result[1] += 0.029411764705882353;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.1376650054007768631) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.1;
          result[1] += 0.9;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.972685009241104126) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8546150028705596924) ) ) {
          result[0] += 0.057971014492753624;
          result[1] += 0.9420289855072463;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.05223999917507171631) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.8069899976253509521) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9352599978446960449) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.8571450114250183105) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1193349994719028473) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.05415000021457672119) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.9071100056171417236) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.4623600095510482788) ) ) {
          result[0] += 0.9523809523809523;
          result[1] += 0.047619047619047616;
        } else {
          result[0] += 0.4375;
          result[1] += 0.5625;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1154799964278936386) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7472899854183197021) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.07913669064748201;
          result[1] += 0.920863309352518;
        }
      }
    }
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.04028999991714954376) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.05845999903976917267) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.05976499989628791809) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.3413049876689910889) ) ) {
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.01420999970287084579) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.4743400067090988159) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.786119997501373291) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.10650887573964497;
          result[1] += 0.893491124260355;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.04615999944508075714) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.4180899858474731445) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1555100008845329285) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.1679400056600570679) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9273549914360046387) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9135449826717376709) ) ) {
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
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7684749960899353027) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4572850018739700317) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.2885200034361332655) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.555429995059967041) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.07058823529411765;
          result[1] += 0.9294117647058824;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.1875) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.102000012993812561) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.9949400126934051514) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.9481050074100494385) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.057803468208092484;
          result[1] += 0.9421965317919075;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.9924199879169464111) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.2378150001168251038) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.45454545454545453;
          result[1] += 0.5454545454545454;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3651600033044815063) ) ) {
          result[0] += 0.3253012048192771;
          result[1] += 0.6746987951807228;
        } else {
          result[0] += 0.05405405405405406;
          result[1] += 0.9459459459459459;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.6445949971675872803) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.3044000118970870972) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2011200040578842163) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.6984750032424926758) ) ) {
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
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1570199988782405853) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1206900030374526978) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.09467455621301775;
          result[1] += 0.9053254437869822;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.573215000331401825) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.1875) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.04028999991714954376) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.07190000265836715698) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.1647849958389997482) ) ) {
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
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.9280549883842468262) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.3782449960708618164) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.3405099958181381226) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.0670391061452514;
          result[1] += 0.9329608938547486;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1351950019598007202) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.002099999983329325914) ) ) {
          result[0] += 0.13043478260869565;
          result[1] += 0.8695652173913043;
        } else {
          result[0] += 0.6538461538461539;
          result[1] += 0.34615384615384615;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.5774149894714355469) ) ) {
          result[0] += 0.09090909090909091;
          result[1] += 0.9090909090909091;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.900494992733001709) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.4077149853110313416) ) ) {
          result[0] += 0.3076923076923077;
          result[1] += 0.6923076923076923;
        } else {
          result[0] += 0.8571428571428571;
          result[1] += 0.14285714285714285;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0002000000094994902611) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.4918949902057647705) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.001494999974966049194) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1206900030374526978) ) ) {
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.5904999971389770508) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.5157150104641914368) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.08125499635934829712) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.6988749802112579346) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.2851599939167499542) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
          result[0] += 0.04964539007092199;
          result[1] += 0.950354609929078;
        } else {
          result[0] += 0.5909090909090909;
          result[1] += 0.4090909090909091;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.03839499969035387039) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.4131650030612945557) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.001494999974966049194) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-5.999999848427250981e-05) ) ) {
          result[0] += 0.4444444444444444;
          result[1] += 0.5555555555555556;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.1113200001418590546) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9093799889087677002) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.4084399938583374023) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6642700135707855225) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.3805600106716156006) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2902249991893768311) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.6742399930953979492) ) ) {
          result[0] += 0.034482758620689655;
          result[1] += 0.9655172413793104;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.460919991135597229) ) ) {
          result[0] += 0.10714285714285714;
          result[1] += 0.8928571428571429;
        } else {
          result[0] += 0.75;
          result[1] += 0.25;
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1351950019598007202) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.2365700006484985352) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2645850032567977905) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.231155000627040863) ) ) {
          result[0] += 0.16666666666666666;
          result[1] += 0.8333333333333334;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3563150092959403992) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.2258650064468383789) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.9557150006294250488) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7596499919891357422) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.10416666666666667;
          result[1] += 0.8958333333333334;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.6005900055170059204) ) ) {
          result[0] += 0.5;
          result[1] += 0.5;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.0914500020444393158) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.3148950040340423584) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.1256199926137924194) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.07190000265836715698) ) ) {
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
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.8071799874305725098) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.9684099853038787842) ) ) {
          result[0] += 0.12154696132596685;
          result[1] += 0.8784530386740331;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.005164999980479478836) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.05560999922454357147) ) ) {
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.3327600061893463135) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.01709000045957509428) ) ) {
          result[0] += 0.10344827586206896;
          result[1] += 0.896551724137931;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5322400182485580444) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9352599978446960449) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.8548799753189086914) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9429549872875213623) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.6742250025272369385) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.9454649984836578369) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.1048951048951049;
          result[1] += 0.8951048951048951;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1335700005292892456) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1097000017762184143) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.5258999913930892944) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7155349999666213989) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9072249829769134521) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.05555555555555555;
          result[1] += 0.9444444444444444;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.9924199879169464111) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.8433550000190734863) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.6328549981117248535) ) ) {
          result[0] += 0.7142857142857143;
          result[1] += 0.2857142857142857;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1256750002503395081) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.03588999994099140167) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.1999650001525878906) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.2600099965929985046) ) ) {
          result[0] += 0.5;
          result[1] += 0.5;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5370100140571594238) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.8036699891090393066) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.06666666666666667;
          result[1] += 0.9333333333333333;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.8589400053024291992) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.3478849977254867554) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.7358649969100952148) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.8927749991416931152) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.07096999883651733398) ) ) {
          result[0] += 0.07692307692307693;
          result[1] += 0.9230769230769231;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        }
      }
    }
  }
  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.9157600104808807373) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2248550057411193848) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.05899999942630529404) ) ) {
          result[0] += 0.6;
          result[1] += 0.4;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6642700135707855225) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.12299465240641712;
          result[1] += 0.8770053475935828;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.9165700078010559082) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2891950011253356934) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7468699812889099121) ) ) {
          result[0] += 0.8571428571428571;
          result[1] += 0.14285714285714285;
        } else {
          result[0] += 0.1702127659574468;
          result[1] += 0.8297872340425532;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.2194000035524368286) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.03773584905660377;
          result[1] += 0.9622641509433962;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7287800014019012451) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.6742250025272369385) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.1428550034761428833) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.05555555555555555;
          result[1] += 0.9444444444444444;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0002000000094994902611) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.3912100046873092651) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.05564500018954277039) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2167199999094009399) ) ) {
          result[0] += 0.9285714285714286;
          result[1] += 0.07142857142857142;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.08125499635934829712) ) ) {
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
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5370100140571594238) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3406600020825862885) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.7465550005435943604) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.89342498779296875) ) ) {
          result[0] += 0.08759124087591241;
          result[1] += 0.9124087591240876;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4454549998044967651) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.198720000684261322) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.2843600064516067505) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.8571428571428571;
          result[1] += 0.14285714285714285;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.76604500412940979) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.5729900002479553223) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.9427549839019775391) ) ) {
          result[0] += 0.07092198581560284;
          result[1] += 0.9290780141843972;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.8599999845027923584) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.8731400072574615479) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.5) ) ) {
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.6354350000619888306) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2192699983716011047) ) ) {
          result[0] += 0.875;
          result[1] += 0.125;
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.05325499922037124634) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7366849929094314575) ) ) {
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
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6642700135707855225) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.3178349956870079041) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1331450045108795166) ) ) {
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.875) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.8571428571428571;
          result[1] += 0.14285714285714285;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.08125;
          result[1] += 0.91875;
        }
      }
    }
  }
  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.005659999791532754898) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.6306799948215484619) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.1914599984884262085) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.051490001380443573) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.8666666666666667;
          result[1] += 0.13333333333333333;
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
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.9481050074100494385) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.10204081632653061;
          result[1] += 0.8979591836734694;
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3717949949204921722) ) ) {
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
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9820699989795684814) ) ) {
          result[0] += 0.04838709677419355;
          result[1] += 0.9516129032258065;
        } else {
          result[0] += 0.7692307692307693;
          result[1] += 0.23076923076923078;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7950850129127502441) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8646399974822998047) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9135449826717376709) ) ) {
          result[0] += 0.8333333333333334;
          result[1] += 0.16666666666666666;
        } else {
          result[0] += 0.09142857142857143;
          result[1] += 0.9085714285714286;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.1875) ) ) {
          result[0] += 0;
          result[1] += 1;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1097000017762184143) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.3410199880599975586) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.2396450042724609375) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5370100140571594238) ) ) {
          result[0] += 0.75;
          result[1] += 0.25;
        } else {
          result[0] += 0.04375;
          result[1] += 0.95625;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.6782800108194351196) ) ) {
          result[0] += 0.47619047619047616;
          result[1] += 0.5238095238095238;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02312999917194247246) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.8250899910926818848) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.9454649984836578369) ) ) {
          result[0] += 0.6;
          result[1] += 0.4;
        } else {
          result[0] += 0.0872093023255814;
          result[1] += 0.9127906976744186;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.4796450119465589523) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03030500002205371857) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.04039999842643737793) ) ) {
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
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4330900013446807861) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5545850098133087158) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.6355749964714050293) ) ) {
          result[0] += 0.18840579710144928;
          result[1] += 0.8115942028985508;
        } else {
          result[0] += 0.02654867256637168;
          result[1] += 0.9734513274336283;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1524649970233440399) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.4494749903678894043) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.004185000216239131987) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.1131699983961880207) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.2583149969577789307) ) ) {
          result[0] += 0.9090909090909091;
          result[1] += 0.09090909090909091;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1826099976897239685) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.4298999980092048645) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.09732999652624130249) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.9763750135898590088) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.89342498779296875) ) ) {
          result[0] += 0.08064516129032258;
          result[1] += 0.9193548387096774;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.04637500643730163574) ) ) {
          result[0] += 0;
          result[1] += 1;
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
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5370100140571594238) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.8805600106716156006) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.3691499978303909302) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7903949916362762451) ) ) {
          result[0] += 0.0782122905027933;
          result[1] += 0.9217877094972067;
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
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.001139999949373304844) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3005050122737884521) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.6929450035095214844) ) ) {
          result[0] += 0.9333333333333333;
          result[1] += 0.06666666666666667;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.06966999918222427368) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.05263157894736842;
          result[1] += 0.9473684210526315;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.9427549839019775391) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1723499968647956848) ) ) {
          result[0] += 0.013888888888888888;
          result[1] += 0.9861111111111112;
        } else {
          result[0] += 0.20833333333333334;
          result[1] += 0.7916666666666666;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.5895849987864494324) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.6328549981117248535) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.23529411764705882;
          result[1] += 0.7647058823529411;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2013400010764598846) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1259550005197525024) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7344049811363220215) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.8847500085830688477) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.07738095238095238;
          result[1] += 0.9226190476190477;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.7692300081253051758) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.1428550034761428833) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.9598099887371063232) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.7576749920845031738) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.03689999878406524658) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5370100140571594238) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.6824399828910827637) ) ) {
          result[0] += 0.07777777777777778;
          result[1] += 0.9222222222222223;
        } else {
          result[0] += 0.8888888888888888;
          result[1] += 0.1111111111111111;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.9423100054264068604) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.2;
          result[1] += 0.8;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.149645000696182251) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.04597701149425287;
          result[1] += 0.9540229885057471;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.05882500112056732178) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.04778499901294708252) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.875;
          result[1] += 0.125;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.5414949990808963776) ) ) {
          result[0] += 0;
          result[1] += 1;
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.8250899910926818848) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6642700135707855225) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9072249829769134521) ) ) {
          result[0] += 0.8;
          result[1] += 0.2;
        } else {
          result[0] += 0.07222222222222222;
          result[1] += 0.9277777777777778;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.4218799993395805359) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.297214999794960022) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.1068050041794776917) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2109400033950805664) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.9655449986457824707) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
          result[0] += 0.7857142857142857;
          result[1] += 0.21428571428571427;
        } else {
          result[0] += 0.0783132530120482;
          result[1] += 0.9216867469879518;
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
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8646399974822998047) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1659950017929077148) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1574749946594238281) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.003560000099241733551) ) ) {
          result[0] += 0.7857142857142857;
          result[1] += 0.21428571428571427;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.03053499944508075714) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.05714285714285714;
          result[1] += 0.9428571428571428;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.732675015926361084) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6549850106239318848) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.07575757575757576;
          result[1] += 0.9242424242424242;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.01459500007331371307) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.125) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.1527649983763694763) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.279420001432299614) ) ) {
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.09289617486338798;
          result[1] += 0.907103825136612;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.2943699955940246582) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.9206700026988983154) ) ) {
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
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.3444900065660476685) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.6622850000858306885) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7319049984216690063) ) ) {
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2586600035429000854) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5415849983692169189) ) ) {
          result[0] += 0.7555555555555555;
          result[1] += 0.24444444444444444;
        } else {
          result[0] += 0.03125;
          result[1] += 0.96875;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.8980399966239929199) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.1044776119402985;
          result[1] += 0.8955223880597015;
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
