
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
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.03596000000834465027) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.4075500071048736572) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.06027499958872795105) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.5236699879169464111) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.004435000204466632567) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.05012499913573265076) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.2227599937468767166) ) ) {
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
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.3858050033450126648) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1196150034666061401) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.05144499987363815308) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.7106949985027313232) ) ) {
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7472899854183197021) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.9763750135898590088) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.420354992151260376) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.2176549956202507019) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.7207549810409545898) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.6429499983787536621) ) ) {
                result[0] += 0.14285714285714285;
                result[1] += 0.8571428571428571;
              } else {
                result[0] += 0.00847457627118644;
                result[1] += 0.9915254237288136;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9550499916076660156) ) ) {
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03717499971389770508) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.260839998722076416) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.006680000107735395432) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.8729450106620788574) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.2548999935388565063) ) ) {
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.9483700096607208252) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.3056350052356719971) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4065450131893157959) ) ) {
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.6800599992275238037) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.9697250127792358398) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.139164995402097702) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9566900134086608887) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.022598870056497175;
                result[1] += 0.9774011299435028;
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.5228450074791908264) ) ) {
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
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7944949865341186523) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.6400800049304962158) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3104599900543689728) ) ) {
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.7196249961853027344) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9516099989414215088) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.3175899982452392578) ) ) {
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
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.7661949992179870605) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.7813750207424163818) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.06124999932944774628) ) ) {
                result[0] += 0.75;
                result[1] += 0.25;
              } else {
                result[0] += 0.015873015873015872;
                result[1] += 0.9841269841269841;
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.8606199920177459717) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.75;
                result[1] += 0.25;
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.3749499917030334473) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.3659050017595291138) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.05051999911665916443) ) ) {
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7468499839305877686) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.4308699965476989746) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.6267299950122833252) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.938935011625289917) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.02857142857142857;
                result[1] += 0.9714285714285714;
              }
            }
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.6872799992561340332) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.8737800121307373047) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7935449779033660889) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8181799948215484619) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1071449965238571167) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8989500105381011963) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.6077099889516830444) ) ) {
                result[0] += 0.5;
                result[1] += 0.5;
              } else {
                result[0] += 0.01694915254237288;
                result[1] += 0.9830508474576272;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.7915199995040893555) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.3894599974155426025) ) ) {
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
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.983574986457824707) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2245049998164176941) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01879500038921833038) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.0969000011682510376) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.01561500015668570995) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.4692100007086992264) ) ) {
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
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.830110013484954834) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8791849911212921143) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.8094950020313262939) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.6621050238609313965) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.02158273381294964;
                result[1] += 0.9784172661870504;
              }
            }
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.7287250012159347534) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2262849956750869751) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9584149718284606934) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2927449941635131836) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.8114149868488311768) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.0761800035834312439) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8791849911212921143) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.1600449979305267334) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.1766999959945678711) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.7980500161647796631) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0.6666666666666666;
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
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.356835000216960907) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7344049811363220215) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.5515949875116348267) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7272749990224838257) ) ) {
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.5) ) ) {
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
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5434100180864334106) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.08712999895215034485) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.2659899964928627014) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.8431400060653686523) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.1333200037479400635) ) ) {
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.7884600162506103516) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.3485700078308582306) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.0863149985671043396) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.3079150021076202393) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.1162800006568431854) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.006680000107735395432) ) ) {
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7944949865341186523) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.2129350006580352783) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.1526000052690505981) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.8;
                result[1] += 0.2;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9566900134086608887) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.015267175572519083;
                result[1] += 0.9847328244274809;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.1487850025296211243) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7498099952936172485) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.2530699968338012695) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7607800066471099854) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.2641550078988075256) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.30750998854637146) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.05263157894736842;
                result[1] += 0.9473684210526315;
              }
            }
          } else {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.260455012321472168) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.3723599910736083984) ) ) {
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.7890950143337249756) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6000000014901161194) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.125) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.04938500095158815384) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7888950109481811523) ) ) {
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.08616000041365623474) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.2670000046491622925) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.4590099900960922241) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3213300108909606934) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.008684992790222167969) ) ) {
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
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.9754950106143951416) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.1983349993824958801) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.169290006160736084) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5571700036525726318) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.05475499853491783142) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.9101049900054931641) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8059450089931488037) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.005164999980479478836) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.4306400120258331299) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.6312749981880187988) ) ) {
                result[0] += 0.03571428571428571;
                result[1] += 0.9642857142857143;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.8333350121974945068) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.6812500059604644775) ) ) {
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
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9614199995994567871) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.5687750056385993958) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.6030950024724006653) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2599149942398071289) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9955250024795532227) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5324800163507461548) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6824550032615661621) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.9697250127792358398) ) ) {
                result[0] += 0.035211267605633804;
                result[1] += 0.9647887323943662;
              } else {
                result[0] += 0.3333333333333333;
                result[1] += 0.6666666666666666;
              }
            }
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2239549979567527771) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.8690499961376190186) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.5338950008153915405) ) ) {
                result[0] += 0.6666666666666666;
                result[1] += 0.3333333333333333;
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.8788850009441375732) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.007794999517500400543) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.6808699965476989746) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.8389199972152709961) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.1911699995398521423) ) ) {
                result[0] += 0.06382978723404255;
                result[1] += 0.9361702127659575;
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
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.3505450040102005005) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.5731900036334991455) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.2596349939703941345) ) ) {
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
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.813050001859664917) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2719449996948242188) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6023550033569335938) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.8479700088500976562) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1100699901580810547) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.07985000312328338623) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7652349770069122314) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.8071799874305725098) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8646399974822998047) ) ) {
                result[0] += 0.01675977653631285;
                result[1] += 0.9832402234636871;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.569825001060962677) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.5002949982881546021) ) ) {
                result[0] += 0.6666666666666666;
                result[1] += 0.3333333333333333;
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8980149924755096436) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.5839999914169311523) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.8076899945735931396) ) ) {
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6824550032615661621) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.3805600106716156006) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.8618449866771697998) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.7465550005435943604) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9952850043773651123) ) ) {
                result[0] += 0.02;
                result[1] += 0.98;
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
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.03596000000834465027) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.4603350162506103516) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.007524999789893627167) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.05391500145196914673) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.4832599908113479614) ) ) {
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
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.03891000151634216309) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.206259995698928833) ) ) {
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
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.7985249757766723633) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.7047049999237060547) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7344049811363220215) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1035849964246153831) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.0745949968695640564) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.2516650035977363586) ) ) {
                result[0] += 0.11538461538461539;
                result[1] += 0.8846153846153846;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.03078999929130077362) ) ) {
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
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.2395199984312057495) ) ) {
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02878000028431415558) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7483049929141998291) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9447599947452545166) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8646399974822998047) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.983574986457824707) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2686599940061569214) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.3502150028944015503) ) ) {
                result[0] += 0.7272727272727273;
                result[1] += 0.2727272727272727;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8073050081729888916) ) ) {
                result[0] += 0.017857142857142856;
                result[1] += 0.9821428571428571;
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
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.3360399976372718811) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.1610649935901165009) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.01020500017330050468) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7126799821853637695) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.5080200135707855225) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1734700053930282593) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.687710002064704895) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.9606400132179260254) ) ) {
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5330200009047985077) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.1966350004076957703) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9127549827098846436) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.4727649986743927002) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.2279900014400482178) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.08298999816179275513) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.5775350034236907959) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.9032199978828430176) ) ) {
                result[0] += 0.04878048780487805;
                result[1] += 0.9512195121951219;
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
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.02214000001549720764) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3496950045228004456) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.5465600006282329559) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5809950008988380432) ) ) {
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2986000031232833862) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.9946500062942504883) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.8389199972152709961) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.9933899939060211182) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1239100024104118347) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.5759449973702430725) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3651500046253204346) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.08999999985098838806) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.7432049959897994995) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.5933350026607513428) ) ) {
                result[0] += 0.75;
                result[1] += 0.25;
              } else {
                result[0] += 0.1;
                result[1] += 0.9;
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2725899964570999146) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7446549832820892334) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8371500074863433838) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.938935011625289917) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.6077099889516830444) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7935449779033660889) ) ) {
                result[0] += 0.03428571428571429;
                result[1] += 0.9657142857142857;
              } else {
                result[0] += 0.5;
                result[1] += 0.5;
              }
            }
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.2647300064563751221) ) ) {
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.214620005339384079) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6255199909210205078) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7446549832820892334) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.2395399920642375946) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.3838550001382827759) ) ) {
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.9452149868011474609) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.5052100121974945068) ) ) {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.166665002703666687) ) ) {
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.1117499973624944687) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.04998499155044555664) ) ) {
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
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5515550076961517334) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.7661949992179870605) ) ) {
                result[0] += 0.07246376811594203;
                result[1] += 0.927536231884058;
              } else {
                result[0] += 0.010638297872340425;
                result[1] += 0.9893617021276596;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02878000028431415558) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.1022950001060962677) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7425699830055236816) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.8938049972057342529) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.8618449866771697998) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3439799994230270386) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.3780400007963180542) ) ) {
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.6984350085258483887) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.1825399994850158691) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.3536999970674514771) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.7756849825382232666) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.5) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.6742250025272369385) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8181799948215484619) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.9987249970436096191) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9105649888515472412) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.09366500005125999451) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.9656299948692321777) ) ) {
                result[0] += 0.02857142857142857;
                result[1] += 0.9714285714285714;
              } else {
                result[0] += 0.3333333333333333;
                result[1] += 0.6666666666666666;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3952050060033798218) ) ) {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.8988049924373626709) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.558725014328956604) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.3306449949741363525) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.2119949990883469582) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.149645000696182251) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8371500074863433838) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8927049934864044189) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.813050001859664917) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2147799953818321228) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.169290006160736084) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.6975899934768676758) ) ) {
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
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.5992000102996826172) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.08994999900460243225) ) ) {
                result[0] += 0.13333333333333333;
                result[1] += 0.8666666666666667;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
                result[0] += 0.007407407407407408;
                result[1] += 0.9925925925925926;
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.7687949836254119873) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.9671449959278106689) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1074300035834312439) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4284099936485290527) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.3660750091075897217) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.2127999961376190186) ) ) {
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.1486949995160102844) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2823249995708465576) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7498099952936172485) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.8071799874305725098) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.4680400043725967407) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.0625;
                result[1] += 0.9375;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.1983349993824958801) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.7102600038051605225) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.7465550005435943604) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.09672499820590019226) ) ) {
              result[0] += 0;
              result[1] += 1;
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
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1797650009393692017) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2780349999666213989) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7192199826240539551) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.1316450014710426331) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.4933199998922646046) ) ) {
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
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.7460500001907348633) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.2521699965000152588) ) ) {
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
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.2162499949336051941) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7558549940586090088) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7652349770069122314) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.2083500027656555176) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.04633000120520591736) ) ) {
                result[0] += 0.034482758620689655;
                result[1] += 0.9655172413793104;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.6110799983143806458) ) ) {
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
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.8604550063610076904) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.5296049993485212326) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.4550499916076660156) ) ) {
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.7890950143337249756) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.7335599958896636963) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.2933799996972084045) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9780150055885314941) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.2770249992609024048) ) ) {
                result[0] += 0.6;
                result[1] += 0.4;
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
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.3343200087547302246) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.3733350038528442383) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.2573850005865097046) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.2959200143814086914) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.1131599955260753632) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4975449889898300171) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.1107100024819374084) ) ) {
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
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.1404049992561340332) ) ) {
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.008995000272989273071) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.1780849993228912354) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.4355349987745285034) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.1618300043046474457) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.5387950092554092407) ) ) {
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
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1165099963545799255) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.5137099921703338623) ) ) {
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
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.06392499804496765137) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.07459499873220920563) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.3845199942588806152) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.3680350109934806824) ) ) {
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
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.7295950055122375488) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.8101499974727630615) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.5) ) ) {
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.6413050144910812378) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.2156850099563598633) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.117274995893239975) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.6742250025272369385) ) ) {
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.5411049872636795044) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.4333349838852882385) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.03404000401496887207) ) ) {
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
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.9342049956321716309) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.4655550047755241394) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1768149957060813904) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9352599978446960449) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.06813999824225902557) ) ) {
                result[0] += 0.09375;
                result[1] += 0.90625;
              } else {
                result[0] += 0.006802721088435374;
                result[1] += 0.9931972789115646;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9614199995994567871) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.6531949937343597412) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2917099893093109131) ) ) {
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2599149942398071289) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.260839998722076416) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.01501999981701374054) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4411299973726272583) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.005880000069737434387) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9447599947452545166) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.9424299895763397217) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.9509800076484680176) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.8230099976062774658) ) ) {
                result[0] += 0.024844720496894408;
                result[1] += 0.9751552795031055;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2863650089129805565) ) ) {
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
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.001044999997247941792) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.1485300064086914062) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4447249919176101685) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.6093799993395805359) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7340849936008453369) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.4000250101089477539) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.7226700037717819214) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9604150056838989258) ) ) {
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.6042999923229217529) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.219595000147819519) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.2487100064754486084) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.07467000186443328857) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9127549827098846436) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9500699937343597412) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5271300002932548523) ) ) {
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
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.6118450164794921875) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.6793600022792816162) ) ) {
                result[0] += 0.125;
                result[1] += 0.875;
              } else {
                result[0] += 0.007194244604316547;
                result[1] += 0.9928057553956835;
              }
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4372749924659729004) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.13444499671459198) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.2546549960970878601) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.04653999954462051392) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.08347499929368495941) ) ) {
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
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7947549819946289062) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.8389199972152709961) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.6042999923229217529) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.634990006685256958) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2452850043773651123) ) ) {
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
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.1751149967312812805) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.4580750018358230591) ) ) {
                result[0] += 0.10714285714285714;
                result[1] += 0.8928571428571429;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3856199979782104492) ) ) {
                result[0] += 0.027777777777777776;
                result[1] += 0.9722222222222222;
              } else {
                result[0] += 0.75;
                result[1] += 0.25;
              }
            }
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.5) ) ) {
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
    

    FILE* file = fopen("./codegen/dataset_52/split_1/test_data.csv", "r");
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
