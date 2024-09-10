
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
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1779949963092803955) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5398649871349334717) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.146785002201795578) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.03265500068664550781) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.1904799938201904297) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.3455800041556358337) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.3447199985384941101) ) ) {
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.1807550080120563507) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6698200106620788574) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9366349875926971436) ) ) {
            result[0] += 1;
            result[1] += 0;
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
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9387849867343902588) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.7352949976921081543) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.4899999946355819702) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.6328549981117248535) ) ) {
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
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.06627999991178512573) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02312999917194247246) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7787800133228302002) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.8988299965858459473) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-2.999999924213625491e-05) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.2421349957585334778) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.2650849968194961548) ) ) {
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
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.4626800119876861572) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
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
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.07243000157177448273) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.7610149979591369629) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.2792299985885620117) ) ) {
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8323700129985809326) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7313249707221984863) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.04958000034093856812) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7498099952936172485) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.7937150001525878906) ) ) {
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2943250089883804321) ) ) {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2704150080680847168) ) ) {
                    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.4034850001335144043) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.4;
                      result[1] += 0.6;
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
                result[0] += 1;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.3634900078177452087) ) ) {
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
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1408099979162216187) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.02941500116139650345) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.03394500166177749634) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.02498000022023916245) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9541249871253967285) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2895250022411346436) ) ) {
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.2732599973678588867) ) ) {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.3429550006985664368) ) ) {
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
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.3224699944257736206) ) ) {
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
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.09562000259757041931) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.0883550010621547699) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3803900033235549927) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.1951350048184394836) ) ) {
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.06134499981999397278) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.3601550012826919556) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9944899976253509521) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.4946500062942504883) ) ) {
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
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.9508799910545349121) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3651500046253204346) ) ) {
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
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.513425000011920929) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.5712199807167053223) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.3199850022792816162) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02312999917194247246) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.0008299999753944575787) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.01107500027865171432) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.6890749931335449219) ) ) {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.6923749744892120361) ) ) {
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
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.1749750040471553802) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2586600035429000854) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.07338500022888183594) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.06869999878108501434) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-0.2476699948310852051) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.4339000023901462555) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.1503399983048439026) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.7944799959659576416) ) ) {
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
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.116679999977350235) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.5295000001788139343) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.04149499908089637756) ) ) {
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
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.06627999991178512573) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1304000020027160645) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.2270999997854232788) ) ) {
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
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.3319950029253959656) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6162749975919723511) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.2915349975228309631) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.0238949991762638092) ) ) {
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8989500105381011963) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.7620150148868560791) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.8444550037384033203) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.02153499983251094818) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2385150045156478882) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.8407050073146820068) ) ) {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.6454299837350845337) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.06696499884128570557) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              }
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.7436400055885314941) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.6369349956512451172) ) ) {
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
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.9056049883365631104) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0) ) ) {
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
  }
  
  // Average tree outputs
  result[0] /= 5;
  result[1] /= 5;
  
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
    

    FILE* file = fopen("./codegen/dataset_52/split_2/test_data.csv", "r");
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
