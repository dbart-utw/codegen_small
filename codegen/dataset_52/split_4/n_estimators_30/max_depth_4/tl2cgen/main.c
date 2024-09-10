
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9814800024032592773) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.6793199777603149414) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.8854599893093109131) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7558549940586090088) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.9538150131702423096) ) ) {
          result[0] += 0.11917098445595854;
          result[1] += 0.8808290155440415;
        } else {
          result[0] += 0.8333333333333334;
          result[1] += 0.16666666666666666;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.01020500017330050468) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.04340999945998191833) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.8784950077533721924) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.4155749976634979248) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.3419249951839447021) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1295600049197673798) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.03125;
          result[1] += 0.96875;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.1748949997127056122) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.6;
          result[1] += 0.4;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.205454997718334198) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9814800024032592773) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.6267900168895721436) ) ) {
          result[0] += 0.07518796992481203;
          result[1] += 0.924812030075188;
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
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9835450053215026855) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4284099936485290527) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.369365006685256958) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.006680000107735395432) ) ) {
          result[0] += 0.20689655172413793;
          result[1] += 0.7931034482758621;
        } else {
          result[0] += 0.007692307692307693;
          result[1] += 0.9923076923076923;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.1586499959230422974) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.1007649973034858704) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.8181818181818182;
          result[1] += 0.18181818181818182;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0002000000094994902611) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.06735000014305114746) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.2517250021919608116) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.8117850124835968018) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.8566050231456756592) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.8;
          result[1] += 0.2;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.3295300006866455078) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.6355749964714050293) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8459349870681762695) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.07920500077307224274) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.01882999949157238007) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.125) ) ) {
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.205454997718334198) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.1369650028645992279) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.6;
          result[1] += 0.4;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.06015037593984962;
          result[1] += 0.9398496240601504;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1384000033140182495) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.8770299851894378662) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.01812000013887882233) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.02311499975621700287) ) ) {
          result[0] += 0.043478260869565216;
          result[1] += 0.9565217391304348;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.9987249970436096191) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5254649966955184937) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.777779996395111084) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.0425531914893617;
          result[1] += 0.9574468085106383;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.2770249992609024048) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.2623949944972991943) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.47058823529411764;
          result[1] += 0.5294117647058824;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.08440000005066394806) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.2880799919366836548) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.9118300080299377441) ) ) {
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
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.3759500086307525635) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.3536449968814849854) ) ) {
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.04428999871015548706) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9984749853610992432) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9909499883651733398) ) ) {
          result[0] += 0.028846153846153848;
          result[1] += 0.9711538461538461;
        } else {
          result[0] += 0.35294117647058826;
          result[1] += 0.6470588235294118;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.3872949928045272827) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.34782608695652173;
          result[1] += 0.6521739130434783;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.05691500008106231689) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.2225100100040435791) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.3891199976205825806) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.07190000265836715698) ) ) {
          result[0] += 0.4;
          result[1] += 0.6;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1216150000691413879) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6698200106620788574) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.8744800090789794922) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.5133700072765350342) ) ) {
          result[0] += 0;
          result[1] += 1;
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
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2295399978756904602) ) ) {
          result[0] += 0.072992700729927;
          result[1] += 0.927007299270073;
        } else {
          result[0] += 0.46153846153846156;
          result[1] += 0.5384615384615384;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5370100140571594238) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4435849934816360474) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.187330000102519989) ) ) {
          result[0] += 0.9230769230769231;
          result[1] += 0.07692307692307693;
        } else {
          result[0] += 0.125;
          result[1] += 0.875;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.8847500085830688477) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.06962025316455696;
          result[1] += 0.930379746835443;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9481199979782104492) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.07762999832630157471) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.583334997296333313) ) ) {
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.6870099902153015137) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.6363649964332580566) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.13333333333333333;
          result[1] += 0.8666666666666667;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.3775550127029418945) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.09583000093698501587) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.3759500086307525635) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.277779996395111084) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.01016999967396259308) ) ) {
          result[0] += 0.8888888888888888;
          result[1] += 0.1111111111111111;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.231155000627040863) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.217395000159740448) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.404809996485710144) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8646399974822998047) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6285450160503387451) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2800699956715106964) ) ) {
          result[0] += 0.5714285714285714;
          result[1] += 0.42857142857142855;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.7593699991703033447) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.047619047619047616;
          result[1] += 0.9523809523809523;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.06134499981999397278) ) ) {
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
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5545850098133087158) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1359499990940093994) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.0001350000020465813577) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2319900020956993103) ) ) {
          result[0] += 0.9090909090909091;
          result[1] += 0.09090909090909091;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.2236100062727928162) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.7692307692307693;
          result[1] += 0.23076923076923078;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2579549998044967651) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.056910569105691054;
          result[1] += 0.943089430894309;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.8774850070476531982) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.4375;
          result[1] += 0.5625;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2522249966859817505) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1304000020027160645) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.6984750032424926758) ) ) {
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
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.9454649984836578369) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.0450949985533952713) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.01501999981701374054) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.43243243243243246;
          result[1] += 0.5675675675675675;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.9118300080299377441) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        } else {
          result[0] += 0.022058823529411766;
          result[1] += 0.9779411764705882;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2880550026893615723) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.225949995219707489) ) ) {
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
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6283050179481506348) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.7909100055694580078) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.9396849870681762695) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.9060499966144561768) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8000250160694122314) ) ) {
          result[0] += 0.08771929824561403;
          result[1] += 0.9122807017543859;
        } else {
          result[0] += 0.7272727272727273;
          result[1] += 0.2727272727272727;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.05486999824643135071) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.08324500173330307007) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3795849978923797607) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9605999886989593506) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.548735007643699646) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.5588250011205673218) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9469150006771087646) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9447599947452545166) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.11920529801324503;
          result[1] += 0.8807947019867549;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.5688250064849853516) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.6208399981260299683) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.4138849973678588867) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.8;
          result[1] += 0.2;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.144859999418258667) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1826099976897239685) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.8127699792385101318) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.004080000217072665691) ) ) {
          result[0] += 0.8571428571428571;
          result[1] += 0.14285714285714285;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.05204500071704387665) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.3967550098896026611) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.7399649918079376221) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.6911749839782714844) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.09465999901294708252) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.024793388429752067;
          result[1] += 0.9752066115702479;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9293499886989593506) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.7919400036334991455) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.09090909090909091;
          result[1] += 0.9090909090909091;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.103754999116063118) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.4918949902057647705) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.0909299999475479126) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.3790700137615203857) ) ) {
          result[0] += 0.16666666666666666;
          result[1] += 0.8333333333333334;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.1932899951934814453) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.9166666666666666;
          result[1] += 0.08333333333333333;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.1192300021648406982) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.9538150131702423096) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.6344799995422363281) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.524939998984336853) ) ) {
          result[0] += 0.9;
          result[1] += 0.1;
        } else {
          result[0] += 0.08391608391608392;
          result[1] += 0.916083916083916;
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
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.07860999926924705505) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1295600049197673798) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.9472700059413909912) ) ) {
        result[0] += 1;
        result[1] += 0;
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
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.03053499944508075714) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.4891800135374069214) ) ) {
          result[0] += 0.05442176870748299;
          result[1] += 0.9455782312925171;
        } else {
          result[0] += 0.75;
          result[1] += 0.25;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1256750002503395081) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1008300036191940308) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.2143850028514862061) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.04756499826908111572) ) ) {
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.231155000627040863) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.5666799992322921753) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.03494999930262565613) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.671875) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.8139149844646453857) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.8243899941444396973) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.4891800135374069214) ) ) {
          result[0] += 0.08029197080291971;
          result[1] += 0.9197080291970803;
        } else {
          result[0] += 0.875;
          result[1] += 0.125;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.04428999871015548706) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.05324000050313770771) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2052299976348876953) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.04667999967932701111) ) ) {
          result[0] += 0.8333333333333334;
          result[1] += 0.16666666666666666;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.7871749997138977051) ) ) {
          result[0] += 0.08045977011494253;
          result[1] += 0.9195402298850575;
        } else {
          result[0] += 0.6923076923076923;
          result[1] += 0.3076923076923077;
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1664250046014785767) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1164649985730648041) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.3044000118970870972) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.07109999656677246094) ) ) {
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
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.877369999885559082) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9407849907875061035) ) ) {
          result[0] += 0.08571428571428572;
          result[1] += 0.9142857142857143;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.9434149861335754395) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.6;
          result[1] += 0.4;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9952850043773651123) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.4689349997788667679) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.7814100086688995361) ) ) {
          result[0] += 0.04065040650406504;
          result[1] += 0.959349593495935;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.09733000025153160095) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.2536100000143051147) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.25;
          result[1] += 0.75;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.05427499860525131226) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.07506499998271465302) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4768800139427185059) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.207145005464553833) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.859375) ) ) {
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
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.9606400132179260254) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9088949859142303467) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.09523809523809523;
          result[1] += 0.9047619047619048;
        }
      }
    }
  }
  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.186569996178150177) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3866399973630905151) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.09663000330328941345) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.4022150114178657532) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2319900020956993103) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.8273049890995025635) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7686800062656402588) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.07374999672174453735) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.06766917293233082;
          result[1] += 0.9323308270676691;
        }
      }
    }
  }
  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.001844999962486326694) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.08204999938607215881) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.4086250066757202148) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.09053500182926654816) ) ) {
          result[0] += 0.6;
          result[1] += 0.4;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.5247249901294708252) ) ) {
          result[0] += 0.08;
          result[1] += 0.92;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.9754950106143951416) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8280600011348724365) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.9679799973964691162) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.06837606837606838;
          result[1] += 0.9316239316239316;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.07016999833285808563) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1815550029277801514) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.8597099781036376953) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.06666666666666667;
          result[1] += 0.9333333333333333;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8431349992752075195) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7745099961757659912) ) ) {
          result[0] += 0.06756756756756757;
          result[1] += 0.9324324324324325;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.07206000015139579773) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.0281399991363286972) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.0761800035834312439) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8989500105381011963) ) ) {
          result[0] += 0.12195121951219512;
          result[1] += 0.8780487804878049;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.4193350076675415039) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.8492049872875213623) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.8927350044250488281) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.4005350023508071899) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.03506999975070357323) ) ) {
          result[0] += 0.8888888888888888;
          result[1] += 0.1111111111111111;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.6038849949836730957) ) ) {
          result[0] += 0.04032258064516129;
          result[1] += 0.9596774193548387;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        }
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.555429995059967041) ) ) {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.517364993691444397) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.0552400052547454834) ) ) {
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
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.9754950106143951416) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1256750002503395081) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.18181818181818182;
          result[1] += 0.8181818181818182;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.2930749952793121338) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.10666666666666667;
          result[1] += 0.8933333333333333;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4149949997663497925) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.02830000035464763641) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.152225002646446228) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.7169799953699111938) ) ) {
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1684800013899803162) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.04428999871015548706) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8323700129985809326) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.05454545454545454;
          result[1] += 0.9454545454545454;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.9606400132179260254) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.6174499988555908203) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6134250164031982422) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.06077348066298342;
          result[1] += 0.9392265193370166;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.7827050089836120605) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.75;
          result[1] += 0.25;
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1892450004816055298) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.008630000054836273193) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.8346599936485290527) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.55;
          result[1] += 0.45;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4149949997663497925) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.7196249961853027344) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.8097299933433532715) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.6614950001239776611) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.9322049915790557861) ) ) {
          result[0] += 0.22916666666666666;
          result[1] += 0.7708333333333334;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7009149789810180664) ) ) {
          result[0] += 0.012048192771084338;
          result[1] += 0.9879518072289156;
        } else {
          result[0] += 0.42857142857142855;
          result[1] += 0.5714285714285714;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.2387450039386749268) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7752499878406524658) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.388889998197555542) ) ) {
          result[0] += 0.3409090909090909;
          result[1] += 0.6590909090909091;
        } else {
          result[0] += 0.06040268456375839;
          result[1] += 0.9395973154362416;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.0914500020444393158) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.5873550176620483398) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.01973999978508800268) ) ) {
          result[0] += 0.5;
          result[1] += 0.5;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.333334997296333313) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9891000092029571533) ) ) {
          result[0] += 0.09027777777777778;
          result[1] += 0.9097222222222222;
        } else {
          result[0] += 0.8;
          result[1] += 0.2;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.19842500239610672) ) ) {
          result[0] += 0.5;
          result[1] += 0.5;
        } else {
          result[0] += 1;
          result[1] += 0;
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
