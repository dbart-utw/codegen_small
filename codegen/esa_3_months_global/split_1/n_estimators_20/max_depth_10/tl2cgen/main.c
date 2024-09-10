
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
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1516199931502342224) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8099800944328308105) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1410631909966468811) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2647681385278701782) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2293138951063156128) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
                      result[0] += 0.9447004608294931;
                      result[1] += 0.055299539170506916;
                    } else {
                      result[0] += 0.5555555555555556;
                      result[1] += 0.4444444444444444;
                    }
                  } else {
                    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7183859944343566895) ) ) {
                      result[0] += 0.6608910891089109;
                      result[1] += 0.33910891089108913;
                    } else {
                      result[0] += 0.9848484848484849;
                      result[1] += 0.015151515151515152;
                    }
                  }
                }
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2852007895708084106) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.2;
                      result[1] += 0.8;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                      result[0] += 0.9958371877890841;
                      result[1] += 0.004162812210915819;
                    } else {
                      result[0] += 0.8505154639175257;
                      result[1] += 0.14948453608247422;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8173351287841796875) ) ) {
                  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2992379516363143921) ) ) {
                      result[0] += 0.8940809968847352;
                      result[1] += 0.1059190031152648;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1979539841413497925) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
                      result[0] += 0.171875;
                      result[1] += 0.828125;
                    } else {
                      result[0] += 0.9166666666666666;
                      result[1] += 0.08333333333333333;
                    }
                  } else {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3065050840377807617) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.5925925925925926;
                      result[1] += 0.4074074074074074;
                    }
                  }
                }
              } else {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.43333333333333335;
                      result[1] += 0.5666666666666667;
                    }
                  } else {
                    if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7979976832866668701) ) ) {
                      result[0] += 0.0888030888030888;
                      result[1] += 0.9111969111969112;
                    } else {
                      result[0] += 0.016339869281045753;
                      result[1] += 0.9836601307189542;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
              if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1335144117474555969) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3772213906049728394) ) ) {
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
                if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8096472322940826416) ) ) {
                  if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.808623969554901123) ) ) {
                    if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9883818626403808594) ) ) {
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
                  if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.00178478762973099947) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3766113072633743286) ) ) {
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
              if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05921705067157745361) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1395496055483818054) ) ) {
                      result[0] += 0.10434782608695652;
                      result[1] += 0.8956521739130435;
                    } else {
                      result[0] += 0.6833333333333333;
                      result[1] += 0.31666666666666665;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001743039640132337809) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7621722519397735596) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2924157828092575073) ) ) {
                if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.813657611608505249) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.66775473952293396) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2489265874028205872) ) ) {
                      result[0] += 0.8034188034188035;
                      result[1] += 0.19658119658119658;
                    } else {
                      result[0] += 0.9997150406714678;
                      result[1] += 0.0002849593285322004;
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
        if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7834094464778900146) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2496801465749740601) ) ) {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
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
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1448312327265739441) ) ) {
              if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.00161399313947185874) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001856900984421372414) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9813209176063537598) ) ) {
                    if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.9699314236640930176) ) ) {
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
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2196946591138839722) ) ) {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3477833271026611328) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732048332691192627) ) ) {
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
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.7253565490245819092) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3600607514381408691) ) ) {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.142628401517868042) ) ) {
                    if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9281914893617021;
                      result[1] += 0.07180851063829788;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                } else {
                  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2781266868114471436) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[64].missing != -1) || (data[64].fvalue <= (float)0.709514915943145752) ) ) {
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
            if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
              if ( ( !(data[68].missing != -1) || (data[68].fvalue <= (float)0.8193623125553131104) ) ) {
                if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7707837522029876709) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7806390821933746338) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.8571428571428571;
                      result[1] += 0.14285714285714285;
                    }
                  }
                }
              } else {
                if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7923682034015655518) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[69].missing != -1) || (data[69].fvalue <= (float)0.8202746808528900146) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              }
            } else {
              if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3217779546976089478) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                  if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.8042944073677062988) ) ) {
                    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7156386375427246094) ) ) {
                      result[0] += 0.72;
                      result[1] += 0.28;
                    } else {
                      result[0] += 0.9478260869565217;
                      result[1] += 0.05217391304347826;
                    }
                  } else {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3195137530565261841) ) ) {
                      result[0] += 0.9444444444444444;
                      result[1] += 0.05555555555555555;
                    } else {
                      result[0] += 0.15384615384615385;
                      result[1] += 0.8461538461538461;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1346227526664733887) ) ) {
                      result[0] += 0.07692307692307693;
                      result[1] += 0.9230769230769231;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
                      result[0] += 0.0234375;
                      result[1] += 0.9765625;
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2738175839185714722) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[74].missing != -1) || (data[74].fvalue <= (float)6.342725828289985657e-05) ) ) {
            if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3292691260576248169) ) ) {
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
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2924157828092575073) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.383395761251449585) ) ) {
          if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7119740843772888184) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2474161237478256226) ) ) {
                  if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7156386375427246094) ) ) {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3592728078365325928) ) ) {
                      result[0] += 0.8461538461538461;
                      result[1] += 0.15384615384615385;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2384096980094909668) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.2857142857142857;
                      result[1] += 0.7142857142857143;
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
          if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7678285837173461914) ) ) {
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
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7621722519397735596) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001743039640132337809) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001827803091146051884) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.13797808438539505) ) ) {
              if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
                if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2924157828092575073) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.94377990430622;
                      result[1] += 0.056220095693779906;
                    }
                  } else {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3772213906049728394) ) ) {
                      result[0] += 0.694344163658243;
                      result[1] += 0.3056558363417569;
                    } else {
                      result[0] += 0.14395393474088292;
                      result[1] += 0.8560460652591171;
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
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2526977509260177612) ) ) {
                    if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
                      result[0] += 0.9993954050785974;
                      result[1] += 0.0006045949214026602;
                    } else {
                      result[0] += 0.8760469011725294;
                      result[1] += 0.12395309882747069;
                    }
                  } else {
                    if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4517073631286621094) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.999330207635633;
                      result[1] += 0.0006697923643670462;
                    }
                  }
                }
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2542048841714859009) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2504337131977081299) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.1401235461235046387) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                      result[0] += 0.9947368421052631;
                      result[1] += 0.005263157894736842;
                    } else {
                      result[0] += 0.8859126984126984;
                      result[1] += 0.11408730158730158;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              } else {
                if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3773652315139770508) ) ) {
                      result[0] += 0.9565217391304348;
                      result[1] += 0.043478260869565216;
                    } else {
                      result[0] += 0.16666666666666666;
                      result[1] += 0.8333333333333334;
                    }
                  } else {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3517352938652038574) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.125;
                      result[1] += 0.875;
                    }
                  }
                } else {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                      result[0] += 0.8127853881278538;
                      result[1] += 0.1872146118721461;
                    } else {
                      result[0] += 0.3438395415472779;
                      result[1] += 0.6561604584527221;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1568982750177383423) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2617471963167190552) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001816415460780262947) ) ) {
                      result[0] += 0.9983113812901047;
                      result[1] += 0.0016886187098953055;
                    } else {
                      result[0] += 0.5;
                      result[1] += 0.5;
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
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001787317683920264244) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)3.175809979438781738e-06) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3297289460897445679) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7156386375427246094) ) ) {
            if ( ( !(data[68].missing != -1) || (data[68].fvalue <= (float)0.8134400844573974609) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001560852513648569584) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[74].missing != -1) || (data[74].fvalue <= (float)6.353249773383140564e-05) ) ) {
                if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04041793011128902435) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3241925090551376343) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2821168005466461182) ) ) {
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
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.9933518767356872559) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1440776735544204712) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1384864374995231628) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.730514228343963623) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.409673541784286499) ) ) {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8099800944328308105) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1098809279501438141) ) ) {
                      result[0] += 0.9999201235422547;
                      result[1] += 7.987645774535385e-05;
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
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1964461356401443481) ) ) {
                      result[0] += 0.9675036927621861;
                      result[1] += 0.03249630723781388;
                    } else {
                      result[0] += 0.8942534149788036;
                      result[1] += 0.10574658502119642;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
              if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7165536880493164062) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3335509002208709717) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                }
              } else {
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2368498146533966064) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2519441843032836914) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                      result[0] += 0.995697896749522;
                      result[1] += 0.004302103250478011;
                    } else {
                      result[0] += 0.9625668449197861;
                      result[1] += 0.0374331550802139;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[48].missing != -1) || (data[48].fvalue <= (float)0.2858231663703918457) ) ) {
                      result[0] += 0.75;
                      result[1] += 0.25;
                    } else {
                      result[0] += 0.989247311827957;
                      result[1] += 0.010752688172043012;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1410631909966468811) ) ) {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                      result[0] += 0.06157635467980296;
                      result[1] += 0.9384236453201971;
                    } else {
                      result[0] += 0.5989461358313818;
                      result[1] += 0.40105386416861827;
                    }
                  } else {
                    if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001578567724209278822) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9933362949800089;
                      result[1] += 0.006663705019991115;
                    }
                  }
                }
              } else {
                if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001825273095164448023) ) ) {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
                      result[0] += 0.8666666666666667;
                      result[1] += 0.13333333333333333;
                    } else {
                      result[0] += 0.009375523187677884;
                      result[1] += 0.9906244768123221;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
            if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7406133711338043213) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1098809279501438141) ) ) {
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2836409211158752441) ) ) {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4135483652353286743) ) ) {
                    if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.00177719752537086606) ) ) {
                      result[0] += 0.8888888888888888;
                      result[1] += 0.1111111111111111;
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
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2469881549477577209) ) ) {
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7759626507759094238) ) ) {
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
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4158186167478561401) ) ) {
                  if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.97152748703956604) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                      result[0] += 0.1;
                      result[1] += 0.9;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3429093062877655029) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4284365326166152954) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2898804396390914917) ) ) {
                      result[0] += 0.33962264150943394;
                      result[1] += 0.660377358490566;
                    } else {
                      result[0] += 0.003727865796831314;
                      result[1] += 0.9962721342031687;
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
          if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.6869266629219055176) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2542082220315933228) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.8161026239395141602) ) ) {
                  if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.771973729133605957) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1516199931502342224) ) ) {
                      result[0] += 0.9910313901345291;
                      result[1] += 0.008968609865470852;
                    } else {
                      result[0] += 0.9997786925153809;
                      result[1] += 0.0002213074846191298;
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
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7805594503879547119) ) ) {
        if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3166143298149108887) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
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
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
        if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2087755054235458374) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001825273095164448023) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3502274602651596069) ) ) {
                    if ( ( !(data[64].missing != -1) || (data[64].fvalue <= (float)0.709514915943145752) ) ) {
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
              } else {
                if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
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
            if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8868957757949829102) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2542048841714859009) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3487196117639541626) ) ) {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3179547637701034546) ) ) {
                      result[0] += 0.96;
                      result[1] += 0.04;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.05307262569832402;
                      result[1] += 0.946927374301676;
                    }
                  }
                } else {
                  if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7174687683582305908) ) ) {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
                      result[0] += 0.1507537688442211;
                      result[1] += 0.8492462311557789;
                    } else {
                      result[0] += 0.004160887656033287;
                      result[1] += 0.9958391123439667;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                      result[0] += 0.5263157894736842;
                      result[1] += 0.47368421052631576;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
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
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
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
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                      result[0] += 0.9541062801932367;
                      result[1] += 0.04589371980676329;
                    } else {
                      result[0] += 0.6656441717791411;
                      result[1] += 0.3343558282208589;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3085954785346984863) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2945583313703536987) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2898804396390914917) ) ) {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1335144117474555969) ) ) {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2891004979610443115) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.23760976642370224) ) ) {
                      result[0] += 0.9864864864864865;
                      result[1] += 0.013513513513513514;
                    } else {
                      result[0] += 0.027777777777777776;
                      result[1] += 0.9722222222222222;
                    }
                  }
                } else {
                  if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7183859944343566895) ) ) {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4150562137365341187) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.84;
                      result[1] += 0.16;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511872798204421997) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3335509002208709717) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2376131191849708557) ) ) {
                      result[0] += 0.9414225941422594;
                      result[1] += 0.058577405857740586;
                    } else {
                      result[0] += 0.29310344827586204;
                      result[1] += 0.7068965517241379;
                    }
                  } else {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3110286146402359009) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9943820224719101;
                      result[1] += 0.0056179775280898875;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.786156773567199707) ) ) {
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2945583313703536987) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2345921769738197327) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2265996038913726807) ) ) {
                      result[0] += 0.9285714285714286;
                      result[1] += 0.07142857142857142;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2526977509260177612) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2345921769738197327) ) ) {
                      result[0] += 0.9641025641025641;
                      result[1] += 0.035897435897435895;
                    } else {
                      result[0] += 0.234375;
                      result[1] += 0.765625;
                    }
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2413842752575874329) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2210180163383483887) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1335144117474555969) ) ) {
                      result[0] += 0.9555555555555556;
                      result[1] += 0.044444444444444446;
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
            if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7979907989501953125) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.291439443826675415) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.374349549412727356) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.9708437919616699219) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              }
            } else {
              if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8887280821800231934) ) ) {
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
        if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7196456193923950195) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[75].missing != -1) || (data[75].fvalue <= (float)6.344990106299519539e-05) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1436370685696601868) ) ) {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4402987360954284668) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4316533952951431274) ) ) {
                      result[0] += 0.9993309951953291;
                      result[1] += 0.0006690048046708699;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4523910582065582275) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[44].missing != -1) || (data[44].fvalue <= (float)1.92727893590927124e-05) ) ) {
                      result[0] += 0.987012987012987;
                      result[1] += 0.012987012987012988;
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
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4284365326166152954) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001755689794663339853) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511906176805496216) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3741033822298049927) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9629629629629629;
                      result[1] += 0.037037037037037035;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                      result[0] += 0.9601328903654485;
                      result[1] += 0.03986710963455149;
                    } else {
                      result[0] += 0.265;
                      result[1] += 0.735;
                    }
                  }
                }
              } else {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1335144117474555969) ) ) {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2945583313703536987) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                      result[0] += 0.9820936639118457;
                      result[1] += 0.01790633608815427;
                    } else {
                      result[0] += 0.6311475409836066;
                      result[1] += 0.36885245901639346;
                    }
                  } else {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8173351287841796875) ) ) {
                      result[0] += 0.5568181818181818;
                      result[1] += 0.4431818181818182;
                    } else {
                      result[0] += 0.2727272727272727;
                      result[1] += 0.7272727272727273;
                    }
                  }
                } else {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2281074449419975281) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2459089905023574829) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9798850574712644;
                      result[1] += 0.020114942528735632;
                    }
                  } else {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
                      result[0] += 0.9747899159663865;
                      result[1] += 0.025210084033613446;
                    } else {
                      result[0] += 0.9979267449896337;
                      result[1] += 0.002073255010366275;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2898804396390914917) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2459089979529380798) ) ) {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2522295266389846802) ) ) {
                      result[0] += 0.9861325115562404;
                      result[1] += 0.01386748844375963;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7687848806381225586) ) ) {
                      result[0] += 1;
                      result[1] += 0;
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
                    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7183859944343566895) ) ) {
                      result[0] += 0.6206896551724138;
                      result[1] += 0.3793103448275862;
                    } else {
                      result[0] += 0.23;
                      result[1] += 0.77;
                    }
                  }
                }
              } else {
                if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
                  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8868957757949829102) ) ) {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
                      result[0] += 0.018651362984218076;
                      result[1] += 0.9813486370157819;
                    } else {
                      result[0] += 0.41414141414141414;
                      result[1] += 0.5858585858585859;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                      result[0] += 0.8938053097345132;
                      result[1] += 0.10619469026548672;
                    } else {
                      result[0] += 0.026615969581749048;
                      result[1] += 0.973384030418251;
                    }
                  }
                } else {
                  if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.9738049209117889404) ) ) {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3241925090551376343) ) ) {
                      result[0] += 0.4444444444444444;
                      result[1] += 0.5555555555555556;
                    } else {
                      result[0] += 0.9752066115702479;
                      result[1] += 0.024793388429752067;
                    }
                  } else {
                    if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7726908326148986816) ) ) {
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
            if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.6744537055492401123) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2421378418803215027) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1346227526664733887) ) ) {
                  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05921705067157745361) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2891004979610443115) ) ) {
                      result[0] += 0.8888888888888888;
                      result[1] += 0.1111111111111111;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7915643751621246338) ) ) {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
                      result[0] += 0.875;
                      result[1] += 0.125;
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
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2436483129858970642) ) ) {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2103353813290596008) ) ) {
                    if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001856900984421372414) ) ) {
                      result[0] += 0.9992644895557516;
                      result[1] += 0.0007355104442483084;
                    } else {
                      result[0] += 0.9787234042553191;
                      result[1] += 0.02127659574468085;
                    }
                  } else {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3472117632627487183) ) ) {
                      result[0] += 0.9992647058823529;
                      result[1] += 0.0007352941176470588;
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
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1362570971250534058) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1539440527558326721) ) ) {
          if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001789847679901868105) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[74].missing != -1) || (data[74].fvalue <= (float)6.353249773383140564e-05) ) ) {
              if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)2.731941640377044678e-05) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2655183523893356323) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1320431455969810486) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04041793011128902435) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9992663242846662;
                      result[1] += 0.0007336757153338225;
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
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7805594503879547119) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
        if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4306223839521408081) ) ) {
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
          if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.9927334785461425781) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06028983974829316139) ) ) {
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
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.3002223819494247437) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7411437630653381348) ) ) {
      if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001774667529389262199) ) ) {
        if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.09138808771967887878) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.13719949871301651) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3725434988737106323) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2504337131977081299) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2376131191849708557) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3532431274652481079) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7845102548599243164) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2232787013053894043) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9736842105263158;
                      result[1] += 0.02631578947368421;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1335144117474555969) ) ) {
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
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                      result[0] += 0.5;
                      result[1] += 0.5;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3078155368566513062) ) ) {
                    if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.9059231579303741455) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.05405405405405406;
                      result[1] += 0.9459459459459459;
                    }
                  } else {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7879869341850280762) ) ) {
                      result[0] += 0.4166666666666667;
                      result[1] += 0.5833333333333334;
                    } else {
                      result[0] += 0.9230769230769231;
                      result[1] += 0.07692307692307693;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1288257911801338196) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3470626324415206909) ) ) {
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
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3772213906049728394) ) ) {
                    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7156386375427246094) ) ) {
                      result[0] += 0.5925925925925926;
                      result[1] += 0.4074074074074074;
                    } else {
                      result[0] += 0.9938775510204082;
                      result[1] += 0.006122448979591836;
                    }
                  } else {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3335509002208709717) ) ) {
                      result[0] += 0.7636363636363637;
                      result[1] += 0.23636363636363636;
                    } else {
                      result[0] += 0.9806678383128296;
                      result[1] += 0.019332161687170474;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                  if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7220484018325805664) ) ) {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.419579729437828064) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.015384615384615385;
                      result[1] += 0.9846153846153847;
                    }
                  } else {
                    if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001830333145335316658) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.3333333333333333;
                      result[1] += 0.6666666666666666;
                    }
                  }
                } else {
                  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8868957757949829102) ) ) {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3788730651140213013) ) ) {
                      result[0] += 0.7487266553480475;
                      result[1] += 0.25127334465195245;
                    } else {
                      result[0] += 0.44549763033175355;
                      result[1] += 0.5545023696682464;
                    }
                  } else {
                    if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
                      result[0] += 0.8705293276108726;
                      result[1] += 0.12947067238912732;
                    } else {
                      result[0] += 0.7369186046511628;
                      result[1] += 0.26308139534883723;
                    }
                  }
                }
              } else {
                if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8228516578674316406) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7156386375427246094) ) ) {
                      result[0] += 0.2894736842105263;
                      result[1] += 0.7105263157894737;
                    } else {
                      result[0] += 0.9894366197183099;
                      result[1] += 0.01056338028169014;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.04040404040404041;
                      result[1] += 0.9595959595959596;
                    }
                  }
                } else {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 0.9681274900398407;
                      result[1] += 0.03187250996015936;
                    } else {
                      result[0] += 0.3208955223880597;
                      result[1] += 0.6791044776119403;
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
              if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.6856892406940460205) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3803411275148391724) ) ) {
                  if ( ( !(data[44].missing != -1) || (data[44].fvalue <= (float)1.92727893590927124e-05) ) ) {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1436370685696601868) ) ) {
                      result[0] += 0.9989943455656332;
                      result[1] += 0.0010056544343668172;
                    } else {
                      result[0] += 0.9879807692307693;
                      result[1] += 0.01201923076923077;
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
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3653041869401931763) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
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
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
          if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7795160412788391113) ) ) {
            if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7775399684906005859) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7491170167922973633) ) ) {
                if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
                  if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7883813679218292236) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2356449663639068604) ) ) {
                      result[0] += 0.5;
                      result[1] += 0.5;
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
                if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
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
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2345921769738197327) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3117152303457260132) ) ) {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3125364631414413452) ) ) {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.360781446099281311) ) ) {
                      result[0] += 0.9473684210526315;
                      result[1] += 0.05263157894736842;
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
              }
            } else {
              if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7165536880493164062) ) ) {
                if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.9706151187419891357) ) ) {
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2421378418803215027) ) ) {
                      result[0] += 0.1111111111111111;
                      result[1] += 0.8888888888888888;
                    } else {
                      result[0] += 0.625;
                      result[1] += 0.375;
                    }
                  } else {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7750433683395385742) ) ) {
                      result[0] += 0.023622047244094488;
                      result[1] += 0.9763779527559056;
                    } else {
                      result[0] += 0.14285714285714285;
                      result[1] += 0.8571428571428571;
                    }
                  }
                } else {
                  if ( ( !(data[68].missing != -1) || (data[68].fvalue <= (float)0.8193623125553131104) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
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
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1964461356401443481) ) ) {
                  if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7147214412689208984) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2542048841714859009) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
                      result[0] += 0.2692307692307692;
                      result[1] += 0.7307692307692307;
                    } else {
                      result[0] += 0.9310344827586207;
                      result[1] += 0.06896551724137931;
                    }
                  }
                } else {
                  if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
                    if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7722954750061035156) ) ) {
                      result[0] += 0.6097560975609756;
                      result[1] += 0.3902439024390244;
                    } else {
                      result[0] += 0.125;
                      result[1] += 0.875;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                      result[0] += 0.30434782608695654;
                      result[1] += 0.6956521739130435;
                    } else {
                      result[0] += 0.012738853503184714;
                      result[1] += 0.9872611464968153;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7852395772933959961) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2345921769738197327) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                      result[0] += 0.7525773195876289;
                      result[1] += 0.24742268041237114;
                    } else {
                      result[0] += 0.9807692307692307;
                      result[1] += 0.019230769230769232;
                    }
                  } else {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.2974597364664077759) ) ) {
                      result[0] += 0.9565217391304348;
                      result[1] += 0.043478260869565216;
                    } else {
                      result[0] += 0.6737588652482269;
                      result[1] += 0.3262411347517731;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
                  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8878130018711090088) ) ) {
                    if ( ( !(data[48].missing != -1) || (data[48].fvalue <= (float)0.7865853607654571533) ) ) {
                      result[0] += 0.09523809523809523;
                      result[1] += 0.9047619047619048;
                    } else {
                      result[0] += 0.5347222222222222;
                      result[1] += 0.4652777777777778;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                      result[0] += 0.9543973941368078;
                      result[1] += 0.04560260586319218;
                    } else {
                      result[0] += 0.2553191489361702;
                      result[1] += 0.7446808510638298;
                    }
                  }
                } else {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3132751137018203735) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9143356643356644;
                      result[1] += 0.08566433566433566;
                    }
                  } else {
                    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2924157828092575073) ) ) {
                      result[0] += 0.9797619047619047;
                      result[1] += 0.02023809523809524;
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
        if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7464606761932373047) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1380424797534942627) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1391299143433570862) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3468081206083297729) ) ) {
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
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2421378418803215027) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8108993768692016602) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[75].missing != -1) || (data[75].fvalue <= (float)6.42756931483745575e-05) ) ) {
                    if ( ( !(data[44].missing != -1) || (data[44].fvalue <= (float)1.92727893590927124e-05) ) ) {
                      result[0] += 0.9994929362113754;
                      result[1] += 0.000507063788624609;
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
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7695273160934448242) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.287395089864730835) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
          if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8887280821800231934) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2293138951063156128) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1335144117474555969) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2376131191849708557) ) ) {
                    if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7987939119338989258) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.5;
                      result[1] += 0.5;
                    }
                  } else {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3163948804140090942) ) ) {
                      result[0] += 0.013157894736842105;
                      result[1] += 0.9868421052631579;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.416564062237739563) ) ) {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
                      result[0] += 0.375;
                      result[1] += 0.625;
                    } else {
                      result[0] += 0.9863945578231292;
                      result[1] += 0.013605442176870748;
                    }
                  } else {
                    if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7779622375965118408) ) ) {
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
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2504337131977081299) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1335144117474555969) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2898804396390914917) ) ) {
                      result[0] += 0.37623762376237624;
                      result[1] += 0.6237623762376238;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3773652166128158569) ) ) {
                      result[0] += 0.9959183673469387;
                      result[1] += 0.004081632653061225;
                    } else {
                      result[0] += 0.7448979591836735;
                      result[1] += 0.25510204081632654;
                    }
                  }
                } else {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2836409211158752441) ) ) {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7884455323219299316) ) ) {
                      result[0] += 0.9831460674157303;
                      result[1] += 0.016853932584269662;
                    } else {
                      result[0] += 0.8181818181818182;
                      result[1] += 0.18181818181818182;
                    }
                  } else {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
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
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4521647095680236816) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7174687683582305908) ) ) {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4090265333652496338) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2572224736213684082) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2311231344938278198) ) ) {
                    if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7229634523391723633) ) ) {
                      result[0] += 0.9873096446700508;
                      result[1] += 0.012690355329949238;
                    } else {
                      result[0] += 0.8461538461538461;
                      result[1] += 0.15384615384615385;
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
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
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
                  if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7202161252498626709) ) ) {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2937783896923065186) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.932475884244373;
                      result[1] += 0.06752411575562701;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3725434988737106323) ) ) {
                      result[0] += 0.7619047619047619;
                      result[1] += 0.23809523809523808;
                    } else {
                      result[0] += 0.25;
                      result[1] += 0.75;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2376131191849708557) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                      result[0] += 0.9764705882352941;
                      result[1] += 0.023529411764705882;
                    } else {
                      result[0] += 0.2606060606060606;
                      result[1] += 0.7393939393939394;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                      result[0] += 0.9069767441860465;
                      result[1] += 0.09302325581395349;
                    } else {
                      result[0] += 0.04225352112676056;
                      result[1] += 0.9577464788732394;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2542048841714859009) ) ) {
                if ( ( !(data[49].missing != -1) || (data[49].fvalue <= (float)0.6500808894634246826) ) ) {
                  if ( ( !(data[69].missing != -1) || (data[69].fvalue <= (float)0.8230048120021820068) ) ) {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3622884899377822876) ) ) {
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
                  result[0] += 1;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8868957757949829102) ) ) {
                  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3117152303457260132) ) ) {
                      result[0] += 0.26666666666666666;
                      result[1] += 0.7333333333333333;
                    } else {
                      result[0] += 0.004081632653061225;
                      result[1] += 0.9959183673469387;
                    }
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3179547637701034546) ) ) {
                      result[0] += 0.16666666666666666;
                      result[1] += 0.8333333333333334;
                    } else {
                      result[0] += 0.896551724137931;
                      result[1] += 0.10344827586206896;
                    }
                  }
                } else {
                  if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7174687683582305908) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9463722397476341;
                      result[1] += 0.05362776025236593;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2898804396390914917) ) ) {
                      result[0] += 0.9523809523809523;
                      result[1] += 0.047619047619047616;
                    } else {
                      result[0] += 0.03164556962025317;
                      result[1] += 0.9683544303797469;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2436483129858970642) ) ) {
                    if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.783373028039932251) ) ) {
                      result[0] += 0.008213552361396304;
                      result[1] += 0.9917864476386037;
                    } else {
                      result[0] += 0.25;
                      result[1] += 0.75;
                    }
                  } else {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.406763911247253418) ) ) {
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
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.351395338773727417) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2496801465749740601) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1410631909966468811) ) ) {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3811348378658294678) ) ) {
                      result[0] += 0.9494949494949495;
                      result[1] += 0.050505050505050504;
                    } else {
                      result[0] += 0.6;
                      result[1] += 0.4;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              } else {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3668120354413986206) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              }
            } else {
              if ( ( !(data[44].missing != -1) || (data[44].fvalue <= (float)3.175809979438781738e-06) ) ) {
                if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2209661528468132019) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
                    if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4517073631286621094) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9999612354269433;
                      result[1] += 3.87645730566835e-05;
                    }
                  } else {
                    if ( ( !(data[75].missing != -1) || (data[75].fvalue <= (float)6.34482712484896183e-05) ) ) {
                      result[0] += 0.9993292144748456;
                      result[1] += 0.0006707855251544572;
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
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001759482314810156822) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1042889803647994995) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
            if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7174687683582305908) ) ) {
              if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3586165159940719604) ) ) {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2376131191849708557) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.6666666666666666;
                      result[1] += 0.3333333333333333;
                    }
                  } else {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
                      result[0] += 0.6666666666666666;
                      result[1] += 0.3333333333333333;
                    } else {
                      result[0] += 0.06802721088435375;
                      result[1] += 0.9319727891156463;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2345921769738197327) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2315779253840446472) ) ) {
                      result[0] += 0.13513513513513514;
                      result[1] += 0.8648648648648649;
                    } else {
                      result[0] += 0.9553571428571429;
                      result[1] += 0.044642857142857144;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2542048841714859009) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.11646586345381527;
                      result[1] += 0.8835341365461847;
                    }
                  }
                }
              } else {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1410631909966468811) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2345921769738197327) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2489265948534011841) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3758573830127716064) ) ) {
                      result[0] += 0.75;
                      result[1] += 0.25;
                    } else {
                      result[0] += 0.1111111111111111;
                      result[1] += 0.8888888888888888;
                    }
                  }
                } else {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8173351287841796875) ) ) {
                    if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7432717978954315186) ) ) {
                      result[0] += 0.6428571428571429;
                      result[1] += 0.35714285714285715;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
                      result[0] += 0.025974025974025976;
                      result[1] += 0.974025974025974;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3065050989389419556) ) ) {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2368498146533966064) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9615384615384616;
                      result[1] += 0.038461538461538464;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2376131191849708557) ) ) {
                      result[0] += 0.9787951807228915;
                      result[1] += 0.021204819277108433;
                    } else {
                      result[0] += 0.4338235294117647;
                      result[1] += 0.5661764705882353;
                    }
                  }
                }
              } else {
                if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8868957757949829102) ) ) {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8173351287841796875) ) ) {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1994618251919746399) ) ) {
                      result[0] += 0.6031746031746031;
                      result[1] += 0.3968253968253968;
                    } else {
                      result[0] += 0.12307692307692308;
                      result[1] += 0.8769230769230769;
                    }
                  } else {
                    if ( ( !(data[48].missing != -1) || (data[48].fvalue <= (float)0.7865853607654571533) ) ) {
                      result[0] += 0.45454545454545453;
                      result[1] += 0.5454545454545454;
                    } else {
                      result[0] += 0.08;
                      result[1] += 0.92;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3241925090551376343) ) ) {
                      result[0] += 0.9047619047619048;
                      result[1] += 0.09523809523809523;
                    } else {
                      result[0] += 0.9948186528497409;
                      result[1] += 0.0051813471502590676;
                    }
                  } else {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
                      result[0] += 0.6932038834951456;
                      result[1] += 0.3067961165048544;
                    } else {
                      result[0] += 0.31711145996860285;
                      result[1] += 0.6828885400313972;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7893081605434417725) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2617471963167190552) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001789847679901868105) ) ) {
                  if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.66775473952293396) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
                      result[0] += 0.8983050847457628;
                      result[1] += 0.1016949152542373;
                    } else {
                      result[0] += 0.999688431922375;
                      result[1] += 0.00031156807762496106;
                    }
                  }
                } else {
                  if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7786253094673156738) ) ) {
                    if ( ( !(data[70].missing != -1) || (data[70].fvalue <= (float)0.9328019320964813232) ) ) {
                      result[0] += 0.8571428571428571;
                      result[1] += 0.14285714285714285;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3571722805500030518) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9743589743589743;
                      result[1] += 0.02564102564102564;
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
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1539440527558326721) ) ) {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4284365326166152954) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8247438371181488037) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1531271114945411682) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2889055609703063965) ) ) {
              result[0] += 1;
              result[1] += 0;
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
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3009759485721588135) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3460290580987930298) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
          if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2240921184420585632) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.1381790786981582642) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4517073631286621094) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
                    if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
                      result[0] += 0.9696969696969697;
                      result[1] += 0.030303030303030304;
                    } else {
                      result[0] += 0.9995725608490162;
                      result[1] += 0.0004274391509837207;
                    }
                  } else {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                      result[0] += 0.9667133847231956;
                      result[1] += 0.03328661527680449;
                    } else {
                      result[0] += 0.994708423326134;
                      result[1] += 0.005291576673866091;
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
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.0031545741324921135;
                      result[1] += 0.9968454258675079;
                    }
                  } else {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3140443116426467896) ) ) {
                      result[0] += 0.9517958412098299;
                      result[1] += 0.048204158790170135;
                    } else {
                      result[0] += 0.5555555555555556;
                      result[1] += 0.4444444444444444;
                    }
                  }
                } else {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                      result[0] += 0.8225806451612904;
                      result[1] += 0.1774193548387097;
                    } else {
                      result[0] += 0.15866558177379983;
                      result[1] += 0.8413344182262001;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7156386375427246094) ) ) {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2290521711111068726) ) ) {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3163948804140090942) ) ) {
                      result[0] += 0.8062015503875969;
                      result[1] += 0.1937984496124031;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3288721591234207153) ) ) {
                      result[0] += 0.5;
                      result[1] += 0.5;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3772213906049728394) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9913269731136166;
                      result[1] += 0.008673026886383347;
                    }
                  } else {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7870718538761138916) ) ) {
                      result[0] += 0.6;
                      result[1] += 0.4;
                    } else {
                      result[0] += 0.9541284403669725;
                      result[1] += 0.045871559633027525;
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
              if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)6.351619958877563477e-06) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1288257911801338196) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.291439443826675415) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2526977509260177612) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9976660053681876;
                      result[1] += 0.0023339946318123466;
                    }
                  } else {
                    if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7174687683582305908) ) ) {
                      result[0] += 0.9990671641791045;
                      result[1] += 0.0009328358208955224;
                    } else {
                      result[0] += 0.9999563718860434;
                      result[1] += 4.3628113956633656e-05;
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
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1516199931502342224) ) ) {
    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2984580099582672119) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
          if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001755689794663339853) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2293138951063156128) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.291439443826675415) ) ) {
                  if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                      result[0] += 0.9259259259259259;
                      result[1] += 0.07407407407407407;
                    } else {
                      result[0] += 0.38095238095238093;
                      result[1] += 0.6190476190476191;
                    }
                  }
                } else {
                  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8887280821800231934) ) ) {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1964461356401443481) ) ) {
                      result[0] += 0.9578947368421052;
                      result[1] += 0.042105263157894736;
                    } else {
                      result[0] += 0.4745762711864407;
                      result[1] += 0.5254237288135594;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2428913936018943787) ) ) {
                      result[0] += 0.9767441860465116;
                      result[1] += 0.023255813953488372;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                }
              } else {
                if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2103353813290596008) ) ) {
                    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7138063609600067139) ) ) {
                      result[0] += 0.9939540507859734;
                      result[1] += 0.006045949214026602;
                    } else {
                      result[0] += 0.9997815640017474;
                      result[1] += 0.00021843599825251202;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1425671949982643127) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9996330275229358;
                      result[1] += 0.0003669724770642202;
                    }
                  }
                } else {
                  if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.9701600968837738037) ) ) {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4150562137365341187) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9987893462469734;
                      result[1] += 0.0012106537530266344;
                    }
                  } else {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3557280451059341431) ) ) {
                      result[0] += 0.9838187702265372;
                      result[1] += 0.016181229773462782;
                    } else {
                      result[0] += 0.9979838709677419;
                      result[1] += 0.0020161290322580645;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511906176805496216) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                  if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9842820465564727783) ) ) {
                    if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4523910582065582275) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9984532095901005;
                      result[1] += 0.0015467904098994587;
                    }
                  } else {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3622884899377822876) ) ) {
                      result[0] += 0.994086339444116;
                      result[1] += 0.0059136605558840925;
                    } else {
                      result[0] += 0.9470198675496688;
                      result[1] += 0.052980132450331126;
                    }
                  }
                } else {
                  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2345921769738197327) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7691298723220825195) ) ) {
                      result[0] += 0.9090909090909091;
                      result[1] += 0.09090909090909091;
                    } else {
                      result[0] += 0.9942028985507246;
                      result[1] += 0.005797101449275362;
                    }
                  }
                }
              } else {
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3179547637701034546) ) ) {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2250917553901672363) ) ) {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7852395772933959961) ) ) {
                      result[0] += 0.3875;
                      result[1] += 0.6125;
                    } else {
                      result[0] += 0.9827586206896551;
                      result[1] += 0.017241379310344827;
                    }
                  } else {
                    if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7165536880493164062) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.981797497155859;
                      result[1] += 0.01820250284414107;
                    }
                  }
                } else {
                  if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7156386375427246094) ) ) {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
                      result[0] += 0.06167400881057269;
                      result[1] += 0.9383259911894273;
                    } else {
                      result[0] += 0.6153846153846154;
                      result[1] += 0.38461538461538464;
                    }
                  } else {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7888342142105102539) ) ) {
                      result[0] += 0.9793103448275862;
                      result[1] += 0.020689655172413793;
                    } else {
                      result[0] += 0.75;
                      result[1] += 0.25;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4158186167478561401) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3600607514381408691) ) ) {
                    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7156386375427246094) ) ) {
                      result[0] += 0.1651376146788991;
                      result[1] += 0.8348623853211009;
                    } else {
                      result[0] += 0.7910447761194029;
                      result[1] += 0.208955223880597;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3639650344848632812) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.08083441981747067;
                      result[1] += 0.9191655801825294;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                      result[0] += 0.7777777777777778;
                      result[1] += 0.2222222222222222;
                    } else {
                      result[0] += 0.009569377990430622;
                      result[1] += 0.9904306220095693;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7750433683395385742) ) ) {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3803411275148391724) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2602400630712509155) ) ) {
                      result[0] += 0.29545454545454547;
                      result[1] += 0.7045454545454546;
                    } else {
                      result[0] += 0.989041095890411;
                      result[1] += 0.010958904109589041;
                    }
                  } else {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3319918960332870483) ) ) {
                      result[0] += 0.4962962962962963;
                      result[1] += 0.5037037037037037;
                    } else {
                      result[0] += 0.9047619047619048;
                      result[1] += 0.09523809523809523;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2677823752164840698) ) ) {
                  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7879869341850280762) ) ) {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1410631909966468811) ) ) {
                      result[0] += 0.8201438848920863;
                      result[1] += 0.17985611510791366;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7174687683582305908) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3485068678855895996) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[74].missing != -1) || (data[74].fvalue <= (float)6.353249773383140564e-05) ) ) {
                      result[0] += 0.998524711089255;
                      result[1] += 0.0014752889107450208;
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
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3499511033296585083) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2715568989515304565) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3586165159940719604) ) ) {
          if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7699392139911651611) ) ) {
            if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9933940470218658447) ) ) {
              if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.9161716103553771973) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                  if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7174687683582305908) ) ) {
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
                if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7678285837173461914) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3535631150007247925) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8127379119396209717) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4158186167478561401) ) ) {
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2126751989126205444) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2376131191849708557) ) ) {
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
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3788730651140213013) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3571722805500030518) ) ) {
                if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7480540573596954346) ) ) {
                  if ( ( !(data[50].missing != -1) || (data[50].fvalue <= (float)0.1432926803827285767) ) ) {
                    if ( ( !(data[63].missing != -1) || (data[63].fvalue <= (float)0.9962597787380218506) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[48].missing != -1) || (data[48].fvalue <= (float)0.2858231663703918457) ) ) {
                      result[0] += 0.75;
                      result[1] += 0.25;
                    } else {
                      result[0] += 0.991869918699187;
                      result[1] += 0.008130081300813009;
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
      } else {
        if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2240921184420585632) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[74].missing != -1) || (data[74].fvalue <= (float)6.342725828289985657e-05) ) ) {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8192496001720428467) ) ) {
              if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3292691260576248169) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2889055609703063965) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.294940754771232605) ) ) {
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
              if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7740996479988098145) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2919231504201889038) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4316533952951431274) ) ) {
                    if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7783113420009613037) ) ) {
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
                if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4316533952951431274) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3101553469896316528) ) ) {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3039167076349258423) ) ) {
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
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8099800944328308105) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3468081206083297729) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2293138951063156128) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
                      result[0] += 0.9807692307692307;
                      result[1] += 0.019230769230769232;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1335144117474555969) ) ) {
                      result[0] += 0.09523809523809523;
                      result[1] += 0.9047619047619048;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2891004979610443115) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2259324193000793457) ) ) {
                      result[0] += 0.7;
                      result[1] += 0.3;
                    } else {
                      result[0] += 0.05343511450381679;
                      result[1] += 0.9465648854961832;
                    }
                  }
                }
              } else {
                if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4517073631286621094) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1098809279501438141) ) ) {
                    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2781266868114471436) ) ) {
                      result[0] += 0.9998986931415257;
                      result[1] += 0.00010130685847431871;
                    } else {
                      result[0] += 0.9745649263721553;
                      result[1] += 0.025435073627844713;
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
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1346227526664733887) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7513609826564788818) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4075186997652053833) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                      result[0] += 0.9340836012861736;
                      result[1] += 0.06591639871382636;
                    } else {
                      result[0] += 0.45403899721448465;
                      result[1] += 0.5459610027855153;
                    }
                  } else {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.383395761251449585) ) ) {
                      result[0] += 0.9645714285714285;
                      result[1] += 0.03542857142857143;
                    } else {
                      result[0] += 0.4;
                      result[1] += 0.6;
                    }
                  }
                } else {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.286760672926902771) ) ) {
                      result[0] += 0.5096153846153846;
                      result[1] += 0.49038461538461536;
                    } else {
                      result[0] += 0.10743801652892562;
                      result[1] += 0.8925619834710744;
                    }
                  }
                }
              } else {
                if ( ( !(data[49].missing != -1) || (data[49].fvalue <= (float)0.5) ) ) {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7704465687274932861) ) ) {
                    if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.9747149646282196045) ) ) {
                      result[0] += 0.9539170506912442;
                      result[1] += 0.04608294930875576;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7870718538761138916) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3132751137018203735) ) ) {
                      result[0] += 0.9093198992443325;
                      result[1] += 0.0906801007556675;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4523910582065582275) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9924528301886792;
                      result[1] += 0.007547169811320755;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2262962982058525085) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2781266868114471436) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3607806414365768433) ) ) {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2852007895708084106) ) ) {
                    if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.820245891809463501) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.6666666666666666;
                      result[1] += 0.3333333333333333;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3117152303457260132) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2345921769738197327) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.6666666666666666;
                      result[1] += 0.3333333333333333;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3571722805500030518) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
                if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7870718538761138916) ) ) {
                      result[0] += 0.46808510638297873;
                      result[1] += 0.5319148936170213;
                    } else {
                      result[0] += 0.9344262295081968;
                      result[1] += 0.06557377049180328;
                    }
                  }
                } else {
                  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7852395772933959961) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3132751137018203735) ) ) {
                      result[0] += 0.4222222222222222;
                      result[1] += 0.5777777777777777;
                    } else {
                      result[0] += 0.1;
                      result[1] += 0.9;
                    }
                  } else {
                    if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7751695215702056885) ) ) {
                      result[0] += 0.25;
                      result[1] += 0.75;
                    } else {
                      result[0] += 0.875;
                      result[1] += 0.125;
                    }
                  }
                }
              } else {
                if ( ( !(data[70].missing != -1) || (data[70].fvalue <= (float)0.9305244982242584229) ) ) {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1410567238926887512) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                } else {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8265291750431060791) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                      result[0] += 0.07586206896551724;
                      result[1] += 0.9241379310344827;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.4;
                      result[1] += 0.6;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[66].missing != -1) || (data[66].fvalue <= (float)3.600493073463439941e-06) ) ) {
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7750433683395385742) ) ) {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2945583313703536987) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                } else {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8251364529132843018) ) ) {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3226326256990432739) ) ) {
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
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.9936611056327819824) ) ) {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4284365326166152954) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3253962397575378418) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[66].missing != -1) || (data[66].fvalue <= (float)3.177672624588012695e-06) ) ) {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04041793011128902435) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2979583591222763062) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2979583591222763062) ) ) {
                  if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.8113790452480316162) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7819254398345947266) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9375;
                      result[1] += 0.0625;
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
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
      if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7277058959007263184) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3864005208015441895) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.1381790786981582642) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04474986717104911804) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7805594503879547119) ) ) {
                    if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4517073631286621094) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9999717186572018;
                      result[1] += 2.8281342798156058e-05;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
                      result[0] += 0.7560240963855421;
                      result[1] += 0.24397590361445784;
                    } else {
                      result[0] += 0.9984262983038993;
                      result[1] += 0.0015737016961007168;
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
      if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.9933518767356872559) ) ) {
        if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7517754733562469482) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2813598960638046265) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3819010108709335327) ) ) {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7750433683395385742) ) ) {
                      result[0] += 0.9542168674698795;
                      result[1] += 0.04578313253012048;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3607806414365768433) ) ) {
                      result[0] += 0.8974358974358975;
                      result[1] += 0.10256410256410256;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.786156773567199707) ) ) {
                      result[0] += 0.6666666666666666;
                      result[1] += 0.3333333333333333;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2326309755444526672) ) ) {
                      result[0] += 0.7075471698113207;
                      result[1] += 0.29245283018867924;
                    } else {
                      result[0] += 0.9454545454545454;
                      result[1] += 0.05454545454545454;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2542048841714859009) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.013333333333333334;
                      result[1] += 0.9866666666666667;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9021558872305141;
                      result[1] += 0.0978441127694859;
                    }
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2858879715204238892) ) ) {
                      result[0] += 0.16570327552986513;
                      result[1] += 0.8342967244701349;
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
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2489265874028205872) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2145385518670082092) ) ) {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                      result[0] += 0.045454545454545456;
                      result[1] += 0.9545454545454546;
                    } else {
                      result[0] += 0.9835944700460829;
                      result[1] += 0.01640552995391705;
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
          if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.784955829381942749) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7842374145984649658) ) ) {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
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
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.13719949871301651) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2738175690174102783) ) ) {
                  if ( ( !(data[68].missing != -1) || (data[68].fvalue <= (float)0.8166275322437286377) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[74].missing != -1) || (data[74].fvalue <= (float)6.342725828289985657e-05) ) ) {
                    if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9765373766422271729) ) ) {
                      result[0] += 0.9847715736040609;
                      result[1] += 0.015228426395939087;
                    } else {
                      result[0] += 0.9999215532457345;
                      result[1] += 7.844675426554226e-05;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3499511033296585083) ) ) {
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
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1531271114945411682) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.758422166109085083) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2526977509260177612) ) ) {
                if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8887280821800231934) ) ) {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4180718958377838135) ) ) {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2368498146533966064) ) ) {
                      result[0] += 0.8421052631578947;
                      result[1] += 0.15789473684210525;
                    } else {
                      result[0] += 0.23333333333333334;
                      result[1] += 0.7666666666666667;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3101553469896316528) ) ) {
                      result[0] += 0.8;
                      result[1] += 0.2;
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
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
                      result[0] += 0.9701726844583988;
                      result[1] += 0.029827315541601257;
                    } else {
                      result[0] += 0.9995149484081489;
                      result[1] += 0.0004850515918511333;
                    }
                  } else {
                    if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7810099124908447266) ) ) {
                      result[0] += 0.9999760902830911;
                      result[1] += 2.3909716908951797e-05;
                    } else {
                      result[0] += 0.9938461538461538;
                      result[1] += 0.006153846153846154;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7507125139236450195) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8878130018711090088) ) ) {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3772213906049728394) ) ) {
                      result[0] += 0.7677946324387398;
                      result[1] += 0.2322053675612602;
                    } else {
                      result[0] += 0.9698354661791591;
                      result[1] += 0.03016453382084095;
                    }
                  } else {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7852395772933959961) ) ) {
                      result[0] += 0.8833333333333333;
                      result[1] += 0.11666666666666667;
                    } else {
                      result[0] += 0.9943231441048035;
                      result[1] += 0.005676855895196507;
                    }
                  }
                } else {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                      result[0] += 0.009389671361502348;
                      result[1] += 0.9906103286384976;
                    } else {
                      result[0] += 0.6666666666666666;
                      result[1] += 0.3333333333333333;
                    }
                  }
                }
              } else {
                if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1098809279501438141) ) ) {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1335144117474555969) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2617471963167190552) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9969918349806618;
                      result[1] += 0.0030081650193382035;
                    }
                  } else {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3607806414365768433) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9989270386266095;
                      result[1] += 0.001072961373390558;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2240322604775428772) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8173351287841796875) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                      result[0] += 0.9681093394077449;
                      result[1] += 0.03189066059225513;
                    } else {
                      result[0] += 0.6755555555555556;
                      result[1] += 0.3244444444444444;
                    }
                  } else {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                      result[0] += 0.20218579234972678;
                      result[1] += 0.7978142076502732;
                    } else {
                      result[0] += 0.9627659574468085;
                      result[1] += 0.03723404255319149;
                    }
                  }
                }
              } else {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
                  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7898192107677459717) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                      result[0] += 0.84375;
                      result[1] += 0.15625;
                    } else {
                      result[0] += 0.026676829268292682;
                      result[1] += 0.9733231707317073;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
                      result[0] += 0.08771929824561403;
                      result[1] += 0.9122807017543859;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3039176017045974731) ) ) {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.02702702702702703;
                      result[1] += 0.972972972972973;
                    }
                  } else {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3787812590599060059) ) ) {
                      result[0] += 0.884;
                      result[1] += 0.116;
                    } else {
                      result[0] += 0.7225130890052356;
                      result[1] += 0.2774869109947644;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2798527628183364868) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1410631909966468811) ) ) {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.752838432788848877) ) ) {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 0.9451612903225807;
                      result[1] += 0.054838709677419356;
                    } else {
                      result[0] += 0.43119266055045874;
                      result[1] += 0.5688073394495413;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              } else {
                if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3072590082883834839) ) ) {
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
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1339764222502708435) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[66].missing != -1) || (data[66].fvalue <= (float)3.812834620475769043e-06) ) ) {
                  if ( ( !(data[44].missing != -1) || (data[44].fvalue <= (float)3.175809979438781738e-06) ) ) {
                    if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)6.353482604026794434e-06) ) ) {
                      result[0] += 0.99989666574814;
                      result[1] += 0.00010333425186001654;
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
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1516199931502342224) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1380424797534942627) ) ) {
      if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4188258200883865356) ) ) {
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
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
                if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
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
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2103353813290596008) ) ) {
                    if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.993042677640914917) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.915057915057915;
                      result[1] += 0.08494208494208494;
                    }
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3163948804140090942) ) ) {
                      result[0] += 0.959731543624161;
                      result[1] += 0.040268456375838924;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2477068603038787842) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4519360363483428955) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2526977509260177612) ) ) {
                      result[0] += 0.2857142857142857;
                      result[1] += 0.7142857142857143;
                    } else {
                      result[0] += 0.9982248520710059;
                      result[1] += 0.0017751479289940828;
                    }
                  } else {
                    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
                      result[0] += 0.7040816326530612;
                      result[1] += 0.29591836734693877;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8887280821800231934) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3065050989389419556) ) ) {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2384096980094909668) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.7894736842105263;
                      result[1] += 0.21052631578947367;
                    }
                  } else {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8868957757949829102) ) ) {
                      result[0] += 0.9562043795620438;
                      result[1] += 0.043795620437956206;
                    } else {
                      result[0] += 0.7774030354131535;
                      result[1] += 0.22259696458684655;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.1415413469076156616) ) ) {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7695273160934448242) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                    if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9788148105144500732) ) ) {
                      result[0] += 0.9883040935672515;
                      result[1] += 0.011695906432748537;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
                      result[0] += 0.989041095890411;
                      result[1] += 0.010958904109589041;
                    } else {
                      result[0] += 0.5359477124183006;
                      result[1] += 0.46405228758169936;
                    }
                  }
                } else {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7870718538761138916) ) ) {
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
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2421378418803215027) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2293138951063156128) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2345921769738197327) ) ) {
                      result[0] += 0.9738562091503268;
                      result[1] += 0.026143790849673203;
                    } else {
                      result[0] += 0.5967741935483871;
                      result[1] += 0.4032258064516129;
                    }
                  }
                } else {
                  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8914754092693328857) ) ) {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3226326256990432739) ) ) {
                      result[0] += 0.8857142857142857;
                      result[1] += 0.11428571428571428;
                    } else {
                      result[0] += 0.9919117647058824;
                      result[1] += 0.008088235294117648;
                    }
                  } else {
                    if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.9715251624584197998) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.625;
                      result[1] += 0.375;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.786156773567199707) ) ) {
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7750433683395385742) ) ) {
                  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7852395772933959961) ) ) {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3787812590599060059) ) ) {
                      result[0] += 0.23728813559322035;
                      result[1] += 0.7627118644067796;
                    } else {
                      result[0] += 0.036613272311212815;
                      result[1] += 0.9633867276887872;
                    }
                  } else {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2992379516363143921) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.5319148936170213;
                      result[1] += 0.46808510638297873;
                    }
                  }
                } else {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8133634030818939209) ) ) {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                      result[0] += 0.25;
                      result[1] += 0.75;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
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
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001827803091146051884) ) ) {
                    if ( ( !(data[68].missing != -1) || (data[68].fvalue <= (float)0.8081991970539093018) ) ) {
                      result[0] += 0.125;
                      result[1] += 0.875;
                    } else {
                      result[0] += 0.8461538461538461;
                      result[1] += 0.15384615384615385;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                      result[0] += 0.9868421052631579;
                      result[1] += 0.013157894736842105;
                    } else {
                      result[0] += 0.7625;
                      result[1] += 0.2375;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2496801465749740601) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3630424141883850098) ) ) {
                  if ( ( !(data[68].missing != -1) || (data[68].fvalue <= (float)0.8077465295791625977) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7787209153175354004) ) ) {
                      result[0] += 0.6666666666666666;
                      result[1] += 0.3333333333333333;
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
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2542048841714859009) ) ) {
                if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7165536880493164062) ) ) {
                  if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.9159452617168426514) ) ) {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2220760732889175415) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9863636363636363;
                      result[1] += 0.013636363636363636;
                    }
                  } else {
                    if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7771176993846893311) ) ) {
                      result[0] += 0.9375;
                      result[1] += 0.0625;
                    } else {
                      result[0] += 0.5;
                      result[1] += 0.5;
                    }
                  }
                } else {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3764423131942749023) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4097796082496643066) ) ) {
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
                  if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.9724375307559967041) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7738044559955596924) ) ) {
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
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7676883339881896973) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2557153552770614624) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3586165159940719604) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4158186167478561401) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2968981415033340454) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.3611111111111111;
                      result[1] += 0.6388888888888888;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4135483652353286743) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.006802721088435374;
                      result[1] += 0.9931972789115646;
                    }
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
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1395496055483818054) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2172435075044631958) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.291439443826675415) ) ) {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2384096980094909668) ) ) {
                      result[0] += 0.9642857142857143;
                      result[1] += 0.03571428571428571;
                    } else {
                      result[0] += 0.6382978723404256;
                      result[1] += 0.3617021276595745;
                    }
                  } else {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2368498146533966064) ) ) {
                      result[0] += 0.990990990990991;
                      result[1] += 0.009009009009009009;
                    } else {
                      result[0] += 0.9111111111111111;
                      result[1] += 0.08888888888888889;
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
          if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
            if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7597486972808837891) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7183859944343566895) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1307562068104743958) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4143249690532684326) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              } else {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7695273160934448242) ) ) {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3535602688789367676) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.6711328625679016113) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9973333333333333;
                      result[1] += 0.0026666666666666666;
                    }
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1440776735544204712) ) ) {
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
            if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2889452427625656128) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8099800944328308105) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1307562068104743958) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3562579751014709473) ) ) {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3506717979907989502) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1410631909966468811) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
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
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.351395338773727417) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1546342372894287109) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.3009759485721588135) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.3101553469896316528) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2496801465749740601) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3725434988737106323) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                } else {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3487196117639541626) ) ) {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7750433683395385742) ) ) {
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
            if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.8161026239395141602) ) ) {
              if ( ( !(data[66].missing != -1) || (data[66].fvalue <= (float)2.520158886909484863e-05) ) ) {
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2883205562829971313) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2692928463220596313) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3472117632627487183) ) ) {
                      result[0] += 0.9986449864498645;
                      result[1] += 0.0013550135501355014;
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
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001774667529389262199) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1395496055483818054) ) ) {
          if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7156386375427246094) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7511392533779144287) ) ) {
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.282870367169380188) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1042889803647994995) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3787812590599060059) ) ) {
                if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.7159542739391326904) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.2914283722639083862) ) ) {
                    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7225069999694824219) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9933628318584071;
                      result[1] += 0.00663716814159292;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4519360363483428955) ) ) {
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
            if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4237040430307388306) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2311231344938278198) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511906176805496216) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2421378418803215027) ) ) {
                      result[0] += 0.9794183445190157;
                      result[1] += 0.02058165548098434;
                    } else {
                      result[0] += 0.8328290468986385;
                      result[1] += 0.16717095310136157;
                    }
                  }
                } else {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2326309755444526672) ) ) {
                    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
                      result[0] += 0.928374655647383;
                      result[1] += 0.07162534435261708;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3787812590599060059) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9951550387596899;
                      result[1] += 0.0048449612403100775;
                    }
                  }
                }
              } else {
                if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7677219212055206299) ) ) {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8173351287841796875) ) ) {
                    if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9705882352941176;
                      result[1] += 0.029411764705882353;
                    }
                  } else {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8864393234252929688) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
                      result[0] += 0.9934102141680395;
                      result[1] += 0.006589785831960461;
                    } else {
                      result[0] += 0.7954545454545454;
                      result[1] += 0.20454545454545456;
                    }
                  } else {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                      result[0] += 0.005190311418685121;
                      result[1] += 0.9948096885813149;
                    } else {
                      result[0] += 0.5577617328519856;
                      result[1] += 0.44223826714801445;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2738175839185714722) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
                  if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)6.353482604026794434e-06) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
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
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.326264403760433197) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
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
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3818887621164321899) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1979539841413497925) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2542048841714859009) ) ) {
                if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.786156773567199707) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4526197314262390137) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3257523924112319946) ) ) {
                      result[0] += 0.9861111111111112;
                      result[1] += 0.013888888888888888;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                    if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8096472322940826416) ) ) {
                      result[0] += 0.9428571428571428;
                      result[1] += 0.05714285714285714;
                    } else {
                      result[0] += 0.9976905311778291;
                      result[1] += 0.0023094688221709007;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2945583313703536987) ) ) {
                      result[0] += 0.25311203319502074;
                      result[1] += 0.7468879668049793;
                    } else {
                      result[0] += 0.8888888888888888;
                      result[1] += 0.1111111111111111;
                    }
                  }
                } else {
                  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2836409211158752441) ) ) {
                      result[0] += 0.8571428571428571;
                      result[1] += 0.14285714285714285;
                    } else {
                      result[0] += 0.14018691588785046;
                      result[1] += 0.8598130841121495;
                    }
                  } else {
                    if ( ( !(data[51].missing != -1) || (data[51].fvalue <= (float)0.7502022683620452881) ) ) {
                      result[0] += 0.2857142857142857;
                      result[1] += 0.7142857142857143;
                    } else {
                      result[0] += 0.8547008547008547;
                      result[1] += 0.1452991452991453;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3110286146402359009) ) ) {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3065050989389419556) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                    if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001827803091146051884) ) ) {
                      result[0] += 0.9032258064516129;
                      result[1] += 0.0967741935483871;
                    } else {
                      result[0] += 0.9923371647509579;
                      result[1] += 0.007662835249042145;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.07692307692307693;
                      result[1] += 0.9230769230769231;
                    }
                  }
                }
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2300674542784690857) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2009696662425994873) ) ) {
                    if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.8036140799522399902) ) ) {
                      result[0] += 0.9732142857142857;
                      result[1] += 0.026785714285714284;
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
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2250917553901672363) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2345921769738197327) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7695273160934448242) ) ) {
                      result[0] += 0.848;
                      result[1] += 0.152;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1320072859525680542) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
                      result[0] += 0.7391304347826086;
                      result[1] += 0.2608695652173913;
                    } else {
                      result[0] += 0.9759036144578314;
                      result[1] += 0.024096385542168676;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7183859944343566895) ) ) {
                if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7730868756771087646) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7769942581653594971) ) ) {
                    if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.97152748703956604) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.6666666666666666;
                      result[1] += 0.3333333333333333;
                    }
                  } else {
                    if ( ( !(data[51].missing != -1) || (data[51].fvalue <= (float)0.8501213788986206055) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.45454545454545453;
                      result[1] += 0.5454545454545454;
                    }
                  }
                }
              } else {
                if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7866132557392120361) ) ) {
                  if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.9676539897918701172) ) ) {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4090265333652496338) ) ) {
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
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7174687683582305908) ) ) {
              if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3787812590599060059) ) ) {
                  if ( ( !(data[68].missing != -1) || (data[68].fvalue <= (float)0.8184499442577362061) ) ) {
                    if ( ( !(data[68].missing != -1) || (data[68].fvalue <= (float)0.8084278702735900879) ) ) {
                      result[0] += 0.25;
                      result[1] += 0.75;
                    } else {
                      result[0] += 0.8064516129032258;
                      result[1] += 0.1935483870967742;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                } else {
                  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3179547637701034546) ) ) {
                      result[0] += 0.75;
                      result[1] += 0.25;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                }
              } else {
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3788730651140213013) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                      result[0] += 0.92;
                      result[1] += 0.08;
                    } else {
                      result[0] += 0.37777777777777777;
                      result[1] += 0.6222222222222222;
                    }
                  } else {
                    if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.9059231579303741455) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.10344827586206896;
                      result[1] += 0.896551724137931;
                    }
                  }
                } else {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2431841790676116943) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.0625;
                      result[1] += 0.9375;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1357784420251846313) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.045454545454545456;
                      result[1] += 0.9545454545454546;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3319918960332870483) ) ) {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3592728078365325928) ) ) {
                      result[0] += 0.9761904761904762;
                      result[1] += 0.023809523809523808;
                    } else {
                      result[0] += 0.7111111111111111;
                      result[1] += 0.28888888888888886;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2376131191849708557) ) ) {
                      result[0] += 0.25625;
                      result[1] += 0.74375;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                }
              } else {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7898192107677459717) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
                      result[0] += 0.0273972602739726;
                      result[1] += 0.9726027397260274;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3557280451059341431) ) ) {
                      result[0] += 0.9833333333333333;
                      result[1] += 0.016666666666666666;
                    } else {
                      result[0] += 0.7391304347826086;
                      result[1] += 0.2608695652173913;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                      result[0] += 0.9804560260586319;
                      result[1] += 0.019543973941368076;
                    } else {
                      result[0] += 0.40186915887850466;
                      result[1] += 0.5981308411214953;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3155513107776641846) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3179538697004318237) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3803411275148391724) ) ) {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2039853483438491821) ) ) {
                    if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
                      result[0] += 0.9411764705882353;
                      result[1] += 0.058823529411764705;
                    } else {
                      result[0] += 0.9992120701491606;
                      result[1] += 0.0007879298508394184;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2534546554088592529) ) ) {
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
          if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7835978567600250244) ) ) {
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
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1410631909966468811) ) ) {
        if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2243725359439849854) ) ) {
              if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
                  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2898804396390914917) ) ) {
                      result[0] += 0.6153846153846154;
                      result[1] += 0.38461538461538464;
                    } else {
                      result[0] += 0.06976744186046512;
                      result[1] += 0.9302325581395349;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2345921769738197327) ) ) {
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
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2945583313703536987) ) ) {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[70].missing != -1) || (data[70].fvalue <= (float)0.9328019320964813232) ) ) {
                      result[0] += 0.8536585365853658;
                      result[1] += 0.14634146341463414;
                    } else {
                      result[0] += 0.9671457905544147;
                      result[1] += 0.03285420944558522;
                    }
                  }
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
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3095207810401916504) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1346227526664733887) ) ) {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7852395772933959961) ) ) {
                      result[0] += 0.4;
                      result[1] += 0.6;
                    } else {
                      result[0] += 0.9354838709677419;
                      result[1] += 0.06451612903225806;
                    }
                  } else {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8878130018711090088) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.8;
                      result[1] += 0.2;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8237709105014801025) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3592728078365325928) ) ) {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                      result[0] += 0.8125;
                      result[1] += 0.1875;
                    } else {
                      result[0] += 0.10928319623971798;
                      result[1] += 0.8907168037602821;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7147214412689208984) ) ) {
                      result[0] += 0.8;
                      result[1] += 0.2;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
                      result[0] += 0.10875331564986737;
                      result[1] += 0.8912466843501327;
                    } else {
                      result[0] += 0.011156186612576065;
                      result[1] += 0.9888438133874239;
                    }
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.360781446099281311) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[70].missing != -1) || (data[70].fvalue <= (float)0.9387265145778656006) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8868957757949829102) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1964461356401443481) ) ) {
                      result[0] += 0.6774193548387096;
                      result[1] += 0.3225806451612903;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2924157828092575073) ) ) {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3615345805883407593) ) ) {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3741033822298049927) ) ) {
                      result[0] += 0.9166666666666666;
                      result[1] += 0.08333333333333333;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4029951542615890503) ) ) {
                      result[0] += 0.25;
                      result[1] += 0.75;
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
          if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7334492504596710205) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3864005208015441895) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7713658511638641357) ) ) {
                  if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7225069999694824219) ) ) {
                    if ( ( !(data[49].missing != -1) || (data[49].fvalue <= (float)0.7502022683620452881) ) ) {
                      result[0] += 0.9989035087719298;
                      result[1] += 0.0010964912280701754;
                    } else {
                      result[0] += 0.9998771247184108;
                      result[1] += 0.00012287528158918696;
                    }
                  } else {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3562579751014709473) ) ) {
                      result[0] += 0.9734513274336283;
                      result[1] += 0.02654867256637168;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511906176805496216) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.1380960345268249512) ) ) {
                      result[0] += 0.9795101271785209;
                      result[1] += 0.02048987282147904;
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
        if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7687848806381225586) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2542048841714859009) ) ) {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2750624716281890869) ) ) {
                if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.9656029343605041504) ) ) {
                  if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7847370803356170654) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
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
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7851566970348358154) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3570118993520736694) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2924157828092575073) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.16279069767441862;
                      result[1] += 0.8372093023255814;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              }
            } else {
              if ( ( !(data[68].missing != -1) || (data[68].fvalue <= (float)0.8193623125553131104) ) ) {
                if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7432717978954315186) ) ) {
                  if ( ( !(data[49].missing != -1) || (data[49].fvalue <= (float)0.5) ) ) {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2945583313703536987) ) ) {
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
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.148147091269493103) ) ) {
                    if ( ( !(data[50].missing != -1) || (data[50].fvalue <= (float)0.1432926803827285767) ) ) {
                      result[0] += 0.6666666666666666;
                      result[1] += 0.3333333333333333;
                    } else {
                      result[0] += 0.9611111111111111;
                      result[1] += 0.03888888888888889;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              } else {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1320072859525680542) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3733234405517578125) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.809438854455947876) ) ) {
                      result[0] += 0.25;
                      result[1] += 0.75;
                    } else {
                      result[0] += 0.9285714285714286;
                      result[1] += 0.07142857142857142;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2984580099582672119) ) ) {
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2492138519883155823) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3429093062877655029) ) ) {
                    if ( ( !(data[49].missing != -1) || (data[49].fvalue <= (float)0.7502022683620452881) ) ) {
                      result[0] += 0.967741935483871;
                      result[1] += 0.03225806451612903;
                    } else {
                      result[0] += 0.9942857142857143;
                      result[1] += 0.005714285714285714;
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
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1380424797534942627) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8173351287841796875) ) ) {
              if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2945583313703536987) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.3333333333333333;
                      result[1] += 0.6666666666666666;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2526977509260177612) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                    if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001780990103725343943) ) ) {
                      result[0] += 0.9707602339181286;
                      result[1] += 0.029239766081871343;
                    } else {
                      result[0] += 0.8;
                      result[1] += 0.2;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.248926602303981781) ) ) {
                      result[0] += 0.3333333333333333;
                      result[1] += 0.6666666666666666;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2368498146533966064) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[64].missing != -1) || (data[64].fvalue <= (float)0.709514915943145752) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2376131191849708557) ) ) {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
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
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
              if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1098809279501438141) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8905603289604187012) ) ) {
                if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3578929752111434937) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
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
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.360781446099281311) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.303136780858039856) ) ) {
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
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3492304086685180664) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001672188809607177973) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2209661528468132019) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)6.351619958877563477e-06) ) ) {
              if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04041793011128902435) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.778712928295135498) ) ) {
                  if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.9724375307559967041) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1326894760131835938) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9960886571056062;
                      result[1] += 0.003911342894393742;
                    }
                  } else {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3557280451059341431) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9666666666666667;
                      result[1] += 0.03333333333333333;
                    }
                  }
                } else {
                  if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.8149213790893554688) ) ) {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2883205562829971313) ) ) {
                      result[0] += 0.9967213114754099;
                      result[1] += 0.003278688524590164;
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2436483129858970642) ) ) {
        if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8087992370128631592) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3101553469896316528) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7183859944343566895) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[69].missing != -1) || (data[69].fvalue <= (float)0.827790677547454834) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3163948804140090942) ) ) {
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
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001774667529389262199) ) ) {
        if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.09138808771967887878) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.13797808438539505) ) ) {
            if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4517073631286621094) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2781266868114471436) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1335144117474555969) ) ) {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9229881742140179;
                      result[1] += 0.07701182578598212;
                    }
                  } else {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
                      result[0] += 0.9737991266375546;
                      result[1] += 0.026200873362445413;
                    } else {
                      result[0] += 0.9988626023657871;
                      result[1] += 0.0011373976342129207;
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
          if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1380424797534942627) ) ) {
              if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7156386375427246094) ) ) {
                if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
                  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2345921769738197327) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2929984480142593384) ) ) {
                      result[0] += 0.15384615384615385;
                      result[1] += 0.8461538461538461;
                    } else {
                      result[0] += 0.8620689655172413;
                      result[1] += 0.13793103448275862;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2103353813290596008) ) ) {
                      result[0] += 0.038461538461538464;
                      result[1] += 0.9615384615384616;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                }
              } else {
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3319918960332870483) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                      result[0] += 0.6470588235294118;
                      result[1] += 0.35294117647058826;
                    } else {
                      result[0] += 0.13622291021671826;
                      result[1] += 0.8637770897832817;
                    }
                  }
                } else {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2898804396390914917) ) ) {
                    if ( ( !(data[70].missing != -1) || (data[70].fvalue <= (float)0.9307508468627929688) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.8571428571428571;
                      result[1] += 0.14285714285714285;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3772213906049728394) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.6896551724137931;
                      result[1] += 0.3103448275862069;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7211333513259887695) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1972000598907470703) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.4482758620689655;
                      result[1] += 0.5517241379310345;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2376131191849708557) ) ) {
                      result[0] += 0.08064516129032258;
                      result[1] += 0.9193548387096774;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3571722805500030518) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2640112191438674927) ) ) {
                      result[0] += 0.16666666666666666;
                      result[1] += 0.8333333333333334;
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
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7612525224685668945) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2625041007995605469) ) ) {
                if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7870718538761138916) ) ) {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.1427365243434906006) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2391202449798583984) ) ) {
                      result[0] += 0.975;
                      result[1] += 0.025;
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
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3472117632627487183) ) ) {
                  if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9769923985004425049) ) ) {
                    if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.6909109652042388916) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.96;
                      result[1] += 0.04;
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
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1501128673553466797) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7686076164245605469) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7759626507759094238) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3374497294425964355) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1423501297831535339) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7667690515518188477) ) ) {
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
      }
    } else {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3217779546976089478) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)6.351619958877563477e-06) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1565207988023757935) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2723104655742645264) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9765373766422271729) ) ) {
                if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4316533952951431274) ) ) {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1404197141528129578) ) ) {
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
                if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.752838432788848877) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04041793011128902435) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3615049868822097778) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9976816074188563;
                      result[1] += 0.00231839258114374;
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
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1531271114945411682) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.286760672926902771) ) ) {
          if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3721477985382080078) ) ) {
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
      }
    } else {
      if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7104027271270751953) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1410567238926887512) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
            if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
              if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3571722805500030518) ) ) {
                  if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7854022383689880371) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2326309755444526672) ) ) {
                      result[0] += 0.9592298980747452;
                      result[1] += 0.04077010192525481;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2278067693114280701) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2602400630712509155) ) ) {
                      result[0] += 0.9125;
                      result[1] += 0.0875;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7183859944343566895) ) ) {
                  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.8807947019867549;
                      result[1] += 0.11920529801324503;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2481730282306671143) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
                      result[0] += 0.9421487603305785;
                      result[1] += 0.05785123966942149;
                    } else {
                      result[0] += 0.9914285714285714;
                      result[1] += 0.008571428571428572;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4075186997652053833) ) ) {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                      result[0] += 0.068;
                      result[1] += 0.932;
                    } else {
                      result[0] += 0.8257575757575758;
                      result[1] += 0.17424242424242425;
                    }
                  } else {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.410533517599105835) ) ) {
                      result[0] += 0.7942583732057417;
                      result[1] += 0.20574162679425836;
                    } else {
                      result[0] += 0.9715808170515098;
                      result[1] += 0.028419182948490232;
                    }
                  }
                } else {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.2959518879652023315) ) ) {
                      result[0] += 0.9310344827586207;
                      result[1] += 0.06896551724137931;
                    } else {
                      result[0] += 0.2079207920792079;
                      result[1] += 0.7920792079207921;
                    }
                  }
                }
              } else {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.286760672926902771) ) ) {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3487196117639541626) ) ) {
                      result[0] += 0.782608695652174;
                      result[1] += 0.21739130434782608;
                    } else {
                      result[0] += 0.2765957446808511;
                      result[1] += 0.723404255319149;
                    }
                  } else {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.898989898989899;
                      result[1] += 0.10101010101010101;
                    }
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1395496055483818054) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                      result[0] += 0.6956521739130435;
                      result[1] += 0.30434782608695654;
                    } else {
                      result[0] += 0.00796812749003984;
                      result[1] += 0.9920318725099602;
                    }
                  } else {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3085954785346984863) ) ) {
                      result[0] += 0.013559322033898305;
                      result[1] += 0.9864406779661017;
                    } else {
                      result[0] += 0.21105527638190955;
                      result[1] += 0.7889447236180904;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.148147091269493103) ) ) {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3557280451059341431) ) ) {
                  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2251524776220321655) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.7435897435897436;
                      result[1] += 0.2564102564102564;
                    }
                  }
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3787812590599060059) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4006827026605606079) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9789029535864979;
                      result[1] += 0.02109704641350211;
                    }
                  }
                }
              } else {
                if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4006827026605606079) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3772213906049728394) ) ) {
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
          if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3850509226322174072) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2708033323287963867) ) ) {
              if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8147350847721099854) ) ) {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.150109514594078064) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2376131191849708557) ) ) {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8173351287841796875) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                }
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2421378418803215027) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                      result[0] += 0.4375;
                      result[1] += 0.5625;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1352662220597267151) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[44].missing != -1) || (data[44].fvalue <= (float)3.175809979438781738e-06) ) ) {
                  if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)6.351619958877563477e-06) ) ) {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3472117632627487183) ) ) {
                      result[0] += 0.999838592526834;
                      result[1] += 0.0001614074731660076;
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
              }
            }
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
