
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
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.1452600061893463135) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.06505999714136123657) ) ) {
          result[0] += 0.08695652173913043;
          result[1] += 0.9130434782608695;
        } else {
          result[0] += 0.7;
          result[1] += 0.3;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2767900079488754272) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.07692307692307693;
          result[1] += 0.9230769230769231;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.04545500129461288452) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.2211100012063980103) ) ) {
          result[0] += 0.8571428571428571;
          result[1] += 0.14285714285714285;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.7272749990224838257) ) ) {
          result[0] += 0.25;
          result[1] += 0.75;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05703499820083379745) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.6542799770832061768) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.999664992094039917) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9832650125026702881) ) ) {
          result[0] += 0.02040816326530612;
          result[1] += 0.9795918367346939;
        } else {
          result[0] += 0.8;
          result[1] += 0.2;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.3938250169157981873) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.38095238095238093;
          result[1] += 0.6190476190476191;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8641549944877624512) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.333334997296333313) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.111110001802444458) ) ) {
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
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.3321299999952316284) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.5979099869728088379) ) ) {
          result[0] += 0.6;
          result[1] += 0.4;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
          result[0] += 0.04516129032258064;
          result[1] += 0.9548387096774194;
        } else {
          result[0] += 0.6086956521739131;
          result[1] += 0.391304347826087;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.05869499966502189636) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3694349974393844604) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.09893999993801116943) ) ) {
          result[0] += 0.75;
          result[1] += 0.25;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9643700122833251953) ) ) {
          result[0] += 0.05555555555555555;
          result[1] += 0.9444444444444444;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.3059100061655044556) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.3661150038242340088) ) ) {
          result[0] += 0.07692307692307693;
          result[1] += 0.9230769230769231;
        } else {
          result[0] += 0.6842105263157895;
          result[1] += 0.3157894736842105;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9566900134086608887) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.06363636363636363;
          result[1] += 0.9363636363636364;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.08440000005066394806) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.3258900046348571777) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.1724349930882453918) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.009200000204145908356) ) ) {
          result[0] += 0.25;
          result[1] += 0.75;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.02054998278617858887) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.969765007495880127) ) ) {
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8980149924755096436) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9891000092029571533) ) ) {
          result[0] += 0.08108108108108109;
          result[1] += 0.918918918918919;
        } else {
          result[0] += 0.8;
          result[1] += 0.2;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2816650047898292542) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.009580000303685665131) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.06098499894142150879) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.2787000052630901337) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.2969399988651275635) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6079050004482269287) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.6170649826526641846) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.9849300086498260498) ) ) {
          result[0] += 0.5;
          result[1] += 0.5;
        } else {
          result[0] += 0.03424657534246575;
          result[1] += 0.9657534246575342;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.288789995014667511) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9566900134086608887) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.42857142857142855;
          result[1] += 0.5714285714285714;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1705899983644485474) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.0811650007963180542) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.403624996542930603) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.4166666666666667;
          result[1] += 0.5833333333333334;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.4805999994277954102) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2131100036203861237) ) ) {
          result[0] += 0.9347826086956522;
          result[1] += 0.06521739130434782;
        } else {
          result[0] += 0.16666666666666666;
          result[1] += 0.8333333333333334;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.3629100024700164795) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.6834149956703186035) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9826149940490722656) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.4191599935293197632) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.05555555555555555;
          result[1] += 0.9444444444444444;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.2122249975800514221) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.35714285714285715;
          result[1] += 0.6428571428571429;
        }
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
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1729250028729438782) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4322199970483779907) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.8836749792098999023) ) ) {
          result[0] += 0.8571428571428571;
          result[1] += 0.14285714285714285;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.610224992036819458) ) ) {
          result[0] += 0.22580645161290322;
          result[1] += 0.7741935483870968;
        } else {
          result[0] += 0.8;
          result[1] += 0.2;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.9991399943828582764) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.07707499712705612183) ) ) {
          result[0] += 0.3;
          result[1] += 0.7;
        } else {
          result[0] += 0.020833333333333332;
          result[1] += 0.9791666666666666;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.7196249961853027344) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.25;
          result[1] += 0.75;
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2152049988508224487) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7250399887561798096) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.001455000019632279873) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.008404999971389770508) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.36363636363636365;
          result[1] += 0.6363636363636364;
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
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.9295000135898590088) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.3880199939012527466) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.8211749792098999023) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.8606350123882293701) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.7998099923133850098) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.938935011625289917) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.03787878787878788;
          result[1] += 0.9621212121212122;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.2623949944972991943) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1193349994719028473) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4322199970483779907) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.7718449831008911133) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1037300005555152893) ) ) {
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
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.8253949880599975586) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.06802721088435375;
          result[1] += 0.9319727891156463;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.969765007495880127) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1408099979162216187) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.3880199939012527466) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1457700058817863464) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.9573650062084197998) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.07106598984771574;
          result[1] += 0.9289340101522843;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.05486999824643135071) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.2497249990701675415) ) ) {
          result[0] += 0.6;
          result[1] += 0.4;
        } else {
          result[0] += 0.9615384615384616;
          result[1] += 0.038461538461538464;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.0761800035834312439) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.12804878048780488;
          result[1] += 0.8719512195121951;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.969765007495880127) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.1660399958491325378) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.1636100001633167267) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.09160500019788742065) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.6618850231170654297) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1085200011730194092) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.16666666666666666;
          result[1] += 0.8333333333333334;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1570199988782405853) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.10975609756097561;
          result[1] += 0.8902439024390244;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.08616000041365623474) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2879649996757507324) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.04756499826908111572) ) ) {
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
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.6174499988555908203) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3637199997901916504) ) ) {
          result[0] += 0.2619047619047619;
          result[1] += 0.7380952380952381;
        } else {
          result[0] += 0.02654867256637168;
          result[1] += 0.9734513274336283;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.9239149987697601318) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.45454545454545453;
          result[1] += 0.5454545454545454;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.5799999982118606567) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.07105500251054763794) ) ) {
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
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1384000033140182495) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1181800030171871185) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.2670000046491622925) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.02468999847769737244) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.4;
          result[1] += 0.6;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.4652249962091445923) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.01882999949157238007) ) ) {
          result[0] += 0.4;
          result[1] += 0.6;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
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
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9970000088214874268) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.01370999962091445923) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.9538150131702423096) ) ) {
          result[0] += 0.031007751937984496;
          result[1] += 0.9689922480620154;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.3459299951791763306) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.562160000205039978) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.19047619047619047;
          result[1] += 0.8095238095238095;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.1945800036191940308) ) ) {
          result[0] += 0.75;
          result[1] += 0.25;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0001250000059371814132) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1181800030171871185) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.4113650023937225342) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.262904999777674675) ) ) {
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
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.3791649937629699707) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.4901949996128678322) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.04;
          result[1] += 0.96;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1543300002813339233) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.6834149956703186035) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5119050145149230957) ) ) {
          result[0] += 0.025974025974025976;
          result[1] += 0.974025974025974;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9263400137424468994) ) ) {
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
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.0001350000020465813577) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5415849983692169189) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.1482399990782141685) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.875;
          result[1] += 0.125;
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.01766500063240528107) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.02204000018537044525) ) ) {
          result[0] += 0.9230769230769231;
          result[1] += 0.07692307692307693;
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
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8646399974822998047) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9584149718284606934) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.04958000034093856812) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.024193548387096774;
          result[1] += 0.9758064516129032;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.007825000211596488953) ) ) {
          result[0] += 0.25;
          result[1] += 0.75;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.7133549749851226807) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.1974750012159347534) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.07860999926924705505) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5415849983692169189) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.0966800004243850708) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.003009999891219194978) ) ) {
          result[0] += 0.8888888888888888;
          result[1] += 0.1111111111111111;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.02862500026822090149) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.03891000151634216309) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.3953550010919570923) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.5666999965906143188) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.4599049985408782959) ) ) {
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
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.9715749919414520264) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2389599978923797607) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.050724637681159424;
          result[1] += 0.9492753623188406;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.08015500009059906006) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6283050179481506348) ) ) {
          result[0] += 0.8333333333333334;
          result[1] += 0.16666666666666666;
        } else {
          result[0] += 0.05521472392638037;
          result[1] += 0.9447852760736196;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1705899983644485474) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1133700013160705566) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9643700122833251953) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.5913949906826019287) ) ) {
          result[0] += 0.4444444444444444;
          result[1] += 0.5555555555555556;
        } else {
          result[0] += 0.037037037037037035;
          result[1] += 0.9629629629629629;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.7196249961853027344) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.07344999909400939941) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.3407450020313262939) ) ) {
          result[0] += 0.5714285714285714;
          result[1] += 0.42857142857142855;
        } else {
          result[0] += 0.031496062992125984;
          result[1] += 0.968503937007874;
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 20;
  result[1] /= 20;
  
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
