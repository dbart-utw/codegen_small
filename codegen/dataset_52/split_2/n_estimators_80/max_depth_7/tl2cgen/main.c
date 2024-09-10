
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3585000038146972656) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.4924250096082687378) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.3057550042867660522) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.0008299999753944575787) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.5463500022888183594) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.1999499965459108353) ) ) {
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
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9127549827098846436) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.125) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.8275400102138519287) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.05663499236106872559) ) ) {
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
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8694249987602233887) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7183350026607513428) ) ) {
                result[0] += 0.23076923076923078;
                result[1] += 0.7692307692307693;
              } else {
                result[0] += 0.015873015873015872;
                result[1] += 0.9841269841269841;
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03030500002205371857) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.1647849958389997482) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.6984750032424926758) ) ) {
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
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9580449759960174561) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8762150108814239502) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5324800163507461548) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2342149987816810608) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.2140100002288818359) ) ) {
                result[0] += 0.03333333333333333;
                result[1] += 0.9666666666666667;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.06570000201463699341) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.03571428571428571;
                result[1] += 0.9642857142857143;
              }
            }
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9573650062084197998) ) ) {
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
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.7424249947071075439) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.09377000108361244202) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.225949995219707489) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.2553400024771690369) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.1472049951553344727) ) ) {
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.8250899910926818848) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7394700050354003906) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.1841150000691413879) ) ) {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.6398099958896636963) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0001250000059371814132) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.1540200002491474152) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.2090900018811225891) ) ) {
                result[0] += 0.07894736842105263;
                result[1] += 0.9210526315789473;
              } else {
                result[0] += 0.8;
                result[1] += 0.2;
              }
            }
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9561049938201904297) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.8738300204277038574) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.8165600001811981201) ) ) {
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
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.4157600104808807373) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.9157600104808807373) ) ) {
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.7182199954986572266) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.01779500022530555725) ) ) {
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
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2200950011610984802) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.4805999994277954102) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.06835999712347984314) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.06481999903917312622) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.08355000242590904236) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.05952500179409980774) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.4091450124979019165) ) ) {
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
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.6385599970817565918) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.8024500012397766113) ) ) {
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9127549827098846436) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.04212500154972076416) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9946700036525726318) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.07707499712705612183) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.1792050041258335114) ) ) {
                result[0] += 0.16666666666666666;
                result[1] += 0.8333333333333334;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.6285150200128555298) ) ) {
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2193350046873092651) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.5921600162982940674) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.963209986686706543) ) ) {
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
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.8226949870586395264) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.8314950168132781982) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.4497149921953678131) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.9108049869537353516) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.938935011625289917) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.024539877300613498;
                result[1] += 0.9754601226993865;
              }
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
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.806565016508102417) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.8562099933624267578) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3651500046253204346) ) ) {
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
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.04028999991714954376) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.09156499989330768585) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.3584250137209892273) ) ) {
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
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6836099922657012939) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.152225002646446228) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2248550057411193848) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.2156149968504905701) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.3837500140070915222) ) ) {
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
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.9756500124931335449) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.1254899986088275909) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.6681950092315673828) ) ) {
                result[0] += 0.7777777777777778;
                result[1] += 0.2222222222222222;
              } else {
                result[0] += 0.06666666666666667;
                result[1] += 0.9333333333333333;
              }
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9892250001430511475) ) ) {
                result[0] += 0.0078125;
                result[1] += 0.9921875;
              } else {
                result[0] += 0.4;
                result[1] += 0.6;
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4454549998044967651) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.4034850001335144043) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.3157900013029575348) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.0008299999753944575787) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.0662249978631734848) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4409199953079223633) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.6590899825096130371) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1333349943161010742) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9469150006771087646) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.2476099953055381775) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2230500057339668274) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.7716000080108642578) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.09315500035881996155) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8122349977493286133) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.07707499712705612183) ) ) {
                result[0] += 0.17391304347826086;
                result[1] += 0.8260869565217391;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8791849911212921143) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7949350178241729736) ) ) {
                result[0] += 0.5;
                result[1] += 0.5;
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
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2399550005793571472) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.1068050041794776917) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-2.999999924213625491e-05) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.002905000004830071703) ) ) {
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
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3753200024366378784) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.01236999966204166412) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.2944549918174743652) ) ) {
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7832599878311157227) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4832099974155426025) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.5238150060176849365) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1799250021576881409) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3553550094366073608) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.2943550050258636475) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5163749903440475464) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8348749876022338867) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.5610249936580657959) ) ) {
                result[0] += 0.15789473684210525;
                result[1] += 0.8421052631578947;
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
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.2131849974393844604) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1074300035834312439) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.7230750024318695068) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.852939993143081665) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.138295002281665802) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.01184499962255358696) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.05835499893873929977) ) ) {
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
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-0.005170002579689025879) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7009149789810180664) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.1616050004959106445) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.625) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.3646650146692991257) ) ) {
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.7465550005435943604) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.5890849977731704712) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.7027949988842010498) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9481199979782104492) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0.6666666666666666;
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2927449941635131836) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.6516050100326538086) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.3217400014400482178) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.1187900025397539139) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.1485550105571746826) ) ) {
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.8071799874305725098) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5515550076961517334) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1540300026535987854) ) ) {
                result[0] += 0.04580152671755725;
                result[1] += 0.9541984732824428;
              } else {
                result[0] += 0.20454545454545456;
                result[1] += 0.7954545454545454;
              }
            }
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.007125000003725290298) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7874299883842468262) ) ) {
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
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5370100140571594238) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.6284099966287612915) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9944899976253509521) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.08610999956727027893) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.2580699995160102844) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.7099249958992004395) ) ) {
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
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7903949916362762451) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8989500105381011963) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.9118300080299377441) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2175149992108345032) ) ) {
                result[0] += 0.6666666666666666;
                result[1] += 0.3333333333333333;
              } else {
                result[0] += 0.03164556962025317;
                result[1] += 0.9683544303797469;
              }
            }
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.1749499887228012085) ) ) {
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
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.001044999997247941792) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.4375250041484832764) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4562249928712844849) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.04447000101208686829) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-2.999999924213625491e-05) ) ) {
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
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.6748799979686737061) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9150399863719940186) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.8988299965858459473) ) ) {
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
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.0733349919319152832) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1020400002598762512) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.6077099889516830444) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.89342498779296875) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3980900049209594727) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.06115999817848205566) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.4777050018310546875) ) ) {
                result[0] += 0.5;
                result[1] += 0.5;
              } else {
                result[0] += 0.05263157894736842;
                result[1] += 0.9473684210526315;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.100375000387430191) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.7446350008249282837) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6642700135707855225) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.758170008659362793) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4486800134181976318) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.7264149934053421021) ) ) {
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
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.9118300080299377441) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1684800013899803162) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.029239766081871343;
                result[1] += 0.9707602339181286;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9941000044345855713) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1408099979162216187) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2070500031113624573) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.9555749893188476562) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.02941500116139650345) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.7299300134181976318) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.1638600043952465057) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.2857142857142857;
                result[1] += 0.7142857142857143;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5254649966955184937) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4463449865579605103) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0.6666666666666666;
              } else {
                result[0] += 0.00847457627118644;
                result[1] += 0.9915254237288136;
              }
            }
          }
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7183150053024291992) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.7616800069808959961) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7223000228404998779) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.9534899890422821045) ) ) {
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
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.106104997918009758) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.1177249960601329803) ) ) {
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
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.8024500012397766113) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.9443449974060058594) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.149645000696182251) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.8275400102138519287) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.8347149789333343506) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.3334949910640716553) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.3501300066709518433) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.2222800031304359436) ) ) {
                result[0] += 0.045454545454545456;
                result[1] += 0.9545454545454546;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.9118300080299377441) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.022058823529411766;
                result[1] += 0.9779411764705882;
              }
            }
          }
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.125) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.420354992151260376) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.4924250096082687378) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1431149989366531372) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1304000020027160645) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.01475999876856803894) ) ) {
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
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.8243899941444396973) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8219450116157531738) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.6790899932384490967) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8694249987602233887) ) ) {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.7286800146102905273) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.996230006217956543) ) ) {
                result[0] += 0.05063291139240506;
                result[1] += 0.9493670886075949;
              } else {
                result[0] += 0.6;
                result[1] += 0.4;
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
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.9808050096035003662) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.9626800119876861572) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.333334997296333313) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2816650047898292542) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02312999917194247246) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.05421499907970428467) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.1796300001442432404) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.8250899910926818848) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4454549998044967651) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.5946500003337860107) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.354235013946890831) ) ) {
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
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.9697250127792358398) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.6448299884796142578) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.89342498779296875) ) ) {
                result[0] += 0.038461538461538464;
                result[1] += 0.9615384615384616;
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
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.7037000060081481934) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.02941000089049339294) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.1221249997615814209) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.5193799994885921478) ) ) {
                result[0] += 1;
                result[1] += 0;
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
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.5) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.8071799874305725098) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.8788850009441375732) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.786119997501373291) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1408099979162216187) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8694249987602233887) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.999664992094039917) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.08695652173913043;
                result[1] += 0.9130434782608695;
              }
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.3675100132822990417) ) ) {
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
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0001250000059371814132) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.06735000014305114746) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.008534999564290046692) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.36716499924659729) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.241315007209777832) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.001494999974966049194) ) ) {
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
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.156419999897480011) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.9443449974060058594) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.04017999954521656036) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.07352499663829803467) ) ) {
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
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1260650008916854858) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3483350053429603577) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.002039999933913350105) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.3403249979019165039) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.6077099889516830444) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.4333349838852882385) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1411899998784065247) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.09360999986529350281) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7343949973583221436) ) ) {
                result[0] += 0.5;
                result[1] += 0.5;
              } else {
                result[0] += 0.03225806451612903;
                result[1] += 0.967741935483871;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.75) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.2441600039601325989) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.8583000004291534424) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.6951300203800201416) ) ) {
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
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.5931600034236907959) ) ) {
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.9756500124931335449) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5370100140571594238) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.420144990086555481) ) ) {
                result[0] += 0.1875;
                result[1] += 0.8125;
              } else {
                result[0] += 0.014925373134328358;
                result[1] += 0.9850746268656716;
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
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.9598099887371063232) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9387849867343902588) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.590910002589225769) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.07637999951839447021) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.4497149921953678131) ) ) {
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
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2102850005030632019) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.3427699953317642212) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2816650047898292542) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.0761800035834312439) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.1531249983236193657) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.158535003662109375) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2136950045824050903) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.05388000234961509705) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1333349943161010742) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.7177399992942810059) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.8312399983406066895) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.9135400056838989258) ) ) {
                result[0] += 0.05;
                result[1] += 0.95;
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
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.03839499969035387039) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.4981250166893005371) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.0395349990576505661) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.01501999981701374054) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.1360049992799758911) ) ) {
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1224500015377998352) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.5500349998474121094) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.9509800076484680176) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.05439999920781701803) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.05388000607490539551) ) ) {
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
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7107249796390533447) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.07707499712705612183) ) ) {
                result[0] += 0.09090909090909091;
                result[1] += 0.9090909090909091;
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
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.9118300080299377441) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.9756500124931335449) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7483049929141998291) ) ) {
                result[0] += 0.013605442176870748;
                result[1] += 0.9863945578231292;
              } else {
                result[0] += 0.5;
                result[1] += 0.5;
              }
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.8562650084495544434) ) ) {
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
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.8744949996471405029) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9352599978446960449) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.02869999967515468597) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6363649964332580566) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.6120550036430358887) ) ) {
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
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.06627999991178512573) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7521849870681762695) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4395599961280822754) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.6904799938201904297) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9469150006771087646) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.1235499978065490723) ) ) {
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.0761800035834312439) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.7993249893188476562) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.8048500120639801025) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7313249707221984863) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.04212500154972076416) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.4702650010585784912) ) ) {
                result[0] += 0.20454545454545456;
                result[1] += 0.7954545454545454;
              } else {
                result[0] += 0.011363636363636364;
                result[1] += 0.9886363636363636;
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
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02312999917194247246) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9814800024032592773) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.5835700035095214844) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5370100140571594238) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.3855200111865997314) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.5157950073480606079) ) ) {
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1408099979162216187) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.6318700015544891357) ) ) {
                result[0] += 0.018518518518518517;
                result[1] += 0.9814814814814815;
              } else {
                result[0] += 0.16666666666666666;
                result[1] += 0.8333333333333334;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.3966249823570251465) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.04028999991714954376) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.260839998722076416) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.03277999907732009888) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.980390012264251709) ) ) {
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
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.8071799874305725098) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.8024500012397766113) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8972199857234954834) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.420144990086555481) ) ) {
                result[0] += 0.2;
                result[1] += 0.8;
              } else {
                result[0] += 0.024390243902439025;
                result[1] += 0.975609756097561;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.9756099879741668701) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0) ) ) {
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
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2102850005030632019) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3197949975728988647) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-2.999999924213625491e-05) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.004330000025220215321) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.06221000105142593384) ) ) {
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
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.1997449994087219238) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.1830599978566169739) ) ) {
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.4918949902057647705) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.05155999958515167236) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.600484997034072876) ) ) {
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
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.06770999915897846222) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.6815200150012969971) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.6131599843502044678) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.333334997296333313) ) ) {
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.135309997946023941) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.1974250003695487976) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.906705021858215332) ) ) {
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.8744949996471405029) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.590910002589225769) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.9318049848079681396) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.7465550005435943604) ) ) {
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.0002350000049773370847) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.07526000216603279114) ) ) {
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
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.7052400112152099609) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03320500021800398827) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9105649888515472412) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.8770299851894378662) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.9684099853038787842) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1071449965238571167) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.043209876543209874;
                result[1] += 0.9567901234567902;
              }
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.3363649994134902954) ) ) {
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
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.6561149954795837402) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4408150017261505127) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.8656899929046630859) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.03158500045537948608) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.3450850099325180054) ) ) {
                result[0] += 0.2;
                result[1] += 0.8;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.638209998607635498) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.9118300080299377441) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.1909500062465667725) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.06666666666666667;
                result[1] += 0.9333333333333333;
              }
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
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8762150108814239502) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.5364699959754943848) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.5797100067138671875) ) ) {
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
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.001109999953769147396) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.6445949971675872803) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.06134499981999397278) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5086549995467066765) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.03689999878406524658) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.3146849870681762695) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.03643500059843063354) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2318000048398971558) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.1256599985063076019) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1700599938631057739) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4713749997317790985) ) ) {
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
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.6481550037860870361) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.9481050074100494385) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.9684099853038787842) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.5774149894714355469) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8736650049686431885) ) ) {
                result[0] += 0.09574468085106383;
                result[1] += 0.9042553191489362;
              } else {
                result[0] += 0.75;
                result[1] += 0.25;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2446350008249282837) ) ) {
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
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.4117949903011322021) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.1598850004374980927) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.922890007495880127) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.7232950031757354736) ) ) {
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
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1205449998378753662) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.3592350035905838013) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.315634995698928833) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.07955000363290309906) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5314100086688995361) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.6666666666666666;
                result[1] += 0.3333333333333333;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.3860850110650062561) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.6771349906921386719) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.6666666666666666;
                result[1] += 0.3333333333333333;
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.1326549947261810303) ) ) {
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
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.5698350071907043457) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.5018649846315383911) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.07272499799728393555) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.0412349998950958252) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3685549944639205933) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.6753300130367279053) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.8915799856185913086) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.5526149868965148926) ) ) {
                result[0] += 0.07692307692307693;
                result[1] += 0.9230769230769231;
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.04651999939233064651) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02312999917194247246) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7472899854183197021) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.9741150140762329102) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.9509800076484680176) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.420144990086555481) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.1837400048971176147) ) ) {
                result[0] += 0.9;
                result[1] += 0.1;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.7452850043773651123) ) ) {
                result[0] += 0.5;
                result[1] += 0.5;
              } else {
                result[0] += 0.03355704697986577;
                result[1] += 0.9664429530201343;
              }
            }
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.9534749984741210938) ) ) {
        result[0] += 1;
        result[1] += 0;
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1408099979162216187) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.9573650062084197998) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.06023499928414821625) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.03060500044375658035) ) ) {
                result[0] += 0.020833333333333332;
                result[1] += 0.9791666666666666;
              } else {
                result[0] += 0.30434782608695654;
                result[1] += 0.6956521739130435;
              }
            } else {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.9079699814319610596) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.09523809523809523;
                result[1] += 0.9047619047619048;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1098350025713443756) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.5814400017261505127) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.3748700134456157684) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9944899976253509521) ) ) {
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.2707850076258182526) ) ) {
          result[0] += 1;
          result[1] += 0;
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
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.5918599963188171387) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.0004499999922700226307) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1684800013899803162) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4420949965715408325) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1688899993896484375) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.0701699983183061704) ) ) {
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.4572750180959701538) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1574000045657157898) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.5552600175142288208) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.5992849767208099365) ) ) {
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
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.119159996509552002) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.645834997296333313) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8801849782466888428) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.6296100020408630371) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.1841150000691413879) ) ) {
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
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.9508799910545349121) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.690455019474029541) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.7105650007724761963) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.1742250025272369385) ) ) {
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
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.4771399945020675659) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7087499946355819702) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.5884049981832504272) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.149645000696182251) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6698200106620788574) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.3805600106716156006) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.786119997501373291) ) ) {
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
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.8071799874305725098) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.8807350099086761475) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7057150006294250488) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.1838850006461143494) ) ) {
                result[0] += 0.18518518518518517;
                result[1] += 0.8148148148148148;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.7072850018739700317) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.5) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.08878999948501586914) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.4920650124549865723) ) ) {
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
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.001139999949373304844) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.2279900014400482178) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.0723199993371963501) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2177399992942810059) ) ) {
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.8071799874305725098) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.8915799856185913086) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.05059999227523803711) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.388675004243850708) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.1329200007021427155) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.6818200051784515381) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0.6666666666666666;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.8592199981212615967) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1593749970197677612) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.457234993577003479) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7498099952936172485) ) ) {
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
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.9508799910545349121) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.7576749920845031738) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2897399961948394775) ) ) {
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
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.2647300064563751221) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.7449049949645996094) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7058800011873245239) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9068599939346313477) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.5890849977731704712) ) ) {
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
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1184299997985363007) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.3044000118970870972) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2011200040578842163) ) ) {
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.802294999361038208) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.9118300080299377441) ) ) {
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.938935011625289917) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7555849850177764893) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.2744550108909606934) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.223789997398853302) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6880050003528594971) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.03571428571428571;
                result[1] += 0.9642857142857143;
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
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2200950011610984802) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.07792000100016593933) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1815550029277801514) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.9626800119876861572) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.00370500003919005394) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1904799938201904297) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.05172500014305114746) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.4196250010281801224) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.4999099999986356124) ) ) {
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.8422949910163879395) ) ) {
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
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.7261500060558319092) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.4501650035381317139) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1333349943161010742) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7558549940586090088) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.5741700083017349243) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.5281199812889099121) ) ) {
                result[0] += 0.06451612903225806;
                result[1] += 0.9354838709677419;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.8436450064182281494) ) ) {
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
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.02649499941617250443) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-2.999999924213625491e-05) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-5.999999848427250981e-05) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4993450045585632324) ) ) {
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
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.4089249968528747559) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.3251200020313262939) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.139164995402097702) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.9108049869537353516) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6605649888515472412) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.445209994912147522) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7313249707221984863) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.05189999938011169434) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.9481050074100494385) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.02097902097902098;
                result[1] += 0.9790209790209791;
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.8795999884605407715) ) ) {
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
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02312999917194247246) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.4157600104808807373) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.9443449974060058594) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1860899999737739563) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.003259999677538871765) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.1070900000631809235) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.8786999881267547607) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.63190498948097229) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.14285714285714285;
                result[1] += 0.8571428571428571;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4231700003147125244) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.4601150006055831909) ) ) {
                result[0] += 0.2;
                result[1] += 0.8;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9280749857425689697) ) ) {
                result[0] += 0.008;
                result[1] += 0.992;
              } else {
                result[0] += 0.5;
                result[1] += 0.5;
              }
            }
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.411370009183883667) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4454549998044967651) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1227300018072128296) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.3044000118970870972) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.1760099977254867554) ) ) {
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
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.1729150004684925079) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.09523999691009521484) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.1798600032925605774) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.05172500014305114746) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.09586999726889189333) ) ) {
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
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.4601150006055831909) ) ) {
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
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8989500105381011963) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03030500002205371857) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05703499820083379745) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.6742399930953979492) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8031700253486633301) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.1002099998295307159) ) ) {
                result[0] += 0.21052631578947367;
                result[1] += 0.7894736842105263;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.3856500089168548584) ) ) {
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
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.6120550036430358887) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.6030699983239173889) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.9285700023174285889) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.5277900006622076035) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.7902100086212158203) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1097000017762184143) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.2698799865320324898) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7554650008678436279) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6698200106620788574) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.09166499972343444824) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.125) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.07520499825477600098) ) ) {
                result[0] += 0.047619047619047616;
                result[1] += 0.9523809523809523;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4409199953079223633) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.1463249996304512024) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.08108108108108109;
                result[1] += 0.918918918918919;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9940800070762634277) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.9990999996662139893) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.1047650016844272614) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.1364150047302246094) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.08971000276505947113) ) ) {
                result[0] += 0.02702702702702703;
                result[1] += 0.972972972972973;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1328750047832727432) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.09514500200748443604) ) ) {
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
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.8890099823474884033) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.1787250041961669922) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.4591900110244750977) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.7756849825382232666) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.4515300095081329346) ) ) {
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
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.9060499966144561768) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1795299937948584557) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9941000044345855713) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9105649888515472412) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.1449500024318695068) ) ) {
                result[0] += 0.23076923076923078;
                result[1] += 0.7692307692307693;
              } else {
                result[0] += 0.02040816326530612;
                result[1] += 0.9795918367346939;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.7295950055122375488) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6000000014901161194) ) ) {
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
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7955000102519989014) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.6618850231170654297) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5370100140571594238) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.4395799934864044189) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03030500002205371857) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8646399974822998047) ) ) {
                result[0] += 0.029585798816568046;
                result[1] += 0.9704142011834319;
              } else {
                result[0] += 0.4;
                result[1] += 0.6;
              }
            }
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.8299200236797332764) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9144049882888793945) ) ) {
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
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3025000095367431641) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.06732999905943870544) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.2125600054860115051) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.0003900000010617077351) ) ) {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-0.375) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.9357950091361999512) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.01515500247478485107) ) ) {
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
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.0825200006365776062) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.4117750022560358047) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.8021250069141387939) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9027200043201446533) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.06134499981999397278) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.0184599999338388443) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5176050066947937012) ) ) {
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
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9098950028419494629) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.4804249852895736694) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.7576749920845031738) ) ) {
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
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5176050066947937012) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7028900086879730225) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1659950017929077148) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.4453400075435638428) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.7531400024890899658) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.6937450170516967773) ) ) {
                result[0] += 0.8928571428571429;
                result[1] += 0.10714285714285714;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.9060499966144561768) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.3928650021553039551) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.6006200015544891357) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1414050012826919556) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.4355349987745285034) ) ) {
                result[0] += 0.1111111111111111;
                result[1] += 0.8888888888888888;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.4650950133800506592) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.06666666666666667;
                result[1] += 0.9333333333333333;
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2011200040578842163) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.4900250136852264404) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.01923000067472457886) ) ) {
          result[0] += 0;
          result[1] += 1;
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.07075499743223190308) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.8611800074577331543) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.8788850009441375732) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8219450116157531738) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.786119997501373291) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1405950039625167847) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.9990999996662139893) ) ) {
                result[0] += 0.008620689655172414;
                result[1] += 0.9913793103448276;
              } else {
                result[0] += 0.15384615384615385;
                result[1] += 0.8461538461538461;
              }
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7312500178813934326) ) ) {
                result[0] += 0.4;
                result[1] += 0.6;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.05305999517440795898) ) ) {
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
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3992500007152557373) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4220199882984161377) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.0131199955940246582) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.6547800004482269287) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.9108049869537353516) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5370100140571594238) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.1084500029683113098) ) ) {
                result[0] += 0.23809523809523808;
                result[1] += 0.7619047619047619;
              } else {
                result[0] += 0.007874015748031496;
                result[1] += 0.9921259842519685;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.541280016303062439) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.4971749931573867798) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.4962150007486343384) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5176050066947937012) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.5505199991166591644) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
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
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1351950019598007202) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.07526999898254871368) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.9060499966144561768) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.02862500026822090149) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.8988299965858459473) ) ) {
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
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.4659350067377090454) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.315634995698928833) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.4022699892520904541) ) ) {
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
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.5938249975442886353) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5545850098133087158) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.9772599935531616211) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.9830049872398376465) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0009699999936856329441) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.3972199857234954834) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.06862500309944152832) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8989500105381011963) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03030500002205371857) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.1469650045037269592) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.1837500035762786865) ) ) {
                result[0] += 0.07692307692307693;
                result[1] += 0.9230769230769231;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1995999962091445923) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.08333333333333333;
                result[1] += 0.9166666666666666;
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
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6642700135707855225) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.0127499997615814209) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.420144990086555481) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.1271250024437904358) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.6721450090408325195) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.04298000037670135498) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.03904999978840351105) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.14285714285714285;
                result[1] += 0.8571428571428571;
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
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9387849867343902588) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.3066050074994564056) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1114000007510185242) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.1000000014901161194) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5364350005984306335) ) ) {
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.9655449986457824707) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.01111999992281198502) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5139850080013275146) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.0271550007164478302) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.356320016086101532) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.2825650125741958618) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.01305999979376792908) ) ) {
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
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.8314950168132781982) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.09752500290051102638) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.03930997848510742188) ) ) {
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.0761800035834312439) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.149624999612569809) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.9815050065517425537) ) ) {
                result[0] += 0.04411764705882353;
                result[1] += 0.9558823529411765;
              } else {
                result[0] += 1;
                result[1] += 0;
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
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2245049998164176941) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2319900020956993103) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3585000038146972656) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.09934499859809875488) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.0271550007164478302) ) ) {
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
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.03825000301003456116) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.007519999751821160316) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.4790100008249282837) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9550499916076660156) ) ) {
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.02067001163959503174) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9980050027370452881) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.5071649849414825439) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.5281199812889099121) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.6306650042533874512) ) ) {
                result[0] += 0.2727272727272727;
                result[1] += 0.7272727272727273;
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.8182950019836425781) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.7580150067806243896) ) ) {
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
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5324800163507461548) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.1532750055193901062) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2179500013589859009) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.9017049968242645264) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.166665002703666687) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-5.999999848427250981e-05) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5701449811458587646) ) ) {
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.938935011625289917) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5688149929046630859) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.5514950156211853027) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5056699961423873901) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.2264149934053421021) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.5318599939346313477) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.007936507936507936;
                result[1] += 0.9920634920634921;
              }
            }
          } else {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1025700047612190247) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.4901949996128678322) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.4287300035357475281) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03320500021800398827) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5322400182485580444) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.6818200051784515381) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.7688849866390228271) ) ) {
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
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.00913000013679265976) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1369700012728571892) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.4690349996089935303) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.4998099952936172485) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.8071799874305725098) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6642700135707855225) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.9684099853038787842) ) ) {
                result[0] += 0.04216867469879518;
                result[1] += 0.9578313253012049;
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
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.0002350000049773370847) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7155349999666213989) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.420354992151260376) ) ) {
                result[0] += 0.5;
                result[1] += 0.5;
              } else {
                result[0] += 0.04316546762589928;
                result[1] += 0.9568345323741008;
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
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.8599999845027923584) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.8571450114250183105) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.7949300110340118408) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.4987249970436096191) ) ) {
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
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.21091499924659729) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1826099976897239685) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.297214999794960022) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.001494999974966049194) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.03274500014958903193) ) ) {
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
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.04615999944508075714) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1818200051784515381) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.9457899928092956543) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.7238100171089172363) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.269350007176399231) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2097750008106231689) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.6042300164699554443) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.7452850043773651123) ) ) {
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
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9072249829769134521) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4832099974155426025) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5415849983692169189) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.1171700023114681244) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.08246000111103057861) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.0446999967098236084) ) ) {
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
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4604849964380264282) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
                result[0] += 0.1111111111111111;
                result[1] += 0.8888888888888888;
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
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7313249707221984863) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.08131499588489532471) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.5506150126457214355) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.8154399991035461426) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.5;
                result[1] += 0.5;
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
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.05054000020027160645) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.495800018310546875) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.8225800096988677979) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.2888950109481811523) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.8409099876880645752) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.9186049997806549072) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.4360750019550323486) ) ) {
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4454549998044967651) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1577399969100952148) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4096949994564056396) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.8342550098896026611) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.3142700046300888062) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.1484850049018859863) ) ) {
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
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.9509800076484680176) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.9990999996662139893) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.5824699997901916504) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.3372099995613098145) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.280820012092590332) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.05660377358490566;
                result[1] += 0.9433962264150944;
              }
            }
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.03502999991178512573) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1103100031614303589) ) ) {
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
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.5252650082111358643) ) ) {
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
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.9508799910545349121) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.8264750242233276367) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1348499953746795654) ) ) {
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.02447500079870223999) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.9987249970436096191) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.5068649998866021633) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.09253999963402748108) ) ) {
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
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.7412600070238113403) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2248550057411193848) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.03624500147998332977) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.4234149903059005737) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.3155950009822845459) ) ) {
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
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1071449965238571167) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.5656450018286705017) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8972199857234954834) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7297849953174591064) ) ) {
                result[0] += 0.18421052631578946;
                result[1] += 0.8157894736842105;
              } else {
                result[0] += 0.007633587786259542;
                result[1] += 0.9923664122137404;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.5825800001621246338) ) ) {
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
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4965550005435943604) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.4931400120258331299) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.0004250000056345015764) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6698200106620788574) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1175950020551681519) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.1066399998962879181) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.6507650017738342285) ) ) {
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
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.7797049880027770996) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1071449965238571167) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9352599978446960449) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8989500105381011963) ) ) {
                result[0] += 0.04294478527607362;
                result[1] += 0.9570552147239264;
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
  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8972199857234954834) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5322400182485580444) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.7424249947071075439) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.2876749932765960693) ) ) {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.2303299978375434875) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.8766050040721893311) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.9741150140762329102) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.04597701149425287;
                result[1] += 0.9540229885057471;
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
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1659950017929077148) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.4575300067663192749) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.3148950040340423584) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9616200029850006104) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.4664949923753738403) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.5002300000051036477) ) ) {
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
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.8484800159931182861) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.07344999909400939941) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5299149900674819946) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0009699999936856329441) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.4771399945020675659) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6880050003528594971) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.8032550215721130371) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2229100018739700317) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.016666666666666666;
                result[1] += 0.9833333333333333;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.60967998206615448) ) ) {
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.3273700065910816193) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.4927150160074234009) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.6348399966955184937) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1097000017762184143) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.00887500029057264328) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.02219000086188316345) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1700599938631057739) ) ) {
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
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7483049929141998291) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5370100140571594238) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.0777949988842010498) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8041699826717376709) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.1555099934339523315) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3360549956560134888) ) ) {
                result[0] += 0.5;
                result[1] += 0.5;
              } else {
                result[0] += 0.043478260869565216;
                result[1] += 0.9565217391304348;
              }
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
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.933945000171661377) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.375) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2522249966859817505) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1304000020027160645) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.1082250028848648071) ) ) {
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
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.1143800020217895508) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.3047449961304664612) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9366349875926971436) ) ) {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.8340899944305419922) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.47552499920129776) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.5541699826717376709) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.3702699989080429077) ) ) {
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6275400072336196899) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1071449965238571167) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.9684099853038787842) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.124109998345375061) ) ) {
                result[0] += 0.21428571428571427;
                result[1] += 0.7857142857142857;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.06341499090194702148) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.9206700026988983154) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03749000001698732376) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
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
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8646399974822998047) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.205454997718334198) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.04244999960064888) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.4050999879837036133) ) ) {
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
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8989500105381011963) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.9108049869537353516) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.297214999794960022) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.03922999999485909939) ) ) {
                result[0] += 0.5;
                result[1] += 0.5;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7903949916362762451) ) ) {
                result[0] += 0.029239766081871343;
                result[1] += 0.9707602339181286;
              } else {
                result[0] += 0.3333333333333333;
                result[1] += 0.6666666666666666;
              }
            }
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.3478849977254867554) ) ) {
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
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1395750008523464203) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.434575006365776062) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.146785002201795578) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.0761800035834312439) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.0723199993371963501) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.01494999976421240717) ) ) {
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.8770299851894378662) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.6011549830436706543) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.09301500208675861359) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.857219994068145752) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.4580750018358230591) ) ) {
                result[0] += 0.2;
                result[1] += 0.8;
              } else {
                result[0] += 0.011764705882352941;
                result[1] += 0.9882352941176471;
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
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9098950028419494629) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.6328549981117248535) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.3536999970674514771) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.3571449965238571167) ) ) {
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
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.00639500003308057785) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2481500059366226196) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.2155900001525878906) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.8071799874305725098) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.1548199988901615143) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.1997050046920776367) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.023809523809523808;
                result[1] += 0.9761904761904762;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.9195849895477294922) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.385419994592666626) ) ) {
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
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1908349990844726562) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5825349986553192139) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1071449965238571167) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03030500002205371857) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.611409991979598999) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.435639992356300354) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.3644900023937225342) ) ) {
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.5081850141286849976) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.590910002589225769) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.6907500028610229492) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7087499946355819702) ) ) {
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
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9127549827098846436) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.9655449986457824707) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1190350018441677094) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1539949998259544373) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.04680000152438879013) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.008575000334531068802) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.01375000178813934326) ) ) {
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
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.02087000012397766113) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8791849911212921143) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1413400024175643921) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.232890009880065918) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.6988749802112579346) ) ) {
                result[0] += 0.008064516129032258;
                result[1] += 0.9919354838709677;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.6042300164699554443) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.2343950085341930389) ) ) {
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
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9941000044345855713) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.8024500012397766113) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.188470005989074707) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.4159100055694580078) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.001494999974966049194) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3213300108909606934) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.25;
                result[1] += 0.75;
              }
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1416449993848800659) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.06127500534057617188) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.420354992151260376) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.4634150005877017975) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.1640449985861778259) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.174074999988079071) ) ) {
                result[0] += 0.02857142857142857;
                result[1] += 0.9714285714285714;
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
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.06750500015914440155) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7535249888896942139) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7272749990224838257) ) ) {
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
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.188470005989074707) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1860899999737739563) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.3221849948167800903) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.07523000054061412811) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.0773200024850666523) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1206900030374526978) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.5517250001430511475) ) ) {
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
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.9338650107383728027) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9848699867725372314) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.1358449980616569519) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.972685009241104126) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.0299750007688999176) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.6888400018215179443) ) ) {
                result[0] += 0.14285714285714285;
                result[1] += 0.8571428571428571;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.2108199894428253174) ) ) {
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
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9098950028419494629) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7272749990224838257) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.6328549981117248535) ) ) {
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
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.06735000014305114746) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-5.999999848427250981e-05) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.01200500037521123886) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.5285349991172552109) ) ) {
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.8611800074577331543) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1437549963593482971) ) ) {
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2179500013589859009) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1860899999737739563) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.1991150043904781342) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.220315001904964447) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.06626000255346298218) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.08858500048518180847) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.02577500039478763938) ) ) {
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
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8312600255012512207) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.420354992151260376) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2792750000953674316) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.5942699983716011047) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.7625100016593933105) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.6243249997496604919) ) ) {
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.09732999652624130249) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6698200106620788574) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.1468700021505355835) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9469150006771087646) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2175149992108345032) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.2660949975252151489) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
                result[0] += 0.6;
                result[1] += 0.4;
              } else {
                result[0] += 0.02040816326530612;
                result[1] += 0.9795918367346939;
              }
            }
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.2008050000295042992) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.270830005407333374) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.7465550005435943604) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9940800070762634277) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2193350046873092651) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.2040100060403347015) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.7006449997425079346) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.07707499712705612183) ) ) {
                result[0] += 0.058823529411764705;
                result[1] += 0.9411764705882353;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.3405099958181381226) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9098950028419494629) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6000000014901161194) ) ) {
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
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2828499972820281982) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1332900002598762512) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.2047899961471557617) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.455624997615814209) ) ) {
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
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.4453400075435638428) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.002695000031962990761) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.1359649962978437543) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.3967199996113777161) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1333349943161010742) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7832599878311157227) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8356750011444091797) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.6495950222015380859) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3388950079679489136) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.6332649886608123779) ) ) {
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
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9397349953651428223) ) ) {
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
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1390250027179718018) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4395599961280822754) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.5118549913167953491) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.8989000022411346436) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8853600025177001953) ) ) {
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
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.252285003662109375) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1071449965238571167) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.9763750135898590088) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.7166950106620788574) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7472899854183197021) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.7696700096130371094) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7558549940586090088) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.03007518796992481;
                result[1] += 0.9699248120300752;
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.2020400017499923706) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9027050137519836426) ) ) {
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
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0001250000059371814132) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.03053499944508075714) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.3797900080680847168) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2011200040578842163) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.3568699955940246582) ) ) {
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.89342498779296875) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1234450042247772217) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1900449953973293304) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.03042500047013163567) ) ) {
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7950850129127502441) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.7684899866580963135) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.0536549985408782959) ) ) {
                result[0] += 0.4782608695652174;
                result[1] += 0.5217391304347826;
              } else {
                result[0] += 0.06521739130434782;
                result[1] += 0.9347826086956522;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.1659100018441677094) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.938935011625289917) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4330900013446807861) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.8957050144672393799) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.5005600000149570405) ) ) {
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
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.005659999791532754898) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.275150001049041748) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.1712299957871437073) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.07175499945878982544) ) ) {
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.3756800144910812378) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.3881599977612495422) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.4580750018358230591) ) ) {
                result[0] += 0.2;
                result[1] += 0.8;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.2419250011444091797) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9135449826717376709) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.4852699935436248779) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.9108049869537353516) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2175149992108345032) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5587199926376342773) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.4870300143957138062) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.2119299955666065216) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.5011850148439407349) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.5768850147724151611) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.1554099991917610168) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.0410958904109589;
                result[1] += 0.958904109589041;
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.9974350035190582275) ) ) {
                result[0] += 0.75;
                result[1] += 0.25;
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
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.4117650091648101807) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3778600096702575684) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.007015000097453594208) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.008534999564290046692) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-9.000000136438757181e-05) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.05172500014305114746) ) ) {
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
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.05435500107705593109) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.8364450037479400635) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8809649944305419922) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.1295350007712841034) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1349250013008713722) ) ) {
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
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.03940000012516975403) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.08268000185489654541) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2224249951541423798) ) ) {
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
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9366349875926971436) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.02302999980747699738) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.3991500139236450195) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6698200106620788574) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.9481050074100494385) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.9981200098991394043) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.3576750010251998901) ) ) {
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
