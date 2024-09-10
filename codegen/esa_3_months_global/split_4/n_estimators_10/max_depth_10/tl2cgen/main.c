
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
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7768823504447937012) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4158186167478561401) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
          if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7406133711338043213) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7805594503879547119) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.148147091269493103) ) ) {
                    if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.706625819206237793) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9998078295722835;
                      result[1] += 0.00019217042771646627;
                    }
                  } else {
                    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.257234424352645874) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.981651376146789;
                      result[1] += 0.01834862385321101;
                    }
                  }
                } else {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2326309755444526672) ) ) {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7870718538761138916) ) ) {
                      result[0] += 0.8832607835377918;
                      result[1] += 0.11673921646220815;
                    } else {
                      result[0] += 0.9758403361344538;
                      result[1] += 0.02415966386554622;
                    }
                  } else {
                    if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7714433073997497559) ) ) {
                      result[0] += 0.9995425434583715;
                      result[1] += 0.0004574565416285453;
                    } else {
                      result[0] += 0.9954545454545455;
                      result[1] += 0.004545454545454545;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2293138951063156128) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
                if ( ( !(data[48].missing != -1) || (data[48].fvalue <= (float)0.9291158616542816162) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[50].missing != -1) || (data[50].fvalue <= (float)0.5) ) ) {
                      result[0] += 0.5;
                      result[1] += 0.5;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1335144117474555969) ) ) {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.1396664753556251526) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
                      result[0] += 0.8431372549019608;
                      result[1] += 0.1568627450980392;
                    } else {
                      result[0] += 0.9908256880733946;
                      result[1] += 0.009174311926605505;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                } else {
                  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7879869341850280762) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4526197314262390137) ) ) {
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
            if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.813657611608505249) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2209661528468132019) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3592862784862518311) ) ) {
                    if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8257574141025543213) ) ) {
                      result[0] += 0.9970238095238095;
                      result[1] += 0.002976190476190476;
                    } else {
                      result[0] += 0.6666666666666666;
                      result[1] += 0.3333333333333333;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.2974597364664077759) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3210727423429489136) ) ) {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2056566253304481506) ) ) {
                      result[0] += 0.25;
                      result[1] += 0.75;
                    } else {
                      result[0] += 0.9772727272727273;
                      result[1] += 0.022727272727272728;
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
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7879869341850280762) ) ) {
                      result[0] += 0.5565217391304348;
                      result[1] += 0.4434782608695652;
                    } else {
                      result[0] += 0.1069182389937107;
                      result[1] += 0.8930817610062893;
                    }
                  }
                }
              } else {
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2898804396390914917) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.5577689243027888;
                      result[1] += 0.44223107569721115;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1380424797534942627) ) ) {
                      result[0] += 0.3064516129032258;
                      result[1] += 0.6935483870967742;
                    } else {
                      result[0] += 0.01910828025477707;
                      result[1] += 0.9808917197452229;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7852395772933959961) ) ) {
                      result[0] += 0.5769230769230769;
                      result[1] += 0.4230769230769231;
                    } else {
                      result[0] += 0.9622641509433962;
                      result[1] += 0.03773584905660377;
                    }
                  } else {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8173351287841796875) ) ) {
                      result[0] += 0.08469539375928678;
                      result[1] += 0.9153046062407132;
                    } else {
                      result[0] += 0.01834862385321101;
                      result[1] += 0.981651376146789;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7842374145984649658) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2745711356401443481) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7193010449409484863) ) ) {
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
          } else {
            if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001787317683920264244) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2632576674222946167) ) ) {
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
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.9933518767356872559) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
        if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001822743099182844162) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7640107870101928711) ) ) {
                if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7475236356258392334) ) ) {
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
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1307562068104743958) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2507216855883598328) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001768339949194341898) ) ) {
                    if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.778712928295135498) ) ) {
                      result[0] += 0.5;
                      result[1] += 0.5;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8855220973491668701) ) ) {
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
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3101553469896316528) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3257523924112319946) ) ) {
                if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.07500752992928028107) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.266275256872177124) ) ) {
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
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1365560218691825867) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7496495544910430908) ) ) {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8173351287841796875) ) ) {
                      result[0] += 0.8484848484848485;
                      result[1] += 0.15151515151515152;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7683391571044921875) ) ) {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2929984480142593384) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9;
                      result[1] += 0.1;
                    }
                  } else {
                    if ( ( !(data[74].missing != -1) || (data[74].fvalue <= (float)6.342725828289985657e-05) ) ) {
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
        if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3217779546976089478) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1571642681956291199) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3241925090551376343) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7842374145984649658) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3292691260576248169) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2904126793146133423) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1301127374172210693) ) ) {
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
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
        if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7794167101383209229) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8168953955173492432) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.140416853129863739) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[69].missing != -1) || (data[69].fvalue <= (float)0.8287030458450317383) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              } else {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2009696662425994873) ) ) {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2321719378232955933) ) ) {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3034902662038803101) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.3333333333333333;
                      result[1] += 0.6666666666666666;
                    }
                  } else {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2961181998252868652) ) ) {
                      result[0] += 0.3032258064516129;
                      result[1] += 0.6967741935483871;
                    } else {
                      result[0] += 0.9545454545454546;
                      result[1] += 0.045454545454545456;
                    }
                  }
                } else {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3179547637701034546) ) ) {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4210875779390335083) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.5;
                      result[1] += 0.5;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3101553469896316528) ) ) {
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
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3125364631414413452) ) ) {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2376131191849708557) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.967741935483871;
                      result[1] += 0.03225806451612903;
                    }
                  } else {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                      result[0] += 0.22142857142857142;
                      result[1] += 0.7785714285714286;
                    } else {
                      result[0] += 0.8414239482200647;
                      result[1] += 0.15857605177993528;
                    }
                  }
                }
              } else {
                if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8192496001720428467) ) ) {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3819010108709335327) ) ) {
                    if ( ( !(data[48].missing != -1) || (data[48].fvalue <= (float)0.2858231663703918457) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.8095238095238095;
                      result[1] += 0.19047619047619047;
                    }
                  } else {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7870718538761138916) ) ) {
                      result[0] += 0.08571428571428572;
                      result[1] += 0.9142857142857143;
                    } else {
                      result[0] += 0.9375;
                      result[1] += 0.0625;
                    }
                  }
                } else {
                  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7870718538761138916) ) ) {
                    if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001841720833908766508) ) ) {
                      result[0] += 0.04;
                      result[1] += 0.96;
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
              if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7174687683582305908) ) ) {
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3195137530565261841) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3421293646097183228) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.8666666666666667;
                      result[1] += 0.13333333333333333;
                    }
                  } else {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                      result[0] += 0.02;
                      result[1] += 0.98;
                    } else {
                      result[0] += 0.23529411764705882;
                      result[1] += 0.7647058823529411;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2345921769738197327) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[70].missing != -1) || (data[70].fvalue <= (float)0.9318918883800506592) ) ) {
                      result[0] += 0.21428571428571427;
                      result[1] += 0.7857142857142857;
                    } else {
                      result[0] += 0.011904761904761904;
                      result[1] += 0.9880952380952381;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.8235294117647058;
                      result[1] += 0.17647058823529413;
                    }
                  }
                } else {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3072590231895446777) ) ) {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9655172413793104;
                      result[1] += 0.034482758620689655;
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
            }
          }
        } else {
          if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.409673541784286499) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8191741108894348145) ) ) {
              if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7138063609600067139) ) ) {
                if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7665624916553497314) ) ) {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2781822234392166138) ) ) {
                    if ( ( !(data[50].missing != -1) || (data[50].fvalue <= (float)0.357469514012336731) ) ) {
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
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2103353813290596008) ) ) {
                if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7972104251384735107) ) ) {
                  if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7722954750061035156) ) ) {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3772213906049728394) ) ) {
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
            if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3818887621164321899) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3132751137018203735) ) ) {
                  if ( ( !(data[49].missing != -1) || (data[49].fvalue <= (float)0.7502022683620452881) ) ) {
                    if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7188424468040466309) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.8333333333333334;
                      result[1] += 0.16666666666666666;
                    }
                  } else {
                    if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8232134878635406494) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9285714285714286;
                      result[1] += 0.07142857142857142;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[70].missing != -1) || (data[70].fvalue <= (float)0.9391792118549346924) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3787812590599060059) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7979914844036102295) ) ) {
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
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3080129474401473999) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2345921769738197327) ) ) {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8082610666751861572) ) ) {
                      result[0] += 0.9893617021276596;
                      result[1] += 0.010638297872340425;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3132751137018203735) ) ) {
                      result[0] += 0.8529411764705882;
                      result[1] += 0.14705882352941177;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2126752063632011414) ) ) {
                      result[0] += 0.5;
                      result[1] += 0.5;
                    } else {
                      result[0] += 0.9952963311382879;
                      result[1] += 0.004703668861712135;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
                      result[0] += 0.4325068870523416;
                      result[1] += 0.5674931129476584;
                    } else {
                      result[0] += 0.9836065573770492;
                      result[1] += 0.01639344262295082;
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
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
          if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05169589631259441376) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7165536880493164062) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2929984480142593384) ) ) {
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2492138519883155823) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.778712928295135498) ) ) {
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
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3607806414365768433) ) ) {
                  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
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
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8191741108894348145) ) ) {
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
            if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.993042677640914917) ) ) {
              if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8189742863178253174) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.9644642472267150879) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2376131191849708557) ) ) {
              if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.8109857738018035889) ) ) {
                if ( ( !(data[64].missing != -1) || (data[64].fvalue <= (float)0.709514915943145752) ) ) {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4135483652353286743) ) ) {
                      result[0] += 0.015384615384615385;
                      result[1] += 0.9846153846153847;
                    } else {
                      result[0] += 0.17543859649122806;
                      result[1] += 0.8245614035087719;
                    }
                  }
                } else {
                  if ( ( !(data[70].missing != -1) || (data[70].fvalue <= (float)0.93644675612449646) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9813209176063537598) ) ) {
                      result[0] += 0.7142857142857143;
                      result[1] += 0.2857142857142857;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                }
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511872798204421997) ) ) {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.411287456750869751) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
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
              } else {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1395496055483818054) ) ) {
                  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2580151036381721497) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
                      result[0] += 0.21428571428571427;
                      result[1] += 0.7857142857142857;
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
      } else {
        if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7411437630653381348) ) ) {
          if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2370446100831031799) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1425671949982643127) ) ) {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
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
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3226326256990432739) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3571722805500030518) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.6744537055492401123) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7787209153175354004) ) ) {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.370983615517616272) ) ) {
                      result[0] += 0.994263862332696;
                      result[1] += 0.0057361376673040155;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001789847679901868105) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9166666666666666;
                      result[1] += 0.08333333333333333;
                    }
                  }
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
          }
        }
      }
    }
  } else {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8243512511253356934) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1539440527558326721) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3833957463502883911) ) ) {
          if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04041793011128902435) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3023577183485031128) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2929984480142593384) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.287395089864730835) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8223896622657775879) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1314025372266769409) ) ) {
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
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05921705067157745361) ) ) {
      if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7517754733562469482) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7193010449409484863) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3557280451059341431) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3615049868822097778) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4150562137365341187) ) ) {
              if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001837923249695450068) ) ) {
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1320431455969810486) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3156149387359619141) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
              if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2103353813290596008) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                    if ( ( !(data[64].missing != -1) || (data[64].fvalue <= (float)0.709514915943145752) ) ) {
                      result[0] += 0.9326145552560647;
                      result[1] += 0.0673854447439353;
                    } else {
                      result[0] += 0.6956521739130435;
                      result[1] += 0.30434782608695654;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 0.9866666666666667;
                      result[1] += 0.013333333333333334;
                    } else {
                      result[0] += 0.17560975609756097;
                      result[1] += 0.824390243902439;
                    }
                  }
                } else {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1979539841413497925) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2542048841714859009) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.4647887323943662;
                      result[1] += 0.5352112676056338;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.44866920152091255;
                      result[1] += 0.5513307984790875;
                    }
                  }
                }
              } else {
                if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2272647097706794739) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4517073631286621094) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7074130773544311523) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9994374537379719;
                      result[1] += 0.0005625462620281273;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1365560218691825867) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2526977509260177612) ) ) {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3741033822298049927) ) ) {
                      result[0] += 0.9802631578947368;
                      result[1] += 0.019736842105263157;
                    } else {
                      result[0] += 0.46153846153846156;
                      result[1] += 0.5384615384615384;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
                      result[0] += 0.8934967012252591;
                      result[1] += 0.10650329877474081;
                    } else {
                      result[0] += 0.9969211822660099;
                      result[1] += 0.003078817733990148;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.49658469945355194;
                      result[1] += 0.5034153005464481;
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
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3448948562145233154) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.6762000322341918945) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3850509226322174072) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7842374145984649658) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2738175839185714722) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)6.353482604026794434e-06) ) ) {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2296152859926223755) ) ) {
                    if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9769923985004425049) ) ) {
                      result[0] += 0.9866666666666667;
                      result[1] += 0.013333333333333334;
                    } else {
                      result[0] += 0.9997861877271755;
                      result[1] += 0.00021381227282446012;
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
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
      if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3725434988737106323) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3195137530565261841) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2836239337921142578) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.02934053493663668633) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
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
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2836409211158752441) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.3002223819494247437) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
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
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3460290580987930298) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.24515543133020401) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3004745692014694214) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              } else {
                if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7147214412689208984) ) ) {
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8173351287841796875) ) ) {
                      result[0] += 0.6702702702702703;
                      result[1] += 0.32972972972972975;
                    } else {
                      result[0] += 0.4069264069264069;
                      result[1] += 0.5930735930735931;
                    }
                  }
                } else {
                  if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.752838432788848877) ) ) {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                      result[0] += 0.7628083491461101;
                      result[1] += 0.23719165085388993;
                    } else {
                      result[0] += 0.9871794871794872;
                      result[1] += 0.01282051282051282;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2326309755444526672) ) ) {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2836409211158752441) ) ) {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.8333333333333334;
                      result[1] += 0.16666666666666666;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                      result[0] += 0.6494845360824743;
                      result[1] += 0.35051546391752575;
                    } else {
                      result[0] += 0.11724137931034483;
                      result[1] += 0.8827586206896552;
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
                      result[0] += 0.7741935483870968;
                      result[1] += 0.22580645161290322;
                    }
                  }
                }
              } else {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8868957757949829102) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 0.8529411764705882;
                      result[1] += 0.14705882352941177;
                    } else {
                      result[0] += 0.02356020942408377;
                      result[1] += 0.9764397905759162;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2602400630712509155) ) ) {
                      result[0] += 0.3161764705882353;
                      result[1] += 0.6838235294117647;
                    } else {
                      result[0] += 0.847457627118644;
                      result[1] += 0.15254237288135594;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3132751137018203735) ) ) {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2250917553901672363) ) ) {
                      result[0] += 0.08333333333333333;
                      result[1] += 0.9166666666666666;
                    } else {
                      result[0] += 0.9230769230769231;
                      result[1] += 0.07692307692307693;
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
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1403031647205352783) ) ) {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8173351287841796875) ) ) {
                      result[0] += 0.9285714285714286;
                      result[1] += 0.07142857142857142;
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
        } else {
          if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001629178295843303204) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.1381837725639343262) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2647681385278701782) ) ) {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2976780682802200317) ) ) {
                    if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.9127554595470428467) ) ) {
                      result[0] += 0.9444444444444444;
                      result[1] += 0.05555555555555555;
                    } else {
                      result[0] += 0.631578947368421;
                      result[1] += 0.3684210526315789;
                    }
                  } else {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3095207810401916504) ) ) {
                      result[0] += 0.8771929824561403;
                      result[1] += 0.12280701754385964;
                    } else {
                      result[0] += 0.18604651162790697;
                      result[1] += 0.813953488372093;
                    }
                  }
                }
              } else {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3485068678855895996) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[75].missing != -1) || (data[75].fvalue <= (float)6.353389471769332886e-05) ) ) {
                      result[0] += 0.9998508645928996;
                      result[1] += 0.00014913540710041523;
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
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    result[0] += 0;
    result[1] += 1;
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
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2039853483438491821) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
        if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511906176805496216) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
              if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8232134878635406494) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.416564062237739563) ) ) {
                    if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001856900984421372414) ) ) {
                      result[0] += 0.998215082552432;
                      result[1] += 0.00178491744756805;
                    } else {
                      result[0] += 0.8125;
                      result[1] += 0.1875;
                    }
                  } else {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4180718958377838135) ) ) {
                      result[0] += 0.946236559139785;
                      result[1] += 0.053763440860215055;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.1410066932439804077) ) ) {
                    if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9788148105144500732) ) ) {
                      result[0] += 0.7954545454545454;
                      result[1] += 0.20454545454545456;
                    } else {
                      result[0] += 0.96875;
                      result[1] += 0.03125;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              }
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3319918960332870483) ) ) {
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.291439443826675415) ) ) {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3031367659568786621) ) ) {
                    if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.9644642472267150879) ) ) {
                      result[0] += 0.6666666666666666;
                      result[1] += 0.3333333333333333;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                } else {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1423501297831535339) ) ) {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8237709105014801025) ) ) {
                      result[0] += 0.05263157894736842;
                      result[1] += 0.9473684210526315;
                    } else {
                      result[0] += 0.7777777777777778;
                      result[1] += 0.2222222222222222;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2353490889072418213) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                }
              } else {
                if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8138871192932128906) ) ) {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4090265333652496338) ) ) {
                    if ( ( !(data[69].missing != -1) || (data[69].fvalue <= (float)0.817539900541305542) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1335144117474555969) ) ) {
                      result[0] += 0.2857142857142857;
                      result[1] += 0.7142857142857143;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3773652166128158569) ) ) {
                    result[0] += 1;
                    result[1] += 0;
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
              }
            }
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
                if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001841720833908766508) ) ) {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3819010108709335327) ) ) {
                      result[0] += 0.9977777777777778;
                      result[1] += 0.0022222222222222222;
                    } else {
                      result[0] += 0.75;
                      result[1] += 0.25;
                    }
                  }
                } else {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2368498146533966064) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2945583313703536987) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.6;
                      result[1] += 0.4;
                    }
                  }
                }
              } else {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1395496055483818054) ) ) {
                      result[0] += 0.13377926421404682;
                      result[1] += 0.8662207357859532;
                    } else {
                      result[0] += 0.43333333333333335;
                      result[1] += 0.5666666666666667;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1463383585214614868) ) ) {
                      result[0] += 0.9057071960297767;
                      result[1] += 0.09429280397022333;
                    } else {
                      result[0] += 0.5714285714285714;
                      result[1] += 0.42857142857142855;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2924157828092575073) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
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
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                      result[0] += 0.5381526104417671;
                      result[1] += 0.46184738955823296;
                    } else {
                      result[0] += 0.17134831460674158;
                      result[1] += 0.8286516853932584;
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)3.175809979438781738e-06) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1493559554219245911) ) ) {
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.7251529991626739502) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4519360363483428955) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9994892623489068;
                      result[1] += 0.0005107376510932218;
                    }
                  }
                } else {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.2869065254926681519) ) ) {
                    if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7188424468040466309) ) ) {
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
                      result[0] += 0.2171945701357466;
                      result[1] += 0.7828054298642534;
                    }
                  }
                }
              } else {
                if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7576206624507904053) ) ) {
                  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3292691260576248169) ) ) {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8231741487979888916) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.3333333333333333;
                      result[1] += 0.6666666666666666;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.914577871561050415) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1516199931502342224) ) ) {
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
    if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.9933518767356872559) ) ) {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3292691260576248169) ) ) {
        if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7687848806381225586) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3132751137018203735) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
                if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511872798204421997) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9912023460410557;
                      result[1] += 0.008797653958944282;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2345921769738197327) ) ) {
                      result[0] += 0.6857142857142857;
                      result[1] += 0.3142857142857143;
                    } else {
                      result[0] += 0.057007125890736345;
                      result[1] += 0.9429928741092637;
                    }
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 0.9523187459177008;
                      result[1] += 0.04768125408229915;
                    } else {
                      result[0] += 0.7832167832167832;
                      result[1] += 0.21678321678321677;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.1686746987951807;
                      result[1] += 0.8313253012048193;
                    }
                  }
                }
              } else {
                if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05921705067157745361) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8099800944328308105) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4517073631286621094) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9991074160971132;
                      result[1] += 0.0008925839028868713;
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
            if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1384864374995231628) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7738044559955596924) ) ) {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.7619047619047619;
                      result[1] += 0.23809523809523808;
                    }
                  } else {
                    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7174687683582305908) ) ) {
                      result[0] += 0.9943727242634889;
                      result[1] += 0.005627275736511089;
                    } else {
                      result[0] += 0.9833641404805915;
                      result[1] += 0.0166358595194085;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3819010108709335327) ) ) {
                if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
                  if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.802007824182510376) ) ) {
                    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1070554032921791077) ) ) {
                      result[0] += 0.9786184210526315;
                      result[1] += 0.02138157894736842;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3057511746883392334) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.13797808438539505) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 0.913586173787806;
                      result[1] += 0.08641382621219396;
                    } else {
                      result[0] += 0.514324693042292;
                      result[1] += 0.48567530695770805;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              } else {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                  if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.9635542035102844238) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7987842559814453125) ) ) {
                      result[0] += 0.14074074074074075;
                      result[1] += 0.8592592592592593;
                    } else {
                      result[0] += 0.021897810218978103;
                      result[1] += 0.9781021897810219;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04389595240354537964) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1561447158455848694) ) ) {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3615049868822097778) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1346227526664733887) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
                      result[0] += 0.9933993399339934;
                      result[1] += 0.006600660066006601;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7202161252498626709) ) ) {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2205690741539001465) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2738175839185714722) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3521160334348678589) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001774667529389262199) ) ) {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1513673067092895508) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7464606761932373047) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.8489583333333334;
                      result[1] += 0.15104166666666666;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
                if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8118190765380859375) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.375662386417388916) ) ) {
                      result[0] += 0.1826625386996904;
                      result[1] += 0.8173374613003096;
                    } else {
                      result[0] += 0.5606694560669456;
                      result[1] += 0.4393305439330544;
                    }
                  } else {
                    if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7738044559955596924) ) ) {
                      result[0] += 0.5;
                      result[1] += 0.5;
                    } else {
                      result[0] += 0.036211699164345405;
                      result[1] += 0.9637883008356546;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.335109904408454895) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2406273633241653442) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9482758620689655;
                      result[1] += 0.05172413793103448;
                    }
                  } else {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.6910569105691057;
                      result[1] += 0.3089430894308943;
                    }
                  }
                } else {
                  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3600607514381408691) ) ) {
                      result[0] += 0.8125;
                      result[1] += 0.1875;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                      result[0] += 0.5909090909090909;
                      result[1] += 0.4090909090909091;
                    } else {
                      result[0] += 0.0002789789370902497;
                      result[1] += 0.9997210210629097;
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
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7409271895885467529) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
            if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4265166670083999634) ) ) {
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
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
                if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7138063609600067139) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2647681385278701782) ) ) {
                    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2641230523586273193) ) ) {
                      result[0] += 0.9757009345794393;
                      result[1] += 0.024299065420560748;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.782492220401763916) ) ) {
                    if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7892937660217285156) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.8636363636363636;
                      result[1] += 0.13636363636363635;
                    }
                  } else {
                    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1098809279501438141) ) ) {
                      result[0] += 0.9999881001963468;
                      result[1] += 1.1899803653239721e-05;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1395496055483818054) ) ) {
                    if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
                      result[0] += 0.9868934746235359;
                      result[1] += 0.013106525376464027;
                    } else {
                      result[0] += 0.8824609733700642;
                      result[1] += 0.11753902662993572;
                    }
                  } else {
                    if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7948486506938934326) ) ) {
                      result[0] += 0.9967830882352942;
                      result[1] += 0.003216911764705882;
                    } else {
                      result[0] += 0.9996636394214599;
                      result[1] += 0.0003363605785401951;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
        if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3562774211168289185) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2572258263826370239) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.1401235461235046387) ) ) {
                if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9865594804286956787) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7979907989501953125) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2333840504288673401) ) ) {
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
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2337318137288093567) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2293138876557350159) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3585063368082046509) ) ) {
                    if ( ( !(data[68].missing != -1) || (data[68].fvalue <= (float)0.8159461617469787598) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
                      result[0] += 0.8244274809160306;
                      result[1] += 0.17557251908396945;
                    } else {
                      result[0] += 0.9480968858131488;
                      result[1] += 0.05190311418685121;
                    }
                  }
                }
              } else {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3773652166128158569) ) ) {
                  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.786156773567199707) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3547509759664535522) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9565217391304348;
                      result[1] += 0.043478260869565216;
                    }
                  }
                } else {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1335144117474555969) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2353490889072418213) ) ) {
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
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2368498146533966064) ) ) {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3319918960332870483) ) ) {
                    if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9856494367122650146) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.7368421052631579;
                      result[1] += 0.2631578947368421;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
                    if ( ( !(data[70].missing != -1) || (data[70].fvalue <= (float)0.9382691681385040283) ) ) {
                      result[0] += 0.4;
                      result[1] += 0.6;
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
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8868957757949829102) ) ) {
                  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                    if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.782581627368927002) ) ) {
                      result[0] += 0.008264462809917356;
                      result[1] += 0.9917355371900827;
                    } else {
                      result[0] += 0.6;
                      result[1] += 0.4;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2945583313703536987) ) ) {
                      result[0] += 0.029411764705882353;
                      result[1] += 0.9705882352941176;
                    } else {
                      result[0] += 0.967741935483871;
                      result[1] += 0.03225806451612903;
                    }
                  }
                } else {
                  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7852395772933959961) ) ) {
                    if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7687848806381225586) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.5;
                      result[1] += 0.5;
                    }
                  } else {
                    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3071592897176742554) ) ) {
                      result[0] += 0.9916107382550335;
                      result[1] += 0.008389261744966443;
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
                  if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3179547637701034546) ) ) {
                      result[0] += 0.68;
                      result[1] += 0.32;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
                      result[0] += 0.27702702702702703;
                      result[1] += 0.722972972972973;
                    } else {
                      result[0] += 0.05017921146953405;
                      result[1] += 0.9498207885304659;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3592862784862518311) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1288257911801338196) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[66].missing != -1) || (data[66].fvalue <= (float)3.600493073463439941e-06) ) ) {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)3.175809979438781738e-06) ) ) {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)6.353482604026794434e-06) ) ) {
                      result[0] += 0.9992929530992223;
                      result[1] += 0.0007070469007777516;
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
            result[0] += 0;
            result[1] += 1;
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
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
        if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7174687683582305908) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2542048841714859009) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2961181998252868652) ) ) {
              if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001830333145335316658) ) ) {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3125364631414413452) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.794778287410736084) ) ) {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1994618251919746399) ) ) {
                      result[0] += 0.6666666666666666;
                      result[1] += 0.3333333333333333;
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
                if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7683391571044921875) ) ) {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3803411275148391724) ) ) {
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
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
                  if ( ( !(data[68].missing != -1) || (data[68].fvalue <= (float)0.8111602962017059326) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2278034240007400513) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7987842857837677002) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7718994319438934326) ) ) {
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
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3773652166128158569) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.9728925526142120361) ) ) {
                  if ( ( !(data[68].missing != -1) || (data[68].fvalue <= (float)0.8209583759307861328) ) ) {
                    if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001780990103725343943) ) ) {
                      result[0] += 0.06796116504854369;
                      result[1] += 0.9320388349514563;
                    } else {
                      result[0] += 0.4;
                      result[1] += 0.6;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3772213906049728394) ) ) {
                    if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.9145801961421966553) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7979969978332519531) ) ) {
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
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.375662386417388916) ) ) {
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2945583313703536987) ) ) {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2376131191849708557) ) ) {
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
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3787812590599060059) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              } else {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.2974597364664077759) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
                      result[0] += 0.5;
                      result[1] += 0.5;
                    } else {
                      result[0] += 0.0425531914893617;
                      result[1] += 0.9574468085106383;
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
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4090265333652496338) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
              if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7852395772933959961) ) ) {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1335144117474555969) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2489265948534011841) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9019607843137255;
                      result[1] += 0.09803921568627451;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3226326256990432739) ) ) {
                    if ( ( !(data[69].missing != -1) || (data[69].fvalue <= (float)0.8182235956192016602) ) ) {
                      result[0] += 0.7142857142857143;
                      result[1] += 0.2857142857142857;
                    } else {
                      result[0] += 0.08888888888888889;
                      result[1] += 0.9111111111111111;
                    }
                  } else {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8878130018711090088) ) ) {
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
                  if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4523910582065582275) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3788730651140213013) ) ) {
                      result[0] += 0.9873563218390805;
                      result[1] += 0.01264367816091954;
                    } else {
                      result[0] += 0.8775510204081632;
                      result[1] += 0.12244897959183673;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7156386375427246094) ) ) {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.2959518879652023315) ) ) {
                    if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.78594246506690979) ) ) {
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
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3803411275148391724) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.7850467289719626;
                      result[1] += 0.21495327102803738;
                    }
                  } else {
                    if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7750063836574554443) ) ) {
                      result[0] += 0.37777777777777777;
                      result[1] += 0.6222222222222222;
                    } else {
                      result[0] += 0.7755102040816326;
                      result[1] += 0.22448979591836735;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.228560328483581543) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3140443116426467896) ) ) {
                      result[0] += 0.9923115079365079;
                      result[1] += 0.007688492063492063;
                    } else {
                      result[0] += 0.8529411764705882;
                      result[1] += 0.14705882352941177;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7677219212055206299) ) ) {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2602400630712509155) ) ) {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.40114613180515757;
                      result[1] += 0.5988538681948424;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                      result[0] += 0.8260869565217391;
                      result[1] += 0.17391304347826086;
                    } else {
                      result[0] += 0.01738609112709832;
                      result[1] += 0.9826139088729017;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7870718538761138916) ) ) {
                      result[0] += 0.8837209302325582;
                      result[1] += 0.11627906976744186;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3629520684480667114) ) ) {
                      result[0] += 0.029787234042553193;
                      result[1] += 0.9702127659574468;
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2407495155930519104) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.351395338773727417) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1070554032921791077) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2526977509260177612) ) ) {
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2945583313703536987) ) ) {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2259324193000793457) ) ) {
                    if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7687848806381225586) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.941747572815534;
                      result[1] += 0.05825242718446602;
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
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2617471963167190552) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.6906191110610961914) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1352662220597267151) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9997965141305284;
                      result[1] += 0.0002034858694716411;
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
  if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.9927334785461425781) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7768823504447937012) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3155513107776641846) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2436483129858970642) ) ) {
              if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7432717978954315186) ) ) {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3110286146402359009) ) ) {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9754555596876162;
                      result[1] += 0.024544440312383786;
                    }
                  }
                } else {
                  if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8181263208389282227) ) ) {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2961181998252868652) ) ) {
                      result[0] += 0.8333333333333334;
                      result[1] += 0.16666666666666666;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7252522110939025879) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1335144117474555969) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.1390923634171485901) ) ) {
                      result[0] += 0.6883116883116883;
                      result[1] += 0.3116883116883117;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2293138951063156128) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9454545454545454;
                      result[1] += 0.05454545454545454;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 0.9669499527856469;
                      result[1] += 0.033050047214353166;
                    } else {
                      result[0] += 0.7321937321937322;
                      result[1] += 0.2678062678062678;
                    }
                  } else {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1964461356401443481) ) ) {
                      result[0] += 0.25663716814159293;
                      result[1] += 0.7433628318584071;
                    } else {
                      result[0] += 0.10458167330677291;
                      result[1] += 0.8954183266932271;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1384864374995231628) ) ) {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                    if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7871471643447875977) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.6615384615384615;
                      result[1] += 0.3384615384615385;
                    }
                  } else {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7796406149864196777) ) ) {
                      result[0] += 0.07317073170731707;
                      result[1] += 0.926829268292683;
                    } else {
                      result[0] += 0.37735849056603776;
                      result[1] += 0.6226415094339622;
                    }
                  }
                } else {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2544912993907928467) ) ) {
                    if ( ( !(data[68].missing != -1) || (data[68].fvalue <= (float)0.8061504662036895752) ) ) {
                      result[0] += 0.9444444444444444;
                      result[1] += 0.05555555555555555;
                    } else {
                      result[0] += 0.9986016730858868;
                      result[1] += 0.001398326914113289;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7810917496681213379) ) ) {
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
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2232787013053894043) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3803411275148391724) ) ) {
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2352908104658126831) ) ) {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.374349549412727356) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3179547637701034546) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9375;
                      result[1] += 0.0625;
                    }
                  }
                } else {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1335144117474555969) ) ) {
                    if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7801817357540130615) ) ) {
                      result[0] += 0.9705882352941176;
                      result[1] += 0.029411764705882353;
                    } else {
                      result[0] += 0.7727272727272727;
                      result[1] += 0.22727272727272727;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3629520684480667114) ) ) {
                  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2428913936018943787) ) ) {
                      result[0] += 0.6666666666666666;
                      result[1] += 0.3333333333333333;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2384096980094909668) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.984375;
                      result[1] += 0.015625;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2572224736213684082) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.15384615384615385;
                      result[1] += 0.8461538461538461;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
              if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7156386375427246094) ) ) {
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2898804396390914917) ) ) {
                  if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8121911585330963135) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7785879969596862793) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.41935483870967744;
                      result[1] += 0.5806451612903226;
                    }
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
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2406273633241653442) ) ) {
                    if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
                      result[0] += 0.9861751152073732;
                      result[1] += 0.013824884792626729;
                    } else {
                      result[0] += 0.8852459016393442;
                      result[1] += 0.11475409836065574;
                    }
                  } else {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8082610666751861572) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.7272727272727273;
                      result[1] += 0.2727272727272727;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2670288234949111938) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.1939655172413793;
                      result[1] += 0.8060344827586207;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3571722805500030518) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9857142857142858;
                      result[1] += 0.014285714285714285;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.6964953839778900146) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1301127299666404724) ) ) {
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
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
        if ( ( !(data[68].missing != -1) || (data[68].fvalue <= (float)0.8202746808528900146) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.2959518879652023315) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7358289957046508789) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.1382771655917167664) ) ) {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1070554032921791077) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1539440527558326721) ) ) {
                if ( ( !(data[74].missing != -1) || (data[74].fvalue <= (float)6.34482712484896183e-05) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2677823752164840698) ) ) {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.9651479423046112061) ) ) {
                      result[0] += 0.99984520123839;
                      result[1] += 0.00015479876160990713;
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
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
      if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7898192107677459717) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.153880678117275238) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2851344048976898193) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8887280821800231934) ) ) {
        if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05677353730425238609) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1531271114945411682) ) ) {
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
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.1396664753556251526) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3257523924112319946) ) ) {
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1320072859525680542) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2557153552770614624) ) ) {
                      result[0] += 0.48484848484848486;
                      result[1] += 0.5151515151515151;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1320072859525680542) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8887280821800231934) ) ) {
                      result[0] += 0.5698924731182796;
                      result[1] += 0.43010752688172044;
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
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3132751137018203735) ) ) {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.335109904408454895) ) ) {
                      result[0] += 0.884;
                      result[1] += 0.116;
                    } else {
                      result[0] += 0.9764705882352941;
                      result[1] += 0.023529411764705882;
                    }
                  } else {
                    if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
                      result[0] += 0.9855072463768116;
                      result[1] += 0.014492753623188406;
                    } else {
                      result[0] += 0.8055970149253732;
                      result[1] += 0.19440298507462686;
                    }
                  }
                }
              } else {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3117152303457260132) ) ) {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3713338524103164673) ) ) {
                      result[0] += 0.9931093884582257;
                      result[1] += 0.0068906115417743325;
                    } else {
                      result[0] += 0.9457735247208932;
                      result[1] += 0.05422647527910686;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.7156862745098039;
                      result[1] += 0.28431372549019607;
                    }
                  }
                } else {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.2959518879652023315) ) ) {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9811715481171548;
                      result[1] += 0.01882845188284519;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                      result[0] += 0.9569377990430622;
                      result[1] += 0.0430622009569378;
                    } else {
                      result[0] += 0.6701570680628273;
                      result[1] += 0.3298429319371728;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3125364631414413452) ) ) {
                  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 0.9640718562874252;
                      result[1] += 0.03592814371257485;
                    } else {
                      result[0] += 0.07407407407407407;
                      result[1] += 0.9259259259259259;
                    }
                  } else {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
                      result[0] += 0.9130434782608695;
                      result[1] += 0.08695652173913043;
                    } else {
                      result[0] += 0.9932088285229203;
                      result[1] += 0.006791171477079796;
                    }
                  }
                } else {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1335144117474555969) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2345921769738197327) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.8;
                      result[1] += 0.2;
                    }
                  } else {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8868957757949829102) ) ) {
                      result[0] += 0.9375;
                      result[1] += 0.0625;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3803411275148391724) ) ) {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.286760672926902771) ) ) {
                      result[0] += 0.5;
                      result[1] += 0.5;
                    } else {
                      result[0] += 0.9813953488372092;
                      result[1] += 0.018604651162790697;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1335144117474555969) ) ) {
                      result[0] += 0.6582278481012658;
                      result[1] += 0.34177215189873417;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8868957757949829102) ) ) {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.2608695652173913;
                      result[1] += 0.7391304347826086;
                    }
                  } else {
                    if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7174687683582305908) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.71900826446281;
                      result[1] += 0.2809917355371901;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1380424797534942627) ) ) {
                if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7202161252498626709) ) ) {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.41204051673412323) ) ) {
                      result[0] += 0.96;
                      result[1] += 0.04;
                    } else {
                      result[0] += 0.6101694915254238;
                      result[1] += 0.3898305084745763;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3532431274652481079) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.6666666666666666;
                      result[1] += 0.3333333333333333;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1346227526664733887) ) ) {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                      result[0] += 0.27586206896551724;
                      result[1] += 0.7241379310344828;
                    } else {
                      result[0] += 0.8807339449541285;
                      result[1] += 0.11926605504587157;
                    }
                  }
                }
              } else {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4029951542615890503) ) ) {
                    if ( ( !(data[70].missing != -1) || (data[70].fvalue <= (float)0.941458970308303833) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.05;
                      result[1] += 0.95;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7432717978954315186) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001856900984421372414) ) ) {
              if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.9059231579303741455) ) ) {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              } else {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1926773786544799805) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3772213906049728394) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8104951977729797363) ) ) {
                    if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.9719825088977813721) ) ) {
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
                }
              }
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7722851336002349854) ) ) {
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
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3448948562145233154) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7597486972808837891) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7165536880493164062) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1098809279501438141) ) ) {
                if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9952164590358734131) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3787812590599060059) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.782492220401763916) ) ) {
                      result[0] += 0.9917582417582418;
                      result[1] += 0.008241758241758242;
                    } else {
                      result[0] += 0.9997769848349688;
                      result[1] += 0.00022301516503122213;
                    }
                  }
                } else {
                  if ( ( !(data[48].missing != -1) || (data[48].fvalue <= (float)0.9291158616542816162) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3571722805500030518) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.6666666666666666;
                      result[1] += 0.3333333333333333;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1546342372894287109) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7713658511638641357) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              }
            } else {
              if ( ( !(data[69].missing != -1) || (data[69].fvalue <= (float)0.8330292105674743652) ) ) {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)3.175809979438781738e-06) ) ) {
                  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1098809279501438141) ) ) {
                    if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9765373766422271729) ) ) {
                      result[0] += 0.9963702359346642;
                      result[1] += 0.003629764065335753;
                    } else {
                      result[0] += 0.9999866410174201;
                      result[1] += 1.3358982579886716e-05;
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
                if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7202161252498626709) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[66].missing != -1) || (data[66].fvalue <= (float)7.83614814281463623e-06) ) ) {
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
  
  // Average tree outputs
  result[0] /= 10;
  result[1] /= 10;
  
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
    

    FILE* file = fopen("./codegen/esa_3_months_global/split_4/test_data.csv", "r");
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
