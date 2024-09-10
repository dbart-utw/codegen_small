
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
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b40000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0.21212121212121215;
          result[1] += 0;
          result[2] += 0.09090909090909093;
          result[3] += 0.686868686868687;
          result[4] += 0;
          result[5] += 0.010101010101010104;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.4671916010498688;
          result[1] += 0;
          result[2] += 0.026246719160104987;
          result[3] += 0.5065616797900262;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
          result[0] += 0.574438202247191;
          result[1] += 0;
          result[2] += 0.004213483146067416;
          result[3] += 0.4002808988764045;
          result[4] += 0.016853932584269662;
          result[5] += 0.0014044943820224719;
          result[6] += 0.0028089887640449437;
        } else {
          result[0] += 0.6754308047610588;
          result[1] += 0;
          result[2] += 0.004441286196482501;
          result[3] += 0.29987564398649846;
          result[4] += 0.019896962160241605;
          result[5] += 0;
          result[6] += 0.0003553028957186001;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42df0000))) ) ) {
          result[0] += 0.12860892388451448;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6325459317585302;
          result[4] += 0.23884514435695542;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.011450381679389313;
          result[1] += 0.03435114503816794;
          result[2] += 0;
          result[3] += 0.17557251908396945;
          result[4] += 0.7786259541984732;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.00199203187250996;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9588313413014609;
          result[4] += 0.03718459495351926;
          result[5] += 0.00199203187250996;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6607142857142857;
          result[1] += 0.017857142857142856;
          result[2] += 0.2857142857142857;
          result[3] += 0.017857142857142856;
          result[4] += 0;
          result[5] += 0.017857142857142856;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42380000))) ) ) {
          result[0] += 0;
          result[1] += 0.0020833333333333333;
          result[2] += 0.00625;
          result[3] += 0.9916666666666667;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0.9944948006450537;
          result[1] += 0.001557026080186843;
          result[2] += 0.002669187566034588;
          result[3] += 0.0009453372629705833;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003336484457543235;
        } else {
          result[0] += 0.6992599590615651;
          result[1] += 0;
          result[2] += 0.003464021413950559;
          result[3] += 0.2971185640056684;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001574555188159345;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0.9978165938864629;
          result[1] += 0;
          result[2] += 0.002183406113537118;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.00625;
          result[1] += 0.003977272727272727;
          result[2] += 0.00909090909090909;
          result[3] += 0.9801136363636364;
          result[4] += 0;
          result[5] += 0.0005681818181818182;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.5891089108910891;
          result[1] += 0;
          result[2] += 0.003808073115003808;
          result[3] += 0.40632140137090633;
          result[4] += 0;
          result[5] += 0.0003808073115003808;
          result[6] += 0.0003808073115003808;
        } else {
          result[0] += 0.9789603960396039;
          result[1] += 0;
          result[2] += 0.008663366336633664;
          result[3] += 0.008663366336633664;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0037128712871287127;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
          result[0] += 0.18340611353711792;
          result[1] += 0.0054585152838427945;
          result[2] += 0;
          result[3] += 0.8078602620087336;
          result[4] += 0.0032751091703056767;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5020576131687243;
          result[1] += 0;
          result[2] += 0.03017832647462277;
          result[3] += 0.46776406035665297;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41500000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9991204441756912;
          result[1] += 0;
          result[2] += 0.0007696113462701336;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010994447803859051;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0.5087660148347943;
          result[1] += 0.0070802427511800405;
          result[2] += 0.012137559002022926;
          result[3] += 0.3735670937289278;
          result[4] += 0.0964261631827377;
          result[5] += 0.0006743088334457181;
          result[6] += 0.0013486176668914363;
        } else {
          result[0] += 0.6023630504833513;
          result[1] += 0;
          result[2] += 0.0017185821697099893;
          result[3] += 0.3319011815252417;
          result[4] += 0.0640171858216971;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9921568627450981;
          result[1] += 0;
          result[2] += 0.00784313725490196;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9993220338983051;
          result[1] += 0;
          result[2] += 0.0006779661016949153;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9961439588688946;
          result[1] += 0;
          result[2] += 0.0038560411311053984;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0.15615615615615616;
          result[1] += 0.02702702702702703;
          result[2] += 0.04804804804804805;
          result[3] += 0.7687687687687688;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.008762612851832182;
          result[1] += 0.007700477960701009;
          result[2] += 0.011152416356877323;
          result[3] += 0.971853425385024;
          result[4] += 0;
          result[5] += 0.0005310674455655868;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0.8459821428571427;
          result[1] += 0;
          result[2] += 0.006696428571428569;
          result[3] += 0.14285714285714282;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.004464285714285713;
        } else {
          result[0] += 0.9880858863576854;
          result[1] += 0;
          result[2] += 0.0064152919612464;
          result[3] += 0.004058654097931397;
          result[4] += 0;
          result[5] += 0.00013092432573972248;
          result[6] += 0.0013092432573972247;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40900000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0026845637583892616;
          result[3] += 0.9973154362416108;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x4467a000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41700000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9954954954954955;
          result[5] += 0.0045045045045045045;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.00031776294884016526;
          result[2] += 0;
          result[3] += 0.9990467111534795;
          result[4] += 0;
          result[5] += 0.0006355258976803305;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.004990925589836661;
          result[2] += 0.004537205081669692;
          result[3] += 0;
          result[4] += 0.9895644283121597;
          result[5] += 0.0009074410163339383;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9964695498676082;
          result[1] += 0.000441306266548985;
          result[2] += 0.00264783759929391;
          result[3] += 0.000441306266548985;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 0.9950648875891062;
          result[1] += 0;
          result[2] += 0.0010053006762931823;
          result[3] += 0.003838420764028514;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9.139097057210747e-05;
        } else {
          result[0] += 0.22857142857142856;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7714285714285715;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.5823051459524526;
          result[1] += 0.001354198013842913;
          result[2] += 0.008275654529040024;
          result[3] += 0.40731266927475174;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007523322299127295;
        } else {
          result[0] += 0.9854319478402608;
          result[1] += 0;
          result[2] += 0.003871230643846781;
          result[3] += 0.01039119804400978;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003056234718826406;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d00000))) ) ) {
          result[0] += 0.3191489361702128;
          result[1] += 0.02127659574468085;
          result[2] += 0;
          result[3] += 0.6595744680851063;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.03225806451612903;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.967741935483871;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45afc400))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9530201342281879;
          result[1] += 0;
          result[2] += 0.04697986577181208;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0.999237979120628;
          result[1] += 0;
          result[2] += 0.0007620208793720948;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x45102800))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0.5070422535211268;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.49295774647887325;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0007390983000739098;
          result[1] += 0.009608277900960829;
          result[2] += 0.013550135501355014;
          result[3] += 0.9731460950973146;
          result[4] += 0;
          result[5] += 0.0029563932002956393;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0.9920433384120535;
          result[1] += 0;
          result[2] += 0.0074487895716946;
          result[3] += 0.00033858134416793635;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00016929067208396818;
        } else {
          result[0] += 0.732360097323601;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.26763990267639903;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0.004252029377657518;
          result[1] += 0;
          result[2] += 0.0007730962504831851;
          result[3] += 0.9949748743718593;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.981941309255079;
          result[1] += 0;
          result[2] += 0.012415349887133182;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.001128668171557562;
          result[6] += 0.004514672686230248;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.010537992235163616;
          result[2] += 0.010537992235163616;
          result[3] += 0.9789240155296728;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.17928286852589642;
          result[1] += 0;
          result[2] += 0.027888446215139442;
          result[3] += 0.7928286852589641;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.01411589895988113;
          result[4] += 0.9858841010401189;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41a80000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9984709480122325;
          result[5] += 0.0015290519877675841;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42780000))) ) ) {
          result[0] += 0.9841754051477598;
          result[1] += 0.0003336510962821735;
          result[2] += 0.0003336510962821735;
          result[3] += 0.015014299332697807;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00014299332697807437;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0.6607447898872566;
          result[1] += 0.0005124701059104886;
          result[2] += 0.0008541168431841476;
          result[3] += 0.33746156474205674;
          result[4] += 8.541168431841476e-05;
          result[5] += 0.0002562350529552443;
          result[6] += 8.541168431841476e-05;
        } else {
          result[0] += 0.7650069799906933;
          result[1] += 0;
          result[2] += 0.009306654257794323;
          result[3] += 0.16286644951140064;
          result[4] += 0.06281991624011168;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 0.8035714285714286;
          result[1] += 0;
          result[2] += 0.19642857142857142;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9873341375150785;
          result[1] += 0;
          result[2] += 0.004523522316043427;
          result[3] += 0.0012062726176115804;
          result[4] += 0.003317249698431846;
          result[5] += 0.0018094089264173705;
          result[6] += 0.0018094089264173705;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
          result[0] += 0.9817351598173516;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0182648401826484;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.001388888888888889;
          result[2] += 0;
          result[3] += 0.9972222222222222;
          result[4] += 0;
          result[5] += 0.001388888888888889;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
          result[0] += 0.9977042138783975;
          result[1] += 0.0005554321261941791;
          result[2] += 0.0009627490187365771;
          result[3] += 0.0004443457009553433;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003332592757165075;
        } else {
          result[0] += 0.8762446657183499;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.12375533428165007;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
          result[0] += 0.007017543859649123;
          result[1] += 0.056140350877192984;
          result[2] += 0;
          result[3] += 0.10526315789473684;
          result[4] += 0.8315789473684211;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.16728509585652446;
          result[1] += 0.003092145949288807;
          result[2] += 0.004019789734075449;
          result[3] += 0.8246753246753248;
          result[4] += 0.000927643784786642;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.22388059701492538;
          result[1] += 0;
          result[2] += 0.23880597014925373;
          result[3] += 0.5373134328358209;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42440000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.038095238095238106;
          result[3] += 0;
          result[4] += 0.9591836734693878;
          result[5] += 0.00272108843537415;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42940000))) ) ) {
          result[0] += 0.9924845269672856;
          result[1] += 0;
          result[2] += 0.006631299734748011;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008841732979664014;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9948717948717949;
          result[1] += 0;
          result[2] += 0.005128205128205128;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9996499008052282;
          result[1] += 0;
          result[2] += 0.000350099194771852;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 0.032407407407407406;
          result[2] += 0;
          result[3] += 0.9537037037037037;
          result[4] += 0.009259259259259259;
          result[5] += 0.004629629629629629;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.6803540469020896;
          result[1] += 0.0009124920156948627;
          result[2] += 0.0055662012957386625;
          result[3] += 0.312437266173921;
          result[4] += 0;
          result[5] += 9.124920156948626e-05;
          result[6] += 0.0006387444109864039;
        } else {
          result[0] += 0.15340442986054142;
          result[1] += 0;
          result[2] += 0.015996718621821164;
          result[3] += 0.706726825266612;
          result[4] += 0.12346185397867104;
          result[5] += 0.00041017227235438887;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42da0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.01674418604651163;
          result[2] += 0;
          result[3] += 0.9832558139534884;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.06666666666666667;
          result[1] += 0.9333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42440000))) ) ) {
          result[0] += 0.9292929292929293;
          result[1] += 0;
          result[2] += 0.0707070707070707;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.013888888888888888;
          result[3] += 0.9861111111111112;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42dd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03639846743295019;
          result[4] += 0.9636015325670498;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x43260000))) ) ) {
          result[0] += 0.7;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9781033458721046;
          result[1] += 0.0006335379132844981;
          result[2] += 0.0007919223916056226;
          result[3] += 0.020035636507622252;
          result[4] += 0.00015838447832112454;
          result[5] += 3.9596119580281134e-05;
          result[6] += 0.0002375767174816868;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 0.43644716692189894;
          result[1] += 0;
          result[2] += 0.010719754977029096;
          result[3] += 0.5336906584992342;
          result[4] += 0.01914241960183767;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6736486486486487;
          result[1] += 0;
          result[2] += 0.006981981981981983;
          result[3] += 0.2691441441441442;
          result[4] += 0.04887387387387388;
          result[5] += 0.000900900900900901;
          result[6] += 0.0004504504504504505;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9949799196787149;
          result[4] += 0.003681392235609103;
          result[5] += 0.0013386880856760374;
          result[6] += 0;
        } else {
          result[0] += 0.46681749622926094;
          result[1] += 0;
          result[2] += 0.02564102564102564;
          result[3] += 0;
          result[4] += 0.5075414781297134;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
          result[0] += 0.6470588235294118;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.35294117647058826;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9933933933933934;
          result[1] += 0;
          result[2] += 0.004204204204204204;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0024024024024024023;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
          result[0] += 0;
          result[1] += 0.012333965844402278;
          result[2] += 0;
          result[3] += 0.9876660341555977;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9278846153846154;
          result[1] += 0.07211538461538461;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
          result[0] += 0.05138339920948617;
          result[1] += 0;
          result[2] += 0.03557312252964427;
          result[3] += 0.9130434782608695;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.08536585365853659;
          result[4] += 0.9146341463414634;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43590000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40600000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9964250248262165;
          result[1] += 0;
          result[2] += 0.0033763654419066533;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00019860973187686197;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x425c0000))) ) ) {
          result[0] += 0.9423076923076923;
          result[1] += 0;
          result[2] += 0.03205128205128205;
          result[3] += 0.02564102564102564;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.08211818879508825;
          result[1] += 0.006907137375287797;
          result[2] += 0;
          result[3] += 0.8396009209516501;
          result[4] += 0.0713737528779739;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.7338530066815145;
          result[1] += 0.0022271714922049;
          result[2] += 0.0022271714922049;
          result[3] += 0.2605790645879733;
          result[4] += 0.00018559762435040836;
          result[5] += 0;
          result[6] += 0.0009279881217520418;
        } else {
          result[0] += 0;
          result[1] += 0.007782101167315175;
          result[2] += 0;
          result[3] += 0.9883268482490273;
          result[4] += 0.0038910505836575876;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0.006785411365564037;
          result[1] += 0.0033927056827820186;
          result[2] += 0.010602205258693808;
          result[3] += 0.26293469041560646;
          result[4] += 0.7150127226463104;
          result[5] += 0.001272264631043257;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.008570708343836652;
          result[3] += 0.8046382656919586;
          result[4] += 0.1860347869926897;
          result[5] += 0.0007562389715149988;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42940000))) ) ) {
          result[0] += 0.9900171135196806;
          result[1] += 0;
          result[2] += 0.005704506560182544;
          result[3] += 0.002567027952082145;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0017113519680547634;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9920337394564199;
          result[1] += 0;
          result[2] += 0.006091846298031866;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0018744142455482664;
        } else {
          result[0] += 0.9997510166818824;
          result[1] += 0;
          result[2] += 0.00020748609843140512;
          result[3] += 0;
          result[4] += 4.149721968628103e-05;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9131840796019901;
          result[1] += 0.0009950248756218907;
          result[2] += 0.003980099502487563;
          result[3] += 0.08022388059701493;
          result[4] += 0;
          result[5] += 0.0004975124378109454;
          result[6] += 0.0011194029850746271;
        } else {
          result[0] += 0.15849673202614378;
          result[1] += 0;
          result[2] += 0.01919934640522876;
          result[3] += 0.7079248366013072;
          result[4] += 0.11397058823529412;
          result[5] += 0.0004084967320261438;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.004188481675392671;
          result[2] += 0;
          result[3] += 0.2670157068062827;
          result[4] += 0.7287958115183246;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.010702818408847663;
          result[3] += 0.9843025330003567;
          result[4] += 0.0028540849090260435;
          result[5] += 0.0021405636817695326;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0.5037037037037037;
          result[1] += 0;
          result[2] += 0.01728395061728395;
          result[3] += 0.47901234567901235;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0018315018315018315;
          result[1] += 0.0173992673992674;
          result[2] += 0;
          result[3] += 0.9807692307692307;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 0.9852545943197502;
          result[1] += 0.0006537371976465461;
          result[2] += 0.0008716495968620615;
          result[3] += 0.012929469020120578;
          result[4] += 0.00014527493281034357;
          result[5] += 0;
          result[6] += 0.00014527493281034357;
        } else {
          result[0] += 0.5761904761904763;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.42000000000000004;
          result[4] += 0;
          result[5] += 0.00380952380952381;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41dc0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.994408201304753;
          result[4] += 0.004659832246039142;
          result[5] += 0.0009319664492078285;
          result[6] += 0;
        } else {
          result[0] += 0.6428571428571429;
          result[1] += 0;
          result[2] += 0.35714285714285715;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
          result[0] += 0.0064516129032258064;
          result[1] += 0.02903225806451613;
          result[2] += 0;
          result[3] += 0.12903225806451613;
          result[4] += 0.8354838709677419;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2711397058823529;
          result[1] += 0.0027573529411764708;
          result[2] += 0.003676470588235294;
          result[3] += 0.7224264705882353;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x3f800000))) ) ) {
          result[0] += 0.023368251410153102;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.057211925866236905;
          result[4] += 0.91941982272361;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.33104631217838765;
          result[1] += 0;
          result[2] += 0.04631217838765009;
          result[3] += 0.032590051457975985;
          result[4] += 0.5900514579759862;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.005141388174807198;
          result[1] += 0;
          result[2] += 0.008079324274697026;
          result[3] += 0.9867792875504958;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9685714285714285;
          result[4] += 0.03142857142857143;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9849557522123894;
          result[1] += 0;
          result[2] += 0.012389380530973451;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002654867256637168;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41ac0000))) ) ) {
          result[0] += 0.007407407407407408;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9888888888888889;
          result[4] += 0.003703703703703704;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.10947249007373795;
          result[1] += 0.0011344299489506524;
          result[2] += 0;
          result[3] += 0.8893930799773114;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.30434782608695654;
          result[3] += 0;
          result[4] += 0.6739130434782609;
          result[5] += 0.021739130434782608;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41500000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ea0000))) ) ) {
          result[0] += 0;
          result[1] += 0.027777777777777776;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9722222222222222;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42020000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.990625;
          result[1] += 0;
          result[2] += 0.0078125;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0015625;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0.9994891008174387;
          result[1] += 0;
          result[2] += 0.0005108991825613079;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.9247220879652006;
          result[1] += 0.001570807153214113;
          result[2] += 0.007249879168680522;
          result[3] += 0.0653697438376027;
          result[4] += 0;
          result[5] += 0.0006041565973900435;
          result[6] += 0.0004833252779120348;
        } else {
          result[0] += 0.2713523131672598;
          result[1] += 0.006227758007117438;
          result[2] += 0.00800711743772242;
          result[3] += 0.7144128113879004;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
          result[0] += 0;
          result[1] += 0.0024717514124293787;
          result[2] += 0;
          result[3] += 0.9975282485875706;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c00000))) ) ) {
          result[0] += 0.0006205398696866273;
          result[1] += 0;
          result[2] += 0.008997828110456097;
          result[3] += 0.9878994725411108;
          result[4] += 0;
          result[5] += 0.0024821594787465093;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41300000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 0.9475829677876734;
          result[1] += 0.0004430856484558465;
          result[2] += 0.0035889937524923566;
          result[3] += 0.04798617572776818;
          result[4] += 0;
          result[5] += 8.86171296911693e-05;
          result[6] += 0.00031015995391909254;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06578947368421052;
          result[3] += 0.9342105263157895;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.006034009873834339;
          result[3] += 0.9939659901261657;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 0.9852941176470589;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.014705882352941176;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.004573170731707317;
          result[1] += 0.001524390243902439;
          result[2] += 0;
          result[3] += 0.989329268292683;
          result[4] += 0;
          result[5] += 0.004573170731707317;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0.9890296039364362;
          result[1] += 0.0010486408001935952;
          result[2] += 0.002419940308139066;
          result[3] += 0.0068564975397273535;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006453174155037509;
        } else {
          result[0] += 0.9998062391009495;
          result[1] += 0;
          result[2] += 0.00019376089905057158;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0.17202970297029702;
          result[1] += 0.0027846534653465345;
          result[2] += 0.0049504950495049506;
          result[3] += 0.818069306930693;
          result[4] += 0.002165841584158416;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.028019323671497585;
          result[3] += 0.05990338164251208;
          result[4] += 0.9120772946859903;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40600000))) ) ) {
          result[0] += 0;
          result[1] += 0.02459016393442623;
          result[2] += 0;
          result[3] += 0.24180327868852458;
          result[4] += 0.7336065573770492;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.015267175572519083;
          result[2] += 0;
          result[3] += 0.042748091603053436;
          result[4] += 0.9419847328244275;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42400000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9775910364145659;
          result[4] += 0.011204481792717089;
          result[5] += 0.011204481792717089;
          result[6] += 0;
        } else {
          result[0] += 0.988729952319029;
          result[1] += 0;
          result[2] += 0.0082358040745557;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.003034243606415258;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03234880450070324;
          result[3] += 0;
          result[4] += 0.9648382559774965;
          result[5] += 0.0028129395218002813;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0032967032967032967;
          result[3] += 0.9967032967032967;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0.9982435597189696;
          result[1] += 0;
          result[2] += 0.001756440281030445;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9824561403508771;
          result[1] += 0;
          result[2] += 0.011695906432748537;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.005847953216374269;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0.9995679545735094;
          result[1] += 0;
          result[2] += 0.0004320454264905567;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0.01909375890567113;
          result[1] += 0.007124536905101168;
          result[2] += 0.005129666571672842;
          result[3] += 0.9672271302365346;
          result[4] += 0.0008549444286121402;
          result[5] += 0.0005699629524080935;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.023351648351648352;
          result[3] += 0.22939560439560439;
          result[4] += 0.7445054945054945;
          result[5] += 0.0027472527472527475;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.06862745098039216;
          result[2] += 0;
          result[3] += 0.9313725490196079;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0.9980108499095841;
          result[1] += 0;
          result[2] += 0.0014466546112115732;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00054249547920434;
        } else {
          result[0] += 0.9563409563409564;
          result[1] += 0;
          result[2] += 0.0395010395010395;
          result[3] += 0.004158004158004158;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41700000))) ) ) {
          result[0] += 0.3482655012291724;
          result[1] += 0;
          result[2] += 0.0071018847309478285;
          result[3] += 0.6429937175635072;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0016388964763725759;
        } else {
          result[0] += 0.6931407942238267;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.30595667870036103;
          result[4] += 0;
          result[5] += 0.0009025270758122744;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45afc400))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42020000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9992170296060681;
          result[1] += 0;
          result[2] += 0.0007340347443112308;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 4.893564962074871e-05;
        }
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40900000))) ) ) {
          result[0] += 0.01077752117013087;
          result[1] += 0;
          result[2] += 0.015396458814472672;
          result[3] += 0.8968437259430331;
          result[4] += 0.07390300230946882;
          result[5] += 0.003079291762894534;
          result[6] += 0;
        } else {
          result[0] += 0.02503770739064857;
          result[1] += 0.00904977375565611;
          result[2] += 0.014479638009049774;
          result[3] += 0.7616892911010558;
          result[4] += 0.18763197586726998;
          result[5] += 0.0021116138763197585;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8274111675126904;
          result[4] += 0.17258883248730963;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0055248618784530384;
          result[2] += 0;
          result[3] += 0.07845303867403315;
          result[4] += 0.9160220994475138;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3fc00000))) ) ) {
          result[0] += 0.5637037037037037;
          result[1] += 0;
          result[2] += 0.005185185185185185;
          result[3] += 0.4293827160493827;
          result[4] += 0;
          result[5] += 0.0004938271604938272;
          result[6] += 0.0012345679012345679;
        } else {
          result[0] += 0.6457765667574933;
          result[1] += 0;
          result[2] += 0.001362397820163488;
          result[3] += 0.35195277020890103;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009082652134423252;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0.9966722129783694;
          result[1] += 0;
          result[2] += 0.0033277870216306157;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.892271662763466;
          result[1] += 0;
          result[2] += 0.01405152224824356;
          result[3] += 0.08821233411397346;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00546448087431694;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x41080000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 0.02702702702702703;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.918918918918919;
          result[4] += 0.05405405405405406;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9716354645001767;
          result[1] += 0.000529848110208407;
          result[2] += 0.0010950194277640412;
          result[3] += 0.026351112681031442;
          result[4] += 7.064641469445427e-05;
          result[5] += 0.00017661603673613566;
          result[6] += 0.00014129282938890855;
        } else {
          result[0] += 0.0027881040892193307;
          result[1] += 0;
          result[2] += 0.0027881040892193307;
          result[3] += 0.9879182156133829;
          result[4] += 0.0027881040892193307;
          result[5] += 0.0037174721189591076;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0;
          result[1] += 0.00546448087431694;
          result[2] += 0.015710382513661202;
          result[3] += 0.9316939890710383;
          result[4] += 0.0471311475409836;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9825;
          result[1] += 0;
          result[2] += 0.01625;
          result[3] += 0.00125;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3667262969588551;
          result[4] += 0.6332737030411449;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0007032348804500703;
          result[1] += 0.004922644163150493;
          result[2] += 0;
          result[3] += 0.05555555555555555;
          result[4] += 0.9388185654008439;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42440000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.006875214850464077;
          result[3] += 0.9800618769336542;
          result[4] += 0.013062908215881746;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9856308935788056;
          result[1] += 0;
          result[2] += 0.010327795240233499;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.004041311180960934;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0.2830188679245283;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7169811320754716;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0043859649122807015;
          result[3] += 0;
          result[4] += 0.9868421052631579;
          result[5] += 0.008771929824561403;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0.08139534883720931;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9186046511627907;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.02608695652173913;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9739130434782609;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.5202312138728323;
          result[1] += 0;
          result[2] += 0.008257638315441783;
          result[3] += 0.4715111478117259;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.1572463768115942;
          result[1] += 0.01884057971014493;
          result[2] += 0.008695652173913044;
          result[3] += 0.8152173913043478;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x434c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40200000))) ) ) {
          result[0] += 0.9993309638302321;
          result[1] += 0;
          result[2] += 0.000669036169767928;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9979533360622186;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002046663937781416;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9917298414886285;
          result[1] += 0;
          result[2] += 0.004135079255685734;
          result[3] += 0;
          result[4] += 0.002067539627842867;
          result[5] += 0.0006891798759476223;
          result[6] += 0.0013783597518952446;
        } else {
          result[0] += 0.6620308630215279;
          result[1] += 0.002286149742808154;
          result[2] += 0.005143836921318346;
          result[3] += 0.3050104781863212;
          result[4] += 0.024957134692322348;
          result[5] += 0.00019051247856734617;
          result[6] += 0.00038102495713469235;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0.26223337515683814;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7377666248431619;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.626904887020494;
          result[1] += 0;
          result[2] += 0.019968470835522858;
          result[3] += 0;
          result[4] += 0.34839726747241195;
          result[5] += 0.0021019442984760903;
          result[6] += 0.002627430373095113;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40900000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9884393063583815;
          result[5] += 0.011560693641618497;
          result[6] += 0;
        } else {
          result[0] += 0.0025477707006369425;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9974522292993631;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0.09231448763250884;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.907243816254417;
          result[4] += 0;
          result[5] += 0.00044169611307420494;
          result[6] += 0;
        } else {
          result[0] += 0.5860805860805861;
          result[1] += 0.003663003663003663;
          result[2] += 0.08058608058608059;
          result[3] += 0.32234432234432236;
          result[4] += 0;
          result[5] += 0.007326007326007326;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.9848543689320389;
          result[1] += 0.0008321775312066576;
          result[2] += 0.002995839112343967;
          result[3] += 0.010651872399445216;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000665742024965326;
        } else {
          result[0] += 0.7538940809968848;
          result[1] += 0;
          result[2] += 0.005815160955347872;
          result[3] += 0.2390446521287643;
          result[4] += 0;
          result[5] += 0.00020768431983385257;
          result[6] += 0.001038421599169263;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.00775623268698061;
          result[3] += 0.9922437673130194;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9607843137254902;
          result[1] += 0;
          result[2] += 0.0392156862745098;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 0.5555555555555556;
          result[2] += 0;
          result[3] += 0.4444444444444444;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.008653846153846154;
          result[2] += 0;
          result[3] += 0.9913461538461539;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41780000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42940000))) ) ) {
          result[0] += 0.125;
          result[1] += 0;
          result[2] += 0.3125;
          result[3] += 0;
          result[4] += 0.1875;
          result[5] += 0.375;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0039018952062430325;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9960981047937569;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41840000))) ) ) {
          result[0] += 0;
          result[1] += 0.08;
          result[2] += 0;
          result[3] += 0.92;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0006353240152477764;
          result[1] += 0;
          result[2] += 0.0012706480304955528;
          result[3] += 0.9974587039390089;
          result[4] += 0;
          result[5] += 0.0006353240152477764;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42740000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41100000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0.4392857142857143;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5607142857142857;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7238805970149254;
          result[1] += 0.004975124378109453;
          result[2] += 0.0024875621890547263;
          result[3] += 0.26865671641791045;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0.997005655983143;
          result[1] += 0.0002587704705925844;
          result[2] += 0.002550737495841189;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00018483605042327457;
        } else {
          result[0] += 0.061224489795918366;
          result[1] += 0.1836734693877551;
          result[2] += 0;
          result[3] += 0.7551020408163265;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0.5851190476190476;
          result[1] += 0;
          result[2] += 0.002976190476190476;
          result[3] += 0.4119047619047619;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.37386958591147074;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6261304140885293;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42200000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9916913946587537;
          result[1] += 0;
          result[2] += 0.005637982195845697;
          result[3] += 0.001483679525222552;
          result[4] += 0;
          result[5] += 0.0005934718100890207;
          result[6] += 0.0005934718100890207;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
          result[0] += 0;
          result[1] += 0.0011098779134295228;
          result[2] += 0;
          result[3] += 0.7652608213096559;
          result[4] += 0.232519422863485;
          result[5] += 0.0011098779134295228;
          result[6] += 0;
        } else {
          result[0] += 0.7347826086956523;
          result[1] += 0;
          result[2] += 0.028260869565217395;
          result[3] += 0;
          result[4] += 0.23695652173913045;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0.14583333333333334;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6666666666666666;
          result[4] += 0.1875;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 0.9998277940416739;
          result[1] += 0;
          result[2] += 0.00017220595832615808;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8117647058823529;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.18823529411764706;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0.7270069112174375;
          result[1] += 0;
          result[2] += 0.003721424774056353;
          result[3] += 0.26900584795321636;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002658160552897395;
        } else {
          result[0] += 0.9028225806451614;
          result[1] += 0;
          result[2] += 0.01088709677419355;
          result[3] += 0.08548387096774195;
          result[4] += 0;
          result[5] += 0.00040322580645161296;
          result[6] += 0.00040322580645161296;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 0.9992802170422457;
          result[1] += 0;
          result[2] += 0.000664415037927025;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5.536791982725209e-05;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3333333333333333;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.7445550715619167;
          result[1] += 0.001555693839452396;
          result[2] += 0.00855631611698818;
          result[3] += 0.21064094586185442;
          result[4] += 0.03406969508400747;
          result[5] += 0.0003111387678904792;
          result[6] += 0.0003111387678904792;
        } else {
          result[0] += 0;
          result[1] += 0.0024681201151789387;
          result[2] += 0.0008227067050596463;
          result[3] += 0.788564376799671;
          result[4] += 0.20732208967503085;
          result[5] += 0.0008227067050596463;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 0.1467780429594272;
          result[1] += 0.013126491646778043;
          result[2] += 0.014319809069212411;
          result[3] += 0.8257756563245824;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0018298261665141812;
          result[2] += 0;
          result[3] += 0.04940530649588289;
          result[4] += 0.9487648673376029;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x445ae000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
          result[0] += 0.9970649171270718;
          result[1] += 0;
          result[2] += 0.0027624309392265192;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00017265193370165745;
        } else {
          result[0] += 0.9994274809160305;
          result[1] += 0;
          result[2] += 0.0005725190839694657;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 0.6599156985709879;
          result[1] += 0.0016449059319420167;
          result[2] += 0.0060655906240361865;
          result[3] += 0.32682224735272947;
          result[4] += 0.00442068469209417;
          result[5] += 0;
          result[6] += 0.0011308728282101365;
        } else {
          result[0] += 0.4298811544991511;
          result[1] += 0;
          result[2] += 0.0040747028862478775;
          result[3] += 0.35144312393887944;
          result[4] += 0.2132427843803056;
          result[5] += 0.0013582342954159593;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.008620689655172414;
          result[1] += 0;
          result[2] += 0.024294670846394983;
          result[3] += 0.9655172413793104;
          result[4] += 0;
          result[5] += 0.001567398119122257;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.014339622641509434;
          result[2] += 0.0007547169811320754;
          result[3] += 0.9849056603773585;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9715302491103203;
          result[1] += 0;
          result[2] += 0.028469750889679714;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0013477088948787063;
          result[3] += 0.9986522911051213;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9734513274336283;
          result[1] += 0;
          result[2] += 0.02654867256637168;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0.2956152758132956;
          result[1] += 0.019801980198019802;
          result[2] += 0;
          result[3] += 0.6845827439886846;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.02132998745294856;
          result[1] += 0.012547051442910916;
          result[2] += 0.0075282308657465494;
          result[3] += 0.958594730238394;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40200000))) ) ) {
          result[0] += 0.9993302637086647;
          result[1] += 0;
          result[2] += 0.0006697362913352867;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9980276134122288;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0019723865877712033;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
          result[0] += 0.8787101502381826;
          result[1] += 0.004213997801392452;
          result[2] += 0.002381824844265299;
          result[3] += 0.11432759252473434;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003664345914254306;
        } else {
          result[0] += 0.0186084142394822;
          result[1] += 0;
          result[2] += 0.01779935275080906;
          result[3] += 0.8438511326860841;
          result[4] += 0.11812297734627832;
          result[5] += 0.0016181229773462784;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0.008199121522693998;
          result[1] += 0;
          result[2] += 0.007027818448023426;
          result[3] += 0.7923865300146413;
          result[4] += 0.1923865300146413;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9041598694942904;
          result[1] += 0;
          result[2] += 0.008564437194127243;
          result[3] += 0.07871125611745514;
          result[4] += 0.005301794453507341;
          result[5] += 0.0012234910277324632;
          result[6] += 0.0020391517128874386;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41780000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x41c80000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.006607929515418502;
          result[2] += 0.005506607929515419;
          result[3] += 0;
          result[4] += 0.9862334801762115;
          result[5] += 0.0016519823788546256;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x41cc0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.00096;
          result[2] += 0.00128;
          result[3] += 0.99712;
          result[4] += 0;
          result[5] += 0.00064;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42740000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
          result[0] += 0.5684039087947883;
          result[1] += 0.0016286644951140066;
          result[2] += 0.0016286644951140066;
          result[3] += 0.42833876221498374;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9958522977536338;
          result[1] += 0.0010277492291880781;
          result[2] += 0.0019453824695345764;
          result[3] += 0.0008442225811187785;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003303479665247394;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.18;
          result[3] += 0.82;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9722222222222222;
          result[1] += 0;
          result[2] += 0.027777777777777776;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9809954751131222;
          result[1] += 0;
          result[2] += 0.01312217194570136;
          result[3] += 0.003619909502262444;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002262443438914028;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
          result[0] += 0;
          result[1] += 0.013477088948787063;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9865229110512129;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0007015902712815715;
          result[1] += 0.0004677268475210477;
          result[2] += 0.0018709073900841909;
          result[3] += 0.7462581852198317;
          result[4] += 0.25;
          result[5] += 0.0007015902712815715;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d00000))) ) ) {
          result[0] += 0.5710306406685237;
          result[1] += 0.06128133704735376;
          result[2] += 0;
          result[3] += 0.36768802228412256;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.007142857142857143;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9928571428571429;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
          result[0] += 0.9154040404040404;
          result[1] += 0;
          result[2] += 0.023989898989898988;
          result[3] += 0.06060606060606061;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9976160321835655;
          result[1] += 0.0005959919541086195;
          result[2] += 0.0014899798852715488;
          result[3] += 0.00011174849139536616;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001862474856589436;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0.9131147540983606;
          result[1] += 0;
          result[2] += 0.014754098360655738;
          result[3] += 0.07213114754098361;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004398826979472141;
          result[3] += 0;
          result[4] += 0.9956011730205279;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.375;
          result[3] += 0;
          result[4] += 0.5416666666666666;
          result[5] += 0.08333333333333333;
          result[6] += 0;
        } else {
          result[0] += 0.02068519715578539;
          result[1] += 0;
          result[2] += 0.0019392372333548805;
          result[3] += 0.9773755656108597;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x43438000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9893416927899686;
          result[1] += 0;
          result[2] += 0.006896551724137931;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.003761755485893417;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
          result[0] += 0.6875;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3125;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9988873435326843;
          result[1] += 0;
          result[2] += 0.0008344923504867872;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002781641168289291;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45cb4000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40900000))) ) ) {
          result[0] += 0.9990225331824262;
          result[1] += 0;
          result[2] += 0.0007202387076859759;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002572281098878485;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0.5365422396856583;
          result[1] += 0;
          result[2] += 0.00982318271119843;
          result[3] += 0.40667976424361496;
          result[4] += 0.04597249508840865;
          result[5] += 0.0005893909626719058;
          result[6] += 0.00039292730844793717;
        } else {
          result[0] += 0.09753231492361927;
          result[1] += 0.005875440658049354;
          result[2] += 0;
          result[3] += 0.5229142185663925;
          result[4] += 0.3736780258519389;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
          result[0] += 0.6358695652173914;
          result[1] += 0;
          result[2] += 0.002717391304347826;
          result[3] += 0.36141304347826086;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.10465116279069768;
          result[1] += 0;
          result[2] += 0.01937984496124031;
          result[3] += 0.4263565891472868;
          result[4] += 0.4496124031007752;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.936931473620376;
          result[1] += 0.0006064281382656155;
          result[2] += 0.004244996967859308;
          result[3] += 0.05700424499696786;
          result[4] += 0;
          result[5] += 0.0004042854255104103;
          result[6] += 0.0008085708510208206;
        } else {
          result[0] += 0.09622093023255814;
          result[1] += 0.004651162790697674;
          result[2] += 0.013372093023255814;
          result[3] += 0.523546511627907;
          result[4] += 0.3622093023255814;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41c00000))) ) ) {
          result[0] += 0;
          result[1] += 0.002771618625277162;
          result[2] += 0.0016629711751662971;
          result[3] += 0.9955654101995566;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.997872340425532;
          result[5] += 0.002127659574468085;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0005374899220639614;
          result[1] += 0.004299919376511691;
          result[2] += 0.0002687449610319807;
          result[3] += 0.9244826659500135;
          result[4] += 0.069604944907283;
          result[5] += 0.000806234883095942;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8849557522123894;
          result[1] += 0;
          result[2] += 0.10619469026548672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.008849557522123894;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40d00000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0.9951293430024896;
          result[1] += 0;
          result[2] += 0.0009741313995021107;
          result[3] += 0.0036800519536746407;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002164736443338024;
        } else {
          result[0] += 0.9892920880428316;
          result[1] += 0.0028044531316393302;
          result[2] += 0.004589105124500723;
          result[3] += 0.00297441998810232;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003399337129259794;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 0.9920927780706379;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.00790722192936215;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9997853155860884;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00021468441391155003;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42440000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.031767955801104975;
          result[3] += 0;
          result[4] += 0.9654696132596685;
          result[5] += 0.0027624309392265192;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42df0000))) ) ) {
          result[0] += 0.985670864090317;
          result[1] += 0;
          result[2] += 0.00998697351280938;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.004342162396873643;
        } else {
          result[0] += 0.25;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.002844950213371266;
          result[1] += 0.008534850640113799;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9886201991465149;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
          result[0] += 0.21247113163972287;
          result[1] += 0.008083140877598153;
          result[2] += 0;
          result[3] += 0.7638568129330254;
          result[4] += 0.01558891454965358;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6132930513595166;
          result[1] += 0;
          result[2] += 0.013091641490433032;
          result[3] += 0.37361530715005037;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.004739336492890996;
          result[1] += 0;
          result[2] += 0.061611374407582936;
          result[3] += 0.933649289099526;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42500000))) ) ) {
          result[0] += 0.003973509933774834;
          result[1] += 0.0013245033112582781;
          result[2] += 0;
          result[3] += 0.9913907284768212;
          result[4] += 0;
          result[5] += 0.0033112582781456954;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09259259259259259;
          result[3] += 0;
          result[4] += 0.9012345679012346;
          result[5] += 0.006172839506172839;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.019637462235649546;
          result[3] += 0;
          result[4] += 0.9803625377643505;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
          result[0] += 0.6752767527675277;
          result[1] += 0;
          result[2] += 0.003690036900369004;
          result[3] += 0.32103321033210336;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9966203805745353;
          result[1] += 0.000624494893835868;
          result[2] += 0.0014693997502020426;
          result[3] += 0.0010285798251414297;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00025714495628535744;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.42027863777089786;
          result[1] += 0;
          result[2] += 0.008320433436532508;
          result[3] += 0.5692724458204335;
          result[4] += 0;
          result[5] += 0.0009674922600619195;
          result[6] += 0.0011609907120743034;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42860000))) ) ) {
          result[0] += 0.0021673168617251846;
          result[1] += 0.0021673168617251846;
          result[2] += 0.0030342436064152586;
          result[3] += 0.9895968790637192;
          result[4] += 0.0008669267446900738;
          result[5] += 0.0021673168617251846;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02356902356902357;
          result[3] += 0;
          result[4] += 0.9764309764309764;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9705093833780161;
          result[1] += 0;
          result[2] += 0.029490616621983913;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
          result[0] += 0.6919014084507042;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.30809859154929575;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9972846747040296;
          result[1] += 0.00039824771007566706;
          result[2] += 0.001918829875819123;
          result[3] += 0.0001810216863980305;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002172260236776366;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.43181381034814387;
          result[1] += 0;
          result[2] += 0.009232544720138488;
          result[3] += 0.5574148874783612;
          result[4] += 0;
          result[5] += 0.00019234468166955183;
          result[6] += 0.0013464127716868628;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41400000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0.6020408163265306;
          result[1] += 0;
          result[2] += 0.0163265306122449;
          result[3] += 0.3816326530612245;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.009424083769633508;
          result[2] += 0;
          result[3] += 0.9905759162303664;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cc0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x4617d400))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.01240694789081886;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9875930521091811;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45aed800))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9980052588629976;
          result[1] += 0;
          result[2] += 0.0017227309819566599;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00027201015504578843;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.02010178117048346;
          result[1] += 0.006361323155216285;
          result[2] += 0.013486005089058525;
          result[3] += 0.9590330788804071;
          result[4] += 0;
          result[5] += 0.0010178117048346056;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41b80000))) ) ) {
          result[0] += 0;
          result[1] += 0.0125;
          result[2] += 0;
          result[3] += 0.2144230769230769;
          result[4] += 0.7730769230769231;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0.9954690384292667;
          result[1] += 0;
          result[2] += 0.004027521396207418;
          result[3] += 0.0001678133915086424;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003356267830172848;
        } else {
          result[0] += 0.9461467038068709;
          result[1] += 0;
          result[2] += 0.008820798514391829;
          result[3] += 0.04085422469823584;
          result[4] += 0;
          result[5] += 0.00046425255338904364;
          result[6] += 0.003714020427112349;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.030303030303030304;
          result[3] += 0.9696969696969697;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x426c0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.054870530209617754;
          result[1] += 0.011713933415536375;
          result[2] += 0;
          result[3] += 0.9334155363748459;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0.6030927835051546;
          result[1] += 0;
          result[2] += 0.018556701030927835;
          result[3] += 0.3783505154639175;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06422018348623854;
          result[3] += 0.9357798165137615;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9861111111111112;
          result[1] += 0;
          result[2] += 0.013888888888888888;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9994573012365779;
          result[1] += 0;
          result[2] += 0.00038764197387293096;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001550567895491724;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.04182933630786392;
          result[1] += 0.005577244841048522;
          result[2] += 0.011712214166201896;
          result[3] += 0.856664807585053;
          result[4] += 0.08254322364751812;
          result[5] += 0.0016731734523145567;
          result[6] += 0;
        } else {
          result[0] += 0.983041500068937;
          result[1] += 0;
          result[2] += 0.00579070729353371;
          result[3] += 0.009651178822556184;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0015166138149731146;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0.00099601593625498;
          result[2] += 0;
          result[3] += 0.99867197875166;
          result[4] += 0;
          result[5] += 0.00033200531208499334;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03254437869822486;
          result[3] += 0;
          result[4] += 0.9659763313609468;
          result[5] += 0.0014792899408284025;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420a0000))) ) ) {
          result[0] += 0.9753086419753086;
          result[1] += 0;
          result[2] += 0.024691358024691357;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9981684981684982;
          result[1] += 0;
          result[2] += 0.0018315018315018315;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9997581035316885;
          result[1] += 0;
          result[2] += 0.00024189646831156264;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0.6382259767687434;
          result[1] += 0.0025343189017951427;
          result[2] += 0.005279831045406547;
          result[3] += 0.3470960929250264;
          result[4] += 0.006124604012671594;
          result[5] += 0.00031678986272439284;
          result[6] += 0.00042238648363252375;
        } else {
          result[0] += 0.9738461538461539;
          result[1] += 0;
          result[2] += 0.005641025641025642;
          result[3] += 0.016923076923076926;
          result[4] += 0;
          result[5] += 0.0020512820512820517;
          result[6] += 0.0015384615384615387;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0;
          result[1] += 0.0013227513227513227;
          result[2] += 0.008928571428571428;
          result[3] += 0.9897486772486772;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0.00847457627118644;
          result[1] += 0.0211864406779661;
          result[2] += 0;
          result[3] += 0.13135593220338984;
          result[4] += 0.8389830508474576;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0021551724137931034;
          result[2] += 0;
          result[3] += 0.01939655172413793;
          result[4] += 0.978448275862069;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0.9969933854479855;
          result[1] += 0;
          result[2] += 0.003006614552014432;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9792207792207792;
          result[1] += 0;
          result[2] += 0.005194805194805195;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.015584415584415584;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.9994327206716587;
          result[1] += 0;
          result[2] += 0.0005672793283412752;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
          result[0] += 0.5749221876389506;
          result[1] += 0;
          result[2] += 0.010004446420631391;
          result[3] += 0.3523788350377946;
          result[4] += 0.06269453090262339;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8636439685460934;
          result[1] += 0.0011711560983771122;
          result[2] += 0.006357704534047181;
          result[3] += 0.12514639451229714;
          result[4] += 0.002007696168646478;
          result[5] += 0.0006692320562154927;
          result[6] += 0.001003848084323239;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0;
          result[1] += 0.0009891196834817012;
          result[2] += 0.01121002307945928;
          result[3] += 0.8272337619518628;
          result[4] += 0.15858885591823277;
          result[5] += 0.0019782393669634025;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6913746630727763;
          result[4] += 0.3086253369272237;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0.16456759026028547;
          result[1] += 0.007556675062972292;
          result[2] += 0;
          result[3] += 0.8261964735516373;
          result[4] += 0.0016792611251049538;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.07448979591836735;
          result[1] += 0;
          result[2] += 0.007142857142857143;
          result[3] += 0.22551020408163266;
          result[4] += 0.6928571428571428;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0.005714285714285714;
          result[1] += 0.02857142857142857;
          result[2] += 0;
          result[3] += 0.2057142857142857;
          result[4] += 0.76;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04075235109717868;
          result[4] += 0.9592476489028213;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9992869027810791;
          result[1] += 0;
          result[2] += 0.0006338641945963078;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7.923302432453847e-05;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0.024733876017532873;
          result[1] += 0.003757044458359424;
          result[2] += 0.020350657482780213;
          result[3] += 0.86944270507201;
          result[4] += 0.07983719474013776;
          result[5] += 0.001878522229179712;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0.9801280998521925;
          result[1] += 0;
          result[2] += 0.0047626868122844475;
          result[3] += 0.014944982755789128;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00016423057973394647;
        } else {
          result[0] += 0.4041414611447185;
          result[1] += 0;
          result[2] += 0.006281991624011168;
          result[3] += 0.5886458818054909;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009306654257794323;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2413793103448276;
          result[1] += 0.009655172413793104;
          result[2] += 0;
          result[3] += 0.7489655172413793;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 0.08307692307692308;
          result[1] += 0.005384615384615384;
          result[2] += 0.006923076923076923;
          result[3] += 0.5415384615384615;
          result[4] += 0.3630769230769231;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0015290519877675841;
          result[2] += 0;
          result[3] += 0.05198776758409786;
          result[4] += 0.9464831804281345;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x41c80000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42100000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9858757062146892;
          result[1] += 0;
          result[2] += 0.014124293785310734;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41300000))) ) ) {
          result[0] += 0.18309859154929578;
          result[1] += 0.01784037558685446;
          result[2] += 0;
          result[3] += 0.7990610328638498;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.008227374719521317;
          result[3] += 0.9917726252804787;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
          result[0] += 0.0013351134846461949;
          result[1] += 0.0006675567423230974;
          result[2] += 0.007343124165554072;
          result[3] += 0.9646194926568759;
          result[4] += 0.02336448598130841;
          result[5] += 0.0026702269692923898;
          result[6] += 0;
        } else {
          result[0] += 0.9901960784313726;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.00980392156862745;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
          result[0] += 0.6638655462184874;
          result[1] += 0;
          result[2] += 0.004201680672268907;
          result[3] += 0.3319327731092437;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9975549216463527;
          result[1] += 0.0002593264920534953;
          result[2] += 0.001185492535101693;
          result[3] += 0.0009261660430481977;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7.409328344385581e-05;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42440000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.007837837837837838;
          result[3] += 0.8078378378378378;
          result[4] += 0.18324324324324323;
          result[5] += 0.001081081081081081;
          result[6] += 0;
        } else {
          result[0] += 0.9905191873589165;
          result[1] += 0;
          result[2] += 0.008577878103837472;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009029345372460496;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41b40000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9961389961389961;
          result[5] += 0.003861003861003861;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41780000))) ) ) {
          result[0] += 0.13043478260869568;
          result[1] += 0.26086956521739135;
          result[2] += 0.4347826086956522;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.1739130434782609;
          result[6] += 0;
        } else {
          result[0] += 0.0006218905472636816;
          result[1] += 0.0012437810945273632;
          result[2] += 0.0037313432835820895;
          result[3] += 0.9937810945273632;
          result[4] += 0;
          result[5] += 0.0006218905472636816;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0.9981999549988749;
          result[1] += 0.00048751218780469514;
          result[2] += 0.0009000225005625141;
          result[3] += 0.00015000375009375234;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002625065626640666;
        } else {
          result[0] += 0.9592511013215859;
          result[1] += 0;
          result[2] += 0.034140969162995596;
          result[3] += 0.006607929515418502;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0.07142857142857142;
          result[1] += 0.9285714285714286;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0.3143371325734853;
          result[1] += 0;
          result[2] += 0.008998200359928014;
          result[3] += 0.6766646670665867;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.848575712143928;
          result[1] += 0;
          result[2] += 0.009745127436281859;
          result[3] += 0.136431784107946;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.005247376311844078;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
          result[0] += 0.5310077519379846;
          result[1] += 0;
          result[2] += 0.0002981514609421586;
          result[3] += 0.46869409660107336;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8890070921985815;
          result[1] += 0;
          result[2] += 0.004609929078014184;
          result[3] += 0.10638297872340426;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 0.9953542392566783;
          result[1] += 0;
          result[2] += 0.004645760743321719;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9996499008052282;
          result[1] += 0;
          result[2] += 0.000350099194771852;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9912152269399706;
          result[1] += 0;
          result[2] += 0.002928257686676427;
          result[3] += 0;
          result[4] += 0.0036603221083455336;
          result[5] += 0;
          result[6] += 0.0021961932650073203;
        } else {
          result[0] += 0.6267045454545455;
          result[1] += 0.010227272727272727;
          result[2] += 0.003409090909090909;
          result[3] += 0.35852272727272727;
          result[4] += 0.0005681818181818182;
          result[5] += 0;
          result[6] += 0.0005681818181818182;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9486880466472304;
          result[1] += 0;
          result[2] += 0.0005830903790087465;
          result[3] += 0.05072886297376094;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.16468785905783226;
          result[1] += 0.004212945231711987;
          result[2] += 0.006127920337035618;
          result[3] += 0.7885867483722712;
          result[4] += 0.036384527001148984;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.7815622161671208;
          result[1] += 0;
          result[2] += 0.013396911898274296;
          result[3] += 0.20208900999091733;
          result[4] += 0.0009082652134423251;
          result[5] += 0.00045413260672116256;
          result[6] += 0.001589464123524069;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.008223201174743025;
          result[3] += 0.804992657856094;
          result[4] += 0.1856093979441997;
          result[5] += 0.0011747430249632893;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
          result[0] += 0;
          result[1] += 0.007253886010362694;
          result[2] += 0;
          result[3] += 0.1461139896373057;
          result[4] += 0.8466321243523316;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41700000))) ) ) {
          result[0] += 0.018867924528301886;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9622641509433962;
          result[5] += 0.018867924528301886;
          result[6] += 0;
        } else {
          result[0] += 0.0009334163036714375;
          result[1] += 0.00031113876789047915;
          result[2] += 0;
          result[3] += 0.998755444928438;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0.8602150537634409;
          result[1] += 0.13978494623655913;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8823529411764706;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.11764705882352941;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0.9981348851089228;
          result[1] += 0.0006714413607878247;
          result[2] += 0.0010444643390032828;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00014920919128618326;
        } else {
          result[0] += 0.9673423423423423;
          result[1] += 0;
          result[2] += 0.02702702702702703;
          result[3] += 0.00563063063063063;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0.14285714285714285;
          result[1] += 0.8571428571428571;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0.0028399006034788782;
          result[1] += 0;
          result[2] += 0.004614838480653177;
          result[3] += 0.9925452609158679;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8469803630974435;
          result[1] += 0;
          result[2] += 0.01148573545757688;
          result[3] += 0.13745831789551685;
          result[4] += 0;
          result[5] += 0.0011115227862171174;
          result[6] += 0.0029640607632456465;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.011572856391372961;
          result[2] += 0.01209889531825355;
          result[3] += 0.9763282482903735;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.98989898989899;
          result[1] += 0.010101010101010102;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2912621359223301;
          result[1] += 0;
          result[2] += 0.032362459546925564;
          result[3] += 0;
          result[4] += 0.6763754045307443;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0.027624309392265192;
          result[1] += 0;
          result[2] += 0.008287292817679558;
          result[3] += 0.27071823204419887;
          result[4] += 0.6933701657458563;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.030495552731893267;
          result[4] += 0.9695044472681067;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9933837429111532;
          result[1] += 0;
          result[2] += 0.005671077504725898;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000945179584120983;
        } else {
          result[0] += 0.9997080657269164;
          result[1] += 0;
          result[2] += 0.00029193427308366;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0.47054283509133005;
          result[1] += 0.002701312065860561;
          result[2] += 0.0061744275791098535;
          result[3] += 0.518909184461024;
          result[4] += 0.0006431695394906097;
          result[5] += 0.0006431695394906097;
          result[6] += 0.00038590172369436584;
        } else {
          result[0] += 0.8299249288118044;
          result[1] += 0;
          result[2] += 0.009060315816722755;
          result[3] += 0.1470359823971007;
          result[4] += 0.00983691431529899;
          result[5] += 0.0010354646647683149;
          result[6] += 0.003106393994304944;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41980000))) ) ) {
          result[0] += 0.5125448028673836;
          result[1] += 0;
          result[2] += 0.004235907461713914;
          result[3] += 0.48224177256435324;
          result[4] += 0.0009775171065493648;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9224683544303799;
          result[1] += 0.001186708860759494;
          result[2] += 0.001878955696202532;
          result[3] += 0.07367484177215192;
          result[4] += 0.0001977848101265823;
          result[5] += 0.0001977848101265823;
          result[6] += 0.0003955696202531646;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 0.9961547291092746;
          result[1] += 0.0001147842056932966;
          result[2] += 0.0006887052341597796;
          result[3] += 0.0025252525252525255;
          result[4] += 0.0002295684113865932;
          result[5] += 0.0002869605142332415;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03383458646616541;
          result[3] += 0.41353383458646614;
          result[4] += 0.5526315789473685;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41080000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.18197088465845465;
          result[1] += 0;
          result[2] += 0.005319148936170213;
          result[3] += 0.8115901455767077;
          result[4] += 0;
          result[5] += 0.0011198208286674132;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x433f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9952765203700059;
          result[1] += 0;
          result[2] += 0.0035426097224955716;
          result[3] += 0.000787246604999016;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000393623302499508;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40e00000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.29965156794425085;
          result[1] += 0;
          result[2] += 0.03484320557491289;
          result[3] += 0.6655052264808362;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.009398496240601503;
          result[2] += 0;
          result[3] += 0.9906015037593985;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
          result[0] += 0;
          result[1] += 0.04318936877076412;
          result[2] += 0;
          result[3] += 0.10631229235880399;
          result[4] += 0.8504983388704319;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40b00000))) ) ) {
          result[0] += 0.22970159611380986;
          result[1] += 0.00034698126301179735;
          result[2] += 0.005204718945176961;
          result[3] += 0.7501734906315058;
          result[4] += 0.013532269257460098;
          result[5] += 0.001040943789035392;
          result[6] += 0;
        } else {
          result[0] += 0.1248665955176094;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8644610458911419;
          result[4] += 0.010672358591248666;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
          result[0] += 0;
          result[1] += 0.015355086372360844;
          result[2] += 0;
          result[3] += 0.16602687140115163;
          result[4] += 0.8186180422264875;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0.9968720448097766;
          result[1] += 0.0005092020077107733;
          result[2] += 0.002073179602822434;
          result[3] += 0.0002909725758347276;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00025460100385538663;
        } else {
          result[0] += 0.9186991869918699;
          result[1] += 0;
          result[2] += 0.036585365853658534;
          result[3] += 0.044715447154471545;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0.9271523178807947;
          result[1] += 0.0728476821192053;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9285714285714286;
          result[5] += 0.07142857142857142;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9996821360457724;
          result[4] += 0;
          result[5] += 0.0003178639542275906;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0.9552906110283159;
          result[1] += 0;
          result[2] += 0.044709388971684055;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9881221719457014;
          result[1] += 0;
          result[2] += 0.009615384615384616;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0022624434389140274;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0.0015807777426493834;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9968384445147013;
          result[4] += 0.001264622194119507;
          result[5] += 0.0003161555485298767;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9993898718730934;
          result[5] += 0.0006101281269066504;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.32;
          result[2] += 0.44;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.24;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0.9965320782759475;
          result[1] += 0;
          result[2] += 0.002229378251176616;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012385434728758979;
        } else {
          result[0] += 0.9998719918074757;
          result[1] += 0;
          result[2] += 0.00012800819252432156;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0;
          result[1] += 0.044444444444444446;
          result[2] += 0;
          result[3] += 0.9555555555555556;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8820754716981132;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1179245283018868;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0.9196814562002276;
          result[1] += 0.0038680318543799774;
          result[2] += 0.011376564277588168;
          result[3] += 0.0646188850967008;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004550625711035267;
        } else {
          result[0] += 0.0037212449255751017;
          result[1] += 0;
          result[2] += 0.005074424898511502;
          result[3] += 0.9912043301759134;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0.9930121368150056;
          result[1] += 0;
          result[2] += 0.003677822728944465;
          result[3] += 0.002206693637366679;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011033468186833395;
        } else {
          result[0] += 0.9415094339622642;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05849056603773585;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41dc0000))) ) ) {
          result[0] += 0.002680965147453083;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9939678284182306;
          result[4] += 0.0013404825737265416;
          result[5] += 0.0020107238605898124;
          result[6] += 0;
        } else {
          result[0] += 0.9933774834437086;
          result[1] += 0;
          result[2] += 0.005117399157134257;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0015051173991571343;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 0.9865714407903178;
          result[1] += 0.0002565966727964761;
          result[2] += 0.0006414916819911902;
          result[3] += 0.012060043621434376;
          result[4] += 0.0003421288970619681;
          result[5] += 8.553222426549202e-05;
          result[6] += 4.276611213274601e-05;
        } else {
          result[0] += 0.9370242214532872;
          result[1] += 0.007612456747404845;
          result[2] += 0;
          result[3] += 0.05536332179930796;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.49304482225656876;
          result[1] += 0;
          result[2] += 0.03168469860896445;
          result[3] += 0.42967542503863987;
          result[4] += 0.04559505409582689;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.20468431771894094;
          result[1] += 0.01120162932790224;
          result[2] += 0.006109979633401222;
          result[3] += 0.7780040733197556;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.004555808656036446;
          result[2] += 0;
          result[3] += 0.2308276385725133;
          result[4] += 0.7646165527714502;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0.31910352187833513;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6808964781216649;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9667049368541906;
          result[1] += 0;
          result[2] += 0.03329506314580941;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0.08196721311475409;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9180327868852459;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.90346834829008;
          result[1] += 0;
          result[2] += 0.005821004123211254;
          result[3] += 0.08755760368663594;
          result[4] += 0.001697792869269949;
          result[5] += 0.0007276255154014067;
          result[6] += 0.0007276255154014067;
        }
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9943899018232819;
          result[1] += 0;
          result[2] += 0.0037400654511453952;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0018700327255726976;
        } else {
          result[0] += 0.9998339973439575;
          result[1] += 0;
          result[2] += 0.00016600265604249667;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0.021876647337901952;
          result[1] += 0.007116499736425936;
          result[2] += 0.010015814443858724;
          result[3] += 0.9580917237743806;
          result[4] += 0.0015814443858724301;
          result[5] += 0.0013178703215603585;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.037868162692847124;
          result[3] += 0;
          result[4] += 0.9593267882187938;
          result[5] += 0.002805049088359046;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0.5475169703465524;
          result[1] += 0;
          result[2] += 0.002322257949267596;
          result[3] += 0.44980350125044666;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003572704537334763;
        } else {
          result[0] += 0.973720883933904;
          result[1] += 0;
          result[2] += 0.0063706948039020505;
          result[3] += 0.018913000199084214;
          result[4] += 0;
          result[5] += 0.00019908421262193908;
          result[6] += 0.0007963368504877563;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.011627906976744186;
          result[1] += 0.09302325581395349;
          result[2] += 0;
          result[3] += 0.8953488372093024;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42420000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 0.9960161274839205;
          result[1] += 0;
          result[2] += 0.0005759815685898052;
          result[3] += 0.0033118940193913797;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9.599692809830086e-05;
        } else {
          result[0] += 0.06691449814126393;
          result[1] += 0.007434944237918215;
          result[2] += 0.05204460966542751;
          result[3] += 0.8736059479553904;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42260000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.012327773749093546;
          result[1] += 0.003988397389412618;
          result[2] += 0.01704133430021755;
          result[3] += 0.8600435097897027;
          result[4] += 0.10406091370558376;
          result[5] += 0.0025380710659898475;
          result[6] += 0;
        } else {
          result[0] += 0.5549738219895288;
          result[1] += 0;
          result[2] += 0.006108202443280977;
          result[3] += 0.43826352530541013;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006544502617801048;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0.9745638007147363;
          result[1] += 0;
          result[2] += 0.001786840445659029;
          result[3] += 0.022072734916964477;
          result[4] += 0;
          result[5] += 0.0002102165230187093;
          result[6] += 0.0013664073996216106;
        } else {
          result[0] += 0.7765726681127982;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.22342733188720174;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42da0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
          result[0] += 0;
          result[1] += 0.0009910802775024777;
          result[2] += 0;
          result[3] += 0.9990089197224975;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9186046511627907;
          result[1] += 0.08139534883720931;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x4617d400))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.027559055118110236;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9724409448818898;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0.626984126984127;
          result[1] += 0;
          result[2] += 0.0873015873015873;
          result[3] += 0.2857142857142857;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.00546448087431694;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.994535519125683;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.050788091068301226;
          result[4] += 0.9492119089316988;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
          result[0] += 0.26627218934911245;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7258382642998028;
          result[4] += 0.007889546351084813;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5747126436781609;
          result[1] += 0;
          result[2] += 0.013584117032392894;
          result[3] += 0.4117032392894462;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0.08979206049149338;
          result[1] += 0;
          result[2] += 0.00945179584120983;
          result[3] += 0.9007561436672968;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3643724696356275;
          result[1] += 0.05263157894736842;
          result[2] += 0;
          result[3] += 0.582995951417004;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.25;
          result[1] += 0.75;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9983966650633317;
          result[1] += 0;
          result[2] += 0.0013628346961680295;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002405002405002405;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0.004273504273504274;
          result[1] += 0.03418803418803419;
          result[2] += 0;
          result[3] += 0.9572649572649573;
          result[4] += 0;
          result[5] += 0.004273504273504274;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.4019245979435803;
          result[1] += 0.0017136831004481942;
          result[2] += 0.009754811494858953;
          result[3] += 0.5673609280253099;
          result[4] += 0.01687318745056684;
          result[5] += 0.001581861323490641;
          result[6] += 0.0007909306617453205;
        } else {
          result[0] += 0.9663984855655466;
          result[1] += 0;
          result[2] += 0.00473260766682442;
          result[3] += 0.02768575485092286;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001183151916706105;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42440000))) ) ) {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.012102874432677761;
          result[2] += 0.002017145738779627;
          result[3] += 0.9858799798285426;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9852216748768473;
          result[1] += 0;
          result[2] += 0.014778325123152709;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0.5230024213075061;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4745762711864407;
          result[4] += 0;
          result[5] += 0.002421307506053269;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 0;
          result[1] += 0.0007163323782234956;
          result[2] += 0;
          result[3] += 0.9942693409742118;
          result[4] += 0.0021489971346704867;
          result[5] += 0.0028653295128939823;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1870967741935484;
          result[3] += 0;
          result[4] += 0.8064516129032258;
          result[5] += 0.0064516129032258064;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x425e0000))) ) ) {
          result[0] += 0.998053701938354;
          result[1] += 0.0005163647918652685;
          result[2] += 0.0007944073721004131;
          result[3] += 0.0005958055290753099;
          result[4] += 0;
          result[5] += 0;
          result[6] += 3.972036860502066e-05;
        } else {
          result[0] += 0.9538648320518008;
          result[1] += 0;
          result[2] += 0.0084985835694051;
          result[3] += 0.03520841764467827;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0024281667341157424;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.4364293871336125;
          result[1] += 0;
          result[2] += 0.006661591168633422;
          result[3] += 0.5546250475827941;
          result[4] += 0;
          result[5] += 0.0005709935287400076;
          result[6] += 0.0017129805862200228;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.013725490196078431;
          result[2] += 0;
          result[3] += 0.9862745098039216;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 0.48375451263537905;
          result[1] += 0;
          result[2] += 0.024067388688327317;
          result[3] += 0.49217809867629364;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6532033426183844;
          result[1] += 0;
          result[2] += 0.025069637883008356;
          result[3] += 0.32172701949860727;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9933058702368692;
          result[1] += 0;
          result[2] += 0.006179196704428424;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005149330587023687;
        } else {
          result[0] += 0.9997944923962186;
          result[1] += 0;
          result[2] += 0.0002055076037813399;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.39126919967663704;
          result[1] += 0.001886284020479655;
          result[2] += 0.008623012665049851;
          result[3] += 0.5901374292643492;
          result[4] += 0.00754513608191862;
          result[5] += 0.0004042037186742118;
          result[6] += 0.00013473457289140393;
        } else {
          result[0] += 0.9665829145728643;
          result[1] += 0;
          result[2] += 0.0032663316582914573;
          result[3] += 0.028391959798994976;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0017587939698492463;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
          result[0] += 0.0012281240405280934;
          result[1] += 0;
          result[2] += 0.00368437212158428;
          result[3] += 0.9723672090881179;
          result[4] += 0.021799201719373655;
          result[5] += 0.00092109303039607;
          result[6] += 0;
        } else {
          result[0] += 0.9947275922671354;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.005272407732864675;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.025089605734767026;
          result[2] += 0;
          result[3] += 0.974910394265233;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42c00000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0.9963766789883981;
          result[1] += 0.001171174468396589;
          result[2] += 0.0020495553196940306;
          result[3] += 0.00010979760641218022;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00029279361709914724;
        } else {
          result[0] += 0.7668918918918919;
          result[1] += 0;
          result[2] += 0.033783783783783786;
          result[3] += 0.19932432432432431;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42900000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9987025624391827;
          result[4] += 0;
          result[5] += 0.0012974375608173856;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41300000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9716417910447761;
          result[1] += 0;
          result[2] += 0.028358208955223882;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42940000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9956513144890294;
          result[1] += 0;
          result[2] += 0.002569677801937142;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0017790077090334058;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9828042328042328;
          result[1] += 0;
          result[2] += 0.013227513227513227;
          result[3] += 0.003968253968253968;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41500000))) ) ) {
          result[0] += 0.22974963181148747;
          result[1] += 0.01914580265095729;
          result[2] += 0;
          result[3] += 0.7496318114874816;
          result[4] += 0.0014727540500736377;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.00321285140562249;
          result[3] += 0.9967871485943776;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.008902077151335312;
          result[1] += 0.02373887240356083;
          result[2] += 0;
          result[3] += 0.21068249258160238;
          result[4] += 0.7566765578635015;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0.5260545905707196;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4739454094292804;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13609467455621302;
          result[3] += 0;
          result[4] += 0.834319526627219;
          result[5] += 0.029585798816568046;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0014914243102162564;
          result[2] += 0.006711409395973154;
          result[3] += 0.9917971662938105;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0.9859154929577466;
          result[1] += 0.0016570008285004144;
          result[2] += 0.0019055509527754766;
          result[3] += 0.009776304888152445;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007456503728251866;
        } else {
          result[0] += 0.9986983403839896;
          result[1] += 0;
          result[2] += 0.0011064106736088514;
          result[3] += 0.000195248942401562;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0.4458004307250538;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5541995692749462;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9852631578947368;
          result[1] += 0;
          result[2] += 0.010225563909774436;
          result[3] += 0.0009022556390977444;
          result[4] += 0;
          result[5] += 0.0012030075187969924;
          result[6] += 0.002406015037593985;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.10714285714285714;
          result[1] += 0.10714285714285714;
          result[2] += 0;
          result[3] += 0.7857142857142857;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
          result[0] += 0.9836552748885586;
          result[1] += 0;
          result[2] += 0.01634472511144131;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.07739938080495358;
          result[1] += 0.006707946336429309;
          result[2] += 0.0015479876160990715;
          result[3] += 0.9138286893704851;
          result[4] += 0.0005159958720330238;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.056179775280898875;
          result[4] += 0.9438202247191011;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.3268608414239482;
          result[1] += 0;
          result[2] += 0.025889967637540454;
          result[3] += 0.6472491909385113;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9965034965034966;
          result[1] += 0;
          result[2] += 0.002497502497502498;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009990009990009992;
        } else {
          result[0] += 0.9996257173750311;
          result[1] += 0;
          result[2] += 0.00037428262496880976;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
          result[0] += 0.6682103870327489;
          result[1] += 0;
          result[2] += 0.006946741647370162;
          result[3] += 0.2801852464439299;
          result[4] += 0.04465762487595104;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8589722541454605;
          result[1] += 0.002134296503037268;
          result[2] += 0.0027910031193564273;
          result[3] += 0.13249055984239042;
          result[4] += 0.002462649811196848;
          result[5] += 0.0003283533081595797;
          result[6] += 0.0008208832703989492;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0.001299123091912959;
          result[2] += 0;
          result[3] += 0.9967521922702177;
          result[4] += 0.0009743423189347191;
          result[5] += 0.0009743423189347191;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03773584905660377;
          result[3] += 0;
          result[4] += 0.9622641509433962;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.000445632798573975;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9955436720142602;
          result[4] += 0.00267379679144385;
          result[5] += 0.001336898395721925;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0.1;
          result[1] += 0;
          result[2] += 0.65;
          result[3] += 0;
          result[4] += 0.25;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.012738853503184714;
          result[3] += 0;
          result[4] += 0.9808917197452229;
          result[5] += 0.006369426751592357;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42260000))) ) ) {
          result[0] += 0.9980408620207109;
          result[1] += 0.00011195074167366359;
          result[2] += 0.0007276798208788133;
          result[3] += 0.0009515813042261405;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00016792611251049538;
        } else {
          result[0] += 0.9841080651569328;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.015891934843067144;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0.8102203295685985;
          result[1] += 0.00043201876195766216;
          result[2] += 0.005122508177497994;
          result[3] += 0.18385484169598224;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00037030179596371043;
        } else {
          result[0] += 0.8811881188118812;
          result[1] += 0;
          result[2] += 0.019801980198019802;
          result[3] += 0.0924092409240924;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.006600660066006601;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0.18375094912680334;
          result[1] += 0.008352315869400152;
          result[2] += 0.005315110098709187;
          result[3] += 0.8025816249050873;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41a80000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41600000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.00535279805352798;
          result[1] += 0.00583941605839416;
          result[2] += 0.008759124087591242;
          result[3] += 0.9800486618004867;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42240000))) ) ) {
          result[0] += 0.998220640569395;
          result[1] += 0;
          result[2] += 0.0017793594306049821;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9728997289972899;
          result[1] += 0;
          result[2] += 0.02710027100271003;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 0.999351714144072;
          result[1] += 0;
          result[2] += 0.0005338824695877664;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00011440338634023568;
        } else {
          result[0] += 0.75;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.25;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.8804057661505607;
          result[1] += 0.002669514148424987;
          result[2] += 0.0019576437088449907;
          result[3] += 0.11407723794269445;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008898380494749956;
        } else {
          result[0] += 0.42144731908511435;
          result[1] += 0;
          result[2] += 0.008061492313460818;
          result[3] += 0.5136857892763405;
          result[4] += 0.05549306336707911;
          result[5] += 0.00018747656542932134;
          result[6] += 0.0011248593925759281;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41c80000))) ) ) {
          result[0] += 0.029567854435178165;
          result[1] += 0;
          result[2] += 0.01819560272934041;
          result[3] += 0.8642911296436695;
          result[4] += 0.08794541319181198;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.994579945799458;
          result[5] += 0.005420054200542005;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
          result[0] += 0.45305164319248825;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5258215962441315;
          result[4] += 0.018779342723004695;
          result[5] += 0.002347417840375587;
          result[6] += 0;
        } else {
          result[0] += 0.9950594335469355;
          result[1] += 0.00019566599814117304;
          result[2] += 0.0008804969916352787;
          result[3] += 0.0037176539646822876;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00014674949860587978;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0.7282366899006378;
          result[1] += 0.0011864155420436009;
          result[2] += 0.004004152454397153;
          result[3] += 0.24610707400266946;
          result[4] += 0.02009491324336349;
          result[5] += 0.0002966038855109002;
          result[6] += 7.415097137772506e-05;
        } else {
          result[0] += 0.16083206494165397;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.839167935058346;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42220000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.39285714285714285;
          result[3] += 0;
          result[4] += 0.4642857142857143;
          result[5] += 0.14285714285714285;
          result[6] += 0;
        } else {
          result[0] += 0.9932224276032039;
          result[1] += 0;
          result[2] += 0.004929143561306223;
          result[3] += 0.0006161429451632779;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012322858903265558;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
          result[0] += 0;
          result[1] += 0.0182370820668693;
          result[2] += 0.0007598784194528875;
          result[3] += 0.9810030395136778;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.963963963963964;
          result[1] += 0;
          result[2] += 0.036036036036036036;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.010425020048115477;
          result[2] += 0;
          result[3] += 0.9871692060946271;
          result[4] += 0.0024057738572574178;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
          result[0] += 0.043478260869565216;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9565217391304348;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5473098330241187;
          result[1] += 0;
          result[2] += 0.017316017316017316;
          result[3] += 0.4217687074829932;
          result[4] += 0.013605442176870748;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41400000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0.008771929824561403;
          result[1] += 0.02631578947368421;
          result[2] += 0;
          result[3] += 0.19883040935672514;
          result[4] += 0.7660818713450293;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0018018018018018018;
          result[4] += 0.9981981981981982;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0.22738693467336685;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2135678391959799;
          result[4] += 0.5577889447236181;
          result[5] += 0.001256281407035176;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02443133951137321;
          result[3] += 0.9275484414490311;
          result[4] += 0.04549283909014322;
          result[5] += 0.002527379949452401;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.05649717514124294;
          result[1] += 0;
          result[2] += 0.01694915254237288;
          result[3] += 0.9265536723163842;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9958268127282212;
          result[1] += 0;
          result[2] += 0.003129890453834116;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010432968179447052;
        } else {
          result[0] += 0.9996680360180921;
          result[1] += 0;
          result[2] += 0.000331963981907963;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9525562951423311;
          result[1] += 0.001274606996176179;
          result[2] += 0.005523296983430109;
          result[3] += 0.03965443988103668;
          result[4] += 0;
          result[5] += 0.000141622999575131;
          result[6] += 0.000849737997450786;
        } else {
          result[0] += 0;
          result[1] += 0.0018248175182481751;
          result[2] += 0.006569343065693431;
          result[3] += 0.9916058394160584;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
          result[0] += 0.23593073593073594;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7586580086580087;
          result[4] += 0.004329004329004329;
          result[5] += 0.0010822510822510823;
          result[6] += 0;
        } else {
          result[0] += 0.9956867114769419;
          result[1] += 0.0006110492074332339;
          result[2] += 0.0010064339887135617;
          result[3] += 0.0024801409007584197;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00021566442615290608;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x3f800000))) ) ) {
          result[0] += 0.42889137737961924;
          result[1] += 0;
          result[2] += 0.007838745800671893;
          result[3] += 0.5621500559910414;
          result[4] += 0.0011198208286674132;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.006298110566829952;
          result[1] += 0;
          result[2] += 0.023792862141357597;
          result[3] += 0.7893631910426873;
          result[4] += 0.1805458362491253;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.18470254957507082;
          result[1] += 0;
          result[2] += 0.006798866855524079;
          result[3] += 0.8073654390934845;
          result[4] += 0;
          result[5] += 0.0011331444759206798;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x43820000))) ) ) {
          result[0] += 0.9953721558040879;
          result[1] += 0;
          result[2] += 0.003278056305437717;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001349787890474354;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0.32019704433497537;
          result[1] += 0.011494252873563218;
          result[2] += 0;
          result[3] += 0.6683087027914614;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.021367521367521368;
          result[1] += 0;
          result[2] += 0.005698005698005698;
          result[3] += 0.9729344729344729;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41a40000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.9868511431655382;
          result[1] += 0.00019625159454420566;
          result[2] += 0.0003925031890884113;
          result[3] += 0.012363850456284957;
          result[4] += 9.812579727210283e-05;
          result[5] += 4.9062898636051415e-05;
          result[6] += 4.9062898636051415e-05;
        } else {
          result[0] += 0.8747993579454254;
          result[1] += 0;
          result[2] += 0.01765650080256822;
          result[3] += 0.10754414125200643;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x42cd0000))) ) ) {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42260000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0.6167892467664217;
          result[1] += 0.0017752979964494042;
          result[2] += 0.005833121988333757;
          result[3] += 0.37484149125031707;
          result[4] += 0;
          result[5] += 0.0005072279989855441;
          result[6] += 0.00025361399949277205;
        } else {
          result[0] += 0.02770409666961391;
          result[1] += 0;
          result[2] += 0.009725906277630416;
          result[3] += 0.8809313292071913;
          result[4] += 0.08104921898025347;
          result[5] += 0.0005894488653109342;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0.9760497995357671;
          result[1] += 0;
          result[2] += 0.0037982696771470775;
          result[3] += 0.019202363367799114;
          result[4] += 0;
          result[5] += 0.00010550749103186326;
          result[6] += 0.0008440599282549061;
        } else {
          result[0] += 0.782279848730416;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.21772015126958402;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 0.17675312199807877;
          result[1] += 0.013448607108549471;
          result[2] += 0;
          result[3] += 0.8097982708933718;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.008849557522123894;
          result[1] += 0.03982300884955752;
          result[2] += 0;
          result[3] += 0.9513274336283186;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.008264462809917356;
          result[3] += 0.9917355371900827;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9081632653061225;
          result[1] += 0;
          result[2] += 0.09183673469387756;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
          result[0] += 0.004559270516717325;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9954407294832827;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9850045440775522;
          result[1] += 0.0002272038776128446;
          result[2] += 0.0001514692517418964;
          result[3] += 0.014616782793093003;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13333333333333336;
          result[3] += 0.7333333333333334;
          result[4] += 0.13333333333333336;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9911492906416765;
          result[1] += 0;
          result[2] += 0.0003904724716907458;
          result[3] += 0.007809449433814916;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006507874528179097;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 0.7450164673253596;
          result[1] += 0;
          result[2] += 0.003640145605824233;
          result[3] += 0.23504940197607904;
          result[4] += 0.014560582423296931;
          result[5] += 0.0006933610677760444;
          result[6] += 0.0010400416016640667;
        } else {
          result[0] += 0.3911042944785276;
          result[1] += 0;
          result[2] += 0.009969325153374233;
          result[3] += 0.5989263803680982;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0.6539194915254237;
          result[1] += 0.0015889830508474577;
          result[2] += 0.006461864406779661;
          result[3] += 0.3170550847457627;
          result[4] += 0.02065677966101695;
          result[5] += 0.000211864406779661;
          result[6] += 0.0001059322033898305;
        } else {
          result[0] += 0.9930039352864014;
          result[1] += 0;
          result[2] += 0.004372540445999125;
          result[3] += 0.0013117621337997377;
          result[4] += 0.0008745080891998251;
          result[5] += 0;
          result[6] += 0.00043725404459991256;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2807570977917981;
          result[1] += 0;
          result[2] += 0.012618296529968454;
          result[3] += 0.7066246056782335;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
          result[0] += 0;
          result[1] += 0.0425531914893617;
          result[2] += 0;
          result[3] += 0.9574468085106383;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
          result[0] += 0.006299212598425197;
          result[1] += 0.01889763779527559;
          result[2] += 0;
          result[3] += 0.047244094488188976;
          result[4] += 0.9275590551181102;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3341121495327103;
          result[4] += 0.6658878504672897;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.008064516129032258;
          result[1] += 0.024193548387096774;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.967741935483871;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0005265929436545551;
          result[3] += 0.9984202211690364;
          result[4] += 0.0010531858873091102;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9695780176643769;
          result[1] += 0.011776251226692838;
          result[2] += 0.01864573110893033;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0.8448275862068966;
          result[1] += 0;
          result[2] += 0.05172413793103448;
          result[3] += 0.10344827586206896;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.17346938775510204;
          result[1] += 0;
          result[2] += 0.023809523809523808;
          result[3] += 0.8027210884353742;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45b53000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.996142719382835;
          result[1] += 0;
          result[2] += 0.0028929604628736743;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009643201542912247;
        } else {
          result[0] += 0.9999171945514015;
          result[1] += 0;
          result[2] += 8.280544859851778e-05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x46219c00))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
          result[0] += 0.949621105809711;
          result[1] += 0.001964636542239686;
          result[2] += 0.005051922537187764;
          result[3] += 0.0420993544765647;
          result[4] += 0;
          result[5] += 0.00014033118158854902;
          result[6] += 0.0011226494527083921;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.016652789342214824;
          result[3] += 0.9533721898417986;
          result[4] += 0.027477102414654456;
          result[5] += 0.0024979184013322235;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0;
          result[1] += 0.0023171135385633896;
          result[2] += 0.007282356835484938;
          result[3] += 0.9904005296259517;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9984732824427481;
          result[5] += 0.0015267175572519084;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40c00000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.006609385327164574;
          result[2] += 0;
          result[3] += 0.9491077329808327;
          result[4] += 0.044282881692002646;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.017488076311605722;
          result[3] += 0;
          result[4] += 0.9793322734499205;
          result[5] += 0.003179650238473768;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 0.9987860059596071;
          result[1] += 0;
          result[2] += 0.0012139940403928925;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.17647058823529413;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8235294117647058;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0.3530864197530864;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6469135802469136;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9687184661957619;
          result[1] += 0;
          result[2] += 0.026236125126135216;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.005045408678102927;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0.10419681620839363;
          result[1] += 0.000723589001447178;
          result[2] += 0;
          result[3] += 0.8914616497829233;
          result[4] += 0.002170767004341534;
          result[5] += 0.001447178002894356;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.013412816691505217;
          result[3] += 0;
          result[4] += 0.9836065573770492;
          result[5] += 0.0029806259314456036;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 0.998842401190673;
          result[1] += 0;
          result[2] += 0.0011024750565018467;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5.512375282509233e-05;
        } else {
          result[0] += 0.7058736280035598;
          result[1] += 0.0022248590922574903;
          result[2] += 0.006229605458320973;
          result[3] += 0.2844853159299911;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011865915158706616;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41280000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0.24396782841823056;
          result[1] += 0.029490616621983913;
          result[2] += 0;
          result[3] += 0.7265415549597856;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.029082774049217;
          result[1] += 0.008948545861297539;
          result[2] += 0.0044742729306487695;
          result[3] += 0.9574944071588367;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9688644688644689;
          result[4] += 0.030036630036630037;
          result[5] += 0.001098901098901099;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8192419825072886;
          result[4] += 0.18075801749271136;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45470800))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.006419073819348923;
          result[2] += 0.0041265474552957355;
          result[3] += 0;
          result[4] += 0.9876203576341128;
          result[5] += 0.0018340210912425492;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.9990434690190243;
          result[1] += 0.0004782654904878308;
          result[2] += 0.0002657030502710171;
          result[3] += 0.00015942183016261026;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5.3140610054203425e-05;
        } else {
          result[0] += 0.890302066772655;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.10969793322734499;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.8167562724014338;
          result[1] += 0.0038082437275985667;
          result[2] += 0.011200716845878138;
          result[3] += 0.16666666666666669;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0015681003584229393;
        } else {
          result[0] += 0.11975642760487144;
          result[1] += 0;
          result[2] += 0.0064276048714479025;
          result[3] += 0.8738159675236806;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x433d8000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9940972222222222;
          result[1] += 0;
          result[2] += 0.0030092592592592593;
          result[3] += 0.0025462962962962965;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00034722222222222224;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x424c0000))) ) ) {
          result[0] += 0.9256360078277887;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.07436399217221135;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.974;
          result[1] += 0;
          result[2] += 0.026;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
          result[0] += 0.0035842293906810036;
          result[1] += 0.025089605734767026;
          result[2] += 0;
          result[3] += 0.12186379928315412;
          result[4] += 0.8494623655913979;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.09591736350221347;
          result[1] += 0.0073782587309394985;
          result[2] += 0.002459419576979833;
          result[3] += 0.8932611903590753;
          result[4] += 0.000983767830791933;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.030927835051546393;
          result[4] += 0.9690721649484536;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.21826625386996903;
          result[1] += 0;
          result[2] += 0.021671826625386997;
          result[3] += 0;
          result[4] += 0.760061919504644;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.008968609865470852;
          result[3] += 0.9910313901345291;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9393939393939394;
          result[1] += 0;
          result[2] += 0.06060606060606061;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41100000))) ) ) {
          result[0] += 0.9983996060568755;
          result[1] += 0.00016414296852558578;
          result[2] += 0.0005334646477081538;
          result[3] += 0.0006155361319709467;
          result[4] += 0.00016414296852558578;
          result[5] += 0;
          result[6] += 0.00012310722639418935;
        } else {
          result[0] += 0.8647482014388489;
          result[1] += 0.004316546762589928;
          result[2] += 0.004892086330935252;
          result[3] += 0.1251798561151079;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008633093525179857;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41940000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.11363636363636363;
          result[3] += 0;
          result[4] += 0.8181818181818182;
          result[5] += 0.06818181818181818;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.006346328195829556;
          result[3] += 0.9936536718041704;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 0.4326490713587488;
          result[1] += 0;
          result[2] += 0.00997067448680352;
          result[3] += 0.5487781036168133;
          result[4] += 0.007038123167155425;
          result[5] += 0;
          result[6] += 0.0015640273704789834;
        } else {
          result[0] += 0.09294117647058824;
          result[1] += 0;
          result[2] += 0.001176470588235294;
          result[3] += 0.14588235294117646;
          result[4] += 0.7564705882352941;
          result[5] += 0.0035294117647058825;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9907502569373073;
          result[1] += 0;
          result[2] += 0.008221993833504625;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010277492291880781;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.999326750448833;
          result[1] += 0;
          result[2] += 0.0006732495511669659;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.044101433296582136;
          result[1] += 0.006615214994487321;
          result[2] += 0.013230429988974642;
          result[3] += 0.5683572216097024;
          result[4] += 0.36549062844542446;
          result[5] += 0.002205071664829107;
          result[6] += 0;
        } else {
          result[0] += 0.002231312755671253;
          result[1] += 0.004462625511342506;
          result[2] += 0.010784678319077723;
          result[3] += 0.9509111193752324;
          result[4] += 0.02900706582372629;
          result[5] += 0.0026031982149497955;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9809080895851181;
          result[1] += 0;
          result[2] += 0.006486354179415004;
          result[3] += 0.011381715824256518;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012238404112103782;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0015904572564612327;
          result[3] += 0.9984095427435388;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
          result[0] += 0;
          result[1] += 0.03355704697986577;
          result[2] += 0;
          result[3] += 0.1040268456375839;
          result[4] += 0.8624161073825504;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9961538461538462;
          result[4] += 0.0038461538461538464;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
          result[0] += 0.008771929824561403;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9912280701754386;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.17034700315457413;
          result[1] += 0.0005257623554153522;
          result[2] += 0;
          result[3] += 0.8288643533123028;
          result[4] += 0;
          result[5] += 0.0002628811777076761;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42940000))) ) ) {
          result[0] += 0.86;
          result[1] += 0;
          result[2] += 0.11;
          result[3] += 0;
          result[4] += 0.01;
          result[5] += 0.02;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.008233058898036731;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9917669411019633;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.9965634495731442;
          result[1] += 0.0005787874403125452;
          result[2] += 0.002351323976269715;
          result[3] += 0.00032556793517580666;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001808710750976704;
        } else {
          result[0] += 0.6617647058823529;
          result[1] += 0;
          result[2] += 0.14705882352941177;
          result[3] += 0.19117647058823528;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.034161490683229816;
          result[2] += 0;
          result[3] += 0.9658385093167702;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0.198334595003785;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.801665404996215;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.48058252427184467;
          result[1] += 0;
          result[2] += 0.0825242718446602;
          result[3] += 0;
          result[4] += 0.4368932038834951;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9106145251396648;
          result[4] += 0.05027932960893855;
          result[5] += 0.03910614525139665;
          result[6] += 0;
        } else {
          result[0] += 0.9860383944153578;
          result[1] += 0;
          result[2] += 0.011343804537521814;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002617801047120419;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0004268032437046522;
          result[3] += 0.7814767392232181;
          result[4] += 0.2176696542893726;
          result[5] += 0.0004268032437046522;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42df0000))) ) ) {
          result[0] += 0.9988944168048646;
          result[1] += 0;
          result[2] += 0.001105583195135434;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9655172413793104;
          result[1] += 0;
          result[2] += 0.034482758620689655;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b40000))) ) ) {
          result[0] += 0.25193798449612403;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7054263565891473;
          result[4] += 0.03875968992248062;
          result[5] += 0.003875968992248062;
          result[6] += 0;
        } else {
          result[0] += 0.9922284826112296;
          result[1] += 0.00029143190207888087;
          result[2] += 0.00034000388575869433;
          result[3] += 0.007042937633572954;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9.714396735962695e-05;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.021875;
          result[3] += 0;
          result[4] += 0.978125;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.4666666666666667;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5333333333333333;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42260000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0.6353495290034705;
          result[1] += 0.0037183936539414973;
          result[2] += 0.007188894397620228;
          result[3] += 0.35250371839365396;
          result[4] += 0;
          result[5] += 0.0004957858205255329;
          result[6] += 0.0007436787307882995;
        } else {
          result[0] += 0.03143189755529686;
          result[1] += 0.0002910360884749709;
          result[2] += 0.011350407450523865;
          result[3] += 0.879802095459837;
          result[4] += 0.07566938300349244;
          result[5] += 0.0014551804423748546;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.6981903093987157;
          result[1] += 0;
          result[2] += 0.002335084646818447;
          result[3] += 0.29889083479276124;
          result[4] += 0;
          result[5] += 0.0005837711617046118;
          result[6] += 0;
        } else {
          result[0] += 0.9858613161451294;
          result[1] += 0;
          result[2] += 0.0023911009460442873;
          result[3] += 0.011227778355338393;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005198045534878886;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0.5142857142857142;
          result[1] += 0;
          result[2] += 0.007142857142857143;
          result[3] += 0.4785714285714286;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0008880994671403197;
          result[1] += 0.023090586145648313;
          result[2] += 0;
          result[3] += 0.9760213143872114;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41100000))) ) ) {
          result[0] += 0.997081570115278;
          result[1] += 7.296074711805048e-05;
          result[2] += 0.0009484897125346563;
          result[3] += 0.0015321756894790602;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00036480373559025247;
        } else {
          result[0] += 0.8845628415300546;
          result[1] += 0.0034153005464480873;
          result[2] += 0.0047814207650273225;
          result[3] += 0.10655737704918032;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006830601092896175;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0.0003022061045633122;
          result[1] += 0.005439709882139619;
          result[2] += 0.004533091568449683;
          result[3] += 0.9184043517679057;
          result[4] += 0.07041402236325174;
          result[5] += 0.0009066183136899365;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x41d40000))) ) ) {
          result[0] += 0.946236559139785;
          result[1] += 0;
          result[2] += 0.014336917562724014;
          result[3] += 0.03942652329749104;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9899337988573501;
          result[1] += 0;
          result[2] += 0.0020857894259544755;
          result[3] += 0.007980411716695383;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
          result[0] += 0.15839375348577803;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.841606246514222;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0.9833918875758545;
          result[1] += 0;
          result[2] += 0.00926221654423507;
          result[3] += 0.001596933886937081;
          result[4] += 0.0025550942190993298;
          result[5] += 0.0012775471095496649;
          result[6] += 0.001916320664324497;
        } else {
          result[0] += 0.9235294117647059;
          result[1] += 0;
          result[2] += 0.07647058823529412;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0.9415863602668642;
          result[1] += 0.0013343217197924386;
          result[2] += 0.0016308376575240914;
          result[3] += 0.05500370644922163;
          result[4] += 0.0004447739065974795;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9981708331023781;
          result[1] += 0.00016628789978382575;
          result[2] += 0.0004434343994235354;
          result[3] += 0.0008868687988470708;
          result[4] += 0.00016628789978382575;
          result[5] += 0.00016628789978382575;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9752380952380952;
          result[1] += 0;
          result[2] += 0.007619047619047619;
          result[3] += 0;
          result[4] += 0.007619047619047619;
          result[5] += 0.0038095238095238095;
          result[6] += 0.005714285714285714;
        } else {
          result[0] += 0.7074601844090529;
          result[1] += 0;
          result[2] += 0.008382229673093045;
          result[3] += 0.2816429170159263;
          result[4] += 0;
          result[5] += 0.0016764459346186088;
          result[6] += 0.0008382229673093044;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0.44945240101095196;
          result[1] += 0.0029486099410278013;
          result[2] += 0;
          result[3] += 0.4932603201347936;
          result[4] += 0.05433866891322662;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.12652068126520682;
          result[1] += 0;
          result[2] += 0.0170316301703163;
          result[3] += 0.021897810218978103;
          result[4] += 0.8345498783454988;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0.4260977118119975;
          result[1] += 0.0024737167594310453;
          result[2] += 0.006493506493506494;
          result[3] += 0.5092764378478665;
          result[4] += 0.055658627087198514;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.23098394975575715;
          result[1] += 0;
          result[2] += 0.022330774598743892;
          result[3] += 0.02930914166085136;
          result[4] += 0.7173761339846476;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0.16752246469833118;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8324775353016688;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.02734375;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.97265625;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41100000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6705882352941176;
          result[1] += 0;
          result[2] += 0.25882352941176473;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.07058823529411765;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x43438000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
          result[0] += 0.7931034482758621;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.20689655172413793;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9947183098591549;
          result[1] += 0;
          result[2] += 0.004303599374021909;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009780907668231612;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41c80000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
          result[0] += 0.11363636363636363;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7954545454545454;
          result[4] += 0.09090909090909091;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6092177291188418;
          result[1] += 0;
          result[2] += 0.010418506092177293;
          result[3] += 0.33462828889281304;
          result[4] += 0.04414621225498853;
          result[5] += 0.0007063393960798165;
          result[6] += 0.0008829242450997705;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 0.8683666436940042;
          result[1] += 0.00895933838731909;
          result[2] += 0.0006891798759476223;
          result[3] += 0.12198483804272915;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9861116903699378;
          result[1] += 0.0003336530842056971;
          result[2] += 0.0006255995328856821;
          result[3] += 0.01247028402218793;
          result[4] += 0.000291946448679985;
          result[5] += 0.00012511990657713642;
          result[6] += 4.170663552571214e-05;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0.32718780727630287;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6728121927236972;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8457869634340223;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.15421303656597773;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 0.7917029300841312;
          result[1] += 0;
          result[2] += 0.01508558166521613;
          result[3] += 0.0005802146794313896;
          result[4] += 0.19031041485349579;
          result[5] += 0.0005802146794313896;
          result[6] += 0.0017406440382941688;
        } else {
          result[0] += 0.9409660107334525;
          result[1] += 0;
          result[2] += 0.0035778175313059034;
          result[3] += 0;
          result[4] += 0.055456171735241505;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.014604150653343582;
          result[2] += 0;
          result[3] += 0.9853958493466565;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9476190476190476;
          result[1] += 0;
          result[2] += 0.05238095238095238;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0.9871285323609845;
          result[1] += 0.0004740200546946217;
          result[2] += 0.0006563354603463993;
          result[3] += 0.011485870556061987;
          result[4] += 7.292616226071102e-05;
          result[5] += 0;
          result[6] += 0.00018231540565177758;
        } else {
          result[0] += 0.6855388813096862;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.31377899045020463;
          result[4] += 0;
          result[5] += 0.0006821282401091405;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42940000))) ) ) {
          result[0] += 0.17704280155642024;
          result[1] += 0;
          result[2] += 0.024319066147859923;
          result[3] += 0.7976653696498055;
          result[4] += 0.0009727626459143969;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9206145966709345;
          result[1] += 0;
          result[2] += 0.009389671361502346;
          result[3] += 0.06658130601792572;
          result[4] += 0.0012804097311139562;
          result[5] += 0.0012804097311139562;
          result[6] += 0.0008536064874093041;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.005805515239477504;
          result[3] += 0.8037735849056604;
          result[4] += 0.19042089985486213;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
          result[0] += 0.7762237762237763;
          result[1] += 0;
          result[2] += 0.07692307692307693;
          result[3] += 0.14685314685314685;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41500000))) ) ) {
          result[0] += 0.1572192513368984;
          result[1] += 0.022459893048128343;
          result[2] += 0;
          result[3] += 0.8203208556149733;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.002785515320334262;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9972144846796658;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x420c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9971876255524307;
          result[4] += 0.0024106066693451184;
          result[5] += 0.0004017677782241864;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40900000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9978632478632479;
          result[5] += 0.002136752136752137;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0.08695652173913043;
          result[2] += 0.8260869565217391;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.08695652173913043;
          result[6] += 0;
        } else {
          result[0] += 0.7959183673469388;
          result[1] += 0.04081632653061224;
          result[2] += 0.14285714285714285;
          result[3] += 0.02040816326530612;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x424c0000))) ) ) {
          result[0] += 0.9985479186834464;
          result[1] += 0.0002074401880791039;
          result[2] += 0.0006223205642373117;
          result[3] += 0.00048402710551790907;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001382934587194026;
        } else {
          result[0] += 0.9939512195121951;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.006048780487804878;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5409836065573771;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.45901639344262296;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x425c0000))) ) ) {
          result[0] += 0.566192324277706;
          result[1] += 0.0018686215322696567;
          result[2] += 0.007187005893344834;
          result[3] += 0.42374586747161136;
          result[4] += 0;
          result[5] += 0.00043122035360069;
          result[6] += 0.0005749604714675867;
        } else {
          result[0] += 0.1191806331471136;
          result[1] += 0.0148975791433892;
          result[2] += 0.000931098696461825;
          result[3] += 0.8649906890130353;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0.9977596415426468;
          result[1] += 0;
          result[2] += 0.0022403584573531766;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.962198313463216;
          result[1] += 0;
          result[2] += 0.0061064262867112536;
          result[3] += 0.030532131433556268;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011631288165164292;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42640000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8;
          result[5] += 0.2;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41f40000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9804318879175592;
          result[1] += 0.00011578764545822961;
          result[2] += 0.0016210270364152145;
          result[3] += 0.0175997221096509;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00023157529091645922;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 0.8858564910825384;
          result[1] += 0.0015761094981335546;
          result[2] += 0.0035669846536706762;
          result[3] += 0.1083367897138117;
          result[4] += 0;
          result[5] += 8.295313148071339e-05;
          result[6] += 0.0005806719203649938;
        } else {
          result[0] += 0.5102521800612774;
          result[1] += 0;
          result[2] += 0.003063869903370257;
          result[3] += 0.4864482677350931;
          result[4] += 0;
          result[5] += 0.00023568230025925054;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x3f800000))) ) ) {
          result[0] += 0.42564655172413796;
          result[1] += 0;
          result[2] += 0.00646551724137931;
          result[3] += 0.5657327586206896;
          result[4] += 0.0021551724137931034;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.00967741935483871;
          result[1] += 0;
          result[2] += 0.01935483870967742;
          result[3] += 0.7806451612903226;
          result[4] += 0.1896774193548387;
          result[5] += 0.0006451612903225806;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40e00000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.30612244897959184;
          result[1] += 0;
          result[2] += 0.01020408163265306;
          result[3] += 0.6836734693877551;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42f90000))) ) ) {
          result[0] += 0;
          result[1] += 0.014375561545372867;
          result[2] += 0;
          result[3] += 0.9856244384546271;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.043478260869565216;
          result[1] += 0.30434782608695654;
          result[2] += 0;
          result[3] += 0.6521739130434783;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9919472913616398;
          result[1] += 0;
          result[2] += 0.008052708638360176;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9993765586034913;
          result[1] += 0;
          result[2] += 0.0006234413965087282;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0.4284514813482068;
          result[1] += 0.0017992083483267364;
          result[2] += 0.0034784694734316906;
          result[3] += 0.4825476790212307;
          result[4] += 0.08252368957658632;
          result[5] += 0.000839630562552477;
          result[6] += 0.0003598416696653473;
        } else {
          result[0] += 0.9330153912854975;
          result[1] += 0;
          result[2] += 0.010188597442011706;
          result[3] += 0.05376110990678517;
          result[4] += 0;
          result[5] += 0.00043355733795794494;
          result[6] += 0.00260134402774767;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
          result[0] += 0.45933014354066987;
          result[1] += 0.03349282296650718;
          result[2] += 0;
          result[3] += 0.507177033492823;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.052537045352492144;
          result[1] += 0;
          result[2] += 0.01796138302649304;
          result[3] += 0.8989672204759767;
          result[4] += 0.02918724741805119;
          result[5] += 0.001347103726986978;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0.01990049751243781;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7164179104477612;
          result[4] += 0.263681592039801;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.002840909090909091;
          result[1] += 0.04261363636363636;
          result[2] += 0;
          result[3] += 0.3068181818181818;
          result[4] += 0.6477272727272727;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04699738903394256;
          result[4] += 0.9530026109660574;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.00176522506619594;
          result[4] += 0.9982347749338041;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45afc400))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40600000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9965412004069176;
          result[1] += 0;
          result[2] += 0.003051881993896236;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004069175991861648;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428e0000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.032639885222381634;
          result[1] += 0.002510760401721664;
          result[2] += 0.013629842180774749;
          result[3] += 0.8518651362984218;
          result[4] += 0.09827833572453372;
          result[5] += 0.0010760401721664275;
          result[6] += 0;
        } else {
          result[0] += 0.9830248883216337;
          result[1] += 0;
          result[2] += 0.005105296745373325;
          result[3] += 0.010721123165283982;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001148691767708998;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.006936416184971098;
          result[2] += 0;
          result[3] += 0.24161849710982658;
          result[4] += 0.7502890173410405;
          result[5] += 0.0011560693641618498;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.008316008316008316;
          result[3] += 0.9864864864864865;
          result[4] += 0.004158004158004158;
          result[5] += 0.0010395010395010396;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
          result[0] += 0.14492753623188406;
          result[1] += 0.017786561264822136;
          result[2] += 0.002635046113306983;
          result[3] += 0.8346508563899868;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41dc0000))) ) ) {
          result[0] += 0;
          result[1] += 0.001160092807424594;
          result[2] += 0.002900232018561485;
          result[3] += 0.9959396751740139;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9753846153846154;
          result[1] += 0.011282051282051283;
          result[2] += 0.013333333333333334;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x419c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.010050251256281407;
          result[1] += 0;
          result[2] += 0.02512562814070352;
          result[3] += 0.964824120603015;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cc0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x434b0000))) ) ) {
          result[0] += 0;
          result[1] += 0.013745704467353952;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9862542955326461;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9981750159686102;
          result[1] += 0;
          result[2] += 0.0014599872251117802;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00036499680627794504;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
          result[0] += 0.6278039719959995;
          result[1] += 0.002571795970852979;
          result[2] += 0.00885840834404915;
          result[3] += 0.34190598656950993;
          result[4] += 0.016716673810544362;
          result[5] += 0.00014287755393627662;
          result[6] += 0.0020002857551078726;
        } else {
          result[0] += 0.01588785046728972;
          result[1] += 0;
          result[2] += 0.020560747663551402;
          result[3] += 0.6242990654205608;
          result[4] += 0.33271028037383177;
          result[5] += 0.0065420560747663555;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0.0011148272017837235;
          result[1] += 0;
          result[2] += 0.0011148272017837235;
          result[3] += 0.6744704570791528;
          result[4] += 0.3232998885172798;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7626469783975937;
          result[1] += 0;
          result[2] += 0.0008203445447087777;
          result[3] += 0.23625922887612796;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00027344818156959256;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41780000))) ) ) {
          result[0] += 0.03076923076923077;
          result[1] += 0;
          result[2] += 0.09230769230769231;
          result[3] += 0;
          result[4] += 0.8307692307692308;
          result[5] += 0.046153846153846156;
          result[6] += 0;
        } else {
          result[0] += 0.0004677268475210477;
          result[1] += 0.0004677268475210477;
          result[2] += 0.0009354536950420954;
          result[3] += 0.9967259120673526;
          result[4] += 0;
          result[5] += 0.001403180542563143;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.009821428571428571;
          result[2] += 0;
          result[3] += 0.9901785714285715;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42740000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42860000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0.9991617770326908;
          result[1] += 5.2388935456831524e-05;
          result[2] += 0.0006286672254819783;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00015716680637049458;
        } else {
          result[0] += 0;
          result[1] += 0.6;
          result[2] += 0;
          result[3] += 0.4;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.0407911001236094;
          result[1] += 0.022249690976514216;
          result[2] += 0.042027194066749075;
          result[3] += 0.8949320148331273;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.604390543444888;
          result[1] += 0;
          result[2] += 0.00460546515198035;
          result[3] += 0.3905434448879337;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000460546515198035;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x41fc0000))) ) ) {
          result[0] += 0.9839188773942436;
          result[1] += 0;
          result[2] += 0.003380108573184472;
          result[3] += 0.012086448837447505;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006145651951244494;
        } else {
          result[0] += 0.7142857142857143;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.14285714285714285;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9951946179721288;
          result[1] += 0;
          result[2] += 0.003363767419509851;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014416146083613647;
        } else {
          result[0] += 0.9997102289191538;
          result[1] += 0;
          result[2] += 0.0002897710808461316;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42aa0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.712139030445577;
          result[1] += 0.001568012544100353;
          result[2] += 0.003136025088200706;
          result[3] += 0.2815889193780218;
          result[4] += 0.000522670848033451;
          result[5] += 0.00013066771200836275;
          result[6] += 0.0009146739840585393;
        } else {
          result[0] += 0;
          result[1] += 0.03271028037383178;
          result[2] += 0;
          result[3] += 0.9532710280373833;
          result[4] += 0.009345794392523366;
          result[5] += 0.004672897196261683;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.827851644506648;
          result[1] += 0;
          result[2] += 0.01819454163750875;
          result[3] += 0.06717984604618614;
          result[4] += 0.08432470258922323;
          result[5] += 0.0006997900629811056;
          result[6] += 0.0017494751574527643;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0063528732313023395;
          result[3] += 0.7822697083453654;
          result[4] += 0.210799884493214;
          result[5] += 0.0005775339301183946;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.23045267489711935;
          result[1] += 0.015089163237311385;
          result[2] += 0;
          result[3] += 0.7544581618655692;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d70000))) ) ) {
          result[0] += 0.1102880658436214;
          result[1] += 0.005761316872427984;
          result[2] += 0.0032921810699588477;
          result[3] += 0.5251028806584362;
          result[4] += 0.35555555555555557;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.00291970802919708;
          result[2] += 0;
          result[3] += 0.06423357664233577;
          result[4] += 0.9328467153284672;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41700000))) ) ) {
          result[0] += 0.004201680672268908;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9831932773109244;
          result[5] += 0.012605042016806725;
          result[6] += 0;
        } else {
          result[0] += 0.0009517766497461929;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9990482233502538;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42940000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.65;
          result[3] += 0;
          result[4] += 0.05;
          result[5] += 0.3;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.005037783375314861;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9949622166246851;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41180000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.997730424914891;
          result[1] += 0;
          result[2] += 0.002269575085109066;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
          result[0] += 0;
          result[1] += 0.24324324324324326;
          result[2] += 0;
          result[3] += 0.7567567567567568;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7952755905511811;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2047244094488189;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.8315290933694182;
          result[1] += 0.005187189896256202;
          result[2] += 0.008795669824086604;
          result[3] += 0.15426251691474965;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002255299954894001;
        } else {
          result[0] += 0.11841227484989994;
          result[1] += 0;
          result[2] += 0.005670446964643095;
          result[3] += 0.875917278185457;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0.9226701916721746;
          result[1] += 0;
          result[2] += 0.0033046926635822873;
          result[3] += 0.07402511566424325;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9949575697946133;
          result[1] += 0;
          result[2] += 0.0030746525642602386;
          result[3] += 0.0007379166154224573;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012298610257040954;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41700000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9907834101382489;
          result[5] += 0.009216589861751152;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.00030845157310302283;
          result[2] += 0;
          result[3] += 0.999691548426897;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9666666666666667;
          result[5] += 0.03333333333333333;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41300000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.13953488372093023;
          result[2] += 0.7906976744186046;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.06976744186046512;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 0.9997078244609361;
          result[1] += 0;
          result[2] += 0.00023374043125109565;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5.843510781277391e-05;
        } else {
          result[0] += 0.7137404580152672;
          result[1] += 0.03435114503816794;
          result[2] += 0;
          result[3] += 0.25190839694656486;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0.9193473193473194;
          result[1] += 0.004662004662004662;
          result[2] += 0.010722610722610723;
          result[3] += 0.06503496503496503;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002331002331002331;
        } else {
          result[0] += 0.004815409309791332;
          result[1] += 0;
          result[2] += 0.005457463884430177;
          result[3] += 0.9897271268057785;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0.9316420014094433;
          result[1] += 0;
          result[2] += 0.0035236081747709656;
          result[3] += 0.06483439041578576;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9950518947622496;
          result[1] += 0;
          result[2] += 0.0034998793145063966;
          result[3] += 0.00048274197441467543;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009654839488293509;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x41c80000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9989023051591658;
          result[5] += 0.0010976948408342481;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.010984182776801408;
          result[3] += 0.9859402460456943;
          result[4] += 0;
          result[5] += 0.003075571177504394;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 0.9990392394822006;
          result[1] += 0;
          result[2] += 0.0006573624595469256;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00030339805825242716;
        } else {
          result[0] += 0.5365817968978637;
          result[1] += 0.002341235001463272;
          result[2] += 0.009364940005853088;
          result[3] += 0.4508340649692713;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000877963125548727;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0.9476117103235747;
          result[1] += 0;
          result[2] += 0.002054442732408834;
          result[3] += 0.050333846944016436;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.994904149478282;
          result[1] += 0;
          result[2] += 0.003397233681145353;
          result[3] += 0.000970638194612958;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007279786459597186;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
          result[0] += 0;
          result[1] += 0.05701754385964912;
          result[2] += 0;
          result[3] += 0.9429824561403509;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0033975084937712344;
          result[3] += 0.9966024915062288;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42400000))) ) ) {
          result[0] += 0.9191919191919192;
          result[1] += 0;
          result[2] += 0.08080808080808081;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0.005141388174807198;
          result[1] += 0.02570694087403599;
          result[2] += 0;
          result[3] += 0.35218508997429304;
          result[4] += 0.6169665809768637;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03156384505021521;
          result[4] += 0.9684361549497847;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x4467a000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42200000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9952681388012619;
          result[5] += 0.00473186119873817;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c00000))) ) ) {
          result[0] += 0;
          result[1] += 0.0006331117442228553;
          result[2] += 0.006964229186451409;
          result[3] += 0.99113643558088;
          result[4] += 0;
          result[5] += 0.0012662234884457107;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42180000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 0.9990881920875335;
          result[1] += 0;
          result[2] += 0.0008104959221923915;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010131199027404894;
        } else {
          result[0] += 0.7442748091603053;
          result[1] += 0.04198473282442748;
          result[2] += 0;
          result[3] += 0.21374045801526717;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.550537001618361;
          result[1] += 0.0010298661174047373;
          result[2] += 0.008974547594526996;
          result[3] += 0.43798734735912903;
          result[4] += 0;
          result[5] += 0.00029424746211563924;
          result[6] += 0.001176989848462557;
        } else {
          result[0] += 0.9851316468766131;
          result[1] += 0;
          result[2] += 0.00382034073309241;
          result[3] += 0.010738255033557045;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00030975735673722247;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0.9844760672703752;
          result[1] += 0;
          result[2] += 0.015523932729624839;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.08333333333333333;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0.16666666666666666;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0.16373056994818652;
          result[1] += 0.011398963730569948;
          result[2] += 0.002072538860103627;
          result[3] += 0.8207253886010363;
          result[4] += 0.002072538860103627;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.002066115702479339;
          result[3] += 0.9979338842975206;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41940000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.004273504273504274;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9957264957264957;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0.9991786754274621;
          result[1] += 0;
          result[2] += 0.0007466587023071754;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7.466587023071754e-05;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.04225352112676056;
          result[1] += 0.006197183098591549;
          result[2] += 0.011830985915492958;
          result[3] += 0.8552112676056338;
          result[4] += 0.08169014084507042;
          result[5] += 0.0028169014084507044;
          result[6] += 0;
        } else {
          result[0] += 0.9801652892561984;
          result[1] += 0;
          result[2] += 0.0059228650137741045;
          result[3] += 0.012258953168044076;
          result[4] += 0;
          result[5] += 0.0002754820936639118;
          result[6] += 0.0013774104683195593;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41b00000))) ) ) {
          result[0] += 0;
          result[1] += 0.0013214403700033035;
          result[2] += 0.005946481665014866;
          result[3] += 0.9927320779649819;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.011730205278592375;
          result[3] += 0;
          result[4] += 0.9838709677419355;
          result[5] += 0.004398826979472141;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 0.9971452073353656;
          result[1] += 0;
          result[2] += 0.00043547684714762664;
          result[3] += 0.002177384235738133;
          result[4] += 9.67726326994726e-05;
          result[5] += 0;
          result[6] += 0.00014515894904920887;
        } else {
          result[0] += 0.052287581699346414;
          result[1] += 0.013071895424836603;
          result[2] += 0;
          result[3] += 0.9215686274509804;
          result[4] += 0;
          result[5] += 0.013071895424836603;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7941176470588235;
          result[1] += 0;
          result[2] += 0.20588235294117646;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.012895662368112544;
          result[1] += 0.0035169988276670576;
          result[2] += 0.012504884720593983;
          result[3] += 0.9695193434935522;
          result[4] += 0;
          result[5] += 0.0015631105900742479;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.6114649681528662;
          result[1] += 0;
          result[2] += 0.0028662420382165603;
          result[3] += 0.38471337579617837;
          result[4] += 0;
          result[5] += 0.00047770700636942675;
          result[6] += 0.00047770700636942675;
        } else {
          result[0] += 0.9824016563146998;
          result[1] += 0;
          result[2] += 0.004037267080745342;
          result[3] += 0.012939958592132506;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006211180124223603;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x41080000))) ) ) {
          result[0] += 0.029411764705882353;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9705882352941176;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.24561403508771928;
          result[2] += 0;
          result[3] += 0.7543859649122807;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0.5732758620689655;
          result[1] += 0;
          result[2] += 0.017241379310344827;
          result[3] += 0.40948275862068967;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.012345679012345678;
          result[2] += 0;
          result[3] += 0.9876543209876543;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.765625;
          result[4] += 0.234375;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0.0003125;
          result[1] += 0.0003125;
          result[2] += 0;
          result[3] += 0.998125;
          result[4] += 0.0009375;
          result[5] += 0.0003125;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0.25806451612903225;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7419354838709677;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0.1405109489051095;
          result[1] += 0;
          result[2] += 0.05656934306569344;
          result[3] += 0;
          result[4] += 0.7937956204379563;
          result[5] += 0.009124087591240877;
          result[6] += 0;
        } else {
          result[0] += 0.059027777777777776;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9409722222222222;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9939759036144579;
          result[1] += 0;
          result[2] += 0.006024096385542169;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9996212121212121;
          result[1] += 0;
          result[2] += 0.0003787878787878788;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0.9817668207498716;
          result[1] += 0.007704160246533128;
          result[2] += 0.007960965588084233;
          result[3] += 0.001027221366204417;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0015408320493066256;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.008368200836820083;
          result[3] += 0.9916317991631799;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42100000))) ) ) {
          result[0] += 0.9907231208372979;
          result[1] += 0;
          result[2] += 0.00784966698382493;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014272121788772598;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0.9996596555714383;
          result[1] += 0;
          result[2] += 0.00034034442856170443;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9918276374442794;
          result[1] += 0;
          result[2] += 0.005200594353640416;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0029717682020802376;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0.9998557414887478;
          result[1] += 0;
          result[2] += 0.00014425851125216387;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
          result[0] += 0.007761966364812419;
          result[1] += 0.00646830530401035;
          result[2] += 0;
          result[3] += 0.08279430789133248;
          result[4] += 0.9029754204398448;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2329093799682035;
          result[1] += 0.0029146793852676206;
          result[2] += 0.007684154742978272;
          result[3] += 0.5172231054583996;
          result[4] += 0.23926868044515104;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
          result[0] += 0.928260007927071;
          result[1] += 0.0011890606420927466;
          result[2] += 0.003963535473642489;
          result[3] += 0.0656625710133439;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009248249438499141;
        } else {
          result[0] += 0.028189910979228485;
          result[1] += 0;
          result[2] += 0.021513353115727003;
          result[3] += 0.8568249258160238;
          result[4] += 0.0897626112759644;
          result[5] += 0.00370919881305638;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.027004909983633387;
          result[3] += 0.9729950900163666;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.002285714285714286;
          result[2] += 0;
          result[3] += 0.9971428571428571;
          result[4] += 0;
          result[5] += 0.0005714285714285715;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x421c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41100000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9976553341148886;
          result[1] += 0;
          result[2] += 0.0023446658851113715;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0.12857944974733296;
          result[1] += 0.003368893879842785;
          result[2] += 0.005614823133071308;
          result[3] += 0.5940482874789444;
          result[4] += 0.26838854576080856;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.10535931790499391;
          result[1] += 0.002131546894031669;
          result[2] += 0.010657734470158343;
          result[3] += 0.47777101096224117;
          result[4] += 0.4040803897685749;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
          result[0] += 0.9945054945054945;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.005494505494505495;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.002525252525252526;
          result[2] += 0;
          result[3] += 0.9886363636363638;
          result[4] += 0.006313131313131314;
          result[5] += 0.002525252525252526;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
          result[0] += 0.9978300461115202;
          result[1] += 0.0005812376486999651;
          result[2] += 0.0010074785910799396;
          result[3] += 0.00038749176579997677;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00019374588289998839;
        } else {
          result[0] += 0;
          result[1] += 0.014925373134328358;
          result[2] += 0;
          result[3] += 0.9850746268656716;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42cc0000))) ) ) {
          result[0] += 0.16771891298380456;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8322810870161954;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.53125;
          result[1] += 0;
          result[2] += 0.3020833333333333;
          result[3] += 0;
          result[4] += 0.11458333333333333;
          result[5] += 0.052083333333333336;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42940000))) ) ) {
          result[0] += 0.9915190350546551;
          result[1] += 0;
          result[2] += 0.005088578967206936;
          result[3] += 0.0015077271013946476;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0018846588767433095;
        } else {
          result[0] += 0.16666666666666666;
          result[1] += 0;
          result[2] += 0.8333333333333334;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42e30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42db0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.005293806246691371;
          result[3] += 0.7469560614081525;
          result[4] += 0.2466913710958179;
          result[5] += 0.0010587612493382743;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.02120141342756184;
          result[2] += 0;
          result[3] += 0.21908127208480566;
          result[4] += 0.7597173144876325;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40d00000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0.9978624866405416;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0021375133594584966;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.78276025986373;
          result[1] += 0;
          result[2] += 0.004119790841388053;
          result[3] += 0.2124861353192838;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006338139755981619;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0.8629032258064516;
          result[1] += 0;
          result[2] += 0.016129032258064516;
          result[3] += 0.10483870967741936;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.016129032258064516;
        } else {
          result[0] += 0.5348837209302325;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.46511627906976744;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9991775413970828;
          result[1] += 0;
          result[2] += 0.0004934751617501917;
          result[3] += 0;
          result[4] += 5.483057352779909e-05;
          result[5] += 0;
          result[6] += 0.0002741528676389954;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0.4763130792996911;
          result[1] += 0.003861997940267766;
          result[2] += 0.0030895983522142125;
          result[3] += 0.4891864057672503;
          result[4] += 0.02703398558187436;
          result[5] += 0;
          result[6] += 0.0005149330587023688;
        } else {
          result[0] += 0.9831314878892734;
          result[1] += 0;
          result[2] += 0.005190311418685121;
          result[3] += 0.010380622837370242;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012975778546712802;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0.003971756398940865;
          result[1] += 0.00529567519858782;
          result[2] += 0.020741394527802295;
          result[3] += 0.7833186231244483;
          result[4] += 0.18446601941747573;
          result[5] += 0.002206531332744925;
          result[6] += 0;
        } else {
          result[0] += 0.9907651715039578;
          result[1] += 0;
          result[2] += 0.0079155672823219;
          result[3] += 0.0013192612137203166;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0011299435028248588;
          result[2] += 0;
          result[3] += 0.15593220338983052;
          result[4] += 0.8429378531073446;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x43880000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0.9970220369267421;
          result[1] += 0;
          result[2] += 0.0029779630732578916;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9817708333333334;
          result[1] += 0;
          result[2] += 0.010416666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0078125;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9995209580838323;
          result[1] += 0;
          result[2] += 0.00047904191616766467;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0.021061050386563588;
          result[1] += 0.006664889362836578;
          result[2] += 0.010130631831511598;
          result[3] += 0.9594774726739537;
          result[4] += 0.0005331911490269262;
          result[5] += 0.002132764596107705;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03829787234042553;
          result[3] += 0;
          result[4] += 0.9574468085106383;
          result[5] += 0.00425531914893617;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0.5485088034495149;
          result[1] += 0;
          result[2] += 0.002335609054976644;
          result[3] += 0.44843693855551564;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007186489399928135;
        } else {
          result[0] += 0.9705940790780846;
          result[1] += 0;
          result[2] += 0.007152791575601033;
          result[3] += 0.02026624279753626;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001986886548778065;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0.007952286282306162;
          result[1] += 0.015904572564612324;
          result[2] += 0;
          result[3] += 0.3817097415506958;
          result[4] += 0.5944333996023857;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.001998001998001998;
          result[2] += 0;
          result[3] += 0.17582417582417584;
          result[4] += 0.8221778221778222;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 0.001280819724623759;
          result[1] += 0.0003202049311559398;
          result[2] += 0.003202049311559398;
          result[3] += 0.9769452449567724;
          result[4] += 0.01697086135126481;
          result[5] += 0.001280819724623759;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.006763787721123829;
          result[2] += 0;
          result[3] += 0.09365244536940687;
          result[4] += 0.8995837669094693;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0.9978256142639705;
          result[1] += 0.000543596434007393;
          result[2] += 0.0012683916793505836;
          result[3] += 0.00010871928680147859;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00025367833587011673;
        } else {
          result[0] += 0.7769516728624535;
          result[1] += 0;
          result[2] += 0.07434944237918216;
          result[3] += 0.14869888475836432;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x45ad0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.028268551236749116;
          result[2] += 0;
          result[3] += 0.9717314487632509;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0.4859489840034587;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5140510159965412;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.267275615567911;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.732724384432089;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d90000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0.9713031735313977;
          result[1] += 0;
          result[2] += 0.021269412559081703;
          result[3] += 0;
          result[4] += 0.004051316677920324;
          result[5] += 0.00033760972316002703;
          result[6] += 0.003038487508440243;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9944547134935305;
          result[1] += 0;
          result[2] += 0.005545286506469501;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3333333333333333;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9994662803553048;
          result[1] += 0;
          result[2] += 0.0004193511494033777;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00011436849529183028;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3fc00000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0.0033333333333333335;
          result[1] += 0.01;
          result[2] += 0;
          result[3] += 0.24833333333333332;
          result[4] += 0.7383333333333333;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5573808422026839;
          result[1] += 0.0012725590004627487;
          result[2] += 0.010758907913003239;
          result[3] += 0.40826006478482185;
          result[4] += 0.02024525682554373;
          result[5] += 0.0010411846367422489;
          result[6] += 0.0010411846367422489;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0017167381974248926;
          result[3] += 0.7296137339055794;
          result[4] += 0.2686695278969957;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7818377216550242;
          result[1] += 0;
          result[2] += 0.0008060182697474476;
          result[3] += 0.21708758731864589;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00026867275658248256;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42080000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42240000))) ) ) {
          result[0] += 0.058823529411764705;
          result[1] += 0.5294117647058824;
          result[2] += 0;
          result[3] += 0.4117647058823529;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.015151515151515152;
          result[2] += 0;
          result[3] += 0.9848484848484849;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41400000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0.13337893296853626;
          result[1] += 0.008207934336525308;
          result[2] += 0.007523939808481532;
          result[3] += 0.8508891928864569;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45afc400))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9903560830860534;
          result[1] += 0;
          result[2] += 0.00741839762611276;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002225519287833828;
        } else {
          result[0] += 0.99897656329956;
          result[1] += 0;
          result[2] += 0.0010234367004400779;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
          result[0] += 0.0005770340450086555;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9994229659549914;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.02090500132310135;
          result[1] += 0.008732468907118285;
          result[2] += 0.007673987827467584;
          result[3] += 0.960836200052924;
          result[4] += 0;
          result[5] += 0.0018523418893887271;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x433f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9770442983000374;
          result[1] += 0;
          result[2] += 0.0058319890805310845;
          result[3] += 0.014890184886462342;
          result[4] += 0;
          result[5] += 0.00012408487405385287;
          result[6] += 0.0021094428589154986;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41a80000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.85;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.15;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
          result[0] += 0;
          result[1] += 0.0019423761735189381;
          result[2] += 0;
          result[3] += 0.9980576238264811;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x450d7000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9972489683631361;
          result[5] += 0.002751031636863824;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0;
          result[1] += 0.0003142677561282213;
          result[2] += 0;
          result[3] += 0.9990571967316154;
          result[4] += 0;
          result[5] += 0.0006285355122564426;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.3170731707317073;
          result[2] += 0.5365853658536586;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.14634146341463414;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
          result[0] += 0.5698924731182796;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.43010752688172044;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9957168703614814;
          result[1] += 0.0009969353468965772;
          result[2] += 0.0019569471624266144;
          result[3] += 0.0012554000664623565;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7.38470627330798e-05;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.19642857142857142;
          result[3] += 0.8035714285714286;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42200000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8539772727272728;
          result[1] += 0;
          result[2] += 0.006818181818181818;
          result[3] += 0.1377840909090909;
          result[4] += 0;
          result[5] += 0.0005681818181818182;
          result[6] += 0.0008522727272727272;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0.3806888068880689;
          result[1] += 0;
          result[2] += 0.00984009840098401;
          result[3] += 0.6094710947109471;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5724006532389766;
          result[1] += 0;
          result[2] += 0.00027218290691344586;
          result[3] += 0.42732716385410996;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
          result[0] += 0.989769820971867;
          result[1] += 0;
          result[2] += 0.0076726342710997444;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0025575447570332483;
        } else {
          result[0] += 0.9993694829760403;
          result[1] += 0;
          result[2] += 0.0006305170239596469;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9991750876469375;
          result[1] += 0;
          result[2] += 0.0008249123530624871;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0.0035971223021582736;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9964028776978417;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.023033707865168538;
          result[1] += 0.009831460674157303;
          result[2] += 0.003932584269662922;
          result[3] += 0.9632022471910112;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10247349823321555;
          result[3] += 0.892226148409894;
          result[4] += 0;
          result[5] += 0.00530035335689046;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9902413292891996;
          result[1] += 0;
          result[2] += 0.004351839641302915;
          result[3] += 0.003824343927205592;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001582487142291969;
        } else {
          result[0] += 0.8809891808346213;
          result[1] += 0;
          result[2] += 0.01854714064914992;
          result[3] += 0.10046367851622875;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05128205128205128;
          result[3] += 0.9487179487179487;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45cb4000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.999138534431702;
          result[1] += 0;
          result[2] += 0.0006999407742421795;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00016152479405588758;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 0.9668427230046949;
          result[1] += 0.0022007042253521128;
          result[2] += 0.0033744131455399062;
          result[3] += 0.02596830985915493;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001613849765258216;
        } else {
          result[0] += 0.6673713883016209;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.33121916842847077;
          result[4] += 0;
          result[5] += 0.0014094432699083862;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
          result[0] += 0.001326259946949602;
          result[1] += 0.017241379310344827;
          result[2] += 0;
          result[3] += 0.10212201591511937;
          result[4] += 0.8793103448275862;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.1307609860664523;
          result[1] += 0.003215434083601286;
          result[2] += 0.008788853161843515;
          result[3] += 0.6240085744908896;
          result[4] += 0.2330117899249732;
          result[5] += 0.00021436227224008573;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0006691201070592171;
          result[2] += 0;
          result[3] += 0.9979926396788223;
          result[4] += 0.0010036801605888257;
          result[5] += 0.00033456005352960856;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 0.9979189856264821;
          result[1] += 0;
          result[2] += 0.00029037409863040217;
          result[3] += 0.001742244591782413;
          result[4] += 0;
          result[5] += 0;
          result[6] += 4.8395683105067026e-05;
        } else {
          result[0] += 0.03384615384615385;
          result[1] += 0.01230769230769231;
          result[2] += 0.03384615384615385;
          result[3] += 0.9015384615384616;
          result[4] += 0.018461538461538467;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0015267175572519084;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9984732824427481;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 0.8913639763943147;
          result[1] += 0.0006649488820546921;
          result[2] += 0.003740337461557643;
          result[3] += 0.10339955115950462;
          result[4] += 0;
          result[5] += 8.311861025683652e-05;
          result[6] += 0.0007480674923115286;
        } else {
          result[0] += 0.5038167938931297;
          result[1] += 0;
          result[2] += 0.0028625954198473282;
          result[3] += 0.4928435114503817;
          result[4] += 0;
          result[5] += 0.00047709923664122136;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x3f800000))) ) ) {
          result[0] += 0.4131944444444444;
          result[1] += 0;
          result[2] += 0.006944444444444444;
          result[3] += 0.5752314814814815;
          result[4] += 0.004629629629629629;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.011882426516572859;
          result[1] += 0;
          result[2] += 0.025015634771732333;
          result[3] += 0.7779862414008756;
          result[4] += 0.18323952470293933;
          result[5] += 0.001876172607879925;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.012974051896207584;
          result[2] += 0;
          result[3] += 0.9870259481037924;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0037313432835820895;
          result[1] += 0.03731343283582089;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9589552238805971;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0410958904109589;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.958904109589041;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42460000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0.8333333333333334;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9937810945273632;
          result[1] += 0;
          result[2] += 0.005597014925373134;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006218905472636816;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.999507874015748;
          result[1] += 0;
          result[2] += 0.0004921259842519685;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9131233917412082;
          result[1] += 0.0017154760446023772;
          result[2] += 0.004043622105134175;
          result[3] += 0.07940203406445288;
          result[4] += 0;
          result[5] += 0.0004901360127435363;
          result[6] += 0.0012253400318588408;
        } else {
          result[0] += 0.14848365498227648;
          result[1] += 0;
          result[2] += 0.01811736904293029;
          result[3] += 0.7215439149271367;
          result[4] += 0.11067349350137849;
          result[5] += 0.0011815675462780622;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.017543859649122806;
          result[3] += 0;
          result[4] += 0.9780701754385965;
          result[5] += 0.0043859649122807015;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.00032948929159802305;
          result[2] += 0.007248764415156508;
          result[3] += 0.9924217462932454;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0.5452631578947369;
          result[1] += 0;
          result[2] += 0.014736842105263158;
          result[3] += 0.44;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0042643923240938165;
          result[2] += 0;
          result[3] += 0.9957356076759062;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.004770992366412214;
          result[1] += 0.009541984732824428;
          result[2] += 0;
          result[3] += 0.12881679389312978;
          result[4] += 0.8568702290076335;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
          result[0] += 0.2943722943722944;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7056277056277056;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9987962355001094;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.001094331363536879;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001094331363536879;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0.3773802654356607;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6226197345643393;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9485436893203884;
          result[1] += 0;
          result[2] += 0.04466019417475728;
          result[3] += 0;
          result[4] += 0.001941747572815534;
          result[5] += 0.001941747572815534;
          result[6] += 0.002912621359223301;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b40000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40600000))) ) ) {
          result[0] += 0.25517241379310346;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6620689655172414;
          result[4] += 0.08275862068965517;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.026737967914438502;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.47058823529411764;
          result[4] += 0.5026737967914439;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0.9722628994745457;
          result[1] += 0.0008614006374364718;
          result[2] += 0.0005168403824618831;
          result[3] += 0.02601429925058145;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00034456025497458875;
        } else {
          result[0] += 0.8775100401606426;
          result[1] += 0;
          result[2] += 0.0009638554216867469;
          result[3] += 0.12112449799196787;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00040160642570281126;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41dc0000))) ) ) {
          result[0] += 0.0006818956699624957;
          result[1] += 0.00034094783498124785;
          result[2] += 0;
          result[3] += 0.995908625980225;
          result[4] += 0.002045687009887487;
          result[5] += 0.0010228435049437436;
          result[6] += 0;
        } else {
          result[0] += 0.9810126582278481;
          result[1] += 0.009945750452079566;
          result[2] += 0.009041591320072333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0.06656912948061448;
          result[1] += 0;
          result[2] += 0.018288222384784197;
          result[3] += 0.22677395757132407;
          result[4] += 0.6832479882955377;
          result[5] += 0.005120702267739576;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42240000))) ) ) {
          result[0] += 0.014084507042253521;
          result[1] += 0.04225352112676056;
          result[2] += 0;
          result[3] += 0.06338028169014084;
          result[4] += 0.8802816901408451;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.43448275862068964;
          result[4] += 0.5655172413793104;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0014925373134328358;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9985074626865672;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40200000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9988385598141696;
          result[1] += 0;
          result[2] += 0.0011614401858304297;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40200000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9917127071823204;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.008287292817679558;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0.025358324145534728;
          result[1] += 0.005512679162072767;
          result[2] += 0.004134509371554576;
          result[3] += 0.9636163175303197;
          result[4] += 0.0008269018743109151;
          result[5] += 0.0005512679162072767;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.06201550387596899;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.937984496124031;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.012048192771084338;
          result[3] += 0.016487000634115408;
          result[4] += 0.9708306911857958;
          result[5] += 0.0006341154090044388;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.01483924154987634;
          result[3] += 0.42044517724649627;
          result[4] += 0.562242374278648;
          result[5] += 0.00247320692497939;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0.9921671018276763;
          result[1] += 0;
          result[2] += 0.006962576153176676;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008703220191470845;
        } else {
          result[0] += 0.4154189232239567;
          result[1] += 0;
          result[2] += 0.004460019114367633;
          result[3] += 0.5775724753106085;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002548582351067219;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0.9936305732484076;
          result[1] += 0;
          result[2] += 0.0003980891719745223;
          result[3] += 0.0051751592356687895;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007961783439490446;
        } else {
          result[0] += 0.41928571428571426;
          result[1] += 0;
          result[2] += 0.0014285714285714286;
          result[3] += 0.5785714285714286;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007142857142857143;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43780000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0.048327137546468404;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9516728624535316;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9988372093023256;
          result[5] += 0.0011627906976744186;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0055900621118012426;
          result[3] += 0.9928571428571429;
          result[4] += 0;
          result[5] += 0.0015527950310559005;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9845857418111753;
          result[1] += 0;
          result[2] += 0.011560693641618497;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0038535645472061657;
        } else {
          result[0] += 0.9974715549936789;
          result[1] += 0;
          result[2] += 0.0025284450063211127;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0.999493670886076;
          result[1] += 0;
          result[2] += 0.0005063291139240507;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.8949195906432749;
          result[1] += 0.00402046783625731;
          result[2] += 0.012426900584795321;
          result[3] += 0.08790204678362573;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007309941520467836;
        } else {
          result[0] += 0;
          result[1] += 0.00215633423180593;
          result[2] += 0.009703504043126684;
          result[3] += 0.9881401617250674;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9421560035056967;
          result[1] += 0;
          result[2] += 0.0011685655857434998;
          result[3] += 0.056091148115687994;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005842827928717499;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0033707865168539327;
          result[3] += 0.996629213483146;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.02127659574468085;
          result[1] += 0.1276595744680851;
          result[2] += 0;
          result[3] += 0.851063829787234;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
          result[0] += 0.9771197846567967;
          result[1] += 0;
          result[2] += 0.02288021534320323;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.08826695371367062;
          result[1] += 0.005382131324004306;
          result[2] += 0.002691065662002153;
          result[3] += 0.9015069967707212;
          result[4] += 0.002152852529601722;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05856832971800434;
          result[4] += 0.9414316702819957;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x419c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3146853146853147;
          result[1] += 0;
          result[2] += 0.045454545454545456;
          result[3] += 0.6398601398601399;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41b40000))) ) ) {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.998792270531401;
          result[5] += 0.0012077294685990338;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0006238303181534623;
          result[1] += 0.0018714909544603868;
          result[2] += 0.013100436681222707;
          result[3] += 0.9806612601372426;
          result[4] += 0;
          result[5] += 0.0037429819089207735;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.9983374477303643;
          result[1] += 0.0004030429744571515;
          result[2] += 0.0005541840898785833;
          result[3] += 0.0005541840898785833;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001511411154214318;
        } else {
          result[0] += 0.8695652173913043;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.13043478260869565;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.9793746715712034;
          result[1] += 0.0010509721492380452;
          result[2] += 0.004072517078297425;
          result[3] += 0.015239096163951655;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002627430373095113;
        } else {
          result[0] += 0.641138390130695;
          result[1] += 0;
          result[2] += 0.003664345914254306;
          result[3] += 0.3542201050445829;
          result[4] += 0;
          result[5] += 0.00036643459142543056;
          result[6] += 0.0006107243190423843;
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 100;
  result[1] /= 100;
  result[2] /= 100;
  result[3] /= 100;
  result[4] /= 100;
  result[5] /= 100;
  result[6] /= 100;
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  result[2] += 0;
  result[3] += 0;
  result[4] += 0;
  result[5] += 0;
  result[6] += 0;
  
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
    

    FILE* file = fopen("./codegen/dataset_148/split_4/test_data.csv", "r");
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
