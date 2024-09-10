
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
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.01020500017330050468) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.002305000001797452569) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.14473000168800354) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.8467350006103515625) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.3736050128936767578) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.8928950130939483643) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
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
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6060149967670440674) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2030450031161308289) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.06835999712347984314) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2364600002765655518) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1460099965333938599) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.114160001277923584) ) ) {
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.572584986686706543) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              } else {
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.1749700009822845459) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.8867349922657012939) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              }
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.6754399985074996948) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.773580014705657959) ) ) {
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
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1193349994719028473) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.259990006685256958) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.09156499989330768585) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2794800028204917908) ) ) {
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.2941250056028366089) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.9483700096607208252) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.8847500085830688477) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.8897050023078918457) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.4638950079679489136) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1390250027179718018) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.1376650054007768631) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.5250850021839141846) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.6495950222015380859) ) ) {
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
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.4936199933290481567) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.06140000000596046448) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.4122250080108642578) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.2234800010919570923) ) ) {
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1684800013899803162) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2684749960899353027) ) ) {
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.9895350039005279541) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.9606400132179260254) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.1143800020217895508) ) ) {
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.6619299948215484619) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.3168200105428695679) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.1359349936246871948) ) ) {
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
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.5373300015926361084) ) ) {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.0692099984735250473) ) ) {
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
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9561049938201904297) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.06015999987721443176) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.1647849958389997482) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.1078049968928098679) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.1142850015312433243) ) ) {
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9127549827098846436) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.06670500338077545166) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.0761800035834312439) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.9987249970436096191) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.00464499741792678833) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7472899854183197021) ) ) {
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.8114149868488311768) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              } else {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.4166150093078613281) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.9989649951457977295) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.1878000032156705856) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6549850106239318848) ) ) {
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
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3114999979734420776) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.8125) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.9069150090217590332) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              }
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.714935004711151123) ) ) {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.858359992504119873) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              } else {
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.5193799994885921478) ) ) {
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
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.05486999824643135071) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.05845999903976917267) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.4618399962782859802) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.3444900065660476685) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.802929997444152832) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7425699830055236816) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2895250022411346436) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.8583849966526031494) ) ) {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.2917599994689226151) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              } else {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.0437649991363286972) ) ) {
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
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.798739999532699585) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.5256149917840957642) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.2528349980711936951) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.06402999907732009888) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.8841849863529205322) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.04992000013589859009) ) ) {
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
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.06945999991148710251) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.4768900126218795776) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7158949971199035645) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.1579000018537044525) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.2282350063323974609) ) ) {
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
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3963550031185150146) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2755100131034851074) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.6472599953413009644) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.8025600016117095947) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9456399977207183838) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9909499883651733398) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1273149978369474411) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1503250002861022949) ) ) {
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
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.8426549732685089111) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5322400182485580444) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.5075500011444091797) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.4680350124835968018) ) ) {
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.04428999871015548706) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.09668999654240906239) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.6904799938201904297) ) ) {
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6698200106620788574) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.9756500124931335449) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.6618850231170654297) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.05143499933183193207) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9952850043773651123) ) ) {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.08601500093936920166) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.01232500001788139343) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.06865999847650527954) ) ) {
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
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.946399986743927002) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.4205849915742874146) ) ) {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.3771049976348876953) ) ) {
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
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2727199941873550415) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.07816500216722488403) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.2154700085520744324) ) ) {
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
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7997750043869018555) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.07985000312328338623) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.05367000028491020203) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.4788649976253509521) ) ) {
                if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.2827500030398368835) ) ) {
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9263400137424468994) ) ) {
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
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1142599992454051971) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.07506499998271465302) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.04580000042915344238) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.02796499989926815033) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.1660399958491325378) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.972685009241104126) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.8928950130939483643) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.06144500523805618286) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.8770299851894378662) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.561900019645690918) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.1143800020217895508) ) ) {
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.7394900023937225342) ) ) {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.4839799851179122925) ) ) {
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
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.4843699876219034195) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.1145400106906890869) ) ) {
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
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.2287500053644180298) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.8599999845027923584) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.7432049959897994995) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.7211100012063980103) ) ) {
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
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5434100180864334106) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.1558800041675567627) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.3225549980998039246) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.4845750182867050171) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.8811450004577636719) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.2587949931621551514) ) ) {
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
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6283050179481506348) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2173400036990642548) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5035850107669830322) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.9759500026702880859) ) ) {
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.9659099876880645752) ) ) {
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
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.532050013542175293) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.04629500024020671844) ) ) {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2241549957543611526) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                } else {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.6897400021553039551) ) ) {
                    result[0] += 0;
                    result[1] += 1;
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
              } else {
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1173599995672702789) ) ) {
                  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.7912150025367736816) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.08142499625682830811) ) ) {
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
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.08440000005066394806) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.04650999978184700012) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.9118300080299377441) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.009799998253583908081) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-0.005170002579689025879) ) ) {
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.1481150016188621521) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.3605450093746185303) ) ) {
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.04428999871015548706) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.8361499905586242676) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.722220003604888916) ) ) {
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
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.4201850146055221558) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7876749932765960693) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.3953550010919570923) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.01820500008761882782) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.9013899862766265869) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.6979950070381164551) ) ) {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.09007500112056732178) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.6332649886608123779) ) ) {
                      result[0] += 0.047619047619047616;
                      result[1] += 0.9523809523809523;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.3302749991416931152) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.0565699990838766098) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.1456900015473365784) ) ) {
                      result[0] += 0.2;
                      result[1] += 0.8;
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
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.07506499998271465302) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.02862500026822090149) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.4809150006622076035) ) ) {
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.9851099848747253418) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.3291449993848800659) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.4895749986171722412) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.3063500076532363892) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.66408500075340271) ) ) {
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.4643249958753585815) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.1895800009369850159) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7338999807834625244) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7272749990224838257) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.8548000156879425049) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.2380749881267547607) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7186500132083892822) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.8253200054168701172) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              }
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.9042699933052062988) ) ) {
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9520449936389923096) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.1428550034761428833) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.8648650050163269043) ) ) {
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
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1390250027179718018) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.4730249941349029541) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.0001350000020465813577) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.01979500055313110352) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.09893999993801116943) ) ) {
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
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.8484800159931182861) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.6719200015068054199) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.07590000331401824951) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8646399974822998047) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.5124350041151046753) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.4689349997788667679) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.5607800185680389404) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
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
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1003000028431415558) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9469150006771087646) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.007794999517500400543) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.03201499581336975098) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.1389449983835220337) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.1781749986112117767) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2869900017976760864) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.04165499843657016754) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.2298349994234740734) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              }
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.9757399857044219971) ) ) {
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.5688250064849853516) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4657350033521652222) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.009455000050365924835) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.439999997615814209) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7714300155639648438) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.3506750017404556274) ) ) {
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
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1105400025844573975) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.06637499993667006493) ) ) {
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1930849999189376831) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9835450053215026855) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.6618850231170654297) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.6841449737548828125) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.9882499873638153076) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.3854599893093109131) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6698200106620788574) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.6170649826526641846) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.0253649991936981678) ) ) {
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.1560949943959712982) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2943250089883804321) ) ) {
                  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.4327950030565261841) ) ) {
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
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.3095200061798095703) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.2122249975800514221) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.7919400036334991455) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.5848200023174285889) ) ) {
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
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.3953550010919570923) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.6597450077533721924) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9050999879837036133) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.185550004243850708) ) ) {
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
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.1501450017094612122) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1167949996888637543) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.8104949891567230225) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.8512350022792816162) ) ) {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1488099955022335052) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6447599977254867554) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7521199882030487061) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.1015600003302097321) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.1229549981653690338) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.05263499869033694267) ) ) {
                      result[0] += 0.08333333333333333;
                      result[1] += 0.9166666666666666;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.4459049999713897705) ) ) {
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
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3303000032901763916) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7989200055599212646) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.03259499929845333099) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.0009649998974055051804) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.0354249998927116394) ) ) {
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
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.3237400054931640625) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.08298999816179275513) ) ) {
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
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.01370999962091445923) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.9726549983024597168) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8619300127029418945) ) ) {
          result[0] += 0;
          result[1] += 1;
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
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.798739999532699585) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9566900134086608887) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.3511250019073486328) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.3514899909496307373) ) ) {
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.8634200096130371094) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.8788850009441375732) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.9533250033855438232) ) ) {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3651700019836425781) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.2116400003433227539) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1977800056338310242) ) ) {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.2155400067567825317) ) ) {
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
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8701950013637542725) ) ) {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.2220600023865699768) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.6722149848937988281) ) ) {
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
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2837649956345558167) ) ) {
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
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2200950011610984802) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5419000014662742615) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.3444900065660476685) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3841849863529205322) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.9817700088024139404) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7950850129127502441) ) ) {
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
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9891000092029571533) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.959515005350112915) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1405950039625167847) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.9442299902439117432) ) ) {
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.3805600106716156006) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.07707499712705612183) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.08012999966740608215) ) ) {
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
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8884250223636627197) ) ) {
                if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.813935011625289917) ) ) {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.1435800008475780487) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.6700600087642669678) ) ) {
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
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.5982100069522857666) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              } else {
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.8719449937343597412) ) ) {
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.7941200137138366699) ) ) {
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
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.149645000696182251) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2528899982571601868) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.2329150009900331497) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6079050004482269287) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.8108749985694885254) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7155349999666213989) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.3207800090312957764) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.3674100041389465332) ) ) {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1002099979668855667) ) ) {
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
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.1445450000464916229) ) ) {
                if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.1740700006484985352) ) ) {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.1759449969977140427) ) ) {
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
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.5434299930930137634) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.5138449892401695251) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.5412700027227401733) ) ) {
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
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.08616000041365623474) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.08590000029653310776) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8980149924755096436) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9814800024032592773) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.5610249936580657959) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.1334449984133243561) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.7730050086975097656) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.8766050040721893311) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7188099920749664307) ) ) {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.08942000195384025574) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.7585949897766113281) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.5;
                      result[1] += 0.5;
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
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.1457499973475933075) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.02590999938547611237) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.07949499785900115967) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.8615700006484985352) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.06263499706983566284) ) ) {
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.4545449912548065186) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.02607500180602073669) ) ) {
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
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2141800001263618469) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.06190999969840049744) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.02297000028192996979) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.2553400024771690369) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.1482399990782141685) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.7394900023937225342) ) ) {
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6553950011730194092) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.02380999922752380371) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.2298050001263618469) ) ) {
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.01093500014394521713) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.9116599857807159424) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7922950088977813721) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.153730001300573349) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4330900013446807861) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.9957500100135803223) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.314449995756149292) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1460099965333938599) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.9815050065517425537) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.7493149936199188232) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7745099961757659912) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.02941500116139650345) ) ) {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.4606800079345703125) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.2629600018262863159) ) ) {
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
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.1833549961447715759) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.01723000034689903259) ) ) {
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
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9127549827098846436) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.813050001859664917) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6283050179481506348) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.4327850081026554108) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4284099936485290527) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.5823900103569030762) ) ) {
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.7959200143814086914) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.0745949968695640564) ) ) {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.2298949998803436756) ) ) {
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
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.9945150017738342285) ) ) {
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.3476950079202651978) ) ) {
                  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.6596899926662445068) ) ) {
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
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2809000015258789062) ) ) {
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
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.07860999926924705505) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2350450009107589722) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.08204999938607215881) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.07190000265836715698) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.4869400002062320709) ) ) {
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.02862500026822090149) ) ) {
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
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6134250164031982422) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6698200106620788574) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.6170649826526641846) ) ) {
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
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.4012850150465965271) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8791849911212921143) ) ) {
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9970000088214874268) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.618055000901222229) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              } else {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.862724989652633667) ) ) {
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
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6283050179481506348) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.01020500017330050468) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3694349974393844604) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9643700122833251953) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.8963550031185150146) ) ) {
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
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.5630550086498260498) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1256750002503395081) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.05144499929156154394) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9788799881935119629) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.1462749987840652466) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.4762350022792816162) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.6605949997901916504) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.793320000171661377) ) ) {
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
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2985150068998336792) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.09069000184535980225) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.4308699965476989746) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.07984000071883201599) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.3110100030899047852) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2001650035381317139) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.2610650062561035156) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.2415600046515464783) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.7889449894428253174) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.7320300042629241943) ) ) {
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
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.8847500085830688477) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.655359998345375061) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.2677400112152099609) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.124809999018907547) ) ) {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.2879450023174285889) ) ) {
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
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9481199979782104492) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.7237900048494338989) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.5588250011205673218) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.6428550034761428833) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.8571450114250183105) ) ) {
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
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.01729499921202659607) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.1215549968183040619) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.1671000048518180847) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.5839700028300285339) ) ) {
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.1092650033533573151) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.0745949968695640564) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.4642999991774559021) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8039250075817108154) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.8480649888515472412) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.1299549974501132965) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1409100070595741272) ) ) {
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
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.06145500019192695618) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.7490049898624420166) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.166665002703666687) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8791849911212921143) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.3411049991846084595) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.1139400005340576172) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.2629600018262863159) ) ) {
                  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.792389988899230957) ) ) {
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
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6377250105142593384) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.7919400036334991455) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              }
            }
          } else {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.25) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.005030000116676092148) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.009580000303685665131) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.5576899982988834381) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8619300127029418945) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1460099965333938599) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7876749932765960693) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.277779996395111084) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.06115999817848205566) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.5474300011992454529) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.347899995744228363) ) ) {
                  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.962994992733001709) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.02937499992549419403) ) ) {
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
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.9981499910354614258) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.4962049871683120728) ) ) {
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.8560799956321716309) ) ) {
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
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.189065001904964447) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.6562150120735168457) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.1488099992275238037) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.1215050022583454847) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3333950042724609375) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1340300049632787704) ) ) {
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1958349943161010742) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.05313000013120472431) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.0597050003707408905) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.3409299962222576141) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.9606400132179260254) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.8845199942588806152) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2965200096368789673) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.888889998197555542) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9607850015163421631) ) ) {
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.4667499884963035583) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.933945000171661377) ) ) {
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
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.8774850070476531982) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.4962150007486343384) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.5708099976181983948) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.3806699961423873901) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.5) ) ) {
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
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1256750002503395081) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.0004450000124052166939) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.1540200002491474152) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.3112100064754486084) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.003484999993816018105) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.5382400155067443848) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.04953000135719776154) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.2573850005865097046) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9970000088214874268) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.4753149896860122681) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.4002050012350082397) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.5125550031661987305) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.4171449989080429077) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.1818800047039985657) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.155149996280670166) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9607850015163421631) ) ) {
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.2832849994301795959) ) ) {
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
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.2758249938488006592) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.6011250019073486328) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.8441950082778930664) ) ) {
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
    

    FILE* file = fopen("./codegen/dataset_52/split_4/test_data.csv", "r");
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
