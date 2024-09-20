
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
  if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1b4246))) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0dcf64))) ) ) {
      if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0c9578))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8603ba))) ) ) {
        if ( UNLIKELY( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f36800b))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
            result[0] += (float)0.9523663183773817;
            result[1] += (float)0.047633681622618315;
          } else {
            result[0] += (float)0.303548164610315;
            result[1] += (float)0.696451835389685;
          }
        }
      } else {
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f35f8a0))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9994536372151108;
            result[1] += (float)0.0005463627848891664;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0c7d46))) ) ) {
        if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
          if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
          } else {
            result[0] += (float)0.5974025974025974;
            result[1] += (float)0.4025974025974026;
          }
        } else {
          if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e919a5e))) ) ) {
            result[0] += (float)0.024716786817713696;
            result[1] += (float)0.9752832131822863;
          } else {
            result[0] += (float)0.6446886446886447;
            result[1] += (float)0.3553113553113553;
          }
        }
      } else {
        if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1ccd5a))) ) ) {
          if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f45783c))) ) ) {
            result[0] += (float)0.3271889400921659;
            result[1] += (float)0.6728110599078341;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        } else {
          if ( UNLIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f45e5bc))) ) ) {
            result[0] += (float)0.0051325919589392645;
            result[1] += (float)0.9948674080410608;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8dbd57))) ) ) {
        if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eaa4cd4))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ea57e34))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e03eae8))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
    if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec38888))) ) ) {
      if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
        if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
          if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
            result[0] += (float)0.9115479115479116;
            result[1] += (float)0.08845208845208845;
          } else {
            result[0] += (float)0.39552238805970147;
            result[1] += (float)0.6044776119402985;
          }
        } else {
          if ( UNLIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
            result[0] += (float)0.9961159247086944;
            result[1] += (float)0.003884075291305647;
          } else {
            result[0] += (float)0.9999392835458409;
            result[1] += (float)6.071645415907711e-05;
          }
        }
      } else {
        if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
          if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.35470527404343327;
            result[1] += (float)0.6452947259565667;
          }
        } else {
          if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f504bde))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9702034522210615;
            result[1] += (float)0.029796547778938465;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
        if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb79c96))) ) ) {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.4485981308411215;
            result[1] += (float)0.5514018691588785;
          }
        } else {
          if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
            result[0] += (float)0.9952380952380953;
            result[1] += (float)0.004761904761904762;
          } else {
            result[0] += (float)0.17857142857142858;
            result[1] += (float)0.8214285714285714;
          }
        }
      } else {
        if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e10712c))) ) ) {
          if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d8650d3))) ) ) {
            result[0] += (float)0.027149321266968326;
            result[1] += (float)0.9728506787330317;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9935b8))) ) ) {
            result[0] += (float)0.0204009848751319;
            result[1] += (float)0.9795990151248681;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae89bf6))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9998399195023784;
            result[1] += (float)0.0001600804976216612;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
      if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4fd360))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f3a0a80))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      }
    } else {
      if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
        if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
            result[0] += (float)0.767653131452168;
            result[1] += (float)0.23234686854783207;
          } else {
            result[0] += (float)0.9990575295615084;
            result[1] += (float)0.0009424704384916586;
          }
        }
      } else {
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
          if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee3ce8c))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d3b5afc))) ) ) {
            result[0] += (float)0.9987153534724384;
            result[1] += (float)0.0012846465275615072;
          } else {
            result[0] += (float)0.743231441048035;
            result[1] += (float)0.25676855895196504;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e073652))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
        if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3f180c))) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e978702))) ) ) {
            result[0] += (float)0.07643312101910828;
            result[1] += (float)0.9235668789808917;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        } else {
          if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0dcf64))) ) ) {
            result[0] += (float)0.020172910662824207;
            result[1] += (float)0.9798270893371758;
          } else {
            result[0] += (float)0.9578047830809271;
            result[1] += (float)0.042195216919072895;
          }
        }
      } else {
        if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
            result[0] += (float)0.8073633320937151;
            result[1] += (float)0.19263666790628486;
          } else {
            result[0] += (float)0.651564185544768;
            result[1] += (float)0.3484358144552319;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e9e6674))) ) ) {
        if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f46e1c4))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1da382))) ) ) {
            result[0] += (float)0.9983325960458707;
            result[1] += (float)0.0016674039541293769;
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
  if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( LIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ea06598))) ) ) {
      if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
        if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec5d64a))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f34e56e))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9992258205212081;
            result[1] += (float)0.0007741794787918439;
          }
        }
      } else {
        if ( LIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f40745c))) ) ) {
          if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aef3e00))) ) ) {
            result[0] += (float)0.9436443331246086;
            result[1] += (float)0.056355666875391355;
          } else {
            result[0] += (float)0.406694579506573;
            result[1] += (float)0.5933054204934269;
          }
        } else {
          if ( LIKELY( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e4c4f))) ) ) {
            result[0] += (float)0.9396991955229101;
            result[1] += (float)0.060300804477089895;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d262441))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
      } else {
        if ( UNLIKELY( !(data[73].missing != -1) || ((*( ((int*)(data)) + 73 ))<=((int)(0x3f77c729))) ) ) {
          if ( UNLIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f386016))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
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
    if ( UNLIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae89bf6))) ) ) {
      if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
        if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
          if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
            result[0] += (float)0.5298224313249355;
            result[1] += (float)0.4701775686750645;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
            result[0] += (float)0.616191904047976;
            result[1] += (float)0.383808095952024;
          } else {
            result[0] += (float)0.9501408450704225;
            result[1] += (float)0.049859154929577466;
          }
        }
      } else {
        if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd59576))) ) ) {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8603ba))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9980972467389561;
            result[1] += (float)0.0019027532610439925;
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
    if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
      if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
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
    } else {
      if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3c3c87))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
          if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
            result[0] += (float)0.9996825125468599;
            result[1] += (float)0.000317487453140073;
          } else {
            result[0] += (float)0.9929529746578127;
            result[1] += (float)0.007047025342187288;
          }
        } else {
          if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d3b5afc))) ) ) {
            result[0] += (float)0.9986454550694565;
            result[1] += (float)0.0013545449305435472;
          } else {
            result[0] += (float)0.7031474389660124;
            result[1] += (float)0.29685256103398755;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3f180c))) ) ) {
    if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f50c45b))) ) ) {
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
    if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
      if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ebd59f2))) ) ) {
          if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.423728813559322;
            result[1] += (float)0.576271186440678;
          }
        } else {
          if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d76f27b))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
        if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
            result[0] += (float)0.8663330950679057;
            result[1] += (float)0.13366690493209435;
          } else {
            result[0] += (float)0.9951608411084807;
            result[1] += (float)0.004839158891519287;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
            result[0] += (float)0.9256086564472498;
            result[1] += (float)0.07439134355275022;
          } else {
            result[0] += (float)0.11635259896294423;
            result[1] += (float)0.8836474010370557;
          }
        }
      } else {
        if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edb5c08))) ) ) {
          if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1072de))) ) ) {
            result[0] += (float)0.7652484179345631;
            result[1] += (float)0.23475158206543692;
          } else {
            result[0] += (float)0.06743002544529263;
            result[1] += (float)0.9325699745547074;
          }
        } else {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9990260103147104;
            result[1] += (float)0.0009739896852895624;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4f5644))) ) ) {
      if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7b0a06))) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.7958809135399674;
            result[1] += (float)0.20411908646003263;
          }
        } else {
          if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e09da8c))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9959153701408968;
            result[1] += (float)0.004084629859103218;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edb5c08))) ) ) {
        if ( LIKELY( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f4ed5e4))) ) ) {
          if ( LIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f501edb))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.0273972602739726;
            result[1] += (float)0.9726027397260274;
          }
        } else {
          if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9415584415584416;
            result[1] += (float)0.05844155844155844;
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea3974e))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
        } else {
          if ( LIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f63fbc3))) ) ) {
            result[0] += (float)0.09523809523809523;
            result[1] += (float)0.9047619047619048;
          } else {
            result[0] += (float)0.8235294117647058;
            result[1] += (float)0.17647058823529413;
          }
        }
      }
    }
  } else {
    result[0] += (float)0;
    result[1] += (float)1;
  }
  if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
      if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
        if ( LIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9eccae))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f4f0d78))) ) ) {
            result[0] += (float)0.09523809523809523;
            result[1] += (float)0.9047619047619048;
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
          if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d8aa9f0))) ) ) {
            result[0] += (float)0.8902722947666768;
            result[1] += (float)0.10972770523332322;
          } else {
            result[0] += (float)0.9994985374007522;
            result[1] += (float)0.0005014625992478062;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
          if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.328537170263789;
            result[1] += (float)0.6714628297362111;
          }
        } else {
          if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e98cf7d))) ) ) {
            result[0] += (float)0.9870546641283655;
            result[1] += (float)0.012945335871634484;
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
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f410d58))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
            result[0] += (float)0.6440677966101694;
            result[1] += (float)0.3559322033898305;
          } else {
            result[0] += (float)0.9996558409526323;
            result[1] += (float)0.0003441590473677569;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d610a91))) ) ) {
      result[0] += (float)1;
      result[1] += (float)0;
    } else {
      result[0] += (float)0;
      result[1] += (float)1;
    }
  } else {
    if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e9a1985))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f41984c))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0d800c))) ) ) {
          if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            result[0] += (float)0.8748594452773614;
            result[1] += (float)0.12514055472263869;
          } else {
            result[0] += (float)0.9815886153456358;
            result[1] += (float)0.018411384654364257;
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
    if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
      if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f50c45b))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f4066ab))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
          if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            result[0] += (float)0.00075046904315197;
            result[1] += (float)0.999249530956848;
          } else {
            result[0] += (float)0.8109034612407386;
            result[1] += (float)0.1890965387592613;
          }
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e81619a))) ) ) {
            result[0] += (float)0.4411764705882353;
            result[1] += (float)0.5588235294117647;
          } else {
            result[0] += (float)0.9980044803620989;
            result[1] += (float)0.001995519637901111;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee66ce4))) ) ) {
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
      if ( UNLIKELY( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f35a59b))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea2dade))) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.954661487236404;
            result[1] += (float)0.045338512763596;
          }
        } else {
          if ( LIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f40ba05))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
          } else {
            result[0] += (float)0.996829335539013;
            result[1] += (float)0.0031706644609870416;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8dbd57))) ) ) {
      if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
        if ( LIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e4710))) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb35104))) ) ) {
            result[0] += (float)0.9851235501765002;
            result[1] += (float)0.014876449823499747;
          } else {
            result[0] += (float)0.9367320740876581;
            result[1] += (float)0.06326792591234183;
          }
        } else {
          if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
            result[0] += (float)0.9136314460872701;
            result[1] += (float)0.08636855391272989;
          } else {
            result[0] += (float)0.4793741109530583;
            result[1] += (float)0.5206258890469416;
          }
        }
      } else {
        if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
          if ( UNLIKELY( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee7bdc6))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.976890756302521;
            result[1] += (float)0.023109243697478993;
          }
        } else {
          if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
          } else {
            result[0] += (float)0.0036227649877293446;
            result[1] += (float)0.9963772350122706;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae476b4))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e131598))) ) ) {
          if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f45783c))) ) ) {
            result[0] += (float)0.9994174757281553;
            result[1] += (float)0.0005825242718446602;
          } else {
            result[0] += (float)0.7739152499365644;
            result[1] += (float)0.22608475006343567;
          }
        } else {
          if ( LIKELY( !(data[63].missing != -1) || ((*( ((int*)(data)) + 63 ))<=((int)(0x3f7f0ae2))) ) ) {
            result[0] += (float)0.22505399568034556;
            result[1] += (float)0.7749460043196544;
          } else {
            result[0] += (float)0.4340456890198968;
            result[1] += (float)0.5659543109801032;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1d92e6))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      result[0] += (float)1;
      result[1] += (float)0;
    }
  } else {
    if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e11c43c))) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e82ed20))) ) ) {
        if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
          if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e96d05a))) ) ) {
            result[0] += (float)0.9309021113243762;
            result[1] += (float)0.0690978886756238;
          } else {
            result[0] += (float)0.7231245166279969;
            result[1] += (float)0.2768754833720031;
          }
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
            result[0] += (float)0.8931169557918299;
            result[1] += (float)0.10688304420817012;
          } else {
            result[0] += (float)0.06943235663862296;
            result[1] += (float)0.9305676433613771;
          }
        }
      } else {
        if ( LIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3ebc317e))) ) ) {
          if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9905865621481601;
            result[1] += (float)0.009413437851839937;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
        if ( UNLIKELY( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f2cc86d))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
            result[0] += (float)0.45454545454545453;
            result[1] += (float)0.5454545454545454;
          } else {
            result[0] += (float)0.9998018624925699;
            result[1] += (float)0.00019813750743015652;
          }
        }
      } else {
        if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edb5c08))) ) ) {
          if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d728d94))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.7671641791044777;
            result[1] += (float)0.23283582089552238;
          }
        } else {
          if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f40745c))) ) ) {
            result[0] += (float)0.37364470391993326;
            result[1] += (float)0.6263552960800667;
          } else {
            result[0] += (float)0.9459609255923513;
            result[1] += (float)0.05403907440764861;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    if ( LIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f63bfa7))) ) ) {
      if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d610a91))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    } else {
      if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e9388a8))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
      if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f41f48b))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
            result[0] += (float)0.7516399895040672;
            result[1] += (float)0.24836001049593281;
          } else {
            result[0] += (float)0.9977722029038851;
            result[1] += (float)0.0022277970961149156;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
        if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
          if ( UNLIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
            result[0] += (float)0.369281045751634;
            result[1] += (float)0.630718954248366;
          } else {
            result[0] += (float)0.9626028421839941;
            result[1] += (float)0.037397157816005985;
          }
        } else {
          if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += (float)0.0063555390610502875;
            result[1] += (float)0.9936444609389498;
          } else {
            result[0] += (float)0.8322177599286033;
            result[1] += (float)0.1677822400713967;
          }
        }
      } else {
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
            result[0] += (float)0.08695652173913043;
            result[1] += (float)0.9130434782608695;
          } else {
            result[0] += (float)0.9995017056997202;
            result[1] += (float)0.0004982943002798114;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae61f2c))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e11c43c))) ) ) {
        if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
          if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.40945927992560116;
            result[1] += (float)0.5905407200743988;
          }
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
            result[0] += (float)0.6050780893232258;
            result[1] += (float)0.3949219106767741;
          } else {
            result[0] += (float)0.9961141909745609;
            result[1] += (float)0.0038858090254390966;
          }
        }
      } else {
        if ( LIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3f180c))) ) ) {
          if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.927954388389772;
            result[1] += (float)0.07204561161022806;
          }
        } else {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
            result[0] += (float)0.0022802653399668325;
            result[1] += (float)0.9977197346600332;
          } else {
            result[0] += (float)0.9958349603019654;
            result[1] += (float)0.004165039698034622;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
    if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( LIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec511f9))) ) ) {
        if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
          if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            result[0] += (float)0.011884550084889643;
            result[1] += (float)0.9881154499151104;
          } else {
            result[0] += (float)0.8451526578275149;
            result[1] += (float)0.1548473421724851;
          }
        } else {
          if ( UNLIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f43fe1a))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9915491053319512;
            result[1] += (float)0.008450894668048858;
          }
        }
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    }
  } else {
    if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f522de3))) ) ) {
      if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x367fe000))) ) ) {
            result[0] += (float)0.9983470684077546;
            result[1] += (float)0.0016529315922453895;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f46e1c3))) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e22fb72))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      } else {
        if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d33cc3e))) ) ) {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb38b41))) ) ) {
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
  if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee58c9f))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      result[0] += (float)1;
      result[1] += (float)0;
    }
  } else {
    if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ebee51c))) ) ) {
        if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f475a41))) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e82ed20))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.05063291139240506;
            result[1] += (float)0.9493670886075949;
          }
        } else {
          if ( UNLIKELY( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f2bcf5d))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e99d7ce))) ) ) {
          if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    } else {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e9199ed))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
            result[0] += (float)0.9056154822335025;
            result[1] += (float)0.09438451776649746;
          } else {
            result[0] += (float)0.15800344234079175;
            result[1] += (float)0.8419965576592082;
          }
        } else {
          if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9860661074725191;
            result[1] += (float)0.013933892527480946;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
    if ( LIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
      if ( LIKELY( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f36bc04))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e58fb12))) ) ) {
          if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec97624))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f493654))) ) ) {
            result[0] += (float)0.0012368583797155227;
            result[1] += (float)0.9987631416202845;
          } else {
            result[0] += (float)0.1111111111111111;
            result[1] += (float)0.8888888888888888;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f422cb6))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4f5adb))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea06598))) ) ) {
            result[0] += (float)0.9517827884840446;
            result[1] += (float)0.04821721151595537;
          } else {
            result[0] += (float)0.975446831558043;
            result[1] += (float)0.024553168441957034;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
        if ( LIKELY( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f38241d))) ) ) {
          if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e15b9d3))) ) ) {
            result[0] += (float)0.944206008583691;
            result[1] += (float)0.055793991416309016;
          } else {
            result[0] += (float)0.006548175865294668;
            result[1] += (float)0.9934518241347053;
          }
        } else {
          if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3f180c))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.875;
            result[1] += (float)0.125;
          }
        }
      } else {
        if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e22fb72))) ) ) {
          if ( LIKELY( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d52000))) ) ) {
            result[0] += (float)0.9997703982985305;
            result[1] += (float)0.0002296017014694509;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        } else {
          if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea895f6))) ) ) {
            result[0] += (float)0.46113989637305697;
            result[1] += (float)0.538860103626943;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46e1c3))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
        if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3c3c87))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
            result[0] += (float)0.9850022528804686;
            result[1] += (float)0.014997747119531401;
          } else {
            result[0] += (float)0.6128526645768025;
            result[1] += (float)0.3871473354231975;
          }
        }
      } else {
        if ( UNLIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f485169))) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
            result[0] += (float)0.9813548788067122;
            result[1] += (float)0.018645121193287758;
          } else {
            result[0] += (float)0.07169616328639711;
            result[1] += (float)0.928303836713603;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3ea63be0))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f2818db))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f53226a))) ) ) {
          if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d258d46))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
          } else {
            result[0] += (float)0.99978489997849;
            result[1] += (float)0.00021510002151000216;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e9199ed))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae476b4))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
            result[0] += (float)0.00980392156862745;
            result[1] += (float)0.9901960784313726;
          } else {
            result[0] += (float)0.9988488609204728;
            result[1] += (float)0.0011511390795272657;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae89bf6))) ) ) {
        if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
          if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e82ed20))) ) ) {
            result[0] += (float)0.50055474950926;
            result[1] += (float)0.49944525049073996;
          } else {
            result[0] += (float)0.9800410371199403;
            result[1] += (float)0.019958962880059692;
          }
        } else {
          if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aef92e5))) ) ) {
            result[0] += (float)0.11824641372838182;
            result[1] += (float)0.8817535862716182;
          } else {
            result[0] += (float)0.0692324706923247;
            result[1] += (float)0.9307675293076753;
          }
        }
      } else {
        if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
          if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
            result[0] += (float)0.9360730593607306;
            result[1] += (float)0.0639269406392694;
          } else {
            result[0] += (float)0.0424408014571949;
            result[1] += (float)0.9575591985428051;
          }
        } else {
          if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e979cce))) ) ) {
            result[0] += (float)0.9890779404116204;
            result[1] += (float)0.010922059588379524;
          } else {
            result[0] += (float)0.9059304703476483;
            result[1] += (float)0.09406952965235174;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( LIKELY( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e4c4f))) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8cf75c))) ) ) {
        if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9122957301001582;
            result[1] += (float)0.08770426989984186;
          }
        }
      } else {
        if ( UNLIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f3dad68))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e68b814))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9789571284888107;
            result[1] += (float)0.02104287151118934;
          }
        }
      }
    } else {
      result[0] += (float)0;
      result[1] += (float)1;
    }
  }
  if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
    if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dc55866))) ) ) {
      result[0] += (float)1;
      result[1] += (float)0;
    } else {
      result[0] += (float)0;
      result[1] += (float)1;
    }
  } else {
    if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e99538a))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
          if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
            result[0] += (float)0.9651598501156023;
            result[1] += (float)0.034840149884397674;
          } else {
            result[0] += (float)0.9972410049978516;
            result[1] += (float)0.0027589950021483975;
          }
        } else {
          if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
            result[0] += (float)0.8304198309213354;
            result[1] += (float)0.16958016907866458;
          } else {
            result[0] += (float)0.9313666465984347;
            result[1] += (float)0.06863335340156532;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1d92e6))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      result[0] += (float)1;
      result[1] += (float)0;
    }
  } else {
    if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3eb6fdb2))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f439636))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    } else {
      if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec52172))) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7b0a06))) ) ) {
          if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
            result[0] += (float)0.9355836849507736;
            result[1] += (float)0.06441631504922644;
          } else {
            result[0] += (float)0.21548507462686567;
            result[1] += (float)0.7845149253731343;
          }
        } else {
          if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9978995054432592;
            result[1] += (float)0.002100494556740785;
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
    if ( UNLIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f43fe1a))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e97653f))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
          if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
            result[0] += (float)0.9044967880085653;
            result[1] += (float)0.09550321199143469;
          } else {
            result[0] += (float)0.4580878414568827;
            result[1] += (float)0.5419121585431173;
          }
        } else {
          if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e68b814))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9964220050503895;
            result[1] += (float)0.00357799494961054;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
      if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
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
      if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3eba75de))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x367fe000))) ) ) {
            result[0] += (float)0.9844951179852051;
            result[1] += (float)0.01550488201479491;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
      if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
          if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
            result[0] += (float)0.9947257383966245;
            result[1] += (float)0.005274261603375527;
          } else {
            result[0] += (float)0.769835035349568;
            result[1] += (float)0.23016496465043204;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
            result[0] += (float)0.8758169934640523;
            result[1] += (float)0.12418300653594772;
          } else {
            result[0] += (float)0.21672167216721672;
            result[1] += (float)0.7832783278327833;
          }
        }
      } else {
        if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
          if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e576228))) ) ) {
            result[0] += (float)0.9976415094339622;
            result[1] += (float)0.0023584905660377358;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9593485509104899;
            result[1] += (float)0.04065144908951013;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e073652))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
          if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
            result[0] += (float)0.0009737098344693282;
            result[1] += (float)0.9990262901655307;
          } else {
            result[0] += (float)0.9851833976833977;
            result[1] += (float)0.014816602316602317;
          }
        } else {
          if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d33cc3e))) ) ) {
            result[0] += (float)0.3470887507066139;
            result[1] += (float)0.6529112492933861;
          } else {
            result[0] += (float)0.01027433534583201;
            result[1] += (float)0.989725664654168;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3ea757a2))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7a1c2c))) ) ) {
          if ( UNLIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea5fc90))) ) ) {
            result[0] += (float)0.9754601226993865;
            result[1] += (float)0.024539877300613498;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3f5db6))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
          } else {
            result[0] += (float)0.9995650992117423;
            result[1] += (float)0.0004349007882576787;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e11c43c))) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e82ed20))) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
          if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6cab8b))) ) ) {
            result[0] += (float)0.6934010152284263;
            result[1] += (float)0.3065989847715736;
          } else {
            result[0] += (float)0.9895522388059701;
            result[1] += (float)0.010447761194029851;
          }
        } else {
          if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
            result[0] += (float)0.7850902737332557;
            result[1] += (float)0.21490972626674432;
          } else {
            result[0] += (float)0.15543593194270883;
            result[1] += (float)0.8445640680572911;
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea59655))) ) ) {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8c31d2))) ) ) {
            result[0] += (float)0.8023088023088023;
            result[1] += (float)0.1976911976911977;
          } else {
            result[0] += (float)0.9812863576250529;
            result[1] += (float)0.01871364237494706;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
        if ( UNLIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae945bf))) ) ) {
          if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
            result[0] += (float)0.9771309771309772;
            result[1] += (float)0.02286902286902287;
          } else {
            result[0] += (float)0.05340773216420885;
            result[1] += (float)0.9465922678357912;
          }
        } else {
          if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.8676957001102535;
            result[1] += (float)0.13230429988974643;
          }
        }
      } else {
        if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb1b232))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3eda8b92))) ) ) {
            result[0] += (float)0.8666666666666667;
            result[1] += (float)0.13333333333333333;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f47d2be))) ) ) {
      if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d610a91))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    } else {
      if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0dcf64))) ) ) {
        if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e925fe8))) ) ) {
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
    }
  } else {
    if ( UNLIKELY( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f36144d))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
        if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee4ca6a))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e10712c))) ) ) {
          if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
            result[0] += (float)0.9850293877335864;
            result[1] += (float)0.014970612266413642;
          } else {
            result[0] += (float)0.4757295579312337;
            result[1] += (float)0.5242704420687663;
          }
        } else {
          if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
            result[0] += (float)0.10465116279069768;
            result[1] += (float)0.8953488372093024;
          } else {
            result[0] += (float)0.9982292907504587;
            result[1] += (float)0.0017707092495412252;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
    if ( LIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6293aa))) ) ) {
      if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    } else {
      if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec1232a))) ) ) {
        if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
        } else {
          if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.5384615384615384;
            result[1] += (float)0.46153846153846156;
          }
        }
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    }
  } else {
    if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
      if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42e172))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
            result[0] += (float)0.9995074498214506;
            result[1] += (float)0.0004925501785494397;
          } else {
            result[0] += (float)0.8420288803425006;
            result[1] += (float)0.15797111965749946;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[75].missing != -1) || ((*( ((int*)(data)) + 75 ))<=((int)(0x38853d80))) ) ) {
          if ( LIKELY( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7f201e))) ) ) {
            result[0] += (float)0.9997666196016196;
            result[1] += (float)0.00023338039838034005;
          } else {
            result[0] += (float)0.9906103286384976;
            result[1] += (float)0.009389671361502348;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
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
    if ( LIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed85e6e))) ) ) {
      if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
        if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
          if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7421ac))) ) ) {
            result[0] += (float)0.8658564549415272;
            result[1] += (float)0.13414354505847284;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        } else {
          if ( UNLIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae61f2c))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9845902920538915;
            result[1] += (float)0.015409707946108497;
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
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
      if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
        if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e8cd4fd))) ) ) {
          if ( LIKELY( !(data[73].missing != -1) || ((*( ((int*)(data)) + 73 ))<=((int)(0x3f794b48))) ) ) {
            result[0] += (float)0.993127147766323;
            result[1] += (float)0.006872852233676976;
          } else {
            result[0] += (float)0.9230769230769231;
            result[1] += (float)0.07692307692307693;
          }
        } else {
          if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0a43f6))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
          } else {
            result[0] += (float)0.9991013928410963;
            result[1] += (float)0.0008986071589036993;
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9062702602574789;
            result[1] += (float)0.09372973974252106;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e878fb0))) ) ) {
        if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d728d94))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec96f46))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.4457831325301205;
            result[1] += (float)0.5542168674698795;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e073652))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e921399))) ) ) {
            result[0] += (float)0.8789421110212624;
            result[1] += (float)0.12105788897873758;
          } else {
            result[0] += (float)0.00409050236482168;
            result[1] += (float)0.9959094976351783;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f531eed))) ) ) {
        if ( LIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3eac6019))) ) ) {
          if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8603ba))) ) ) {
            result[0] += (float)0.480225988700565;
            result[1] += (float)0.519774011299435;
          } else {
            result[0] += (float)0.9980328956723705;
            result[1] += (float)0.0019671043276295206;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      } else {
        if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
          if ( LIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f38d82a))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.1875;
            result[1] += (float)0.8125;
          }
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
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
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
      if ( LIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aef92e5))) ) ) {
        if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
          if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            result[0] += (float)0.0006561679790026247;
            result[1] += (float)0.9993438320209974;
          } else {
            result[0] += (float)0.9566572557876906;
            result[1] += (float)0.04334274421230943;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      } else {
        if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e979cce))) ) ) {
          if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9156041287188829;
            result[1] += (float)0.08439587128111718;
          }
        } else {
          if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
            result[0] += (float)0.7566371681415929;
            result[1] += (float)0.24336283185840707;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eb8c0b6))) ) ) {
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb2ce54))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f53226a))) ) ) {
            result[0] += (float)0.999816898023643;
            result[1] += (float)0.0001831019763569573;
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
  if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
    if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4fd360))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea59655))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    }
  } else {
    if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
      if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51791f))) ) ) {
        if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e182b3a))) ) ) {
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
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
          if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3f180c))) ) ) {
            result[0] += (float)0.7;
            result[1] += (float)0.3;
          } else {
            result[0] += (float)0.9986116754706759;
            result[1] += (float)0.001388324529324123;
          }
        } else {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += (float)0.15170494084899094;
            result[1] += (float)0.848295059151009;
          } else {
            result[0] += (float)0.9604533900070842;
            result[1] += (float)0.03954660999291578;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
      if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aec176e))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9941514842532562;
            result[1] += (float)0.005848515746743877;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
        if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d728d94))) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e891ac6))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.04827586206896552;
            result[1] += (float)0.9517241379310345;
          }
        } else {
          if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            result[0] += (float)0.0017006802721088435;
            result[1] += (float)0.9982993197278912;
          } else {
            result[0] += (float)0.843634442683571;
            result[1] += (float)0.15636555731642895;
          }
        }
      } else {
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb2ce54))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[66].missing != -1) || ((*( ((int*)(data)) + 66 ))<=((int)(0x367fe000))) ) ) {
            result[0] += (float)0.9990527977547798;
            result[1] += (float)0.0009472022452201368;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
    if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
      if ( LIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f40ba05))) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6880a2))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9913099452848407;
            result[1] += (float)0.008690054715159318;
          }
        } else {
          if ( LIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4c3fb8))) ) ) {
            result[0] += (float)0.8784040531982267;
            result[1] += (float)0.12159594680177327;
          } else {
            result[0] += (float)0.7451923076923077;
            result[1] += (float)0.2548076923076923;
          }
        }
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    } else {
      if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
        if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
          if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e83b31a))) ) ) {
            result[0] += (float)0.17780580075662042;
            result[1] += (float)0.8221941992433796;
          } else {
            result[0] += (float)0.6702127659574468;
            result[1] += (float)0.32978723404255317;
          }
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
            result[0] += (float)0.5031185031185031;
            result[1] += (float)0.4968814968814969;
          } else {
            result[0] += (float)0.999337446685163;
            result[1] += (float)0.0006625533148370533;
          }
        }
      } else {
        if ( LIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ea06598))) ) ) {
          if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e878fb0))) ) ) {
            result[0] += (float)0.035302047350240125;
            result[1] += (float)0.9646979526497599;
          } else {
            result[0] += (float)0.5121984838042729;
            result[1] += (float)0.4878015161957271;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec786b2))) ) ) {
        if ( LIKELY( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d52000))) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9998735225129927;
            result[1] += (float)0.0001264774870073127;
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
  }
  if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
    if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3d75f0))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9868180306054558;
            result[1] += (float)0.013181969394544244;
          }
        } else {
          if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
            result[0] += (float)0.8167096061832904;
            result[1] += (float)0.1832903938167096;
          } else {
            result[0] += (float)0.606694560669456;
            result[1] += (float)0.39330543933054396;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f44ffbe))) ) ) {
      if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
        if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edd01ac))) ) ) {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9817453250222618;
            result[1] += (float)0.0182546749777382;
          }
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    } else {
      if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e932573))) ) ) {
        if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      } else {
        if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e9ff2a6))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9992893942085628;
            result[1] += (float)0.0007106057914372002;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
    if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f431db8))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f324a3c))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9732635639669233;
            result[1] += (float)0.02673643603307679;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f43d275))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e09311e))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3eabf9de))) ) ) {
            result[0] += (float)0.9999081241243081;
            result[1] += (float)9.18758756919402e-05;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f3b5226))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0df6be))) ) ) {
            result[0] += (float)0.9968510603151004;
            result[1] += (float)0.0031489396848995437;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e89e0c1))) ) ) {
            result[0] += (float)0.6249894327500212;
            result[1] += (float)0.3750105672499789;
          } else {
            result[0] += (float)0.9968771686328938;
            result[1] += (float)0.003122831367106176;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
      if ( LIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3f180c))) ) ) {
        if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e576228))) ) ) {
          if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f444af2))) ) ) {
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
        if ( UNLIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e7a908c))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb505da))) ) ) {
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
        if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.7941671340437465;
            result[1] += (float)0.2058328659562535;
          }
        } else {
          if ( LIKELY( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38850f80))) ) ) {
            result[0] += (float)0.9966233173625371;
            result[1] += (float)0.003376682637462925;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e913728))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e9a7c4a))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
      if ( LIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae89bf6))) ) ) {
        if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
        } else {
          if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f504bde))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.05555555555555555;
            result[1] += (float)0.9444444444444444;
          }
        }
      } else {
        if ( LIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb28b60))) ) ) {
          if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c19ca))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dc61da2))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7b0a06))) ) ) {
        if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
            result[0] += (float)0.7362020579981291;
            result[1] += (float)0.2637979420018709;
          } else {
            result[0] += (float)0.9656878917848895;
            result[1] += (float)0.03431210821511053;
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3eb72cf8))) ) ) {
            result[0] += (float)0.43103448275862066;
            result[1] += (float)0.5689655172413793;
          } else {
            result[0] += (float)0.1867456660083388;
            result[1] += (float)0.8132543339916611;
          }
        }
      } else {
        if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec689ae))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e03eae8))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9966371403935095;
            result[1] += (float)0.003362859606490554;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e913728))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f2f1d36))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3aea446e))) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0d800c))) ) ) {
            result[0] += (float)0.9548994682470056;
            result[1] += (float)0.045100531752994465;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        } else {
          if ( LIKELY( !(data[66].missing != -1) || ((*( ((int*)(data)) + 66 ))<=((int)(0x36554000))) ) ) {
            result[0] += (float)0.9988706546673725;
            result[1] += (float)0.0011293453326274925;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
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
      if ( LIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
        if ( LIKELY( !(data[73].missing != -1) || ((*( ((int*)(data)) + 73 ))<=((int)(0x3f78b606))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f4359f7))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec8c049))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      }
    } else {
      if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
        if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed67056))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec38888))) ) ) {
          if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
            result[0] += (float)0.9981191153203589;
            result[1] += (float)0.001880884679641083;
          } else {
            result[0] += (float)0.913449987987507;
            result[1] += (float)0.08655001201249299;
          }
        } else {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9479429051217464;
            result[1] += (float)0.052057094878253565;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e99b6c0))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      result[0] += (float)1;
      result[1] += (float)0;
    }
  } else {
    if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec07061))) ) ) {
        if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3eca2e64))) ) ) {
          if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb9172e))) ) ) {
            result[0] += (float)0.01056338028169014;
            result[1] += (float)0.9894366197183099;
          } else {
            result[0] += (float)0.6666666666666666;
            result[1] += (float)0.3333333333333333;
          }
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    } else {
      if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e10712c))) ) ) {
          if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
            result[0] += (float)0.9578364237901054;
            result[1] += (float)0.04216357620989459;
          } else {
            result[0] += (float)0.5247591684975494;
            result[1] += (float)0.47524083150245056;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9955657829755488;
            result[1] += (float)0.0044342170244512395;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
      if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
        if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
          if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      } else {
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3d98d6))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)0.9732737284395925;
            result[1] += (float)0.026726271560407515;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e5e00e7))) ) ) {
          if ( LIKELY( !(data[75].missing != -1) || ((*( ((int*)(data)) + 75 ))<=((int)(0x38850f80))) ) ) {
            result[0] += (float)0.998741577147041;
            result[1] += (float)0.0012584228529590098;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
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
    if ( UNLIKELY( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f3b5226))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0d800c))) ) ) {
          if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
            result[0] += (float)0.9988749634363117;
            result[1] += (float)0.0011250365636883198;
          } else {
            result[0] += (float)0.9060653609964937;
            result[1] += (float)0.09393463900350632;
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
  }
  if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( LIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e50e189))) ) ) {
        if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
            result[0] += (float)0.9985309272699366;
            result[1] += (float)0.0014690727300633675;
          } else {
            result[0] += (float)0.9120517365642714;
            result[1] += (float)0.08794826343572862;
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
    if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f425b6a))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e18f0c4))) ) ) {
        if ( LIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ea06598))) ) ) {
          if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
            result[0] += (float)0.9444928857358011;
            result[1] += (float)0.055507114264198805;
          } else {
            result[0] += (float)0.5187239944521498;
            result[1] += (float)0.4812760055478502;
          }
        } else {
          if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      } else {
        if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e09da8c))) ) ) {
            result[0] += (float)0.6081871345029239;
            result[1] += (float)0.391812865497076;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        } else {
          if ( UNLIKELY( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f45dc42))) ) ) {
            result[0] += (float)0.8571428571428571;
            result[1] += (float)0.14285714285714285;
          } else {
            result[0] += (float)0.9995415630408123;
            result[1] += (float)0.0004584369591876497;
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
      if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50881c))) ) ) {
        if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d86ed08))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      } else {
        if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f475a40))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3f180c))) ) ) {
      if ( LIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
        if ( LIKELY( !(data[70].missing != -1) || ((*( ((int*)(data)) + 70 ))<=((int)(0x3f70e57c))) ) ) {
          if ( LIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
            result[0] += (float)0.0003465003465003465;
            result[1] += (float)0.9996534996534997;
          } else {
            result[0] += (float)0.125;
            result[1] += (float)0.875;
          }
        } else {
          if ( UNLIKELY( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7acf40))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e05e5b4))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      }
    } else {
      if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec689ae))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
          if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e91fd23))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
            result[0] += (float)0.7927816505509332;
            result[1] += (float)0.20721834944906678;
          } else {
            result[0] += (float)0.9990132064335252;
            result[1] += (float)0.0009867935664748413;
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
    

    FILE* file = fopen("./codegen_small/esa_3_months_global/split_3/test_data.csv", "r");
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
