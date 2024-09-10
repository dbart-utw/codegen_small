
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
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.351395338773727417) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.02653165394440293312) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7352985739707946777) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1410567238926887512) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                result[0] += 0.018292682926829267;
                result[1] += 0.9817073170731707;
              } else {
                result[0] += 0.9786042169143391;
                result[1] += 0.021395783085660935;
              }
            }
          } else {
            if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7677219212055206299) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.2876596003770828247) ) ) {
                result[0] += 0.2857142857142857;
                result[1] += 0.7142857142857143;
              } else {
                result[0] += 0.9951690821256038;
                result[1] += 0.004830917874396135;
              }
            } else {
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
                result[0] += 0.978629792583281;
                result[1] += 0.021370207416719043;
              } else {
                result[0] += 0.2825578372757993;
                result[1] += 0.7174421627242007;
              }
            }
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)3.175809979438781738e-06) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2587329447269439697) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.11247803163444639;
                result[1] += 0.8875219683655536;
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9996620729711178;
                result[1] += 0.00033792702888220074;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  }
  if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001822743099182844162) ) ) {
    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3919859081506729126) ) ) {
      if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7411437630653381348) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3571722805500030518) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.7302546799182891846) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1546342372894287109) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2836239337921142578) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1042889803647994995) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                result[0] += 0.9781139362729321;
                result[1] += 0.02188606372706791;
              } else {
                result[0] += 0.37439222042139386;
                result[1] += 0.6256077795786061;
              }
            }
          } else {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                result[0] += 0.9764453961456103;
                result[1] += 0.023554603854389723;
              } else {
                result[0] += 0.36363636363636365;
                result[1] += 0.6363636363636364;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                result[0] += 0.7962489343563512;
                result[1] += 0.20375106564364875;
              } else {
                result[0] += 0.03651482284887925;
                result[1] += 0.9634851771511207;
              }
            }
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1352662220597267151) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[75].missing != -1) || (data[75].fvalue <= (float)6.344821304082870483e-05) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7713658511638641357) ) ) {
                result[0] += 0.9992945100051308;
                result[1] += 0.0007054899948691636;
              } else {
                result[0] += 0.9595080983803239;
                result[1] += 0.040491901619676064;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
      if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001801235310267657042) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2356449663639068604) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.24515543133020401) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
              if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7193010449409484863) ) ) {
                result[0] += 0.7927823050058207;
                result[1] += 0.20721769499417927;
              } else {
                result[0] += 0.9417808219178082;
                result[1] += 0.05821917808219178;
              }
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3741033822298049927) ) ) {
                result[0] += 0.5833333333333334;
                result[1] += 0.4166666666666667;
              } else {
                result[0] += 0.2193103448275862;
                result[1] += 0.7806896551724138;
              }
            }
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3492275625467300415) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[68].missing != -1) || (data[68].fvalue <= (float)0.8061504662036895752) ) ) {
                result[0] += 0.9473684210526315;
                result[1] += 0.05263157894736842;
              } else {
                result[0] += 0.9984994748161856;
                result[1] += 0.001500525183814335;
              }
            }
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
            if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7879263758659362793) ) ) {
              if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4519360363483428955) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9999390763981967;
                result[1] += 6.0923601803338614e-05;
              }
            } else {
              if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.6744537055492401123) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9996448863636364;
                result[1] += 0.0003551136363636364;
              }
            }
          } else {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8421345353126525879) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.9470488219577362;
                result[1] += 0.052951178042263784;
              }
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2165748998522758484) ) ) {
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
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2858879715204238892) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
          if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7810099124908447266) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7805594503879547119) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7648734152317047119) ) ) {
                result[0] += 0.9285714285714286;
                result[1] += 0.07142857142857142;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2232787013053894043) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9853700516351118;
                result[1] += 0.014629948364888123;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.2959518879652023315) ) ) {
                result[0] += 0.5455950540958269;
                result[1] += 0.45440494590417313;
              } else {
                result[0] += 0.2789518174133559;
                result[1] += 0.7210481825866442;
              }
            }
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.266275256872177124) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.145584791898727417) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4233485013246536255) ) ) {
            if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7523058950901031494) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8243512511253356934) ) ) {
                result[0] += 0.9981662362935518;
                result[1] += 0.001833763706448112;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
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
    }
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2235839143395423889) ) ) {
        if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.02653165394440293312) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7805594503879547119) ) ) {
          if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05494171613827347755) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4500495195388793945) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7352985739707946777) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2775887250900268555) ) ) {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.419579729437828064) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[68].missing != -1) || (data[68].fvalue <= (float)0.8111602962017059326) ) ) {
                result[0] += 0.018867924528301886;
                result[1] += 0.9811320754716981;
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
          if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04964188672602176666) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2851310521364212036) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[74].missing != -1) || (data[74].fvalue <= (float)6.344821304082870483e-05) ) ) {
                result[0] += 0.9997219948414598;
                result[1] += 0.000278005158540164;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
              if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
                result[0] += 0.7360562143170839;
                result[1] += 0.2639437856829161;
              } else {
                result[0] += 0.8909440307470574;
                result[1] += 0.10905596925294259;
              }
            } else {
              if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.6744537055492401123) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9984409799554566;
                result[1] += 0.0015590200445434299;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7015351951122283936) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2436483129858970642) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3335509002208709717) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.8847962382445141;
                result[1] += 0.1152037617554859;
              }
            } else {
              if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
                result[0] += 0.5633802816901409;
                result[1] += 0.43661971830985913;
              } else {
                result[0] += 0.2026726057906459;
                result[1] += 0.7973273942093542;
              }
            }
          } else {
            if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7147214412689208984) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.2215909090909091;
                result[1] += 0.7784090909090909;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
                result[0] += 0.9768729641693811;
                result[1] += 0.023127035830618894;
              } else {
                result[0] += 0.3212121212121212;
                result[1] += 0.6787878787878788;
              }
            }
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2753280550241470337) ) ) {
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3850509226322174072) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9963112553405085;
                result[1] += 0.0036887446594915134;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001832863199524581432) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2421378418803215027) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2326309755444526672) ) ) {
                result[0] += 0.6857142857142857;
                result[1] += 0.3142857142857143;
              } else {
                result[0] += 0.9397590361445783;
                result[1] += 0.060240963855421686;
              }
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2306120544672012329) ) ) {
                result[0] += 0.9954185755935027;
                result[1] += 0.004581424406497293;
              } else {
                result[0] += 0.9744292237442922;
                result[1] += 0.025570776255707764;
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
              if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                result[0] += 0.24302788844621515;
                result[1] += 0.7569721115537849;
              } else {
                result[0] += 0.945260347129506;
                result[1] += 0.05473965287049399;
              }
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7961892485618591309) ) ) {
                result[0] += 0.011364682064967333;
                result[1] += 0.9886353179350327;
              } else {
                result[0] += 0.11557788944723618;
                result[1] += 0.8844221105527639;
              }
            }
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
            if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4483384788036346436) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2768351733684539795) ) ) {
                result[0] += 0.4065040650406504;
                result[1] += 0.5934959349593496;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[75].missing != -1) || (data[75].fvalue <= (float)6.344821304082870483e-05) ) ) {
                result[0] += 0.9990667099496835;
                result[1] += 0.0009332900503165071;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7676883339881896973) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7118854820728302002) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3586165159940719604) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.2974597364664077759) ) ) {
                result[0] += 0.7603174603174603;
                result[1] += 0.2396825396825397;
              } else {
                result[0] += 0.3167649536647009;
                result[1] += 0.6832350463352991;
              }
            }
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7713658511638641357) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2750624716281890869) ) ) {
                result[0] += 0.9955456570155902;
                result[1] += 0.004454342984409799;
              } else {
                result[0] += 0.999818829639471;
                result[1] += 0.00018117036052901745;
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.8768727181165806;
                result[1] += 0.12312728188341936;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2677823752164840698) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1320431455969810486) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7768823504447937012) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06154489703476428986) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001744302164297550917) ) ) {
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
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1288257911801338196) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[75].missing != -1) || (data[75].fvalue <= (float)6.34482712484896183e-05) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1301127374172210693) ) ) {
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
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4500495195388793945) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.383395761251449585) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3148349970579147339) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511906176805496216) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9192169837331128;
                result[1] += 0.08078301626688723;
              }
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3532431274652481079) ) ) {
                result[0] += 0.9776555517359917;
                result[1] += 0.02234444826400825;
              } else {
                result[0] += 0.830945558739255;
                result[1] += 0.16905444126074498;
              }
            }
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3319918960332870483) ) ) {
                result[0] += 0.21034870641169853;
                result[1] += 0.7896512935883014;
              } else {
                result[0] += 0.5171597633136095;
                result[1] += 0.48284023668639053;
              }
            }
          }
        } else {
          if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.6757777631282806396) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)6.351619958877563477e-06) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1486023962497711182) ) ) {
                result[0] += 0.9946517979062358;
                result[1] += 0.005348202093764224;
              } else {
                result[0] += 0.9997164762726081;
                result[1] += 0.0002835237273919361;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      } else {
        if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7909130454063415527) ) ) {
          if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7714412212371826172) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7730861902236938477) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8868957757949829102) ) ) {
              if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2781266868114471436) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.34782608695652173;
                result[1] += 0.6521739130434783;
              }
            } else {
              if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7852395772933959961) ) ) {
                result[0] += 0.75;
                result[1] += 0.25;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.02653165394440293312) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3675650954246520996) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3532431274652481079) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2961181998252868652) ) ) {
                result[0] += 0.9935654806964421;
                result[1] += 0.006434519303557911;
              } else {
                result[0] += 0.26666666666666666;
                result[1] += 0.7333333333333333;
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                result[0] += 0.8770642201834863;
                result[1] += 0.12293577981651377;
              } else {
                result[0] += 0.17797017797017797;
                result[1] += 0.822029822029822;
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                result[0] += 0.8674735249621786;
                result[1] += 0.13252647503782147;
              } else {
                result[0] += 0.44496330887258173;
                result[1] += 0.5550366911274183;
              }
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2617471963167190552) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.6808442473411560059) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3864005208015441895) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9987765153286264;
                result[1] += 0.0012234846713735758;
              }
            }
          }
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7655960023403167725) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2436483129858970642) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3818887621164321899) ) ) {
                result[0] += 0.9872611464968153;
                result[1] += 0.012738853503184714;
              } else {
                result[0] += 0.9328703703703703;
                result[1] += 0.06712962962962964;
              }
            }
          } else {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
                result[0] += 0.7214012041598249;
                result[1] += 0.27859879584017516;
              } else {
                result[0] += 0.23255813953488372;
                result[1] += 0.7674418604651163;
              }
            } else {
              if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8868957757949829102) ) ) {
                result[0] += 0.1292929292929293;
                result[1] += 0.8707070707070707;
              } else {
                result[0] += 0.6975;
                result[1] += 0.3025;
              }
            }
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.153880678117275238) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[63].missing != -1) || (data[63].fvalue <= (float)0.9962597787380218506) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.66775473952293396) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3499511033296585083) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9984995506268375;
                result[1] += 0.0015004493731625207;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4303112775087356567) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1384864374995231628) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
          if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4261494725942611694) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2972014397382736206) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3017295151948928833) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.326264403760433197) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2311231344938278198) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
                result[0] += 0.8309953239812959;
                result[1] += 0.1690046760187041;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2542048841714859009) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.291439443826675415) ) ) {
                result[0] += 0.9989384288747346;
                result[1] += 0.0010615711252653928;
              } else {
                result[0] += 0.9300518134715026;
                result[1] += 0.06994818652849741;
              }
            }
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                result[0] += 0.9422110552763819;
                result[1] += 0.05778894472361809;
              } else {
                result[0] += 0.4631578947368421;
                result[1] += 0.5368421052631579;
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                result[0] += 0.9896907216494846;
                result[1] += 0.010309278350515464;
              } else {
                result[0] += 0.25271739130434784;
                result[1] += 0.7472826086956522;
              }
            }
          }
        }
      } else {
        if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7070246040821075439) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
              if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9915716350078582764) ) ) {
                result[0] += 0.989247311827957;
                result[1] += 0.010752688172043012;
              } else {
                result[0] += 0.6666666666666666;
                result[1] += 0.3333333333333333;
              }
            } else {
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
                result[0] += 0.9545454545454546;
                result[1] += 0.045454545454545456;
              } else {
                result[0] += 0.1;
                result[1] += 0.9;
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.8145281076431274414) ) ) {
                result[0] += 0.9996944507556468;
                result[1] += 0.0003055492443532149;
              } else {
                result[0] += 0.7777777777777778;
                result[1] += 0.2222222222222222;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.326264403760433197) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
      if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001801235310267657042) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4519360363483428955) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.6744537055492401123) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2293138951063156128) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.997057310422883;
                result[1] += 0.0029426895771169875;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4284365326166152954) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1335144117474555969) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3095207810401916504) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.216489940881729126) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9839773798303487;
                result[1] += 0.016022620169651274;
              }
            } else {
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.409673541784286499) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.7159468438538206;
                result[1] += 0.2840531561461794;
              }
            }
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.148147091269493103) ) ) {
              if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7687848806381225586) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.9937694704049844;
                result[1] += 0.006230529595015576;
              }
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8129708170890808105) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.6666666666666666;
                result[1] += 0.3333333333333333;
              }
            }
          }
        } else {
          if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
            if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7177566289901733398) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8173351287841796875) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                result[0] += 0.8520286396181385;
                result[1] += 0.14797136038186157;
              } else {
                result[0] += 0.01785401715385962;
                result[1] += 0.9821459828461404;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                result[0] += 0.5853658536585366;
                result[1] += 0.4146341463414634;
              } else {
                result[0] += 0.0034841688079787466;
                result[1] += 0.9965158311920213;
              }
            }
          }
        }
      } else {
        if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4316533952951431274) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1561447158455848694) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3615049868822097778) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3095207810401916504) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.9933774834437086;
                result[1] += 0.006622516556291391;
              }
            }
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3557280451059341431) ) ) {
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
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.02653165394440293312) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  } else {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
        if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3065050989389419556) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.952006294256491;
                result[1] += 0.04799370574350905;
              }
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3335509002208709717) ) ) {
                result[0] += 0.3111111111111111;
                result[1] += 0.6888888888888889;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
            if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7174687683582305908) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2507216855883598328) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.9454545454545454;
                result[1] += 0.05454545454545454;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.375662386417388916) ) ) {
                result[0] += 0.6670574443141852;
                result[1] += 0.33294255568581477;
              } else {
                result[0] += 0.2409545804464973;
                result[1] += 0.7590454195535027;
              }
            }
          }
        }
      } else {
        if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7597486972808837891) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2240921184420585632) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4517073631286621094) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2421378418803215027) ) ) {
                result[0] += 0.58125;
                result[1] += 0.41875;
              } else {
                result[0] += 0.9988300992075873;
                result[1] += 0.0011699007924128033;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3009759485721588135) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.7592073678970336914) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1320072859525680542) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9904153354632588;
                result[1] += 0.009584664536741214;
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                result[0] += 0.9758120248790602;
                result[1] += 0.024187975120939877;
              } else {
                result[0] += 0.6686507936507936;
                result[1] += 0.33134920634920634;
              }
            }
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3772213906049728394) ) ) {
                result[0] += 0.9543726235741445;
                result[1] += 0.045627376425855515;
              } else {
                result[0] += 0.6368159203980099;
                result[1] += 0.36318407960199006;
              }
            }
          } else {
            if ( ( !(data[50].missing != -1) || (data[50].fvalue <= (float)0.6432926654815673828) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                result[0] += 0.2697095435684647;
                result[1] += 0.7302904564315352;
              } else {
                result[0] += 0.011774370208105149;
                result[1] += 0.9882256297918949;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7655960023403167725) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
                result[0] += 0.9999099839096238;
                result[1] += 9.001609037615473e-05;
              } else {
                result[0] += 0.9948307445233495;
                result[1] += 0.005169255476650523;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3273122608661651611) ) ) {
        if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.706625819206237793) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
            if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2345921769738197327) ) ) {
                result[0] += 0.9615384615384616;
                result[1] += 0.038461538461538464;
              } else {
                result[0] += 0.07703703703703704;
                result[1] += 0.922962962962963;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3065050989389419556) ) ) {
                result[0] += 0.8959285869801873;
                result[1] += 0.10407141301981276;
              } else {
                result[0] += 0.7620171040990859;
                result[1] += 0.23798289590091418;
              }
            }
          } else {
            if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7806620895862579346) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9986574522405142;
                result[1] += 0.0013425477594858702;
              }
            }
          }
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3253962397575378418) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3833957463502883911) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3241925090551376343) ) ) {
          if ( ( !(data[74].missing != -1) || (data[74].fvalue <= (float)6.603170186281204224e-05) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1516199931502342224) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1404197141528129578) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7779097855091094971) ) ) {
                result[0] += 0.9967479674796748;
                result[1] += 0.0032520325203252032;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
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
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2768351733684539795) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1410631909966468811) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
              if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9783597886562347412) ) ) {
                result[0] += 0.041237113402061855;
                result[1] += 0.9587628865979382;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                result[0] += 0.9789399168215203;
                result[1] += 0.02106008317847978;
              } else {
                result[0] += 0.7150192554557124;
                result[1] += 0.28498074454428757;
              }
            }
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
                result[0] += 0.9976958525345622;
                result[1] += 0.002304147465437788;
              } else {
                result[0] += 0.8929159802306426;
                result[1] += 0.1070840197693575;
              }
            }
          } else {
            if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7193010449409484863) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.2222222222222222;
                result[1] += 0.7777777777777778;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.06226479644201163;
                result[1] += 0.9377352035579883;
              }
            }
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
              if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.9523809523809523;
                result[1] += 0.047619047619047616;
              }
            } else {
              if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8868957757949829102) ) ) {
                result[0] += 0.44776119402985076;
                result[1] += 0.5522388059701493;
              } else {
                result[0] += 0.8823529411764706;
                result[1] += 0.11764705882352941;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.419579729437828064) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7951798439025878906) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.9933518767356872559) ) ) {
          if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.7235853672027587891) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8274533748626708984) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1591623052954673767) ) ) {
                result[0] += 0.9933040350250476;
                result[1] += 0.006695964974952439;
              } else {
                result[0] += 0.7284096271826334;
                result[1] += 0.2715903728173667;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1380424797534942627) ) ) {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
            if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4517073631286621094) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
              if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7809995114803314209) ) ) {
                result[0] += 0.9953155139156793;
                result[1] += 0.00468448608432075;
              } else {
                result[0] += 0.9749552772808586;
                result[1] += 0.025044722719141325;
              }
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2326309755444526672) ) ) {
                result[0] += 0.8781568453699601;
                result[1] += 0.12184315463003988;
              } else {
                result[0] += 0.9987937273823885;
                result[1] += 0.0012062726176115801;
              }
            }
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.215015023946762085) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3179547637701034546) ) ) {
              if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.9751699864864349365) ) ) {
                result[0] += 0.33668341708542715;
                result[1] += 0.6633165829145728;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2376131191849708557) ) ) {
                result[0] += 0.7668161434977578;
                result[1] += 0.23318385650224216;
              } else {
                result[0] += 0.1935483870967742;
                result[1] += 0.8064516129032258;
              }
            }
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
              if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8896431326866149902) ) ) {
                result[0] += 0.7682119205298014;
                result[1] += 0.23178807947019867;
              } else {
                result[0] += 0.1891891891891892;
                result[1] += 0.8108108108108109;
              }
            } else {
              if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7165536880493164062) ) ) {
                result[0] += 0.09813084112149532;
                result[1] += 0.9018691588785047;
              } else {
                result[0] += 0.3105590062111801;
                result[1] += 0.6894409937888198;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2557153552770614624) ) ) {
        if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7666589617729187012) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
                result[0] += 0.033192090395480225;
                result[1] += 0.9668079096045198;
              } else {
                result[0] += 0.001695025751352761;
                result[1] += 0.9983049742486473;
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2172435075044631958) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9534342258440046;
                result[1] += 0.046565774155995346;
              }
            }
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1384864374995231628) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
            if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7411437630653381348) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.0012695725772323319;
                result[1] += 0.9987304274227676;
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3593400567770004272) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9995598914398885;
                result[1] += 0.00044010856011149417;
              }
            }
          } else {
            if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7842374145984649658) ) ) {
                result[0] += 0.9786718371303926;
                result[1] += 0.021328162869607366;
              } else {
                result[0] += 0.2356020942408377;
                result[1] += 0.7643979057591623;
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3586165159940719604) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.99836867862969;
                result[1] += 0.0016313213703099511;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1539440527558326721) ) ) {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.07053079456090927124) ) ) {
        if ( ( !(data[66].missing != -1) || (data[66].fvalue <= (float)3.177672624588012695e-06) ) ) {
          if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04041793011128902435) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8231741487979888916) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2889055609703063965) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.9565217391304348;
                result[1] += 0.043478260869565216;
              }
            } else {
              if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.752838432788848877) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.1;
                result[1] += 0.9;
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7464606761932373047) ) ) {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7787209153175354004) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8154961466789245605) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3226326256990432739) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7879263758659362793) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.9093393087387084961) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3101553469896316528) ) ) {
        if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4500495195388793945) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7805594503879547119) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1531271114945411682) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7722851336002349854) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1493559554219245911) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001772137475199997425) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2436483129858970642) ) ) {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3472117632627487183) ) ) {
                result[0] += 0.6260162601626016;
                result[1] += 0.37398373983739835;
              } else {
                result[0] += 0.4344440984117097;
                result[1] += 0.5655559015882903;
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9503213049925853;
                result[1] += 0.04967869500741473;
              }
            }
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1410631909966468811) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
                result[0] += 0.5062240663900415;
                result[1] += 0.49377593360995853;
              } else {
                result[0] += 0.9992875209290727;
                result[1] += 0.0007124790709272915;
              }
            } else {
              if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
                result[0] += 0.9457429048414023;
                result[1] += 0.05425709515859766;
              } else {
                result[0] += 0.9982500486097609;
                result[1] += 0.00174995139023916;
              }
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2647681385278701782) ) ) {
            if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8868957757949829102) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
                result[0] += 0.631578947368421;
                result[1] += 0.3684210526315789;
              } else {
                result[0] += 0.17857142857142858;
                result[1] += 0.8214285714285714;
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
                result[0] += 0.8113879003558719;
                result[1] += 0.18861209964412812;
              } else {
                result[0] += 0.4329268292682927;
                result[1] += 0.5670731707317073;
              }
            }
          } else {
            if ( ( !(data[75].missing != -1) || (data[75].fvalue <= (float)6.344821304082870483e-05) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3521160334348678589) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9996840623833185;
                result[1] += 0.0003159376166815062;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1516199931502342224) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2407495155930519104) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
            if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.807103961706161499) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2259332984685897827) ) ) {
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
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
              if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.706625819206237793) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9935014569314299;
                result[1] += 0.006498543068570111;
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                result[0] += 0.9020909392631928;
                result[1] += 0.09790906073680716;
              } else {
                result[0] += 0.6379310344827587;
                result[1] += 0.3620689655172414;
              }
            }
          }
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3499511033296585083) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2526977509260177612) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2924157828092575073) ) ) {
              if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7683391571044921875) ) ) {
                result[0] += 0.8181818181818182;
                result[1] += 0.18181818181818182;
              } else {
                result[0] += 0.27472527472527475;
                result[1] += 0.7252747252747253;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.6725778281688690186) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1346227526664733887) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9999195818254926;
                result[1] += 8.041817450743868e-05;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7464606761932373047) ) ) {
    if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001820213044993579388) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2370446100831031799) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3217779546976089478) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1395496055483818054) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
          if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
            if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8823183178901672363) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511906176805496216) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.988049591002045;
                result[1] += 0.01195040899795501;
              }
            }
          } else {
            if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4158186167478561401) ) ) {
                result[0] += 0.7896907216494845;
                result[1] += 0.21030927835051547;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.7997875730217737;
                result[1] += 0.20021242697822622;
              }
            }
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7713658511638641357) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[70].missing != -1) || (data[70].fvalue <= (float)0.9309795200824737549) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.983739837398374;
                result[1] += 0.016260162601626018;
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
                result[0] += 0.8125;
                result[1] += 0.1875;
              } else {
                result[0] += 0.6067114093959731;
                result[1] += 0.3932885906040268;
              }
            }
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3472117632627487183) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7621722519397735596) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8098314404487609863) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.990228013029316;
                result[1] += 0.009771986970684038;
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
                result[0] += 0.9901283316880553;
                result[1] += 0.009871668311944718;
              } else {
                result[0] += 0.05186972255729795;
                result[1] += 0.9481302774427021;
              }
            }
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3571722805500030518) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7768823504447937012) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.7190684133915575;
                result[1] += 0.28093158660844253;
              }
            }
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2428914010524749756) ) ) {
                result[0] += 0.85;
                result[1] += 0.15;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.287395089864730835) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3340645134449005127) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2723104655742645264) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1333329528570175171) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1516199931502342224) ) ) {
                result[0] += 0.9917355371900827;
                result[1] += 0.008264462809917356;
              } else {
                result[0] += 0.9999421818265918;
                result[1] += 5.781817340826569e-05;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3877691775560379028) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3132751137018203735) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2243725359439849854) ) ) {
                result[0] += 0.9417328793038214;
                result[1] += 0.058267120696178586;
              } else {
                result[0] += 0.7962913195377587;
                result[1] += 0.20370868046224133;
              }
            }
          } else {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3468081206083297729) ) ) {
              if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4517073631286621094) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9996421386567627;
                result[1] += 0.0003578613432373878;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4284365326166152954) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8118190765380859375) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7833181321620941162) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3622285276651382446) ) ) {
                result[0] += 0.0784313725490196;
                result[1] += 0.9215686274509803;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.00170508422888815403) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
                result[0] += 0.9969641772920461;
                result[1] += 0.0030358227079538553;
              } else {
                result[0] += 0.7391304347826086;
                result[1] += 0.2608695652173913;
              }
            }
          }
        } else {
          if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8841484189033508301) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                result[0] += 0.9571286141575274;
                result[1] += 0.04287138584247258;
              } else {
                result[0] += 0.3783482142857143;
                result[1] += 0.6216517857142857;
              }
            }
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.1387602388858795166) ) ) {
          if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7193010449409484863) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.287395089864730835) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1571642681956291199) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.770910799503326416) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3444691747426986694) ) ) {
                result[0] += 0.9342465753424658;
                result[1] += 0.06575342465753424;
              } else {
                result[0] += 0.14285714285714285;
                result[1] += 0.8571428571428571;
              }
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3787812590599060059) ) ) {
                result[0] += 0.9988901220865705;
                result[1] += 0.0011098779134295228;
              } else {
                result[0] += 0.9749117992943943;
                result[1] += 0.025088200705605645;
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2617471963167190552) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1380424797534942627) ) ) {
          if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001830333145335316658) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.9138941764831542969) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
                result[0] += 0.4;
                result[1] += 0.6;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.1380960345268249512) ) ) {
                result[0] += 0.9771918973248802;
                result[1] += 0.02280810267511984;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3547509759664535522) ) ) {
                result[0] += 0.8159509202453987;
                result[1] += 0.18404907975460122;
              } else {
                result[0] += 0.4097560975609756;
                result[1] += 0.5902439024390244;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.7502942681312561035) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.771973729133605957) ) ) {
              if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4519360363483428955) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9999899252453203;
                result[1] += 1.0074754679723548e-05;
              }
            } else {
              if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)6.353482604026794434e-06) ) ) {
                result[0] += 0.9991501416430595;
                result[1] += 0.0008498583569405099;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1546342372894287109) ) ) {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3761523216962814331) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3017295151948928833) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001820213044993579388) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7165536880493164062) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3557280451059341431) ) ) {
                result[0] += 0.7223587223587223;
                result[1] += 0.27764127764127766;
              } else {
                result[0] += 0.3333333333333333;
                result[1] += 0.6666666666666666;
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                result[0] += 0.9178082191780822;
                result[1] += 0.0821917808219178;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2345921769738197327) ) ) {
                result[0] += 0.9111111111111111;
                result[1] += 0.08888888888888889;
              } else {
                result[0] += 0.11418685121107267;
                result[1] += 0.8858131487889274;
              }
            } else {
              if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
                result[0] += 0.9146417445482866;
                result[1] += 0.0853582554517134;
              } else {
                result[0] += 0.8222322232223223;
                result[1] += 0.17776777677767777;
              }
            }
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1516199931502342224) ) ) {
          if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001822743099182844162) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7584947049617767334) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7879263758659362793) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.8947368421052632;
                result[1] += 0.10526315789473684;
              }
            }
          } else {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7621722519397735596) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2888428866863250732) ) ) {
                result[0] += 0.9981267068409055;
                result[1] += 0.0018732931590944998;
              } else {
                result[0] += 0.5;
                result[1] += 0.5;
              }
            }
          }
        } else {
          if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4316533952951431274) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2979583591222763062) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9976035604245121;
                result[1] += 0.002396439575487847;
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
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.3002223819494247437) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3017295151948928833) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2293138951063156128) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3179547637701034546) ) ) {
              if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                result[0] += 0.8198433420365535;
                result[1] += 0.1801566579634465;
              } else {
                result[0] += 0.9873817034700315;
                result[1] += 0.012618296529968454;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                result[0] += 0.9519083969465649;
                result[1] += 0.048091603053435114;
              } else {
                result[0] += 0.4611973392461197;
                result[1] += 0.5388026607538803;
              }
            }
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2602400630712509155) ) ) {
                result[0] += 0.24842767295597484;
                result[1] += 0.7515723270440252;
              } else {
                result[0] += 0.8042959427207638;
                result[1] += 0.1957040572792363;
              }
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.286760672926902771) ) ) {
                result[0] += 0.6875;
                result[1] += 0.3125;
              } else {
                result[0] += 0.09473684210526316;
                result[1] += 0.9052631578947369;
              }
            }
          }
        }
      } else {
        if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7305175364017486572) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.2869065254926681519) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2572258263826370239) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1380424797534942627) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.78974875807762146) ) ) {
                result[0] += 0.9995456610631531;
                result[1] += 0.00045433893684688776;
              } else {
                result[0] += 0.9746835443037974;
                result[1] += 0.02531645569620253;
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[44].missing != -1) || (data[44].fvalue <= (float)1.92727893590927124e-05) ) ) {
                result[0] += 0.9994036970781157;
                result[1] += 0.0005963029218843172;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7666589617729187012) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7695273160934448242) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7406133711338043213) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
      if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.786156773567199707) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3009759485721588135) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2843774855136871338) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3009759485721588135) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511906176805496216) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2315745800733566284) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9901815487217488;
                result[1] += 0.009818451278251204;
              }
            }
          } else {
            if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1395496055483818054) ) ) {
                result[0] += 0.1048951048951049;
                result[1] += 0.8951048951048951;
              } else {
                result[0] += 0.7321428571428571;
                result[1] += 0.26785714285714285;
              }
            } else {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2961181998252868652) ) ) {
                result[0] += 0.7134831460674157;
                result[1] += 0.28651685393258425;
              } else {
                result[0] += 0.9480286738351255;
                result[1] += 0.05197132616487455;
              }
            }
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2852007895708084106) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3741033822298049927) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.0234375;
                result[1] += 0.9765625;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
              if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                result[0] += 0.5211267605633803;
                result[1] += 0.4788732394366197;
              } else {
                result[0] += 0.9829545454545454;
                result[1] += 0.017045454545454544;
              }
            } else {
              if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
                result[0] += 0.4870259481037924;
                result[1] += 0.5129740518962076;
              } else {
                result[0] += 0.26463104325699743;
                result[1] += 0.7353689567430025;
              }
            }
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
          if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.03104000585153698921) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.706625819206237793) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[74].missing != -1) || (data[74].fvalue <= (float)6.34482712484896183e-05) ) ) {
                result[0] += 0.9994161136842438;
                result[1] += 0.0005838863157562512;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2843774855136871338) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1516199931502342224) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
        if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001755689794663339853) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2240921184420585632) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3065050989389419556) ) ) {
              if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7406133711338043213) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9970984538336182;
                result[1] += 0.0029015461663818116;
              }
            } else {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
                result[0] += 0.9964192083892832;
                result[1] += 0.0035807916107167977;
              } else {
                result[0] += 0.8768352365415987;
                result[1] += 0.1231647634584013;
              }
            }
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3110286146402359009) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9505340078695896;
                result[1] += 0.04946599213041034;
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.7772277227722773;
                result[1] += 0.22277227722772278;
              }
            }
          } else {
            if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
              if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                result[0] += 0.17088607594936708;
                result[1] += 0.8291139240506329;
              } else {
                result[0] += 0.8878787878787879;
                result[1] += 0.11212121212121212;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                result[0] += 0.9435897435897436;
                result[1] += 0.05641025641025641;
              } else {
                result[0] += 0.34838709677419355;
                result[1] += 0.6516129032258065;
              }
            }
          }
        } else {
          if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7677219212055206299) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2542082220315933228) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3304311484098434448) ) ) {
                result[0] += 0.987987987987988;
                result[1] += 0.012012012012012012;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7713658511638641357) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.287395089864730835) ) ) {
                result[0] += 0.9592274678111588;
                result[1] += 0.0407725321888412;
              } else {
                result[0] += 0.5842696629213483;
                result[1] += 0.4157303370786517;
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.3539518900343643;
                result[1] += 0.6460481099656358;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7496495544910430908) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3499511033296585083) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7889121174812316895) ) ) {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04964188672602176666) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)6.77630305290222168e-06) ) ) {
                result[0] += 0.9993925606546052;
                result[1] += 0.000607439345394776;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2024775072932243347) ) ) {
                result[0] += 0.8792735042735043;
                result[1] += 0.12072649572649573;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2632576674222946167) ) ) {
            if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3071592897176742554) ) ) {
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
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1994618251919746399) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2881519943475723267) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3532431274652481079) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2009696662425994873) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.351395338773727417) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2987119108438491821) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.02653165394440293312) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.02653165394440293312) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001774667529389262199) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8240614533424377441) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.09403136372566223145) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3877691775560379028) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001787317683920264244) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1410567238926887512) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
                result[0] += 0.006802721088435374;
                result[1] += 0.9931972789115646;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3517352938652038574) ) ) {
                result[0] += 0.9815673903630853;
                result[1] += 0.018432609636914704;
              } else {
                result[0] += 0.9458519622454049;
                result[1] += 0.05414803775459513;
              }
            }
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1410631909966468811) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2519441843032836914) ) ) {
                result[0] += 0.40893470790378006;
                result[1] += 0.5910652920962199;
              } else {
                result[0] += 0.9999001630669906;
                result[1] += 9.983693300941795e-05;
              }
            } else {
              if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3180760592222213745) ) ) {
                result[0] += 0.8408501814411612;
                result[1] += 0.15914981855883878;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1352662220597267151) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.8145281076431274414) ) ) {
              if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04964188672602176666) ) ) {
                result[0] += 0.99899619989962;
                result[1] += 0.00100380010038001;
              } else {
                result[0] += 0.6;
                result[1] += 0.4;
              }
            } else {
              if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.9072882235050201416) ) ) {
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
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3009759485721588135) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7464606761932373047) ) ) {
      if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7677219212055206299) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3487196117639541626) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8035443127155303955) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7879263758659362793) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3819010108709335327) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1410567238926887512) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
                result[0] += 0.999895912844355;
                result[1] += 0.0001040871556449934;
              } else {
                result[0] += 0.8346895552335303;
                result[1] += 0.16531044476646975;
              }
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
                result[0] += 0.6777128005198181;
                result[1] += 0.3222871994801819;
              } else {
                result[0] += 0.48150887573964496;
                result[1] += 0.518491124260355;
              }
            }
          } else {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1070554032921791077) ) ) {
              if ( ( !(data[75].missing != -1) || (data[75].fvalue <= (float)6.34482712484896183e-05) ) ) {
                result[0] += 0.9963756948356308;
                result[1] += 0.0036243051643691476;
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
          if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.266275256872177124) ) ) {
                result[0] += 0.44776119402985076;
                result[1] += 0.5522388059701493;
              } else {
                result[0] += 0.9945736434108527;
                result[1] += 0.005426356589147287;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7183859944343566895) ) ) {
      if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7432717978954315186) ) ) {
        if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7889041304588317871) ) ) {
          if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4320280700922012329) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[49].missing != -1) || (data[49].fvalue <= (float)0.6500808894634246826) ) ) {
            if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8864393234252929688) ) ) {
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
        }
      } else {
        if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4275181293487548828) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7432717978954315186) ) ) {
        if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05947838490828871727) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2843774855136871338) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
      if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001801235310267657042) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.1397542133927345276) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2700464129447937012) ) ) {
            if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2240921184420585632) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2526977509260177612) ) ) {
                result[0] += 0.9109195402298851;
                result[1] += 0.08908045977011494;
              } else {
                result[0] += 0.999526527606071;
                result[1] += 0.00047347239392903177;
              }
            }
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.9933518767356872559) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8173351287841796875) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8265291750431060791) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
                result[0] += 0.007407407407407408;
                result[1] += 0.9925925925925926;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                result[0] += 0.0011627906976744186;
                result[1] += 0.9988372093023256;
              } else {
                result[0] += 0.42857142857142855;
                result[1] += 0.5714285714285714;
              }
            }
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2647647857666015625) ) ) {
                result[0] += 0.8082788671023965;
                result[1] += 0.19172113289760348;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                result[0] += 0.9983633387888707;
                result[1] += 0.0016366612111292963;
              } else {
                result[0] += 0.3382113821138211;
                result[1] += 0.6617886178861788;
              }
            }
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.3117152303457260132) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511906176805496216) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9829749521899342;
                result[1] += 0.01702504781006577;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3132751137018203735) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2496801465749740601) ) ) {
          if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05921705067157745361) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                result[0] += 0.9804270462633452;
                result[1] += 0.019572953736654804;
              } else {
                result[0] += 0.34640057020669995;
                result[1] += 0.6535994297933001;
              }
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2945583313703536987) ) ) {
                result[0] += 0.9630746043707611;
                result[1] += 0.03692539562923888;
              } else {
                result[0] += 0.8028064992614475;
                result[1] += 0.19719350073855244;
              }
            }
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.351395338773727417) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3542838096618652344) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.6711328625679016113) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9999022597544766;
                result[1] += 9.774024552349675e-05;
              }
            }
          }
        }
      } else {
        if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.9072882235050201416) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
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
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1516199931502342224) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2883205562829971313) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[75].missing != -1) || (data[75].fvalue <= (float)6.353389471769332886e-05) ) ) {
              if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7856489717960357666) ) ) {
                result[0] += 0.9803370786516854;
                result[1] += 0.019662921348314606;
              } else {
                result[0] += 0.8813559322033898;
                result[1] += 0.11864406779661017;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                result[0] += 0.7321016166281755;
                result[1] += 0.2678983833718245;
              } else {
                result[0] += 0.2064;
                result[1] += 0.7936;
              }
            }
          } else {
            if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7440755665302276611) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
                result[0] += 0.9980601357904947;
                result[1] += 0.0019398642095053346;
              } else {
                result[0] += 0.9223300970873787;
                result[1] += 0.07766990291262135;
              }
            }
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.351395338773727417) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3107654750347137451) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2579793781042098999) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.64;
                result[1] += 0.36;
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2738175839185714722) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[74].missing != -1) || (data[74].fvalue <= (float)6.342725828289985657e-05) ) ) {
                result[0] += 0.9996288506742546;
                result[1] += 0.0003711493257453916;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7666589617729187012) ) ) {
    if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001822743099182844162) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8154961466789245605) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7448628246784210205) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8850656449794769287) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3444691747426986694) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2976780682802200317) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1387960389256477356) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118186295032501221) ) ) {
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
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04389595240354537964) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.351395338773727417) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[75].missing != -1) || (data[75].fvalue <= (float)6.34482712484896183e-05) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7842374145984649658) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1352662220597267151) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)3.812834620475769043e-06) ) ) {
                result[0] += 0.999521788510969;
                result[1] += 0.000478211489031024;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1395496055483818054) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
            if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8887280821800231934) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2945583313703536987) ) ) {
                result[0] += 0.9287974683544303;
                result[1] += 0.07120253164556962;
              } else {
                result[0] += 0.7189605389797883;
                result[1] += 0.28103946102021177;
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2293138951063156128) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9911894273127754;
                result[1] += 0.00881057268722467;
              }
            }
          } else {
            if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7852395772933959961) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2945583313703536987) ) ) {
                result[0] += 0.034996276991809384;
                result[1] += 0.9650037230081906;
              } else {
                result[0] += 0.9178082191780822;
                result[1] += 0.0821917808219178;
              }
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
                result[0] += 0.6421933085501859;
                result[1] += 0.35780669144981414;
              } else {
                result[0] += 0.18584070796460178;
                result[1] += 0.8141592920353983;
              }
            }
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3578929752111434937) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7713658511638641357) ) ) {
              if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4519360363483428955) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.291439443826675415) ) ) {
                result[0] += 0.9791883454734651;
                result[1] += 0.02081165452653486;
              } else {
                result[0] += 0.9983662800196046;
                result[1] += 0.0016337199803953602;
              }
            }
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1384864374995231628) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7806620895862579346) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7768823504447937012) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9990548842233173;
                result[1] += 0.0009451157766826436;
              }
            }
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3600607514381408691) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3110286146402359009) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.9534883720930233;
                result[1] += 0.046511627906976744;
              }
            } else {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2836409211158752441) ) ) {
                result[0] += 0.25;
                result[1] += 0.75;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4052798748016357422) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7621722519397735596) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9957805907172996;
                result[1] += 0.004219409282700422;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                result[0] += 0.6923076923076923;
                result[1] += 0.3076923076923077;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3460290580987930298) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1493559554219245911) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
          if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.1380960345268249512) ) ) {
                result[0] += 0.9888908638464273;
                result[1] += 0.011109136153572698;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
            if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3065050989389419556) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.986449864498645;
                result[1] += 0.013550135501355014;
              }
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.410533517599105835) ) ) {
                result[0] += 0.984070796460177;
                result[1] += 0.01592920353982301;
              } else {
                result[0] += 0.9411764705882353;
                result[1] += 0.058823529411764705;
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.7468436387180317;
                result[1] += 0.2531563612819683;
              }
            }
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2526977509260177612) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8173351287841796875) ) ) {
              if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8850656449794769287) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.8770491803278688;
                result[1] += 0.12295081967213115;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2379067316651344299) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9333333333333333;
                result[1] += 0.06666666666666667;
              }
            }
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1288257911801338196) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)3.175809979438781738e-06) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)3.175809979438781738e-06) ) ) {
                result[0] += 0.999851391206932;
                result[1] += 0.00014860879306797137;
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
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.153880678117275238) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
      if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001755689794663339853) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1395496055483818054) ) ) {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.7989130434782609;
                result[1] += 0.20108695652173914;
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9900061055946527;
                result[1] += 0.009993894405347216;
              }
            }
          } else {
            if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.6744537055492401123) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1346227526664733887) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9981934224754068;
                result[1] += 0.0018065775245931905;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7517754733562469482) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                result[0] += 0.9724655819774718;
                result[1] += 0.02753441802252816;
              } else {
                result[0] += 0.7111716621253406;
                result[1] += 0.2888283378746594;
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3586165159940719604) ) ) {
                result[0] += 0.5399768250289687;
                result[1] += 0.4600231749710313;
              } else {
                result[0] += 0.922422954303932;
                result[1] += 0.077577045696068;
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3787812590599060059) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.8928571428571429;
                result[1] += 0.10714285714285714;
              }
            } else {
              if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7475236356258392334) ) ) {
                result[0] += 0.5683760683760684;
                result[1] += 0.43162393162393164;
              } else {
                result[0] += 0.025596493404457677;
                result[1] += 0.9744035065955423;
              }
            }
          }
        } else {
          if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04389595240354537964) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2881486564874649048) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3521188795566558838) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3600607514381408691) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7805594503879547119) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0.6666666666666666;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7804957926273345947) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1979539841413497925) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2368498146533966064) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[74].missing != -1) || (data[74].fvalue <= (float)6.342725828289985657e-05) ) ) {
                result[0] += 0.9922425952045134;
                result[1] += 0.007757404795486601;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2836239337921142578) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2976780682802200317) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9933554817275747;
                result[1] += 0.006644518272425249;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2542048841714859009) ) ) {
                result[0] += 0.9954954954954955;
                result[1] += 0.0045045045045045045;
              } else {
                result[0] += 0.3767857142857143;
                result[1] += 0.6232142857142857;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                result[0] += 0.9932432432432432;
                result[1] += 0.006756756756756757;
              } else {
                result[0] += 0.9069767441860465;
                result[1] += 0.09302325581395349;
              }
            }
          }
        } else {
          if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2924157828092575073) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3586165159940719604) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.5665961945031712;
                result[1] += 0.4334038054968288;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                result[0] += 0.664488017429194;
                result[1] += 0.3355119825708061;
              } else {
                result[0] += 0.024719969100038625;
                result[1] += 0.9752800308999614;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7597486972808837891) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
            if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3166143298149108887) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[44].missing != -1) || (data[44].fvalue <= (float)3.175809979438781738e-06) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9986430949911489;
                result[1] += 0.0013569050088510757;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2881519943475723267) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001759482314810156822) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1531271114945411682) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.287395089864730835) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3532431274652481079) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.216489940881729126) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9956541840036985;
                result[1] += 0.004345815996301433;
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3557280451059341431) ) ) {
                result[0] += 0.9535746680959841;
                result[1] += 0.046425331904015835;
              } else {
                result[0] += 0.9971103941646795;
                result[1] += 0.002889605835320522;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1546342372894287109) ) ) {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4517663121223449707) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2836239337921142578) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7655960023403167725) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3132751137018203735) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511906176805496216) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.6835164835164835;
                result[1] += 0.31648351648351647;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511906176805496216) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9574010327022375;
                result[1] += 0.042598967297762476;
              }
            }
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3772213906049728394) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3085954785346984863) ) ) {
                result[0] += 0.8;
                result[1] += 0.2;
              } else {
                result[0] += 0.6141732283464567;
                result[1] += 0.3858267716535433;
              }
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
                result[0] += 0.4819277108433735;
                result[1] += 0.5180722891566265;
              } else {
                result[0] += 0.14272474513438368;
                result[1] += 0.8572752548656163;
              }
            }
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8173351287841796875) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
                result[0] += 0.8088235294117647;
                result[1] += 0.19117647058823528;
              } else {
                result[0] += 0.28450704225352114;
                result[1] += 0.7154929577464789;
              }
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1346227526664733887) ) ) {
                result[0] += 0.16550764951321278;
                result[1] += 0.8344923504867872;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        }
      } else {
        if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2368498146533966064) ) ) {
              if ( ( !(data[44].missing != -1) || (data[44].fvalue <= (float)1.92727893590927124e-05) ) ) {
                result[0] += 0.9997269949185829;
                result[1] += 0.00027300508141716055;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)6.351619958877563477e-06) ) ) {
                result[0] += 0.9947415147169296;
                result[1] += 0.005258485283070409;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
            if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8868957757949829102) ) ) {
              if ( ( !(data[69].missing != -1) || (data[69].fvalue <= (float)0.8189072906970977783) ) ) {
                result[0] += 0.6325088339222615;
                result[1] += 0.3674911660777385;
              } else {
                result[0] += 0.7552301255230126;
                result[1] += 0.24476987447698745;
              }
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.327312275767326355) ) ) {
                result[0] += 0.8938115330520394;
                result[1] += 0.10618846694796062;
              } else {
                result[0] += 0.9908039157520023;
                result[1] += 0.009196084247997626;
              }
            }
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                result[0] += 0.2;
                result[1] += 0.8;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                result[0] += 0.8871391076115486;
                result[1] += 0.11286089238845144;
              } else {
                result[0] += 0.43391066545123064;
                result[1] += 0.5660893345487694;
              }
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2617471963167190552) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
              if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9965838491916656494) ) ) {
                result[0] += 0.9991253280019993;
                result[1] += 0.0008746719980007497;
              } else {
                result[0] += 0.8461538461538461;
                result[1] += 0.15384615384615385;
              }
            } else {
              if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7156386375427246094) ) ) {
                result[0] += 0.9882352941176471;
                result[1] += 0.011764705882352941;
              } else {
                result[0] += 0.9999402878127426;
                result[1] += 5.971218725741924e-05;
              }
            }
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3600607514381408691) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8118190765380859375) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
                result[0] += 0.8548387096774194;
                result[1] += 0.14516129032258066;
              } else {
                result[0] += 0.21708805579773321;
                result[1] += 0.7829119442022667;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
              if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001787317683920264244) ) ) {
                result[0] += 0.9354838709677419;
                result[1] += 0.06451612903225806;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2376131191849708557) ) ) {
                result[0] += 0.17857142857142858;
                result[1] += 0.8214285714285714;
              } else {
                result[0] += 0.001388482899736919;
                result[1] += 0.9986115171002631;
              }
            }
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3850207775831222534) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
                result[0] += 0.5833333333333334;
                result[1] += 0.4166666666666667;
              } else {
                result[0] += 0.028169014084507043;
                result[1] += 0.971830985915493;
              }
            } else {
              if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.7201941609382629395) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9993099028934785;
                result[1] += 0.0006900971065214176;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)3.175809979438781738e-06) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.310935288667678833) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7188445925712585449) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3160101324319839478) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7665624916553497314) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2768351733684539795) ) ) {
                result[0] += 0.9996014348345954;
                result[1] += 0.00039856516540454366;
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
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3819010108709335327) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
          if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3850509226322174072) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.6906191110610961914) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9991377213734551;
                result[1] += 0.0008622786265449158;
              }
            }
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1486023962497711182) ) ) {
            if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
                result[0] += 0.994824016563147;
                result[1] += 0.005175983436853002;
              } else {
                result[0] += 0.5610619469026549;
                result[1] += 0.4389380530973451;
              }
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.8050951503990178;
                result[1] += 0.1949048496009822;
              }
            }
          } else {
            if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7889121174812316895) ) ) {
              if ( ( !(data[66].missing != -1) || (data[66].fvalue <= (float)3.600493073463439941e-06) ) ) {
                result[0] += 0.9962508118320836;
                result[1] += 0.003749188167916396;
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
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3117152303457260132) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1410631909966468811) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.8566308243727598;
                result[1] += 0.14336917562724014;
              }
            }
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7202161252498626709) ) ) {
                result[0] += 0.1111111111111111;
                result[1] += 0.8888888888888888;
              } else {
                result[0] += 0.8888888888888888;
                result[1] += 0.1111111111111111;
              }
            }
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3586165159940719604) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8074765801429748535) ) ) {
                result[0] += 0.01282051282051282;
                result[1] += 0.9871794871794872;
              } else {
                result[0] += 0.001243008079552517;
                result[1] += 0.9987569919204475;
              }
            }
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1335144117474555969) ) ) {
                result[0] += 0.9375;
                result[1] += 0.0625;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3586165159940719604) ) ) {
          if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4158186167478561401) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2542048841714859009) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                result[0] += 0.15;
                result[1] += 0.85;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001736712059937417507) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7713658511638641357) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
                result[0] += 0.2727272727272727;
                result[1] += 0.7272727272727273;
              } else {
                result[0] += 0.9649122807017544;
                result[1] += 0.03508771929824561;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001774667529389262199) ) ) {
      if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7464606761932373047) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1380424797534942627) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7520589530467987061) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3741033822298049927) ) ) {
              if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.6864930689334869385) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.999964316300314;
                result[1] += 3.5683699685983445e-05;
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
                result[0] += 0.36683417085427134;
                result[1] += 0.6331658291457286;
              } else {
                result[0] += 0.999068065133775;
                result[1] += 0.000931934866224986;
              }
            }
          } else {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04680387675762176514) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9390243902439024;
                result[1] += 0.06097560975609756;
              }
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2692928612232208252) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                result[0] += 0.96685303514377;
                result[1] += 0.03314696485623003;
              } else {
                result[0] += 0.6992263056092843;
                result[1] += 0.30077369439071566;
              }
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
                result[0] += 0.4955357142857143;
                result[1] += 0.5044642857142857;
              } else {
                result[0] += 0.14396984924623116;
                result[1] += 0.8560301507537689;
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2526977509260177612) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2376131191849708557) ) ) {
                result[0] += 0.9176470588235294;
                result[1] += 0.08235294117647059;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3485068678855895996) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9994782495271637;
                result[1] += 0.0005217504728363661;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04389595240354537964) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1539440527558326721) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2655183523893356323) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2723104655742645264) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3292691260576248169) ) ) {
              if ( ( !(data[74].missing != -1) || (data[74].fvalue <= (float)6.342725828289985657e-05) ) ) {
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
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
        if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7655960023403167725) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7666589617729187012) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7584947049617767334) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9889905852028222;
                result[1] += 0.011009414797177746;
              }
            }
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3683198690414428711) ) ) {
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
          if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2924157828092575073) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3132751137018203735) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                result[0] += 0.9854262812727714;
                result[1] += 0.014573718727228565;
              } else {
                result[0] += 0.674432320849307;
                result[1] += 0.325567679150693;
              }
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
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.3002223819494247437) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001820213044993579388) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1493559554219245911) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001772137475199997425) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
              if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7138063609600067139) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9988118576605477;
                result[1] += 0.0011881423394522663;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.287395089864730835) ) ) {
                result[0] += 0.00041220115416323167;
                result[1] += 0.9995877988458368;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3532431274652481079) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
                result[0] += 0.877023498694517;
                result[1] += 0.12297650130548303;
              } else {
                result[0] += 0.9981755355908777;
                result[1] += 0.001824464409122322;
              }
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
                result[0] += 0.9886757159829125;
                result[1] += 0.011324284017087535;
              } else {
                result[0] += 0.7894514767932489;
                result[1] += 0.21054852320675105;
              }
            }
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2526977509260177612) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                result[0] += 0.4084507042253521;
                result[1] += 0.5915492957746479;
              } else {
                result[0] += 0.8241525423728814;
                result[1] += 0.17584745762711865;
              }
            }
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1352662220597267151) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3521160334348678589) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9993701508774944;
                result[1] += 0.0006298491225056543;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2617471963167190552) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
          if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05921705067157745361) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.612932195779075;
                result[1] += 0.387067804220925;
              }
            }
          }
        } else {
          if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2232787013053894043) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8232134878635406494) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.989492119089317;
                result[1] += 0.010507880910683012;
              }
            }
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.13797808438539505) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511906176805496216) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9453252032520325;
                result[1] += 0.05467479674796748;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.351395338773727417) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.7537131011486053467) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7687848806381225586) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.8690176322418136;
                result[1] += 0.1309823677581864;
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9997760358342666;
                result[1] += 0.00022396416573348266;
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)3.175809979438781738e-06) ) ) {
                result[0] += 0.9993088101419468;
                result[1] += 0.0006911898580532048;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.02741967001929879189) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3460290580987930298) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2436483129858970642) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                result[0] += 0.9423728813559322;
                result[1] += 0.0576271186440678;
              } else {
                result[0] += 0.4392523364485981;
                result[1] += 0.5607476635514018;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1335144117474555969) ) ) {
                result[0] += 0.9720496894409938;
                result[1] += 0.027950310559006212;
              } else {
                result[0] += 0.9926470588235294;
                result[1] += 0.007352941176470588;
              }
            }
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                result[0] += 0.9013157894736842;
                result[1] += 0.09868421052631579;
              } else {
                result[0] += 0.4656616415410385;
                result[1] += 0.5343383584589615;
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.41743119266055045;
                result[1] += 0.5825688073394495;
              }
            }
          } else {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1964461356401443481) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
                result[0] += 0.8767123287671232;
                result[1] += 0.1232876712328767;
              } else {
                result[0] += 0.2167577413479053;
                result[1] += 0.7832422586520947;
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
                result[0] += 0.12228870605833957;
                result[1] += 0.8777112939416605;
              } else {
                result[0] += 0.9296875;
                result[1] += 0.0703125;
              }
            }
          }
        }
      } else {
        if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.7778016328811645508) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
              if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7597486972808837891) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9997045286664015;
                result[1] += 0.0002954713335984999;
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.99588570281729;
                result[1] += 0.004114297182709917;
              }
            }
          }
        }
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
      if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7677219212055206299) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3017295151948928833) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05758499214425683022) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3721477985382080078) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001820213044993579388) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2843774855136871338) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7597486972808837891) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9989210937412198;
                result[1] += 0.0010789062587801617;
              }
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                result[0] += 0.9526213592233009;
                result[1] += 0.04737864077669903;
              } else {
                result[0] += 0.6672473867595818;
                result[1] += 0.3327526132404181;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
                result[0] += 0.47627118644067795;
                result[1] += 0.523728813559322;
              } else {
                result[0] += 0.030883261272390366;
                result[1] += 0.9691167387276096;
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8251364231109619141) ) ) {
                result[0] += 0.9969760583795672;
                result[1] += 0.0030239416204328484;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4261494725942611694) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3241925090551376343) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8173351287841796875) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
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
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8154961466789245605) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2929984480142593384) ) ) {
            if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4261494725942611694) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3166143298149108887) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7464606761932373047) ) ) {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2370446100831031799) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.24515543133020401) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
              if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4521647095680236816) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.990571596935769;
                result[1] += 0.009428403064230996;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1335144117474555969) ) ) {
                result[0] += 0.8275862068965517;
                result[1] += 0.1724137931034483;
              } else {
                result[0] += 0.9673024523160763;
                result[1] += 0.0326975476839237;
              }
            }
          }
        } else {
          if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8868957757949829102) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2507216855883598328) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8173351287841796875) ) ) {
                result[0] += 0.18635607321131448;
                result[1] += 0.8136439267886856;
              } else {
                result[0] += 0.01361573373676248;
                result[1] += 0.9863842662632375;
              }
            } else {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2945583313703536987) ) ) {
                result[0] += 0.06369426751592357;
                result[1] += 0.9363057324840764;
              } else {
                result[0] += 0.8870967741935484;
                result[1] += 0.11290322580645161;
              }
            }
          } else {
            if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7183859944343566895) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.6923076923076923;
                result[1] += 0.3076923076923077;
              }
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2356449663639068604) ) ) {
                result[0] += 0.3211752786220871;
                result[1] += 0.6788247213779128;
              } else {
                result[0] += 0.15699658703071673;
                result[1] += 0.8430034129692833;
              }
            }
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2542048841714859009) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
              if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7432717978954315186) ) ) {
                result[0] += 0.9743589743589743;
                result[1] += 0.02564102564102564;
              } else {
                result[0] += 0.5109489051094891;
                result[1] += 0.48905109489051096;
              }
            } else {
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4158186167478561401) ) ) {
                result[0] += 0.33962264150943394;
                result[1] += 0.660377358490566;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3864005208015441895) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2647681385278701782) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9990738415170162;
                result[1] += 0.0009261584829838;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7805594503879547119) ) ) {
      if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7475236356258392334) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3472117632627487183) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.765849769115447998) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1486023887991905212) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06224480783566832542) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06588178733363747597) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2836239337921142578) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2836239337921142578) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2039853483438491821) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1410567238926887512) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2898804396390914917) ) ) {
              if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7202161252498626709) ) ) {
                result[0] += 0.7602627257799671;
                result[1] += 0.23973727422003285;
              } else {
                result[0] += 0.6518703241895262;
                result[1] += 0.3481296758104738;
              }
            } else {
              if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
                result[0] += 0.8063864187550526;
                result[1] += 0.19361358124494746;
              } else {
                result[0] += 0.4521163395601797;
                result[1] += 0.5478836604398203;
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2617471963167190552) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1301127299666404724) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9996313520871143;
                result[1] += 0.00036864791288566246;
              }
            }
          }
        } else {
          if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1070554032921791077) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2466625571250915527) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8173351287841796875) ) ) {
                result[0] += 0.6686746987951807;
                result[1] += 0.3313253012048193;
              } else {
                result[0] += 0.015151515151515152;
                result[1] += 0.9848484848484849;
              }
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)3.175809979438781738e-06) ) ) {
                result[0] += 0.9996976633697577;
                result[1] += 0.0003023366302423012;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7138063609600067139) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4284365326166152954) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001820213044993579388) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
              if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7174687683582305908) ) ) {
                result[0] += 0.903214535290007;
                result[1] += 0.09678546470999301;
              } else {
                result[0] += 0.9853542234332425;
                result[1] += 0.014645776566757493;
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                result[0] += 0.8120237087214225;
                result[1] += 0.18797629127857748;
              } else {
                result[0] += 0.29218677762367085;
                result[1] += 0.7078132223763292;
              }
            }
          } else {
            if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7119740843772888184) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1395496055483818054) ) ) {
                result[0] += 0.9966526647414019;
                result[1] += 0.0033473352585980574;
              } else {
                result[0] += 0.9655636265805757;
                result[1] += 0.034436373419424265;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2738175839185714722) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7695273160934448242) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3275640159845352173) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3095207810401916504) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.9381443298969072;
                result[1] += 0.061855670103092786;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2321710512042045593) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8251364231109619141) ) ) {
                result[0] += 0.999900825626658;
                result[1] += 9.917437334192844e-05;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3232284635305404663) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3241925090551376343) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.127535991370677948) ) ) {
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
    }
  }
  if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001822743099182844162) ) ) {
    if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.993042677640914917) ) ) {
      if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7584947049617767334) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3919859081506729126) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.2914283722639083862) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8145768940448760986) ) ) {
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
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1423501297831535339) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2496801465749740601) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8887280821800231934) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.00796812749003984;
                result[1] += 0.9920318725099602;
              }
            }
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3319918960332870483) ) ) {
                result[0] += 0.8713168971737824;
                result[1] += 0.12868310282621767;
              } else {
                result[0] += 0.9952408147725109;
                result[1] += 0.004759185227489054;
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                result[0] += 0.9885386819484241;
                result[1] += 0.011461318051575931;
              } else {
                result[0] += 0.29079396005845104;
                result[1] += 0.709206039941549;
              }
            }
          }
        } else {
          if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)6.353482604026794434e-06) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3787812590599060059) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.351395338773727417) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9915396020076442;
                result[1] += 0.008460397992355718;
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3485068678855895996) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9950713601644438;
                result[1] += 0.004928639835556282;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1436370685696601868) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2647681385278701782) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2625041007995605469) ) ) {
                result[0] += 0.34615384615384615;
                result[1] += 0.6538461538461539;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.739454094292804;
                result[1] += 0.26054590570719605;
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3427299261093139648) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2209661528468132019) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2708033323287963867) ) ) {
                result[0] += 0.6293103448275862;
                result[1] += 0.3706896551724138;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2961181998252868652) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
                result[0] += 0.021153846153846155;
                result[1] += 0.9788461538461538;
              } else {
                result[0] += 0.8995454545454545;
                result[1] += 0.10045454545454545;
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.967391304347826;
                result[1] += 0.03260869565217391;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7411437630653381348) ) ) {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8154961466789245605) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7406133711338043213) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4284365326166152954) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3819010108709335327) ) ) {
        if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05921705067157745361) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.813657611608505249) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9884835644312056;
                result[1] += 0.011516435568794446;
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                result[0] += 0.8846938775510204;
                result[1] += 0.11530612244897959;
              } else {
                result[0] += 0.24936708860759493;
                result[1] += 0.7506329113924051;
              }
            }
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
          if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001769607421010732651) ) ) {
            if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4158186167478561401) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.030303030303030304;
                result[1] += 0.9696969696969697;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
              if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001773399999365210533) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3586165159940719604) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.25;
                result[1] += 0.75;
              }
            }
          }
        } else {
          if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7805594503879547119) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2489265948534011841) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                result[0] += 0.8333333333333334;
                result[1] += 0.16666666666666666;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.351395338773727417) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2851310521364212036) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04041793011128902435) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2979583591222763062) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)3.175809979438781738e-06) ) ) {
                result[0] += 0.9986769986769987;
                result[1] += 0.001323001323001323;
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
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7138063609600067139) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
        if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.03015198977664113045) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3577649742364883423) ) ) {
          if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4500495195388793945) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7640108168125152588) ) ) {
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
    if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001820213044993579388) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
            if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7898192107677459717) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
                result[0] += 0.005555555555555556;
                result[1] += 0.9944444444444445;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                result[0] += 0.771889400921659;
                result[1] += 0.22811059907834103;
              } else {
                result[0] += 0.15637860082304528;
                result[1] += 0.8436213991769548;
              }
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3713338524103164673) ) ) {
                result[0] += 0.9263296993723158;
                result[1] += 0.07367030062768418;
              } else {
                result[0] += 0.7965898893209692;
                result[1] += 0.2034101106790308;
              }
            }
          }
        } else {
          if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2961181998252868652) ) ) {
                result[0] += 0.9512635379061372;
                result[1] += 0.048736462093862815;
              } else {
                result[0] += 0.6944444444444444;
                result[1] += 0.3055555555555556;
              }
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3622884899377822876) ) ) {
                result[0] += 0.14634146341463414;
                result[1] += 0.8536585365853658;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4135483652353286743) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8173351287841796875) ) ) {
                result[0] += 0.4540229885057471;
                result[1] += 0.5459770114942529;
              } else {
                result[0] += 0.16126809097174363;
                result[1] += 0.8387319090282563;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                result[0] += 0.9655172413793104;
                result[1] += 0.034482758620689655;
              } else {
                result[0] += 0.05442176870748299;
                result[1] += 0.9455782312925171;
              }
            }
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)7.83614814281463623e-06) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2421378418803215027) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                result[0] += 0.925531914893617;
                result[1] += 0.07446808510638298;
              } else {
                result[0] += 0.13095238095238096;
                result[1] += 0.8690476190476191;
              }
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.999491782514191;
                result[1] += 0.0005082174858090041;
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7128912806510925293) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8118190765380859375) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
        if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05758499214425683022) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3721477985382080078) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1508630812168121338) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
          if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3567475676536560059) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.7256083786487579346) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
              if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7165536880493164062) ) ) {
                result[0] += 0.4726810673443456;
                result[1] += 0.5273189326556544;
              } else {
                result[0] += 0.8301724137931035;
                result[1] += 0.16982758620689656;
              }
            } else {
              if ( ( !(data[44].missing != -1) || (data[44].fvalue <= (float)6.353482604026794434e-06) ) ) {
                result[0] += 0.9995952420287461;
                result[1] += 0.0004047579712539237;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
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
    

    FILE* file = fopen("./codegen/esa_3_months_global/split_0/test_data.csv", "r");
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
