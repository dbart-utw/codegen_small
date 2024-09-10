
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
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001774667529389262199) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7695273160934448242) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7134765684604644775) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
          if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1042889803647994995) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4517073631286621094) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.409673541784286499) ) ) {
                  if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.6856892406940460205) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3919859081506729126) ) ) {
                      result[0] += 0.9997226074895977;
                      result[1] += 0.00027739251040221914;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2326309755444526672) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1335144117474555969) ) ) {
                      result[0] += 0.8160511363636364;
                      result[1] += 0.18394886363636365;
                    } else {
                      result[0] += 0.9730146491904395;
                      result[1] += 0.026985350809560524;
                    }
                  } else {
                    if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7909130454063415527) ) ) {
                      result[0] += 0.9956709956709957;
                      result[1] += 0.004329004329004329;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7852395772933959961) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2345921769738197327) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2118952572345733643) ) ) {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.2959518879652023315) ) ) {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
                      result[0] += 0.9411764705882353;
                      result[1] += 0.058823529411764705;
                    } else {
                      result[0] += 0.36363636363636365;
                      result[1] += 0.6363636363636364;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.029045643153526972;
                      result[1] += 0.970954356846473;
                    }
                  }
                } else {
                  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3180760592222213745) ) ) {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.375662386417388916) ) ) {
                      result[0] += 0.3333333333333333;
                      result[1] += 0.6666666666666666;
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
          } else {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7713658511638641357) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7147214412689208984) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3117152303457260132) ) ) {
                      result[0] += 0.8513011152416357;
                      result[1] += 0.14869888475836432;
                    } else {
                      result[0] += 0.9832635983263598;
                      result[1] += 0.016736401673640166;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2851310521364212036) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1346227526664733887) ) ) {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2306120544672012329) ) ) {
                      result[0] += 0.693050193050193;
                      result[1] += 0.30694980694980695;
                    } else {
                      result[0] += 0.4172043010752688;
                      result[1] += 0.5827956989247312;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.17670682730923695;
                      result[1] += 0.8232931726907631;
                    }
                  }
                } else {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3615049868822097778) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9792698323726654053) ) ) {
                      result[0] += 0.9917355371900827;
                      result[1] += 0.008264462809917356;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2376131191849708557) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.335110783576965332) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7741240859031677246) ) ) {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3449499905109405518) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001787317683920264244) ) ) {
                      result[0] += 0.03237410071942446;
                      result[1] += 0.9676258992805755;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3564515858888626099) ) ) {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1964461356401443481) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.21052631578947367;
                      result[1] += 0.7894736842105263;
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
      }
    }
  } else {
    if ( ( !(data[75].missing != -1) || (data[75].fvalue <= (float)6.42756931483745575e-05) ) ) {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3217779546976089478) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.329008251428604126) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1288257911801338196) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.287395089864730835) ) ) {
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
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1531271114945411682) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.752838432788848877) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
        if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2376131191849708557) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2345921769738197327) ) ) {
                if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4521647095680236816) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.1410066932439804077) ) ) {
                    if ( ( !(data[69].missing != -1) || (data[69].fvalue <= (float)0.8321191966533660889) ) ) {
                      result[0] += 0.993676603432701;
                      result[1] += 0.006323396567299007;
                    } else {
                      result[0] += 0.9324324324324325;
                      result[1] += 0.06756756756756757;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              } else {
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3319918960332870483) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2542048841714859009) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3532431274652481079) ) ) {
                      result[0] += 0.8461538461538461;
                      result[1] += 0.15384615384615385;
                    } else {
                      result[0] += 0.1702127659574468;
                      result[1] += 0.8297872340425532;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3080129474401473999) ) ) {
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3319918960332870483) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2542048841714859009) ) ) {
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
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2836409211158752441) ) ) {
                  if ( ( !(data[69].missing != -1) || (data[69].fvalue <= (float)0.8296107351779937744) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.982914656400680542) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1335144117474555969) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2549617886543273926) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.05555555555555555;
                      result[1] += 0.9444444444444444;
                    }
                  } else {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8887280821800231934) ) ) {
                      result[0] += 0.05263157894736842;
                      result[1] += 0.9473684210526315;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8887280821800231934) ) ) {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9805194805194806;
                      result[1] += 0.01948051948051948;
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
                    if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7877640128135681152) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.8583690987124464;
                      result[1] += 0.14163090128755365;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7202161252498626709) ) ) {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
                    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05921705067157745361) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.8663883089770354;
                      result[1] += 0.1336116910229645;
                    }
                  } else {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4075186997652053833) ) ) {
                      result[0] += 0.8179190751445087;
                      result[1] += 0.18208092485549132;
                    } else {
                      result[0] += 0.6900958466453674;
                      result[1] += 0.30990415335463256;
                    }
                  }
                }
              } else {
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2431841790676116943) ) ) {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                      result[0] += 0.9726027397260274;
                      result[1] += 0.0273972602739726;
                    } else {
                      result[0] += 0.20833333333333334;
                      result[1] += 0.7916666666666666;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1380424797534942627) ) ) {
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
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7165536880493164062) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2345921769738197327) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1350248828530311584) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[51].missing != -1) || (data[51].fvalue <= (float)0.5501618087291717529) ) ) {
                      result[0] += 0.125;
                      result[1] += 0.875;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                }
              } else {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[70].missing != -1) || (data[70].fvalue <= (float)0.9318918883800506592) ) ) {
                      result[0] += 0.32558139534883723;
                      result[1] += 0.6744186046511628;
                    } else {
                      result[0] += 0.707808564231738;
                      result[1] += 0.29219143576826195;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.6964452564716339111) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[74].missing != -1) || (data[74].fvalue <= (float)6.342725828289985657e-05) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
                if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3850509226322174072) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4519360363483428955) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2625041007995605469) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1539440527558326721) ) ) {
                  if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4517073631286621094) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7698478400707244873) ) ) {
                      result[0] += 0.9869102552029382;
                      result[1] += 0.01308974479706187;
                    } else {
                      result[0] += 0.9993268033255915;
                      result[1] += 0.0006731966744084284;
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
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2866448760032653809) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3234125673770904541) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1531271114945411682) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3080129474401473999) ) ) {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.2974597364664077759) ) ) {
                      result[0] += 0.9714413208389112;
                      result[1] += 0.0285586791610888;
                    } else {
                      result[0] += 0.9044619422572179;
                      result[1] += 0.09553805774278215;
                    }
                  }
                } else {
                  if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001827803091146051884) ) ) {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2243725359439849854) ) ) {
                      result[0] += 0.9337748344370861;
                      result[1] += 0.06622516556291391;
                    } else {
                      result[0] += 0.5265553869499241;
                      result[1] += 0.47344461305007585;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 0.8736176935229067;
                      result[1] += 0.1263823064770932;
                    } else {
                      result[0] += 0.6243478260869565;
                      result[1] += 0.37565217391304345;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3864005208015441895) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2526977509260177612) ) ) {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1979539841413497925) ) ) {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.410533517599105835) ) ) {
                      result[0] += 0.9886685552407932;
                      result[1] += 0.0113314447592068;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2446911707520484924) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.6856892406940460205) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9994244273051687;
                      result[1] += 0.0005755726948313572;
                    }
                  }
                }
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
      if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7517754733562469482) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2813598960638046265) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
            if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2542048841714859009) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2851344048976898193) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2383666783571243286) ) ) {
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
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
                if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.813657611608505249) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              } else {
                if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4318849146366119385) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                    if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001825273095164448023) ) ) {
                      result[0] += 0.3333333333333333;
                      result[1] += 0.6666666666666666;
                    } else {
                      result[0] += 0.9644670050761421;
                      result[1] += 0.03553299492385787;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
                      result[0] += 0.5625;
                      result[1] += 0.4375;
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
          } else {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3358898460865020752) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511906176805496216) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.1380960345268249512) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
                      result[0] += 0.5625;
                      result[1] += 0.4375;
                    } else {
                      result[0] += 0.9055374592833876;
                      result[1] += 0.09446254071661238;
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
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2738175839185714722) ) ) {
          if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05921705067157745361) ) ) {
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
          if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7464606761932373047) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7852395772933959961) ) ) {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3217842280864715576) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2929984480142593384) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.03433076944202184677) ) ) {
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
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8243512511253356934) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2979583591222763062) ) ) {
                if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7560272812843322754) ) ) {
                  if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.812953561544418335) ) ) {
                    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04389595240354537964) ) ) {
                      result[0] += 0.9997614048482535;
                      result[1] += 0.0002385951517465165;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[74].missing != -1) || (data[74].fvalue <= (float)6.34482712484896183e-05) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7740996479988098145) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4316769391298294067) ) ) {
                      result[0] += 0;
                      result[1] += 1;
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
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1384864374995231628) ) ) {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4008787870407104492) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001788580149877816439) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05921705067157745361) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3550045043230056763) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1486023962497711182) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)6.353482604026794434e-06) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3101553469896316528) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.993042677640914917) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7775399684906005859) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[68].missing != -1) || (data[68].fvalue <= (float)0.8077465295791625977) ) ) {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3630424290895462036) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7771066725254058838) ) ) {
                    if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7202161252498626709) ) ) {
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
              }
            }
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.7592073678970336914) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
              if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7400808334350585938) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3557280451059341431) ) ) {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3803411275148391724) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2278067693114280701) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.977431906614786;
                      result[1] += 0.022568093385214007;
                    }
                  } else {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7805594503879547119) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.7979393245563824;
                      result[1] += 0.20206067544361764;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2443985268473625183) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06770694628357887268) ) ) {
                      result[0] += 0.9576547231270358;
                      result[1] += 0.04234527687296417;
                    } else {
                      result[0] += 0.9997787556232945;
                      result[1] += 0.0002212443767054254;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7156386375427246094) ) ) {
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3539970517158508301) ) ) {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1357784420251846313) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.9063781797885894775) ) ) {
                      result[0] += 0.8;
                      result[1] += 0.2;
                    } else {
                      result[0] += 0.9818181818181818;
                      result[1] += 0.01818181818181818;
                    }
                  }
                } else {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3586165159940719604) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.08812260536398467;
                      result[1] += 0.9118773946360154;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.4117647058823529;
                      result[1] += 0.5882352941176471;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2852007895708084106) ) ) {
                      result[0] += 0.6923076923076923;
                      result[1] += 0.3076923076923077;
                    } else {
                      result[0] += 0.9298245614035088;
                      result[1] += 0.07017543859649122;
                    }
                  } else {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7796406149864196777) ) ) {
                      result[0] += 0.9932489451476794;
                      result[1] += 0.006751054852320675;
                    } else {
                      result[0] += 0.8372093023255814;
                      result[1] += 0.16279069767441862;
                    }
                  }
                } else {
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.3283582089552239;
                      result[1] += 0.6716417910447762;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2836409211158752441) ) ) {
                      result[0] += 0.9090909090909091;
                      result[1] += 0.09090909090909091;
                    } else {
                      result[0] += 0.3552479815455594;
                      result[1] += 0.6447520184544406;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3268404752016067505) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8247438371181488037) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1478488370776176453) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2296152859926223755) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.299465477466583252) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3557280451059341431) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3547509759664535522) ) ) {
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
          }
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4483384788036346436) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9769923985004425049) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3171739280223846436) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.7267226874828338623) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[68].missing != -1) || (data[68].fvalue <= (float)0.8079728782176971436) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2398771494626998901) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8249094188213348389) ) ) {
                    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.09636001661419868469) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.990909090909091;
                      result[1] += 0.00909090909090909;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2519408464431762695) ) ) {
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
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
              if ( ( !(data[70].missing != -1) || (data[70].fvalue <= (float)0.9328019320964813232) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
                  if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8249094188213348389) ) ) {
                    if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7892937660217285156) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.75;
                      result[1] += 0.25;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                } else {
                  if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7733173072338104248) ) ) {
                    if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7895224392414093018) ) ) {
                      result[0] += 0.9166666666666666;
                      result[1] += 0.08333333333333333;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3787812590599060059) ) ) {
                      result[0] += 0.5;
                      result[1] += 0.5;
                    } else {
                      result[0] += 0.1111111111111111;
                      result[1] += 0.8888888888888888;
                    }
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.228560328483581543) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.1427365243434906006) ) ) {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                      result[0] += 0.9466666666666667;
                      result[1] += 0.05333333333333334;
                    } else {
                      result[0] += 0.9949109414758269;
                      result[1] += 0.005089058524173028;
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
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8823183178901672363) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2436483129858970642) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
              if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7165536880493164062) ) ) {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3095207810401916504) ) ) {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7768823504447937012) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.04918032786885246;
                      result[1] += 0.9508196721311475;
                    }
                  } else {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
                      result[0] += 0.25;
                      result[1] += 0.75;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1365531682968139648) ) ) {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3720877766609191895) ) ) {
                      result[0] += 0.7;
                      result[1] += 0.3;
                    } else {
                      result[0] += 0.9435483870967742;
                      result[1] += 0.056451612903225805;
                    }
                  } else {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3637963384389877319) ) ) {
                      result[0] += 0.5714285714285714;
                      result[1] += 0.42857142857142855;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                }
              } else {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3125364631414413452) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
                      result[0] += 0.9416949152542373;
                      result[1] += 0.05830508474576271;
                    } else {
                      result[0] += 0.9911575562700965;
                      result[1] += 0.008842443729903537;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2315779253840446472) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                      result[0] += 0.9872262773722628;
                      result[1] += 0.012773722627737226;
                    } else {
                      result[0] += 0.6933333333333334;
                      result[1] += 0.30666666666666664;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2250917553901672363) ) ) {
                    if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7174687683582305908) ) ) {
                      result[0] += 0.6190476190476191;
                      result[1] += 0.38095238095238093;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2259324193000793457) ) ) {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2945583313703536987) ) ) {
                      result[0] += 0.9850746268656716;
                      result[1] += 0.014925373134328358;
                    } else {
                      result[0] += 0.07142857142857142;
                      result[1] += 0.9285714285714286;
                    }
                  } else {
                    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.037267080745341616;
                      result[1] += 0.9627329192546584;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3132751137018203735) ) ) {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3577658087015151978) ) ) {
                      result[0] += 0.9738805970149254;
                      result[1] += 0.026119402985074626;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2898804396390914917) ) ) {
                      result[0] += 0.8;
                      result[1] += 0.2;
                    } else {
                      result[0] += 0.05084745762711865;
                      result[1] += 0.9491525423728814;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2625041007995605469) ) ) {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3655249178409576416) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.056375838926174496;
                      result[1] += 0.9436241610738255;
                    }
                  } else {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.8888888888888888;
                      result[1] += 0.1111111111111111;
                    }
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
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2496801465749740601) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3257523924112319946) ) ) {
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
                      result[0] += 0.125;
                      result[1] += 0.875;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2534513175487518311) ) ) {
                      result[0] += 0.37209302325581395;
                      result[1] += 0.627906976744186;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
                    if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.8011460304260253906) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.47619047619047616;
                      result[1] += 0.5238095238095238;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3864005208015441895) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)3.175809979438781738e-06) ) ) {
                    if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)6.353482604026794434e-06) ) ) {
                      result[0] += 0.9999591082323307;
                      result[1] += 4.089176766933281e-05;
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
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7676883339881896973) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1380424797534942627) ) ) {
          if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001830333145335316658) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[70].missing != -1) || (data[70].fvalue <= (float)0.9441913962364196777) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.415810123085975647) ) ) {
                result[0] += 0;
                result[1] += 1;
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
        if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7352985739707946777) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3080129474401473999) ) ) {
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7695273160934448242) ) ) {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2507216855883598328) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3578958213329315186) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7687848806381225586) ) ) {
                    if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.6860914826393127441) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9989887640449439;
                      result[1] += 0.0010112359550561798;
                    }
                  } else {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3257523924112319946) ) ) {
                      result[0] += 0.9719887955182073;
                      result[1] += 0.028011204481792718;
                    } else {
                      result[0] += 0.9988179669030733;
                      result[1] += 0.001182033096926714;
                    }
                  }
                }
              } else {
                if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.409673541784286499) ) ) {
                  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1070554032921791077) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                } else {
                  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8887280821800231934) ) ) {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3335509002208709717) ) ) {
                      result[0] += 0.7891963109354414;
                      result[1] += 0.21080368906455862;
                    } else {
                      result[0] += 0.9933628318584071;
                      result[1] += 0.00663716814159292;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1335144117474555969) ) ) {
                      result[0] += 0.8780487804878049;
                      result[1] += 0.12195121951219512;
                    } else {
                      result[0] += 0.9972602739726028;
                      result[1] += 0.0027397260273972603;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7852395772933959961) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7834094464778900146) ) ) {
                      result[0] += 0.9811320754716981;
                      result[1] += 0.018867924528301886;
                    } else {
                      result[0] += 0.8923076923076924;
                      result[1] += 0.1076923076923077;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2376131191849708557) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3163948804140090942) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3444691747426986694) ) ) {
                      result[0] += 0.0258732212160414;
                      result[1] += 0.9741267787839586;
                    } else {
                      result[0] += 0.5769230769230769;
                      result[1] += 0.4230769230769231;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.327312275767326355) ) ) {
                if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001769607421010732651) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9932088285229203;
                      result[1] += 0.006791171477079796;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
                      result[0] += 0.3522727272727273;
                      result[1] += 0.6477272727272727;
                    } else {
                      result[0] += 0.06504065040650407;
                      result[1] += 0.9349593495934959;
                    }
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1371966376900672913) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2738175839185714722) ) ) {
                      result[0] += 0.78125;
                      result[1] += 0.21875;
                    } else {
                      result[0] += 0.9908256880733946;
                      result[1] += 0.009174311926605505;
                    }
                  } else {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
                      result[0] += 0.7142857142857143;
                      result[1] += 0.2857142857142857;
                    } else {
                      result[0] += 0.06060606060606061;
                      result[1] += 0.9393939393939394;
                    }
                  }
                }
              } else {
                if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7174687683582305908) ) ) {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8106166422367095947) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.13636363636363635;
                      result[1] += 0.8636363636363636;
                    }
                  }
                } else {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9394602479941648;
                      result[1] += 0.060539752005835154;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001610195613466203213) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1539440527558326721) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)3.176741302013397217e-06) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3557280451059341431) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2368498146533966064) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2883205562829971313) ) ) {
                if ( ( !(data[74].missing != -1) || (data[74].fvalue <= (float)6.353249773383140564e-05) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2949374020099639893) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3009725958108901978) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7475236356258392334) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.5294117647058824;
                      result[1] += 0.47058823529411764;
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
    }
  }
  if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8154961466789245605) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.7515665888786315918) ) ) {
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2436483129858970642) ) ) {
        if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1335144117474555969) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3773652166128158569) ) ) {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3713338524103164673) ) ) {
                  if ( ( !(data[70].missing != -1) || (data[70].fvalue <= (float)0.9437364041805267334) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[70].missing != -1) || (data[70].fvalue <= (float)0.9441913962364196777) ) ) {
                      result[0] += 0.96875;
                      result[1] += 0.03125;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.41204051673412323) ) ) {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2250917553901672363) ) ) {
                      result[0] += 0.8571428571428571;
                      result[1] += 0.14285714285714285;
                    } else {
                      result[0] += 0.996969696969697;
                      result[1] += 0.0030303030303030303;
                    }
                  } else {
                    if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8164303302764892578) ) ) {
                      result[0] += 0.6703296703296703;
                      result[1] += 0.32967032967032966;
                    } else {
                      result[0] += 0.43010752688172044;
                      result[1] += 0.5698924731182796;
                    }
                  }
                }
              } else {
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.327312275767326355) ) ) {
                  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2361026480793952942) ) ) {
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
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3163948804140090942) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3117152303457260132) ) ) {
                      result[0] += 0.569620253164557;
                      result[1] += 0.43037974683544306;
                    } else {
                      result[0] += 0.3717948717948718;
                      result[1] += 0.6282051282051282;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3788730651140213013) ) ) {
                if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3787812590599060059) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2376131191849708557) ) ) {
                      result[0] += 0.9940476190476191;
                      result[1] += 0.005952380952380952;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7459281384944915771) ) ) {
                      result[0] += 0.8421052631578947;
                      result[1] += 0.15789473684210525;
                    } else {
                      result[0] += 0.4444444444444444;
                      result[1] += 0.5555555555555556;
                    }
                  }
                } else {
                  if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4523910582065582275) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1387960389256477356) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2444018721580505371) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.286760672926902771) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3607806414365768433) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026406288146973) ) ) {
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
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
            if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7156386375427246094) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2386606484651565552) ) ) {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4029951542615890503) ) ) {
                    if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.8027205765247344971) ) ) {
                      result[0] += 0.07692307692307693;
                      result[1] += 0.9230769230769231;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.3673469387755102;
                      result[1] += 0.6326530612244898;
                    }
                  }
                }
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7691298723220825195) ) ) {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3023568391799926758) ) ) {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1410631909966468811) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9375;
                      result[1] += 0.0625;
                    }
                  }
                }
              } else {
                if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7174687683582305908) ) ) {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3819010108709335327) ) ) {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8208199739456176758) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.5;
                      result[1] += 0.5;
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
          } else {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2103353813290596008) ) ) {
                  if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7778345942497253418) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3787812590599060059) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.4;
                      result[1] += 0.6;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.419579729437828064) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2376131191849708557) ) ) {
                      result[0] += 0.013513513513513514;
                      result[1] += 0.9864864864864865;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7202161252498626709) ) ) {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3517352938652038574) ) ) {
                      result[0] += 0.744920993227991;
                      result[1] += 0.255079006772009;
                    } else {
                      result[0] += 0.22675736961451248;
                      result[1] += 0.7732426303854876;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.4304635761589404;
                      result[1] += 0.5695364238410596;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7765369117259979248) ) ) {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.1111111111111111;
                      result[1] += 0.8888888888888888;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.375662386417388916) ) ) {
                    if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
                      result[0] += 0.926829268292683;
                      result[1] += 0.07317073170731707;
                    } else {
                      result[0] += 0.6842105263157895;
                      result[1] += 0.3157894736842105;
                    }
                  } else {
                    if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7174687683582305908) ) ) {
                      result[0] += 0.07647058823529412;
                      result[1] += 0.9235294117647059;
                    } else {
                      result[0] += 0.648;
                      result[1] += 0.352;
                    }
                  }
                } else {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2820810526609420776) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
                      result[0] += 0.6;
                      result[1] += 0.4;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.2914283722639083862) ) ) {
                      result[0] += 0.03636363636363636;
                      result[1] += 0.9636363636363636;
                    } else {
                      result[0] += 0.0023023791250959325;
                      result[1] += 0.9976976208749041;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3864005208015441895) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3499511033296585083) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[44].missing != -1) || (data[44].fvalue <= (float)4.658475518226623535e-06) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2496801465749740601) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2617471963167190552) ) ) {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3787812590599060059) ) ) {
                      result[0] += 0.6756756756756757;
                      result[1] += 0.32432432432432434;
                    } else {
                      result[0] += 0.26136363636363635;
                      result[1] += 0.7386363636363636;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3241925090551376343) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1436370685696601868) ) ) {
                      result[0] += 0.9989540590554349;
                      result[1] += 0.0010459409445651299;
                    } else {
                      result[0] += 0.7903225806451613;
                      result[1] += 0.20967741935483872;
                    }
                  } else {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.782492220401763916) ) ) {
                      result[0] += 0.9985362997658079;
                      result[1] += 0.0014637002341920376;
                    } else {
                      result[0] += 0.9999821477983772;
                      result[1] += 1.785220162276513e-05;
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
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
      if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001774667529389262199) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2843808382749557495) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.7989475131034851074) ) ) {
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
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7676883339881896973) ) ) {
          if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06877389457076787949) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1531271114945411682) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3864005208015441895) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.706625819206237793) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2436483129858970642) ) ) {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3065050989389419556) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.18421052631578946;
                      result[1] += 0.8157894736842105;
                    }
                  } else {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1926773786544799805) ) ) {
                      result[0] += 0.3333333333333333;
                      result[1] += 0.6666666666666666;
                    } else {
                      result[0] += 0.9431818181818182;
                      result[1] += 0.056818181818181816;
                    }
                  }
                } else {
                  if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7690946757793426514) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2526977509260177612) ) ) {
                      result[0] += 0.125;
                      result[1] += 0.875;
                    } else {
                      result[0] += 0.9998058952388875;
                      result[1] += 0.00019410476111249758;
                    }
                  } else {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3472117632627487183) ) ) {
                      result[0] += 0.999835255354201;
                      result[1] += 0.00016474464579901152;
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
      }
    } else {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3217779546976089478) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1335144117474555969) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2259324193000793457) ) ) {
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2250917553901672363) ) ) {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3304320275783538818) ) ) {
                    if ( ( !(data[64].missing != -1) || (data[64].fvalue <= (float)0.709514915943145752) ) ) {
                      result[0] += 0.7058823529411765;
                      result[1] += 0.29411764705882354;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7940613925457000732) ) ) {
                      result[0] += 0.7692307692307693;
                      result[1] += 0.23076923076923078;
                    } else {
                      result[0] += 0.9810126582278481;
                      result[1] += 0.0189873417721519;
                    }
                  }
                } else {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3065050989389419556) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1979539841413497925) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9090909090909091;
                      result[1] += 0.09090909090909091;
                    }
                  }
                }
              } else {
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7805594503879547119) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2781266868114471436) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2526977509260177612) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.7650753768844221;
                      result[1] += 0.23492462311557788;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.784296184778213501) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2376131191849708557) ) ) {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3226326256990432739) ) ) {
                      result[0] += 0.9711538461538461;
                      result[1] += 0.028846153846153848;
                    } else {
                      result[0] += 0.9987159732922445;
                      result[1] += 0.0012840267077555213;
                    }
                  } else {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2945583313703536987) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.8757396449704142;
                      result[1] += 0.1242603550295858;
                    }
                  }
                }
              } else {
                if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3803411275148391724) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2225251346826553345) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[70].missing != -1) || (data[70].fvalue <= (float)0.936901777982711792) ) ) {
                      result[0] += 0.5714285714285714;
                      result[1] += 0.42857142857142855;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3788730651140213013) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3163948804140090942) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7687848806381225586) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7856981754302978516) ) ) {
                      result[0] += 0.8888888888888888;
                      result[1] += 0.1111111111111111;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2451520860195159912) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1397733837366104126) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
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
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1395496055483818054) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2564689069986343384) ) ) {
                  if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001825273095164448023) ) ) {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2883205562829971313) ) ) {
                      result[0] += 0.96;
                      result[1] += 0.04;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
                      result[0] += 0.698237885462555;
                      result[1] += 0.30176211453744495;
                    } else {
                      result[0] += 0.18134328358208956;
                      result[1] += 0.8186567164179105;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3571722805500030518) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2024775072932243347) ) ) {
                      result[0] += 0.7837837837837838;
                      result[1] += 0.21621621621621623;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
                      result[0] += 0.7692307692307693;
                      result[1] += 0.23076923076923078;
                    } else {
                      result[0] += 0.014184397163120567;
                      result[1] += 0.9858156028368794;
                    }
                  }
                } else {
                  if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001668396289460361004) ) ) {
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
            if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)6.353482604026794434e-06) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2723104655742645264) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1288257911801338196) ) ) {
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
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
      result[0] += 0;
      result[1] += 1;
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
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.7562301158905029297) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3132751137018203735) ) ) {
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3257523924112319946) ) ) {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1335144117474555969) ) ) {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4180718958377838135) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3571722805500030518) ) ) {
                      result[0] += 0.8409090909090909;
                      result[1] += 0.1590909090909091;
                    } else {
                      result[0] += 0.14285714285714285;
                      result[1] += 0.8571428571428571;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7722855508327484131) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              }
            } else {
              if ( ( !(data[69].missing != -1) || (data[69].fvalue <= (float)0.8316618204116821289) ) ) {
                if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4036482125520706177) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2647681385278701782) ) ) {
                    if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4519360363483428955) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1425671949982643127) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9994574064026045;
                      result[1] += 0.0005425935973955507;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.782492220401763916) ) ) {
                  if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7614953219890594482) ) ) {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3555040508508682251) ) ) {
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
                  if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7677219212055206299) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.360781446099281311) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9166666666666666;
                      result[1] += 0.08333333333333333;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1486023962497711182) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2625041007995605469) ) ) {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.406010851263999939) ) ) {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
                      result[0] += 0.9207920792079208;
                      result[1] += 0.07920792079207921;
                    } else {
                      result[0] += 0.5546558704453441;
                      result[1] += 0.44534412955465585;
                    }
                  } else {
                    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2924157828092575073) ) ) {
                      result[0] += 0.8969030154849226;
                      result[1] += 0.10309698451507743;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[50].missing != -1) || (data[50].fvalue <= (float)0.357469514012336731) ) ) {
                    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4158186167478561401) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1410631909966468811) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.99375;
                      result[1] += 0.00625;
                    }
                  }
                }
              } else {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7870718538761138916) ) ) {
                      result[0] += 0.8083941605839416;
                      result[1] += 0.19160583941605838;
                    } else {
                      result[0] += 0.9547511312217195;
                      result[1] += 0.04524886877828054;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 0.9000584453535944;
                      result[1] += 0.09994155464640561;
                    } else {
                      result[0] += 0.5838926174496645;
                      result[1] += 0.4161073825503356;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)3.812834620475769043e-06) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1403031647205352783) ) ) {
                if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001827803091146051884) ) ) {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2929984480142593384) ) ) {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
                      result[0] += 0.7692307692307693;
                      result[1] += 0.23076923076923078;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.5757575757575758;
                      result[1] += 0.42424242424242425;
                    }
                  }
                } else {
                  if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7795160412788391113) ) ) {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3787812590599060059) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.6415094339622641;
                      result[1] += 0.3584905660377358;
                    }
                  }
                }
              } else {
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3241925090551376343) ) ) {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1539440527558326721) ) ) {
                      result[0] += 0.9960560911481157;
                      result[1] += 0.003943908851884312;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2564688995480537415) ) ) {
                    result[0] += 0;
                    result[1] += 1;
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
      }
    }
  }
  if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001822743099182844162) ) ) {
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.09636001661419868469) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7870718538761138916) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3487196117639541626) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1378429681062698364) ) ) {
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
        if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001820213044993579388) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.266275256872177124) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8855221271514892578) ) ) {
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
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3230036124587059021) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2836239337921142578) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1098809279501438141) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2526977509260177612) ) ) {
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3257523924112319946) ) ) {
                  if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7183859944343566895) ) ) {
                    if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7193010449409484863) ) ) {
                      result[0] += 0.21739130434782608;
                      result[1] += 0.782608695652174;
                    } else {
                      result[0] += 0.5578947368421052;
                      result[1] += 0.4421052631578947;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2376131191849708557) ) ) {
                      result[0] += 0.9473684210526315;
                      result[1] += 0.05263157894736842;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.286760672926902771) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.7857142857142857;
                      result[1] += 0.21428571428571427;
                    }
                  }
                }
              } else {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.360781446099281311) ) ) {
                    if ( ( !(data[70].missing != -1) || (data[70].fvalue <= (float)0.9432790279388427734) ) ) {
                      result[0] += 0.9999841964694913;
                      result[1] += 1.5803530508715646e-05;
                    } else {
                      result[0] += 0.9998659068052297;
                      result[1] += 0.0001340931947703654;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3787812590599060059) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9888268156424581;
                      result[1] += 0.0111731843575419;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
                    result[0] += 0;
                    result[1] += 1;
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
        } else {
          if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4268460869789123535) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
                  if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001856900984421372414) ) ) {
                    if ( ( !(data[50].missing != -1) || (data[50].fvalue <= (float)0.5) ) ) {
                      result[0] += 0.9971014492753624;
                      result[1] += 0.002898550724637681;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8855220973491668701) ) ) {
                      result[0] += 0.8;
                      result[1] += 0.2;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                    if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
                      result[0] += 0.9856459330143541;
                      result[1] += 0.014354066985645933;
                    } else {
                      result[0] += 0.8912087912087913;
                      result[1] += 0.1087912087912088;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1335144117474555969) ) ) {
                      result[0] += 0.9095378564405113;
                      result[1] += 0.09046214355948869;
                    } else {
                      result[0] += 0.996066089693155;
                      result[1] += 0.003933910306845004;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2738175839185714722) ) ) {
                if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8173351287841796875) ) ) {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                      result[0] += 0.007281553398058253;
                      result[1] += 0.9927184466019418;
                    } else {
                      result[0] += 0.6660287081339713;
                      result[1] += 0.3339712918660287;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2945583313703536987) ) ) {
                      result[0] += 0.08333333333333333;
                      result[1] += 0.9166666666666666;
                    } else {
                      result[0] += 0.195625;
                      result[1] += 0.804375;
                    }
                  }
                } else {
                  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.17286652078774617;
                      result[1] += 0.8271334792122538;
                    }
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
          } else {
            if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7906301617622375488) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2723104655742645264) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3241925090551376343) ) ) {
                  if ( ( !(data[75].missing != -1) || (data[75].fvalue <= (float)6.34482712484896183e-05) ) ) {
                    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4316533952951431274) ) ) {
                      result[0] += 0.9671052631578947;
                      result[1] += 0.03289473684210526;
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
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8896431326866149902) ) ) {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05494171613827347755) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.326264403760433197) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2039853483438491821) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2602400630712509155) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
              if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7174687683582305908) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3132751137018203735) ) ) {
                  if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8232134878635406494) ) ) {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7870718538761138916) ) ) {
                      result[0] += 0.8333333333333334;
                      result[1] += 0.16666666666666666;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2542048841714859009) ) ) {
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
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3132751137018203735) ) ) {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3057511746883392334) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              } else {
                if ( ( !(data[69].missing != -1) || (data[69].fvalue <= (float)0.8189072906970977783) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3864005208015441895) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4517073631286621094) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.7251529991626739502) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3195137530565261841) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3741033822298049927) ) ) {
                      result[0] += 0.9997088791848617;
                      result[1] += 0.0002911208151382824;
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
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2087755054235458374) ) ) {
          if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4449352025985717773) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.299465477466583252) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04765694402158260345) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2738175839185714722) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1516199931502342224) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3615049868822097778) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3241925090551376343) ) ) {
                  if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.8074434399604797363) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7657179534435272217) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.25;
                      result[1] += 0.75;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.8161026239395141602) ) ) {
                if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)6.353482604026794434e-06) ) ) {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2929984480142593384) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.299465477466583252) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9894419306184012;
                      result[1] += 0.010558069381598794;
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
            }
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
              if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.682669907808303833) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8878130018711090088) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2345921769738197327) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4090265333652496338) ) ) {
                      result[0] += 0.9631782945736435;
                      result[1] += 0.03682170542635659;
                    } else {
                      result[0] += 0.8542642924086223;
                      result[1] += 0.1457357075913777;
                    }
                  }
                } else {
                  if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8257574141025543213) ) ) {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.291439443826675415) ) ) {
                      result[0] += 0.991041804910418;
                      result[1] += 0.008958195089581952;
                    } else {
                      result[0] += 0.9440993788819876;
                      result[1] += 0.055900621118012424;
                    }
                  } else {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3780013173818588257) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.47058823529411764;
                      result[1] += 0.5294117647058824;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8173351287841796875) ) ) {
                if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2924157828092575073) ) ) {
                  if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7156386375427246094) ) ) {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
                      result[0] += 0.946236559139785;
                      result[1] += 0.053763440860215055;
                    } else {
                      result[0] += 0.4603960396039604;
                      result[1] += 0.5396039603960396;
                    }
                  } else {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2274922952055931091) ) ) {
                      result[0] += 0.9816993464052287;
                      result[1] += 0.018300653594771243;
                    } else {
                      result[0] += 0.7871939736346516;
                      result[1] += 0.2128060263653484;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              } else {
                if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.782492220401763916) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3713338524103164673) ) ) {
                      result[0] += 0.2698412698412698;
                      result[1] += 0.7301587301587301;
                    } else {
                      result[0] += 0.07874015748031496;
                      result[1] += 0.9212598425196851;
                    }
                  }
                } else {
                  if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7156386375427246094) ) ) {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8850656449794769287) ) ) {
                      result[0] += 0.058823529411764705;
                      result[1] += 0.9411764705882353;
                    } else {
                      result[0] += 0.6530612244897959;
                      result[1] += 0.3469387755102041;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
                      result[0] += 0.9579439252336449;
                      result[1] += 0.04205607476635514;
                    } else {
                      result[0] += 0.72;
                      result[1] += 0.28;
                    }
                  }
                }
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
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3675650954246520996) ) ) {
        if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3864005208015441895) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3499511033296585083) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3221242576837539673) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3683198690414428711) ) ) {
                  if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001830333145335316658) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2836409211158752441) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.2857142857142857;
                      result[1] += 0.7142857142857143;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              } else {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
                  if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7597486972808837891) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.148147091269493103) ) ) {
                      result[0] += 0.9997762029093622;
                      result[1] += 0.0002237970906378217;
                    } else {
                      result[0] += 0.980225988700565;
                      result[1] += 0.01977401129943503;
                    }
                  }
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3741033822298049927) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2232787013053894043) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.963855421686747;
                      result[1] += 0.03614457831325301;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.882804995196926;
                      result[1] += 0.11719500480307397;
                    }
                  }
                }
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
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3217779546976089478) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2924157828092575073) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2024775072932243347) ) ) {
              if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
                if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2781266868114471436) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3148349970579147339) ) ) {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2265996038913726807) ) ) {
                      result[0] += 0.751937984496124;
                      result[1] += 0.24806201550387597;
                    } else {
                      result[0] += 0.976878612716763;
                      result[1] += 0.023121387283236993;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                  if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.9724375307559967041) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2345921769738197327) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.013114754098360656;
                      result[1] += 0.9868852459016394;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3163948804140090942) ) ) {
                      result[0] += 0.9849749582637729;
                      result[1] += 0.015025041736227046;
                    } else {
                      result[0] += 0.916083916083916;
                      result[1] += 0.08391608391608392;
                    }
                  } else {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.6413043478260869;
                      result[1] += 0.358695652173913;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7177566289901733398) ) ) {
                  result[0] += 0;
                  result[1] += 1;
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
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.287395089864730835) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.337673678994178772) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1288257911801338196) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)6.353482604026794434e-06) ) ) {
                if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.993042677640914917) ) ) {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1320460066199302673) ) ) {
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
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7676883339881896973) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1440776735544204712) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3803411275148391724) ) ) {
          if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1307562068104743958) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3557280451059341431) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2376131191849708557) ) ) {
                      result[0] += 0.9744882824087808;
                      result[1] += 0.025511717591219223;
                    } else {
                      result[0] += 0.39622641509433965;
                      result[1] += 0.6037735849056604;
                    }
                  } else {
                    if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7746321558952331543) ) ) {
                      result[0] += 0.9987650509416487;
                      result[1] += 0.001234949058351343;
                    } else {
                      result[0] += 0.975;
                      result[1] += 0.025;
                    }
                  }
                } else {
                  if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7251994311809539795) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
                      result[0] += 0.9998104025785249;
                      result[1] += 0.00018959742147506793;
                    } else {
                      result[0] += 0.9954140814674939;
                      result[1] += 0.004585918532506069;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
              if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2924157828092575073) ) ) {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3758573830127716064) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.48686030428769017;
                      result[1] += 0.5131396957123098;
                    }
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3494735211133956909) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.8842105263157894;
                      result[1] += 0.11578947368421053;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05921705067157745361) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.375662386417388916) ) ) {
                      result[0] += 0.55;
                      result[1] += 0.45;
                    } else {
                      result[0] += 0.3258325832583258;
                      result[1] += 0.6741674167416741;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.8035078346729278564) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3535602688789367676) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
          if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.6770445704460144043) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3850509226322174072) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7870718538761138916) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3615049868822097778) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3195137530565261841) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7765369117259979248) ) ) {
                      result[0] += 0.5;
                      result[1] += 0.5;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
            if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.6972318291664123535) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1098809279501438141) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1371966376900672913) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
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
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2677823752164840698) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.771973729133605957) ) ) {
                  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7884455323219299316) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3232284635305404663) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3275611698627471924) ) ) {
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
        }
      }
    }
  } else {
    if ( ( !(data[66].missing != -1) || (data[66].fvalue <= (float)3.812834620475769043e-06) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2024775072932243347) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1501128673553466797) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3578929752111434937) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8127383291721343994) ) ) {
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
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3241925090551376343) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1326894834637641907) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1281794607639312744) ) ) {
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
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1501128673553466797) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7464606761932373047) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3268404752016067505) ) ) {
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
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2768351733684539795) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
            if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7795160412788391113) ) ) {
              if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001830333145335316658) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7810941040515899658) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3698268681764602661) ) ) {
                    result[0] += 1;
                    result[1] += 0;
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
            if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7156386375427246094) ) ) {
              if ( ( !(data[60].missing != -1) || (data[60].fvalue <= (float)0.9672311246395111084) ) ) {
                if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
                      result[0] += 0.09090909090909091;
                      result[1] += 0.9090909090909091;
                    } else {
                      result[0] += 0.003745318352059925;
                      result[1] += 0.9962546816479401;
                    }
                  }
                } else {
                  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                    if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7827292680740356445) ) ) {
                      result[0] += 0.19047619047619047;
                      result[1] += 0.8095238095238095;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7738775908946990967) ) ) {
                      result[0] += 0.9393939393939394;
                      result[1] += 0.06060606060606061;
                    } else {
                      result[0] += 0.5555555555555556;
                      result[1] += 0.4444444444444444;
                    }
                  }
                }
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2945583313703536987) ) ) {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.375662386417388916) ) ) {
                      result[0] += 0.9855371900826446;
                      result[1] += 0.014462809917355372;
                    } else {
                      result[0] += 0.6403940886699507;
                      result[1] += 0.35960591133004927;
                    }
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3713338524103164673) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.40540540540540543;
                      result[1] += 0.5945945945945946;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.13797808438539505) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
              if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2781266868114471436) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511906176805496216) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3335509002208709717) ) ) {
                      result[0] += 0.7590987868284229;
                      result[1] += 0.24090121317157712;
                    } else {
                      result[0] += 0.9904240766073872;
                      result[1] += 0.009575923392612859;
                    }
                  } else {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3065050989389419556) ) ) {
                      result[0] += 0.9931798806479113;
                      result[1] += 0.0068201193520886615;
                    } else {
                      result[0] += 0.9188926663428849;
                      result[1] += 0.0811073336571151;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4158186167478561401) ) ) {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1395496055483818054) ) ) {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.215015023946762085) ) ) {
                      result[0] += 0.6785714285714286;
                      result[1] += 0.32142857142857145;
                    } else {
                      result[0] += 0.2689075630252101;
                      result[1] += 0.7310924369747899;
                    }
                  } else {
                    if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7831428647041320801) ) ) {
                      result[0] += 0.9722222222222222;
                      result[1] += 0.027777777777777776;
                    } else {
                      result[0] += 0.84375;
                      result[1] += 0.15625;
                    }
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
    } else {
      if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7118854820728302002) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7549643218517303467) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1591623052954673767) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3448948562145233154) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4517073631286621094) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8247438371181488037) ) ) {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7676883339881896973) ) ) {
                      result[0] += 0.9828956877860756;
                      result[1] += 0.017104312213924354;
                    } else {
                      result[0] += 0.9998504192659985;
                      result[1] += 0.00014958073400146062;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3355087488889694214) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3369529843330383301) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)6.353482604026794434e-06) ) ) {
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
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2768351733684539795) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2376131191849708557) ) ) {
                  if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.994306415319442749) ) ) {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3622884899377822876) ) ) {
                      result[0] += 0.9995093228655545;
                      result[1] += 0.0004906771344455348;
                    } else {
                      result[0] += 0.9632352941176471;
                      result[1] += 0.03676470588235294;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1442834064364433289) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1994618251919746399) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2315779253840446472) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9763313609467456;
                      result[1] += 0.023668639053254437;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2572224736213684082) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.875;
                      result[1] += 0.125;
                    }
                  }
                }
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1335144117474555969) ) ) {
                    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7183859944343566895) ) ) {
                      result[0] += 0.2764227642276423;
                      result[1] += 0.7235772357723578;
                    } else {
                      result[0] += 0.78;
                      result[1] += 0.22;
                    }
                  } else {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9014373716632443;
                      result[1] += 0.09856262833675565;
                    }
                  }
                } else {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2296152859926223755) ) ) {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.8792710706150342;
                      result[1] += 0.12072892938496584;
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
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3319918960332870483) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2293138951063156128) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3772213906049728394) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7754603922367095947) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                }
              } else {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3140443116426467896) ) ) {
                    if ( ( !(data[69].missing != -1) || (data[69].fvalue <= (float)0.8166298568248748779) ) ) {
                      result[0] += 0.6363636363636364;
                      result[1] += 0.36363636363636365;
                    } else {
                      result[0] += 0.9728434504792333;
                      result[1] += 0.027156549520766772;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 0.9803921568627451;
                      result[1] += 0.0196078431372549;
                    } else {
                      result[0] += 0.46153846153846156;
                      result[1] += 0.5384615384615384;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
                if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2781266868114471436) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2296152859926223755) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1320072859525680542) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.47619047619047616;
                      result[1] += 0.5238095238095238;
                    }
                  } else {
                    if ( ( !(data[70].missing != -1) || (data[70].fvalue <= (float)0.9323469102382659912) ) ) {
                      result[0] += 0.875;
                      result[1] += 0.125;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2376131191849708557) ) ) {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3819010108709335327) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.26436781609195403;
                      result[1] += 0.735632183908046;
                    }
                  } else {
                    if ( ( !(data[50].missing != -1) || (data[50].fvalue <= (float)0.1432926803827285767) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.0196078431372549;
                      result[1] += 0.9803921568627451;
                    }
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                      result[0] += 0.5;
                      result[1] += 0.5;
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
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3195137530565261841) ) ) {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.375662386417388916) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.36;
                      result[1] += 0.64;
                    }
                  }
                } else {
                  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7852395772933959961) ) ) {
                    if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.9063781797885894775) ) ) {
                      result[0] += 0.3333333333333333;
                      result[1] += 0.6666666666666666;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7895224392414093018) ) ) {
                      result[0] += 0.9824561403508771;
                      result[1] += 0.017543859649122806;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                }
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2333840504288673401) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3586165159940719604) ) ) {
                      result[0] += 0.9166666666666666;
                      result[1] += 0.08333333333333333;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3637963384389877319) ) ) {
                    if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7496495544910430908) ) ) {
                      result[0] += 0.031914893617021274;
                      result[1] += 0.9680851063829787;
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
        } else {
          if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7432717978954315186) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3517352938652038574) ) ) {
                  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2906595021486282349) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7156386375427246094) ) ) {
                      result[0] += 0.8333333333333334;
                      result[1] += 0.16666666666666666;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.3142857142857143;
                      result[1] += 0.6857142857142857;
                    }
                  } else {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1987079009413719177) ) ) {
                      result[0] += 0.09433962264150944;
                      result[1] += 0.9056603773584906;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
                  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.821932375431060791) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                } else {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2883205562829971313) ) ) {
                      result[0] += 0.6710526315789473;
                      result[1] += 0.32894736842105265;
                    } else {
                      result[0] += 0.2391304347826087;
                      result[1] += 0.7608695652173914;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7687848806381225586) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2929984480142593384) ) ) {
                    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7156386375427246094) ) ) {
                      result[0] += 0.3157894736842105;
                      result[1] += 0.6842105263157895;
                    } else {
                      result[0] += 0.9047619047619048;
                      result[1] += 0.09523809523809523;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001825273095164448023) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.048672566371681415;
                      result[1] += 0.9513274336283186;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8868957757949829102) ) ) {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3586165159940719604) ) ) {
                      result[0] += 0.08064516129032258;
                      result[1] += 0.9193548387096774;
                    } else {
                      result[0] += 0.8636363636363636;
                      result[1] += 0.13636363636363635;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1442833989858627319) ) ) {
                      result[0] += 0.8651162790697674;
                      result[1] += 0.13488372093023257;
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
      }
    } else {
      if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.9933518767356872559) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.7537131011486053467) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.1382724717259407043) ) ) {
            if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3864005208015441895) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3292691260576248169) ) ) {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7695273160934448242) ) ) {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
                    if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4517073631286621094) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9999713901524905;
                      result[1] += 2.8609847509512775e-05;
                    }
                  } else {
                    if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.812953561544418335) ) ) {
                      result[0] += 0.9132925143195734;
                      result[1] += 0.08670748568042662;
                    } else {
                      result[0] += 0.16666666666666666;
                      result[1] += 0.8333333333333334;
                    }
                  }
                } else {
                  if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8266054093837738037) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3448948562145233154) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9989664082687338;
                      result[1] += 0.0010335917312661498;
                    }
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
  
  // Average tree outputs
  result[0] /= 15;
  result[1] /= 15;
  
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
    

    FILE* file = fopen("./codegen/esa_3_months_global/split_1/test_data.csv", "r");
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
