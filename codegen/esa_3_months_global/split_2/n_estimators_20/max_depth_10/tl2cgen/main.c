
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.813657611608505249) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
        if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7032242417335510254) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7621722519397735596) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7676883339881896973) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511872798204421997) ) ) {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4180718958377838135) ) ) {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2929984480142593384) ) ) {
                      result[0] += 0.7857142857142857;
                      result[1] += 0.21428571428571427;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3413494378328323364) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.291439443826675415) ) ) {
                      result[0] += 0.999651527471251;
                      result[1] += 0.0003484725287489836;
                    } else {
                      result[0] += 0.9890329012961117;
                      result[1] += 0.010967098703888335;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06770694628357887268) ) ) {
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3163948804140090942) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3132751137018203735) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1320072859525680542) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.5457627118644067;
                      result[1] += 0.4542372881355932;
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
                result[0] += 1;
                result[1] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001827803091146051884) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1346227526664733887) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.3078164160251617432) ) ) {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.2974597364664077759) ) ) {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.406010851263999939) ) ) {
                      result[0] += 0.7735849056603774;
                      result[1] += 0.22641509433962265;
                    } else {
                      result[0] += 0.983073798239675;
                      result[1] += 0.016926201760324982;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511906176805496216) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.8872366790582404;
                      result[1] += 0.1127633209417596;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4075186997652053833) ) ) {
                      result[0] += 0.36;
                      result[1] += 0.64;
                    } else {
                      result[0] += 0.9583333333333334;
                      result[1] += 0.041666666666666664;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2542048841714859009) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.03470031545741325;
                      result[1] += 0.9652996845425867;
                    }
                  }
                }
              } else {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1335144117474555969) ) ) {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.365116998553276062) ) ) {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2235839143395423889) ) ) {
                      result[0] += 0.38461538461538464;
                      result[1] += 0.6153846153846154;
                    } else {
                      result[0] += 0.9931506849315068;
                      result[1] += 0.00684931506849315;
                    }
                  } else {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2329509928822517395) ) ) {
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
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
            if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511906176805496216) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3586165159940719604) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.1415413469076156616) ) ) {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2883205562829971313) ) ) {
                      result[0] += 0.9288888888888889;
                      result[1] += 0.07111111111111111;
                    } else {
                      result[0] += 0.9778894472361809;
                      result[1] += 0.022110552763819097;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.406737983226776123) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3065050989389419556) ) ) {
                    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7156386375427246094) ) ) {
                      result[0] += 0.1276595744680851;
                      result[1] += 0.8723404255319149;
                    } else {
                      result[0] += 0.6298076923076923;
                      result[1] += 0.3701923076923077;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                      result[0] += 0.4900662251655629;
                      result[1] += 0.5099337748344371;
                    } else {
                      result[0] += 0.03551912568306011;
                      result[1] += 0.9644808743169399;
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
    if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001822743099182844162) ) ) {
      if ( ( !(data[70].missing != -1) || (data[70].fvalue <= (float)0.9318918883800506592) ) ) {
        if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7733180224895477295) ) ) {
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3492304086685180664) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)3.175809979438781738e-06) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2368498146533966064) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[68].missing != -1) || (data[68].fvalue <= (float)0.8198173344135284424) ) ) {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1516199931502342224) ) ) {
                  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4190953224897384644) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.8109857738018035889) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.6;
                      result[1] += 0.4;
                    }
                  }
                } else {
                  if ( ( !(data[74].missing != -1) || (data[74].fvalue <= (float)6.344821304082870483e-05) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2738175839185714722) ) ) {
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
                if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04041793011128902435) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8087992370128631592) ) ) {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1333358064293861389) ) ) {
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
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8182544112205505371) ) ) {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4303112775087356567) ) ) {
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
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7191888689994812012) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3850509226322174072) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7805594503879547119) ) ) {
                if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7156386375427246094) ) ) {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3004754185676574707) ) ) {
                    if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.9669703245162963867) ) ) {
                      result[0] += 0.963855421686747;
                      result[1] += 0.03614457831325301;
                    } else {
                      result[0] += 0.9954337899543378;
                      result[1] += 0.0045662100456621;
                    }
                  } else {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3532431274652481079) ) ) {
                      result[0] += 0.9855072463768116;
                      result[1] += 0.014492753623188406;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8841484189033508301) ) ) {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3494735211133956909) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.148147091269493103) ) ) {
                      result[0] += 0.9999858607281725;
                      result[1] += 1.4139271827500883e-05;
                    } else {
                      result[0] += 0.9982014388489209;
                      result[1] += 0.0017985611510791368;
                    }
                  }
                }
              } else {
                if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3185180723667144775) ) ) {
                  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2781266868114471436) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[48].missing != -1) || (data[48].fvalue <= (float)0.2858231663703918457) ) ) {
                      result[0] += 0.7435897435897436;
                      result[1] += 0.2564102564102564;
                    } else {
                      result[0] += 0.948291782086796;
                      result[1] += 0.05170821791320406;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              }
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
            if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4158186167478561401) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
                      result[0] += 0.9287183002056203;
                      result[1] += 0.07128169979437972;
                    } else {
                      result[0] += 0.7732620320855615;
                      result[1] += 0.2267379679144385;
                    }
                  } else {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                      result[0] += 0.9466403162055336;
                      result[1] += 0.0533596837944664;
                    } else {
                      result[0] += 0.9953837276399308;
                      result[1] += 0.004616272360069244;
                    }
                  }
                }
              } else {
                if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
                      result[0] += 0.9805825242718447;
                      result[1] += 0.019417475728155338;
                    } else {
                      result[0] += 0.8;
                      result[1] += 0.2;
                    }
                  } else {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
                      result[0] += 0.18981481481481483;
                      result[1] += 0.8101851851851852;
                    } else {
                      result[0] += 0.05911708253358925;
                      result[1] += 0.9408829174664107;
                    }
                  }
                } else {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2259324193000793457) ) ) {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2243725359439849854) ) ) {
                      result[0] += 0.9747899159663865;
                      result[1] += 0.025210084033613446;
                    } else {
                      result[0] += 0.68;
                      result[1] += 0.32;
                    }
                  } else {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1994618251919746399) ) ) {
                      result[0] += 0.05027932960893855;
                      result[1] += 0.9497206703910615;
                    } else {
                      result[0] += 0.574468085106383;
                      result[1] += 0.425531914893617;
                    }
                  }
                }
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)6.351619958877563477e-06) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2421378418803215027) ) ) {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8173351287841796875) ) ) {
                    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7174687683582305908) ) ) {
                      result[0] += 0.6415094339622641;
                      result[1] += 0.3584905660377358;
                    } else {
                      result[0] += 0.9574468085106383;
                      result[1] += 0.0425531914893617;
                    }
                  } else {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                }
              } else {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)3.175809979438781738e-06) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2496801465749740601) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9993707209021345;
                      result[1] += 0.0006292790978654853;
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
      }
    }
  }
  if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001822743099182844162) ) ) {
    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3919859081506729126) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7695273160934448242) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.7310391664505004883) ) ) {
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2735034674406051636) ) ) {
                if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.9738049209117889404) ) ) {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3600607514381408691) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7834094464778900146) ) ) {
                      result[0] += 0.9852941176470589;
                      result[1] += 0.014705882352941176;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4537584483623504639) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3004754185676574707) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.148147091269493103) ) ) {
                    if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7699212729930877686) ) ) {
                      result[0] += 0.999656652360515;
                      result[1] += 0.00034334763948497857;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2103353813290596008) ) ) {
                      result[0] += 0.9821428571428571;
                      result[1] += 0.017857142857142856;
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
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1395496055483818054) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3132751137018203735) ) ) {
                  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2781266868114471436) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
                      result[0] += 0.7242798353909465;
                      result[1] += 0.2757201646090535;
                    } else {
                      result[0] += 0.8228485153497735;
                      result[1] += 0.17715148465022648;
                    }
                  }
                } else {
                  if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7859852612018585205) ) ) {
                    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.924187725631769;
                      result[1] += 0.07581227436823104;
                    }
                  } else {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.286760672926902771) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2617471963167190552) ) ) {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                      result[0] += 0.9888268156424581;
                      result[1] += 0.0111731843575419;
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
          }
        }
      } else {
        if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7202161252498626709) ) ) {
          if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7464606761932373047) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3009759485721588135) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.375662386417388916) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2602400630712509155) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
                      result[0] += 0.975452196382429;
                      result[1] += 0.02454780361757106;
                    } else {
                      result[0] += 0.8236559139784946;
                      result[1] += 0.17634408602150536;
                    }
                  } else {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.419579729437828064) ) ) {
                      result[0] += 0.7426900584795322;
                      result[1] += 0.2573099415204678;
                    } else {
                      result[0] += 0.42424242424242425;
                      result[1] += 0.5757575757575758;
                    }
                  }
                } else {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3226326256990432739) ) ) {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9625;
                      result[1] += 0.0375;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
                  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2474161237478256226) ) ) {
                      result[0] += 0.5;
                      result[1] += 0.5;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3708939403295516968) ) ) {
                      result[0] += 0.9646365422396856;
                      result[1] += 0.03536345776031434;
                    } else {
                      result[0] += 0.2857142857142857;
                      result[1] += 0.7142857142857143;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2542048841714859009) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2278067693114280701) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 0.9724220623501199;
                      result[1] += 0.027577937649880094;
                    } else {
                      result[0] += 0.35403726708074534;
                      result[1] += 0.6459627329192547;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.140416853129863739) ) ) {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7713658511638641357) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3179547637701034546) ) ) {
                      result[0] += 0.6127450980392157;
                      result[1] += 0.3872549019607843;
                    } else {
                      result[0] += 0.8761061946902655;
                      result[1] += 0.12389380530973451;
                    }
                  }
                } else {
                  if ( ( !(data[64].missing != -1) || (data[64].fvalue <= (float)0.709514915943145752) ) ) {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7722851336002349854) ) ) {
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
              if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3217779546976089478) ) ) {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3499511033296585083) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1349897757172584534) ) ) {
                  if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)6.351619958877563477e-06) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3101553469896316528) ) ) {
                      result[0] += 0.9916259595254711;
                      result[1] += 0.00837404047452896;
                    } else {
                      result[0] += 0.9996069182389937;
                      result[1] += 0.00039308176100628933;
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
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1320431455969810486) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04964188672602176666) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
                if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4398858696222305298) ) ) {
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
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3787812590599060059) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.4;
                      result[1] += 0.6;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.21428571428571427;
                      result[1] += 0.7857142857142857;
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
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1380424797534942627) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3758573830127716064) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2617471963167190552) ) ) {
            if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3004754185676574707) ) ) {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3668120354413986206) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3787812590599060059) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1359096914529800415) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
                    if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7792290151119232178) ) ) {
                      result[0] += 0.043478260869565216;
                      result[1] += 0.9565217391304348;
                    } else {
                      result[0] += 0.3;
                      result[1] += 0.7;
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
                }
              } else {
                if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
                      result[0] += 0.09782608695652174;
                      result[1] += 0.9021739130434783;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7432717978954315186) ) ) {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7156386375427246094) ) ) {
                      result[0] += 0.74;
                      result[1] += 0.26;
                    } else {
                      result[0] += 0.964968152866242;
                      result[1] += 0.03503184713375796;
                    }
                  }
                } else {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3095207810401916504) ) ) {
                      result[0] += 0.9919232710752145;
                      result[1] += 0.008076728924785462;
                    } else {
                      result[0] += 0.25;
                      result[1] += 0.75;
                    }
                  }
                }
              } else {
                if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                    if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.8105924725532531738) ) ) {
                      result[0] += 0.9948892674616695;
                      result[1] += 0.005110732538330494;
                    } else {
                      result[0] += 0.8333333333333334;
                      result[1] += 0.16666666666666666;
                    }
                  } else {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2368498146533966064) ) ) {
                      result[0] += 0.8031496062992126;
                      result[1] += 0.1968503937007874;
                    } else {
                      result[0] += 0.06666666666666667;
                      result[1] += 0.9333333333333333;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                    if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4523910582065582275) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9359567901234568;
                      result[1] += 0.06404320987654322;
                    }
                  } else {
                    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7165536880493164062) ) ) {
                      result[0] += 0.8333333333333334;
                      result[1] += 0.16666666666666666;
                    } else {
                      result[0] += 0.39457831325301207;
                      result[1] += 0.6054216867469879;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1979539841413497925) ) ) {
                  if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7895565629005432129) ) ) {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1410631909966468811) ) ) {
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
                  result[0] += 1;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2477068603038787842) ) ) {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3557280451059341431) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
                      result[0] += 0.9565217391304348;
                      result[1] += 0.043478260869565216;
                    } else {
                      result[0] += 0.999;
                      result[1] += 0.001;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2813598960638046265) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.782492220401763916) ) ) {
                      result[0] += 0.9576271186440678;
                      result[1] += 0.0423728813559322;
                    } else {
                      result[0] += 0.9977011494252873;
                      result[1] += 0.0022988505747126436;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2781266868114471436) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.786156773567199707) ) ) {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2259324193000793457) ) ) {
                      result[0] += 0.9184549356223176;
                      result[1] += 0.0815450643776824;
                    } else {
                      result[0] += 0.616710875331565;
                      result[1] += 0.383289124668435;
                    }
                  }
                } else {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8868957757949829102) ) ) {
                      result[0] += 0.24015748031496062;
                      result[1] += 0.7598425196850394;
                    } else {
                      result[0] += 0.573170731707317;
                      result[1] += 0.4268292682926829;
                    }
                  }
                }
              } else {
                if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4523910582065582275) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8878130018711090088) ) ) {
                    if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7963845431804656982) ) ) {
                      result[0] += 0.936;
                      result[1] += 0.064;
                    } else {
                      result[0] += 0.5;
                      result[1] += 0.5;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2149828150868415833) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9922330097087378;
                      result[1] += 0.007766990291262136;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3557280451059341431) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1448312327265739441) ) ) {
              if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7165536880493164062) ) ) {
                if ( ( !(data[48].missing != -1) || (data[48].fvalue <= (float)0.7865853607654571533) ) ) {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
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
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.148147091269493103) ) ) {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                      result[0] += 0.3333333333333333;
                      result[1] += 0.6666666666666666;
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
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
              if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7803191840648651123) ) ) {
                if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7795160412788391113) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1994618251919746399) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2507216855883598328) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7215897738933563232) ) ) {
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
          if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.6550358831882476807) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7842374145984649658) ) ) {
              if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8147350847721099854) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3788730651140213013) ) ) {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2898804396390914917) ) ) {
                    if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7432717978954315186) ) ) {
                      result[0] += 0.9761904761904762;
                      result[1] += 0.023809523809523808;
                    } else {
                      result[0] += 0.8;
                      result[1] += 0.2;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7866132557392120361) ) ) {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.809438854455947876) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.06666666666666667;
                      result[1] += 0.9333333333333333;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7860759496688842773) ) ) {
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
        if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7411437630653381348) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.9742599427700042725) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.2929362058639526367) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7676883339881896973) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
              if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1070554032921791077) ) ) {
                if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.706625819206237793) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.409673541784286499) ) ) {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1425671949982643127) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9993634627625716;
                      result[1] += 0.0006365372374283895;
                    }
                  } else {
                    if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.75;
                      result[1] += 0.25;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8905603289604187012) ) ) {
                if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.00178478762973099947) ) ) {
                  if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7759019732475280762) ) ) {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1486023962497711182) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4158186167478561401) ) ) {
                      result[0] += 0.020833333333333332;
                      result[1] += 0.9791666666666666;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04574106819927692413) ) ) {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3713338524103164673) ) ) {
                      result[0] += 0.9803921568627451;
                      result[1] += 0.0196078431372549;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9801822006702423096) ) ) {
                      result[0] += 0.4;
                      result[1] += 0.6;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                }
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1346227526664733887) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.770910799503326416) ) ) {
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
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.287395089864730835) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.375662386417388916) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04041793011128902435) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[74].missing != -1) || (data[74].fvalue <= (float)6.353249773383140564e-05) ) ) {
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
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3009759485721588135) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3741033822298049927) ) ) {
          if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
            if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7762517929077148438) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.249680154025554657) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2376131191849708557) ) ) {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2961181998252868652) ) ) {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3065050989389419556) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.8653846153846154;
                      result[1] += 0.1346153846153846;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                } else {
                  if ( ( !(data[68].missing != -1) || (data[68].fvalue <= (float)0.8091115951538085938) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[68].missing != -1) || (data[68].fvalue <= (float)0.8161748349666595459) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.75;
                      result[1] += 0.25;
                    }
                  }
                }
              }
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
              if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7156386375427246094) ) ) {
                if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7751695215702056885) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3735956251621246338) ) ) {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1964461356401443481) ) ) {
                      result[0] += 0.9;
                      result[1] += 0.1;
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
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2507216855883598328) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.00177719752537086606) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4112874418497085571) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3517352938652038574) ) ) {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.32142857142857145;
                      result[1] += 0.6785714285714286;
                    }
                  } else {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.04065040650406504;
                      result[1] += 0.959349593495935;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.291439443826675415) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
              if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.9710701406002044678) ) ) {
                if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3397895544767379761) ) ) {
                    if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7870163619518280029) ) ) {
                      result[0] += 0.9;
                      result[1] += 0.1;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2945583313703536987) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.6666666666666666;
                      result[1] += 0.3333333333333333;
                    }
                  }
                } else {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3132751137018203735) ) ) {
                    if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7987939119338989258) ) ) {
                      result[0] += 0.9325842696629213;
                      result[1] += 0.06741573033707865;
                    } else {
                      result[0] += 0.2;
                      result[1] += 0.8;
                    }
                  } else {
                    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7156386375427246094) ) ) {
                      result[0] += 0.9322033898305084;
                      result[1] += 0.06779661016949153;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7156386375427246094) ) ) {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                      result[0] += 0.35714285714285715;
                      result[1] += 0.6428571428571429;
                    } else {
                      result[0] += 0.9583333333333334;
                      result[1] += 0.041666666666666664;
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
            } else {
              if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05921705067157745361) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2852007895708084106) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2376131191849708557) ) ) {
                    if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7671523988246917725) ) ) {
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
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.142628401517868042) ) ) {
                      result[0] += 0.972972972972973;
                      result[1] += 0.02702702702702703;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
                      result[0] += 0.16964285714285715;
                      result[1] += 0.8303571428571429;
                    } else {
                      result[0] += 0.0020920502092050207;
                      result[1] += 0.997907949790795;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.291439443826675415) ) ) {
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)3.812834620475769043e-06) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2504337131977081299) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2311231344938278198) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9155844155844156;
                      result[1] += 0.08441558441558442;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2345921769738197327) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
                      result[0] += 0.9588235294117647;
                      result[1] += 0.041176470588235294;
                    } else {
                      result[0] += 0.9958268127282212;
                      result[1] += 0.004173187271778821;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.24371859296482412;
                      result[1] += 0.7562814070351759;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3772213906049728394) ) ) {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.335109904408454895) ) ) {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
                      result[0] += 0.30451127819548873;
                      result[1] += 0.6954887218045113;
                    } else {
                      result[0] += 0.08287292817679558;
                      result[1] += 0.9171270718232044;
                    }
                  } else {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8191741108894348145) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.5;
                      result[1] += 0.5;
                    }
                  }
                } else {
                  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
                      result[0] += 0.33653846153846156;
                      result[1] += 0.6634615384615384;
                    } else {
                      result[0] += 0.6428571428571429;
                      result[1] += 0.35714285714285715;
                    }
                  } else {
                    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7156386375427246094) ) ) {
                      result[0] += 0.012903225806451613;
                      result[1] += 0.9870967741935484;
                    } else {
                      result[0] += 0.2;
                      result[1] += 0.8;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2039853483438491821) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7584942877292633057) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3772213906049728394) ) ) {
                if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.7251529991626739502) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2436483129858970642) ) ) {
                    if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.745397716760635376) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.3333333333333333;
                      result[1] += 0.6666666666666666;
                    }
                  } else {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2446920201182365417) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9999601672973512;
                      result[1] += 3.983270264887473e-05;
                    }
                  }
                }
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1288257911801338196) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[44].missing != -1) || (data[44].fvalue <= (float)1.92727893590927124e-05) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2421378418803215027) ) ) {
                      result[0] += 0.25;
                      result[1] += 0.75;
                    } else {
                      result[0] += 0.9988935931668314;
                      result[1] += 0.0011064068331686017;
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
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.758422166109085083) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1335144117474555969) ) ) {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1994618251919746399) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2345921769738197327) ) ) {
                      result[0] += 0.9586919104991394;
                      result[1] += 0.04130808950086059;
                    } else {
                      result[0] += 0.29245283018867924;
                      result[1] += 0.7075471698113207;
                    }
                  } else {
                    if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7174687683582305908) ) ) {
                      result[0] += 0.05;
                      result[1] += 0.95;
                    } else {
                      result[0] += 0.9802955665024631;
                      result[1] += 0.019704433497536946;
                    }
                  }
                } else {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3571722805500030518) ) ) {
                    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7270844876766204834) ) ) {
                      result[0] += 0.9977513652425313;
                      result[1] += 0.0022486347574686796;
                    } else {
                      result[0] += 0.9333333333333333;
                      result[1] += 0.06666666666666667;
                    }
                  } else {
                    if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.8004001975059509277) ) ) {
                      result[0] += 0.9874686716791979;
                      result[1] += 0.012531328320802004;
                    } else {
                      result[0] += 0.6666666666666666;
                      result[1] += 0.3333333333333333;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3163948804140090942) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3818887621164321899) ) ) {
                    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7156386375427246094) ) ) {
                      result[0] += 0.3394495412844037;
                      result[1] += 0.6605504587155964;
                    } else {
                      result[0] += 0.9134199134199135;
                      result[1] += 0.08658008658008658;
                    }
                  } else {
                    if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7183859944343566895) ) ) {
                      result[0] += 0.2;
                      result[1] += 0.8;
                    } else {
                      result[0] += 0.82;
                      result[1] += 0.18;
                    }
                  }
                } else {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8192496001720428467) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
                      result[0] += 0.2876712328767123;
                      result[1] += 0.7123287671232876;
                    } else {
                      result[0] += 0.07590759075907591;
                      result[1] += 0.9240924092409241;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                      result[0] += 0.8490566037735849;
                      result[1] += 0.1509433962264151;
                    } else {
                      result[0] += 0.01834862385321101;
                      result[1] += 0.981651376146789;
                    }
                  }
                }
              } else {
                if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                      result[0] += 0.9397590361445783;
                      result[1] += 0.060240963855421686;
                    } else {
                      result[0] += 0.5714285714285714;
                      result[1] += 0.42857142857142855;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
              if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7165536880493164062) ) ) {
                if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7147214412689208984) ) ) {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8173351287841796875) ) ) {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2371528074145317078) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.24528301886792453;
                      result[1] += 0.7547169811320755;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2383666783571243286) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.02;
                      result[1] += 0.98;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3413494378328323364) ) ) {
                      result[0] += 0.18181818181818182;
                      result[1] += 0.8181818181818182;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                }
              } else {
                if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3071592897176742554) ) ) {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2961181998252868652) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                      result[0] += 0.9793510324483776;
                      result[1] += 0.02064896755162242;
                    } else {
                      result[0] += 0.77491961414791;
                      result[1] += 0.22508038585209003;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2225251421332359314) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9948186528497409;
                      result[1] += 0.0051813471502590676;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              }
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4075186997652053833) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.8928571428571429;
                      result[1] += 0.10714285714285714;
                    }
                  } else {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3413494378328323364) ) ) {
                      result[0] += 0.014184397163120567;
                      result[1] += 0.9858156028368794;
                    } else {
                      result[0] += 0.5571428571428572;
                      result[1] += 0.44285714285714284;
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
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 0.9146341463414634;
                      result[1] += 0.08536585365853659;
                    } else {
                      result[0] += 0.045714285714285714;
                      result[1] += 0.9542857142857143;
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
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3499511033296585083) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7910524308681488037) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1539440527558326721) ) ) {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.1381837725639343262) ) ) {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
                      result[0] += 0.07407407407407407;
                      result[1] += 0.9259259259259259;
                    } else {
                      result[0] += 0.9993609834768584;
                      result[1] += 0.0006390165231415269;
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
          }
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2235839143395423889) ) ) {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3721477985382080078) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.3002223819494247437) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001774667529389262199) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3487196117639541626) ) ) {
        if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7411437630653381348) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3571722805500030518) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1365531682968139648) ) ) {
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
    } else {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2272647097706794739) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2735034674406051636) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3787812590599060059) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7682508528232574463) ) ) {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7640107870101928711) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3992245942354202271) ) ) {
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
            if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.6856892406940460205) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4517073631286621094) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3615049868822097778) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7677219212055206299) ) ) {
                    if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7879263758659362793) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9954545454545455;
                      result[1] += 0.004545454545454545;
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
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3257523924112319946) ) ) {
                if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001827803091146051884) ) ) {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.6325757575757576;
                      result[1] += 0.36742424242424243;
                    }
                  } else {
                    if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7691298723220825195) ) ) {
                      result[0] += 0.8;
                      result[1] += 0.2;
                    } else {
                      result[0] += 0.0945945945945946;
                      result[1] += 0.9054054054054054;
                    }
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.8731117824773413;
                      result[1] += 0.1268882175226586;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.8093525179856115;
                      result[1] += 0.1906474820143885;
                    }
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3803411275148391724) ) ) {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3592728078365325928) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.8947368421052632;
                      result[1] += 0.10526315789473684;
                    }
                  } else {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
                      result[0] += 0.5348837209302325;
                      result[1] += 0.46511627906976744;
                    } else {
                      result[0] += 0.9529411764705882;
                      result[1] += 0.047058823529411764;
                    }
                  }
                } else {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3725434988737106323) ) ) {
                    if ( ( !(data[64].missing != -1) || (data[64].fvalue <= (float)0.709514915943145752) ) ) {
                      result[0] += 0.855457227138643;
                      result[1] += 0.14454277286135694;
                    } else {
                      result[0] += 0.52;
                      result[1] += 0.48;
                    }
                  } else {
                    if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7202161252498626709) ) ) {
                      result[0] += 0.8730964467005076;
                      result[1] += 0.12690355329949238;
                    } else {
                      result[0] += 0.30049261083743845;
                      result[1] += 0.6995073891625616;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8173351287841796875) ) ) {
                if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2250917553901672363) ) ) {
                      result[0] += 0.7667493796526055;
                      result[1] += 0.23325062034739455;
                    } else {
                      result[0] += 0.9836065573770492;
                      result[1] += 0.01639344262295082;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                      result[0] += 0.9762845849802372;
                      result[1] += 0.023715415019762844;
                    } else {
                      result[0] += 0.6474164133738601;
                      result[1] += 0.3525835866261398;
                    }
                  } else {
                    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05921705067157745361) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.1696048632218845;
                      result[1] += 0.8303951367781155;
                    }
                  }
                }
              } else {
                if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1346227526664733887) ) ) {
                      result[0] += 0.13974231912784935;
                      result[1] += 0.8602576808721506;
                    } else {
                      result[0] += 0.010912698412698412;
                      result[1] += 0.9890873015873016;
                    }
                  }
                } else {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2243725359439849854) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1335144117474555969) ) ) {
                      result[0] += 0.35135135135135137;
                      result[1] += 0.6486486486486487;
                    } else {
                      result[0] += 0.9885057471264368;
                      result[1] += 0.011494252873563218;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1288257911801338196) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4268460869789123535) ) ) {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.356448739767074585) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2296152859926223755) ) ) {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3728417009115219116) ) ) {
                      result[0] += 0.8;
                      result[1] += 0.2;
                    } else {
                      result[0] += 0.9903846153846154;
                      result[1] += 0.009615384615384616;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.375662386417388916) ) ) {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2662752717733383179) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.999644558185825;
                      result[1] += 0.00035544181417501957;
                    }
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
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.02741967001929879189) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2984580099582672119) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2945583313703536987) ) ) {
              if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4521647095680236816) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3257523924112319946) ) ) {
                  if ( ( !(data[69].missing != -1) || (data[69].fvalue <= (float)0.81708487868309021) ) ) {
                    if ( ( !(data[70].missing != -1) || (data[70].fvalue <= (float)0.9430527091026306152) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2504337131977081299) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9646153846153847;
                      result[1] += 0.03538461538461538;
                    }
                  }
                } else {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3304320275783538818) ) ) {
                    if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8240614533424377441) ) ) {
                      result[0] += 0.9923273657289002;
                      result[1] += 0.0076726342710997444;
                    } else {
                      result[0] += 0.84;
                      result[1] += 0.16;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9783597886562347412) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2315779253840446472) ) ) {
                      result[0] += 0.3;
                      result[1] += 0.7;
                    } else {
                      result[0] += 0.9444444444444444;
                      result[1] += 0.05555555555555555;
                    }
                  } else {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3615049868822097778) ) ) {
                      result[0] += 0.986784140969163;
                      result[1] += 0.013215859030837005;
                    } else {
                      result[0] += 0.896551724137931;
                      result[1] += 0.10344827586206896;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3787812590599060059) ) ) {
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2945583313703536987) ) ) {
                  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2315779253840446472) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.18309859154929578;
                      result[1] += 0.8169014084507042;
                    }
                  }
                } else {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2945583313703536987) ) ) {
                    if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7507125139236450195) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.8947368421052632;
                      result[1] += 0.10526315789473684;
                    }
                  } else {
                    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7174687683582305908) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9512195121951219;
                      result[1] += 0.04878048780487805;
                    }
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3557280451059341431) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.25;
                      result[1] += 0.75;
                    }
                  } else {
                    if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.9100230038166046143) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2929984480142593384) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7852395772933959961) ) ) {
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
              if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7156386375427246094) ) ) {
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2326309755444526672) ) ) {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3065050989389419556) ) ) {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2852007895708084106) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8082610666751861572) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.34615384615384615;
                      result[1] += 0.6538461538461539;
                    }
                  }
                } else {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4075186997652053833) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7883518636226654053) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.5;
                      result[1] += 0.5;
                    }
                  }
                }
              } else {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3818887621164321899) ) ) {
                    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3071592897176742554) ) ) {
                      result[0] += 0.9935483870967742;
                      result[1] += 0.0064516129032258064;
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
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3335509002208709717) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4180718958377838135) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2345921769738197327) ) ) {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1380424797534942627) ) ) {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7860759496688842773) ) ) {
                      result[0] += 0.9130434782608695;
                      result[1] += 0.08695652173913043;
                    } else {
                      result[0] += 0.4;
                      result[1] += 0.6;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                } else {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3586165159940719604) ) ) {
                      result[0] += 0.0916030534351145;
                      result[1] += 0.9083969465648855;
                    } else {
                      result[0] += 0.8333333333333334;
                      result[1] += 0.16666666666666666;
                    }
                  } else {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1949382945895195007) ) ) {
                      result[0] += 0.4;
                      result[1] += 0.6;
                    } else {
                      result[0] += 0.010416666666666666;
                      result[1] += 0.9895833333333334;
                    }
                  }
                }
              } else {
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2368498146533966064) ) ) {
                  if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001769607421010732651) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1387960389256477356) ) ) {
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
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.211115323007106781) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3046966493129730225) ) ) {
                      result[0] += 0.875;
                      result[1] += 0.125;
                    } else {
                      result[0] += 0.42857142857142855;
                      result[1] += 0.5714285714285714;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2602400630712509155) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2992379516363143921) ) ) {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.2545454545454545;
                      result[1] += 0.7454545454545455;
                    }
                  } else {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7704465687274932861) ) ) {
                      result[0] += 0.7311827956989247;
                      result[1] += 0.26881720430107525;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3065050989389419556) ) ) {
                      result[0] += 0.48598130841121495;
                      result[1] += 0.514018691588785;
                    } else {
                      result[0] += 0.08045977011494253;
                      result[1] += 0.9195402298850575;
                    }
                  }
                }
              } else {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3787812590599060059) ) ) {
                      result[0] += 0.03125;
                      result[1] += 0.96875;
                    } else {
                      result[0] += 0.28;
                      result[1] += 0.72;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2617471963167190552) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.7750433981418609619) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[44].missing != -1) || (data[44].fvalue <= (float)6.353482604026794434e-06) ) ) {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.7251529991626739502) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)3.176741302013397217e-06) ) ) {
                      result[0] += 0.999038348774481;
                      result[1] += 0.0009616512255189398;
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
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7815771698951721191) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2557153552770614624) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7422067224979400635) ) ) {
          if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2403903007507324219) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3891927599906921387) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.9933518767356872559) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2039853483438491821) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.291439443826675415) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.813657611608505249) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                  if ( ( !(data[68].missing != -1) || (data[68].fvalue <= (float)0.8075178563594818115) ) ) {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3645502626895904541) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[69].missing != -1) || (data[69].fvalue <= (float)0.8193623125553131104) ) ) {
                      result[0] += 0.016666666666666666;
                      result[1] += 0.9833333333333333;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.7159542739391326904) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9943212757681836;
                      result[1] += 0.005678724231816414;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3787812590599060059) ) ) {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8072222769260406494) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.9728925526142120361) ) ) {
                      result[0] += 0.9990480723465016;
                      result[1] += 0.0009519276534983341;
                    } else {
                      result[0] += 0.9820627802690582;
                      result[1] += 0.017937219730941704;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3803411275148391724) ) ) {
                      result[0] += 0.8739793560314282;
                      result[1] += 0.12602064396857188;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.255566619336605072) ) ) {
        if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7193010449409484863) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[75].missing != -1) || (data[75].fvalue <= (float)6.749387830495834351e-05) ) ) {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04041793011128902435) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1314025372266769409) ) ) {
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
    if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001801235310267657042) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2768351733684539795) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2326309755444526672) ) ) {
                    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
                      result[0] += 0.8126259234385493;
                      result[1] += 0.18737407656145064;
                    } else {
                      result[0] += 0.9414893617021277;
                      result[1] += 0.05851063829787234;
                    }
                  } else {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                      result[0] += 0.9743589743589743;
                      result[1] += 0.02564102564102564;
                    } else {
                      result[0] += 0.9978738483345145;
                      result[1] += 0.002126151665485471;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2398738041520118713) ) ) {
                    if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7821848690509796143) ) ) {
                      result[0] += 0.9508196721311475;
                      result[1] += 0.04918032786885246;
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
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.291439443826675415) ) ) {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
                      result[0] += 0.6024096385542169;
                      result[1] += 0.39759036144578314;
                    } else {
                      result[0] += 0.9139072847682119;
                      result[1] += 0.08609271523178808;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511872798204421997) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.2989675849676132202) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9762435040831478;
                      result[1] += 0.023756495916852263;
                    }
                  }
                }
              } else {
                if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7842374145984649658) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2345921769738197327) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1357784420251846313) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3772213906049728394) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.8059701492537313;
                      result[1] += 0.19402985074626866;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.1396664753556251526) ) ) {
                  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.409673541784286499) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2384096980094909668) ) ) {
                      result[0] += 0.9752066115702479;
                      result[1] += 0.024793388429752067;
                    } else {
                      result[0] += 0.42857142857142855;
                      result[1] += 0.5714285714285714;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              } else {
                if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9765373766422271729) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2526977509260177612) ) ) {
                      result[0] += 0.8851351351351351;
                      result[1] += 0.11486486486486487;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.23658352229780802;
                      result[1] += 0.763416477702192;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1436370685696601868) ) ) {
          if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.9933518767356872559) ) ) {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04389595240354537964) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)3.175809979438781738e-06) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2738175839185714722) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8251364231109619141) ) ) {
                    if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001835393253713846207) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.999744702578504;
                      result[1] += 0.0002552974214960429;
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
            } else {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
                if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4517073631286621094) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.00177719752537086606) ) ) {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.370983615517616272) ) ) {
                      result[0] += 0.9906621392190152;
                      result[1] += 0.00933786078098472;
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
                if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8173351287841796875) ) ) {
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
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1576551869511604309) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3391178995370864868) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7138063609600067139) ) ) {
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2492138519883155823) ) ) {
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
            if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7741240859031677246) ) ) {
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
  if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7464606761932373047) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7667690515518188477) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.9095679819583892822) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3217779546976089478) ) ) {
      if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7432717978954315186) ) ) {
        if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
            if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.66775473952293396) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.228560328483581543) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2602400630712509155) ) ) {
                  if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.9063781797885894775) ) ) {
                    if ( ( !(data[68].missing != -1) || (data[68].fvalue <= (float)0.8148051202297210693) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.8333333333333334;
                      result[1] += 0.16666666666666666;
                    }
                  } else {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                      result[0] += 0.42857142857142855;
                      result[1] += 0.5714285714285714;
                    } else {
                      result[0] += 0.9607843137254902;
                      result[1] += 0.0392156862745098;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.249680154025554657) ) ) {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8873544037342071533) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001856900984421372414) ) ) {
                      result[0] += 0.9998479965951237;
                      result[1] += 0.00015200340487626923;
                    } else {
                      result[0] += 0.9865771812080537;
                      result[1] += 0.013422818791946308;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2368498146533966064) ) ) {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3788730651140213013) ) ) {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7889041304588317871) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9950248756218906;
                      result[1] += 0.004975124378109453;
                    }
                  } else {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8090462386608123779) ) ) {
                      result[0] += 0.8653846153846154;
                      result[1] += 0.1346153846153846;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2625041007995605469) ) ) {
                    if ( ( !(data[69].missing != -1) || (data[69].fvalue <= (float)0.8173135519027709961) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.7105263157894737;
                      result[1] += 0.2894736842105263;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3787812590599060059) ) ) {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7750433683395385742) ) ) {
                      result[0] += 0.8188736681887366;
                      result[1] += 0.1811263318112633;
                    } else {
                      result[0] += 0.9902120717781403;
                      result[1] += 0.009787928221859706;
                    }
                  }
                } else {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.09722222222222222;
                      result[1] += 0.9027777777777778;
                    }
                  } else {
                    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.11538461538461539;
                      result[1] += 0.8846153846153846;
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
            if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3586165159940719604) ) ) {
                if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.09034360200166702271) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1307562068104743958) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.914122849702835083) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2883205562829971313) ) ) {
                      result[0] += 0.9933774834437086;
                      result[1] += 0.006622516556291391;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001827803091146051884) ) ) {
                  if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7174687683582305908) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2542048841714859009) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.2222222222222222;
                      result[1] += 0.7777777777777778;
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
                if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3772213906049728394) ) ) {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9069767441860465;
                      result[1] += 0.09302325581395349;
                    }
                  }
                } else {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2235926017165184021) ) ) {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8868957757949829102) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.6666666666666666;
                      result[1] += 0.3333333333333333;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06770694628357887268) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
                if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7870718538761138916) ) ) {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3803411275148391724) ) ) {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2898804396390914917) ) ) {
                      result[0] += 0.9345549738219895;
                      result[1] += 0.06544502617801047;
                    } else {
                      result[0] += 0.7162162162162162;
                      result[1] += 0.28378378378378377;
                    }
                  } else {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7834094464778900146) ) ) {
                      result[0] += 0.9907407407407407;
                      result[1] += 0.009259259259259259;
                    } else {
                      result[0] += 0.7109577221742882;
                      result[1] += 0.28904227782571185;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2195075377821922302) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9938744257274119;
                      result[1] += 0.006125574272588055;
                    }
                  } else {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8887280821800231934) ) ) {
                      result[0] += 0.5;
                      result[1] += 0.5;
                    } else {
                      result[0] += 0.8478260869565217;
                      result[1] += 0.15217391304347827;
                    }
                  }
                }
              } else {
                if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7852395772933959961) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                    if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.9059231579303741455) ) ) {
                      result[0] += 0.8571428571428571;
                      result[1] += 0.14285714285714285;
                    } else {
                      result[0] += 0.9954337899543378;
                      result[1] += 0.0045662100456621;
                    }
                  } else {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3586165159940719604) ) ) {
                      result[0] += 0.09090909090909091;
                      result[1] += 0.9090909090909091;
                    } else {
                      result[0] += 0.33519553072625696;
                      result[1] += 0.664804469273743;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2278067693114280701) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.987891019172553;
                      result[1] += 0.012108980827447022;
                    }
                  } else {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3023577183485031128) ) ) {
                      result[0] += 0.20245398773006135;
                      result[1] += 0.7975460122699386;
                    } else {
                      result[0] += 0.549618320610687;
                      result[1] += 0.45038167938931295;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.813657611608505249) ) ) {
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
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.383395761251449585) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8191741108894348145) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.351395338773727417) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1516199931502342224) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2934302687644958496) ) ) {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3571722805500030518) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2303692102432250977) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3292691260576248169) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2813598960638046265) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2987119108438491821) ) ) {
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
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1531271114945411682) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)3.812834620475769043e-06) ) ) {
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3412828296422958374) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2768351733684539795) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3257523924112319946) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2883205562829971313) ) ) {
              if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7174687683582305908) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.24515543133020401) ) ) {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2326309755444526672) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2345921769738197327) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.017241379310344827;
                      result[1] += 0.9827586206896551;
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
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.24515543133020401) ) ) {
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
            if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7496495544910430908) ) ) {
              if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7183859944343566895) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3670839220285415649) ) ) {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1365320086479187012) ) ) {
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
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2594865113496780396) ) ) {
                if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4210875779390335083) ) ) {
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
            }
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2924157828092575073) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2945583313703536987) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2542048841714859009) ) ) {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2265996038913726807) ) ) {
                    if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7751695215702056885) ) ) {
                      result[0] += 0.6;
                      result[1] += 0.4;
                    } else {
                      result[0] += 0.9419191919191919;
                      result[1] += 0.05808080808080808;
                    }
                  } else {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3803411275148391724) ) ) {
                      result[0] += 0.9996272828922848;
                      result[1] += 0.0003727171077152441;
                    } else {
                      result[0] += 0.9851851851851852;
                      result[1] += 0.014814814814814815;
                    }
                  }
                } else {
                  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
                    if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7432717978954315186) ) ) {
                      result[0] += 0.9919901417128774;
                      result[1] += 0.008009858287122612;
                    } else {
                      result[0] += 0.8684531059683313;
                      result[1] += 0.1315468940316687;
                    }
                  } else {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3592728078365325928) ) ) {
                      result[0] += 0.8147956544231764;
                      result[1] += 0.18520434557682358;
                    } else {
                      result[0] += 0.5419501133786848;
                      result[1] += 0.4580498866213152;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511906176805496216) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7183859944343566895) ) ) {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3592728078365325928) ) ) {
                      result[0] += 0.8631921824104235;
                      result[1] += 0.13680781758957655;
                    } else {
                      result[0] += 0.6935724962630793;
                      result[1] += 0.3064275037369208;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                      result[0] += 0.9939024390243902;
                      result[1] += 0.006097560975609756;
                    } else {
                      result[0] += 0.7516059957173448;
                      result[1] += 0.24839400428265523;
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
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3234125673770904541) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.351395338773727417) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1070554032921791077) ) ) {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8243512511253356934) ) ) {
              if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.706625819206237793) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3241925090551376343) ) ) {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1339764222502708435) ) ) {
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
                  if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7156386375427246094) ) ) {
                    if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4517073631286621094) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2602400630712509155) ) ) {
                      result[0] += 0.9998214668285368;
                      result[1] += 0.00017853317146325788;
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
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4284365326166152954) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7676883339881896973) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3460290580987930298) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.409673541784286499) ) ) {
                if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4517073631286621094) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7406133711338043213) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7183859944343566895) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9982880899975544;
                      result[1] += 0.0017119100024455857;
                    }
                  }
                }
              } else {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3132751137018203735) ) ) {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.8285714285714286;
                      result[1] += 0.17142857142857143;
                    }
                  }
                } else {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.2959518879652023315) ) ) {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
                      result[0] += 0.9881889763779528;
                      result[1] += 0.011811023622047244;
                    } else {
                      result[0] += 0.9314285714285714;
                      result[1] += 0.06857142857142857;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.5289634146341463;
                      result[1] += 0.47103658536585363;
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
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8191741108894348145) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1552338525652885437) ) ) {
          if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.752838432788848877) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2851310521364212036) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.299465477466583252) ) ) {
                if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7746965885162353516) ) ) {
                  if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.9077455699443817139) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329528570175171) ) ) {
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
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3713338524103164673) ) ) {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2265996038913726807) ) ) {
                      result[0] += 0.9952830188679245;
                      result[1] += 0.0047169811320754715;
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
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7741240859031677246) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2345108762383460999) ) ) {
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
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.351395338773727417) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1449268683791160583) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8256098926067352295) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2368498146533966064) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2783422917127609253) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3550045043230056763) ) ) {
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
  if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7464606761932373047) ) ) {
    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2370446100831031799) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2768351733684539795) ) ) {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2924157828092575073) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
            if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8087992370128631592) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3741033822298049927) ) ) {
                if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7202161252498626709) ) ) {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3012284934520721436) ) ) {
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
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                  if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7147214412689208984) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.406010851263999939) ) ) {
                      result[0] += 0.6666666666666666;
                      result[1] += 0.3333333333333333;
                    } else {
                      result[0] += 0.9950248756218906;
                      result[1] += 0.004975124378109453;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3772213906049728394) ) ) {
                      result[0] += 0.9905362776025236;
                      result[1] += 0.00946372239747634;
                    } else {
                      result[0] += 0.9130434782608695;
                      result[1] += 0.08695652173913043;
                    }
                  } else {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
                      result[0] += 0.5697674418604651;
                      result[1] += 0.43023255813953487;
                    } else {
                      result[0] += 0.23684210526315788;
                      result[1] += 0.7631578947368421;
                    }
                  }
                }
              } else {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2228126600384712219) ) ) {
                      result[0] += 0.646481178396072;
                      result[1] += 0.353518821603928;
                    } else {
                      result[0] += 0.9191374663072777;
                      result[1] += 0.08086253369272237;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                      result[0] += 0.967032967032967;
                      result[1] += 0.03296703296703297;
                    } else {
                      result[0] += 0.2005813953488372;
                      result[1] += 0.7994186046511628;
                    }
                  }
                } else {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7796406149864196777) ) ) {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                      result[0] += 0.8975609756097561;
                      result[1] += 0.1024390243902439;
                    } else {
                      result[0] += 0.9965753424657534;
                      result[1] += 0.003424657534246575;
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
                }
              }
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.13797808438539505) ) ) {
                if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
                  if ( ( !(data[69].missing != -1) || (data[69].fvalue <= (float)0.8316618204116821289) ) ) {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2118952572345733643) ) ) {
                      result[0] += 0.9884205650764243;
                      result[1] += 0.01157943492357573;
                    } else {
                      result[0] += 0.996091339230611;
                      result[1] += 0.003908660769389015;
                    }
                  } else {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8090462386608123779) ) ) {
                      result[0] += 0.8222222222222222;
                      result[1] += 0.17777777777777778;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1320072859525680542) ) ) {
                      result[0] += 0.9921259842519685;
                      result[1] += 0.007874015748031496;
                    } else {
                      result[0] += 0.930635838150289;
                      result[1] += 0.06936416184971098;
                    }
                  } else {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8887280821800231934) ) ) {
                      result[0] += 0.83423814694173;
                      result[1] += 0.16576185305827;
                    } else {
                      result[0] += 0.9755784061696658;
                      result[1] += 0.02442159383033419;
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
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
        if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7202161252498626709) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.153880678117275238) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2272647097706794739) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3499511033296585083) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8243512511253356934) ) ) {
              if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.7159542739391326904) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.9738049209117889404) ) ) {
                  if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4517073631286621094) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7138063609600067139) ) ) {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3615049868822097778) ) ) {
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
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05494171613827347755) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3132751137018203735) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1335144117474555969) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3132751137018203735) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.286760672926902771) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9182058047493403;
                      result[1] += 0.08179419525065963;
                    }
                  } else {
                    if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001827803091146051884) ) ) {
                      result[0] += 0.15517241379310345;
                      result[1] += 0.8448275862068966;
                    } else {
                      result[0] += 0.47580645161290325;
                      result[1] += 0.5241935483870968;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
                  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                    if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.745397716760635376) ) ) {
                      result[0] += 0.09090909090909091;
                      result[1] += 0.9090909090909091;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.9742599427700042725) ) ) {
                      result[0] += 0.9937888198757764;
                      result[1] += 0.006211180124223602;
                    } else {
                      result[0] += 0.5;
                      result[1] += 0.5;
                    }
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1335144117474555969) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2383633330464363098) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.5;
                      result[1] += 0.5;
                    }
                  } else {
                    if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4521647095680236816) ) ) {
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
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7699212729930877686) ) ) {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3781191408634185791) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.9063781797885894775) ) ) {
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
                if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3557280451059341431) ) ) {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2922193855047225952) ) ) {
                      result[0] += 0.7;
                      result[1] += 0.3;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.993042677640914917) ) ) {
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
              if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
                if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3517352938652038574) ) ) {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.375662386417388916) ) ) {
                      result[0] += 0.2860635696821516;
                      result[1] += 0.7139364303178484;
                    } else {
                      result[0] += 0.07894736842105263;
                      result[1] += 0.9210526315789473;
                    }
                  } else {
                    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1275448575615882874) ) ) {
                      result[0] += 0.03257328990228013;
                      result[1] += 0.9674267100977199;
                    } else {
                      result[0] += 0.64;
                      result[1] += 0.36;
                    }
                  }
                }
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.291439443826675415) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.5333333333333333;
                      result[1] += 0.4666666666666667;
                    }
                  } else {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8868957757949829102) ) ) {
                      result[0] += 0.04;
                      result[1] += 0.96;
                    } else {
                      result[0] += 0.7;
                      result[1] += 0.3;
                    }
                  }
                } else {
                  if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.4854368932038835;
                      result[1] += 0.5145631067961165;
                    }
                  } else {
                    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
                      result[0] += 0.3333333333333333;
                      result[1] += 0.6666666666666666;
                    } else {
                      result[0] += 0.0228542407313357;
                      result[1] += 0.9771457592686643;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.7201941609382629395) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3499511033296585083) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2240921184420585632) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2496801465749740601) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                    if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7183859944343566895) ) ) {
                      result[0] += 0.7777777777777778;
                      result[1] += 0.2222222222222222;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7879869341850280762) ) ) {
                      result[0] += 0.03333333333333333;
                      result[1] += 0.9666666666666667;
                    } else {
                      result[0] += 0.391304347826087;
                      result[1] += 0.6086956521739131;
                    }
                  }
                } else {
                  if ( ( !(data[66].missing != -1) || (data[66].fvalue <= (float)3.600493073463439941e-06) ) ) {
                    if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001789847679901868105) ) ) {
                      result[0] += 0.9998800147410462;
                      result[1] += 0.00011998525895389995;
                    } else {
                      result[0] += 0.9982678583801011;
                      result[1] += 0.001732141619898843;
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
        if ( ( !(data[70].missing != -1) || (data[70].fvalue <= (float)0.9323469102382659912) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7693174183368682861) ) ) {
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
  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7815771698951721191) ) ) {
    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3919859081506729126) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
      if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7211333513259887695) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3024830818176269531) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3675650954246520996) ) ) {
          if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.09138808771967887878) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.9150352180004119873) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.97152748703956604) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2836239337921142578) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
                if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1098809279501438141) ) ) {
                  if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7174687683582305908) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2217715755105018616) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9999029992627944;
                      result[1] += 9.700073720560276e-05;
                    }
                  } else {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7805594503879547119) ) ) {
                      result[0] += 0.9998498836598364;
                      result[1] += 0.0001501163401636268;
                    } else {
                      result[0] += 0.9924715909090909;
                      result[1] += 0.007528409090909091;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              } else {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                  if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.153880678117275238) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889055609703063965) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1395496055483818054) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511906176805496216) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9221608747428819;
                      result[1] += 0.07783912525711811;
                    }
                  } else {
                    if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7738044559955596924) ) ) {
                      result[0] += 0.9726027397260274;
                      result[1] += 0.0273972602739726;
                    } else {
                      result[0] += 0.9983576642335766;
                      result[1] += 0.0016423357664233577;
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7695273160934448242) ) ) {
          if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7517754733562469482) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
              if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.02942376118153333664) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3382296711206436157) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2851344048976898193) ) ) {
                      result[0] += 0.1347517730496454;
                      result[1] += 0.8652482269503546;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7722851336002349854) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.0718954248366013;
                      result[1] += 0.9281045751633987;
                    }
                  }
                } else {
                  if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.6614157259464263916) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.8780487804878049;
                      result[1] += 0.12195121951219512;
                    }
                  }
                }
              } else {
                if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04765694402158260345) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
                    if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.00170508422888815403) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.981904012588513;
                      result[1] += 0.01809598741148702;
                    }
                  } else {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3487196117639541626) ) ) {
                      result[0] += 0.8126649076517151;
                      result[1] += 0.18733509234828497;
                    } else {
                      result[0] += 0.6396303901437371;
                      result[1] += 0.3603696098562628;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7560272812843322754) ) ) {
              if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.770910799503326416) ) ) {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3586165159940719604) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1539440527558326721) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2775887250900268555) ) ) {
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
              if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7496495544910430908) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[75].missing != -1) || (data[75].fvalue <= (float)6.353389471769332886e-05) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              } else {
                if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04389595240354537964) ) ) {
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
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7722851336002349854) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1964461356401443481) ) ) {
                if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3602202534675598145) ) ) {
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
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.24515543133020401) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2961181998252868652) ) ) {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3758573830127716064) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.925;
                      result[1] += 0.075;
                    }
                  } else {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3132903873920440674) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7869956493377685547) ) ) {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4075186997652053833) ) ) {
                      result[0] += 0.4166666666666667;
                      result[1] += 0.5833333333333334;
                    } else {
                      result[0] += 0.9428571428571428;
                      result[1] += 0.05714285714285714;
                    }
                  } else {
                    if ( ( !(data[50].missing != -1) || (data[50].fvalue <= (float)0.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                }
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2504337131977081299) ) ) {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1994618251919746399) ) ) {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.286760672926902771) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.2558139534883721;
                      result[1] += 0.7441860465116279;
                    }
                  } else {
                    if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001764542423188686371) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.058823529411764705;
                      result[1] += 0.9411764705882353;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1486023962497711182) ) ) {
                if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05935520492494106293) ) ) {
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
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
      if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7597486972808837891) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.419579729437828064) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3124951720237731934) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1335144117474555969) ) ) {
            if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.409673541784286499) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2293138951063156128) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2368498146533966064) ) ) {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3758573830127716064) ) ) {
                    if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9831081081081081;
                      result[1] += 0.016891891891891893;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2444018721580505371) ) ) {
                      result[0] += 0.6470588235294118;
                      result[1] += 0.35294117647058826;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2640112191438674927) ) ) {
                    if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.964692920446395874) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.24812030075187969;
                      result[1] += 0.7518796992481203;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2459089979529380798) ) ) {
                      result[0] += 0.7777777777777778;
                      result[1] += 0.2222222222222222;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2240921184420585632) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2240322604775428772) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.7159542739391326904) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3221242576837539673) ) ) {
                    if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
                      result[0] += 0.9994605585293995;
                      result[1] += 0.0005394414706004399;
                    } else {
                      result[0] += 0.9948124501197126;
                      result[1] += 0.0051875498802873106;
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
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
        if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3602202534675598145) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.682669907808303833) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.745397716760635376) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.781479179859161377) ) ) {
                if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3491162210702896118) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4173179715871810913) ) ) {
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7805598974227905273) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
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
              if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
                  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3298221677541732788) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                      result[0] += 0.9624521072796934;
                      result[1] += 0.037547892720306515;
                    } else {
                      result[0] += 0.5903263403263403;
                      result[1] += 0.40967365967365965;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3223552107810974121) ) ) {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7704465687274932861) ) ) {
                      result[0] += 0.960431654676259;
                      result[1] += 0.039568345323741004;
                    } else {
                      result[0] += 0.7432432432432432;
                      result[1] += 0.25675675675675674;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2945583313703536987) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2278067693114280701) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2898804396390914917) ) ) {
                      result[0] += 0.9557069846678024;
                      result[1] += 0.044293015332197615;
                    } else {
                      result[0] += 0.9947392497712717;
                      result[1] += 0.0052607502287282705;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2504337131977081299) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06770694628357887268) ) ) {
                      result[0] += 0.9107142857142857;
                      result[1] += 0.08928571428571429;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3144049495458602905) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7165536880493164062) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2345921769738197327) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                } else {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3547509759664535522) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9243697478991597;
                      result[1] += 0.07563025210084033;
                    }
                  }
                }
              } else {
                if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1335144117474555969) ) ) {
                    if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7920935750007629395) ) ) {
                      result[0] += 0.3333333333333333;
                      result[1] += 0.6666666666666666;
                    } else {
                      result[0] += 0.9264705882352942;
                      result[1] += 0.07352941176470588;
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
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.3829787234042553;
                      result[1] += 0.6170212765957447;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2738175839185714722) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1346198916435241699) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)6.353482604026794434e-06) ) ) {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
                      result[0] += 0.9836956521739131;
                      result[1] += 0.016304347826086956;
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
    }
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2924157828092575073) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7400808334350585938) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.813657611608505249) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3065050989389419556) ) ) {
                  if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7220484018325805664) ) ) {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7722855508327484131) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001830333145335316658) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.3333333333333333;
                      result[1] += 0.6666666666666666;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.286760672926902771) ) ) {
                      result[0] += 0.5;
                      result[1] += 0.5;
                    } else {
                      result[0] += 0.8095238095238095;
                      result[1] += 0.19047619047619047;
                    }
                  } else {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3257523924112319946) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.706625819206237793) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7614953219890594482) ) ) {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2103353813290596008) ) ) {
                      result[0] += 0.9909502262443439;
                      result[1] += 0.00904977375565611;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8155823647975921631) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9995711047117211;
                      result[1] += 0.0004288952882789045;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3397895544767379761) ) ) {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2232787013053894043) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9891041162227603;
                      result[1] += 0.010895883777239709;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.5137614678899083;
                      result[1] += 0.48623853211009177;
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
                      result[0] += 0.8241106719367589;
                      result[1] += 0.17588932806324112;
                    }
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3257523924112319946) ) ) {
                      result[0] += 0.977299880525687;
                      result[1] += 0.022700119474313024;
                    } else {
                      result[0] += 0.9976931949250288;
                      result[1] += 0.002306805074971165;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2421378418803215027) ) ) {
                      result[0] += 0.6015473887814313;
                      result[1] += 0.3984526112185687;
                    } else {
                      result[0] += 0.9444444444444444;
                      result[1] += 0.05555555555555555;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3571722805500030518) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3571722805500030518) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8267061412334442139) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.7562294304370880127) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7701291739940643311) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1539440527558326721) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2647681385278701782) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.351395338773727417) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3333409726619720459) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[74].missing != -1) || (data[74].fvalue <= (float)6.353249773383140564e-05) ) ) {
                  if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7475236356258392334) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1288257911801338196) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.999738192480888;
                      result[1] += 0.00026180751911194887;
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
    }
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001801235310267657042) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001787317683920264244) ) ) {
          if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4268460869789123535) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7870718538761138916) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511906176805496216) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
                      result[0] += 0.48695652173913045;
                      result[1] += 0.5130434782608696;
                    } else {
                      result[0] += 0.9365712214570496;
                      result[1] += 0.06342877854295034;
                    }
                  }
                } else {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2368498146533966064) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3132751137018203735) ) ) {
                      result[0] += 0.9879275653923542;
                      result[1] += 0.012072434607645875;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7907612323760986328) ) ) {
                      result[0] += 0.989010989010989;
                      result[1] += 0.01098901098901099;
                    } else {
                      result[0] += 0.9276315789473685;
                      result[1] += 0.07236842105263158;
                    }
                  }
                }
              } else {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 0.9917081260364843;
                      result[1] += 0.008291873963515755;
                    } else {
                      result[0] += 0.7062937062937062;
                      result[1] += 0.2937062937062937;
                    }
                  } else {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.5534743202416919;
                      result[1] += 0.44652567975830815;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2526977509260177612) ) ) {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1410567238926887512) ) ) {
                  if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.783373028039932251) ) ) {
                    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7165536880493164062) ) ) {
                      result[0] += 0.9808612440191388;
                      result[1] += 0.019138755980861243;
                    } else {
                      result[0] += 0.7183098591549296;
                      result[1] += 0.28169014084507044;
                    }
                  } else {
                    if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7745841145515441895) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4142822623252868652) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              } else {
                if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.66775473952293396) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2888428866863250732) ) ) {
                    if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4517073631286621094) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9994802964569776;
                      result[1] += 0.0005197035430224151;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              }
            }
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04964188672602176666) ) ) {
            if ( ( !(data[44].missing != -1) || (data[44].fvalue <= (float)4.658475518226623535e-06) ) ) {
              if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)6.351619958877563477e-06) ) ) {
                if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8257574141025543213) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2738175839185714722) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7860759496688842773) ) ) {
                      result[0] += 0.9998819455375413;
                      result[1] += 0.00011805446245868093;
                    } else {
                      result[0] += 0.9985146676568882;
                      result[1] += 0.0014853323431117712;
                    }
                  }
                } else {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1455703452229499817) ) ) {
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
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2549617886543273926) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9788148105144500732) ) ) {
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
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3017295151948928833) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1423501297831535339) ) ) {
      if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7401399314403533936) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3210727423429489136) ) ) {
          if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3180760592222213745) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7621722519397735596) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
                  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2781266868114471436) ) ) {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3195137530565261841) ) ) {
                      result[0] += 0.9999349868348341;
                      result[1] += 6.50131651659461e-05;
                    } else {
                      result[0] += 0.999039780521262;
                      result[1] += 0.0009602194787379973;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9504873294346978;
                      result[1] += 0.04951267056530215;
                    }
                  }
                } else {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8173351287841796875) ) ) {
                      result[0] += 0.8528988979396263;
                      result[1] += 0.14710110206037375;
                    } else {
                      result[0] += 0.6837209302325581;
                      result[1] += 0.31627906976744186;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
                if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8118190765380859375) ) ) {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3550073504447937012) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2609969824552536011) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.8901098901098901;
                      result[1] += 0.10989010989010989;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2195075377821922302) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3653041869401931763) ) ) {
                      result[0] += 0.8855421686746988;
                      result[1] += 0.1144578313253012;
                    } else {
                      result[0] += 0.45535714285714285;
                      result[1] += 0.5446428571428571;
                    }
                  }
                } else {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 0.9770114942528736;
                      result[1] += 0.022988505747126436;
                    } else {
                      result[0] += 0.15421686746987953;
                      result[1] += 0.8457831325301205;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2813598960638046265) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3292691260576248169) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2821168005466461182) ) ) {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3615049868822097778) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)3.176741302013397217e-06) ) ) {
                      result[0] += 0.9991902834008097;
                      result[1] += 0.0008097165991902834;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3241925090551376343) ) ) {
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2768351733684539795) ) ) {
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
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2647681385278701782) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8896431326866149902) ) ) {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4097034931182861328) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2134551405906677246) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.10810810810810811;
                      result[1] += 0.8918918918918919;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1478488296270370483) ) ) {
                if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4128185659646987915) ) ) {
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
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
        if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.6906501948833465576) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1433207616209983826) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2945583313703536987) ) ) {
                if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3803411275148391724) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[70].missing != -1) || (data[70].fvalue <= (float)0.9444200992584228516) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4127944409847259521) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.410533517599105835) ) ) {
                  if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9929390251636505127) ) ) {
                    if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.8046883940696716309) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.7142857142857143;
                      result[1] += 0.2857142857142857;
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
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
          if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.02942376118153333664) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2715568989515304565) ) ) {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05921705067157745361) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7817909121513366699) ) ) {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.9728925526142120361) ) ) {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                      result[0] += 0.7297297297297297;
                      result[1] += 0.2702702702702703;
                    } else {
                      result[0] += 0.9745454545454545;
                      result[1] += 0.025454545454545455;
                    }
                  } else {
                    if ( ( !(data[70].missing != -1) || (data[70].fvalue <= (float)0.9451014101505279541) ) ) {
                      result[0] += 0.8888888888888888;
                      result[1] += 0.1111111111111111;
                    } else {
                      result[0] += 0.16666666666666666;
                      result[1] += 0.8333333333333334;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1964461356401443481) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2180004119873046875) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2326301261782646179) ) ) {
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
            result[0] += 1;
            result[1] += 0;
          }
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
    

    FILE* file = fopen("./codegen/esa_3_months_global/split_2/test_data.csv", "r");
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
