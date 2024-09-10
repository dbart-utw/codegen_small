
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
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6457199752330780029) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.8481500148773193359) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.07920500077307224274) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.1527649983763694763) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.02787499967962503433) ) ) {
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.6762349903583526611) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1437549963593482971) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.1704849973320960999) ) ) {
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.07985000312328338623) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.7620150148868560791) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8431349992752075195) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.4667499884963035583) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.007794999517500400543) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9705999791622161865) ) ) {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.8485250174999237061) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.2605199962854385376) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.043478260869565216;
                      result[1] += 0.9565217391304348;
                    }
                  }
                } else {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.07139000110328197479) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3203849941492080688) ) ) {
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
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.04061000049114227295) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.4460799992084503174) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-3.0000002880115062e-05) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.04294499941170215607) ) ) {
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
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.2371450066566467285) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.06496500223875045776) ) ) {
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
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.01032999996095895767) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.2140749990940093994) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.7140749990940093994) ) ) {
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.7381399869918823242) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3093599975109100342) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.2225000038743019104) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3220450058579444885) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.1997050046920776367) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.0612250007688999176) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9948549866676330566) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.3698400110006332397) ) ) {
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
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.9865550100803375244) ) ) {
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
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9105649888515472412) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2686599940061569214) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1386949960142374039) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.01929499948164448142) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.001455000019632279873) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.1622399985790252686) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.1329200007021427155) ) ) {
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
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.07925499975681304932) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.1923100054264068604) ) ) {
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.736744999885559082) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.8219699859619140625) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.8324699997901916504) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.2536100000143051147) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3400899916887283325) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.1756750047206878662) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6731700003147125244) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.07476999983191490173) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.08921499922871589661) ) ) {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3501849919557571411) ) ) {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.09421499632298946381) ) ) {
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
                if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.8825649917125701904) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.5637049973011016846) ) ) {
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
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.149645000696182251) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2528899982571601868) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.4064899981021881104) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.1507650017738342285) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.6790899932384490967) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7472899854183197021) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.1446250006556510925) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.6596049964427947998) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.05786499939858913422) ) ) {
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.2883100062608718872) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.1124100014567375183) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.6112099885940551758) ) ) {
                    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.8499999940395355225) ) ) {
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
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.01458000019192695618) ) ) {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.1094800010323524475) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.5024900063872337341) ) ) {
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
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.2006999999284744263) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.9772599935531616211) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7991999983787536621) ) ) {
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
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5315400063991546631) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.8423199951648712158) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9643700122833251953) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9607850015163421631) ) ) {
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7344049811363220215) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.05908499937504529953) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.1761900037527084351) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.106919996440410614) ) ) {
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.6481499969959259033) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8917249739170074463) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.6653749942779541016) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.3550299853086471558) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                } else {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2481500059366226196) ) ) {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.1928649991750717163) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.8;
                      result[1] += 0.2;
                    }
                  } else {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.4580750018358230591) ) ) {
                      result[0] += 0.05128205128205128;
                      result[1] += 0.9487179487179487;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9636499881744384766) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.4928749999962747097) ) ) {
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.7735649943351745605) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.2895499952137470245) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.149645000696182251) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.1304450035095214844) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1375699993222951889) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.5597649998962879181) ) ) {
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
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9561049938201904297) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.5961750000715255737) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.9051699936389923096) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.9533250033855438232) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.6979950070381164551) ) ) {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.7518000006675720215) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.2025950029492378235) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2925050035119056702) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.3363749980926513672) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              }
            } else {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.800429999828338623) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8701950013637542725) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9970000088214874268) ) ) {
                if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.9981200098991394043) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.786620020866394043) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.6590900123119354248) ) ) {
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
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.3395099937915802002) ) ) {
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
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8371500074863433838) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3787900060415267944) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1841150000691413879) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1175950020551681519) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.00741000007838010788) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9306100010871887207) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5285100005567073822) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.09969499707221984863) ) ) {
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
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.2415600046515464783) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.8344750106334686279) ) ) {
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
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.6194450110197067261) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.6363649964332580566) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.7272749990224838257) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2807449996471405029) ) ) {
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
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.3885599970817565918) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2284099943935871124) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.2443300038576126099) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7935449779033660889) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9352599978446960449) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2788099944591522217) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.2683700025081634521) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9329150021076202393) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2037050053477287292) ) ) {
                if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.5319900214672088623) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              } else {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.4250100106000900269) ) ) {
                  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.8783800005912780762) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.9533250033855438232) ) ) {
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.3691649995744228363) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5490350127220153809) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.483404994010925293) ) ) {
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
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9352599978446960449) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.142404995858669281) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.7018449902534484863) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.01040500029921531677) ) ) {
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.03266999870538711548) ) ) {
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
    }
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5490350127220153809) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6457199752330780029) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1321949958801269531) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2800800055265426636) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.3148950040340423584) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.6778749972581863403) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.000155000001541338861) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.153699999675154686) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.206979997456073761) ) ) {
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
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.176109999418258667) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5609500110149383545) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.05660500004887580872) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.9759500026702880859) ) ) {
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.09732999652624130249) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.89342498779296875) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.6746350228786468506) ) ) {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.3599600046873092651) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.3099600076675415039) ) ) {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.8357499837875366211) ) ) {
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
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.336129993200302124) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.3146849870681762695) ) ) {
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05761999823153018951) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.8474049866199493408) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.8562650084495544434) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.2536100000143051147) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.3607649952173233032) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.2002850063145160675) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.6058149933815002441) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2874100059270858765) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1333349943161010742) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.6480399966239929199) ) ) {
                if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.3645649999380111694) ) ) {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.01464000019041122869) ) ) {
                    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.03733500093221664429) ) ) {
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
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.7492249906063079834) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.614075005054473877) ) ) {
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
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2612600028514862061) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0857699960470199585) ) ) {
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
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1644600033760070801) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.3258900046348571777) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.4030800014734268188) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.01462000049650669098) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.1261900030076503754) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.3604500014334917068) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.002510000020265579224) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.01462999964132905006) ) ) {
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
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.9443449974060058594) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.01093500014394521713) ) ) {
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9352599978446960449) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1333349943161010742) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1414050012826919556) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.3676050007343292236) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.1826350018382072449) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.05189999938011169434) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.1612199991941452026) ) ) {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.3536400049924850464) ) ) {
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
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.8719449937343597412) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.8627449870109558105) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.04946000128984451294) ) ) {
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
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.07206000015139579773) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.07945000007748603821) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.4542050063610076904) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.460530012845993042) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.01614999957382678986) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.02250000089406967163) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.7017450034618377686) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.9357950091361999512) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.2022749930620193481) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2250049933791160583) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8371500074863433838) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5636099874973297119) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.9606400132179260254) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1408099979162216187) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.7140749990940093994) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8536449968814849854) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.6590200066566467285) ) ) {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.1729050055146217346) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3408249877393245697) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.8933549821376800537) ) ) {
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
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.7182199954986572266) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3380700051784515381) ) ) {
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
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.6096349954605102539) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.3334349989891052246) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1181800030171871185) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.03996500000357627869) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.1479450017213821411) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.1078549996018409729) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.00565999932587146759) ) ) {
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.7735649943351745605) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.04708499833941459656) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.1658449992537498474) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3585000038146972656) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2090400010347366333) ) ) {
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
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.09732999652624130249) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9566900134086608887) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.9186049997806549072) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.3985999971628189087) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7472899854183197021) ) ) {
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
  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.619029998779296875) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.05660500004887580872) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.9943900108337402344) ) ) {
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
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1790000051259994507) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.00370500003919005394) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.4225250035524368286) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.5309200137853622437) ) ) {
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.2165150027722120285) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1057599969208240509) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.03441500104963779449) ) ) {
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
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-3.999999898951500654e-05) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3359349966049194336) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1460099965333938599) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.9175949990749359131) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.09366500005125999451) ) ) {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.6684449911117553711) ) ) {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3591299951076507568) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.1111111111111111;
                      result[1] += 0.8888888888888888;
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
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.1515449956059455872) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.03123999945819377899) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.2279900014400482178) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.3247349858283996582) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.04580000042915344238) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.0500650014728307724) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8280600011348724365) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1958349943161010742) ) ) {
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
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.918069988489151001) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.00197999994270503521) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.6790899932384490967) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.8806549906730651855) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9329150021076202393) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.9533250033855438232) ) ) {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.2140050008893013) ) ) {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.08163499832153320312) ) ) {
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
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.6096349954605102539) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.03773500025272369385) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.07659500092267990112) ) ) {
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1408099979162216187) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.280605001375079155) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7472899854183197021) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.2581550031900405884) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.8436450064182281494) ) ) {
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
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.5472900122404098511) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.4026599973440170288) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7832599878311157227) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.194360002875328064) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5260000228881835938) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.8607849776744842529) ) ) {
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
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.004080000217072665691) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.106919996440410614) ) ) {
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1684800013899803162) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7935449779033660889) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.9021950066089630127) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.9481050074100494385) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.5956000089645385742) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.8177399933338165283) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.6590549945831298828) ) ) {
                if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.1143800020217895508) ) ) {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.304964996874332428) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.1402999982237815857) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9608049988746643066) ) ) {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.2610299959778785706) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.0625;
                      result[1] += 0.9375;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1087450012564659119) ) ) {
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
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.749154999852180481) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.3658849960193037987) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9280549883842468262) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.850534975528717041) ) ) {
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.09668999654240906239) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.3126450031995773315) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6526699960231781006) ) ) {
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
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9566900134086608887) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.3550299853086471558) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.8146849870681762695) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.9443449974060058594) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.461979985237121582) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.8409349918365478516) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.1469650045037269592) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3132750093936920166) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7967550158500671387) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.6112099885940551758) ) ) {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.585364997386932373) ) ) {
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
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.11924000084400177) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.4735449850559234619) ) ) {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.2775750011205673218) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1364650018513202667) ) ) {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.4100099951028823853) ) ) {
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
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.6653749942779541016) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7392549812793731689) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.3698100000619888306) ) ) {
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
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.1870450004935264587) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.7652249932289123535) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.2246899977326393127) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2262849956750869751) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6687749922275543213) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.6228149831295013428) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.6312749981880187988) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.2075249999761581421) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1405450031161308289) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.9951200187206268311) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.4657250046730041504) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1283200010657310486) ) ) {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.3228150010108947754) ) ) {
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
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.4771399945020675659) ) ) {
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
    

    FILE* file = fopen("./codegen/dataset_52/split_0/test_data.csv", "r");
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
