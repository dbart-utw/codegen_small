
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
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7655960023403167725) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2436483129858970642) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05921705067157745361) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511906176805496216) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 0.9847715736040609;
                      result[1] += 0.015228426395939087;
                    } else {
                      result[0] += 0.918954248366013;
                      result[1] += 0.08104575163398693;
                    }
                  }
                }
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2492138519883155823) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.807361963190184;
                      result[1] += 0.19263803680981595;
                    }
                  } else {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9386503067484663;
                      result[1] += 0.06134969325153374;
                    }
                  }
                } else {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2945583313703536987) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2421378418803215027) ) ) {
                      result[0] += 0.38712871287128714;
                      result[1] += 0.6128712871287129;
                    } else {
                      result[0] += 0.9468599033816425;
                      result[1] += 0.05314009661835749;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.286760672926902771) ) ) {
                      result[0] += 0.13020833333333334;
                      result[1] += 0.8697916666666666;
                    } else {
                      result[0] += 0.4918032786885246;
                      result[1] += 0.5081967213114754;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[66].missing != -1) || (data[66].fvalue <= (float)3.177672624588012695e-06) ) ) {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8108993768692016602) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3499511033296585083) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)6.353482604026794434e-06) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2617471963167190552) ) ) {
                      result[0] += 0.4612794612794613;
                      result[1] += 0.5387205387205387;
                    } else {
                      result[0] += 0.9997865023751611;
                      result[1] += 0.00021349762483892368;
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
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7805594503879547119) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3009759485721588135) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8182544112205505371) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.375662386417388916) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8868957757949829102) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1493559554219245911) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1320431455969810486) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.813657611608505249) ) ) {
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
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
          if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8868957757949829102) ) ) {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3288721591234207153) ) ) {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2489265948534011841) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2202610969543457031) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2345921769738197327) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 0.896551724137931;
                      result[1] += 0.10344827586206896;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                }
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2306120544672012329) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.375662386417388916) ) ) {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3179547637701034546) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
                      result[0] += 0.22093023255813954;
                      result[1] += 0.7790697674418605;
                    } else {
                      result[0] += 0.625;
                      result[1] += 0.375;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4075186997652053833) ) ) {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8173351287841796875) ) ) {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.02702702702702703;
                      result[1] += 0.972972972972973;
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
                  if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.993042677640914917) ) ) {
                    if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9779047667980194092) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.85;
                      result[1] += 0.15;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.3269230769230769;
                      result[1] += 0.6730769230769231;
                    }
                  }
                }
              } else {
                if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8206702172756195068) ) ) {
                  if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.782581627368927002) ) ) {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1964461356401443481) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9824561403508771;
                      result[1] += 0.017543859649122806;
                    }
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
                  if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.9692477285861968994) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2391202449798583984) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9090909090909091;
                      result[1] += 0.09090909090909091;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3772213906049728394) ) ) {
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4045030027627944946) ) ) {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7852395772933959961) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3179547637701034546) ) ) {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
                      result[0] += 0.9979633401221996;
                      result[1] += 0.002036659877800407;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7792290151119232178) ) ) {
                      result[0] += 0.9913793103448276;
                      result[1] += 0.008620689655172414;
                    } else {
                      result[0] += 0.7;
                      result[1] += 0.3;
                    }
                  }
                }
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                  if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8240614533424377441) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.148147091269493103) ) ) {
                      result[0] += 0.9912854030501089;
                      result[1] += 0.008714596949891068;
                    } else {
                      result[0] += 0.782608695652174;
                      result[1] += 0.21739130434782608;
                    }
                  } else {
                    if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.9651479423046112061) ) ) {
                      result[0] += 0.3;
                      result[1] += 0.7;
                    } else {
                      result[0] += 0.9117647058823529;
                      result[1] += 0.08823529411764706;
                    }
                  }
                } else {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 0.9920318725099602;
                      result[1] += 0.00796812749003984;
                    } else {
                      result[0] += 0.6858638743455497;
                      result[1] += 0.31413612565445026;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3653041869401931763) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3042433261871337891) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.9161716103553771973) ) ) {
                  if ( ( !(data[50].missing != -1) || (data[50].fvalue <= (float)0.1432926803827285767) ) ) {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3117152303457260132) ) ) {
                      result[0] += 0.2857142857142857;
                      result[1] += 0.7142857142857143;
                    } else {
                      result[0] += 0.03278688524590164;
                      result[1] += 0.9672131147540983;
                    }
                  }
                } else {
                  if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4221533834934234619) ) ) {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3728417009115219116) ) ) {
                    if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9788148105144500732) ) ) {
                      result[0] += 0.9655172413793104;
                      result[1] += 0.034482758620689655;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 0.9906542056074766;
                      result[1] += 0.009345794392523364;
                    } else {
                      result[0] += 0.6075949367088608;
                      result[1] += 0.3924050632911392;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2009696662425994873) ) ) {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.2959518879652023315) ) ) {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7750433683395385742) ) ) {
                      result[0] += 0.23333333333333334;
                      result[1] += 0.7666666666666667;
                    } else {
                      result[0] += 0.9090909090909091;
                      result[1] += 0.09090909090909091;
                    }
                  } else {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3622884899377822876) ) ) {
                      result[0] += 0.07809523809523809;
                      result[1] += 0.9219047619047619;
                    } else {
                      result[0] += 0.3582089552238806;
                      result[1] += 0.6417910447761194;
                    }
                  }
                } else {
                  if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7459281384944915771) ) ) {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1380424797534942627) ) ) {
                      result[0] += 0.575;
                      result[1] += 0.425;
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
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3675650954246520996) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1070554032921791077) ) ) {
              if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.7201941609382629395) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)3.175809979438781738e-06) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1288257911801338196) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
                      result[0] += 0.9992961252553691;
                      result[1] += 0.0007038747446308091;
                    } else {
                      result[0] += 0.997821071520123;
                      result[1] += 0.0021789284798769547;
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
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7406133711338043213) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2883205562829971313) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1410567238926887512) ) ) {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3080129474401473999) ) ) {
                  if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001830333145335316658) ) ) {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3741033822298049927) ) ) {
                      result[0] += 0.9974489795918368;
                      result[1] += 0.002551020408163265;
                    } else {
                      result[0] += 0.970873786407767;
                      result[1] += 0.02912621359223301;
                    }
                  } else {
                    if ( ( !(data[70].missing != -1) || (data[70].fvalue <= (float)0.931663215160369873) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.8888888888888888;
                      result[1] += 0.1111111111111111;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2625041007995605469) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
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
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3195137530565261841) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1440743282437324524) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.66775473952293396) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2504337131977081299) ) ) {
                  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7870718538761138916) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.8571428571428571;
                      result[1] += 0.14285714285714285;
                    }
                  }
                } else {
                  if ( ( !(data[48].missing != -1) || (data[48].fvalue <= (float)0.2858231663703918457) ) ) {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7834094464778900146) ) ) {
                      result[0] += 0.9912663755458515;
                      result[1] += 0.008733624454148471;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[69].missing != -1) || (data[69].fvalue <= (float)0.8316618204116821289) ) ) {
                      result[0] += 0.9999854950538134;
                      result[1] += 1.4504946186649647e-05;
                    } else {
                      result[0] += 0.9996848408446265;
                      result[1] += 0.0003151591553734636;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2466625571250915527) ) ) {
            if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2250917553901672363) ) ) {
                  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7834094464778900146) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.43946188340807174;
                      result[1] += 0.5605381165919282;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2542048841714859009) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3818887621164321899) ) ) {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.0044444444444444444;
                      result[1] += 0.9955555555555555;
                    }
                  } else {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
                      result[0] += 0.8;
                      result[1] += 0.2;
                    } else {
                      result[0] += 0.015384615384615385;
                      result[1] += 0.9846153846153847;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3819010108709335327) ) ) {
                    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7147214412689208984) ) ) {
                      result[0] += 0.6091954022988506;
                      result[1] += 0.39080459770114945;
                    } else {
                      result[0] += 0.9220798794272795;
                      result[1] += 0.07792012057272042;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.13076923076923078;
                      result[1] += 0.8692307692307693;
                    }
                  }
                }
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3007978349924087524) ) ) {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3487196117639541626) ) ) {
                      result[0] += 0.9166666666666666;
                      result[1] += 0.08333333333333333;
                    } else {
                      result[0] += 0.6779661016949152;
                      result[1] += 0.3220338983050847;
                    }
                  } else {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.5836431226765799;
                      result[1] += 0.4163568773234201;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3140443116426467896) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                      result[0] += 0.5;
                      result[1] += 0.5;
                    } else {
                      result[0] += 0.007579346281383231;
                      result[1] += 0.9924206537186168;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)3.175809979438781738e-06) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3499511033296585083) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2542048841714859009) ) ) {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 0.8432835820895522;
                      result[1] += 0.15671641791044777;
                    } else {
                      result[0] += 0.22302158273381295;
                      result[1] += 0.7769784172661871;
                    }
                  } else {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.1380960345268249512) ) ) {
                      result[0] += 0.9997695144437615;
                      result[1] += 0.00023048555623847572;
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
        }
      }
    }
  }
  if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7666589617729187012) ) ) {
    if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001774667529389262199) ) ) {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.09138808771967887878) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7695273160934448242) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3721477985382080078) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511906176805496216) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1352662220597267151) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.7159542739391326904) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2526977509260177612) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3110286146402359009) ) ) {
                      result[0] += 0.9953639313861845;
                      result[1] += 0.004636068613815485;
                    } else {
                      result[0] += 0.9578947368421052;
                      result[1] += 0.042105263157894736;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
                      result[0] += 0.39267886855241263;
                      result[1] += 0.6073211314475874;
                    } else {
                      result[0] += 0.9416058394160584;
                      result[1] += 0.058394160583941604;
                    }
                  }
                } else {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2384096980094909668) ) ) {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
                      result[0] += 0.999937272613223;
                      result[1] += 6.272738677706687e-05;
                    } else {
                      result[0] += 0.9993513513513513;
                      result[1] += 0.0006486486486486486;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2640112191438674927) ) ) {
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1410631909966468811) ) ) {
            if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4316533952951431274) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7147214412689208984) ) ) {
                  if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8096472322940826416) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.41935483870967744;
                      result[1] += 0.5806451612903226;
                    }
                  } else {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3772213906049728394) ) ) {
                      result[0] += 0.6666666666666666;
                      result[1] += 0.3333333333333333;
                    } else {
                      result[0] += 0.9769230769230769;
                      result[1] += 0.023076923076923078;
                    }
                  }
                } else {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                      result[0] += 0.9044117647058824;
                      result[1] += 0.09558823529411764;
                    } else {
                      result[0] += 0.9909584086799277;
                      result[1] += 0.009041591320072333;
                    }
                  }
                }
              } else {
                if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2368498146533966064) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9575971731448764;
                      result[1] += 0.04240282685512368;
                    }
                  }
                } else {
                  if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.6455566905005107;
                      result[1] += 0.35444330949948927;
                    }
                  } else {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8868957757949829102) ) ) {
                      result[0] += 0.13109756097560976;
                      result[1] += 0.8689024390243902;
                    } else {
                      result[0] += 0.37264833574529665;
                      result[1] += 0.6273516642547033;
                    }
                  }
                }
              }
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2534513175487518311) ) ) {
              if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8868957757949829102) ) ) {
                if ( ( !(data[69].missing != -1) || (data[69].fvalue <= (float)0.8157174885272979736) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2504337131977081299) ) ) {
                      result[0] += 0.017921146953405017;
                      result[1] += 0.982078853046595;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7174687683582305908) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2542048841714859009) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.31016042780748665;
                      result[1] += 0.6898395721925134;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7193010449409484863) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)1.884996891021728516e-05) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8251364529132843018) ) ) {
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
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001820213044993579388) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
          if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
            if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8232134878635406494) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1320072859525680542) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7852395772933959961) ) ) {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3110286146402359009) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.249680154025554657) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9857142857142858;
                      result[1] += 0.014285714285714285;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2308243587613105774) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.291439443826675415) ) ) {
                      result[0] += 0.9994093325457767;
                      result[1] += 0.0005906674542232723;
                    } else {
                      result[0] += 0.9771863117870723;
                      result[1] += 0.022813688212927757;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2898804396390914917) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              } else {
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2326309755444526672) ) ) {
                  if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7742729485034942627) ) ) {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
                      result[0] += 0.5;
                      result[1] += 0.5;
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
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1320072859525680542) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.9656029343605041504) ) ) {
                    if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9888368546962738037) ) ) {
                      result[0] += 0.940625;
                      result[1] += 0.059375;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
                      result[0] += 0.9227799227799228;
                      result[1] += 0.07722007722007722;
                    } else {
                      result[0] += 0.993876589731512;
                      result[1] += 0.006123410268487989;
                    }
                  }
                }
              } else {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1964461356401443481) ) ) {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3571722805500030518) ) ) {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4112874418497085571) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.25;
                      result[1] += 0.75;
                    }
                  } else {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4090265333652496338) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.27586206896551724;
                      result[1] += 0.7241379310344828;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2376131191849708557) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3571722805500030518) ) ) {
                      result[0] += 0.7904761904761904;
                      result[1] += 0.20952380952380953;
                    } else {
                      result[0] += 0.16;
                      result[1] += 0.84;
                    }
                  } else {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2243725359439849854) ) ) {
                      result[0] += 0.6666666666666666;
                      result[1] += 0.3333333333333333;
                    } else {
                      result[0] += 0.012269938650306749;
                      result[1] += 0.9877300613496932;
                    }
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
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
              if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7898192107677459717) ) ) {
                if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7215897738933563232) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7778339087963104248) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
                      result[0] += 0.375;
                      result[1] += 0.625;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                }
              } else {
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.335110783576965332) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              }
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1979539841413497925) ) ) {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                  if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9949901103973388672) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.140416853129863739) ) ) {
                      result[0] += 0.9970059880239521;
                      result[1] += 0.0029940119760479044;
                    } else {
                      result[0] += 0.5789473684210527;
                      result[1] += 0.42105263157894735;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                } else {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4075186997652053833) ) ) {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2326309755444526672) ) ) {
                      result[0] += 0.09333333333333334;
                      result[1] += 0.9066666666666666;
                    } else {
                      result[0] += 0.013937282229965157;
                      result[1] += 0.9860627177700348;
                    }
                  } else {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2296152859926223755) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.49019607843137253;
                      result[1] += 0.5098039215686274;
                    }
                  }
                }
              } else {
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2945583313703536987) ) ) {
                  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2924157828092575073) ) ) {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1380424797534942627) ) ) {
                      result[0] += 0.937636761487965;
                      result[1] += 0.06236323851203501;
                    } else {
                      result[0] += 0.7009345794392523;
                      result[1] += 0.29906542056074764;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8868957757949829102) ) ) {
                      result[0] += 0.5370370370370371;
                      result[1] += 0.46296296296296297;
                    } else {
                      result[0] += 0.9830508474576272;
                      result[1] += 0.01694915254237288;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.22627737226277372;
                      result[1] += 0.7737226277372263;
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
          if ( ( !(data[75].missing != -1) || (data[75].fvalue <= (float)6.34482712484896183e-05) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2692928612232208252) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1410567238926887512) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2481730207800865173) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  result[0] += 1;
                  result[1] += 0;
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
              if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1042889803647994995) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2489265874028205872) ) ) {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2924157828092575073) ) ) {
                      result[0] += 0.865546218487395;
                      result[1] += 0.13445378151260504;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.6856892406940460205) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3434506207704544067) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9998686234051268;
                      result[1] += 0.0001313765948732216;
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
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7165536880493164062) ) ) {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                  result[0] += 1;
                  result[1] += 0;
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
                if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05169589631259441376) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2961181998252868652) ) ) {
                      result[0] += 0.9317073170731708;
                      result[1] += 0.06829268292682927;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3132751137018203735) ) ) {
                      result[0] += 0.9658176943699732;
                      result[1] += 0.03418230563002681;
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
              if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7870718538761138916) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2602400630712509155) ) ) {
                    if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
                      result[0] += 0.6666666666666666;
                      result[1] += 0.3333333333333333;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
                      result[0] += 0.25;
                      result[1] += 0.75;
                    } else {
                      result[0] += 0.7647058823529411;
                      result[1] += 0.23529411764705882;
                    }
                  }
                } else {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.291439443826675415) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1335144117474555969) ) ) {
                      result[0] += 0.25;
                      result[1] += 0.75;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2274922952055931091) ) ) {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8066920638084411621) ) ) {
                    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7183859944343566895) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[69].missing != -1) || (data[69].fvalue <= (float)0.8211847245693206787) ) ) {
                      result[0] += 0.8888888888888888;
                      result[1] += 0.1111111111111111;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.778384476900100708) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2602400630712509155) ) ) {
                      result[0] += 0.05228758169934641;
                      result[1] += 0.9477124183006536;
                    } else {
                      result[0] += 0.75;
                      result[1] += 0.25;
                    }
                  } else {
                    if ( ( !(data[49].missing != -1) || (data[49].fvalue <= (float)0.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.40476190476190477;
                      result[1] += 0.5952380952380952;
                    }
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3132751137018203735) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7174687683582305908) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2625041007995605469) ) ) {
                    if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7677219212055206299) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.02832244008714597;
                      result[1] += 0.971677559912854;
                    }
                  } else {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2386606484651565552) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.8333333333333334;
                      result[1] += 0.16666666666666666;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001755689794663339853) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3499511033296585083) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3864005208015441895) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[44].missing != -1) || (data[44].fvalue <= (float)3.175809979438781738e-06) ) ) {
                if ( ( !(data[66].missing != -1) || (data[66].fvalue <= (float)3.600493073463439941e-06) ) ) {
                  if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4517073631286621094) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1339764222502708435) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.999451361689806;
                      result[1] += 0.0005486383101940047;
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
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
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
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3681567758321762085) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7032242417335510254) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511906176805496216) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3080129474401473999) ) ) {
                if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.9756250083446502686) ) ) {
                  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8887280821800231934) ) ) {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2852007895708084106) ) ) {
                      result[0] += 0.14285714285714285;
                      result[1] += 0.8571428571428571;
                    } else {
                      result[0] += 0.9910485933503836;
                      result[1] += 0.008951406649616368;
                    }
                  } else {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3065050989389419556) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9733333333333334;
                      result[1] += 0.02666666666666667;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2398771569132804871) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              } else {
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
                  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3592728078365325928) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.1643835616438356;
                      result[1] += 0.8356164383561644;
                    }
                  } else {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3562579751014709473) ) ) {
                      result[0] += 0.3503184713375796;
                      result[1] += 0.6496815286624203;
                    } else {
                      result[0] += 0.8853503184713376;
                      result[1] += 0.11464968152866242;
                    }
                  }
                } else {
                  if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4523910582065582275) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9154411764705882;
                      result[1] += 0.08455882352941177;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3148349970579147339) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3132751137018203735) ) ) {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2929984480142593384) ) ) {
                      result[0] += 0.8333333333333334;
                      result[1] += 0.16666666666666666;
                    } else {
                      result[0] += 0.9908814589665653;
                      result[1] += 0.00911854103343465;
                    }
                  }
                } else {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2929984480142593384) ) ) {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8864393234252929688) ) ) {
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
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1979539841413497925) ) ) {
                  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
                      result[0] += 0.048507462686567165;
                      result[1] += 0.9514925373134329;
                    } else {
                      result[0] += 0.625;
                      result[1] += 0.375;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.8714859437751004;
                      result[1] += 0.1285140562248996;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
                  if ( ( !(data[63].missing != -1) || (data[63].fvalue <= (float)0.9962597787380218506) ) ) {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.20075757575757575;
                      result[1] += 0.7992424242424242;
                    }
                  } else {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3366697877645492554) ) ) {
                      result[0] += 0.05226480836236934;
                      result[1] += 0.9477351916376306;
                    } else {
                      result[0] += 0.5571428571428572;
                      result[1] += 0.44285714285714284;
                    }
                  }
                } else {
                  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
                    if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9933940470218658447) ) ) {
                      result[0] += 0.001195457262402869;
                      result[1] += 0.9988045427375971;
                    } else {
                      result[0] += 0.03225806451612903;
                      result[1] += 0.967741935483871;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2421378418803215027) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8868957757949829102) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2883205562829971313) ) ) {
                      result[0] += 0.6896551724137931;
                      result[1] += 0.3103448275862069;
                    } else {
                      result[0] += 0.12790697674418605;
                      result[1] += 0.872093023255814;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8247438669204711914) ) ) {
            if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)6.353482604026794434e-06) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1486023962497711182) ) ) {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9996128532713898;
                      result[1] += 0.00038714672861014324;
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
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4158186167478561401) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1380424797534942627) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
            if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7775399684906005859) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.419579729437828064) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8137560188770294189) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511906176805496216) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
                if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.375662386417388916) ) ) {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.291439443826675415) ) ) {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
                      result[0] += 0.18181818181818182;
                      result[1] += 0.8181818181818182;
                    } else {
                      result[0] += 0.84;
                      result[1] += 0.16;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 0.9972875226039783;
                      result[1] += 0.0027124773960217;
                    } else {
                      result[0] += 0.9537671232876712;
                      result[1] += 0.046232876712328765;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                    if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4521647095680236816) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9725291131681099;
                      result[1] += 0.027470886831890116;
                    }
                  } else {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                      result[0] += 0.06042884990253411;
                      result[1] += 0.9395711500974658;
                    } else {
                      result[0] += 0.7075645756457565;
                      result[1] += 0.2924354243542435;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2617471963167190552) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2406273633241653442) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7138063609600067139) ) ) {
                      result[0] += 0.9982181040627227;
                      result[1] += 0.001781895937277263;
                    } else {
                      result[0] += 0.9998729782369379;
                      result[1] += 0.0001270217630620713;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7768823504447937012) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3171739280223846436) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1384864374995231628) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7406133711338043213) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7805594503879547119) ) ) {
                      result[0] += 0.9999391690492122;
                      result[1] += 6.083095078776081e-05;
                    } else {
                      result[0] += 0.9865418373317729;
                      result[1] += 0.013458162668227034;
                    }
                  }
                }
              }
            } else {
              result[0] += 0;
              result[1] += 1;
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
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7156386375427246094) ) ) {
                      result[0] += 0.07692307692307693;
                      result[1] += 0.9230769230769231;
                    } else {
                      result[0] += 0.9827586206896551;
                      result[1] += 0.017241379310344827;
                    }
                  } else {
                    if ( ( !(data[70].missing != -1) || (data[70].fvalue <= (float)0.949429929256439209) ) ) {
                      result[0] += 0.011764705882352941;
                      result[1] += 0.9882352941176471;
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
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.287395089864730835) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04389595240354537964) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4158101379871368408) ) ) {
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
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3499511033296585083) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3919859081506729126) ) ) {
        if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7165536880493164062) ) ) {
          if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7699392139911651611) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8118190765380859375) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7612525224685668945) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3857998400926589966) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)3.390014171600341797e-06) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1288257911801338196) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[74].missing != -1) || (data[74].fvalue <= (float)6.344821304082870483e-05) ) ) {
              if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3180760592222213745) ) ) {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1455847993493080139) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              } else {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1516199931502342224) ) ) {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2929984480142593384) ) ) {
                    if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001816415460780262947) ) ) {
                      result[0] += 0.9960369881109643;
                      result[1] += 0.003963011889035667;
                    } else {
                      result[0] += 0.3333333333333333;
                      result[1] += 0.6666666666666666;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2851310521364212036) ) ) {
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
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7787209153175354004) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8154961466789245605) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4135483652353286743) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7133585810661315918) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7962311208248138428) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3292691260576248169) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7805594503879547119) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.406010851263999939) ) ) {
                if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7948486506938934326) ) ) {
                  if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9963551759719848633) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.148147091269493103) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.5;
                      result[1] += 0.5;
                    }
                  } else {
                    if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7770425081253051758) ) ) {
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
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2474194690585136414) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2526977509260177612) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3741033822298049927) ) ) {
                    if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9752066115702479;
                      result[1] += 0.024793388429752067;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2376131191849708557) ) ) {
                      result[0] += 0.9733333333333334;
                      result[1] += 0.02666666666666667;
                    } else {
                      result[0] += 0.2692307692307692;
                      result[1] += 0.7307692307692307;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2557153552770614624) ) ) {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9375;
                      result[1] += 0.0625;
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
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7713658511638641357) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8168953955173492432) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[69].missing != -1) || (data[69].fvalue <= (float)0.8257395923137664795) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.02564102564102564;
                      result[1] += 0.9743589743589743;
                    }
                  }
                } else {
                  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2345921769738197327) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.025390625;
                      result[1] += 0.974609375;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.680188679245283;
                      result[1] += 0.31981132075471697;
                    }
                  }
                }
              } else {
                if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3144049495458602905) ) ) {
                  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05921705067157745361) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3773652166128158569) ) ) {
                      result[0] += 0.950118363205952;
                      result[1] += 0.04988163679404802;
                    } else {
                      result[0] += 0.7930341594105828;
                      result[1] += 0.20696584058941728;
                    }
                  }
                } else {
                  if ( ( !(data[68].missing != -1) || (data[68].fvalue <= (float)0.8066054880619049072) ) ) {
                    if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.800400853157043457) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[74].missing != -1) || (data[74].fvalue <= (float)6.342725828289985657e-05) ) ) {
                      result[0] += 0.9990434283527836;
                      result[1] += 0.0009565716472163765;
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
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3217779546976089478) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3004745692014694214) ) ) {
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
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3132751137018203735) ) ) {
          if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.7201941609382629395) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1979539841413497925) ) ) {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.375662386417388916) ) ) {
                      result[0] += 0.8615384615384616;
                      result[1] += 0.13846153846153847;
                    } else {
                      result[0] += 0.6129032258064516;
                      result[1] += 0.3870967741935484;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9014084507042254;
                      result[1] += 0.09859154929577464;
                    }
                  }
                } else {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.406010851263999939) ) ) {
                      result[0] += 0.5535714285714286;
                      result[1] += 0.44642857142857145;
                    } else {
                      result[0] += 0.9420289855072463;
                      result[1] += 0.057971014492753624;
                    }
                  } else {
                    if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4517073631286621094) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9996287093365321;
                      result[1] += 0.0003712906634678548;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4519360363483428955) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.266275256872177124) ) ) {
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3335509002208709717) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511906176805496216) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.843209229155742;
                      result[1] += 0.156790770844258;
                    }
                  } else {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3758573830127716064) ) ) {
                      result[0] += 0.9964912280701754;
                      result[1] += 0.0035087719298245615;
                    } else {
                      result[0] += 0.9215686274509803;
                      result[1] += 0.0784313725490196;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2293138951063156128) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.90334008097166;
                      result[1] += 0.09665991902834008;
                    }
                  } else {
                    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
                      result[0] += 0.7837837837837838;
                      result[1] += 0.21621621621621623;
                    } else {
                      result[0] += 0.13601741022850924;
                      result[1] += 0.8639825897714908;
                    }
                  }
                }
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2489265874028205872) ) ) {
                  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7870718538761138916) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
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
                  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2924823611974716187) ) ) {
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
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3517352938652038574) ) ) {
            if ( ( !(data[69].missing != -1) || (data[69].fvalue <= (float)0.8220947682857513428) ) ) {
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
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.287395089864730835) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1539440527558326721) ) ) {
          if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)6.351619958877563477e-06) ) ) {
            if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001789847679901868105) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1346198916435241699) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2889022082090377808) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7193010449409484863) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3472117632627487183) ) ) {
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
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2768351733684539795) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.786156773567199707) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3818887621164321899) ) ) {
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3257523924112319946) ) ) {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3110286146402359009) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
                      result[0] += 0.8673469387755102;
                      result[1] += 0.1326530612244898;
                    } else {
                      result[0] += 0.39097744360902253;
                      result[1] += 0.6090225563909775;
                    }
                  }
                } else {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1994618251919746399) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.625;
                      result[1] += 0.375;
                    }
                  }
                }
              } else {
                if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7188424468040466309) ) ) {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1350248828530311584) ) ) {
                      result[0] += 0.4473684210526316;
                      result[1] += 0.5526315789473685;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2945583313703536987) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
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
              if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8173351287841796875) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
                      result[0] += 0.24705882352941178;
                      result[1] += 0.7529411764705882;
                    } else {
                      result[0] += 0.9487179487179487;
                      result[1] += 0.05128205128205128;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                }
              } else {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3758573830127716064) ) ) {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3163948804140090942) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.90625;
                      result[1] += 0.09375;
                    }
                  }
                } else {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7799176275730133057) ) ) {
                      result[0] += 0.14285714285714285;
                      result[1] += 0.8571428571428571;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7147214412689208984) ) ) {
              if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9838270246982574463) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3132751137018203735) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2270498573780059814) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1335144117474555969) ) ) {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3532431274652481079) ) ) {
                      result[0] += 0.9777777777777777;
                      result[1] += 0.022222222222222223;
                    } else {
                      result[0] += 0.8289473684210527;
                      result[1] += 0.17105263157894737;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9897304236200257;
                      result[1] += 0.010269576379974325;
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
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
          if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.409673541784286499) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2368498146533966064) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.9653742611408233643) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
                    if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7687848806381225586) ) ) {
                      result[0] += 0.8108108108108109;
                      result[1] += 0.1891891891891892;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3335509002208709717) ) ) {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2326309755444526672) ) ) {
                      result[0] += 0.035;
                      result[1] += 0.965;
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
                if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7852395772933959961) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.375662386417388916) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2534513175487518311) ) ) {
                      result[0] += 0.7333333333333333;
                      result[1] += 0.26666666666666666;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7733173072338104248) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.979253112033195;
                      result[1] += 0.02074688796680498;
                    }
                  }
                } else {
                  if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.8571428571428571;
                      result[1] += 0.14285714285714285;
                    }
                  } else {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
                      result[0] += 0.9879518072289156;
                      result[1] += 0.012048192771084338;
                    } else {
                      result[0] += 0.4945054945054945;
                      result[1] += 0.5054945054945055;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3772213906049728394) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7895565629005432129) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.375662386417388916) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8868957757949829102) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2542048841714859009) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2352908104658126831) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.42857142857142855;
                      result[1] += 0.5714285714285714;
                    }
                  }
                } else {
                  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8868957757949829102) ) ) {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.09090909090909091;
                      result[1] += 0.9090909090909091;
                    }
                  } else {
                    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05169589631259441376) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.8780487804878049;
                      result[1] += 0.12195121951219512;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
              if ( ( !(data[48].missing != -1) || (data[48].fvalue <= (float)0.9291158616542816162) ) ) {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1320072859525680542) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2235839143395423889) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2421378344297409058) ) ) {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3586165159940719604) ) ) {
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
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2212536633014678955) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2961181998252868652) ) ) {
                    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7174687683582305908) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7183859944343566895) ) ) {
                      result[0] += 0.20224719101123595;
                      result[1] += 0.797752808988764;
                    } else {
                      result[0] += 0.008830022075055188;
                      result[1] += 0.9911699779249448;
                    }
                  }
                }
              } else {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3054766058921813965) ) ) {
                      result[0] += 0.008064516129032258;
                      result[1] += 0.9919354838709677;
                    } else {
                      result[0] += 0.41935483870967744;
                      result[1] += 0.5806451612903226;
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
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2984580099582672119) ) ) {
          if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.6776489615440368652) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8251364529132843018) ) ) {
              if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.782492220401763916) ) ) {
                if ( ( !(data[50].missing != -1) || (data[50].fvalue <= (float)0.357469514012336731) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3163948804140090942) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                } else {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.291439443826675415) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.08144672960042953491) ) ) {
                      result[0] += 0.75;
                      result[1] += 0.25;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.282870367169380188) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9986348122866894;
                      result[1] += 0.0013651877133105802;
                    }
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3195137530565261841) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9998621830209482;
                      result[1] += 0.0001378169790518192;
                    }
                  }
                } else {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1339764222502708435) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[50].missing != -1) || (data[50].fvalue <= (float)0.1432926803827285767) ) ) {
                      result[0] += 0.9988425925925926;
                      result[1] += 0.0011574074074074073;
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
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7805594503879547119) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2881519943475723267) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
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
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
        if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3179547637701034546) ) ) {
                  if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.9651479423046112061) ) ) {
                    if ( ( !(data[50].missing != -1) || (data[50].fvalue <= (float)0.5) ) ) {
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
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.215015023946762085) ) ) {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3592728078365325928) ) ) {
                      result[0] += 0.6216216216216216;
                      result[1] += 0.3783783783783784;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7794167101383209229) ) ) {
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
              if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.752838432788848877) ) ) {
                if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7156386375427246094) ) ) {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                    if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9779047667980194092) ) ) {
                      result[0] += 0.5;
                      result[1] += 0.5;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3179547637701034546) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.48;
                      result[1] += 0.52;
                    }
                  }
                } else {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2961181998252868652) ) ) {
                    if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7873700261116027832) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.986562150055991;
                      result[1] += 0.013437849944008958;
                    }
                  } else {
                    if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001830333145335316658) ) ) {
                      result[0] += 0.8275862068965517;
                      result[1] += 0.1724137931034483;
                    } else {
                      result[0] += 0.14285714285714285;
                      result[1] += 0.8571428571428571;
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
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
                    if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001827803091146051884) ) ) {
                      result[0] += 0.2916666666666667;
                      result[1] += 0.7083333333333334;
                    } else {
                      result[0] += 0.84;
                      result[1] += 0.16;
                    }
                  } else {
                    if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7610730528831481934) ) ) {
                      result[0] += 1;
                      result[1] += 0;
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
                  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                    if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8096472322940826416) ) ) {
                      result[0] += 0.21621621621621623;
                      result[1] += 0.7837837837837838;
                    } else {
                      result[0] += 0.006329113924050633;
                      result[1] += 0.9936708860759493;
                    }
                  } else {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
                      result[0] += 0.6065259117082533;
                      result[1] += 0.3934740882917466;
                    } else {
                      result[0] += 0.21212121212121213;
                      result[1] += 0.7878787878787878;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3319918960332870483) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3125364631414413452) ) ) {
                  if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8240614533424377441) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3065050989389419556) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511906176805496216) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2376131191849708557) ) ) {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3085954785346984863) ) ) {
                      result[0] += 0.961576354679803;
                      result[1] += 0.03842364532019704;
                    } else {
                      result[0] += 0.8112449799196787;
                      result[1] += 0.18875502008032127;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3101553469896316528) ) ) {
                      result[0] += 0.07692307692307693;
                      result[1] += 0.9230769230769231;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2243725359439849854) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3110286146402359009) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7188424468040466309) ) ) {
                  if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8087992370128631592) ) ) {
                    if ( ( !(data[48].missing != -1) || (data[48].fvalue <= (float)0.9291158616542816162) ) ) {
                      result[0] += 0.8888888888888888;
                      result[1] += 0.1111111111111111;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9890655577182769775) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2391202449798583984) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.257976040244102478) ) ) {
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
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.7537131011486053467) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1070554032921791077) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7713658511638641357) ) ) {
                if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.8161026239395141602) ) ) {
                  if ( ( !(data[44].missing != -1) || (data[44].fvalue <= (float)3.175809979438781738e-06) ) ) {
                    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)3.175809979438781738e-06) ) ) {
                      result[0] += 0.9994000815889039;
                      result[1] += 0.0005999184110960909;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                } else {
                  if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7711080312728881836) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              } else {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1436370685696601868) ) ) {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1478488370776176453) ) ) {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7851566672325134277) ) ) {
                      result[0] += 0.4117647058823529;
                      result[1] += 0.5882352941176471;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3101553469896316528) ) ) {
                      result[0] += 0.98125;
                      result[1] += 0.01875;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1508630812168121338) ) ) {
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
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001822743099182844162) ) ) {
      if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
        if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3948851674795150757) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3571722805500030518) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2924157828092575073) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7612525224685668945) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3065050989389419556) ) ) {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2345955222845077515) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2852007895708084106) ) ) {
                      result[0] += 0.8873239436619719;
                      result[1] += 0.11267605633802817;
                    } else {
                      result[0] += 0.9984880556395525;
                      result[1] += 0.0015119443604475356;
                    }
                  }
                } else {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8173351287841796875) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                      result[0] += 0.9172821270310192;
                      result[1] += 0.0827178729689808;
                    } else {
                      result[0] += 0.5340501792114696;
                      result[1] += 0.4659498207885305;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
                      result[0] += 0.6292134831460674;
                      result[1] += 0.3707865168539326;
                    } else {
                      result[0] += 0.24253731343283583;
                      result[1] += 0.7574626865671642;
                    }
                  }
                }
              } else {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.13797808438539505) ) ) {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4075186997652053833) ) ) {
                      result[0] += 0.875;
                      result[1] += 0.125;
                    } else {
                      result[0] += 0.5038461538461538;
                      result[1] += 0.49615384615384617;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                      result[0] += 0.9117647058823529;
                      result[1] += 0.08823529411764706;
                    } else {
                      result[0] += 0.39590443686006827;
                      result[1] += 0.6040955631399317;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2738175839185714722) ) ) {
                if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2723104506731033325) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1371966376900672913) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.99609375;
                      result[1] += 0.00390625;
                    }
                  } else {
                    if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7491170167922973633) ) ) {
                      result[0] += 0.9958540630182421;
                      result[1] += 0.0041459369817578775;
                    } else {
                      result[0] += 0.85;
                      result[1] += 0.15;
                    }
                  }
                } else {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.286760672926902771) ) ) {
                    if ( ( !(data[69].missing != -1) || (data[69].fvalue <= (float)0.8307518064975738525) ) ) {
                      result[0] += 0.7419354838709677;
                      result[1] += 0.25806451612903225;
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
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1301127299666404724) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2103353813290596008) ) ) {
                    if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9965838491916656494) ) ) {
                      result[0] += 0.9987684729064039;
                      result[1] += 0.0012315270935960591;
                    } else {
                      result[0] += 0.92;
                      result[1] += 0.08;
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
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3571722805500030518) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)7.83614814281463623e-06) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3241925090551376343) ) ) {
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
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.7564598917961120605) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1516199931502342224) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3101553469896316528) ) ) {
              if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)6.353482604026794434e-06) ) ) {
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
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1288257911801338196) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1516199931502342224) ) ) {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1326894834637641907) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.812953561544418335) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7854202985763549805) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7683391571044921875) ) ) {
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
    }
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04041793011128902435) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
        if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7232879996299743652) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7676883339881896973) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.1380960345268249512) ) ) {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1307562068104743958) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9937936208425217;
                      result[1] += 0.006206379157478346;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              }
            } else {
              if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3535631150007247925) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
                      result[0] += 0.9720930232558139;
                      result[1] += 0.027906976744186046;
                    } else {
                      result[0] += 0.9970457902511078;
                      result[1] += 0.0029542097488921715;
                    }
                  }
                }
              } else {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                  if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7491170167922973633) ) ) {
                    if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7763035297393798828) ) ) {
                      result[0] += 0.023255813953488372;
                      result[1] += 0.9767441860465116;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7754286229610443115) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.5;
                      result[1] += 0.5;
                    }
                  }
                } else {
                  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4158186167478561401) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                      result[0] += 0.9773960216998192;
                      result[1] += 0.022603978300180832;
                    } else {
                      result[0] += 0.5881207400194742;
                      result[1] += 0.4118792599805258;
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2738175839185714722) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1346227526664733887) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2883205562829971313) ) ) {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1979539841413497925) ) ) {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3524892181158065796) ) ) {
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
                  if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7174687683582305908) ) ) {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4075186997652053833) ) ) {
                      result[0] += 0.1111111111111111;
                      result[1] += 0.8888888888888888;
                    } else {
                      result[0] += 0.6;
                      result[1] += 0.4;
                    }
                  } else {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9619047619047619;
                      result[1] += 0.0380952380952381;
                    }
                  }
                }
              } else {
                if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3819010108709335327) ) ) {
                  if ( ( !(data[68].missing != -1) || (data[68].fvalue <= (float)0.8088828921318054199) ) ) {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3065050989389419556) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.8648648648648649;
                      result[1] += 0.13513513513513514;
                    }
                  } else {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.327312275767326355) ) ) {
                      result[0] += 0.9690721649484536;
                      result[1] += 0.030927835051546393;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2451554387807846069) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7695273160934448242) ) ) {
                  if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7165536880493164062) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.6715551316738128662) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[68].missing != -1) || (data[68].fvalue <= (float)0.8220947682857513428) ) ) {
                      result[0] += 0.9914204003813155;
                      result[1] += 0.008579599618684462;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                }
              } else {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
                      result[0] += 0.2619047619047619;
                      result[1] += 0.7380952380952381;
                    } else {
                      result[0] += 0.0033003300330033004;
                      result[1] += 0.9966996699669967;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2557153552770614624) ) ) {
                if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9924816787242889404) ) ) {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2235839143395423889) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7811223268508911133) ) ) {
                      result[0] += 0.8695652173913043;
                      result[1] += 0.13043478260869565;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1365320086479187012) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7174687683582305908) ) ) {
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
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.291439443826675415) ) ) {
                  if ( ( !(data[69].missing != -1) || (data[69].fvalue <= (float)0.832802891731262207) ) ) {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.3924419581890106201) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9358974358974359;
                      result[1] += 0.0641025641025641;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                } else {
                  if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7776779532432556152) ) ) {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8184643983840942383) ) ) {
                      result[0] += 0.043478260869565216;
                      result[1] += 0.9565217391304348;
                    } else {
                      result[0] += 0.5;
                      result[1] += 0.5;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2542048841714859009) ) ) {
                  if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7507125139236450195) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                } else {
                  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05921705067157745361) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.993042677640914917) ) ) {
                      result[0] += 0.0392156862745098;
                      result[1] += 0.9607843137254902;
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
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3615049868822097778) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)6.353482604026794434e-06) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.287395089864730835) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.294940754771232605) ) ) {
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
        }
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
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.7537131011486053467) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1979539841413497925) ) ) {
                  if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7687848806381225586) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                      result[0] += 0.9729344729344729;
                      result[1] += 0.027065527065527065;
                    } else {
                      result[0] += 0.44935064935064933;
                      result[1] += 0.5506493506493506;
                    }
                  } else {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                      result[0] += 0.7044534412955465;
                      result[1] += 0.29554655870445345;
                    } else {
                      result[0] += 0.9788980070339977;
                      result[1] += 0.021101992966002344;
                    }
                  }
                } else {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3140550553798675537) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7156386375427246094) ) ) {
                      result[0] += 0.7962962962962963;
                      result[1] += 0.2037037037037037;
                    } else {
                      result[0] += 0.9884998722208025;
                      result[1] += 0.011500127779197547;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2326309755444526672) ) ) {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1350248828530311584) ) ) {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3335509002208709717) ) ) {
                    if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7202161252498626709) ) ) {
                      result[0] += 0.15767634854771784;
                      result[1] += 0.8423236514522822;
                    } else {
                      result[0] += 0.55;
                      result[1] += 0.45;
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
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3502274602651596069) ) ) {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2298321202397346497) ) ) {
                      result[0] += 0.88;
                      result[1] += 0.12;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3140443116426467896) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 0.875;
                      result[1] += 0.125;
                    } else {
                      result[0] += 0.07291666666666667;
                      result[1] += 0.9270833333333334;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                  if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7763105630874633789) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2685392946004867554) ) ) {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1380424797534942627) ) ) {
                      result[0] += 0.04225352112676056;
                      result[1] += 0.9577464788732394;
                    } else {
                      result[0] += 0.0007939658594680428;
                      result[1] += 0.999206034140532;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                      result[0] += 0.75;
                      result[1] += 0.25;
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2368498146533966064) ) ) {
            if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)1.821108162403106689e-05) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4517073631286621094) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3637963384389877319) ) ) {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1436370685696601868) ) ) {
                      result[0] += 0.999317058068276;
                      result[1] += 0.0006829419317240186;
                    } else {
                      result[0] += 0.9904258831297458;
                      result[1] += 0.00957411687025421;
                    }
                  } else {
                    if ( ( !(data[68].missing != -1) || (data[68].fvalue <= (float)0.8220947682857513428) ) ) {
                      result[0] += 0.9902676399026764;
                      result[1] += 0.009732360097323601;
                    } else {
                      result[0] += 0.6;
                      result[1] += 0.4;
                    }
                  }
                }
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7842374145984649658) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.03299250360578298569) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              }
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8251364231109619141) ) ) {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.351395338773727417) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.129469260573387146) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1335144117474555969) ) ) {
                      result[0] += 0.9762145748987854;
                      result[1] += 0.023785425101214574;
                    } else {
                      result[0] += 0.9987541528239202;
                      result[1] += 0.0012458471760797341;
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
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
      if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7334492504596710205) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3864005208015441895) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1410567238926887512) ) ) {
            if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
                if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9965838491916656494) ) ) {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8191741108894348145) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7883813679218292236) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9873417721518988;
                      result[1] += 0.012658227848101266;
                    }
                  }
                } else {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3698268532752990723) ) ) {
                    if ( ( !(data[50].missing != -1) || (data[50].fvalue <= (float)0.357469514012336731) ) ) {
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
                }
              } else {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1335144117474555969) ) ) {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3319918960332870483) ) ) {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2883205562829971313) ) ) {
                      result[0] += 0.8294392523364486;
                      result[1] += 0.1705607476635514;
                    } else {
                      result[0] += 0.612942612942613;
                      result[1] += 0.38705738705738707;
                    }
                  } else {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3773652166128158569) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.7368421052631579;
                      result[1] += 0.2631578947368421;
                    }
                  }
                } else {
                  if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7513609826564788818) ) ) {
                    if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.9708437919616699219) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2281074449419975281) ) ) {
                      result[0] += 0.9316239316239316;
                      result[1] += 0.06837606837606838;
                    } else {
                      result[0] += 0.995920745920746;
                      result[1] += 0.004079254079254079;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2376131191849708557) ) ) {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2929984480142593384) ) ) {
                      result[0] += 0.7962529274004684;
                      result[1] += 0.20374707259953162;
                    } else {
                      result[0] += 0.5589430894308943;
                      result[1] += 0.4410569105691057;
                    }
                  }
                } else {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3101553469896316528) ) ) {
                      result[0] += 0.9558823529411765;
                      result[1] += 0.04411764705882353;
                    } else {
                      result[0] += 0.2702702702702703;
                      result[1] += 0.7297297297297297;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.009009009009009009;
                      result[1] += 0.990990990990991;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8066920638084411621) ) ) {
                    if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7924868762493133545) ) ) {
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
                  if ( ( !(data[63].missing != -1) || (data[63].fvalue <= (float)0.9962597787380218506) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3550045043230056763) ) ) {
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
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
        if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7475236356258392334) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2956943213939666748) ) ) {
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
        if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7156386375427246094) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3288721591234207153) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2466625571250915527) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3586165159940719604) ) ) {
                if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
                  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3787812590599060059) ) ) {
                      result[0] += 0.4375;
                      result[1] += 0.5625;
                    } else {
                      result[0] += 0.125;
                      result[1] += 0.875;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1346227526664733887) ) ) {
                      result[0] += 0.9;
                      result[1] += 0.1;
                    } else {
                      result[0] += 0.3333333333333333;
                      result[1] += 0.6666666666666666;
                    }
                  }
                } else {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.02531645569620253;
                      result[1] += 0.9746835443037974;
                    }
                  }
                }
              } else {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3335509002208709717) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2444018721580505371) ) ) {
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
                } else {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3487196117639541626) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
                      result[0] += 0.7727272727272727;
                      result[1] += 0.22727272727272727;
                    } else {
                      result[0] += 0.16363636363636364;
                      result[1] += 0.8363636363636363;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2168003246188163757) ) ) {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1964461356401443481) ) ) {
                  if ( ( !(data[48].missing != -1) || (data[48].fvalue <= (float)0.7865853607654571533) ) ) {
                    if ( ( !(data[68].missing != -1) || (data[68].fvalue <= (float)0.8198173344135284424) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.8;
                      result[1] += 0.2;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2572258263826370239) ) ) {
                    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4158466756343841553) ) ) {
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
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2738175839185714722) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2376131191849708557) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3140443116426467896) ) ) {
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.24167633056640625) ) ) {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3101553469896316528) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                      result[0] += 0.9813084112149533;
                      result[1] += 0.018691588785046728;
                    } else {
                      result[0] += 0.5645645645645646;
                      result[1] += 0.43543543543543545;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 0.993006993006993;
                      result[1] += 0.006993006993006993;
                    } else {
                      result[0] += 0.7941176470588235;
                      result[1] += 0.20588235294117646;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7834094464778900146) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
                      result[0] += 0.8909090909090909;
                      result[1] += 0.10909090909090909;
                    } else {
                      result[0] += 0.07692307692307693;
                      result[1] += 0.9230769230769231;
                    }
                  }
                }
              } else {
                if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7183859944343566895) ) ) {
                  if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7751695215702056885) ) ) {
                    if ( ( !(data[63].missing != -1) || (data[63].fvalue <= (float)0.9962597787380218506) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8868957757949829102) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.5;
                      result[1] += 0.5;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7713658511638641357) ) ) {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3787812590599060059) ) ) {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3140443116426467896) ) ) {
                      result[0] += 0.9760479041916168;
                      result[1] += 0.023952095808383235;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1342713162302970886) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7475236356258392334) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.018633540372670808;
                      result[1] += 0.9813664596273292;
                    }
                  }
                }
              } else {
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7869956493377685547) ) ) {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.17857142857142858;
                      result[1] += 0.8214285714285714;
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
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3170591443777084351) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1346198916435241699) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04041793011128902435) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[75].missing != -1) || (data[75].fvalue <= (float)6.344990106299519539e-05) ) ) {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
                      result[0] += 0.997872340425532;
                      result[1] += 0.002127659574468085;
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
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3460290580987930298) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8137560188770294189) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001834130729548633099) ) ) {
              if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7215897738933563232) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3517352938652038574) ) ) {
                  if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7762511074542999268) ) ) {
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
              if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7767050862312316895) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511906176805496216) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
              if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7352985739707946777) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.1396664753556251526) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2625041007995605469) ) ) {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3532431274652481079) ) ) {
                      result[0] += 0.9874213836477987;
                      result[1] += 0.012578616352201259;
                    } else {
                      result[0] += 0.574468085106383;
                      result[1] += 0.425531914893617;
                    }
                  } else {
                    if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.6856892406940460205) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9998927613941019;
                      result[1] += 0.00010723860589812332;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              }
            } else {
              if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3653041869401931763) ) ) {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3772213906049728394) ) ) {
                      result[0] += 0.8896321070234113;
                      result[1] += 0.11036789297658862;
                    } else {
                      result[0] += 0.20930232558139536;
                      result[1] += 0.7906976744186046;
                    }
                  } else {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                      result[0] += 0.0989247311827957;
                      result[1] += 0.9010752688172043;
                    } else {
                      result[0] += 0.7654639175257731;
                      result[1] += 0.2345360824742268;
                    }
                  }
                }
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2315745800733566284) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4517073631286621094) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3319918960332870483) ) ) {
                      result[0] += 0.937021777516186;
                      result[1] += 0.062978222483814;
                    } else {
                      result[0] += 0.998538249147312;
                      result[1] += 0.0014617508526879974;
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
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3470626324415206909) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.6835834383964538574) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7728920876979827881) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.812953561544418335) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1516199931502342224) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2926733642816543579) ) ) {
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
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1516199931502342224) ) ) {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4158186167478561401) ) ) {
        if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
            if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7156386375427246094) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2345921769738197327) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2945583313703536987) ) ) {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3733234405517578125) ) ) {
                      result[0] += 0.1;
                      result[1] += 0.9;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7738775908946990967) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.0625;
                      result[1] += 0.9375;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7174687683582305908) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2542048841714859009) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.9088842868804931641) ) ) {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.125;
                      result[1] += 0.875;
                    }
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3101553469896316528) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9259259259259259;
                      result[1] += 0.07407407407407407;
                    }
                  }
                }
              } else {
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2929984480142593384) ) ) {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3819010108709335327) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3023568391799926758) ) ) {
                      result[0] += 0.8461538461538461;
                      result[1] += 0.15384615384615385;
                    } else {
                      result[0] += 0.9932998324958124;
                      result[1] += 0.006700167504187605;
                    }
                  } else {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3054766058921813965) ) ) {
                      result[0] += 0.8125;
                      result[1] += 0.1875;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001769607421010732651) ) ) {
                    if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7826071381568908691) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9857142857142858;
                      result[1] += 0.014285714285714285;
                    }
                  } else {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3788730651140213013) ) ) {
                      result[0] += 0.9896907216494846;
                      result[1] += 0.010309278350515464;
                    } else {
                      result[0] += 0.75;
                      result[1] += 0.25;
                    }
                  }
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
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1410631909966468811) ) ) {
                    if ( ( !(data[68].missing != -1) || (data[68].fvalue <= (float)0.8077465295791625977) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9387755102040817;
                      result[1] += 0.061224489795918366;
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
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.5193798449612403;
                      result[1] += 0.4806201550387597;
                    }
                  } else {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2898804396390914917) ) ) {
                      result[0] += 0.15966386554621848;
                      result[1] += 0.8403361344537815;
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
          if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7164503633975982666) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8099800944328308105) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.13719949871301651) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2781266868114471436) ) ) {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3615049868822097778) ) ) {
                      result[0] += 0.9997337327342319;
                      result[1] += 0.00026626726576801463;
                    } else {
                      result[0] += 0.9986282578875172;
                      result[1] += 0.0013717421124828531;
                    }
                  } else {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3532431274652481079) ) ) {
                      result[0] += 0.9972789115646259;
                      result[1] += 0.0027210884353741495;
                    } else {
                      result[0] += 0.9458413926499033;
                      result[1] += 0.05415860735009671;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7432717978954315186) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2526977509260177612) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1313996762037277222) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7713658511638641357) ) ) {
                      result[0] += 0.998876404494382;
                      result[1] += 0.0011235955056179776;
                    } else {
                      result[0] += 0.984118291347207;
                      result[1] += 0.01588170865279299;
                    }
                  }
                }
              } else {
                if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8154961466789245605) ) ) {
                  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2240921184420585632) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
                      result[0] += 0.8763594733829422;
                      result[1] += 0.12364052661705781;
                    } else {
                      result[0] += 0.9958946288060212;
                      result[1] += 0.004105371193978789;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04389595240354537964) ) ) {
          if ( ( !(data[75].missing != -1) || (data[75].fvalue <= (float)6.353389471769332886e-05) ) ) {
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
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2168003171682357788) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.351395338773727417) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)3.812834620475769043e-06) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.383395761251449585) ) ) {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1339764222502708435) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1539440527558326721) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2609969824552536011) ) ) {
                      result[0] += 0.6467391304347826;
                      result[1] += 0.3532608695652174;
                    } else {
                      result[0] += 0.9999769945707186;
                      result[1] += 2.300542928131039e-05;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2640145719051361084) ) ) {
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
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4158186167478561401) ) ) {
        if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7285097241401672363) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7432717978954315186) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1313996762037277222) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7768823504447937012) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.228560328483581543) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2781266868114471436) ) ) {
                      result[0] += 0.9999115826702034;
                      result[1] += 8.841732979664014e-05;
                    } else {
                      result[0] += 0.9873150105708245;
                      result[1] += 0.012684989429175475;
                    }
                  }
                }
              } else {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                    if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.8003587722778320312) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9958592132505176;
                      result[1] += 0.004140786749482402;
                    }
                  } else {
                    if ( ( !(data[48].missing != -1) || (data[48].fvalue <= (float)0.7865853607654571533) ) ) {
                      result[0] += 0.6435643564356436;
                      result[1] += 0.3564356435643564;
                    } else {
                      result[0] += 0.5126146788990825;
                      result[1] += 0.4873853211009174;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7621722519397735596) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7713658511638641357) ) ) {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7676883339881896973) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                      result[0] += 0.8576732673267327;
                      result[1] += 0.14232673267326731;
                    } else {
                      result[0] += 0.9566918862509783;
                      result[1] += 0.04330811374902165;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3637963384389877319) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3555040508508682251) ) ) {
                      result[0] += 0.9864864864864865;
                      result[1] += 0.013513513513513514;
                    } else {
                      result[0] += 0.25;
                      result[1] += 0.75;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.3333333333333333;
                      result[1] += 0.6666666666666666;
                    }
                  }
                } else {
                  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7870718538761138916) ) ) {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2220760732889175415) ) ) {
                      result[0] += 0.3492063492063492;
                      result[1] += 0.6507936507936508;
                    } else {
                      result[0] += 0.06724511930585683;
                      result[1] += 0.9327548806941431;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.5343511450381679;
                      result[1] += 0.46564885496183206;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3217779546976089478) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1384864449501037598) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7768823504447937012) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.6869266629219055176) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)6.351619958877563477e-06) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1606694310903549194) ) ) {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1516199931502342224) ) ) {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2281074449419975281) ) ) {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2883205562829971313) ) ) {
                      result[0] += 0.782608695652174;
                      result[1] += 0.21739130434782608;
                    } else {
                      result[0] += 0.9941176470588236;
                      result[1] += 0.0058823529411764705;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2572224736213684082) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2708033323287963867) ) ) {
                      result[0] += 0.9977553310886644;
                      result[1] += 0.002244668911335578;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.287395089864730835) ) ) {
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
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7860759496688842773) ) ) {
          if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3217779546976089478) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.39696463942527771) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7787209153175354004) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3304524868726730347) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2368498146533966064) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8191741108894348145) ) ) {
                    result[0] += 1;
                    result[1] += 0;
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
        } else {
          if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04389595240354537964) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3355058878660202026) ) ) {
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
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2768351733684539795) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3101553469896316528) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7898192107677459717) ) ) {
              if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.914122849702835083) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.2989675849676132202) ) ) {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3741033822298049927) ) ) {
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
              result[0] += 1;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
            if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7979907989501953125) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3257523924112319946) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3241925090551376343) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7870718538761138916) ) ) {
                      result[0] += 0.5555555555555556;
                      result[1] += 0.4444444444444444;
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
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2250917553901672363) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2466625571250915527) ) ) {
                    if ( ( !(data[69].missing != -1) || (data[69].fvalue <= (float)0.8214133977890014648) ) ) {
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
              }
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7796406149864196777) ) ) {
                if ( ( !(data[70].missing != -1) || (data[70].fvalue <= (float)0.9432790279388427734) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7785879969596862793) ) ) {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
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
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2281074449419975281) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2883205562829971313) ) ) {
              if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001825273095164448023) ) ) {
                if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8228516578674316406) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              } else {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2290521711111068726) ) ) {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3694237321615219116) ) ) {
                      result[0] += 0.7419354838709677;
                      result[1] += 0.25806451612903225;
                    } else {
                      result[0] += 0.9874476987447699;
                      result[1] += 0.012552301255230125;
                    }
                  } else {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.291439443826675415) ) ) {
                      result[0] += 0.865546218487395;
                      result[1] += 0.13445378151260504;
                    } else {
                      result[0] += 0.2857142857142857;
                      result[1] += 0.7142857142857143;
                    }
                  }
                } else {
                  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8887280821800231934) ) ) {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.406010851263999939) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9006622516556292;
                      result[1] += 0.09933774834437085;
                    }
                  } else {
                    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05921705067157745361) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.4095744680851064;
                      result[1] += 0.5904255319148937;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1387960389256477356) ) ) {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3735956251621246338) ) ) {
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
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2345921769738197327) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2341379672288894653) ) ) {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3607806563377380371) ) ) {
                      result[0] += 0.9411764705882353;
                      result[1] += 0.058823529411764705;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
                      result[0] += 0.09764309764309764;
                      result[1] += 0.9023569023569024;
                    } else {
                      result[0] += 0.7857142857142857;
                      result[1] += 0.21428571428571427;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1463383585214614868) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[70].missing != -1) || (data[70].fvalue <= (float)0.9482912123203277588) ) ) {
                      result[0] += 0.9818181818181818;
                      result[1] += 0.01818181818181818;
                    } else {
                      result[0] += 0.6;
                      result[1] += 0.4;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2542048841714859009) ) ) {
                    result[0] += 1;
                    result[1] += 0;
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
              if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7174687683582305908) ) ) {
                if ( ( !(data[68].missing != -1) || (data[68].fvalue <= (float)0.8220947682857513428) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2542048841714859009) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2484607771039009094) ) ) {
                      result[0] += 0.003194888178913738;
                      result[1] += 0.9968051118210862;
                    } else {
                      result[0] += 0.18181818181818182;
                      result[1] += 0.8181818181818182;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2337318137288093567) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.75;
                      result[1] += 0.25;
                    }
                  } else {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7870718538761138916) ) ) {
                      result[0] += 0.07142857142857142;
                      result[1] += 0.9285714285714286;
                    } else {
                      result[0] += 0.8006535947712419;
                      result[1] += 0.19934640522875818;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7432717978954315186) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
                if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2781266868114471436) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.9733475744724273682) ) ) {
                    if ( ( !(data[70].missing != -1) || (data[70].fvalue <= (float)0.9346243441104888916) ) ) {
                      result[0] += 0.9195402298850575;
                      result[1] += 0.08045977011494253;
                    } else {
                      result[0] += 0.98125;
                      result[1] += 0.01875;
                    }
                  } else {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4143022894859313965) ) ) {
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
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3125364631414413452) ) ) {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3772213906049728394) ) ) {
                      result[0] += 0.9487179487179487;
                      result[1] += 0.05128205128205128;
                    } else {
                      result[0] += 0.9949494949494949;
                      result[1] += 0.005050505050505051;
                    }
                  } else {
                    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.409673541784286499) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.66;
                      result[1] += 0.34;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2341379672288894653) ) ) {
                      result[0] += 0.7058823529411765;
                      result[1] += 0.29411764705882354;
                    } else {
                      result[0] += 0.16071428571428573;
                      result[1] += 0.8392857142857143;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511906176805496216) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4521647095680236816) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.409673541784286499) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.8891733723482077;
                      result[1] += 0.11082662765179224;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7695273160934448242) ) ) {
        if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7597486972808837891) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2240921184420585632) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7517754733562469482) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.1382724717259407043) ) ) {
                if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1362570971250534058) ) ) {
                  if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001769607421010732651) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1539440527558326721) ) ) {
                      result[0] += 0.9998064242937511;
                      result[1] += 0.00019357570624886576;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1545875221490859985) ) ) {
                      result[0] += 0.999569188350853;
                      result[1] += 0.00043081164914699296;
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
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3796269893646240234) ) ) {
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3499511033296585083) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2979583591222763062) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001788580149877816439) ) ) {
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
  if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7666589617729187012) ) ) {
    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7138063609600067139) ) ) {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2437759265303611755) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1380424797534942627) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7411437630653381348) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
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
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1395496055483818054) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7474617063999176025) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2376131191849708557) ) ) {
                  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8878130018711090088) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2542048841714859009) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9447004608294931;
                      result[1] += 0.055299539170506916;
                    }
                  }
                } else {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3132751137018203735) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2477068603038787842) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7156386375427246094) ) ) {
                    if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9963551759719848633) ) ) {
                      result[0] += 0.9941002949852508;
                      result[1] += 0.0058997050147492625;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[68].missing != -1) || (data[68].fvalue <= (float)0.8198173344135284424) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9929078014184397;
                      result[1] += 0.0070921985815602835;
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
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                  if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001834130729548633099) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2321719378232955933) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.5;
                      result[1] += 0.5;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511906176805496216) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2345921769738197327) ) ) {
                      result[0] += 0.9861356932153392;
                      result[1] += 0.013864306784660767;
                    } else {
                      result[0] += 0.9172450613988254;
                      result[1] += 0.08275493860117458;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.993042677640914917) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1384864374995231628) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.813657611608505249) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
                      result[0] += 0.7941176470588235;
                      result[1] += 0.20588235294117646;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8118190765380859375) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3593400567770004272) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3615049868822097778) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
                    result[0] += 0;
                    result[1] += 1;
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
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1440776735544204712) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.7804878048780488;
                      result[1] += 0.21951219512195122;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
          if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2240921184420585632) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3803411275148391724) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3257523924112319946) ) ) {
                if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001841720833908766508) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
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
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2444018721580505371) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2647647857666015625) ) ) {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3600607514381408691) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1372855678200721741) ) ) {
                      result[0] += 0.96875;
                      result[1] += 0.03125;
                    } else {
                      result[0] += 0.6923076923076923;
                      result[1] += 0.3076923076923077;
                    }
                  } else {
                    if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7766471505165100098) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.6666666666666666;
                      result[1] += 0.3333333333333333;
                    }
                  }
                } else {
                  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.409673541784286499) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[70].missing != -1) || (data[70].fvalue <= (float)0.9332569539546966553) ) ) {
                      result[0] += 0.8333333333333334;
                      result[1] += 0.16666666666666666;
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
          if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4158186167478561401) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2181347757577896118) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1410631909966468811) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                  if ( ( !(data[49].missing != -1) || (data[49].fvalue <= (float)0.6500808894634246826) ) ) {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.2;
                      result[1] += 0.8;
                    }
                  } else {
                    if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.8074434399604797363) ) ) {
                      result[0] += 0.9726962457337884;
                      result[1] += 0.027303754266211604;
                    } else {
                      result[0] += 0.8571428571428571;
                      result[1] += 0.14285714285714285;
                    }
                  }
                } else {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2945583313703536987) ) ) {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7852395772933959961) ) ) {
                      result[0] += 0.02727272727272727;
                      result[1] += 0.9727272727272728;
                    } else {
                      result[0] += 0.5;
                      result[1] += 0.5;
                    }
                  } else {
                    if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7193010449409484863) ) ) {
                      result[0] += 0.5919117647058824;
                      result[1] += 0.40808823529411764;
                    } else {
                      result[0] += 0.22627737226277372;
                      result[1] += 0.7737226277372263;
                    }
                  }
                }
              } else {
                if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.993042677640914917) ) ) {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.2959518879652023315) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8173351287841796875) ) ) {
                      result[0] += 0.8;
                      result[1] += 0.2;
                    } else {
                      result[0] += 0.19230769230769232;
                      result[1] += 0.8076923076923077;
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
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7174687683582305908) ) ) {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
                    if ( ( !(data[64].missing != -1) || (data[64].fvalue <= (float)0.709514915943145752) ) ) {
                      result[0] += 0.15625;
                      result[1] += 0.84375;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[68].missing != -1) || (data[68].fvalue <= (float)0.821642071008682251) ) ) {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8868957757949829102) ) ) {
                      result[0] += 0.75;
                      result[1] += 0.25;
                    } else {
                      result[0] += 0.9869791666666666;
                      result[1] += 0.013020833333333334;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                  if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7432717978954315186) ) ) {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2311231344938278198) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2196946591138839722) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.4827586206896552;
                      result[1] += 0.5172413793103449;
                    }
                  }
                } else {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3429093062877655029) ) ) {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2326309755444526672) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.026748971193415638;
                      result[1] += 0.9732510288065843;
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
                }
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3571722805500030518) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3241925090551376343) ) ) {
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4150562137365341187) ) ) {
                  result[0] += 0;
                  result[1] += 1;
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
                result[0] += 1;
                result[1] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3297289460897445679) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1288257911801338196) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)3.390014171600341797e-06) ) ) {
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
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2843774855136871338) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
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
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2768351733684539795) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
        if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06770694628357887268) ) ) {
          if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
            if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3728417009115219116) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.24515543133020401) ) ) {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2288613691926002502) ) ) {
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
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1320072859525680542) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2564689069986343384) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3080129474401473999) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.270799979567527771) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1320072859525680542) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.286760672926902771) ) ) {
                      result[0] += 0.8;
                      result[1] += 0.2;
                    } else {
                      result[0] += 0.18518518518518517;
                      result[1] += 0.8148148148148148;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3080129474401473999) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3065050989389419556) ) ) {
                if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8868957757949829102) ) ) {
                  if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.9749436378479003906) ) ) {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3319918960332870483) ) ) {
                      result[0] += 0.5;
                      result[1] += 0.5;
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
                if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.786156773567199707) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.794778287410736084) ) ) {
                    if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7682508528232574463) ) ) {
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
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2898804396390914917) ) ) {
                    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7165536880493164062) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.460431654676259;
                      result[1] += 0.539568345323741;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
                      result[0] += 0.6862068965517242;
                      result[1] += 0.3137931034482759;
                    } else {
                      result[0] += 0.96875;
                      result[1] += 0.03125;
                    }
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3132751137018203735) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7202161252498626709) ) ) {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                      result[0] += 0.8728179551122195;
                      result[1] += 0.12718204488778054;
                    } else {
                      result[0] += 0.9579242636746143;
                      result[1] += 0.04207573632538569;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2852007895708084106) ) ) {
                      result[0] += 0.9375;
                      result[1] += 0.0625;
                    } else {
                      result[0] += 0.9916434540389972;
                      result[1] += 0.008356545961002786;
                    }
                  }
                }
              } else {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3586165159940719604) ) ) {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2368498146533966064) ) ) {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2507216855883598328) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9047619047619048;
                      result[1] += 0.09523809523809523;
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
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3163948804140090942) ) ) {
                      result[0] += 0.9704301075268817;
                      result[1] += 0.02956989247311828;
                    } else {
                      result[0] += 0.6033057851239669;
                      result[1] += 0.39669421487603307;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2293138951063156128) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2542048841714859009) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.8797814207650273;
                      result[1] += 0.12021857923497267;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
                  if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.9082005918025970459) ) ) {
                    if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7815238833427429199) ) ) {
                      result[0] += 0.5714285714285714;
                      result[1] += 0.42857142857142855;
                    } else {
                      result[0] += 0.9629629629629629;
                      result[1] += 0.037037037037037035;
                    }
                  } else {
                    if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7735692262649536133) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7746321558952331543) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001827803091146051884) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.75;
                      result[1] += 0.25;
                    }
                  }
                }
              } else {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
                    if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.789338529109954834) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.7587131367292225;
                      result[1] += 0.24128686327077747;
                    }
                  } else {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3622884899377822876) ) ) {
                      result[0] += 0.6808510638297872;
                      result[1] += 0.3191489361702128;
                    } else {
                      result[0] += 0.14644351464435146;
                      result[1] += 0.8535564853556485;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7401399314403533936) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3864005208015441895) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.00179490773007273674) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3499511033296585083) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[75].missing != -1) || (data[75].fvalue <= (float)6.344821304082870483e-05) ) ) {
                if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7779097855091094971) ) ) {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3241925090551376343) ) ) {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7750433683395385742) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.93048128342246;
                      result[1] += 0.06951871657754011;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3101553469896316528) ) ) {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3787812590599060059) ) ) {
                      result[0] += 0.9996982726106962;
                      result[1] += 0.00030172738930376404;
                    } else {
                      result[0] += 0.9913294797687862;
                      result[1] += 0.008670520231213872;
                    }
                  } else {
                    if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7156386375427246094) ) ) {
                      result[0] += 0.9994547437295529;
                      result[1] += 0.0005452562704471102;
                    } else {
                      result[0] += 0.9999784357276864;
                      result[1] += 2.1564272313630777e-05;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3412856906652450562) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1516199931502342224) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2723104655742645264) ) ) {
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
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
      if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001755689794663339853) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3864005208015441895) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511906176805496216) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7805594503879547119) ) ) {
              if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2370446100831031799) ) ) {
                if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7193010449409484863) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.8042944073677062988) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7870718538761138916) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9629629629629629;
                      result[1] += 0.037037037037037035;
                    }
                  }
                }
              } else {
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2103353813290596008) ) ) {
                  if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7156386375427246094) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
                      result[0] += 0.9859943977591037;
                      result[1] += 0.014005602240896359;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8914754092693328857) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9971014492753624;
                      result[1] += 0.002898550724637681;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3080129474401473999) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2625041007995605469) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8066920638084411621) ) ) {
                      result[0] += 0.8947368421052632;
                      result[1] += 0.10526315789473684;
                    } else {
                      result[0] += 0.9949238578680203;
                      result[1] += 0.005076142131979695;
                    }
                  } else {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2883196771144866943) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.2222222222222222;
                      result[1] += 0.7777777777777778;
                    }
                  }
                } else {
                  if ( ( !(data[68].missing != -1) || (data[68].fvalue <= (float)0.8079728782176971436) ) ) {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3772213906049728394) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9911111111111112;
                      result[1] += 0.008888888888888889;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04474986717104911804) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.24515543133020401) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                      result[0] += 0.852;
                      result[1] += 0.148;
                    } else {
                      result[0] += 0.46408839779005523;
                      result[1] += 0.5359116022099447;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3007978349924087524) ) ) {
                      result[0] += 0.9986798679867986;
                      result[1] += 0.0013201320132013201;
                    } else {
                      result[0] += 0.9195804195804196;
                      result[1] += 0.08041958041958042;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7464606761932373047) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2979583591222763062) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1546342372894287109) ) ) {
              if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001835393253713846207) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2376131191849708557) ) ) {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2945591956377029419) ) ) {
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
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3412856906652450562) ) ) {
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
          if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
            if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3586165159940719604) ) ) {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1964461356401443481) ) ) {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2345921769738197327) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.21568627450980393;
                      result[1] += 0.7843137254901961;
                    }
                  }
                } else {
                  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3530764579772949219) ) ) {
                    if ( ( !(data[68].missing != -1) || (data[68].fvalue <= (float)0.8097952604293823242) ) ) {
                      result[0] += 0.24;
                      result[1] += 0.76;
                    } else {
                      result[0] += 0.02127659574468085;
                      result[1] += 0.9787234042553191;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
                  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.5357142857142857;
                      result[1] += 0.4642857142857143;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2413842752575874329) ) ) {
                      result[0] += 0.9285714285714286;
                      result[1] += 0.07142857142857142;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.365116998553276062) ) ) {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2165748998522758484) ) ) {
                      result[0] += 0.9444444444444444;
                      result[1] += 0.05555555555555555;
                    } else {
                      result[0] += 0.14285714285714285;
                      result[1] += 0.8571428571428571;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1320072859525680542) ) ) {
                      result[0] += 0.9743589743589743;
                      result[1] += 0.02564102564102564;
                    } else {
                      result[0] += 0.7603305785123967;
                      result[1] += 0.2396694214876033;
                    }
                  } else {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3080129325389862061) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                }
              } else {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2768351733684539795) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2542048841714859009) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.015345268542199489;
                      result[1] += 0.9846547314578005;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.6757777929306030273) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.282116815447807312) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2368498146533966064) ) ) {
                      result[0] += 0.9928366762177651;
                      result[1] += 0.0071633237822349575;
                    } else {
                      result[0] += 0.9516263552960801;
                      result[1] += 0.04837364470391994;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.781479179859161377) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3132751137018203735) ) ) {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2945583313703536987) ) ) {
                      result[0] += 0.9516324062877872;
                      result[1] += 0.04836759371221282;
                    } else {
                      result[0] += 0.847972972972973;
                      result[1] += 0.15202702702702703;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7852395772933959961) ) ) {
                      result[0] += 0.9444444444444444;
                      result[1] += 0.05555555555555555;
                    } else {
                      result[0] += 0.9962216624685138;
                      result[1] += 0.003778337531486146;
                    }
                  } else {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2371528074145317078) ) ) {
                      result[0] += 0.7142857142857143;
                      result[1] += 0.2857142857142857;
                    } else {
                      result[0] += 0.9434850863422292;
                      result[1] += 0.0565149136577708;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2738175839185714722) ) ) {
          if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
            if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4158186167478561401) ) ) {
              if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.782581627368927002) ) ) {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3787812590599060059) ) ) {
                      result[0] += 0.5915492957746479;
                      result[1] += 0.4084507042253521;
                    } else {
                      result[0] += 0.09090909090909091;
                      result[1] += 0.9090909090909091;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3093754202127456665) ) ) {
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
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2519441843032836914) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1335144117474555969) ) ) {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.365116998553276062) ) ) {
                    if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7589617073535919189) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9016393442622951;
                      result[1] += 0.09836065573770492;
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
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7202161252498626709) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.08695652173913043;
                      result[1] += 0.9130434782608695;
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
          if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)6.351619958877563477e-06) ) ) {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04389595240354537964) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1539440527558326721) ) ) {
                if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8251364231109619141) ) ) {
                  if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.8090179562568664551) ) ) {
                    if ( ( !(data[70].missing != -1) || (data[70].fvalue <= (float)0.9318918883800506592) ) ) {
                      result[0] += 0.9984697781178271;
                      result[1] += 0.001530221882172915;
                    } else {
                      result[0] += 0.9999595649185233;
                      result[1] += 4.0435081476689173e-05;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1516199931502342224) ) ) {
                      result[0] += 0.9487179487179487;
                      result[1] += 0.05128205128205128;
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
  if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7666589617729187012) ) ) {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7787209153175354004) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7695273160934448242) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7012654244899749756) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001721531909424811602) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.09636001661419868469) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7109554111957550049) ) ) {
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
    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3217779546976089478) ) ) {
      if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.9933518767356872559) ) ) {
        if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05921705067157745361) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7676883339881896973) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1365531682968139648) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7491170167922973633) ) ) {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                      result[0] += 0.05555555555555555;
                      result[1] += 0.9444444444444444;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7775399684906005859) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                }
              } else {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4075186997652053833) ) ) {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
                      result[0] += 0.7922077922077922;
                      result[1] += 0.2077922077922078;
                    } else {
                      result[0] += 0.5672609400324149;
                      result[1] += 0.4327390599675851;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.5414781297134238;
                      result[1] += 0.45852187028657615;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9904657578708211;
                      result[1] += 0.009534242129178838;
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
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.351395338773727417) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1539440527558326721) ) ) {
          if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.801203995943069458) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2851310521364212036) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[75].missing != -1) || (data[75].fvalue <= (float)6.34482712484896183e-05) ) ) {
                if ( ( !(data[70].missing != -1) || (data[70].fvalue <= (float)0.9309795200824737549) ) ) {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3472117632627487183) ) ) {
                    if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00177719752537086606) ) ) {
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
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1516199931502342224) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2979583591222763062) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1576551869511604309) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9998621260168207;
                      result[1] += 0.00013787398317937404;
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
  if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001822743099182844162) ) ) {
    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3919859081506729126) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7621722519397735596) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.7307100594043731689) ) ) {
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
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3637963384389877319) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2421378418803215027) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7202161252498626709) ) ) {
                    if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9902066290378570557) ) ) {
                      result[0] += 0.9714285714285714;
                      result[1] += 0.02857142857142857;
                    } else {
                      result[0] += 0.6363636363636364;
                      result[1] += 0.36363636363636365;
                    }
                  } else {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.8787878787878788;
                      result[1] += 0.12121212121212122;
                    }
                  }
                }
              } else {
                if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3850509226322174072) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3095207810401916504) ) ) {
                    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.09636001661419868469) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.998780487804878;
                      result[1] += 0.0012195121951219512;
                    }
                  } else {
                    if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7817626297473907471) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.8947368421052632;
                      result[1] += 0.10526315789473684;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1098809279501438141) ) ) {
                if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
                  if ( ( !(data[69].missing != -1) || (data[69].fvalue <= (float)0.8166298568248748779) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2625041157007217407) ) ) {
                      result[0] += 0.3333333333333333;
                      result[1] += 0.6666666666666666;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3787812590599060059) ) ) {
                      result[0] += 0.9996072270227808;
                      result[1] += 0.00039277297721916735;
                    } else {
                      result[0] += 0.9982228992129982;
                      result[1] += 0.001777100787001777;
                    }
                  }
                } else {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
                      result[0] += 0.9989323258869908;
                      result[1] += 0.0010676741130091984;
                    } else {
                      result[0] += 0.96823914058851;
                      result[1] += 0.031760859411489956;
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
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2024775072932243347) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2858879715204238892) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2293138951063156128) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7879869341850280762) ) ) {
                    if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9734848484848485;
                      result[1] += 0.026515151515151516;
                    }
                  } else {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3179547637701034546) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9473684210526315;
                      result[1] += 0.05263157894736842;
                    }
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                  if ( ( !(data[49].missing != -1) || (data[49].fvalue <= (float)0.6500808894634246826) ) ) {
                    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7156386375427246094) ) ) {
                      result[0] += 0.6944444444444444;
                      result[1] += 0.3055555555555556;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7165536880493164062) ) ) {
                      result[0] += 0.8627450980392157;
                      result[1] += 0.13725490196078433;
                    } else {
                      result[0] += 0.9896640826873385;
                      result[1] += 0.0103359173126615;
                    }
                  }
                } else {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2507216855883598328) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9565217391304348;
                      result[1] += 0.043478260869565216;
                    }
                  } else {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.48893360160965793;
                      result[1] += 0.5110663983903421;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7713658511638641357) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7422067224979400635) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
                      result[0] += 0.014316961622588983;
                      result[1] += 0.985683038377411;
                    } else {
                      result[0] += 0.0017042475091767174;
                      result[1] += 0.9982957524908233;
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
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3241925090551376343) ) ) {
                if ( ( !(data[74].missing != -1) || (data[74].fvalue <= (float)6.342725828289985657e-05) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3101553469896316528) ) ) {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8176798820495605469) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9274193548387096;
                      result[1] += 0.07258064516129033;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1516199931502342224) ) ) {
                      result[0] += 0.963855421686747;
                      result[1] += 0.03614457831325301;
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
            }
          }
        } else {
          if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7475236356258392334) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1493559554219245911) ) ) {
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
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7666589617729187012) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8118190765380859375) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.6839174032211303711) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3004745692014694214) ) ) {
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1371966376900672913) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
            if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.66775473952293396) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2625041007995605469) ) ) {
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.291439443826675415) ) ) {
                  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8878130018711090088) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7555836141109466553) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9925093632958801;
                      result[1] += 0.00749063670411985;
                    }
                  }
                } else {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                      result[0] += 0.7692307692307693;
                      result[1] += 0.23076923076923078;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                }
              } else {
                if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7156386375427246094) ) ) {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2477068603038787842) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7631843686103820801) ) ) {
                      result[0] += 0.9710144927536232;
                      result[1] += 0.028985507246376812;
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
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3803411275148391724) ) ) {
                  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3772213906049728394) ) ) {
                      result[0] += 0.5588235294117647;
                      result[1] += 0.4411764705882353;
                    } else {
                      result[0] += 0.895774647887324;
                      result[1] += 0.10422535211267606;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2232787013053894043) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9963302752293578;
                      result[1] += 0.003669724770642202;
                    }
                  }
                } else {
                  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8878130018711090088) ) ) {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
                      result[0] += 0.7493540051679587;
                      result[1] += 0.25064599483204136;
                    } else {
                      result[0] += 0.8707165109034268;
                      result[1] += 0.1292834890965732;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9862542955326461;
                      result[1] += 0.013745704467353952;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2898804396390914917) ) ) {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2945583313703536987) ) ) {
                      result[0] += 0.6666666666666666;
                      result[1] += 0.3333333333333333;
                    } else {
                      result[0] += 0.9931856899488927;
                      result[1] += 0.0068143100511073255;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 0.9878419452887538;
                      result[1] += 0.0121580547112462;
                    } else {
                      result[0] += 0.5342465753424658;
                      result[1] += 0.4657534246575342;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8868957757949829102) ) ) {
                      result[0] += 0.09821428571428571;
                      result[1] += 0.9017857142857143;
                    } else {
                      result[0] += 0.8629441624365483;
                      result[1] += 0.13705583756345177;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
                      result[0] += 0.076095947063689;
                      result[1] += 0.923904052936311;
                    } else {
                      result[0] += 0.3614457831325301;
                      result[1] += 0.6385542168674698;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2888428866863250732) ) ) {
                if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4517073631286621094) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06770694628357887268) ) ) {
                    if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7738044559955596924) ) ) {
                      result[0] += 0.6666666666666666;
                      result[1] += 0.3333333333333333;
                    } else {
                      result[0] += 0.974090067859346;
                      result[1] += 0.025909932140653916;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.360781446099281311) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)6.77630305290222168e-06) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
                      result[0] += 0.963855421686747;
                      result[1] += 0.03614457831325301;
                    } else {
                      result[0] += 0.9981447124304267;
                      result[1] += 0.0018552875695732839;
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
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3268404752016067505) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7061262726783752441) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1294692680239677429) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1516199931502342224) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)3.390014171600341797e-06) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1307562068104743958) ) ) {
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
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3499511033296585083) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
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
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7334492504596710205) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2964478731155395508) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2209661528468132019) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.09636001661419868469) ) ) {
                if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4517073631286621094) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7747144997119903564) ) ) {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.370983615517616272) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1440776735544204712) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.7142857142857143;
                      result[1] += 0.2857142857142857;
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
          if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8868957757949829102) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2421378418803215027) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2345921769738197327) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                      result[0] += 0.8685314685314686;
                      result[1] += 0.13146853146853146;
                    } else {
                      result[0] += 0.9941605839416059;
                      result[1] += 0.00583941605839416;
                    }
                  }
                }
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3487196117639541626) ) ) {
                      result[0] += 0.6721311475409836;
                      result[1] += 0.32786885245901637;
                    } else {
                      result[0] += 0.010899182561307902;
                      result[1] += 0.989100817438692;
                    }
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3179547637701034546) ) ) {
                      result[0] += 0.0030349013657056147;
                      result[1] += 0.9969650986342944;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8208199739456176758) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7665624916553497314) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2655183523893356323) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2542048841714859009) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.009523809523809525;
                      result[1] += 0.9904761904761905;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3535631150007247925) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3110286146402359009) ) ) {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.2989675849676132202) ) ) {
                      result[0] += 0.9972677595628415;
                      result[1] += 0.00273224043715847;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
                      result[0] += 0.8333333333333334;
                      result[1] += 0.16666666666666666;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7698478400707244873) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1384864374995231628) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.153880678117275238) ) ) {
                    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7225069999694824219) ) ) {
                      result[0] += 0.0013736263736263737;
                      result[1] += 0.9986263736263736;
                    } else {
                      result[0] += 0.07547169811320754;
                      result[1] += 0.9245283018867925;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2961181998252868652) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.94258872651357;
                      result[1] += 0.05741127348643006;
                    }
                  } else {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7852395772933959961) ) ) {
                      result[0] += 0.935251798561151;
                      result[1] += 0.06474820143884892;
                    } else {
                      result[0] += 0.9939919893190922;
                      result[1] += 0.006008010680907877;
                    }
                  }
                } else {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3615049868822097778) ) ) {
                      result[0] += 0.9440203562340967;
                      result[1] += 0.05597964376590331;
                    } else {
                      result[0] += 0.7611940298507462;
                      result[1] += 0.23880597014925373;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4237040430307388306) ) ) {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2240322604775428772) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9894179894179894;
                      result[1] += 0.010582010582010581;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2526977509260177612) ) ) {
                      result[0] += 0.509090909090909;
                      result[1] += 0.4909090909090909;
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
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
                      result[0] += 0.7037037037037037;
                      result[1] += 0.2962962962962963;
                    } else {
                      result[0] += 0.03825136612021858;
                      result[1] += 0.9617486338797814;
                    }
                  }
                }
              } else {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[44].missing != -1) || (data[44].fvalue <= (float)3.175809979438781738e-06) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
                      result[0] += 0.993103448275862;
                      result[1] += 0.006896551724137931;
                    } else {
                      result[0] += 0.999922504649721;
                      result[1] += 7.749535027898326e-05;
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
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.02741967001929879189) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2522295266389846802) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3735964745283126831) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
            if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.6906191110610961914) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511906176805496216) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1335144117474555969) ) ) {
                      result[0] += 0.9958223394898856;
                      result[1] += 0.004177660510114336;
                    } else {
                      result[0] += 0.9997592520764509;
                      result[1] += 0.00024074792354915938;
                    }
                  } else {
                    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04680387675762176514) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9460147695441813;
                      result[1] += 0.05398523045581869;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.153880678117275238) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2436483129858970642) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2519441843032836914) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                      result[0] += 0.6204620462046204;
                      result[1] += 0.3795379537953795;
                    } else {
                      result[0] += 0.9813445969728969;
                      result[1] += 0.018655403027103133;
                    }
                  }
                } else {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.2929362058639526367) ) ) {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2024775072932243347) ) ) {
                      result[0] += 0.6685714285714286;
                      result[1] += 0.3314285714285714;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                      result[0] += 0.005361930294906166;
                      result[1] += 0.9946380697050938;
                    } else {
                      result[0] += 0.5239766081871345;
                      result[1] += 0.4760233918128655;
                    }
                  }
                }
              } else {
                if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.8161026239395141602) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)3.175809979438781738e-06) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1539440527558326721) ) ) {
                      result[0] += 0.9983548917776845;
                      result[1] += 0.001645108222315409;
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
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3934270590543746948) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2760816216468811035) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1350248828530311584) ) ) {
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
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
      if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001801235310267657042) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4285810887813568115) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4090265333652496338) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                  if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.9045557677745819092) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9558908879860708;
                      result[1] += 0.04410911201392919;
                    }
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                      result[0] += 0.8076923076923077;
                      result[1] += 0.19230769230769232;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2376131191849708557) ) ) {
                      result[0] += 0.2926829268292683;
                      result[1] += 0.7073170731707317;
                    } else {
                      result[0] += 0.05785123966942149;
                      result[1] += 0.9421487603305785;
                    }
                  }
                }
              } else {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9267554479418886;
                      result[1] += 0.07324455205811138;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                      result[0] += 0.9286926994906621;
                      result[1] += 0.07130730050933787;
                    } else {
                      result[0] += 0.08755760368663594;
                      result[1] += 0.9124423963133641;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
                if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7597486972808837891) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.66775473952293396) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
                      result[0] += 0.9999260737783692;
                      result[1] += 7.392622163081245e-05;
                    } else {
                      result[0] += 0.9954504094631483;
                      result[1] += 0.004549590536851683;
                    }
                  }
                }
              } else {
                if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7432717978954315186) ) ) {
                  if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7821862697601318359) ) ) {
                    if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.9068332016468048096) ) ) {
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
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3571722805500030518) ) ) {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3117152303457260132) ) ) {
                      result[0] += 0.17647058823529413;
                      result[1] += 0.8235294117647058;
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
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.770910799503326416) ) ) {
        if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4316533952951431274) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
              if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7156386375427246094) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2542048841714859009) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1979539841413497925) ) ) {
                      result[0] += 0.016317016317016316;
                      result[1] += 0.9836829836829837;
                    } else {
                      result[0] += 0.4444444444444444;
                      result[1] += 0.5555555555555556;
                    }
                  }
                }
              } else {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3065050989389419556) ) ) {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.805121690034866333) ) ) {
                      result[0] += 0.4166666666666667;
                      result[1] += 0.5833333333333334;
                    } else {
                      result[0] += 0.9451612903225807;
                      result[1] += 0.054838709677419356;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                      result[0] += 0.8947368421052632;
                      result[1] += 0.10526315789473684;
                    } else {
                      result[0] += 0.3055555555555556;
                      result[1] += 0.6944444444444444;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04574106819927692413) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.028513238289205704;
                      result[1] += 0.9714867617107943;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3592862784862518311) ) ) {
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2852007895708084106) ) ) {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3818887621164321899) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2421378418803215027) ) ) {
                      result[0] += 0.7714285714285715;
                      result[1] += 0.22857142857142856;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511872872710227966) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[70].missing != -1) || (data[70].fvalue <= (float)0.9309795200824737549) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1335144117474555969) ) ) {
                      result[0] += 0.25;
                      result[1] += 0.75;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06770694628357887268) ) ) {
                      result[0] += 0.9812925170068028;
                      result[1] += 0.01870748299319728;
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
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7517754733562469482) ) ) {
          if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04041793011128902435) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05921705067157745361) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2881486564874649048) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2941871881484985352) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3434506207704544067) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                  if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7147214412689208984) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
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
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3586165159940719604) ) ) {
                    if ( ( !(data[70].missing != -1) || (data[70].fvalue <= (float)0.9473811686038970947) ) ) {
                      result[0] += 0.02857142857142857;
                      result[1] += 0.9714285714285714;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                  if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.994306415319442749) ) ) {
                    if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7174687683582305908) ) ) {
                      result[0] += 0.6666666666666666;
                      result[1] += 0.3333333333333333;
                    } else {
                      result[0] += 0.9672131147540983;
                      result[1] += 0.03278688524590164;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2451554238796234131) ) ) {
                      result[0] += 0.015384615384615385;
                      result[1] += 0.9846153846153847;
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
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3600607514381408691) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1365531682968139648) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2738175839185714722) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)3.175809979438781738e-06) ) ) {
                if ( ( !(data[75].missing != -1) || (data[75].fvalue <= (float)6.344821304082870483e-05) ) ) {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1516199931502342224) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2979583591222763062) ) ) {
                      result[0] += 0.9963583394027676;
                      result[1] += 0.003641660597232338;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[68].missing != -1) || (data[68].fvalue <= (float)0.8079728782176971436) ) ) {
                      result[0] += 0.9984431759211209;
                      result[1] += 0.0015568240788790867;
                    } else {
                      result[0] += 0.9999505415698106;
                      result[1] += 4.945843018942579e-05;
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
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4517663121223449707) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4483384788036346436) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7436822652816772461) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
          if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7133477628231048584) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8072218596935272217) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4029951542615890503) ) ) {
                  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06588178733363747597) ) ) {
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
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3787812590599060059) ) ) {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.370983615517616272) ) ) {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8896431326866149902) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9996796925048046;
                      result[1] += 0.00032030749519538755;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3472117632627487183) ) ) {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3210727423429489136) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9868421052631579;
                      result[1] += 0.013157894736842105;
                    }
                  } else {
                    if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7722954750061035156) ) ) {
                      result[0] += 0.9982195845697329;
                      result[1] += 0.0017804154302670622;
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1335144117474555969) ) ) {
                  if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7432717978954315186) ) ) {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2929984480142593384) ) ) {
                      result[0] += 0.990228013029316;
                      result[1] += 0.009771986970684038;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2326309755444526672) ) ) {
                      result[0] += 0.3415977961432507;
                      result[1] += 0.6584022038567493;
                    } else {
                      result[0] += 0.9636363636363636;
                      result[1] += 0.03636363636363636;
                    }
                  }
                } else {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3179547637701034546) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9480698529411765;
                      result[1] += 0.05193014705882353;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9940968122786304;
                      result[1] += 0.0059031877213695395;
                    }
                  }
                }
              } else {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1320072859525680542) ) ) {
                      result[0] += 0.21739130434782608;
                      result[1] += 0.782608695652174;
                    } else {
                      result[0] += 0.9340909090909091;
                      result[1] += 0.0659090909090909;
                    }
                  } else {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3683198690414428711) ) ) {
                      result[0] += 0.6991150442477876;
                      result[1] += 0.3008849557522124;
                    } else {
                      result[0] += 0.3617021276595745;
                      result[1] += 0.6382978723404256;
                    }
                  }
                } else {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
                      result[0] += 0.9035532994923858;
                      result[1] += 0.09644670050761421;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                      result[0] += 0.65;
                      result[1] += 0.35;
                    } else {
                      result[0] += 0.1552346570397112;
                      result[1] += 0.8447653429602888;
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
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)3.390014171600341797e-06) ) ) {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1410567238926887512) ) ) {
                  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3319918960332870483) ) ) {
                      result[0] += 0.9927797833935018;
                      result[1] += 0.007220216606498195;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1372889205813407898) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.3037974683544304;
                      result[1] += 0.6962025316455697;
                    }
                  }
                } else {
                  if ( ( !(data[66].missing != -1) || (data[66].fvalue <= (float)7.83614814281463623e-06) ) ) {
                    if ( ( !(data[75].missing != -1) || (data[75].fvalue <= (float)6.344821304082870483e-05) ) ) {
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
