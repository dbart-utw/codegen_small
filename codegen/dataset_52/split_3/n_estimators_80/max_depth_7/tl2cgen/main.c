
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
  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.3683699965476989746) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3547399938106536865) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.6298849880695343018) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.01614999957382678986) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1666649989783763885) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.09969499707221984863) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.005194999277591705322) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.1199850030243396759) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2014100030064582825) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.01824500039219856262) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.02254999987781047821) ) ) {
                result[0] += 0.9166666666666666;
                result[1] += 0.08333333333333333;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.1538500003516674042) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.7424249947071075439) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.4895749986171722412) ) ) {
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.8493250012397766113) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1333349943161010742) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7832599878311157227) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6549850106239318848) ) ) {
                result[0] += 0.6666666666666666;
                result[1] += 0.3333333333333333;
              } else {
                result[0] += 0.00819672131147541;
                result[1] += 0.9918032786885246;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.3856399953365325928) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.8723399937152862549) ) ) {
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
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.2035950049757957458) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1909350007772445679) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.008940000436268746853) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.019305000314489007) ) ) {
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
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9072249829769134521) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.0299750007688999176) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.2621599957346916199) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.37910500168800354) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4181150048971176147) ) ) {
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
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.04545500129461288452) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.009455000050365924835) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.680555000901222229) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.1271149963140487671) ) ) {
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
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9098950028419494629) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.6974750012159347534) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.7949300110340118408) ) ) {
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1930849999189376831) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3449150025844573975) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.05193500034511089325) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.2649250030517578125) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.5783599913120269775) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.08904500305652618408) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.454775005578994751) ) ) {
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
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8972199857234954834) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.8600800037384033203) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.4361449927091598511) ) ) {
                result[0] += 0.08695652173913043;
                result[1] += 0.9130434782608695;
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.8389199972152709961) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8791849911212921143) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.999664992094039917) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3544750064611434937) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5637650191783905029) ) ) {
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
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9407549798488616943) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.7501900196075439453) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.5784250050783157349) ) ) {
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2018849998712539673) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.5421849936246871948) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2595549896359443665) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9447599947452545166) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0) ) ) {
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.5217400193214416504) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.277779996395111084) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.004080000217072665691) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.01729499921202659607) ) ) {
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1411400027573108673) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7498349994421005249) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9088949859142303467) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.2989650070667266846) ) ) {
                result[0] += 0.14285714285714285;
                result[1] += 0.8571428571428571;
              } else {
                result[0] += 0.02142857142857143;
                result[1] += 0.9785714285714285;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7429500073194503784) ) ) {
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
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.0004799999878741800785) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4576800018548965454) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.8963150084018707275) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.1540200002491474152) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.5243850052356719971) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.3511349931359291077) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.01191500015556812286) ) ) {
                result[0] += 0.75;
                result[1] += 0.25;
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
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.5358750075101852417) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7876749932765960693) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.006335000041872262955) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.24028000608086586) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.07776000350713729858) ) ) {
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
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.1751850023865699768) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.2461500093340873718) ) ) {
                result[0] += 0.16666666666666666;
                result[1] += 0.8333333333333334;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1438750028610229492) ) ) {
                result[0] += 0.5;
                result[1] += 0.5;
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
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9093799889087677002) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.690455019474029541) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1348499953746795654) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6447599977254867554) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.7424249947071075439) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9050999879837036133) ) ) {
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
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.2006500065326690674) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9643700122833251953) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.231155000627040863) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.009004999883472919464) ) ) {
                result[0] += 0.2;
                result[1] += 0.8;
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.109755001962184906) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.467325013130903244) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.6945950090885162354) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.2587399929761886597) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7272749990224838257) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.9982250034809112549) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.06451612903225806;
                result[1] += 0.9354838709677419;
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1408099979162216187) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9429549872875213623) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.1485999971628189087) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7888950109481811523) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5322400182485580444) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.06246500089764595032) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8927049934864044189) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.8433600068092346191) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.2403349876403808594) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9948549866676330566) ) ) {
                result[0] += 0.025974025974025976;
                result[1] += 0.974025974025974;
              } else {
                result[0] += 0.5;
                result[1] += 0.5;
              }
            }
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.6912750005722045898) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.6105400025844573975) ) ) {
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.05324000050313770771) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.08015500009059906006) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.6355950087308883667) ) ) {
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
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.983574986457824707) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.3306000083684921265) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.1399100050330162048) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.2537750005722045898) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.1831000000238418579) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.8333333333333334;
                result[1] += 0.16666666666666666;
              }
            }
          } else {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.9680899977684020996) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4298399984836578369) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.6711799949407577515) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.5092549920082092285) ) ) {
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
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9948549866676330566) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.1111111111111111;
                result[1] += 0.8888888888888888;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0001250000059371814132) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.05221000220626592636) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.2710600011050701141) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.6953449845314025879) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.03053499944508075714) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8339450061321258545) ) ) {
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
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.7465550005435943604) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4454549998044967651) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.06947999820113182068) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1658799946308135986) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.5595250017940998077) ) ) {
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
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.8807350099086761475) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8356750011444091797) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7944949865341186523) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.8253049850463867188) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.043478260869565216;
                result[1] += 0.9565217391304348;
              }
            }
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.7395199984312057495) ) ) {
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
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.007985000032931566238) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5415849983692169189) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.07878999877721071243) ) ) {
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
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.7047049999237060547) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.186569996178150177) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.2610849998891353607) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.4487100094556808472) ) ) {
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
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.3511450141668319702) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1861499994993209839) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.7240100204944610596) ) ) {
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
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.75) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7547650039196014404) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7272749990224838257) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7259599864482879639) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9352599978446960449) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.3806699961423873901) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.00147999997716397047) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.01823999907355755568) ) ) {
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
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9948549866676330566) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2193350046873092651) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.2302699945867061615) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.8523750007152557373) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.4870300143957138062) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.6454550027847290039) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.8248099982738494873) ) ) {
                result[0] += 0.5;
                result[1] += 0.5;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.1839049980044364929) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3950750082731246948) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.8350549936294555664) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.4298199862241744995) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.6846549957990646362) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.362630009651184082) ) ) {
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03717499971389770508) ) ) {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.388889998197555542) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.1794700026512145996) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.006680000107735395432) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.2224250137805938721) ) ) {
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
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9551299810409545898) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9285149872303009033) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.6791999936103820801) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.9945150017738342285) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.1526399999856948853) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.16216216216216217;
                result[1] += 0.8378378378378378;
              }
            }
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.02194000035524368286) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.2054249942302703857) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.4538099989295005798) ) ) {
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1304000020027160645) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8039250075817108154) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05761999823153018951) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.5475649982690811157) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9315849840641021729) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8586249947547912598) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1586150005459785461) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.2644100040197372437) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.9298950135707855225) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.13333333333333333;
                result[1] += 0.8666666666666667;
              }
            }
          } else {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1512449979782104492) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.3098750039935112) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.6923076923076923;
                result[1] += 0.3076923076923077;
              }
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.9139350056648254395) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.4356099963188171387) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.5819500014185905457) ) ) {
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
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9003050029277801514) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1348499953746795654) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.4157600104808807373) ) ) {
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
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5322400182485580444) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.358950003981590271) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9081700146198272705) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3694349974393844604) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6642700135707855225) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9299900233745574951) ) ) {
                result[0] += 0.04918032786885246;
                result[1] += 0.9508196721311475;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.9491199851036071777) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.655910000205039978) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.6310249865055084229) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.725569993257522583) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.09000500012189149857) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.007936507936507936;
                result[1] += 0.9920634920634921;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.004080000217072665691) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.6452600061893463135) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.09160500019788742065) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.05976499989628791809) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2207050025463104248) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.4900250136852264404) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.8736400008201599121) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.04571999981999397278) ) ) {
                result[0] += 0.10810810810810811;
                result[1] += 0.8918918918918919;
              } else {
                result[0] += 0.022388059701492536;
                result[1] += 0.9776119402985075;
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.02364499866962432861) ) ) {
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2874100059270858765) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1930849999189376831) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.1547600030899047852) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6255199909210205078) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6283050179481506348) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4920250177383422852) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.6077099889516830444) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.6076650023460388184) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.2757949978113174438) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.03821656050955414;
                result[1] += 0.9617834394904459;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2318000048398971558) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.005030000116676092148) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.2567049991339445114) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.5820600017905235291) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.02219000086188316345) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.4423100017011165619) ) ) {
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
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6586450189352035522) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7944949865341186523) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.9965699911117553711) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8972199857234954834) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.125) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5249050110578536987) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.0189873417721519;
                result[1] += 0.9810126582278481;
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.5) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.8856399953365325928) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.558725014328956604) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.8087249994277954102) ) ) {
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.6020849943161010742) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.111110001802444458) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.3148950040340423584) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.3841250091791152954) ) ) {
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
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.8071799874305725098) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2874100059270858765) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.9124599993228912354) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8646399974822998047) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.03289473684210526;
                result[1] += 0.9671052631578947;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9385949969291687012) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.6208399981260299683) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9306100010871887207) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.5961750000715255737) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.8993699848651885986) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1586150005459785461) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.8655549883842468262) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.05405405405405406;
                result[1] += 0.9459459459459459;
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.05269999895244836807) ) ) {
                result[0] += 0.75;
                result[1] += 0.25;
              } else {
                result[0] += 0.09090909090909091;
                result[1] += 0.9090909090909091;
              }
            }
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.4898299947381019592) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5665400028228759766) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.1321400031447410583) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.1907400041818618774) ) ) {
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9322450160980224609) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7472899854183197021) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9275000095367431641) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6283050179481506348) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.1281949952244758606) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.02709000091999769211) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.9041649997234344482) ) ) {
                result[0] += 0.03896103896103896;
                result[1] += 0.961038961038961;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.655910000205039978) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9068599939346313477) ) ) {
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
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3547399938106536865) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.04437500052154064178) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01879500038921833038) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.0723199993371963501) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1726350069366162643) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.1867850013077259064) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.1159099936485290527) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1767300069332122803) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2193350046873092651) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5571700036525726318) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.9280549883842468262) ) ) {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.6614950001239776611) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.9745750129222869873) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.6666666666666666;
                result[1] += 0.3333333333333333;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5665400028228759766) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.4618500024080276489) ) ) {
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
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05176999978721141815) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.05364999920129776001) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-5.999999848427250981e-05) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.1904350034892559052) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.000155000001541338861) ) ) {
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.4692100007086992264) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.544335000216960907) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3585000038146972656) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.3550249934196472168) ) ) {
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
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.6911749839782714844) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.980390012264251709) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7558549940586090088) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.2920700013637542725) ) ) {
                result[0] += 0.2;
                result[1] += 0.8;
              } else {
                result[0] += 0.009433962264150943;
                result[1] += 0.9905660377358491;
              }
            }
          } else {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.7330500036478042603) ) ) {
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
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8053750097751617432) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1919199936091899872) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.166665002703666687) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.666665002703666687) ) ) {
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
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.9016599953174591064) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8972199857234954834) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8484949767589569092) ) ) {
                result[0] += 0.04054054054054054;
                result[1] += 0.9594594594594594;
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
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.08341000275686383247) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.5194800198078155518) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.4504149854183197021) ) ) {
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
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.6912750005722045898) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.3213399946689605713) ) ) {
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
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.0004799999878741800785) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.5735400021076202393) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05675499793142080307) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.03150000097957672551) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.02358499914407730103) ) ) {
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
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.7862100005149841309) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.9965699911117553711) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.1658900007605552673) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.08731499919667840004) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2166000008583068848) ) ) {
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
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.8846449851989746094) ) ) {
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
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.8589400053024291992) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.7575199902057647705) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.4157600104808807373) ) ) {
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
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.6665199995040893555) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.6329499930143356323) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.7465550005435943604) ) ) {
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
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.4780500084161758423) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.983574986457824707) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7091999948024749756) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.03596000000834465027) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.03123999945819377899) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.2872700020670890808) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.9815250039100646973) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.9342049956321716309) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1946299970149993896) ) ) {
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
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.4727649986743927002) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.633649975061416626) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2178549915552139282) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.7493399977684020996) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.2907399982213973999) ) ) {
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
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.2085950002074241638) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.9951750040054321289) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.11627906976744186;
                result[1] += 0.8837209302325582;
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1480049975216388702) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.9684099853038787842) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8339450061321258545) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.8389199972152709961) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6023550033569335938) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.04216867469879518;
                result[1] += 0.9578313253012049;
              }
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.06485500000417232513) ) ) {
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
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.875) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.1143850088119506836) ) ) {
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2109400033950805664) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9826700091361999512) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7935449779033660889) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9143399894237518311) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7472899854183197021) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9088650047779083252) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7558549940586090088) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.025806451612903226;
                result[1] += 0.9741935483870968;
              }
            }
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.125339999794960022) ) ) {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9573650062084197998) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0) ) ) {
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
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.25) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0) ) ) {
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
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.06942499801516532898) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.4193350076675415039) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.7250950038433074951) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.5353450030088424683) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7446549832820892334) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9044100046157836914) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6642700135707855225) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.6077099889516830444) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9352599978446960449) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.017142857142857144;
                result[1] += 0.9828571428571429;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.7446800172328948975) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.007125000003725290298) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.9333800077438354492) ) ) {
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
  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.01950000040233135223) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-2.999999924213625491e-05) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1036099996417760849) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.04469500001869164407) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.2399599999189376831) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.3716949969530105591) ) ) {
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
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.3306000083684921265) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.1735850051045417786) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.6744700074195861816) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3169800043106079102) ) ) {
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
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.6746350228786468506) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.680000007152557373) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9387849867343902588) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.02941000089049339294) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.2226650044322013855) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.6846549957990646362) ) ) {
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.6764699965715408325) ) ) {
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.260839998722076416) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.42555999755859375) ) ) {
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9980050027370452881) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1071449965238571167) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9105649888515472412) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2230500057339668274) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3002150058746337891) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2319900020956993103) ) ) {
                result[0] += 0.8571428571428571;
                result[1] += 0.14285714285714285;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.9894450008869171143) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.1111111111111111;
                result[1] += 0.8888888888888888;
              }
            }
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9901649951934814453) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.6798049807548522949) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.2604950070381164551) ) ) {
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
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.7902100086212158203) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.8146849870681762695) ) ) {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9573650062084197998) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.8927749991416931152) ) ) {
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
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.01205499982461333275) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.09893999993801116943) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1818200051784515381) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.149305000901222229) ) ) {
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2248550057411193848) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9946700036525726318) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.8248099982738494873) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.951510012149810791) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.0201050002797273919) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5967300087213516235) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.10526315789473684;
                result[1] += 0.8947368421052632;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7313249707221984863) ) ) {
                result[0] += 0.008264462809917356;
                result[1] += 0.9917355371900827;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.98479500412940979) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.03131499886512756348) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.5507849901914596558) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.6148900017142295837) ) ) {
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
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3778600096702575684) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.231155000627040863) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.006680000107735395432) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.4605650007724761963) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.8014400005340576172) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2816650047898292542) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.003835000097751617432) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9605999886989593506) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9678499996662139893) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.6632300019264221191) ) ) {
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9144749939441680908) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.3928650021553039551) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.5557250082492828369) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2193350046873092651) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.8074199855327606201) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9948549866676330566) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.1412450000643730164) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.9507000148296356201) ) ) {
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
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.1327349990606307983) ) ) {
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.7919400036334991455) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.1104499967768788338) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.6184649765491485596) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.4388900101184844971) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.9263550043106079102) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.09069000184535980225) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.09351000189781188965) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.01624000072479248047) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.5597649998962879181) ) ) {
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
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.9972400069236755371) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9901649951934814453) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.1456900015473365784) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.5461049973964691162) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.07513999752700328827) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.3751349970698356628) ) ) {
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
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9940800070762634277) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.9483700096607208252) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.1967749930918216705) ) ) {
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
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1018749997019767761) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9098950028419494629) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.07622499763965606689) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.1756750047206878662) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8668549954891204834) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.786119997501373291) ) ) {
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
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5490350127220153809) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7091999948024749756) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.9830049872398376465) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.4447599947452545166) ) ) {
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
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6283050179481506348) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.7909100055694580078) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.5552649982273578644) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.05720999930053949356) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.1696899980306625366) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.7757349908351898193) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.1786600043997168541) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1958349943161010742) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.0271550007164478302) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1206900030374526978) ) ) {
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
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2548999935388565063) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2175149992108345032) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.2872250080108642578) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.7652249932289123535) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.145199999213218689) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.01452499954029917717) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.2;
                result[1] += 0.8;
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
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.813050001859664917) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2816650047898292542) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.5161550045013427734) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.5576899982988834381) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.4778099991381168365) ) ) {
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4149949997663497925) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.8506000041961669922) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.5946649909019470215) ) ) {
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.8177399933338165283) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7820699810981750488) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.02709000091999769211) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.0967741935483871;
                result[1] += 0.9032258064516129;
              }
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.8589400053024291992) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.1111111111111111;
                result[1] += 0.8888888888888888;
              }
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.3770899996161460876) ) ) {
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
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4404000043869018555) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-2.999999924213625491e-05) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.03982000099495053291) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.04804000258445739746) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.2901699990034103394) ) ) {
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
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.5729900002479553223) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.9092949926853179932) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.9754950106143951416) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.8736400008201599121) ) ) {
                result[0] += 0.025974025974025976;
                result[1] += 0.974025974025974;
              } else {
                result[0] += 0.375;
                result[1] += 0.625;
              }
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2978449985384941101) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.75;
                result[1] += 0.25;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2011200040578842163) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.4087400063872337341) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.4790100008249282837) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2193350046873092651) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.6371949911117553711) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.5) ) ) {
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
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.7178450226783752441) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.3833499886095523834) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.4605900049209594727) ) ) {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.5569050014019012451) ) ) {
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.4279150068759918213) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1640099957585334778) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.6808699965476989746) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.9614099860191345215) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3973399996757507324) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.05364999920129776001) ) ) {
                result[0] += 0.8888888888888888;
                result[1] += 0.1111111111111111;
              } else {
                result[0] += 0.10344827586206896;
                result[1] += 0.896551724137931;
              }
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.921110004186630249) ) ) {
                result[0] += 0.008403361344537815;
                result[1] += 0.9915966386554622;
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.4054549932479858398) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.09171500056982040405) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6586450189352035522) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.6808699965476989746) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9105649888515472412) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.1446250006556510925) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.804879993200302124) ) ) {
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
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.837180018424987793) ) ) {
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
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.01243500038981437683) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.07762999832630157471) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0) ) ) {
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9098950028419494629) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.888209998607635498) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.5625) ) ) {
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
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.4308699965476989746) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5490350127220153809) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.8723399937152862549) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6283050179481506348) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.9092949926853179932) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.604165002703666687) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1408099979162216187) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9003050029277801514) ) ) {
                result[0] += 0.6;
                result[1] += 0.4;
              } else {
                result[0] += 0.03289473684210526;
                result[1] += 0.9671052631578947;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2816650047898292542) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5322400182485580444) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.1972699929028749466) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.9957500100135803223) ) ) {
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7966699898242950439) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.6130750179290771484) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.0004200004041194915771) ) ) {
                result[0] += 0.6;
                result[1] += 0.4;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.7652649879455566406) ) ) {
                result[0] += 0.14285714285714285;
                result[1] += 0.8571428571428571;
              } else {
                result[0] += 0.012658227848101266;
                result[1] += 0.9873417721518988;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3778600096702575684) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.189065001904964447) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.58223000168800354) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.816940009593963623) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2748949974775314331) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.482669999822974205) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.8071799874305725098) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.8278599977493286133) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.1376650054007768631) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.3928650021553039551) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.8342550098896026611) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.9982250034809112549) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.06382978723404255;
                result[1] += 0.9361702127659575;
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7750049829483032227) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.2489450052380561829) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.5890650004148483276) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.4471450001001358032) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1408099979162216187) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8646399974822998047) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6549850106239318848) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.018867924528301886;
                result[1] += 0.9811320754716981;
              }
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2460549995303153992) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.75;
                result[1] += 0.25;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9127549827098846436) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6642700135707855225) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9387849867343902588) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.9754950106143951416) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8219450116157531738) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2193350046873092651) ) ) {
                result[0] += 0.5714285714285714;
                result[1] += 0.42857142857142855;
              } else {
                result[0] += 0.012121212121212121;
                result[1] += 0.9878787878787879;
              }
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.5625) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.25;
                result[1] += 0.75;
              }
            }
          } else {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.7281100004911422729) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.1351349949836730957) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.5;
                result[1] += 0.5;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9901649951934814453) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5322400182485580444) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.06015999987721443176) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.1566550023853778839) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.1526699960231781006) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.3498850036412477493) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6549850106239318848) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.8177399933338165283) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3122599869966506958) ) ) {
                result[0] += 0.045454545454545456;
                result[1] += 0.9545454545454546;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.4989800155162811279) ) ) {
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
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.006864999886602163315) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.05544000118970870972) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.6176450029015541077) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9387849867343902588) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.5477849990129470825) ) ) {
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
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1351950019598007202) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.4623600095510482788) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.1705549955368041992) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.0001400000037392601371) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.009365000063553452492) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.4998449999984586611) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.148965001106262207) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.3834600001573562622) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.5665799975395202637) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.83964499831199646) ) ) {
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.8048500120639801025) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7558549940586090088) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.9179500043392181396) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.277775004506111145) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.03230000101029872894) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.999664992094039917) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.2413793103448276;
                result[1] += 0.7586206896551724;
              }
            }
          } else {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.2051750123500823975) ) ) {
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03717499971389770508) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.08590000029653310776) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.3404849991202354431) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.202615000307559967) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.5195649992674589157) ) ) {
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
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8057949841022491455) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9826700091361999512) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.9756500124931335449) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1904850006103515625) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.03636363636363636;
                result[1] += 0.9636363636363636;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.6654050052165985107) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.2050950005650520325) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.9482350051403045654) ) ) {
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
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7966699898242950439) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5490350127220153809) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7285100221633911133) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.7897800207138061523) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3002150058746337891) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1250299997627735138) ) ) {
                result[0] += 0.8333333333333334;
                result[1] += 0.16666666666666666;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.5129350125789642334) ) ) {
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.172159993089735508) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.9108049869537353516) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.1399750038981437683) ) ) {
                result[0] += 0.14285714285714285;
                result[1] += 0.8571428571428571;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.05882500112056732178) ) ) {
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
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.04545500129461288452) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.1221249997615814209) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.5533699840307235718) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.5118099898099899292) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.0456350008025765419) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3002800047397613525) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.005989998579025268555) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.999664992094039917) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.7493149936199188232) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.6727699935436248779) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.6911749988794326782) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7575750052928924561) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.8770299851894378662) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9901649951934814453) ) ) {
                result[0] += 0.022900763358778626;
                result[1] += 0.9770992366412213;
              } else {
                result[0] += 0.5;
                result[1] += 0.5;
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.459515005350112915) ) ) {
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
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.003544999985024333) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.2351749986410140991) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.2681450024247169495) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.2962999939918518066) ) ) {
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
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.6428550034761428833) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.8571450114250183105) ) ) {
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.2099249958992004395) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.3445399999618530273) ) ) {
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1863349974155426025) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6642700135707855225) ) ) {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9200499951839447021) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1071449965238571167) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2193350046873092651) ) ) {
                result[0] += 0.5;
                result[1] += 0.5;
              } else {
                result[0] += 0.024096385542168676;
                result[1] += 0.9759036144578314;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6283050179481506348) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.4908249974250793457) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.05526499822735786438) ) ) {
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
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.9757399857044219971) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.83964499831199646) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6731700003147125244) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.9756500124931335449) ) ) {
                result[0] += 0.024242424242424242;
                result[1] += 0.9757575757575757;
              } else {
                result[0] += 0.5;
                result[1] += 0.5;
              }
            }
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.4182650074362754822) ) ) {
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
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9901649951934814453) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3431649953126907349) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1304000020027160645) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.4160299971699714661) ) ) {
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
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.08370500057935714722) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2193350046873092651) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.6667099893093109131) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.3561750054359436035) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.1456900015473365784) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.1553499996662139893) ) ) {
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.278325006365776062) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.1078100018203258514) ) ) {
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
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.1428550034761428833) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.7297149896621704102) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.5553999990224838257) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.7465550005435943604) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.3511250019073486328) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.6846549957990646362) ) ) {
                result[0] += 0.2857142857142857;
                result[1] += 0.7142857142857143;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.2194750010967254639) ) ) {
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
  }
  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9826700091361999512) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1480049975216388702) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.6808699965476989746) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2193350046873092651) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.02485499950125813484) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6921999901533126831) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.02308500092476606369) ) ) {
                result[0] += 0.10344827586206896;
                result[1] += 0.896551724137931;
              } else {
                result[0] += 0.008;
                result[1] += 0.992;
              }
            }
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3952050060033798218) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.8571450114250183105) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9224799871444702148) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7142850011587142944) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.3;
                result[1] += 0.7;
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
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.4088349901139736176) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.6348499953746795654) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8927049934864044189) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6642700135707855225) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.4308699965476989746) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.2158200033009052277) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.1254899986088275909) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.3103500008583068848) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.2520499937236309052) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.8571428571428571;
                result[1] += 0.14285714285714285;
              }
            } else {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.08554499968886375427) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.09732999652624130249) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8989500105381011963) ) ) {
                result[0] += 0.012903225806451613;
                result[1] += 0.9870967741935484;
              } else {
                result[0] += 0.3333333333333333;
                result[1] += 0.6666666666666666;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.0625) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9194949865341186523) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2276500016450881958) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.2350400015711784363) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.2443300038576126099) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8927049934864044189) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.33799000084400177) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.6948600113391876221) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.1973200142383575439) ) ) {
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
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.4500699937343597412) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6275400072336196899) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9280749857425689697) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1593749970197677612) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.1111111111111111;
                result[1] += 0.8888888888888888;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5665400028228759766) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9759649932384490967) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1471849940717220306) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5322400182485580444) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.5471849888563156128) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.1470400020480155945) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.05750500131398439407) ) ) {
                result[0] += 0.25;
                result[1] += 0.75;
              } else {
                result[0] += 0.008264462809917356;
                result[1] += 0.9917355371900827;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.0437649991363286972) ) ) {
                result[0] += 0.8333333333333334;
                result[1] += 0.16666666666666666;
              } else {
                result[0] += 0.03571428571428571;
                result[1] += 0.9642857142857143;
              }
            }
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.6194450110197067261) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.7756849825382232666) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.8471750020980834961) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.1957199908792972565) ) ) {
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
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2276500016450881958) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.3334349989891052246) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.1679400056600570679) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7947549819946289062) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4404000043869018555) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.3103550001978874207) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.2947099888697266579) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.03480499866418540478) ) ) {
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
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3874399960041046143) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.4308699965476989746) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1236600000411272049) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.011627906976744186;
                result[1] += 0.9883720930232558;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7966699898242950439) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1416449993848800659) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1826650016009807587) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.03051999583840370178) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7787800133228302002) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2692050039768218994) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.005350000225007534027) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.5207100007683038712) ) ) {
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
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9908199906349182129) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.6647000014781951904) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2052299976348876953) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9088949859142303467) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.008403361344537815;
                result[1] += 0.9915966386554622;
              }
            }
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.03993499279022216797) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.1606450006365776062) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.340449996292591095) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7169799953699111938) ) ) {
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2175149992108345032) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.2968199998140335083) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.507830008864402771) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.8805600106716156006) ) ) {
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.4225250035524368286) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.3320599943399429321) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9352599978446960449) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2939700037240982056) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.06929000094532966614) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.02936499938368797302) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.1890450045466423035) ) ) {
                result[0] += 0.6;
                result[1] += 0.4;
              } else {
                result[0] += 0.04225352112676056;
                result[1] += 0.9577464788732394;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8641549944877624512) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.1724349930882453918) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.1761900037527084351) ) ) {
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
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.777779996395111084) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.722220003604888916) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5434100180864334106) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.978619992733001709) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.002695000031962990761) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.5071649849414825439) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.8436450064182281494) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.4316699951887130737) ) ) {
                result[0] += 0.07142857142857142;
                result[1] += 0.9285714285714286;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3427800089120864868) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.08704999834299087524) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.921110004186630249) ) ) {
                result[0] += 0.01694915254237288;
                result[1] += 0.9830508474576272;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.3143700063228607178) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7394700050354003906) ) ) {
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
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.1895800009369850159) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.1065149977803230286) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.156080000102519989) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.008534999564290046692) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.5517250001430511475) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.2021849996672244743) ) ) {
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2207050025463104248) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.611110001802444458) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.3012299984693527222) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.5377350002527236938) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.5861949920654296875) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1071449965238571167) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6642700135707855225) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.714935004711151123) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6283050179481506348) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.7909100055694580078) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.5;
                result[1] += 0.5;
              }
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.2239700108766555786) ) ) {
                result[0] += 0.14285714285714285;
                result[1] += 0.8571428571428571;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.2168550007045269012) ) ) {
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1480049975216388702) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.8211749792098999023) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.07166500110179185867) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3153450042009353638) ) ) {
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
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.8770299851894378662) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.9578700065612792969) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6503849923610687256) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.6077099889516830444) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.999664992094039917) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.001365000032819807529) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.0945945945945946;
                result[1] += 0.9054054054054054;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.2725400030612945557) ) ) {
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4404000043869018555) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.08171499893069267273) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.01355499960482120514) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.00741000007838010788) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.2254450023174285889) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.1352849947288632393) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.08397000283002853394) ) ) {
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2070500031113624573) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9985449910163879395) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1317600011825561523) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6754699945449829102) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.9427549839019775391) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.4308699965476989746) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.9388700127601623535) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4321050047874450684) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.9805199801921844482) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3122599869966506958) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3110799938440322876) ) ) {
                result[0] += 0.023809523809523808;
                result[1] += 0.9761904761904762;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.4566200077533721924) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.6260650157928466797) ) ) {
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4657850004732608795) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.1787100052461028099) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.9412400126457214355) ) ) {
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
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.0004799999878741800785) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.04580000042915344238) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2913199961185455322) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.1452600061893463135) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.8016549944877624512) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5415849983692169189) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2191200032830238342) ) ) {
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
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1746950000524520874) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4330900013446807861) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.115080004557967186) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.8805600106716156006) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.8655549883842468262) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7258750200271606445) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5322400182485580444) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.02395001053810119629) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.041666666666666664;
                result[1] += 0.9583333333333334;
              }
            }
          } else {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.7019450068473815918) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.831165015697479248) ) ) {
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
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1466550007462501526) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.00370500003919005394) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.03259499929845333099) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.2457800004631280899) ) ) {
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
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.04017999954521656036) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.7004150152206420898) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-3.999999898951500654e-05) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.09481000085361301899) ) ) {
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
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5397500097751617432) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.4298199862241744995) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.7165350019931793213) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2052299976348876953) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.9945949912071228027) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9948549866676330566) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.999664992094039917) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.2;
                result[1] += 0.8;
              }
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.555555000901222229) ) ) {
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.6269649863243103027) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5840049982070922852) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2276500016450881958) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1991950049996376038) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2157350033521652222) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.6431300044059753418) ) ) {
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5176050066947937012) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.9443449974060058594) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.8071799874305725098) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01879500038921833038) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.9357950091361999512) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.3573699891567230225) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7558549940586090088) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.036585365853658534;
                result[1] += 0.9634146341463414;
              }
            }
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2955650091171264648) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0) ) ) {
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
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05176999978721141815) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1181800030171871185) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.9060499966144561768) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.2883599996566772461) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.3482600003480911255) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.1435800008475780487) ) ) {
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
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1408099979162216187) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8980149924755096436) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.5764549970626831055) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.6808699965476989746) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.9048750102519989014) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.027210884353741496;
                result[1] += 0.9727891156462585;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.2022650055587291718) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.13592500239610672) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4404000043869018555) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.4138000011444091797) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.08099000371294096112) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.6428550034761428833) ) ) {
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
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.9965699911117553711) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.9320099949836730957) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.9084300100803375244) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.3218500018119812012) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.03334500081837177277) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.07142857142857142;
                result[1] += 0.9285714285714286;
              }
            }
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.08117000013589859009) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.1288350000977516174) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.3167650029063224792) ) ) {
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
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.7449049949645996094) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.25) ) ) {
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
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5498799979686737061) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03717499971389770508) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.2432349994778633118) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.202615000307559967) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1471849940717220306) ) ) {
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
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9826700091361999512) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2175149992108345032) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.236364997923374176) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8927049934864044189) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.9972400069236755371) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.1540749967098236084) ) ) {
                result[0] += 0.008547008547008548;
                result[1] += 0.9914529914529915;
              } else {
                result[0] += 0.06060606060606061;
                result[1] += 0.9393939393939394;
              }
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9068599939346313477) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.09090909090909091;
                result[1] += 0.9090909090909091;
              }
            }
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.4269300103187561035) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.06778999976813793182) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-5.999999848427250981e-05) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.8572700023651123047) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.04310500063002109528) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.200665004551410675) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-2.999999924213625491e-05) ) ) {
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
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.8121100068092346191) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.1705349981784820557) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6060149967670440674) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2522249966859817505) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3040250092744827271) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5976350009441375732) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.3898099996149539948) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.6669999957084655762) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8972199857234954834) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.999664992094039917) ) ) {
                result[0] += 0.008;
                result[1] += 0.992;
              } else {
                result[0] += 0.16666666666666666;
                result[1] += 0.8333333333333334;
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.04651999939233064651) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.307835012674331665) ) ) {
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
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.244790002703666687) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.3002050071954727173) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5415849983692169189) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.3829850107431411743) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.001524999985122121871) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.01672999933362007141) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.02128999680280685425) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.3181799948215484619) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.166665002703666687) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.6790899932384490967) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.645834997296333313) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.8805600106716156006) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.8562650084495544434) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7752499878406524658) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.06262499839067459106) ) ) {
                result[0] += 0.13043478260869565;
                result[1] += 0.8695652173913043;
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
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9098950028419494629) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.4298199862241744995) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.4705899991095066071) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.5277900006622076035) ) ) {
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
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.5193799994885921478) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.4375) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.3125) ) ) {
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
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0001250000059371814132) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.4494450092315673828) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.0008299999753944575787) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.0722499992698431015) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.001494999974966049194) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.01226499979748041369) ) ) {
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
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.1405100077390670776) ) ) {
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
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.09476999938488006592) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.89342498779296875) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6060149967670440674) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.07152000069618225098) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1684800013899803162) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.6332649886608123779) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7555849850177764893) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9098950028419494629) ) ) {
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
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.7623949944972991943) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.5819500014185905457) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.7449049949645996094) ) ) {
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
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3727349936962127686) ) ) {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.01057999953627586365) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7446549832820892334) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.07480000331997871399) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.008940000436268746853) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.4652249962091445923) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.019305000314489007) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.249874994158744812) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1861499994993209839) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.07936500012874603271) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.2226199954748153687) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.01190499961376190186) ) ) {
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
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6642700135707855225) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.9957500100135803223) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.3178349956870079041) ) ) {
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
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8712100088596343994) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2309599965810775757) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.1875) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.8741100132465362549) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.1007400024682283401) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.3334349989891052246) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.08397000283002853394) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1259550005197525024) ) ) {
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
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7947549819946289062) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8646399974822998047) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.9124599993228912354) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1550100073218345642) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.125) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3108600080013275146) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.08695652173913043;
                result[1] += 0.9130434782608695;
              }
            }
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.5232549998909235001) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0) ) ) {
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
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0002000000094994902611) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1332900002598762512) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.5183600187301635742) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.6771349906921386719) ) ) {
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
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.166665002703666687) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9643700122833251953) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6549850106239318848) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.8272199928760528564) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.6170649826526641846) ) ) {
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9948549866676330566) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3224399983882904053) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.02426999993622303009) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.04661499708890914917) ) ) {
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.08280999906128272414) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.146255001425743103) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0) ) ) {
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.4787849932909011841) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.611110001802444458) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.2866950035095214844) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.4997699999948963523) ) ) {
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5911200046539306641) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7555849850177764893) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2175149992108345032) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.236364997923374176) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.9320099949836730957) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2933999896049499512) ) ) {
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1170199969783425331) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.8770299851894378662) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.3928650021553039551) ) ) {
                result[0] += 0.09090909090909091;
                result[1] += 0.9090909090909091;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.5252999961376190186) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.001524999985122121871) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.1385250017046928406) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.07138499896973371506) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.5103549957275390625) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.1911749988794326782) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.880755007266998291) ) ) {
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
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.3412649929523468018) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.0299100000411272049) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.1237099990248680115) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.5140549838542938232) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.8550800085067749023) ) ) {
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
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9948549866676330566) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.5716400146484375) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9952850043773651123) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.1470400020480155945) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2575750052928924561) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.1648700013756752014) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.8022600114345550537) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.666665002703666687) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.5792549997568130493) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.5) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.7027949988842010498) ) ) {
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.0296049993485212326) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5176050066947937012) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7272749990224838257) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.5955950170755386353) ) ) {
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
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8057949841022491455) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2175149992108345032) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7091999948024749756) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.946399986743927002) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.9981200098991394043) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.9538150131702423096) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.1737550012767314911) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.1545300045982003212) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6642700135707855225) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.4803299903869628906) ) ) {
                result[0] += 0.16279069767441862;
                result[1] += 0.8372093023255814;
              } else {
                result[0] += 0.026785714285714284;
                result[1] += 0.9732142857142857;
              }
            }
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.8498750030994415283) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.0842399895191192627) ) ) {
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
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.1014000028371810913) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3771349936723709106) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9032450020313262939) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.5) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3973399996757507324) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.03213499952107667923) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.002314999699592590332) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.25;
                result[1] += 0.75;
              }
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.0467449994757771492) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.4444444444444444;
                result[1] += 0.5555555555555556;
              }
            }
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.6717250049114227295) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.04559999704360961914) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.038461538461538464;
                result[1] += 0.9615384615384616;
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.7938599884510040283) ) ) {
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
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4149949997663497925) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.006569999968633055687) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.0005600000149570405483) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.05660500004887580872) ) ) {
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6023550033569335938) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.9443449974060058594) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.0113399997353553772) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1924299970269203186) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.006624999892665073276) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.388889998197555542) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.046511627906976744;
                result[1] += 0.9534883720930233;
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9946700036525726318) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.862630009651184082) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.5;
                result[1] += 0.5;
              }
            }
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.08685000240802764893) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.558725014328956604) ) ) {
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.09160500019788742065) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.1507650017738342285) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.3148950040340423584) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.1256199926137924194) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.1636100001633167267) ) ) {
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
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5490350127220153809) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9315849840641021729) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.154935002326965332) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3860249966382980347) ) ) {
                result[0] += 0.008849557522123894;
                result[1] += 0.9911504424778761;
              } else {
                result[0] += 0.14285714285714285;
                result[1] += 0.8571428571428571;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.4473950117826461792) ) ) {
                result[0] += 0.6;
                result[1] += 0.4;
              } else {
                result[0] += 0.041666666666666664;
                result[1] += 0.9583333333333334;
              }
            }
          }
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 80;
  result[1] /= 80;
  
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
    

    FILE* file = fopen("./codegen/dataset_52/split_3/test_data.csv", "r");
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
