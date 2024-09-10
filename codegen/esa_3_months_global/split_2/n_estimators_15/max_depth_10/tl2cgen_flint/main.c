
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
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e900e68))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f46693e))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6ad143))) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed1c0bb))) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea06598))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e872c7a))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                      result[0] += 0.9066666666666666;
                      result[1] += 0.09333333333333334;
                    } else {
                      result[0] += 0.03278688524590164;
                      result[1] += 0.9672131147540983;
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
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0d690c))) ) ) {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e96d05a))) ) ) {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9db3e0))) ) ) {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e642d8c))) ) ) {
                      result[0] += 0.5;
                      result[1] += 0.5;
                    } else {
                      result[0] += 0.9983710038688658;
                      result[1] += 0.0016289961311341885;
                    }
                  } else {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed16bed))) ) ) {
                      result[0] += 0.9931972789115646;
                      result[1] += 0.006802721088435374;
                    } else {
                      result[0] += 0.8783625730994152;
                      result[1] += 0.1216374269005848;
                    }
                  }
                } else {
                  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea861ee))) ) ) {
                      result[0] += 0.9830508474576272;
                      result[1] += 0.01694915254237288;
                    } else {
                      result[0] += 0.7897435897435897;
                      result[1] += 0.21025641025641026;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e08b800))) ) ) {
                      result[0] += 0.9311163895486936;
                      result[1] += 0.0688836104513064;
                    } else {
                      result[0] += 0.9971550497866287;
                      result[1] += 0.002844950213371266;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eaec55a))) ) ) {
                  if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f37e825))) ) ) {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6e36d0))) ) ) {
                      result[0] += 0.7713414634146342;
                      result[1] += 0.22865853658536586;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                      result[0] += 0.019417475728155338;
                      result[1] += 0.9805825242718447;
                    } else {
                      result[0] += 0.7690058479532164;
                      result[1] += 0.2309941520467836;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
                  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0fc970))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.625;
                      result[1] += 0.375;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                      result[0] += 0.576978417266187;
                      result[1] += 0.42302158273381296;
                    } else {
                      result[0] += 0.19474835886214442;
                      result[1] += 0.8052516411378556;
                    }
                  }
                } else {
                  if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3af36342))) ) ) {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.3162217659137577;
                      result[1] += 0.6837782340862423;
                    }
                  } else {
                    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f50d2de))) ) ) {
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
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
        if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f38241d))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1d92e6))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e19b64f))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aec176e))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e4c4f))) ) ) {
            if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3de10940))) ) ) {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e22fb72))) ) ) {
                if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f2f8954))) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d52000))) ) ) {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb153bb))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9998916683969631;
                      result[1] += 0.00010833160303689593;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              } else {
                if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d258d46))) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ead4206))) ) ) {
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
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e99b6c0))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f3bc354))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
            if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e92d24c))) ) ) {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9cee3c))) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7b1a07))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e939ec0))) ) ) {
                    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6437bc))) ) ) {
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
                }
              } else {
                if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f49b983))) ) ) {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
                      result[0] += 0.8524590163934426;
                      result[1] += 0.14754098360655737;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f37e825))) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ebdf190))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.1935483870967742;
                      result[1] += 0.8064516129032258;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
                if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9eccae))) ) ) {
                  if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f47b2e6))) ) ) {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec0bd0c))) ) ) {
                      result[0] += 0.8888888888888888;
                      result[1] += 0.1111111111111111;
                    } else {
                      result[0] += 0.4246031746031746;
                      result[1] += 0.5753968253968254;
                    }
                  } else {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7421ac))) ) ) {
                      result[0] += 0.14;
                      result[1] += 0.86;
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
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec2bc12))) ) ) {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                    if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f4282aa))) ) ) {
                      result[0] += 0.8125;
                      result[1] += 0.1875;
                    } else {
                      result[0] += 0.9947159841479525;
                      result[1] += 0.005284015852047556;
                    }
                  } else {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.7412935323383084;
                      result[1] += 0.25870646766169153;
                    }
                  }
                } else {
                  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e072ceb))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9532967032967034;
                      result[1] += 0.046703296703296704;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.8668730650154799;
                      result[1] += 0.13312693498452013;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e9e003a))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6347b6))) ) ) {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e95378d))) ) ) {
                    if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f4a5f76))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[68].missing != -1) || ((*( ((int*)(data)) + 68 ))<=((int)(0x3f4eb97e))) ) ) {
                      result[0] += 0.75;
                      result[1] += 0.25;
                    } else {
                      result[0] += 0.4111111111111111;
                      result[1] += 0.5888888888888889;
                    }
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e15d9b9))) ) ) {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec38888))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9565217391304348;
                      result[1] += 0.043478260869565216;
                    }
                  } else {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4c3fb8))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1072de))) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7038ee))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[64].missing != -1) || ((*( ((int*)(data)) + 64 ))<=((int)(0x3f35a2c5))) ) ) {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.045576407506702415;
                      result[1] += 0.9544235924932976;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
                      result[0] += 0.5555555555555556;
                      result[1] += 0.4444444444444444;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
                  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                      result[0] += 0.9466089466089466;
                      result[1] += 0.05339105339105339;
                    } else {
                      result[0] += 0.497907949790795;
                      result[1] += 0.502092050209205;
                    }
                  } else {
                    if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                      result[0] += 0.8695652173913043;
                      result[1] += 0.13043478260869565;
                    } else {
                      result[0] += 0.5345572354211663;
                      result[1] += 0.4654427645788337;
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
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3de10940))) ) ) {
              if ( ( !(data[75].missing != -1) || ((*( ((int*)(data)) + 75 ))<=((int)(0x38850f80))) ) ) {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb5c326))) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8603ba))) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[68].missing != -1) || ((*( ((int*)(data)) + 68 ))<=((int)(0x3f4e7db2))) ) ) {
                      result[0] += 0.9980582524271845;
                      result[1] += 0.001941747572815534;
                    } else {
                      result[0] += 0.9998824350061526;
                      result[1] += 0.00011756499384743199;
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
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edc51c2))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea59655))) ) ) {
        if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e657868))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45783c))) ) ) {
            if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f2af1fa))) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3eceaafa))) ) ) {
                if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f373418))) ) ) {
                  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3da6cd8b))) ) ) {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e17b3df))) ) ) {
                      result[0] += 0.9919354838709677;
                      result[1] += 0.008064516129032258;
                    } else {
                      result[0] += 0.3333333333333333;
                      result[1] += 0.6666666666666666;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e138919))) ) ) {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ecfe0a8))) ) ) {
                      result[0] += 0.9983857949959645;
                      result[1] += 0.0016142050040355124;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f38ba1c))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9354838709677419;
                      result[1] += 0.06451612903225806;
                    }
                  }
                }
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea6c904))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                  if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f38241d))) ) ) {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb53f1a))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7038ee))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.2;
                      result[1] += 0.8;
                    }
                  }
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e08b800))) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e7b0a07))) ) ) {
                      result[0] += 0.8888888888888888;
                      result[1] += 0.1111111111111111;
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
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
        if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee2f0e5))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f373418))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e822724))) ) ) {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e6c2591))) ) ) {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3ebf60c8))) ) ) {
                  if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3fc622))) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e6a8ca7))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6ad142))) ) ) {
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
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e96d05a))) ) ) {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                  if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eaac72f))) ) ) {
                      result[0] += 0.2767857142857143;
                      result[1] += 0.7232142857142857;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eb05e44))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e7fac27))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f4474ca))) ) ) {
                      result[0] += 0.6666666666666666;
                      result[1] += 0.3333333333333333;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                }
              } else {
                if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f4fb7fc))) ) ) {
                  if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f46d264))) ) ) {
                    if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f4a89a6))) ) ) {
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
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb2ce54))) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
                if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f49d35c))) ) ) {
                  if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee78222))) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9eccae))) ) ) {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e9603e4))) ) ) {
                      result[0] += 0.7;
                      result[1] += 0.3;
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
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e853e30))) ) ) {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e9205d6))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
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
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e9e003a))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8038d9))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9714989444053483;
                      result[1] += 0.028501055594651655;
                    }
                  } else {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea1320e))) ) ) {
                      result[0] += 0.50418410041841;
                      result[1] += 0.49581589958158995;
                    } else {
                      result[0] += 0.9085239085239085;
                      result[1] += 0.09147609147609148;
                    }
                  }
                }
              } else {
                if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                    if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f50ca02))) ) ) {
                      result[0] += 0.17142857142857143;
                      result[1] += 0.8285714285714286;
                    } else {
                      result[0] += 0.4523809523809524;
                      result[1] += 0.5476190476190477;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.8279569892473119;
                      result[1] += 0.17204301075268819;
                    }
                  }
                } else {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea06598))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                      result[0] += 0.9978260869565218;
                      result[1] += 0.002173913043478261;
                    } else {
                      result[0] += 0.9382716049382716;
                      result[1] += 0.06172839506172839;
                    }
                  } else {
                    if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee79fcd))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9977311401020987;
                      result[1] += 0.0022688598979013048;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3ec0d332))) ) ) {
              if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x36552000))) ) ) {
                if ( ( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d52000))) ) ) {
                  if ( ( !(data[66].missing != -1) || ((*( ((int*)(data)) + 66 ))<=((int)(0x3671a000))) ) ) {
                    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0d690c))) ) ) {
                      result[0] += 0.9994247253063337;
                      result[1] += 0.0005752746936662257;
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
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e9a1985))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3f180c))) ) ) {
      if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae89bf6))) ) ) {
        if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb505da))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4d78d6))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f427ee4))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f47d2be))) ) ) {
            if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f2af1fa))) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f439636))) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e8c08a6))) ) ) {
                  if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f373418))) ) ) {
                    if ( ( !(data[68].missing != -1) || ((*( ((int*)(data)) + 68 ))<=((int)(0x3f4f8a62))) ) ) {
                      result[0] += 0.75;
                      result[1] += 0.25;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7ec682))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e89e0c1))) ) ) {
                      result[0] += 0.9997292418772563;
                      result[1] += 0.0002707581227436823;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e17b3df))) ) ) {
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
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec13604))) ) ) {
              if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0d690c))) ) ) {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7288c2))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea06598))) ) ) {
                      result[0] += 0.9623567921440261;
                      result[1] += 0.03764320785597381;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f497d8a))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e81619a))) ) ) {
                      result[0] += 0.4155844155844156;
                      result[1] += 0.5844155844155844;
                    } else {
                      result[0] += 0.9870967741935484;
                      result[1] += 0.012903225806451613;
                    }
                  } else {
                    if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aef92e5))) ) ) {
                      result[0] += 0.951048951048951;
                      result[1] += 0.04895104895104895;
                    } else {
                      result[0] += 0.9964285714285714;
                      result[1] += 0.0035714285714285713;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e81619a))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e80fed4))) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.014492753623188406;
                      result[1] += 0.9855072463768116;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec1232a))) ) ) {
                      result[0] += 0.9292929292929293;
                      result[1] += 0.0707070707070707;
                    } else {
                      result[0] += 0.4;
                      result[1] += 0.6;
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
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f46693e))) ) ) {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1ccd5a))) ) ) {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.5702479338842975;
                      result[1] += 0.4297520661157025;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.4308717379233759;
                      result[1] += 0.5691282620766241;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6347b6))) ) ) {
                      result[0] += 0.9393511988716502;
                      result[1] += 0.06064880112834979;
                    } else {
                      result[0] += 0.994367417677643;
                      result[1] += 0.005632582322357019;
                    }
                  } else {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1072de))) ) ) {
                      result[0] += 0.7768888888888889;
                      result[1] += 0.22311111111111112;
                    } else {
                      result[0] += 0.36012861736334406;
                      result[1] += 0.639871382636656;
                    }
                  }
                }
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e182b3a))) ) ) {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
                if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed1c0bb))) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.8367346938775511;
                      result[1] += 0.16326530612244897;
                    }
                  }
                }
              } else {
                if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aef3e00))) ) ) {
                  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed1091c))) ) ) {
                    if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f473f6a))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e83b31a))) ) ) {
                      result[0] += 0.7272727272727273;
                      result[1] += 0.2727272727272727;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                      result[0] += 0.9410029498525073;
                      result[1] += 0.058997050147492625;
                    } else {
                      result[0] += 0.47257383966244726;
                      result[1] += 0.5274261603375527;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1da382))) ) ) {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
                    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x36552000))) ) ) {
                      result[0] += 0.9866666666666667;
                      result[1] += 0.013333333333333334;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f5084ea))) ) ) {
                      result[0] += 0.9998779892630552;
                      result[1] += 0.00012201073694485115;
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
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f43fe1a))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46e1c3))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f634792))) ) ) {
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
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9603e4))) ) ) {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e9d33c6))) ) ) {
                      result[0] += 0.9030732860520094;
                      result[1] += 0.09692671394799054;
                    } else {
                      result[0] += 0.798233695652174;
                      result[1] += 0.20176630434782608;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7350da))) ) ) {
                      result[0] += 0.9727598566308244;
                      result[1] += 0.02724014336917563;
                    } else {
                      result[0] += 0.6305084745762712;
                      result[1] += 0.3694915254237288;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6b2045))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e822724))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e072ceb))) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                } else {
                  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
                    if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d8aa9f0))) ) ) {
                      result[0] += 0.961038961038961;
                      result[1] += 0.03896103896103896;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9a9d70))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.2857142857142857;
                      result[1] += 0.7142857142857143;
                    }
                  }
                }
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x36553000))) ) ) {
                if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f2f8954))) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
                    if ( ( !(data[73].missing != -1) || ((*( ((int*)(data)) + 73 ))<=((int)(0x3f794b48))) ) ) {
                      result[0] += 0.9998988707230744;
                      result[1] += 0.00010112927692566998;
                    } else {
                      result[0] += 0.9965753424657534;
                      result[1] += 0.003424657534246575;
                    }
                  } else {
                    if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed1c0bb))) ) ) {
                      result[0] += 0.999449717980465;
                      result[1] += 0.0005502820195350117;
                    } else {
                      result[0] += 0.9858429858429858;
                      result[1] += 0.014157014157014158;
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
  } else {
    if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e900e68))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0b2bea))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
            if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aee3f28))) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e878fb0))) ) ) {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea1320e))) ) ) {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
                      result[0] += 0.9;
                      result[1] += 0.1;
                    } else {
                      result[0] += 0.4;
                      result[1] += 0.6;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.8333333333333334;
                      result[1] += 0.16666666666666666;
                    }
                  }
                }
              } else {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb38b41))) ) ) {
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
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
            if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f5f4b62))) ) ) {
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
        if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd59576))) ) ) {
          if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d7f7215))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eb5f53b))) ) ) {
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
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e932573))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eaaabab))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d53000))) ) ) {
            if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f4e66cb))) ) ) {
              if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f40ba05))) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ebe1f78))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9a022c))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.8666666666666667;
                      result[1] += 0.13333333333333333;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f45dc42))) ) ) {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ebd59f2))) ) ) {
                  if ( ( !(data[68].missing != -1) || ((*( ((int*)(data)) + 68 ))<=((int)(0x3f51c1ba))) ) ) {
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
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e08886f))) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f52bb8a))) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e03417a))) ) ) {
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
        }
      }
    }
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9c676e))) ) ) {
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
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46e1c3))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae34d7e))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed1c0bb))) ) ) {
              if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f2ca900))) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f4fb7fc))) ) ) {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e576228))) ) ) {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e95378d))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.986335403726708;
                      result[1] += 0.013664596273291925;
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
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6cab8b))) ) ) {
                if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6347b6))) ) ) {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6d22c4))) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f4c15fc))) ) ) {
                      result[0] += 0.7594810379241517;
                      result[1] += 0.2405189620758483;
                    } else {
                      result[0] += 0.818500350385424;
                      result[1] += 0.18149964961457604;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7350da))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9436178543461238;
                      result[1] += 0.056382145653876274;
                    }
                  } else {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea6c904))) ) ) {
                      result[0] += 0.34615384615384615;
                      result[1] += 0.6538461538461539;
                    } else {
                      result[0] += 0.8793103448275862;
                      result[1] += 0.1206896551724138;
                    }
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec056d2))) ) ) {
                    if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f36f7fc))) ) ) {
                      result[0] += 0.875;
                      result[1] += 0.125;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea99480))) ) ) {
                      result[0] += 0.9794344473007712;
                      result[1] += 0.02056555269922879;
                    } else {
                      result[0] += 0.9540133779264214;
                      result[1] += 0.04598662207357859;
                    }
                  }
                } else {
                  if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f377010))) ) ) {
                    if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.06086956521739131;
                      result[1] += 0.9391304347826087;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e7fac27))) ) ) {
                      result[0] += 0.8190314358538657;
                      result[1] += 0.18096856414613424;
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
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aec176e))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38853cc0))) ) ) {
            if ( ( !(data[70].missing != -1) || ((*( ((int*)(data)) + 70 ))<=((int)(0x3f6e54ac))) ) ) {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea5fc90))) ) ) {
                if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3f67ea94))) ) ) {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec2bc12))) ) ) {
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
              if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f52bb8a))) ) ) {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea5fc90))) ) ) {
                  if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3aea9952))) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e21705c))) ) ) {
                      result[0] += 0.9977409638554217;
                      result[1] += 0.002259036144578313;
                    } else {
                      result[0] += 0.9719626168224299;
                      result[1] += 0.028037383177570093;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f4f0d78))) ) ) {
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
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
      if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e657868))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f427ee4))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e81619a))) ) ) {
            if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed60d85))) ) ) {
              if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec1232a))) ) ) {
                if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f4ce450))) ) ) {
                  if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f4602ee))) ) ) {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea06598))) ) ) {
                      result[0] += 0.3333333333333333;
                      result[1] += 0.6666666666666666;
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
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec1ef9e))) ) ) {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7038ee))) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea5301a))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb2ee32))) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed547e2))) ) ) {
                      result[0] += 0.1111111111111111;
                      result[1] += 0.8888888888888888;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f373418))) ) ) {
              if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee74630))) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee74630))) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dc55866))) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3eb66772))) ) ) {
                    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f3a3dea))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9948453608247423;
                      result[1] += 0.005154639175257732;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec1ef9e))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e822724))) ) ) {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e072ceb))) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e9e003a))) ) ) {
                      result[0] += 0.7083333333333334;
                      result[1] += 0.2916666666666667;
                    } else {
                      result[0] += 0.9950617283950617;
                      result[1] += 0.0049382716049382715;
                    }
                  }
                } else {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e667e74))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 0.7777777777777778;
                      result[1] += 0.2222222222222222;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f447e02))) ) ) {
                      result[0] += 0.4444444444444444;
                      result[1] += 0.5555555555555556;
                    } else {
                      result[0] += 0.013888888888888888;
                      result[1] += 0.9861111111111112;
                    }
                  }
                }
              } else {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
                  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ecf1b04))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e822724))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.42857142857142855;
                      result[1] += 0.5714285714285714;
                    }
                  } else {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e991248))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.2;
                      result[1] += 0.8;
                    }
                  }
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb859e2))) ) ) {
                    if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f52f5b1))) ) ) {
                      result[0] += 0.0859375;
                      result[1] += 0.9140625;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e5297a6))) ) ) {
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
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e072ceb))) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6d21e3))) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8038d9))) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6293aa))) ) ) {
                      result[0] += 0.4827586206896552;
                      result[1] += 0.5172413793103449;
                    } else {
                      result[0] += 0.9893309222423147;
                      result[1] += 0.010669077757685353;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea92e63))) ) ) {
                    if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f4724bc))) ) ) {
                      result[0] += 0.391304347826087;
                      result[1] += 0.6086956521739131;
                    } else {
                      result[0] += 0.7916666666666666;
                      result[1] += 0.20833333333333334;
                    }
                  } else {
                    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f52a668))) ) ) {
                      result[0] += 0.9868421052631579;
                      result[1] += 0.013157894736842105;
                    } else {
                      result[0] += 0.7142857142857143;
                      result[1] += 0.2857142857142857;
                    }
                  }
                } else {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb97de0))) ) ) {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e675ad4))) ) ) {
                      result[0] += 0.5106382978723404;
                      result[1] += 0.48936170212765956;
                    } else {
                      result[0] += 0.09777777777777778;
                      result[1] += 0.9022222222222223;
                    }
                  } else {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e448796))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9444444444444444;
                      result[1] += 0.05555555555555555;
                    }
                  }
                }
              } else {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e5899ac))) ) ) {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e75a17a))) ) ) {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                      result[0] += 0.375;
                      result[1] += 0.625;
                    } else {
                      result[0] += 0.9074074074074074;
                      result[1] += 0.09259259259259259;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e925fe8))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9863013698630136;
                      result[1] += 0.0136986301369863;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              }
            }
          } else {
            if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7288c2))) ) ) {
                if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8038d9))) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec056d2))) ) ) {
                      result[0] += 0.5;
                      result[1] += 0.5;
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
                if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d8aa9f0))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e81c45f))) ) ) {
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
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f52e2a6))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.15239154616240266;
                      result[1] += 0.8476084538375973;
                    }
                  } else {
                    if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f37ac08))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.926829268292683;
                      result[1] += 0.07317073170731707;
                    }
                  }
                } else {
                  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f63fbc3))) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb5a1ec))) ) ) {
                      result[0] += 0.8518518518518519;
                      result[1] += 0.14814814814814814;
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
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb2ce54))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec5d64a))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e90d462))) ) ) {
              if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3f180c))) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x36552000))) ) ) {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea5fc90))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e09311e))) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38853cc0))) ) ) {
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
      }
    }
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f494192))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1a7bda))) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eb190d6))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
            if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d728d94))) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9cee3c))) ) ) {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                    if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3fc622))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.42857142857142855;
                      result[1] += 0.5714285714285714;
                    }
                  } else {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                      result[0] += 0.7987804878048781;
                      result[1] += 0.20121951219512196;
                    } else {
                      result[0] += 0.9901864573110893;
                      result[1] += 0.009813542688910697;
                    }
                  }
                } else {
                  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed0a64a))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 0.964;
                      result[1] += 0.036;
                    } else {
                      result[0] += 0.65625;
                      result[1] += 0.34375;
                    }
                  } else {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f494192))) ) ) {
                      result[0] += 0.5836947094535994;
                      result[1] += 0.4163052905464007;
                    } else {
                      result[0] += 0.8872832369942196;
                      result[1] += 0.11271676300578035;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec52565))) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3c3c87))) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e81619a))) ) ) {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.835820895522388;
                      result[1] += 0.16417910447761194;
                    }
                  } else {
                    if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f3748c8))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9996292212670875;
                      result[1] += 0.00037077873291246693;
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
      if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae89bf6))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
          if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3eb86eca))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb6df49))) ) ) {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
              if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edb7b9d))) ) ) {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e96d05a))) ) ) {
                  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea06598))) ) ) {
                      result[0] += 0.9477124183006536;
                      result[1] += 0.05228758169934641;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e64f32e))) ) ) {
                      result[0] += 0.3333333333333333;
                      result[1] += 0.6666666666666666;
                    } else {
                      result[0] += 0.9142857142857143;
                      result[1] += 0.08571428571428572;
                    }
                  }
                } else {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6ad143))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.8578680203045685;
                      result[1] += 0.14213197969543148;
                    }
                  }
                }
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e978702))) ) ) {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f504bde))) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                } else {
                  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f51edcc))) ) ) {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea2caf8))) ) ) {
                      result[0] += 0.8205128205128205;
                      result[1] += 0.1794871794871795;
                    } else {
                      result[0] += 0.9441964285714286;
                      result[1] += 0.05580357142857143;
                    }
                  } else {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e94d152))) ) ) {
                      result[0] += 0.8095238095238095;
                      result[1] += 0.19047619047619047;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                }
              } else {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                  if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f4bdfdc))) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9e7982))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.14285714285714285;
                      result[1] += 0.8571428571428571;
                    }
                  }
                } else {
                  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edde2b2))) ) ) {
                    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f630b9a))) ) ) {
                      result[0] += 0.053231939163498096;
                      result[1] += 0.9467680608365019;
                    } else {
                      result[0] += 0.38293216630196936;
                      result[1] += 0.6170678336980306;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3adf7d22))) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e772d70))) ) ) {
                if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f52868c))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec1232a))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9032258064516129;
                      result[1] += 0.0967741935483871;
                    }
                  } else {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed6d328))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f4c4920))) ) ) {
                    if ( ( !(data[49].missing != -1) || ((*( ((int*)(data)) + 49 ))<=((int)(0x3f400d42))) ) ) {
                      result[0] += 0.8;
                      result[1] += 0.2;
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
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0dcf64))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1e5870))) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f46693e))) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d4333ee))) ) ) {
              if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f5084ea))) ) ) {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e09311e))) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[66].missing != -1) || ((*( ((int*)(data)) + 66 ))<=((int)(0x36554000))) ) ) {
                    if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f454d6d))) ) ) {
                      result[0] += 0.99983119513842;
                      result[1] += 0.00016880486158001352;
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
                if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f38f638))) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f47202b))) ) ) {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e822724))) ) ) {
                  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f63bfa7))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
                      result[0] += 0.7543859649122807;
                      result[1] += 0.24561403508771928;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e75a17a))) ) ) {
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
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f38241d))) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f48c7a2))) ) ) {
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
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb859e2))) ) ) {
            if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb26f7e))) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e913728))) ) ) {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d53bf14))) ) ) {
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
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1ccd5a))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee66ce4))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb28b60))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
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
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f36f7fc))) ) ) {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae9701c))) ) ) {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
                      result[0] += 0.30158730158730157;
                      result[1] += 0.6984126984126984;
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
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3ea004c8))) ) ) {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e978702))) ) ) {
                      result[0] += 0.9968895800933126;
                      result[1] += 0.003110419906687403;
                    } else {
                      result[0] += 0.9622695035460993;
                      result[1] += 0.03773049645390071;
                    }
                  }
                } else {
                  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6347b6))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6d22c4))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.8870431893687708;
                      result[1] += 0.11295681063122924;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6b96ce))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9823321554770318;
                      result[1] += 0.0176678445229682;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6e36d0))) ) ) {
              if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6383af))) ) ) {
                if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f44cf16))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e7e2032))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                      result[0] += 0.45161290322580644;
                      result[1] += 0.5483870967741935;
                    } else {
                      result[0] += 0.011764705882352941;
                      result[1] += 0.9882352941176471;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb6df49))) ) ) {
                      result[0] += 0.4077669902912621;
                      result[1] += 0.5922330097087378;
                    } else {
                      result[0] += 0.038461538461538464;
                      result[1] += 0.9615384615384616;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f48c3c8))) ) ) {
                      result[0] += 0.32558139534883723;
                      result[1] += 0.6744186046511628;
                    } else {
                      result[0] += 0.047619047619047616;
                      result[1] += 0.9523809523809523;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8603ba))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9629629629629629;
                      result[1] += 0.037037037037037035;
                    }
                  }
                }
              } else {
                if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f49b983))) ) ) {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                      result[0] += 0.3880597014925373;
                      result[1] += 0.6119402985074627;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e83b31a))) ) ) {
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
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                    if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3f68bba0))) ) ) {
                      result[0] += 0.10869565217391304;
                      result[1] += 0.8913043478260869;
                    } else {
                      result[0] += 0.015873015873015872;
                      result[1] += 0.9841269841269841;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e09da8c))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                      result[0] += 0.9975728155339806;
                      result[1] += 0.0024271844660194173;
                    } else {
                      result[0] += 0.4276315789473684;
                      result[1] += 0.5723684210526315;
                    }
                  } else {
                    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e02ce16))) ) ) {
                      result[0] += 0.5789473684210527;
                      result[1] += 0.42105263157894735;
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e77f2fc))) ) ) {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
              if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f44cf16))) ) ) {
                if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f4328b4))) ) ) {
                  if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f42f15c))) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                } else {
                  if ( ( !(data[73].missing != -1) || ((*( ((int*)(data)) + 73 ))<=((int)(0x3f78209e))) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[69].missing != -1) || ((*( ((int*)(data)) + 69 ))<=((int)(0x3f52a19c))) ) ) {
                      result[0] += 0.3333333333333333;
                      result[1] += 0.6666666666666666;
                    } else {
                      result[0] += 0.9473684210526315;
                      result[1] += 0.05263157894736842;
                    }
                  }
                }
              } else {
                if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f37ac08))) ) ) {
                  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f4fb7f0))) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f4474ca))) ) ) {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e96d05a))) ) ) {
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
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4514c0))) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f4f293b))) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              } else {
                if ( ( !(data[73].missing != -1) || ((*( ((int*)(data)) + 73 ))<=((int)(0x3f7977ef))) ) ) {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ebb0926))) ) ) {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e09311e))) ) ) {
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
            }
          } else {
            if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec5d64a))) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d53000))) ) ) {
                if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f2f8954))) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e939ec0))) ) ) {
                    if ( ( !(data[66].missing != -1) || ((*( ((int*)(data)) + 66 ))<=((int)(0x3671a000))) ) ) {
                      result[0] += 0.9992770648834267;
                      result[1] += 0.0007229351165732876;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f36bc04))) ) ) {
                      result[0] += 0.9982411569278874;
                      result[1] += 0.0017588430721125659;
                    } else {
                      result[0] += 0.9999701884092536;
                      result[1] += 2.9811590746482232e-05;
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
  if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3f180c))) ) ) {
    if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec8b260))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
        if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec689ae))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e072ceb))) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f494192))) ) ) {
                  if ( ( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e380c))) ) ) {
                    if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
                      result[0] += 0.9571428571428572;
                      result[1] += 0.04285714285714286;
                    } else {
                      result[0] += 0.583732057416268;
                      result[1] += 0.41626794258373206;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de76e))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9210875331564987;
                      result[1] += 0.07891246684350132;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6b96ce))) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f377010))) ) ) {
                      result[0] += 0.5;
                      result[1] += 0.5;
                    } else {
                      result[0] += 0.9930345245305875;
                      result[1] += 0.006965475469412477;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6383af))) ) ) {
                  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec1232a))) ) ) {
                      result[0] += 0.20603015075376885;
                      result[1] += 0.7939698492462312;
                    } else {
                      result[0] += 0.5666666666666667;
                      result[1] += 0.43333333333333335;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec1232a))) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e933886))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.7777777777777778;
                      result[1] += 0.2222222222222222;
                    }
                  }
                }
              } else {
                if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f48bf00))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                    if ( ( !(data[68].missing != -1) || ((*( ((int*)(data)) + 68 ))<=((int)(0x3f51df8c))) ) ) {
                      result[0] += 0.26557377049180325;
                      result[1] += 0.7344262295081967;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.008756567425569177;
                      result[1] += 0.9912434325744308;
                    }
                  }
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3f68440a))) ) ) {
                      result[0] += 0.75;
                      result[1] += 0.25;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f2ca900))) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e81619a))) ) ) {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec2bc12))) ) ) {
                    if ( ( !(data[69].missing != -1) || ((*( ((int*)(data)) + 69 ))<=((int)(0x3f5505c4))) ) ) {
                      result[0] += 0.9973821989528796;
                      result[1] += 0.002617801047120419;
                    } else {
                      result[0] += 0.625;
                      result[1] += 0.375;
                    }
                  } else {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9666666666666667;
                      result[1] += 0.03333333333333333;
                    }
                  }
                } else {
                  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0d800c))) ) ) {
                    if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f4213f8))) ) ) {
                      result[0] += 0.9962121212121212;
                      result[1] += 0.003787878787878788;
                    } else {
                      result[0] += 0.9997731307950286;
                      result[1] += 0.00022686920497139474;
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e55c93f))) ) ) {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e95378d))) ) ) {
              if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee58c9f))) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee66ce4))) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0dcf64))) ) ) {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e9199ed))) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d4b554a))) ) ) {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
              if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3aea9952))) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d53000))) ) ) {
                  if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f50ec1a))) ) ) {
                    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f52bb8a))) ) ) {
                      result[0] += 0.9996395819150214;
                      result[1] += 0.00036041808497857517;
                    } else {
                      result[0] += 0.8125;
                      result[1] += 0.1875;
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
            if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f37ac08))) ) ) {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e777a00))) ) ) {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1072de))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.8333333333333334;
                      result[1] += 0.16666666666666666;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.325;
                      result[1] += 0.675;
                    }
                  }
                } else {
                  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e822724))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ece5562))) ) ) {
                      result[0] += 0.9777777777777777;
                      result[1] += 0.022222222222222223;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec056d2))) ) ) {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e991248))) ) ) {
                      result[0] += 0.8370786516853933;
                      result[1] += 0.16292134831460675;
                    } else {
                      result[0] += 0.47692307692307695;
                      result[1] += 0.5230769230769231;
                    }
                  } else {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f48c3c8))) ) ) {
                      result[0] += 0.07894736842105263;
                      result[1] += 0.9210526315789473;
                    } else {
                      result[0] += 0.7857142857142857;
                      result[1] += 0.21428571428571427;
                    }
                  }
                } else {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec1232a))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                      result[0] += 0.5287356321839081;
                      result[1] += 0.47126436781609193;
                    } else {
                      result[0] += 0.07692307692307693;
                      result[1] += 0.9230769230769231;
                    }
                  } else {
                    if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f373418))) ) ) {
                      result[0] += 0.015822784810126583;
                      result[1] += 0.9841772151898734;
                    } else {
                      result[0] += 0.44785276073619634;
                      result[1] += 0.5521472392638037;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb621fc))) ) ) {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea06598))) ) ) {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f490007))) ) ) {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3ea0ca6a))) ) ) {
                      result[0] += 0.9253731343283582;
                      result[1] += 0.07462686567164178;
                    } else {
                      result[0] += 0.38461538461538464;
                      result[1] += 0.6153846153846154;
                    }
                  } else {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed23173))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.25;
                      result[1] += 0.75;
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
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d33cc3e))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[75].missing != -1) || ((*( ((int*)(data)) + 75 ))<=((int)(0x38850f80))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e88553c))) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb1c5be))) ) ) {
                if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3af0e678))) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f4ee835))) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e959dc7))) ) ) {
                      result[0] += 0.3333333333333333;
                      result[1] += 0.6666666666666666;
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
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e138919))) ) ) {
        if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb4dc48))) ) ) {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9cee3c))) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[70].missing != -1) || ((*( ((int*)(data)) + 70 ))<=((int)(0x3f6e54ac))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9285714285714286;
                      result[1] += 0.07142857142857142;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e797ef2))) ) ) {
                    if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f4c4920))) ) ) {
                      result[0] += 0.9754339993449066;
                      result[1] += 0.024566000655093352;
                    } else {
                      result[0] += 0.8307692307692308;
                      result[1] += 0.16923076923076924;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.2842809364548495;
                      result[1] += 0.7157190635451505;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea2caf8))) ) ) {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e96d05a))) ) ) {
                      result[0] += 0.616504854368932;
                      result[1] += 0.38349514563106796;
                    } else {
                      result[0] += 0.9924906132665833;
                      result[1] += 0.007509386733416771;
                    }
                  } else {
                    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                      result[0] += 0.13008130081300814;
                      result[1] += 0.8699186991869918;
                    } else {
                      result[0] += 0.7482517482517482;
                      result[1] += 0.2517482517482518;
                    }
                  }
                } else {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e991248))) ) ) {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
                      result[0] += 0.31640625;
                      result[1] += 0.68359375;
                    } else {
                      result[0] += 0.09836065573770492;
                      result[1] += 0.9016393442622951;
                    }
                  } else {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea463a6))) ) ) {
                      result[0] += 0.014516129032258065;
                      result[1] += 0.9854838709677419;
                    } else {
                      result[0] += 0.08695652173913043;
                      result[1] += 0.9130434782608695;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f420e3a))) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e657868))) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e75a17a))) ) ) {
                      result[0] += 0.8351648351648352;
                      result[1] += 0.16483516483516483;
                    } else {
                      result[0] += 0.9997639003659544;
                      result[1] += 0.00023609963404556722;
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
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e11fd22))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f49788c))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
                if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[51].missing != -1) || ((*( ((int*)(data)) + 51 ))<=((int)(0x3f400d42))) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f378e1e))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9acea2))) ) ) {
                  if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f45e5bc))) ) ) {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ebfaabe))) ) ) {
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
        } else {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed04c18))) ) ) {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4fd360))) ) ) {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f439636))) ) ) {
                if ( ( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e380c))) ) ) {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e07dfc0))) ) ) {
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
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e068e63))) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f2ee164))) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e932573))) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42e172))) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e95361a))) ) ) {
                      result[0] += 0.9861111111111112;
                      result[1] += 0.013888888888888888;
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
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
      if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec5d64a))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f393ce4))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
            if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec2bc12))) ) ) {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e8e669f))) ) ) {
                    if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee76429))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e072ceb))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.8613138686131386;
                      result[1] += 0.1386861313868613;
                    }
                  }
                } else {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45783c))) ) ) {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ebdf190))) ) ) {
                      result[0] += 0.9996979764421625;
                      result[1] += 0.0003020235578375113;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e10712c))) ) ) {
                      result[0] += 0.9886363636363636;
                      result[1] += 0.011363636363636364;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7288c2))) ) ) {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb416a6))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.9888957433682912;
                      result[1] += 0.011104256631708822;
                    }
                  } else {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb621fc))) ) ) {
                      result[0] += 0.5111111111111111;
                      result[1] += 0.4888888888888889;
                    } else {
                      result[0] += 0.9620689655172414;
                      result[1] += 0.03793103448275862;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6ad143))) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e4710))) ) ) {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb621fc))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e81619a))) ) ) {
                      result[0] += 0.375;
                      result[1] += 0.625;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4ed78))) ) ) {
                    if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d8aa9f0))) ) ) {
                      result[0] += 0.8267326732673267;
                      result[1] += 0.17326732673267325;
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
            if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edb6efb))) ) ) {
              if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e96d05a))) ) ) {
                      result[0] += 0.9981412639405205;
                      result[1] += 0.0018587360594795538;
                    } else {
                      result[0] += 0.9748743718592965;
                      result[1] += 0.02512562814070352;
                    }
                  } else {
                    if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.937192118226601;
                      result[1] += 0.06280788177339902;
                    }
                  }
                }
              } else {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e68f3be))) ) ) {
                      result[0] += 0.8636363636363636;
                      result[1] += 0.13636363636363635;
                    } else {
                      result[0] += 0.6372549019607843;
                      result[1] += 0.3627450980392157;
                    }
                  }
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                      result[0] += 0.9199655765920827;
                      result[1] += 0.08003442340791739;
                    } else {
                      result[0] += 0.2972972972972973;
                      result[1] += 0.7027027027027027;
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
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
        if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee2f0e5))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45783c))) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e182b3a))) ) ) {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e675ad4))) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec2bc12))) ) ) {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e08b800))) ) ) {
                    if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3ef526))) ) ) {
                      result[0] += 0.9873417721518988;
                      result[1] += 0.012658227848101266;
                    } else {
                      result[0] += 0.6666666666666666;
                      result[1] += 0.3333333333333333;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809b9f))) ) ) {
                      result[0] += 0.25;
                      result[1] += 0.75;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e08b800))) ) ) {
                      result[0] += 0.7769230769230769;
                      result[1] += 0.2230769230769231;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e772d70))) ) ) {
                if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec056d2))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                      result[0] += 0.9715447154471545;
                      result[1] += 0.028455284552845527;
                    } else {
                      result[0] += 0.5631067961165048;
                      result[1] += 0.4368932038834951;
                    }
                  } else {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f49b983))) ) ) {
                      result[0] += 0.3333333333333333;
                      result[1] += 0.6666666666666666;
                    } else {
                      result[0] += 0.9130434782608695;
                      result[1] += 0.08695652173913043;
                    }
                  }
                }
              } else {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e9f9924))) ) ) {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec38888))) ) ) {
                    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f4dcf50))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9986225895316805;
                      result[1] += 0.0013774104683195593;
                    }
                  } else {
                    if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed03ff6))) ) ) {
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
            if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f5308af))) ) ) {
              if ( ( !(data[66].missing != -1) || ((*( ((int*)(data)) + 66 ))<=((int)(0x3671a000))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f453bfc))) ) ) {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3eb72cf8))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.2;
                      result[1] += 0.8;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[70].missing != -1) || ((*( ((int*)(data)) + 70 ))<=((int)(0x3f6e54ac))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e932573))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1b4246))) ) ) {
                      result[0] += 0.9971570717839374;
                      result[1] += 0.0028429282160625444;
                    } else {
                      result[0] += 0.9998756579765408;
                      result[1] += 0.00012434202345919509;
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
    }
  }
  if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
    if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f475a41))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f493654))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f378e1e))) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb7f29b))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea2caf8))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f422cb6))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e919a5e))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f3fd22c))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec689ae))) ) ) {
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
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e913728))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec2bc12))) ) ) {
          if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ebe8a28))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f513ce0))) ) ) {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
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
      if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec689ae))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
                if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f3748c8))) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb1c5be))) ) ) {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eaf91cf))) ) ) {
                      result[0] += 0.990301724137931;
                      result[1] += 0.009698275862068966;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e7bcf92))) ) ) {
                      result[0] += 0.9876543209876543;
                      result[1] += 0.012345679012345678;
                    } else {
                      result[0] += 0.9998083997547517;
                      result[1] += 0.00019160024524831392;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e7d5b88))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9484536082474226;
                      result[1] += 0.05154639175257732;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7038ee))) ) ) {
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
          } else {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f47d2be))) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e96d05a))) ) ) {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed0a64a))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.8721037998146431;
                      result[1] += 0.1278962001853568;
                    }
                  } else {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
                      result[0] += 0.9386973180076629;
                      result[1] += 0.06130268199233716;
                    } else {
                      result[0] += 0.9973123440199655;
                      result[1] += 0.0026876559800345554;
                    }
                  }
                }
              } else {
                if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edaa3bc))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
                    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0d690c))) ) ) {
                      result[0] += 0.5860927152317881;
                      result[1] += 0.4139072847682119;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9080459770114943;
                      result[1] += 0.09195402298850575;
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
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8faba2))) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e10712c))) ) ) {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ebf8a7a))) ) ) {
                    if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
                      result[0] += 0.125;
                      result[1] += 0.875;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                } else {
                  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e946b36))) ) ) {
                      result[0] += 0.9690036900369003;
                      result[1] += 0.03099630996309963;
                    } else {
                      result[0] += 0.7371216144450345;
                      result[1] += 0.26287838555496545;
                    }
                  } else {
                    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0d4a20))) ) ) {
                      result[0] += 0.9811728395061728;
                      result[1] += 0.018827160493827162;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e86042b))) ) ) {
                  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
                      result[0] += 0.7288135593220338;
                      result[1] += 0.2711864406779661;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                } else {
                  if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x37037800))) ) ) {
                    if ( ( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d52000))) ) ) {
                      result[0] += 0.9999651677174405;
                      result[1] += 3.483228255947612e-05;
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
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1b4246))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f431db8))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
        if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f2d52cb))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2be9))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f37e825))) ) ) {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e8cd4fd))) ) ) {
                if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee78222))) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec1ef9e))) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62578d))) ) ) {
                    if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee78222))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee78222))) ) ) {
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
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45783c))) ) ) {
                if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e72bbd2))) ) ) {
                  if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f439766))) ) ) {
                    if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f4653b0))) ) ) {
                      result[0] += 0.8181818181818182;
                      result[1] += 0.18181818181818182;
                    } else {
                      result[0] += 0.9942857142857143;
                      result[1] += 0.005714285714285714;
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
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec1232a))) ) ) {
                  if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6437bc))) ) ) {
                      result[0] += 0.9979757085020243;
                      result[1] += 0.0020242914979757085;
                    } else {
                      result[0] += 0.9130434782608695;
                      result[1] += 0.08695652173913043;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e872c7a))) ) ) {
                    if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f4a7947))) ) ) {
                      result[0] += 0.92;
                      result[1] += 0.08;
                    } else {
                      result[0] += 0.4367816091954023;
                      result[1] += 0.5632183908045977;
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
        if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e714cea))) ) ) {
                if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3fc622))) ) ) {
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
              if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec8b962))) ) ) {
                if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec056d2))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                      result[0] += 0.9933333333333333;
                      result[1] += 0.006666666666666667;
                    } else {
                      result[0] += 0.6569037656903766;
                      result[1] += 0.34309623430962344;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.2677165354330709;
                      result[1] += 0.7322834645669292;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e64a32c))) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f535b2c))) ) ) {
                      result[0] += 0.9986648865153538;
                      result[1] += 0.0013351134846461949;
                    } else {
                      result[0] += 0.9775280898876404;
                      result[1] += 0.02247191011235955;
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
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
            if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f494192))) ) ) {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea9fad8))) ) ) {
                if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f488d86))) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6d22c4))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.8313413014608234;
                      result[1] += 0.16865869853917662;
                    }
                  }
                }
              } else {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e65c1ea))) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb859e2))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
                      result[0] += 0.9113924050632911;
                      result[1] += 0.08860759493670886;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9f3f24))) ) ) {
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
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea6c904))) ) ) {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e08b800))) ) ) {
                    if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed1c0bb))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.7797619047619048;
                      result[1] += 0.22023809523809523;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e913962))) ) ) {
                      result[0] += 0.5;
                      result[1] += 0.5;
                    } else {
                      result[0] += 0.9847560975609756;
                      result[1] += 0.01524390243902439;
                    }
                  }
                } else {
                  if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4514c0))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6568b6))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9987775061124694;
                      result[1] += 0.0012224938875305623;
                    }
                  } else {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9eccae))) ) ) {
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
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb859e2))) ) ) {
              if ( ( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e380c))) ) ) {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec386ec))) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6383af))) ) ) {
                      result[0] += 0.07692307692307693;
                      result[1] += 0.9230769230769231;
                    } else {
                      result[0] += 0.5310734463276836;
                      result[1] += 0.4689265536723164;
                    }
                  }
                }
              } else {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9e003a))) ) ) {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f497d8a))) ) ) {
                      result[0] += 0.2391304347826087;
                      result[1] += 0.7608695652173914;
                    } else {
                      result[0] += 0.9318181818181818;
                      result[1] += 0.06818181818181818;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.5434782608695652;
                      result[1] += 0.45652173913043476;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 0.9908256880733946;
                      result[1] += 0.009174311926605505;
                    } else {
                      result[0] += 0.4634146341463415;
                      result[1] += 0.5365853658536586;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                      result[0] += 0.2024793388429752;
                      result[1] += 0.7975206611570248;
                    } else {
                      result[0] += 0.0005541920671364104;
                      result[1] += 0.9994458079328636;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb621fc))) ) ) {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
                  if ( ( !(data[70].missing != -1) || ((*( ((int*)(data)) + 70 ))<=((int)(0x3f720ffc))) ) ) {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb5a1ec))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.2916666666666667;
                      result[1] += 0.7083333333333334;
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
                if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3aea9952))) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e988e00))) ) ) {
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
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f493c46))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f2ec374))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7b0a06))) ) ) {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
                if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d728d94))) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e8cb9))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                      result[0] += 0.9541284403669725;
                      result[1] += 0.045871559633027525;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                      result[0] += 0.8;
                      result[1] += 0.2;
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
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
                if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f504bde))) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              } else {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e939ec0))) ) ) {
                  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f53bcbe))) ) ) {
                    if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea895f6))) ) ) {
                      result[0] += 0.9897959183673469;
                      result[1] += 0.01020408163265306;
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
      }
    } else {
      if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
        if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fe908))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
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
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e21705c))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f49f10a))) ) ) {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e2046fd))) ) ) {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e9576f4))) ) ) {
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
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eace390))) ) ) {
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
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1d92e6))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0c7d46))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
        if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f2eff53))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3ea004c8))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9877981142540211;
                      result[1] += 0.012201885745978924;
                    }
                  } else {
                    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
                      result[0] += 0.9371428571428572;
                      result[1] += 0.06285714285714286;
                    } else {
                      result[0] += 0.5087719298245614;
                      result[1] += 0.49122807017543857;
                    }
                  }
                } else {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f494192))) ) ) {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.6091370558375635;
                      result[1] += 0.39086294416243655;
                    }
                  } else {
                    if ( ( !(data[64].missing != -1) || ((*( ((int*)(data)) + 64 ))<=((int)(0x3f35a2c5))) ) ) {
                      result[0] += 0.9714285714285714;
                      result[1] += 0.02857142857142857;
                    } else {
                      result[0] += 0.5;
                      result[1] += 0.5;
                    }
                  }
                }
              } else {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f49f10a))) ) ) {
                      result[0] += 0.9064124783362218;
                      result[1] += 0.09358752166377816;
                    } else {
                      result[0] += 0.6666666666666666;
                      result[1] += 0.3333333333333333;
                    }
                  } else {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea1fe82))) ) ) {
                      result[0] += 0.07725321888412018;
                      result[1] += 0.9227467811158798;
                    } else {
                      result[0] += 0.5116279069767442;
                      result[1] += 0.4883720930232558;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e03eae8))) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0f1a80))) ) ) {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7421ac))) ) ) {
                    if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee74630))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9997326632091108;
                      result[1] += 0.0002673367908891622;
                    }
                  } else {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
                      result[0] += 0.9996563573883162;
                      result[1] += 0.0003436426116838488;
                    } else {
                      result[0] += 0.9608247422680413;
                      result[1] += 0.03917525773195876;
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
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8dbd57))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
            if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed547e2))) ) ) {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9bc5c8))) ) ) {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                    if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e4710))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9371428571428572;
                      result[1] += 0.06285714285714286;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.2857142857142857;
                      result[1] += 0.7142857142857143;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f37e825))) ) ) {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea06598))) ) ) {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb5a1ec))) ) ) {
                      result[0] += 0.8571428571428571;
                      result[1] += 0.14285714285714285;
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
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ebebe06))) ) ) {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.6086956521739131;
                      result[1] += 0.391304347826087;
                    }
                  }
                } else {
                  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.6153846153846154;
                      result[1] += 0.38461538461538464;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e55c93f))) ) ) {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1072de))) ) ) {
                if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6383af))) ) ) {
                  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                      result[0] += 0.8811881188118812;
                      result[1] += 0.1188118811881188;
                    } else {
                      result[0] += 0.23809523809523808;
                      result[1] += 0.7619047619047619;
                    }
                  }
                } else {
                  if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f377010))) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              }
            } else {
              if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f373418))) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                      result[0] += 0.2526595744680851;
                      result[1] += 0.7473404255319149;
                    } else {
                      result[0] += 0.6091954022988506;
                      result[1] += 0.39080459770114945;
                    }
                  } else {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
                      result[0] += 0.9514563106796117;
                      result[1] += 0.04854368932038835;
                    } else {
                      result[0] += 0.5484662576687117;
                      result[1] += 0.45153374233128835;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e88553b))) ) ) {
              if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d7c1680))) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e81870c))) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              }
            } else {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eabc76e))) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea895f6))) ) ) {
                  if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f45dc42))) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb621fc))) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.9988021082894106;
                      result[1] += 0.0011978917105893627;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec52154))) ) ) {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
              if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee76429))) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb621fc))) ) ) {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec056d2))) ) ) {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9e7982))) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.8571428571428571;
                      result[1] += 0.14285714285714285;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e08b800))) ) ) {
                      result[0] += 0.8161764705882353;
                      result[1] += 0.18382352941176472;
                    } else {
                      result[0] += 0.989247311827957;
                      result[1] += 0.010752688172043012;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e138919))) ) ) {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                    if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                      result[0] += 0.9848484848484849;
                      result[1] += 0.015151515151515152;
                    } else {
                      result[0] += 0.21428571428571427;
                      result[1] += 0.7857142857142857;
                    }
                  } else {
                    if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
                      result[0] += 0.9933110367892977;
                      result[1] += 0.006688963210702341;
                    } else {
                      result[0] += 0.8518518518518519;
                      result[1] += 0.14814814814814814;
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb32cca))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 15;
  result[1] /= 15;
  
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
