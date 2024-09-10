
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.8169949948787689209) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.06942499801516532898) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3137249946594238281) ) ) {
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
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8744599819183349609) ) ) {
        result[0] += 0.06806282722513089;
        result[1] += 0.9319371727748691;
      } else {
        result[0] += 0.9;
        result[1] += 0.1;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2207050025463104248) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.9754950106143951416) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.9108049869537353516) ) ) {
        result[0] += 0.058823529411764705;
        result[1] += 0.9411764705882353;
      } else {
        result[0] += 0.7272727272727273;
        result[1] += 0.2727272727272727;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.8165850043296813965) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2217050045728683472) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
        result[0] += 0.875;
        result[1] += 0.125;
      } else {
        result[0] += 0.09424083769633508;
        result[1] += 0.9057591623036649;
      }
    }
  }
  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.2114149928092956543) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.2786850035190582275) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.275530010461807251) ) ) {
        result[0] += 0.5714285714285714;
        result[1] += 0.42857142857142855;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.8047400116920471191) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.06219499930739402771) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.6837999820709228516) ) ) {
        result[0] += 0.6;
        result[1] += 0.4;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9566900134086608887) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.06802721088435375;
        result[1] += 0.9319727891156463;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.1885000020265579224) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.1013450026512145996) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.6400800049304962158) ) ) {
        result[0] += 0.75;
        result[1] += 0.25;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.3953550010919570923) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.07166500110179185867) ) ) {
        result[0] += 0.4;
        result[1] += 0.6;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.9737449884414672852) ) ) {
        result[0] += 0.08522727272727272;
        result[1] += 0.9147727272727273;
      } else {
        result[0] += 0.75;
        result[1] += 0.25;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.2895199954509735107) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.07282499969005584717) ) ) {
        result[0] += 0.8888888888888888;
        result[1] += 0.1111111111111111;
      } else {
        result[0] += 0.2;
        result[1] += 0.8;
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.1355199962854385376) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.06060606060606061;
        result[1] += 0.9393939393939394;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3585000038146972656) ) ) {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.0141549999825656414) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1578199975192546844) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.75;
        result[1] += 0.25;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.9124599993228912354) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.6407900005578994751) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.047337278106508875;
        result[1] += 0.9526627218934911;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.03421499952673912048) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.8571428571428571;
        result[1] += 0.14285714285714285;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03378000017255544662) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.9606400132179260254) ) ) {
        result[0] += 0.7142857142857143;
        result[1] += 0.2857142857142857;
      } else {
        result[0] += 0.06626506024096386;
        result[1] += 0.9337349397590361;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.896344989538192749) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9566900134086608887) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.4827586206896552;
        result[1] += 0.5172413793103449;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.149645000696182251) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.5880299806594848633) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9994949996471405029) ) ) {
        result[0] += 0.030303030303030304;
        result[1] += 0.9696969696969697;
      } else {
        result[0] += 0.2702702702702703;
        result[1] += 0.7297297297297297;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.8957050144672393799) ) ) {
        result[0] += 0.8181818181818182;
        result[1] += 0.18181818181818182;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8980149924755096436) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.11386138613861387;
        result[1] += 0.8861386138613861;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.2418500036001205444) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.4126200079917907715) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1068350039422512054) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.8235294117647058;
        result[1] += 0.17647058823529413;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1976150050759315491) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9566900134086608887) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.7142857142857143;
        result[1] += 0.2857142857142857;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6824550032615661621) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.08527131782945736;
        result[1] += 0.9147286821705426;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7955000102519989014) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6023550033569335938) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.0748663101604278;
        result[1] += 0.9251336898395722;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9607850015163421631) ) ) {
        result[0] += 0.5714285714285714;
        result[1] += 0.42857142857142855;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.001044999997247941792) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4409199953079223633) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.8993499875068664551) ) ) {
        result[0] += 0.16129032258064516;
        result[1] += 0.8387096774193549;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.6445199847221374512) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.05680000036954879761) ) ) {
        result[0] += 0.7272727272727273;
        result[1] += 0.2727272727272727;
      } else {
        result[0] += 0.06206896551724138;
        result[1] += 0.9379310344827586;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.767360001802444458) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.0004799999878741800785) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1794999986886978149) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.9472700059413909912) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.05947000160813331604) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.8333333333333334;
        result[1] += 0.16666666666666666;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9285149872303009033) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.09248554913294797;
        result[1] += 0.9075144508670521;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9127549827098846436) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2599149942398071289) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.07985000312328338623) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.1;
        result[1] += 0.9;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5845049917697906494) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.03773500025272369385) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.3111650049686431885) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5;
        result[1] += 0.5;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2175149992108345032) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.2698500081896781921) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.1485300064086914062) ) ) {
        result[0] += 0.5;
        result[1] += 0.5;
      } else {
        result[0] += 0.07741935483870968;
        result[1] += 0.9225806451612903;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9127549827098846436) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03378000017255544662) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.9320099949836730957) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.13658536585365855;
        result[1] += 0.8634146341463415;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.149645000696182251) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.8788850009441375732) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.959515005350112915) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.09405940594059406;
        result[1] += 0.905940594059406;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4414650052785873413) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7362250089645385742) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.8333333333333334;
        result[1] += 0.16666666666666666;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2276500016450881958) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.0979381443298969;
        result[1] += 0.9020618556701031;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8646399974822998047) ) ) {
        result[0] += 0.11046511627906977;
        result[1] += 0.8895348837209303;
      } else {
        result[0] += 0.7692307692307693;
        result[1] += 0.23076923076923078;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.06343999877572059631) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.04726999998092651367) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1773849986493587494) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.10416666666666667;
        result[1] += 0.8958333333333334;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.8649849891662597656) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.7961200177669525146) ) ) {
        result[0] += 0.7;
        result[1] += 0.3;
      } else {
        result[0] += 0.06944444444444445;
        result[1] += 0.9305555555555556;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.001154999947175383568) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.2169099971652030945) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3954849988222122192) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.8;
        result[1] += 0.2;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2139199972152709961) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.22413793103448276;
        result[1] += 0.7758620689655172;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.5) ) ) {
        result[0] += 0.25;
        result[1] += 0.75;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.063250003382563591) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.10236220472440945;
        result[1] += 0.8976377952755905;
      }
    }
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9614199995994567871) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.1742250025272369385) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9500699937343597412) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.810979992151260376) ) ) {
        result[0] += 0.11940298507462686;
        result[1] += 0.8805970149253731;
      } else {
        result[0] += 0.7142857142857143;
        result[1] += 0.2857142857142857;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.2537350058555603027) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5085200071334838867) ) ) {
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
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.8071799874305725098) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.11560693641618497;
        result[1] += 0.884393063583815;
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9387849867343902588) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.46153846153846156;
        result[1] += 0.5384615384615384;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.03596000000834465027) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.579394996166229248) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.3807200038572773337) ) ) {
        result[0] += 0.045454545454545456;
        result[1] += 0.9545454545454546;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.0761800035834312439) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8586249947547912598) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.06547619047619048;
        result[1] += 0.9345238095238095;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.001524999985122121871) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.308605000376701355) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.4426100105047225952) ) ) {
        result[0] += 0.8771929824561403;
        result[1] += 0.12280701754385964;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.8993499875068664551) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.5077700018882751465) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.8025600016117095947) ) ) {
        result[0] += 0.09859154929577464;
        result[1] += 0.9014084507042254;
      } else {
        result[0] += 0.5555555555555556;
        result[1] += 0.4444444444444444;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.2079299911856651306) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5;
        result[1] += 0.5;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9303149878978729248) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.8295449912548065186) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.1342799998819828033) ) ) {
        result[0] += 0.5;
        result[1] += 0.5;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.149645000696182251) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8646399974822998047) ) ) {
        result[0] += 0.07103825136612021;
        result[1] += 0.9289617486338798;
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
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8980149924755096436) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.09375;
        result[1] += 0.90625;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
        result[0] += 0.9473684210526315;
        result[1] += 0.05263157894736842;
      } else {
        result[0] += 0.12154696132596685;
        result[1] += 0.8784530386740331;
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
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7183800041675567627) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1205449998378753662) ) ) {
        result[0] += 0.5230769230769231;
        result[1] += 0.47692307692307695;
      } else {
        result[0] += 0.09740259740259741;
        result[1] += 0.9025974025974026;
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
